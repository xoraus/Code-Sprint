#include <iostream>
using namespace std;

int printEgypt(int nr, int dr) {

    if(nr==0 || dr==0)
        return;

    if (dr%nr ==0) {
        cout << "1/" << dr / nr;
        return;
    }

    if(nr%dr ==0) {
        cout << nr / dr;
        return;
    }
}

int main() {
    int nr = 6, dr = 14;
    printEgypt(nr, dr);
    return 0;
}