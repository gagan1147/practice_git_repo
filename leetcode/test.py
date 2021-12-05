
s = "ab"
# list_s = s.split(" ")
# print(list_s)
s = s.rstrip()
s = s[::-1]
print(s)
n = len(s)
for i in range(n):
    if(s[i]==" "):
        print(i)
        break
a  = set()

