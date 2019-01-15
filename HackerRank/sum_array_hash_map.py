 # program to find if there are two elements with given sum
CONST_MAX = 100000

# function to check for the given sum in the array

def printPairs(arr, arr_size, sum):

	# initialie the hash map as 0

	binmap = [0] * 	CONST_MAX

	for i in range(0, arr_size):
		temp = sum - arr[i]
		if (temp >=0 and binmap[temp]==1):
			print('Pair with the given sum is', arr[i], 'and', temp)
		binmap[arr[i]] = 1

A = [1,4,45,6,10,-8]
n = 16

printPairs(A, len(A), n)
