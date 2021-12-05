
"""

ques 1 - You are given an array of 0s and 1s in random order. Modify the array to segregate 0s on left side and 1s on right side of the array.
input - 01000110
output -  00000111


"""

arr = list(map(int,input().split(" ")))

count_0 = 0
count_1 = 0
for i in arr:
    if i == 0:
        count_0 += 1
    else:
        count_1 += 1

new_arr = []
for i in range(count_0):
    new_arr.append(0)
for i in range(count_1):
    new_arr.append(1)
print(new_arr)