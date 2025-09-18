#include <iostream>
using namespace std;

int selectionsort(int arr[] , int n){

    for(int i=0; i<n-1; i++){
        int smallest = i;

        for(int j = i+1; j<n ; j++){

            if(arr[smallest] > arr[j]){
                smallest = j;
            }

        }
                int temp = arr[i];
                arr[i] = arr[smallest];
                arr[smallest] = temp;
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
    selectionsort(arr , n);
    
   
    return 0;
}
