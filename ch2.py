
array = [1,2,3,4,5,6,0]

print(array[0])

def smallest(arr):
    smallest = arr[0]
    smallest_Index = 0

    for i in range(1, len(arr)):
        if arr[i] < smallest:
            smallest = arr[i]
            smallest_Index = i
    return smallest_Index

print(smallest(array))

def selection_sort(arr):
    newArr = []

    for i in range(len(arr)):
        smallest1 = smallest(arr)
        newArr.append(arr.pop(smallest1))
    return newArr

print(selection_sort(array))