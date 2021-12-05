arr = [1,8,30,-5,20,7]
k = 3
k_sum = 0
for i in range(k):
    k_sum = k_sum + arr[i]

k_sum_max = k_sum

for i in range(k,len(arr)):
    k_sum  = k_sum + arr[i] - arr[i-k]
    #print(k_sum)
    if k_sum>k_sum_max:
        k_sum_max = k_sum

print(k_sum_max)
