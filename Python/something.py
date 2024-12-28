class Node:
    def __init__(self, value):
        self.value = value
        self.left = None
        self.right = None

def insert(root, value):
    if root is None:
        return Node(value)
    if value < root.value:
        root.left = insert(root.left, value)
    else:
        root.right = insert(root.right, value)
    return root

def min_value_node(node):
    current = node
    while current.left is not None:
        current = current.left
    return current

def preorder_traversal(root):
    if root:
        print(root.value, end=" ")
        preorder_traversal(root.left)
        preorder_traversal(root.right)
                
def inorder_traversal(root):
    if root:
        inorder_traversal(root.left)
        print(root.value, end=" ")
        inorder_traversal(root.right)

def postorder_traversal(root):
    if root:
        postorder_traversal(root.left)
        postorder_traversal(root.right)
        print(root.value, end=" ")

def delete(root, value):
    if root is None:
        return root
    if value < root.value:
        root.left = delete(root.left, value)
    elif value > root.value:
        root.right = delete(root.right, value)
    else:
        if root.left is None:
            return root.right
        elif root.right is None:
            return root.left
        temp = min_value_node(root.right)
        root.value = temp.value
        root.right = delete(root.right, temp.value)
    return root

def search(root, value):
    if root is None or root.value == value:
        return root
    if root.value < value:
        return search(root.right, value)
    return search(root.left, value)

root = None

while True:
    print("Options:")
    print("1. Create BST")
    print("2. Show Traversals")
    print("3. Delete a number")
    print("4. Search a number")
    print("5. Exit")

    choice = input("What would you like to do? :>: ")
    
    if choice == '1':
        task1 = int(input("Enter a single number between 5 and 10 for the root of the tree: "))
        if 5 <= task1 <= 10:
            root = insert(root, task1)
            for i in range(9):
                value = int(input("Enter numbers 1-10: "))
                if 1 <= value <= 10:
                    insert(root, value)
                else:
                    print("Please enter a number between 1 and 10.")
        else:
            print("Please enter a number between 5 and 10 for the root.")
            
    elif choice == '2':
        if root is None:
            print("BST is empty.")
        else:
            print("Preorder Traversal:")
            preorder_traversal(root)
            print()
            
            print("\nInorder Traversal:")
            inorder_traversal(root)
            print()
            
            print("\nPostorder Traversal:")
            postorder_traversal(root)
            print()

    elif choice == '3':
        if root is None:
            print("BST is empty.")
        else:
            number = int(input("Enter the number to delete: "))
            root = delete(root, number)
            print(f"'{number}' deleted from the BST.")
    
    elif choice == '4':
        number = int(input("Enter the number to search: "))
        if search(root, number):
            print(f"'{number}' is present in the BST.")
        else:
            print(f"'{number}' is not present in the BST.")

    elif choice == '5':
        print("BYE :>")
        break