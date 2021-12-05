arr = [1,2,3,5]
n = 5

sum_arr = sum(arr)
new_sum = 0
for i in range(1,n+1):
    new_sum += i

print("ans : " +str(new_sum-sum_arr))

arr = [10,5,3,4,3,5,2]

dict1 = {}

for i in arr:
    if i not in dict1:
        dict1[i] = 1  
    else:
        dict1[i] += 1  

for i in arr:
    if dict1[i] > 1:
        print(i)
        break



print(dict1)