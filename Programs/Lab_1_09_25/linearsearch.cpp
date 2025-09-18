#include <iostream>
using namespace std;

void linearsearch(int arr[],int n , int key){

    int index = -1;

    for(int i=0; i<n;i++){

        if(key == arr[i]){

            index = i;
            break;
            
        }

    }
   if(index == -1)
   {
    cout<<"Not Found !";
   }
   else cout<<"Found at "<<index<<" index";

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

    linearsearch(arr,n,key);

    return 0;
}
