#include<iostream>
#include<vector>

using namespace std;


class Solution {
  public:
    int findElementAtIndex(int key, vector<int> &arr) {
        // code here
        
    }
};


int main(){

    int key;
    cout<<"Enter key to find in array : ";
    cin>>key;
     int n;
    cout << "Enter size of vector: ";
    cin >> n;

    vector<int> v(n);  // create vector of size n
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];   // user input
    }
    return 0;
    
}