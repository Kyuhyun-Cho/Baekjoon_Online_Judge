#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n; cin >> n;

    if (n == 2) {
        int a, b; cin >> a >> b;
        int min;
        if (a <= b) min = a;
        else min = b;
        for (int i = 1; i <= min; i++) {
            if (a % i == 0 && b % i == 0) {
                cout << i << '\n';
            }
        }
    }
    else if (n == 3) {
        int a, b, c; cin >> a >> b >> c;
        int min;
        if (a <= b && a <= c) min = a;
        else if (b <= a && b <= c) min = b;
        else if (c <= a && c <= b) min = c;
        for (int i = 1; i <= min; i++) {
            if (a % i == 0 && b % i == 0 && c % i == 0) {
                cout << i << '\n';
            }
        }
    }
}