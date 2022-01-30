#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);

    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;

    int flag = 1;

    for (int x = -999; x < 1000; x++) {
        for (int y = -999; y < 1000; y++) {
            if (a*x + b*y == c && d*x + e*y == f) {
                cout << x << ' ' << y << '\n';
                flag = 0;
                break;
            }
        }
        if (flag == 0) break;
    }
}