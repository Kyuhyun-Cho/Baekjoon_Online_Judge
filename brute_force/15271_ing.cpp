#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int people, idx, flag;
    cin >> people >> idx >> flag;

    vector<int> vec;
    vec.push_back(0); vec.push_back(1); vec.push_back(0); vec.push_back(1);

    int n = 1;
    int bbun = 4;
    int degi = 4;

    while (2 * bbun + 1 < idx) {
        n++;
        bbun += bbun + 1;
        degi += degi + 1;
    }
    cout << "n: " << n << " bbun: " << bbun << endl;

    int value_cnt = (n * (n+3) - 4) / 2;

    if (n == 1) {
        for (int i = 0; i < 2; i++) vec.push_back(0);
        for (int i = 0; i < 2; i++) vec.push_back(1);
    }
    else {
        for (int i = 0; i < value_cnt; i++) vec.push_back(0);
        for (int i = 0; i < value_cnt; i++) vec.push_back(1);
    }    
        

    for (int i = 0; i < n * (n+3); i++) cout << vec[i] << " ";

    int now_idx = (bbun + degi) / people - 1;
    int next_idx = idx - bbun;

    int answer = 0;
    for (int i = now_idx; i < n * (n+3); i++) {
        if (flag == 0 && vec[i] == 0) {
            answer = i;
            next_idx--;
        }
        else if (flag == 1 && vec[i] == 1) {
            answer = i;
            next_idx--;
        }
        if (next_idx == 0) {
            cout << answer << '\n';
            break;
        }
    }
}    
    