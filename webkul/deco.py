
# def my_deco(func):
#     def inner():
#         print("deco1")
#         func()
#         print("deco2")
#     return inner



# @my_deco
# def print_hello():
#     print("hello,world")

# print_hello()


# num = 4

# for i in range(1,num+1):
#     if (i%2 == 1):
#         for j in range(i):
#             print(" "*(num),"*")
#         print(" "*(num-i) ,"+"*((2*i)+1))
#     else:
#         for j in range(i):
#             print(" "*(num),"+")
#         print(" "*(num-i) ,"*"*((2*i)+1))

num = 10

list1 = [x*x for x in range(1,num+1) if x%2 == 0 ]

print(list1)