#include<iostream>
using namespace std;

int main(){

    int n;
    int digit;
    int rem;

    cin>>n;

    while(n!=0){

         rem = n/10;
         digit = (digit * 10) + rem;
         n = n/10;

    }
    if(n == digit){

        cout<<"Palindrome";

    }
    else
        cout<<"Not a Palindrome";
    

    return 0;
}