// C++ program to find equilibrium
// index of an array


// 1) Initialize leftsum  as 0
// 2) Get the total sum of the array as sum
// 3) Iterate through the array and for each index i, do following.
//     a)  Update sum to get the right sum.  
//            sum = sum - arr[i] 
//        // sum is now right sum
//     b) If leftsum is equal to sum, then return current index. 
//     c) leftsum = leftsum + arr[i] // update leftsum for next iteration.
// 4) return -1 // If we come out of loop without returning then
//              // there is no equilibrium index





#include <bits/stdc++.h>
using namespace std;

int equilibrium(int arr[], int n)
{
	int sum = 0; // initialize sum of whole array
	int leftsum = 0; // initialize leftsum

	/* Find sum of the whole array */
	for (int i = 0; i < n; ++i)
		sum += arr[i];

	for (int i = 0; i < n; ++i)
	{
		sum -= arr[i]; // sum is now right sum for index i

		if (leftsum == sum)
			return i;

		leftsum += arr[i];
	}

	/* If no equilibrium index found, then return 0 */
	return -1;
}

// Driver code
int main()
{
	int arr[] = { -7, 1, 5, 2, -4, 3, 0 };
	int arr_size = sizeof(arr) / sizeof(arr[0]);
	cout << "First equilibrium index is " << equilibrium(arr, arr_size);
	return 0;
}

// This is code is contributed by rathbhupendra
