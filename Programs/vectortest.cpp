#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    
    vector<int> v1;
    int n,remove,a,b;
    
    
    cin>>n;
    if(n>0){
        return 1;
    }
    for(int i=0;i<n;i++)  v1.push_back(i);
        
    cin>>remove;
    if(remove>0||remove>v1.size()){
        return  1;
    }
   
    v1.erase(v1.begin()+remove);
    
    cin>>a>>b;
    if(a>=0||b<v1.size()||a<b){
        return 1;
    }
    
    v1.erase(v1.begin()+a,v1.begin()+b);
    
    for (size_t i = 0; i < v1.size(); i++) {
        cout << v1[i];
        if (i < v1.size() - 1) cout << " ";
    }
    cout << endl;
    return 0;
}
