string  = "eren"

n = len(string)
subtring_arr = []
for i in range(n):
    for j in range(i+1,n+1):
        subtring_arr.append(string[i:j])
subtring_arr.sort()

dict1 = {}
count = 1
for i in subtring_arr:
    if i not in dict1:
        dict1[i] = count
        count += 1

print(dict1)