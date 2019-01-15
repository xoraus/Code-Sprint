#include <iostream>
#include <cmath>
using namespace std;

int factorial(int x)
{
   if(x<0) return 0;
    int f=1;
    while(x>1)
        f*=x--;
    return f;
}

int main() {
    for(int i=-1; i<6; i++)
    {
        cout<<" "<<factorial(i);
        cout<<endl;
    }
}

