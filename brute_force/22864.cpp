#include <iostream>

using namespace std;

int main() {
    int sta_up, work_up, sta_down, max_sta;
    cin >> sta_up >> work_up >> sta_down >> max_sta;

    int stamina = 0;
    int work = 0;

    for (int i = 0; i < 24; i++) {
        if (stamina + sta_up <= max_sta) {
            stamina += sta_up;
            work += work_up;
        }
        else if (stamina + sta_up > max_sta) {
            if (stamina - sta_down < 0) {
                stamina = 0;
            }
            else {
                stamina -= sta_down;
            }
        }
    }
    cout << work << endl;

    return 0;
}