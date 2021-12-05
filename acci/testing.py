


def print_combinations(arr,l,r):
    if(l==r):
        print("".join(arr))
    else:
        for i in range(l,r):
            arr[l],arr[i] = arr[i],arr[l]
            print_combinations(arr,l+1,r)
            arr[l],arr[i] = arr[i],arr[l]


string = list(map(str,input()))

print_combinations(string,0,len(string))
