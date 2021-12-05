"""
ques 2 - reverse the string without changing the position of special characters
s@ttr$ing!
g@nir$tts!


"""

string = input()
list_string = []
for i in string:
    list_string.append(i)

start = 0
end = len(list_string)-1

a_ascii = ord("a")
z_ascii = ord("z")
# print(a_ascii,z_ascii)

while(start<=end):
    if ((ord(list_string[start]) >= a_ascii ) and (ord(list_string[start]) <= z_ascii )) and ((ord(list_string[end]) >= a_ascii ) and (ord(list_string[end]) <= z_ascii )):
        list_string[start],list_string[end] = list_string[end],list_string[start]
        start += 1
        end -= 1
    elif not ((ord(list_string[start]) >= a_ascii ) and (ord(list_string[start]) <= z_ascii)):
        start +=1
    elif not ((ord(list_string[end]) >= a_ascii ) and (ord(list_string[end]) <= z_ascii)):
        end -= 1

print("".join(list_string))