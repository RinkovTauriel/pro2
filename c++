Бинарная куча (Min-Heap)
cpp
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int main() {
    vector<int> data = {8, 3, 5, 1, 6, 2, 4, 7};
    make_heap(data.begin(), data.end(), greater<int>());
    data.push_back(0);
    push_heap(data.begin(), data.end(), greater<int>());
    pop_heap(data.begin(), data.end(), greater<int>());
    int min_val = data.back();
    data.pop_back();
    cout << min_val;
    return 0;
}

Хеш-таблица
cpp
#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<string, string> ht;
    ht["Alice"] = "January";
    cout << ht["Alice"] << endl;
    ht.erase("Alice");
    return 0;
}
