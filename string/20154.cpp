#include <iostream>
#include <vector>
#include <string>

using namespace std;

//A = 65
int main() {
    string str;
    cin >> str;
    int size = str.size();

    int draw_cnt[26] = {3,2,1,2,3,3,3,3,1,1,3,1,3,3,1,2,2,2,1,2,1,1,2,2,2,1};

    vector<int> vec1;
    vector<int> vec2;

    string flag = "1to2";
    int val = 0;

    for (int i = 0; i < size; i++) {
        vec1.push_back(draw_cnt[str[i] - 65]);
    }

    while (true) {

        if (vec1.size() == 1 && vec1[0] % 2 == 1) {
            cout << "I'm a winner!" << endl;
            break;
        }
        else if (vec1.size() == 1 && vec1[0] % 2 == 0) {
            cout << "You're the winner?" << endl;
            break;
        }

        if (vec2.size() == 1 && vec2[0] % 2 == 1) {
            cout << "I'm a winner!" << endl;
            break;
        }
        else if (vec2.size() == 1 && vec2[0] % 2 == 0) {
            cout << "You're the winner?" << endl;
            break;
        }

        if (flag == "1to2") {
            if (size % 2 == 0) {
                for (int i = 0; i < size - 1; i += 2) {
                    val = vec1[i] + vec1[i+1];
                    if(val > 10) {
                        vec2.push_back(val % 10);
                    }
                    else {
                        vec2.push_back(val);
                    }
                }
            }
            else {
                for (int i = 0; i < size - 1; i += 2) {
                    val = vec1[i] + vec1[i+1];
                    if(val > 10) {
                        vec2.push_back(val % 10);
                    }
                    else {
                        vec2.push_back(val);
                    }
                }
                vec2.push_back(vec1[size - 1]);
            }
            size = vec2.size();
            flag = "2to1";
            vec1.clear();
        }

        else if (flag == "2to1") {
            if (size % 2 == 0) {
                for (int i = 0; i < size - 1; i += 2) {
                    val = vec2[i] + vec2[i+1];
                    if(val > 10) {
                        vec1.push_back(val % 10);
                    }
                    else {
                        vec1.push_back(val);
                    }
                }
            }
            else {
                for (int i = 0; i < size - 1; i += 2) {
                    val = vec2[i] + vec2[i+1];
                    if(val > 10) {
                        vec1.push_back(val % 10);
                    }
                    else {
                        vec1.push_back(val);
                    }
                }
                vec1.push_back(vec2[size - 1]);
            }
            size = vec1.size();
            flag = "1to2";
            vec2.clear();
        }
    }
}