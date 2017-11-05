#include <iostream>
using namespace std;
 
int main(int argc, char** argv) {

    double bufer = 0;
    double chisla = 0;
    double suma = 0;
    
    //ne sam sigurna kakvo tochno oznachava uslovieto
       
     do {
            cout << "Vavedi nqkakvo  chislo ot 1 do 200: ";
            cin >> bufer;
            if (bufer < 1 ) {
                cout << "Krai" << endl;
            }
           
           
            suma = suma + bufer;
            chisla++;  
            cout << "Broika chisla: " << chisla << endl;   
            cout << "Suma dosega: " << suma << endl;   
            cout << "Srednoaritmetichno: " << suma / chisla << endl;
           
 
        } while ((bufer >= 1) && (bufer <= 200));
       
    
    return 0;
}
"# 2zad" 
"# 2zad" 
