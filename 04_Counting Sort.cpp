#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {5, 2, 8, 4, 6};

    int max_number = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] > max_number) {
            max_number = arr[i];
        }
    }

    vector<int> count(max_number + 1, 0);

    for (int i = 0; i < arr.size(); i++) {
        count[arr[i]]++;
    }

    vector<int> output;
    for (int i = 0; i < count.size(); i++) {
        for (int j = 0; j < count[i]; j++) {
            output.push_back(i);
        }
    }

    cout << "Final count array: ";
    for (int i = 0; i < count.size(); i++) {
        cout << count[i] << " ";
    }
    cout << endl;

    cout << "Sorted array: ";
    for (int i = 0; i < output.size(); i++) {
        cout << output[i] << " ";
    }
    cout << endl;

    return 0;
}
