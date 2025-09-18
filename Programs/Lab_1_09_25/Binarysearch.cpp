#include<iostream>
using namespace std;

int BinarySearch(int arr[] , int n ,int key){

    int start = arr[0];
    int end = arr[n];

    int mid = (start+end)/2;

    for(int i = 0; i < n; i++){

        if(key == mid){
            cout<<"Found";
        }
        else if(key > mid){
            mid =  start;
            end = n;

        }
        else if(key < mid)
        {
            mid-1;
        }

    }
    

    

}

int main() {
    
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n];
    int key;

    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    cout<<endl;
    for (int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<"Enter a element to find  in array : ";
    cin>>key;

    BinarySearch(arr,n,key);

    return 0;
}
