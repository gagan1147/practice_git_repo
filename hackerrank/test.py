fruit = {"name":"gagan",'age':24,"gender":"m"}
my_keys = fruit.keys()


s = "AAAAACCCCCAAAAACCCCCCAAAAAGGGTTT"
#s = "AAAAAAAAAAA"
print(len(s))

list_set = set()
lis_set_ans = set()
lis_set_ans.add(s[:10])
n = len(s)
for i in range(0,n-10):
    if s[i:i+10] not in list_set:
        list_set.add(s[i:i+10])
    else:
        lis_set_ans.add(s[i:i+10])
print(list(lis_set_ans))
    