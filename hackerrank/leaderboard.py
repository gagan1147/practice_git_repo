

arr = [2,4,2,6,1,7,8,9,2,1]
n = len(arr)
count  = 1
sum1 = 0

for i in range(n-1):
    if(arr[i]<arr[i+1]):
        count += 1
    else:
        count = 1
    sum1 += count
    print(count,end=" ")
print()
print(sum1)
