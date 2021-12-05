str1 = "Welcome to Gfg"
str1_arr = []
for i in str1:
    str1_arr.append(i)

def reverse(str1,i,j):
    while(i<=j):
        str1[i],str1[j] = str1[j],str1[i]
        i+=1
        j-=1
    return str1
start = 0
for i in range(len(str1_arr)):

    if str1_arr[i] == ' ':
        reverse(str1_arr,start,i-1)
        start = i + 1
    if i == len(str1_arr)-1:
        reverse(str1_arr,start,len(str1_arr)-1)


print(str1_arr)
reverse(str1_arr,0,len(str1_arr)-1)

print("".join(str1_arr))