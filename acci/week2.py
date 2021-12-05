def solve(arr,n,time):
    sum1,count = 0,0
    j = -1
    for i in range(n):
        if sum1+arr[i]<=time:
            sum1 += arr[i]
        else:
            sum1 += arr[i]
            while(sum1>time):
                j += 1
                sum1 -= arr[j]
        count = max(count,i-j)
    return count
 
n,t = map(int,input().split(" "))
arr = list(map(int,input().split(" ")))
# print(arr)
print(solve(arr,n,t))