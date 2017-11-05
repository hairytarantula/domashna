#include<iostream>
 
using namespace std;
 
bool provericifri (int num) {
    int cifri [3];
    int i = 0;
    while (num > 0) {
    	
    	
        cifri[i] = num % 10;
        for (int k = 0; k < i; k++) {
            if (cifri[k] == cifri[i]) {
                return false;
            }
        }
        num /= 10;
        i++;
    }
    //dano da vrashta vqrno
    return 1;
}
 
int main() {
    for (int i = 100; i <= 999; i++) {
        if (provericifri(i)) {
            cout << i  << endl;
        }
    }
    return 0;
}
"# 5zad" 
