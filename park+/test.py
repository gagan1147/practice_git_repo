# num = int(input())

# count  = 1

# for i in range(num):
#     for j in range(i+1):
#         print(count,end=" ")
#         count +=1
#     print()

string = "My Name Is Gagan"
# lsit1 = string.split(" ")

print(" ".join(string.split(" ")[::-1]))