#include <iostream>
#include <unordered_set>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, k; cin >> n >> k;
    int answer = 0;
    
    unordered_set<string> set; // 순서가 정렬되지 않는 set. O(1) 속도
        
    int arr[n];
    for (int i = 0; i < n; i++) {
        int tmp; cin >> tmp;
        arr[i] = tmp;
    }

    sort(arr, arr + n);

    do {
        string str_num = ""; // 스트링 합치기 시 선언문
        for (int i = 0; i < k; i++) {
            str_num += to_string(arr[i]);
        }
        set.insert(str_num);
    } while (next_permutation(arr, arr + n)); 

    cout << set.size() << '\n';
}