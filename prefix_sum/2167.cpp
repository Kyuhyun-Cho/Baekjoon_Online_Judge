#include <iostream>

using namespace std;

int main () {
    int n, m;
    cin >> n >> m;

    int arr[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j]; 
        }
    }

    int k;
    cin >> k;

    for (int t = 0; t < k; t++) {
        int sum = 0;
        int i, j, x, y;
        cin >> i >> j >> x >> y;
        for (int a = i; a <= x; a++) {
            for (int b = j; b <= y; b++) {
                sum += arr[a-1][b-1];
            }
        }
        cout << sum << endl;
    }
    return 0;
}