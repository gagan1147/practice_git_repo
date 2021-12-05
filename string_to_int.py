def getMax(operations):
    # Write your code here
    stack_1 = []
    stack_max = []
    res = []
    n = len(operations)
    for i in range(0,n):
        query = operations[i]
        print(query)
        if query[0] == '1':
            data = int(query[2:])
            stack_1.append(data)
            if(len(stack_max) == 0):
                stack_max.append(data)
            else:
                if (data>stack_max[0]):
                    stack_max.append(data)
        elif(query[0] == '2'):
            data = stack_1.pop()
            if(data == stack_max[0]):
                stack_max.pop()
            
        elif(query[0] == '3'):
            res.append(stack_max[0])

    return stack_max

operations = ['1 97','2','1 20','2','1 26','1 20','2','3','1 91','3']

arr = getMax(operations)
print(arr)