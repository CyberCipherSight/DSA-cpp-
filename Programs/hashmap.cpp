#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<string, int> hashMap;

    // Insert key-value pairs
    hashMap["apple"] = 3;
    hashMap["banana"] = 5;

    // Access values
    cout << "apple count: " << hashMap["apple"] << endl;

    // Iterate over all entries
    for (auto &pair : hashMap) {
        cout << pair.first << " => " << pair.second << endl;
    }

    return 0;
}
