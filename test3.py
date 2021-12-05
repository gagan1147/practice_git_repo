arr = []
while(True):
    num = int(input())
    arr.append(num)
    if(len(arr)%2 == 1):
        print(arr[len(arr)//2])
    else:
        print(sum(arr)//len(arr))