#include <iostream>
using namespace std;

struct Activity {
    int start, finish;
};

// a utility function that sort activities accorfing to the finish time

bool activityCompare(Activity s1, Activity s2) {

    return (s1.finish > s2.finish);
}

int printMaxActivities(Activity arr[], int n) {

    sort(arr, arr + n, activityCompare);

    // the first activity always is always selected

    // cout << "(" << arr[i].start << ", " << arr[i].finish << "), ";
    int i = 0;
    cout << arr[i].start << arr[i].finish;
    for (int j = 0; j < n;j++) {
        if(arr[j].start >= arr[i].finish) {
            cout << "(" << arr[j].start << ", "
              << arr[j].finish << "), ";
          i = j;
      }
    }
}

// Driver program
int main()
{
    Activitiy arr[] = {{5, 9}, {1, 2}, {3, 4}, {0, 6},{5, 7}, {8, 9}};
    int n = sizeof(arr)/sizeof(arr[0]);
    printMaxActivities(arr, n);
    return 0;
}