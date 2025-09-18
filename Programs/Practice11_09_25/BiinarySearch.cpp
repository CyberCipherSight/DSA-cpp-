#include <iostream>
using namespace std;

int BinarySearch(int arr[] ,int n , int key){
   
    int low  = 0;
    int high = n-1;

    while( low <= high)
    {
        int mid = (low + high)/2;

        if(arr[mid] == key){

            return mid;
            
        }
        else if(arr[mid] > key)
        {
            high = mid-1;
        }
        else 
        
        low = mid+1;


    }

    return -1;

}

int main() {
    
    int n;
    cout<<"Enter sizee of array : ";
    cin>>n;
    int arr[n];
    int key;

    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    cout<<"This is your arrary : ";
    for (int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Enter the element to search = ";
    cin>>key;

    int result = BinarySearch(arr, n, key);
if (result != -1)
    cout << "Element found at index: " << result << endl;
else
    cout << "Element not found." << endl;
    return 0;
}
