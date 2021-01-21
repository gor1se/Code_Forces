#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string inpt;
    char current = ' ';
    int count = 0;
    getline (cin, inpt);
    sort(inpt.begin(), inpt.end());
    for (int i = 0; i < inpt.size(); i++) {
        if (inpt.at(i) != current) {
            current = inpt.at(i);
            count++;
        }
    }
    if (count%2 == 0) {
        cout << "CHAT WITH HER!";
    } else
    {
        cout << "IGNORE HIM!";
    }
    
}