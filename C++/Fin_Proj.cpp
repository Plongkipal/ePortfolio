#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

// Definition of a TreeNode for Binary Search Tree
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

// Definition of a Bucket for Bucket Sort
struct Bucket {
    vector<int> elements;
};

// Function to insert an element into the binary search tree
TreeNode* insert(TreeNode* root, int val) {
    if (!root) return new TreeNode(val);
    if (val < root->val) {
        root->left = insert(root->left, val);
    } else {
        root->right = insert(root->right, val);
    }
    return root;
}

// Function to perform in-order traversal of the binary search tree
void inOrderTraversal(TreeNode* root, vector<int>& sorted) {
    if (!root) return;
    inOrderTraversal(root->left, sorted);
    sorted.push_back(root->val);
    inOrderTraversal(root->right, sorted);
}

// Function to perform bucket sort
vector<int> bucketSort(vector<int>& nums) {
    int n = nums.size();
    int maxVal = *max_element(nums.begin(), nums.end());
    int minVal = *min_element(nums.begin(), nums.end());

    // Create buckets
    vector<Bucket> buckets(n);
    int bucketSize = ceil((maxVal - minVal + 1) / static_cast<double>(n));

    // Distribute elements into buckets
    for (int num : nums) {
        int bucketIdx = (num - minVal) / bucketSize;
        buckets[bucketIdx].elements.push_back(num);
    }

    // Sort each bucket using insertion sort
    for (Bucket& bucket : buckets) {
        sort(bucket.elements.begin(), bucket.elements.end());
    }

    // Concatenate elements from buckets
    vector<int> sorted;
    for (const Bucket& bucket : buckets) {
        sorted.insert(sorted.end(), bucket.elements.begin(), bucket.elements.end());
    }

    return sorted;
}

// Function to perform hybrid sort using bucket sort, pack sort, and binary search tree
vector<int> hybridSort(vector<int>& nums) {
    const int threshold = 10; // Threshold to switch from bucket sort to binary search tree

    if (nums.size() <= threshold) {
        // Use pack sort for small arrays
        sort(nums.begin(), nums.end());
        return nums;
    } else {
        // Use bucket sort for large arrays
        vector<int> sorted = bucketSort(nums);

        // Construct binary search tree from sorted array
        TreeNode* root = nullptr;
        for (int num : sorted) {
            root = insert(root, num);
        }

        // Perform in-order traversal to obtain final sorted array
        vector<int> finalSorted;
        inOrderTraversal(root, finalSorted);
        return finalSorted;
    }
}

int main() {
    vector<int> nums = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};

    cout << "Original array: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    // Perform hybrid sort
    vector<int> sorted = hybridSort(nums);

    cout << "Sorted array: ";
    for (int num : sorted) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
