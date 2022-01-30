#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int num = 0;
    vector<int> vec;

    for (int i = 0; i < 28; i++) {
        cin >> num;
        vec.push_back(num);
    }

    for (int i = 1; i <= 30; i++) {
        if (find(vec.begin(), vec.end(), i) == vec.end()) {
            cout << i << '\n';
        }
    }
}