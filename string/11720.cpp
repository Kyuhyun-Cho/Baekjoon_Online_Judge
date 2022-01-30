#include <iostream>
#include <string>

using namespace std;

int main() {
    int size, sum;
    string num;

    cin >> size >> num;
    sum = 0;

    for (int i = 0; i < size; i++) {
        sum += num[i] - '0';
    }

    cout << sum << endl;
}