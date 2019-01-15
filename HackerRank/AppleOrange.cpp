#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int larry=0,rob=0;
    int j,k,p,q;
    int s,t;
    cin>>s>>t;
    int a,b;
    cin>>a>>b;

    int m,n;
    cin>>m>>n;
    int ar;
    int br;

    for(int i=0;i<m;i++)
    {
        cin>>ar;
        if (ar < 0) {
            k = a + ar;
            if (k >= s && k <= t) {
                larry++;
            }
        }

        if (ar > 0) {
            j = ar + a;
            if (j >= s && j <= t) {
                larry++;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cin>>br;
        if (br < 0) {
            p = b + br;
            if (p >= s && p <= t) {
                rob++;
            }
        }

        if (br > 0) {
            q = b + br;
            if (q >= s && q <= t) {
                rob++;
            }
        }
    }
    cout<<larry<<endl;
    cout<<rob;

    return 0;
}
