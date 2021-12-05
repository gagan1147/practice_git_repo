def convert(string,num):
    res = ""
    for i in string:
        res += chr(ord(i)+(num)%26)

    return res

#print(convert("a",57))

dict1 = {"user" :{"Rachel":{"UserID":1717171717,"Email": "rachel1999@gmail.com","friends": ["John", "Jeremy", "Emily"]}}}

dict1_new = {}
for keys,values in dict1.items():
    dict1_new = {}
    for key,value in values.items():
        dict1_new[keys] = key
        for key_inside,value_inside in value.items():
            dict1_new[key_inside] = value_inside

print(dict1_new)