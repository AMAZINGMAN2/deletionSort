def print_array(arr):
    for num in arr:
        print(num, end=" ")
    print()

def deletion_sort(arr):
    arr.clear()

# Example usage
arr = [12, 45, 23, 9, 37, 18, 61, 2, 25, 31, 7, 16, 48, 29, 41, 5, 22, 35, 14, 27, 39, 3, 56, 11, 33, 20, 54, 8, 43, 28, 51, 6, 17, 38, 10, 34, 44, 26, 50, 15]

print("Original array:")
print_array(arr)

deletion_sort(arr)

print("After 'deletionsort':")
print_array(arr)
