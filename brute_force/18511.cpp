#include <iostream>
#include <unordered_set>
#include <typeinfo>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n;
    int k; 
    cin >> n >> k;

    unordered_set<int> set;

    for (int i = 0; i < k; i++) {
        int tmp; cin >> tmp;
        set.insert(tmp);
    }

    bool flag;
    string str_n;
    
    for (int i = n; i > 0; i--) {
        flag = true;
        str_n = to_string(i);
        for (int j = 0; j < str_n.size(); j++) {
            if(set.find(str_n[j] - '0') == set.end()) {
                flag = false;
                break;
            }
        }
        if (flag == false) continue;
        cout << i << '\n';
        break;
    }
}