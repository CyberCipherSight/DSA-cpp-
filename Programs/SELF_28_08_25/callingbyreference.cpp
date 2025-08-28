#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int findElementAtIndex(int key, vector<int> &arr) {
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] == key) {
                return i; 
            }
        }
        return -1; 
    }
};

int main() {
    int key;
    cout << "Enter key to find in array : ";
    cin >> key;

    int n;
    cout << "Enter size of vector: ";
    cin >> n;

    vector<int> v(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    Solution sol1;
    int result = sol1.findElementAtIndex(key, v);

    if (result != -1)
        cout << "Key found at index: " << result << endl;
    else
        cout << "Key not found!" << endl;

    return 0;
}
