 #include<iostream>
 #include<vector>

 using namespace std;

 void display(vector<int> &v) {

    for(int i = 0; i < v.size(); i++){

        cout<<v[i]<<" ";

    }

 }

 int main(){

    vector<int> vect1;
    int element;

    cout<<"Enter four number : ";
     
    for(int i = 0; i < 4; i++){ 

        cin>>element;

        vect1.push_back(element);
    }

    display(vect1);

    return 0;

 }