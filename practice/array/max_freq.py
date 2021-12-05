arr = [1,1,1,1,1,2,2,2,2,2,3,3,3,3,3,3,3,3,3]

freq_arr = []
N = len(arr)
count = 0
for i in range(N-1):
    if arr[i] != arr[i+1]:
        freq_arr.append(i-count+1)
        count = i+1
if arr[-1] == arr[-2]:
    freq_arr.append(i-count+1)
print(freq_arr)