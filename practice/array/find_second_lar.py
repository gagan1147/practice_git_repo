arr = [10,10,10]

max1 = max(arr)
max2 = -1
for i in arr:
    if max2<i and max2<max1 and i!=max1:
        max2 = i 

print(max2) 