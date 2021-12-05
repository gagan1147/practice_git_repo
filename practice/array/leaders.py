arr = [7,10,4,3,6,5,2]
leader_arr = []

leader = arr[len(arr)-1]
leader_arr.append(leader)
#leader_arr.append(leader)
i = len(arr)-1
while(i>-1):
    if arr[i-1]>arr[i] and arr[i-1]>leader:
        leader = arr[i-1]
        leader_arr.append(leader)
    i -= 1
print(leader_arr[::-1])
