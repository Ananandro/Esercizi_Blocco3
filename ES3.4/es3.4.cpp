#include <iostream>
#include <cstring>
#include <cstdlib>



using namespace std;


void convCtoK(char buffer2[], double temps2[], int &tempte2){

    temps2[tempte2] = float(atof(buffer2));                                                            //PORCODIO LA ATOF NON FUNZIONA
    temps2[tempte2] = (temps2[tempte2]) + 275.15;
    tempte2++;

}


void convFtoK(char buffer2[], double temps2[], int &tempte2){

    temps2[tempte2] = float(atof(buffer2));                                                             //PORCODIO LA ATOF NON FUNZIONA
    temps2[tempte2] = (temps2[tempte2]*double(5/9)) + double(255.37);
    tempte2++;

}


void identificazione(char buffer1[], int x, double temps1[], int &tempte1){

    if(buffer1[x-1] == 'C'){

        convCtoK(buffer1, temps1, tempte1);
    }
    else if(buffer1[x-1] == 'F'){

        convFtoK(buffer1, temps1, tempte1);
    }
}


int main(){

    char stringa[1000];
    char separator = '@';
    char buffer[50];
    double temps[1000];
    int tempte = 0;

    cout << "Inserire roba con formato dato: " << endl;
    cin.getline(stringa, 999);
    
    int y = 0;

    for(int i=0; i <= strlen(stringa); i++){

        if(stringa[i] != separator){

            buffer[y] = stringa[i];
            y++;

            cout << stringa[i];

        }
        else if((stringa[i] == separator) || (stringa[i] == '\0')){

            identificazione(buffer, y, temps, tempte);
            y=0;

            cout << ", in Kelvin --> " << temps[tempte] << endl;
        }
    }


    return 0;

}
