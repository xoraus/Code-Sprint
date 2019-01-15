#include <iostream>
using namespace std;

int main()
{
	int n,min, max;
	cout<<"Enter positive integers. Terminated by a input with 0: \n";
	cin>>n;

	for(min=max=n; n>0) {
		if (n<min) min=n;
		else if(n>max) max =n;
		cin>>n
	}

	cout<<"min = "<<min<<" and max = "<<max<<endl;
}
