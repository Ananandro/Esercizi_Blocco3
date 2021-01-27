#include <iostream>
#include <cstring>


using namespace std;




int main(){

    char frase[100];

    cout << "Inserisci una frase ed io la riscrivero' al contrario." << endl;
    cin.getline(frase, 100);

    int num = strlen(frase);

    cout << "Ecco la frase rovesciata: " << endl;

    for(int i=(num-1); i>=0; i--){

        cout << frase[i];

    }

    return 0;

}