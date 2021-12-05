


def printsubarry(arr,start,end,n):

    if(end == n):
        return

    if start>end:
        return printsubarry(arr,0,end+1,n)
    else:
        print(arr[start:end+1])
        return printsubarry(arr,start+1,end,n)


printsubarry(["A","B","C"],0,0,3)