#include <iostream>
using namespace std;

int main(int argc, char** argv) {

    int n;
    cout << "Dai chislo: ";
    cin >> n;
    if (n<10 || n>200) {
        return 0;
    }
    for (int i = n; i >= 7; i--) {
        if (i % 7 == 0) {
            cout << i << endl;
        }
    }
    return 0;
}
"# 7zad" 
