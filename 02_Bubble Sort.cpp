#include <iostream>
#include <vector>
using namespace std;
vector<int> bubble_sort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        // Last i elements are already in place
        for (int j = 0; j < n - i - 1; j++) {
            // Swap if the element is greater than the next
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    return arr;
}
int main() {
    vector<int> arr = {64, 34, 25, 12, 22, 11, 90};
    bubble_sort(arr);
    // Print sorted array
    cout << "Sorted array: ";
    for (int val : arr) {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}
