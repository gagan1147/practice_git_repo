
"""
ques 6 - given an array arr[] convert it into zig zag fashion ie- a<b>c<d>e<f

input-4378621
output-3748261


"""

arr = list(map(int,input().split(" ")))
n = len(arr)
arr.sort()
start = 0
end = n-1

new_arr= []
while(start<=end):
    if(start == end):
        new_arr.append(arr[start])
        break
    new_arr.append(arr[start])
    new_arr.append(arr[end])
    start +=1
    end -=1
print(new_arr)