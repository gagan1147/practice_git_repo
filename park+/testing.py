arr = list(map(int,input().split(",")))
n = len(arr)
start = arr[0]
end = arr[n-1]
sum1= 0
for i in range(start,end+1):
    sum1 += i

sum2 = sum(arr)
print(sum1-sum2)