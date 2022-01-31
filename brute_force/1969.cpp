#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, m;
    cin >> n >> m;

    string DNA[n];
    vector<char> answer;
    vector<int> acgt;
    int cnt = 0;

    for (int i = 0; i < n; i++) cin >> DNA[i];
    
    for (int i = 0; i < m; i++) { 
        int A = 0; int C = 0; int G = 0; int T = 0;
        for (int j = 0; j < n; j++) { 
            if (DNA[j][i] == 'A') A++; 
            else if (DNA[j][i] == 'C') C++;
            else if (DNA[j][i] == 'G') G++;
            else if (DNA[j][i] == 'T') T++;
        }
        acgt.clear();
        acgt.push_back(A); acgt.push_back(C); acgt.push_back(G); acgt.push_back(T);

        int max_index = max_element(acgt.begin(), acgt.end()) - acgt.begin();   

        if (max_index == 0) answer.push_back('A');
        else if (max_index == 1) answer.push_back('C');
        else if (max_index == 2) answer.push_back('G');
        else if (max_index == 3) answer.push_back('T');
         
        int max = *max_element(acgt.begin(), acgt.end());
        cnt += acgt[0] + acgt[1] + acgt[2] + acgt[3] - max;
    }
    for (int i = 0; i < m; i++) cout << answer[i];
    cout << '\n' << cnt << '\n';
}