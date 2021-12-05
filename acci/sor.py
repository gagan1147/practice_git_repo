

#arr = [1,2,3,4]


def merge_conv(arr,low,mid,high):
    
    temp = []
    i,j = low,mid+1
    count = 0
    while(i<=mid and j<=high):
        if(arr[i]>arr[j]):
            count  += mid - i + 1
            temp.append(arr[j])
            j += 1
        else:
            temp.append(arr[i])
            i += 1
    while i<=mid:
        temp.append(arr[i])
        i += 1
    while j<=high:
        temp.append(arr[j])
        j += 1
    arr[low:high+1] = temp
    return count



def count_inv(arr,low,high):
    if low>=high:
        return 0
    mid = low + (high-low)//2
    res = 0
    res += count_inv(arr,low,mid)
    res += count_inv(arr,mid+1,high)
    res += merge_conv(arr,low,mid,high)
    return res 
    


arr = [2,1,3,1,2]
print(count_inv(arr,0,len(arr)-1))