def solve(arr,n,k):
	arr.sort()
	start=end=count=0
	while end<n:
		if arr[end]-arr[start]==k:
			count+=1
			start+=1
			end+=1
		elif arr[end]-arr[start]>k:
			start+=1
		else:
			end+=1
	return count
 
n,k = map(int,input().split(" "))
arr = list(map(int,input().split(" ")))
 
print(solve(arr, n, k))
 