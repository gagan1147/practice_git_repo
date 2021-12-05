


def super_digit(n,k):
    
    if(k==0):
        if int(n)<10:
            return n
        sum1 = 0
        for i in n:
            sum1 += int(i)
        return super_digit(str(sum1),0)
    else:
        return super_digit(n*k,0)
    #return  (int(n)*k % 9) or 9


n = '9875'
k = 4
    
print(super_digit(n,k))
    