"""
ques 3 - Given a String of length S, reverse the whole string without reversing the individual words in it. Words are separated by dots.
A.lazy.dog
dog.lazy.A


"""



list1 = input().split(".")
list1 = list1[::-1]

print(".".join(list1))