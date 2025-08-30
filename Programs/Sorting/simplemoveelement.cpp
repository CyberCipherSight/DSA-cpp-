#include <iostream>
using namespace std;

int main() {
    
    int n;
    cout<<"Enter sizee of array : ";
    cin>>n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"smallest element of the array"<<endl;


    int min = arr[0];
    int temp;
for(int i = 0; i<n; i++){

    for(int i=0;i<n;i++){

        if(arr[i]>arr[i+1])
        {
         temp = arr[i];
         min = arr[i+1];
         arr[i] = min;
        }

    
    }

}

cout<<"smallest element at first of the array "<<endl;


    for (int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
    

    return 0;

}
