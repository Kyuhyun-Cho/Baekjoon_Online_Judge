#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n;
    int k; 
    cin >> n >> k;

    vector<int> vec;

    for (int i = 0; i < k; i++) {
        int tmp; cin >> tmp;
        vec.push_back(tmp);
    }

    sort(vec.begin(), vec.end(), greater<int>());
    int num;
    int mul;

    do {
        num = 0;
        mul = 1;
        for (int i = vec.size(); i --> 0;) {
            num += vec[i] * mul;
            mul *= 10;
        }
        if (n > num) {
            cout << num << '\n';
            break;
        }
    } while (prev_permutation(vec.begin(), vec.end()) );

    
}