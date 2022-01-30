#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n; cin >> n;
    int m = n;

    for (int i = n; i > 0; i--) {
        int sum = i;
        string str_i = to_string(i);

        for (int j = 0; j < str_i.size(); j++) {
            sum += str_i[j] - '0';
        }
        if (sum == n && i < m) {
            m = i;
        }
    }
    if (m == n) cout << 0 << '\n';
    else cout << m << '\n';
}