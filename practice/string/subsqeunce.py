
str1 = "GEEKSFORGEEKS"
str2 = "GSKRS"

i,j = 0,0
m = len(str1)
n = len(str2)

while(i<m and j<n):
    if str1[i] == str2[j]:
        j += 1
    i += 1

if(j==n):
    print("yes")
else:
    print("no")