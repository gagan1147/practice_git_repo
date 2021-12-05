arr = [1,2,3]
sub_arr= []
"""
#TC of program is O(n^2)
"""


def printSubarray(arr,start,end):
    if end == len(arr):
        return
    elif start>end:
        return printSubarray(arr,0,end+1)
    else:
        sub_arr.append(arr[start:end+1])
        return printSubarray(arr,start+1,end)

printSubarray(arr,0,0)
print(sub_arr)

res_or_arr = []

for i in sub_arr:
    res = 0
    if len(i) == 1:
        res_or_arr.append(i[0])
    else:
        for x in i:
            res = res | x
        res_or_arr.append(res)
print(res_or_arr)