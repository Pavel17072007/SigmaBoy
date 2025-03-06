#include <iostream>
using namespace std;
int main() {
    int a;
    cin >> a;
    if ((a > 1000) or (a < 1))
        return 0;
    if ((a % 4 == 0) or (a % 7 == 0) or (a % 44 == 0) or (a % 47 == 0) or (a % 74 == 0) or (a % 77 == 0) or (a % 444 == 0) or
        (a % 447 == 0) or (a % 474 == 0) or (a % 477 == 0) or (a == 744) or (a == 747) or (a == 774) or (a == 777))
        cout << "YES";
    else
        cout << "NO";
    return 0;
}