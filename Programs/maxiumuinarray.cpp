#include<iostream>
using namespace std;
int main(){

     int n;
    cout<<"Enter sizee of array : ";
    cin>>n;
    int arr[n];
    

    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    
    for(int i=0; i <n; i++){

        cout<<arr[i]<<" ";

    }

    cout<<endl;


    int Maxi = arr[0];

    for (int i = 1; i < n ; i++) {

        if(Maxi < arr[i]){
            Maxi = arr[i];
        }

    }
    cout<<Maxi;

    return 0;
}