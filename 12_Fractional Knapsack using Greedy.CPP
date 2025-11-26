#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Item {
    double value, weight;
};

bool cmp(Item a, Item b) {
    return (a.value / a.weight) > (b.value / b.weight);
}

double fractionalKnapsack(double capacity, vector<Item>& items) {
    sort(items.begin(), items.end(), cmp);

    double totalValue = 0.0;

    for (auto& item : items) {
        if (capacity == 0)
            break;

        if (item.weight <= capacity) {
            totalValue += item.value;
            capacity -= item.weight;
        } else {
            totalValue += item.value * (capacity / item.weight);
            capacity = 0;
        }
    }

    return totalValue;
}

int main() {
    vector<Item> items = {{60, 10}, {100, 20}, {120, 30}};
    double capacity = 50;

    cout << fractionalKnapsack(capacity, items) << endl;

    return 0;
}
