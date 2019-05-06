// CPP program to find missing 4 elements
// in an array of size N where elements are
// in range from 1 to N+4.
#include <bits/stdc++.h>
using namespace std;

// Finds missing 4 numbers in O(N) time
// and O(1) auxiliary space.
void missing4(int arr[], int n)
{
	// To keep track of 4 possible numbers
	// greater than length of input array
	// In Java, helper is automatically
	// initialized as 0.
	int helper[4];

	// Traverse the input array and mark
	// visited elements either by marking
	// them as negative in arr[] or in
	// helper[].
	for (int i = 0; i < n; i++) {
		int temp = abs(arr[i]);

		// If element is smaller than or
		// equal to length, mark its
		// presence in arr[]
		if (temp <= n)
			arr[temp - 1] *= (-1);

		// Mark presence in helper[]
		else if (temp > n) {
			if (temp % n != 0)
				helper[temp % n - 1] = -1;
			else
				helper[(temp % n) + n - 1] = -1;
		}
	}

	// Print all those elements whose presence
	// is not marked.
	for (int i = 0; i < n; i++)
		if (arr[i] > 0)
			cout << (i + 1) << " ";
	for (int i = 0; i < 4; i++)
		if (helper[i] >= 0)
			cout << (n + i + 1) << " ";

	return;
}

// Driver code
int main()
{
	int arr[] = { 1, 7, 3, 12, 5, 10, 8, 4, 9 };
	int n = sizeof(arr) / sizeof(arr[0]);
	missing4(arr, n);
	return 0;
}

// This code is contributed by Nikita Tiwari.
