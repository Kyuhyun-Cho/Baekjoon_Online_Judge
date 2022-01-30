#include <iostream>

using namespace std;

char arr[5][15] = {0, };

int main() {
    for (int i = 0; i < 5; i++) {
        string str;
        cin >> str;
        for (int j = 0; j < str.size(); j++) { //string 객체에서 size() 번째 이후의 인덱스에 접근하는 것은 undefined behavior입니다. 길이를 넘어서서 접근하지 않게 해보세요.
            arr[i][j] = str[j];
        }   
    }

    for (int i = 0; i < 15; i++) {
        for (int j = 0; j < 5; j++) {
            if (arr[j][i] != '\0') {
                cout<< arr[j][i];
            } 
        }
    }
    cout << endl;
}
