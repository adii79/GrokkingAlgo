# def recursion_sum(arr[]):
#     i = 0
#     if len(arr[]) == 0:
#         return 0;
#     return arr[i]+recursion_sum(arr[++i])


# def recursion_sum(arr,i=0):
#     if i == len(arr):           # base case: past the end
#         return 0
#     return arr[i] + recursion_sum(arr, i + 1)


def recursion_sum(arr):
    if 0 == len(arr):
        return 0
    return arr[0]+recursion_sum(arr[1:]) # everything after the 1 index


def binary_search(arr, target):
    if not arr:
        return -1  # Base case: empty list

    mid = len(arr) // 2

    if arr[mid] == target:
        return mid  # Base case: found

    if arr[mid] > target:
        return binary_search(arr[:mid])  # Recursive case: left half
    else:
        result = binary_search(arr[mid + 1:], target)  # Recursive case: right half
        return -1 if result == -1 else mid + 1 + result  # Adjust index




def quickSort(arr):
    if len(arr) < 2:
        return arr
    else: 
        pivot = arr[0]
        less = [i for i in arr[1:] if i < pivot ]
        greater = [i for i in arr[1:] if i>pivot ]
        return quickSort(less)+[pivot]+quickSort(greater)
    



print(recursion_sum([1,2,2,3]))

print(binary_search([1,2,4,5,66,77,89,99],89))
print(binary_search([1,2,4,5,66,77,89,99],99))


print(quickSort([3,1,2]))
arr = [9.8,5,4,6,42,5,3,6,3,4]
print(quickSort(arr))

