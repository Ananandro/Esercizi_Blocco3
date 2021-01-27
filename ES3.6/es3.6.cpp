#include <iostream>
#include <cctype>
#include <time.h>



using namespace std;



int main(){

    srand(time(NULL));

    int sommelanci[10000];
    int dado1;
    int dado2;
    int numlanci;
    float statistiche[11] = {0};

    cout << "Inserire il numero di lanci da effettuare, fino ad un massimo di 10000." << endl;
    cin >> numlanci;

    for(int i=0; i<numlanci; i++){

        dado1 = (rand()%6) + 1;
        dado2 = (rand()%6) + 1;
        sommelanci[i] = dado1 + dado2;

        //cout << sommelanci[i] << "\t";

        statistiche[sommelanci[i]-2]++;
        //cout << statistiche[sommelanci[i]-2] << endl;
    }

    cout << "Ecco diverse statistiche con le probabilita' calcolate su un totale di " << numlanci << " lanci:" << endl;

    for(int x=0; x<=10; x++){

        cout << (x+2) << "\t-->\t" << (statistiche[x] / float(numlanci))*100.0 << endl;

    }


    return 0;
}