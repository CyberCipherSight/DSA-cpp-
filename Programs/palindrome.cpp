#include<iostream>
using namespace std;

//palindrome
int main()
{
    int n;
    cin>>n;

    while(n!= 0) {
        int num = n;
        int reversed = 0;

        // Reverse the number
        while(num > 0) {
            int digit = num % 10;
            reversed = reversed * 10 + digit;
            num /= 10;
        }

        // Check if the original number is equal to the reversed number
        if(reversed == n) {
            cout << "Yes" << endl; // It's a palindrome
        } else {
            cout << "No" << endl; // It's not a palindrome
        }

        cin >> n; // Read the next number
    }
    

}

