#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int size;
	int i;
	cout<<"Enter the Size of the Array: ";
	cin>>size;
	int array[size];

	cout<<"Enter the Elements of the array: \n";
	for(int i=0;i<size;i++)
	{
		cin>>array[i];
	}

	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size-1;j++)
		{
			if(array[i] < array[j])
			swap(array[i],array[j]);
		}
		
	}
	


cout<<"the sorted elemsnts are: \n";
	for(int i=0;i<size;i++)
	{
		cout<<array[i];
		cout<<"\n";
	}


}
