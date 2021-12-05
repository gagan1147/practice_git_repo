str1 = "aaabddbbbaaa"


i = 0
j = len(str1)-1

while(i<=j):

    if str1[i] != str1[j]:
        break
    i+=1
    j-=1
if(i<j):
    print("not pallindrome")
else:
    print("pallindrome")