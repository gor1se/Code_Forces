#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<string> v;
    for (; n>0;n--){
        string str;
        cin >> str;
        v.push_back(str);
    }
    for (int i=0; i< v.size(); i++){
        if (v[i].size() > 10){
            cout << v[i].at(0) << v[i].size() - 2 << v[i].at((v[i].size()-1)) << endl;
        } else {
            cout << v[i] << endl;
        }
    }
}