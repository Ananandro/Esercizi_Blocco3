#include <iostream>
#include <cstdlib>
#include <cstring>


using namespace std;





int main(){

    char sos[10];
    
    cout << "Inserisci un numero seguito da D" << endl;
    cin >> sos;

    int len = int(strlen(sos));

    if(sos[len-1] != 'D'){

        cout << "NON TERMINA CON LA D!!!";
    }
    else if(sos[len-1] == 'D'){

        cout << atoi(sos);
    }


    return 0;

}