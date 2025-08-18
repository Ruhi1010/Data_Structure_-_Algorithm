def selection_sort(arr):
    n = len(arr)
    for i in range(n):
        min_index = i  # Assume the current index is the minimum
        for j in range(i + 1, n):
            if arr[j] < arr[min_index]:
                min_index = j  # Update the minimum index if a smaller value is found
        # Swap the found minimum element with the first element of the unsorted part
        arr[i], arr[min_index] = arr[min_index], arr[i]

arr = []  
n = int(input("Enter the number of elements in the list: "))
for i in range(n):
    element = int(input(f"Enter element {i + 1}: "))
    arr.append(element) 
print("Original array:", arr)

selection_sort(arr)
print("Sorted array:", arr)
