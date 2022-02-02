#include <iostream>

using namespace std;

int check[201][201];

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, m; 
    cin >> n >> m;

    int cnt = 0;
    int a, b;
    for (int i = 0; i < m; i++) {
        cin >> a >> b;
        check[a][b] = 1;
        check[b][a] = 1;
    }

    for (int i = 1; i <= n-2; i++) {
        for (int j = i+1; j <= n-1; j++) {
            for (int k = j+1; k <= n; k++) {
                if (check[i][j] == 1 || check[j][k] == 1 || check[i][k] == 1) continue;
                cnt++;
            }
        }
    }
    cout << cnt << '\n';
}   