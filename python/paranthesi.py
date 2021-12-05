n=3
str1 = [""]*2*n
def check(str1,pos,open,close,n):

    if close == n:
        for i in str1:
            print(i,end="")
        print()
        return
    else:
        if(close<open):
            str1[pos] = "}"
            check(str1,pos+1,open,close+1,n)
        if(open<n):
            str1[pos] = "{"
            check(str1,pos+1,open+1,close,n)

check(str1,0,0,0,n)