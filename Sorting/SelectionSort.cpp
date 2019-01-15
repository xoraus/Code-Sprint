#include<iostream>

using namespace std;

int main()
{
    int size,min_idx,i,j;
    cout<<"Enter the Size of the array: ";
    cin>>size;
    int array_A[size];
    
    cout<<"Enter the elements of the array: \n";
    for(int i=0;i<size;i++)
    {
        cin>>array_A[i];
    }

    for (i = 0; i < size-1; i++)
    {
        
        min_idx = i;
        for (j = i+1; j < size; j++)
          if (array_A[j] < array_A[min_idx])
            min_idx = j;
 
        
        swap(array_A[min_idx], array_A[i]);
    } 
    
    cout<<"The Sorted: \n";
    for (int i = 0; i < size; i++)
    {
        
        cout<<array_A[i];
        cout<<"\n";
    }
     return 0;

 }
