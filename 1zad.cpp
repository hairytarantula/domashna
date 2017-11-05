#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	
	 
	int n,suma,bufer;

	cout << "Vavedi 4islo mejdu 10 i 5555: ";
	cin >> n;
	if ((n < 10) || (n > 5555)){
		cout <<"Ne si v zadadeniq interval, probvai pak";
		return 0;
	}

   for( int a = 1; a <= n; a = a + 1 ) {
   	
   	cin >> bufer;
   	suma = suma + bufer;
  
   	}
    cout << "suma: " << suma << endl;
	
	return 0;
}
"# 1zad" 
