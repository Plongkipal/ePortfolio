#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

// Threshold for switching to Insertion Sort
const int THRESHOLD = 32;

void hybridSort(vector<int>& arr, int start, int end, int threshold) {
    if (end - start < threshold) {
        // Insertion Sort for small subarrays
        for (int i = start + 1; i <= end; ++i) {
            int key = arr[i];
            int j = i - 1;
            while (j >= start && arr[j] > key) {
                arr[j + 1] = arr[j];
                --j;
            }
            arr[j + 1] = key;
        }
    } else {
        int mid = start + (end - start) / 2;

        // Hybrid Merge-Insertion Sort for larger subarrays
        hybridSort(arr, start, mid, threshold);
        hybridSort(arr, mid + 1, end, threshold);

        // Merge function
        int n1 = mid - start + 1;
        int n2 = end - mid;
        vector<int> left(n1), right(n2);

        for (int i = 0; i < n1; ++i) {
            left[i] = arr[start + i];
        }
        for (int j = 0; j < n2; ++j) {
            right[j] = arr[mid + 1 + j];
        }

        int i = 0, j = 0, k = start;
        while (i < n1 && j < n2) {
            if (left[i] <= right[j]) {
                arr[k++] = left[i++];
            } else {
                arr[k++] = right[j++];
            }
        }

        while (i < n1) {
            arr[k++] = left[i++];
        }
        while (j < n2) {
            arr[k++] = right[j++];
        }
    }
}

int main() {
    const int SIZE = 1000000; // 1 million elements
    vector<int> arr(SIZE);

    // Initialize array with random integers
    srand(time(0)); // Seed for random number generation

    for (int i = 0; i < SIZE; ++i) {
        arr[i] = rand(); // Generating random integers
    }

    int threshold = THRESHOLD;

    clock_t start = clock(); // Start timing
    hybridSort(arr, 0, SIZE - 1, threshold);
    clock_t end = clock(); // End timing

    // Calculate elapsed time in milliseconds
    double elapsed_time = double(end - start) / CLOCKS_PER_SEC * 1000.0;

    cout << "Sorted " << SIZE << " elements using Hybrid Merge-Insertion Sort with threshold " << threshold << " in " << elapsed_time << " milliseconds." << endl;
    cout << endl;

    return 0;
}
