#include <iostream>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n; cin >> n;

    long int a = 0;
    long int b = 1;
    long int c = 1;

    if (n == 0) cout << '0' << '\n';
    else if (n == 1) cout << '1' << '\n';
    else {
        for (int i = 1; i < n; i++) {
            c = a + b;
            a = b;
            b = c;
        }
        cout << c << '\n';
    }
} 