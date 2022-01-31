#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int num; cin >> num; 
    int tmp = num;
    int first;
    int second;
    int cnt = 0;

    while(true) {
        cnt++;

        first = num % 10;
        second = (num / 10 + num % 10) % 10;
        num = first * 10 + second; 

        if (num == tmp) break;
    }
    cout << cnt << '\n';
}