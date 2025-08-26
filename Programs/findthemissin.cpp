#include<iostream>
using namespace std;

int  main(){

    int arr[6]= {1,2,3,5,6};

    int sum1=0;

    for(int i=0; i<5;i++){
        sum1 = sum1 + arr[i];
    }
    int total = (6*(6+1)/2);
    int result = total - sum1;

    cout<<result;

    return 0;
}