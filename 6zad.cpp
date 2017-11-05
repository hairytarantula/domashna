#include<iostream>
 using namespace std;
 
int sumacifri (int num) {
    int suma = 0;
    while (num > 0) {
        suma += num % 10;
        num /= 10;
    }
    return suma;
}
 
int main() {
    int n, suma=0;
    cout << "Dai dvucifreno chislo: ";
    cin >> n;
    if (n<10 || n>99) {
    	cout << "Ne e dvucifreno, probvai pak.";
        return 0;
    }
    for (int i = 10; i <= n; i++) {
        suma += sumacifri (i);
    }
    cout << "Sumata na cifrite na dvucifrenite chisla do vavedenoto e: "<< suma << endl;
    
    return 0;
}
"# 6zad" 
