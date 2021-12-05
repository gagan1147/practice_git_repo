arr = [10,20,30]
profit = 0
for i in range(1,len(arr)):
    if arr[i-1]<arr[i]:
        profit  = profit + (arr[i]-arr[i-1])

print(profit)