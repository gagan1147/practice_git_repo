n = 10
queries = [[1,5,3],[4,8,7],[6,9,1]]

arr = [0]*(n)
print(arr)
for i in queries:
    for j in range(i[0]-1,i[1]):
        arr[j] += i[2]
print(max(arr))
arr = [0]*(n)
for i in queries:
    arr[i[0]-1] += i[2]
    if i[1]<=n:
        arr[i[1]] -= i[2]

res,rsum = 0,0
for i in range(n):
    rsum += arr[i]
    res  = max(res,rsum)

print(res)