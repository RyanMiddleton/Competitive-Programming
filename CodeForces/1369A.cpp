#include <iostream>
using namespace std;

int main() {
    int size;

    cin >> size;

    int polygonArray[size];

    for (int i = 0; i < size; i++) {
        cin >> polygonArray[i];
    }

    for (int i = 0; i < sizeof(polygonArray)/sizeof(polygonArray[0]); i++) {
        if (polygonArray[i] % 4 != 0) {
            cout << "NO" << endl;
        }
        else {
            cout << "YES" << endl;
        }
    }
    return 0;
}
