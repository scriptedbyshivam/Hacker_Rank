#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main() {
    int n ;
    long l;
    char ch;
    float f;
    double d;
    
    cin >> n >> l >> ch >> f >> d;
    
    cout << n << endl;
    cout << l << endl;
    cout << ch << endl;
    
    
    // Set precision for float: 3 decimal places
    cout << fixed << setprecision(3) << f << endl;

    // Set precision for double: 9 decimal places
    cout << fixed << setprecision(9) << d << endl;
    // cout << f << endl;
    // cout << d << endl;

    return 0;
}
