arr = [0,1,1,0,1,0,1,1,1,1,1,1,1,1,1,1]

count  = 0
count_arr = []
for i in range(len(arr)):
    if arr[i] == 1:
        count += 1
    elif count>=1 and arr[i]==0:
        count_arr.append(count)
        count = 0
    else:
        count = 0
if arr[-1] == 1:
    count_arr.append(count)
print(count_arr)