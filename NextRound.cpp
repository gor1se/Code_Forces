#include <iostream>
#include <vector>
#include <algorithm>
#define PB push_back
using namespace std;

int main() {
    int n, k, count = 0, add = 1;
    cin >> n >> k;
    vector<int> teilnehmer;
    for (int i = 0; i < n; i++) {
        int inpt;
        cin >> inpt;
        teilnehmer.PB(inpt);
    }
    sort(teilnehmer.begin(), teilnehmer.end());
    for (int i = n; i > 0; i--) {
        if (teilnehmer.at(i-1) == teilnehmer.at(k)) {
          count ++;
          }
        }
    if (teilnehmer.at(n - 1) == 0) {
        count = 0;
    } else
    {
        count += k;
    }
    cout << count;
}

// Man zähle die ersten k aus dem Vector und addiert zusätzlich alle Elemente die dem kleinsten k entsprechen welches gezählt wurde.
// Ich gehen den Vecor durch und überprüfe if Element = ktes Element count ++
// Überlege dir beim erstellen eines Algorithms an welchenw Stellen du Loopen kannst