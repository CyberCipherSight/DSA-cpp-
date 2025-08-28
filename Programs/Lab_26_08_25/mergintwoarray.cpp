#include<iostream>
using namespace std;

int main(){

    int m;
    int n;
    
    cout<<"Enter size of 1 array : ";
    cin>>m;

    int arr1[m];

    for(int i=0;i<m;i++){
        cin>>arr1[i];
    }
     for(int i=0;i<m;i++){
        cout<<arr1[i];
    }
    cout<<endl;

    cout<<"Enter the size of 2nd array : ";
    cin>>n;
    
    int arr2[n];


    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }
     for(int i=0;i<n;i++){
        cout<<arr2[i];
    }
    cout<<endl;

    int size = m+n;
    int arr3[size];
    
    for(int i = 0; i< n; i++){
        arr3[i] = arr1[i];
    }
    for(int i = 0; i<m; i++){
        arr3[n+i] = arr2[i];
    }
    cout<<endl;
    
    cout<<"The final array is : ";
    for(int i=0; i<size;i++){
        cout<<arr3[i];
    }
    

    return 0;
}