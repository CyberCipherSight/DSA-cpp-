#include<iostream>
using namespace std;

int main(){

    int n=6;

    
    for(int i=n; i>0 ; i--){
        
        for(int j=0; j<i;j++){

            cout<<" ";
           
        }
        for(int h=0;h<n-i;h++)//little bit confussion here
        {
                cout<<"*";
        }
            
       cout<<endl;
    }

return 0;
}