

def angryProfessor(k, a):
    count_wrong_time,count_right_time = 0,0 
    for i in a:
        if i<=0:
            count_right_time = count_right_time + 1
        else:
             count_wrong_time = count_wrong_time + 1
    if k> count_right_time:
        return "YES"
    else:
        return "NO"
res  = []
for _ in range(int(input())):
    n,k = map(int,input().split(" "))
    arr = list(map(int,input().split(" ")))
    res.append(angryProfessor(k,arr))

print(*res,sep="\n")
