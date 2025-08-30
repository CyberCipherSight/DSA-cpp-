#include <iostream>
using namespace std;

int bubblesort(int arr[] , int n){

     for(int i=0; i<n-1 ;i++){

    for(int j=0; j<n-i-1;j++){

        if(arr[j]>arr[j+1]){

            int temp = arr[j+1];
            arr[j+1] = arr[j];
            arr[j] = temp;
            
        }
    }
   }
   for (int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
}

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
    cout<<"bubble sorted array"<<endl;

  bubblesort(arr , n);
    

    return 0;
}
