

string = ""
stack = []
res = []
for _ in range(int(input())):
    query = input().split(" ")
    if(query[0] == '1'):
        stack.append(string)
        txt = query[1]
        #print(txt)
        string= string + txt
    elif(query[0] == '2'):
        num = int(query[1]) * (-1)
        stack.append(string)
        string = string[:num]
    elif(query[0] == '3'):
        num = int(query[1])
        print(num)
        print(string[num-1])
        res.append(string[num-1])
    elif(query[0] == '4'):
        string = stack.pop()
    print(string)
print(*res,sep="\n")