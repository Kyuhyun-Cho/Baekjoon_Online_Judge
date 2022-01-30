#include <iostream>
#include <string>

using namespace std;

int main() {
    string time_1;
    string time_2;
    cin >> time_1 >> time_2;

    int hh_1, mm_1, ss_1 , hh_2, mm_2, ss_2;

    hh_1 = stoi(time_1.substr(0, 2));
    mm_1 = stoi(time_1.substr(3, 2));
    ss_1 = stoi(time_1.substr(6, 2));

    hh_2 = stoi(time_2.substr(0, 2));
    mm_2 = stoi(time_2.substr(3, 2));
    ss_2 = stoi(time_2.substr(6, 2));

    if (ss_2 < ss_1) {
        ss_2 = ss_2 + 60;
        mm_2 = mm_2 - 1;
    }
    if (mm_2 < mm_1) {
        mm_2 = mm_2 + 60;
        hh_2 = hh_2 - 1;
    }
    if (hh_2 < hh_1) {
        hh_2 = hh_2 + 24;
    }

    string hh_gap, mm_gap, ss_gap;
    hh_gap = to_string(hh_2 - hh_1);
    mm_gap = to_string(mm_2 - mm_1);
    ss_gap = to_string(ss_2 - ss_1);

    if (stoi(hh_gap) < 10) {
        hh_gap = "0" + hh_gap;
    }

    if (stoi(mm_gap) < 10) {
        mm_gap = "0" + mm_gap;
    }

    if (stoi(ss_gap) < 10) {
        ss_gap = "0" + ss_gap;
    }

    if (hh_gap == "00" && mm_gap == "00" && ss_gap == "00") {
        hh_gap = "24";
    }

    cout << hh_gap << ":" << mm_gap << ":" << ss_gap << endl;
}    