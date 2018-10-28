#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {

	int x = 0;

	cout << "Podaj x:";
	cin >> x;

	for(int i=1; i<=x; i++){
		if (x % i == 0) cout << i;
	}


return 0;

}
