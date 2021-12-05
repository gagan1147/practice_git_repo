arr = [1,2,3]

#TC is O(n^2)
def sub_arr(arr,start,end):
    if len(arr) == end:
        return

    else:
        if start>end:
            return sub_arr(arr,0,end+1)
        else:
            print(arr[start:end+1])
            return sub_arr(arr,start+1,end)

sub_arr(arr,0,0)