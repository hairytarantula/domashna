#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	
	cout <<"Dai chislo: ";
    int n;
    cin >> n;
    cout << "Delitelite na chisloto ti sa: "<< endl;
    for (int i = 1; i < n; i++) {
        if (n%i == 0) {
            cout << i  << endl;
        }
    }
    cout << n <<endl;
	
	 return 0;	
}
"# 4zad" 
