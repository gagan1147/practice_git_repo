

# def checkPallindrome(string)->bool:
#     start = 0
#     end = len(string) - 1
#     while(start<=end):
#         if(string[start]!=string[end]):
#             return False
#         start += 1
#         end -= 1
#     return True


# string = "aabbaa"

# if(checkPallindrome(string)):
#     print("YES")
# else:
#     print("NO")

# """
# 6   = 1+2+3
# """

# num = 28
# divisior_sum = 1
# for i in range(2,(num//2)+1):
#     if(num%i == 0):
#         divisior_sum += i
    
# if(divisior_sum == num):
#     print("YES")
# else:
#     print("NO")

# arr = [1,7,0,0,8,0,10,12,0,4]
# new_arr = []
# n = len(arr)
# for i in arr:
#     if i != 0:
#         new_arr.append(i)
# for i in range(0,n-len(new_arr)):
#     new_arr.append(0)
# print(new_arr.pop())
# new_arr.remove(8)
# print(new_arr)

# num = 12345
# count = 0
# while(num!=0):
#     count += 1
#     num = num//10

# print(count)


"""
   *
  ++
 ***
++++
"""


# rows = 4
# for i in range(1,rows+1):
#     if(i%2 == 1):
#         str = " "*(rows-i) + "*"*i
#     else:
#         str = " "*(rows-i) + "+"*i
#     print(str)

num = 3

for i in range(1,num+1):
    for j in range(i):
        print("*")
    print("*"*((2*i) +1))
    
    