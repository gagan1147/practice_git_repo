def parentDigit(num):
    if(len(num) == 1):
        return num
    n = int(num)
    sum1 = 0
    while(n!=0):
        sum1 = sum1 + n%10
        n = n//10
    #print(sum1)
    return parentDigit(str(sum1))
    
n,k = input().split(" ")
print(parentDigit(n))