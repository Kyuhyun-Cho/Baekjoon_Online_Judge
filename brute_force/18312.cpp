#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n;
    string k;
    cin >> n >> k;

    int cnt = 0;
    string str_h, str_m , str_s;

    for (int h = 0; h < n+1; h++) {
        for (int m = 0; m < 60; m++) {
            for (int s = 0; s < 60; s++) {
                str_h  = (h < 10) ? "0" + to_string(h) : to_string(h);
                str_m  = (m < 10) ? "0" + to_string(m) : to_string(m);
                str_s  = (s < 10) ? "0" + to_string(s) : to_string(s);

                if (str_s.find(k) != string::npos) {
                    cnt++;
                }
                else if (str_m.find(k) != string::npos) {
                    cnt++;
                }
                else if (str_h.find(k) != string::npos) {
                    cnt++;
                }
            }
        } 
    }
    cout << cnt << '\n';
}