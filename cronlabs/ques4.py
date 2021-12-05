
"""
ques 4 - Given an array A[] of N positive integers which can contain integers from 0 to N where elements can be repeated or can be absent from the array. Your task is to count frequency of all elements from 1 to N.
input- 2033445
output 01221


"""


N = int(input())

arr = list(map(int,input().split(" ")))

dict1 = {}


for i in arr:
    if i not in dict1:
        dict1[i] = 1
    else:
        dict1[i] += 1

ans = []
for i in range(1,N+1):
    if i not in dict1:
        ans.append(0)
    else:
        ans.append(dict1[i])
print(ans)
