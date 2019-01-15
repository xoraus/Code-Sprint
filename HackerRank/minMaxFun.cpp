#include <iostream>
#include <cmath>
using namespace std;

int max(int x, int y)
{
    if (x>y) return x;
    else return y;
}

int main() {
    int a,b;
    do{
        cin>>a>>b;
        cout<<max(a,b)<<endl;
    }while(a!=0);
}

