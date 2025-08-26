#include<iostream>
using namespace std;

int main(){

    int m,n;
    int arr1[m];
    int arr2[n];
    int size = m+n;
    cout<<"Enter size of 1 array : ";
    cin>>m;

    for(int i=0;i<m;i++){
        cin>>arr1[m];
    }
     for(int i=0;i<m;i++){
        cout<<arr1[m];
    }

    cout<<"Enter the size of 2nd array : ";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr1[n];
    }
     for(int i=0;i<n;i++){
        cout<<arr1[n];
    }

    int arr3[size];
    
    for(int i = 0; i< n; i++){
        arr3[i] = arr1[i];
    }
    for(int i = 0; i<m; i++){
        arr3[n+i] = arr2[i];
    }
    cout<<arr3[m+n];
    

    return 0;
}