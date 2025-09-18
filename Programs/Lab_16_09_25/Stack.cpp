#include<iostream>
using namespace std;
#define MAX 100

class Stack{
     
    int arr[MAX];
    int top;

    public :
    Stack(){

        top = -1;
    }

void push(int x){

    if(top == MAX -1)
    {
        cout<<"Stack overflow";
        return ;
    }
    arr[++top] = x;
    return ;
}
void Display(){

    if(top == -1){
        cout<< "Stack in empty";
        return ;
    }

    cout<<"Elements in stack are : "<<endl;

    for(int i=0; i<=top; i++){
        cout<<arr[i]<<endl;
    }

}

int peek(){

    if(top == -1){
        cout<< "Stack is empty";
        return -1;

    }
    return arr[top];
}

int pop(){

     if(top == -1){
        cout<< "Stack is empty";
        return -1;

    }
    return arr[top--];


}

bool isEmpty(){

    if(top == -1){
        return false;

    }

}

bool isFull(){
    
    if(top == MAX -1){
        return true;
    }

}

};

int main(){

    Stack S;
    S.push(10);
    S.push(9);
    S.push(8);
    S.push(7);
    S.Display();
    int topvalue = S.peek();
    cout<<"Last Element inserted : "<<topvalue<<endl;

    int popvalue = S.pop();
    cout<<"Popped value : "<<popvalue;

    

    return 0;

}