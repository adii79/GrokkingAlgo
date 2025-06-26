

# binary search

def binary_search(list1,item):
    list1 = sorted(list1)
    low = 0
    high = len(list1) - 1

    while low <= high:
        mid = (low + high) // 2 
        guess = list1[mid]
        if guess == item:
            return mid
        if guess > item:
            high = mid - 1
        else:
            low = mid + 1
    return None


my_list = [1, 3, 5, 7, 9] #pre sorted list

print(binary_search(my_list, 8))
print(binary_search(my_list, 4))
print(binary_search(my_list, 5))
print(binary_search(my_list, 7))
print(binary_search(my_list, 3))
print(binary_search(my_list, 1))
 
midd = 1+4//2
print(midd)


my_list = [3, 1, 7, 5, 9]
print(my_list)
print(sorted(my_list))


print(binary_search(my_list, 8))
print(binary_search(my_list, 4))
print(binary_search(my_list, 5))
print(binary_search(my_list, 7))
print(binary_search(my_list, 3))
print(binary_search(my_list, 1))


