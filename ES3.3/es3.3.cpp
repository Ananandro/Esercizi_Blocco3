#include <iostream>
#include <cstring>


using namespace std;



int main(){

    char stringa[100];
    char datrovare;
    int ricorrenze = 0;

    cout << "Inserire una frase (max 100 caratteri) composta di sole lettere minuscole e spazi:" << endl;
    cin.getline(stringa, 100);
    cout << "Ora inserisci un carattere minuscolo. Esso sara evidenziato rendendolo maiuscolo e conteggiato." << endl;
    cin >> datrovare;

    cout << "La frase risultante e':" << endl;

    for(int i=0; i < (strlen(stringa)); i++){

        if(stringa[i] == datrovare){

            stringa[i] = toupper(datrovare);
            ricorrenze ++;
        }

        cout << stringa[i];
    }

    cout << endl << "Il carattere specificato si e' ripetuto " << ricorrenze << " volte." << endl;

    return 0;
}