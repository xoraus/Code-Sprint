#include<iostream>
using namespace std;

int getMissingNo(int a[], int n) {
    int x1 = a[0]; // for xor of all the elements in array
    int x2 = 1;     // for xor of all elements from 1 to n

    for (int i = 0; i < n;i++)
        x1 = x1 ^ a[i];

    for (int i = 0; i < n;i++)
        x2 = x2 ^ i;
}
int main(int argc, char const *argv[]) {
  int a[] = {1, 2, 4, 5, 6};
   int miss = getMissingNo(a, 5);
    cout << "Missing Number" << miss;
            return 0;
        }
