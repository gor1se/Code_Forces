#include <string>
#include <iostream>
using namespace std;

void spalte_ab_erstem(string eingabezeile, char spaltungszeichen, string &ergebnis, string &rest);

int main(){
    string text = "Ich bin, ein Text";
    string ergebnis = "", rest = "";
    char spaltzeichen = ',';
    spalte_ab_erstem(text, spaltzeichen, ergebnis, rest);
    cout << "Ergebnis" << ergebnis << endl;
    cout << "Rest" << rest << endl;
    cout << "Ursprung" << text << endl;
}


void spalte_ab_erstem(string eingabezeile, char spaltungszeichen, string &ergebnis, string &rest){
    bool check = true;
    for (int i = 0; i < eingabezeile.length(); i++)
    {
        if(eingabezeile.at(i) == spaltungszeichen && check == true){
            check = false;
            continue;
        }
        if(check == true){
            if(eingabezeile.at(i) == ' '){
                continue;
            }            
            ergebnis += eingabezeile.at(i);

        } else if(check == false){
            if(eingabezeile.at(i) == ' '){
                continue;
            }
            rest += eingabezeile.at(i);
        }
    }
}