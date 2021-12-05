arr = [2,3,10,6,4,8,1]
"""
max_diff = 0
for i in range(len(arr)):
    for j in range(i+1,len(arr)):
        if arr[j]-arr[i]>max_diff and j>i:
            max_diff = arr[j]-arr[i]
print(max_diff)

"""

minVal = arr[0]
res = arr[1] - arr[0]

for j in range(1,len(arr)):
    res = max(arr[j]-minVal,res)
    minVal = min(arr[j],minVal)

print(res)