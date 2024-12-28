def insertion_sort(arr):
    for i in range(1, len(arr)):
        key = arr[i]
        j = i - 1
        while j >= 0 and key < arr[j]:
            arr[j + 1] = arr[j]
            j -= 1
        arr[j + 1] = key

def linear_search(arr, target):
    for i in range(len(arr)):
        if arr[i] == target:
            return i
    return -1

number = []
i = 0
while True:
    number.append(int(input(f"Enter number #{i + 1} (enter 0 to stop): ")))
    if number[-1] == 0:
        break
    i += 1
number.pop()

print('\nUnsorted List: ', number)
    
insertion_sort(number)
print('Sorted List: ', number)
    
target_number = int(input("\nEnter a number to search: "))
result = linear_search(number, target_number)
    
if result != -1:
    print(f'{target_number} found at index {result} in the sorted list.')
else:
    print(f'{target_number} not found in the sorted list.')