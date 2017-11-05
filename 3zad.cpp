#include <iostream>
using namespace std;
 
int main()
{    
// s int cifrite shte sa max 10 ;(
    long long n;
    int cifri = 0;
    cout  << "Vavedi si chisloto: ";
    cin >> n;
    do {
        n /= 10;
        cifri++;
    }while (n > 0);
    cout << "Broi cifri: " << cifri << endl;
   
       return 0;
}
"# 3zad" 
