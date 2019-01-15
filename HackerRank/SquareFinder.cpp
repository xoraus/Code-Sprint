#include <iostream>
using namespace std;

int main() {
	int i=1, n, sum=0;
	cout<<"Enter a positive integer: "; 
	cin>>n;

	while(i <=n) {
		sum += i*i;
		i++;
	}
	cout<<"The sum of the first "<< n << "squares is" << sum <<sum<<endl;
}
