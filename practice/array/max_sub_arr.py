
arr = [-5,1,-2,3,-1,2,-2]

#kadane's Algorithm

max_so_far = -1
max_ending_here = 0

for i in range(len(arr)):
    max_ending_here += arr[i]
    if(max_so_far<max_ending_here):
        max_so_far =max_ending_here
    if(max_ending_here<0):
        max_ending_here = 0

print(max_so_far)

