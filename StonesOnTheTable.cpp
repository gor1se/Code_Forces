#include <iostream>
#include <string>

using namespace std;

int main(){
    int n, a = 0;
    string s;
    cin >> n;
    cin >> s;
    for(int i = 0; i < s.length() -1; i++){
        if (s.at(i) == s.at(i+1)){
            a++;
        }
    }
    cout << a;
}