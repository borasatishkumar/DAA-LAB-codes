#include <iostream>
using namespace std;

int main() {
    int start[]  = {1, 2, 4, 6, 5, 8};
    int finish[] = {3, 5, 6, 7, 8, 9};
    int n = 6;

    // Sort activities by finish time (Simple Selection Sort)
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (finish[j] < finish[minIndex]) {
                minIndex = j;
            }
        }
        int tempF = finish[minIndex];
        finish[minIndex] = finish[i];
        finish[i] = tempF;

        int tempS = start[minIndex];
        start[minIndex] = start[i];
        start[i] = tempS;
    }

    // Select first activity
    cout << start[0] << " " << finish[0] << endl;
    int lastFinish = finish[0];

    // Select next activities using simple for loop
    for (int i = 1; i < n; i++) {
        if (start[i] >= lastFinish) {
            cout << start[i] << " " << finish[i] << endl;
            lastFinish = finish[i];
        }
    }

    return 0;
}
