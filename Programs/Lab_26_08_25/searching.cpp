#include<iostream>
using namespace std;

int main(){

    int n;
    int find;
    cout<<"Enter sizee of array : ";
    cin>>n;
    int arr[n];
    int flag=0;

    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    cout<<"Enter the number to find : ";
    cin>>find;

    for(int i =0; i<n; i++){
        if(find == arr[i]){
            cout<<"Number found : "<<i;
            flag++;
        }
            
    }
    if(flag ==0){
        cout<<"-1";
    }
    
    return 0 ;
}