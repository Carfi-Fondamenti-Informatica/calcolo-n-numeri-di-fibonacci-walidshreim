#include <iostream>
using namespace std;

int main() {
   int n, i = 1, b = 1, a = 0, c;
        cin >> n;
        if (n >= 2) {
            cout << b << endl;
            for (i = 2; i <= n; i++) {
                c = a + b;
                cout << c << endl;
                a = b;
                b = c;
            }
        } else {
            cout << "errore" << endl;
        }
        return 0;
}
