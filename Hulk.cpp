#include <iostream>
#include <string>
using namespace std;

int main(){
    string ih = "I hate ";
    string il = "I love ";
    bool b_ih = true;
    bool b_il = false;
    int reps;
    cin >> reps;
    while (reps > 0){
        if (b_ih){
            cout << ih;
            reps--;
            b_ih = false;
            b_il = true;
        } else if (b_il){
            cout << il;
            reps--;
            b_ih = true;
            b_il = false;
        }
        if (reps>0){
            cout << "that ";
        }
    }
    cout << "it";
}