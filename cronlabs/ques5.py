

"""
ques 5 - Given an array arr[] and a number K where K is smaller than size of array, the task is to find the Kth smallest element in the given array. It is given that all array elements are distinct.

761245
k=3
output= 4


"""



arr = list(map(int,input().split(" ")))
k = int(input())
arr.sort()
print(arr[k-1])