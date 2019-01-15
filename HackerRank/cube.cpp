#include <iostream>
#include <cmath>
using namespace std;

int cube(int x)
{
    return x*x*x;
}

int main() {
    int n=1;
    while(n !=0)
    {
        cin>>n;
        cout<<cube(n)<<endl;
    }

}

