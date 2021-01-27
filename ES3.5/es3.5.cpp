#include <iostream>
#include <cstring>
#include <cctype>



using namespace std;




int main(){

    char stringa[1000];
    int ricorrenze[26] = {0};

    cout << "Inserisci una o piu' frasi e contero' le ricorrenze di ogni lettera." << endl;
    cin.getline(stringa, 1000);

    for(int i=0; i<strlen(stringa); i++){

        if(isalpha(stringa[i]) > 0){

            if(int(stringa[i]) > 95){

                ricorrenze[int(stringa[i])-97]++;
            }
            else ricorrenze[int(stringa[i])-65]++;
        }

    }

    cout << "Le seguenti lettere si sono ripetute:" << endl;

    for(int z=0; z<26; z++){

        cout << char(z+65) << "/" << char(z+97) << " --> " << ricorrenze[z] << endl;
    }


    return 0;

}