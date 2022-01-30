#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int test_case;
    cin >> test_case;

    for (int i = 0; i < test_case; i++) {
        int x1, y1, r1, x2, y2, r2;
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

        int point_distance = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
        int radio_distance = (r1 + r2);


        if (x1 == y1 && x2 == y2 && r1 == r2) {
            cout << "-1" << endl;
            continue;
        }
        else if (x1 == y1 && x2 == y2 && r1 != r2) {
            cout << "0" << endl;
            continue;
        }
        

        if (point_distance < radio_distance) {
            if (point_distance < r1) {
                cout << "1" << endl;
            }
            else { 
                cout << "2" << endl;
            }    
        }
        else if (point_distance == radio_distance) {
            cout << "1" << endl;
        }
        else if (point_distance > radio_distance) {
            cout << "0" << endl;
        }
    }
}