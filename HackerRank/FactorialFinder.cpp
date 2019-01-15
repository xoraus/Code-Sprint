#include <iostream>
using namespace std;

int main() {
	int n, f=1;
	cout<<"Enter a positive integer: "; cin>>n;
	cout<<n<<" factorial is ";

	do{
		f *=n;
		n--;

	}while(n>1);
	cout<<f<<endl;
}
