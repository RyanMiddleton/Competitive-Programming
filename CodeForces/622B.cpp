#include <iostream>
#include <string>
using namespace std;

int main() {
    int a;
    string time;

    cin >> time >> a;

    string time1 = time.substr(0,2);
    string time2 = time.substr(3,2);


    int t1 = stoi(time1);
    int t2 = stoi(time2);
    t1 += (a / 60);
    t2 += (a % 60);
    if(t2 / 60 > 0) {
        t1 += 1;
        t2 %= 60;
    }
    t1 %= 24;
    cout << (t1 < 10 ? "0" : "") << t1 << ":" << (t2 < 10 ? "0" : "") << t2 ;

    return 0;
}
