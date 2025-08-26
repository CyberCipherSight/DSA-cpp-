#include<iostream>
using namespace std;

int main(){

    int m;
    int arr1[m];

    cout<<"Enter size of 1 array : ";
    cin>>m;

    for(int i=0;i<m;i++){
        cin>>arr1[i];
    }
     for(int i=0;i<m;i++){
        cout<<arr1[i];
    }
    cout<<endl;

    cout<<endl;
    for(int i=0; i<m; i++){
        if(arr1[i]>arr1[i+1]){
            cout<<"not Shorted array  : ";
            
        }
       
    }


    return 0;

}