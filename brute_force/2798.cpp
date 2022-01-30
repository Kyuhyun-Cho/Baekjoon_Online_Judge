#include <iostream>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); // C++ 시간 단축에 용이

    int n, m;
    cin >> n >> m;
    int flag = 1;

    int sum = 0;
    int a, b, c;
    int i = 0; int j = 1; int k = 2;
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    while (flag) {
        for (int i = 0; i < n; i++) {
            for (int j = i+1; j < n; j++) {
                for (int k = j+1; k < n; k++) {
                    if (arr[i] + arr[j] + arr[k] == m) {
                        cout << m << '\n';
                        flag = 0;
                        break;
                    }
                }
                if (flag == 0) break; // C++ 에서는 다중 포문 한번에 break 불가능. flag를 세워서 기능 구현 가능
            }
            if (flag == 0) break;
        }
        if (flag == 0) break;
        m--;
    }
    return 0;
}
