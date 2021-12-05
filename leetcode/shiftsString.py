arr = [27,27,27]

n = len(arr)
prefix_rev_sum = [0]*n
prefix_rev_sum[n-1] = arr[-1]
for i in range(n-2,-1,-1):
    prefix_rev_sum[i] = prefix_rev_sum[i+1] + arr[i]
string = "abc"
print(prefix_rev_sum)

j = 0
string_new = ""
for i in prefix_rev_sum:
    ascii_char = ord(string[j])+i - 97
    ascii_char = ascii_char%26
    print(ascii_char)
    string_new += chr(ascii_char+97)
    j+=1
print(string_new)