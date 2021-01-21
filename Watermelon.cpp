#include <iostream>
#include <math.h>
// ios::sync_with_stdio(0);
// cin.tie(0);
using namespace std;

int main() {
    int k,c;
    cin >> k;
    int kr = round(k);
    c = (kr/2)%2;
    if (c == 0) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}

/*
erst einen Integer Wert einlesen. Dann Wert in float umwandeln und durch 2 teilen.
Dann wert ausgeben.
Float werte nicht mit dem == Operator abgleichen, das ist zu riskant.
Anstatt dessen einen größer und einen kleiner Wert angeben der das ganze überprüft.

7/2 = 3,5

3,5/ 2 = 1,75 (nicht gerade)

Wert nur in einen Integer umwandeln wenn es sich ungefähr um einen Intger handelt.

Makros definieren
#define PB push_back

*/