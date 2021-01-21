#include <iostream>
#include <vector>
using namespace std;

int main() {
    int trys, count = 0, min, max;
    vector<int> contests;
    cin >> trys;
    for (int i = 0; i < trys; ++i) {
        int zw;
        cin >> zw;
        contests.push_back(zw);
    }
    min = contests[0];
    max = contests[0];
    for (int i = 1; i < contests.size(); ++i) {
        if (contests[i] > max) {
            count++;
            max = contests[i];
        } else if (contests[i] < min) {
            count++;
            min = contests[i];
        }
    }
    cout << count;
    return 0;
}