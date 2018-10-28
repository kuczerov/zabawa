#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a = 0;
	int b = 0;
	int c = 0;
	cout << "Podaj a:";
	cin >> a;
	cout << "Podaj b:";
	cin >> b;
	cout << "Podaj c:";
	cin >> c;

	if (a+b<c){
		cout << "Trojkat jest prostokatny";
	}
	else
		cout << "Trojkat nie jest prostokatny";

return 0;

}
