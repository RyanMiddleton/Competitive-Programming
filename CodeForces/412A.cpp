#include <iostream>
#include <string>
using namespace std;

int main() {
    string banner;
    int n;
    int k;
    cin >> n >> k;
    cin >> banner;

    /*if (n - k < k - 1) {
        while (k < n) {
            k += 1;
        }
    }
    else {
        while ( )
    }*/
    if (k - 1 < banner.length() - k) {
        while (k > 1) {
            cout << "LEFT" << endl;
            k -= 1;
        }
        for (int i = 0; i < banner.length(); i++) {
            cout << "PRINT " << banner[i] << endl;
            if (i < banner.length() - 1) {
                cout << "RIGHT" << endl;
            }
        }
    }
    else {
        while (k < banner.length()) {
            cout << "RIGHT" << endl;
            k += 1;
        }
        for (int i = banner.length() - 1; i >= 0; i--) {
            cout << "PRINT " << banner[i] << endl;
            if (i > 0) {
                cout << "LEFT" << endl;
            }
        }
    }
}
