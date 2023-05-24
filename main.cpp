#include<iostream>
 
using namespace std;
 
int main() {
    int n, x, y, z, accx, accy, accz;
    cin >> n;
    accx = 0;
    accy = 0;
    accz = 0;
    for (int i = 0; i < n; i++) {
        cin >> x >> y >> z;
        accx += x;
        accy += y;
        accz += z;
    }
    
    if (accx == 0 && accy == 0 && accz == 0) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    return 0;
}
