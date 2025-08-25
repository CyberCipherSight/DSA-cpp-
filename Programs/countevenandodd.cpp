#include<iostream>
using namespace std;
int main(){

    int n;
    int even = 0;
    int odd = 0;

    cout<<"Enter sizee of array : ";
    cin>>n;
    int arr[n];
    

    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    
    for(int i=0; i <n; i++){

        if((arr[i]%2) == 0){

            even++;

        }
        else odd++ ;

    }
    cout<<"Number of even values = "<<even<<endl;
    cout<<"Number of odd values = "<<odd;

    return 0;
}