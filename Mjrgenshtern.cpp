#include <iostream>

using namespace std;

int main() {

    system("chcp 1251 > nul");


    long long n, m, a, m1, n1, col = 0, col2 = 0;

    
    cin >> n;
    n1 = n;
 
    cin >> m;
    m1 = m;
    
        cin >> a;

   
    while (n > 0) {
        n = n - a;
        ++col;

    }
    while (m > 0) {
        m = m - a;
        ++col2;

    }

    col = (col * col2);
    cout << col;
    return 0;
}