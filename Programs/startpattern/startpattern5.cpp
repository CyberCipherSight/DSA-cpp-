#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter a number : ";
    cin>>n;

    for(int row =1; row<=n; row++){

        for(int i=n-row; i>0; i--){
            cout<<" ";

        }
        
        for(int j=1;j<=2*row-1; j++){

            cout<<"*";
        }

        cout<<endl;



    }

    return 0;
}