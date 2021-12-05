str1 = "aaabcdddbdbdabcabcgh"
str2 = "abc"

len_str1 = len(str1)
len_str2 = len(str2)

i,j = 0,0
index = []
while(i<len_str1):
    if str1[i] == str2[j]:
       j += 1
       i += 1 
    elif str1[i] != str2[j]:
        if j>0:
            i = i
        else:
            i += 1
        j=0
    if j==len_str2:
        index.append(i-len_str2)
        j = 0
        #i -= 1
    

print(index)  