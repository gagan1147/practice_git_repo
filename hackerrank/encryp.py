
import math

#string  = "if man was meant to stay on the ground god would have given us roots"
string  = "haveaniceday"
string = string.replace(" ","")
length = len(string)    
res = []
floor,ceil = math.floor(math.sqrt(length)),math.ceil(math.sqrt(length))
for i in range(ceil):
    res.append(string[i::ceil])
print(res)

#print(*res,sep="\n")