#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {

	int x=0;

	cout<<"Podaj bok trojkata: ";
	cin>>x;

	while(x<=0){
		cout<<"Bok trojkata musi byc wiekszy od 0 \n";
		cout<<"Podaj bok trojkata: ";
		cin>>x;
	}

	for(int i=0; i<x; i++){

		for(int j=0; j<=i; j++){
			cout << "*";
		}
		cout << endl;
	}

return 0;
}
