#include <iostream>
using namespace std;

int main(){
    int Limak, Bob, years = 0;
    cin >> Limak;
    cin >> Bob;
    while(Bob >= Limak){
        years++;
        Bob = Bob*2;
        Limak = Limak*3; 
    } 
    cout << years;
    return 0;
}