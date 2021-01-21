#include <iostream>
#include <string>
using namespace std;

int main(){
    string i;
    getline(cin, i);
    if (int(i.at(0)) >= 97 && int(i.at(0)) <= 122){
        i.at(0) = int(i.at(0)) - 32;
    }
    cout << i;
}