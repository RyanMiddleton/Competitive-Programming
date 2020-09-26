#include <iostream>
using namespace std;

int main() {
    int cases;
    cin >> cases;
    int n;
    int k;

    while (cases--) {
        cin >> n >> k;
        if (n < k) {
            cout << k - n << endl;
            continue;
        }
        if (n&1) {
            if (k&1) {
                cout << 0 << endl;
            }
            else {
                cout << 1 << endl;
            }
        }
        else {
            if (k&1) {
                cout << 1 << endl;
            }
            else {
                cout << 0 << endl;
            }
        }
    }
}
