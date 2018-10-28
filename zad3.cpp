#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a = 0;
	int b = 0;
	cout << "Podaj a:";
	cin >> a;
	cout << "Podaj b:";
	cin >> b;

	if (a>b){
		cout << a;
	}

	else if(a==b){
		cout <<"Liczby sa rowne";
	}

	else{
		cout << b;
	}

return 0;

}
