#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    unordered_map<char, int> freq;
    for (char c : input) {
        freq[c]++;
    }

    cout << "Repeating characters: ";
    bool found = false;
    for (auto &pair : freq) {
        if (pair.second > 1) {
            cout << pair.first << " ";
            found = true;
        }
    }

    if (!found) cout << "None";
    cout << endl;
    return 0;
}
