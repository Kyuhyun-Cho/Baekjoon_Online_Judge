#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <string.h>

using namespace std;

int main() {
    int test_case;
    cin >> test_case;
    cin.ignore();

    for (int t = 0; t < test_case; t++) {
        string str;
        getline(cin, str);

        int charCntArr[26] = {0, };
        vector <pair<int,char> > vec;

        for (int i = 0; i< str.size(); i++) {
            if (str[i] == ' ') {
                continue;
            }
            charCntArr[str[i] - 97] += 1;
        }
        
        for (int j = 0; j < 26; j++) {
            vec.push_back(make_pair(charCntArr[j], j+97));
        }
    
        sort(vec.begin(), vec.end(), greater<>());

        if (vec[0].first == vec[1].first) {
            cout << '?' << endl;
        }
        else {
            cout << vec[0].second << endl;
        }
    }

    return 0;
}