#include <iostream>
#include <string>
using namespace std;

class sale{

    int srno;
    int qty;
    float prize;
    char date;
    float salesAmt;

    void calSales(){

        salesAmt = prize * qty;

    }
    public : 
    void getSaleInfo(int q, float p){
        qty = q;
        prize = p;
        calSales();

    }
    void getSaleInfo(char dt , int sr){

        date = dt;
        srno = sr;

    }

    void displaySalesInfo(){

        cout<<endl<<"sales info "<<salesAmt;
        cout<<endl<<"sales date "<<date;
        cout<<endl<<"sales srno "<<srno;


    }

};

int main(){

    sale  s1;
    s1.getSaleInfo(200,25.00);
    s1.getSaleInfo('W',10);
    s1.displaySalesInfo();

    return 0;
}