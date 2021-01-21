#include <iostream>
using namespace std;

int main(){
    int x, steps = 0;
    cin >> x;
    while (x != 0){
        if (x>=5){
            x-=5;
            steps++;
        } else if (x>=4)
        {
            x-=4;
            steps++;
        } else if (x>=3)
        {
            x-=3;
            steps++;
        } else if (x>=2)
        {
            x-=2;
            steps++;
        } else if (x>=1) {
            x-=1;
            steps++;
        }
    }
    cout << steps;
    return 0;
}