n = 3

str1 = [""]*2*n
#TC (2^n)
def solve(pos,open,close,n) -> int:
    
    
    if close == n:
        for i in str1:
            print(i,end="")
        print()

    else:
        if (close<open):
            str1[pos] = "}"
            solve(pos+1,open,close+1,n)
        if (open<n):
            str1[pos] = "{"
            solve(pos+1,open+1,close,n)

solve(0,0,0,n)