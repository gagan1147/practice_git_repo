#arr = [3,4,2,8,10,5,1]
arr = [8,100,150,10,12,14,110]
n = len(arr)

table = [0]*n

table[0] = 1

for i in range(1,n):
    table[i] = 1
    for j in range(0,i):
        if arr[i]>arr[j]:
            table[i] = max(table[i],table[j]+1)


print(*table,end=" ")
print()
print(max(table))
table = [0]*n
table[0] = arr[0]


def _upper(arr,l,r,x):
   
    while(l<r):
        mid = l+ (r-l)//2
        if arr[mid] >=x:
            r = mid
        else:
            l = mid+1
        
    return r

l=1
for i in range(1,n):
    if arr[i]>table[l-1]:
        table[l] = arr[i]
        l += 1
        
    else:
        cindex = _upper(table,0,l-1,arr[i])
        table[cindex] = arr[i]
print(table,end=" ")