#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, m; 
    cin >> n >> m;

    vector< vector<int> > vec_vec;

    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n-1; j++) {
            for (int k = j+1; k < n; k++) {
                vector<int> int_vec;
                int_vec.push_back(i+1);
                int_vec.push_back(j+1);
                int_vec.push_back(k+1);
                vec_vec.push_back(int_vec);
            }
        }
    }

    int cnt = 0;
    for (int t = 0; t < m; t++) {
        int a, b; cin >> a >> b;
        for (int i = 0; i < vec_vec.size(); i++) {
            if ( find(vec_vec[i].begin(), vec_vec[i].end(), a) != vec_vec[i].end() && find(vec_vec[i].begin(), vec_vec[i].end(), b) != vec_vec[i].end() ) {
                cnt++;
            }
        }
    }
    cout << cnt / m << '\n';
}   