#include <iostream>
using namespace std;

int main() {
	int n;
	cout<<"Enter positive intergers. Terminate with O.\n\t";
	cin>>n;
	while (n>0) {
		cout<<n<<"Cubed is"<<n*n*n<<"\n\t: ";
		cin>>n;
	}
}