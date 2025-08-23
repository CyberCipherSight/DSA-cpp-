#include<iostream>

using namespace std;

int main(){

    int num;
    int sum = 1;
    cout<<"Enter the number you want factors of : ";
    cin>>num;
    for(int i=1; i<=num; i++){

        sum = sum * i;

    }
    cout<<sum;

   return 0;


}