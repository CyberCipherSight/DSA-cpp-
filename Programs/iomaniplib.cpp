#include <iostream>// input output stream
#include <iomanip>//input output manipulators

// setprecision() – control number of decimal places

// setw() – set output width

// setfill() – set fill character for padding

// fixed / scientific – control number formatting style
using namespace std;

int main() {
    int i;
    long l;
    char c;
    float f;
    double d;
    
    cout<<"Enter some values : ";
    cin >> i >> l >> c >> f >> d;
    
    cout << i << endl;
    cout << l << endl;
    cout << c << endl;
    cout << fixed << setprecision(3) << f << endl;
    cout << fixed << setprecision(9) << d << endl;
    
    
    return 0;
}
// cin reads values in the given order.

// fixed + setprecision(3) → makes float show exactly 3 decimal places.

// fixed + setprecision(9) → makes double show exactly 9 decimal places.