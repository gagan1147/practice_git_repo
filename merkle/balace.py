def isBalanced(str1):
    # Write your code here
    c = 0
    arr = []
    for i in str1:
        if i == '(' or i == '{' or i == '[':
            arr.append(i)
        elif i == ')' or i == '}' or i == ']':
            if len(arr) == 0:
                return "NO"
            elif (arr[-1] == '(' and i == ')') or (arr[-1] == '[' and i == ']') or (arr[-1] == '{' and i == '}'):
                arr.pop()
            else:
                return "NO"
            

        #print(arr)
    if(len(arr) == 0):
        return "YES"
    return "NO"

print(isBalanced("{[()]}"))