#include <iostream>
#include <stack>

using namespace std;

int main() {
    while(true) {
        string input;
        getline(cin, input);

        stack<char> s;

        if (input == "END") {
            break;
        }

        for (int i = 0; i < input.size(); i++) {
            s.push(input[i]);
        }

        while (!s.empty()) {
            cout << s.top();
            s.pop();
        }

        cout << endl;
    }
}