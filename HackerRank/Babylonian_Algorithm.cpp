#include <iostream>
#include <cmath>
using namespace std;

int main() {

    const double tolerance = 5e-8;
    double x = 2.0;
    while(fabs(x*x - 2.0) > tolerance) {
        cout<< x << endl;
        x = (x+2.0/x)/2.0; // average of x and 2/x;
    }
    cout<<" x = "<<x<< ", x*x = "<<x*x<<endl;
}
