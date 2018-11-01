#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {

	float x=0;
	float y=0;
	char z=0;

	cout << "Podaj pierwsza liczbe: ";
  cin>>x;
  cout << "Podaj druga liczbe: ";
  cin>>y;

	cout << "Co chcesz zrobic?: " <<endl;
	cout << "+ - * /" <<endl;
	cin >>z;

	if(z=='+'){
		cout << x+y <<endl;
	}
	else if (z=='-'){
		cout << x-y <<endl;
	}
	else if (z=='*'){
		cout << x*y <<endl;
	}
	else if (z=='/'){
		if (y==0){
			cout <<"Nie mozna dzielic przez 0"<<endl;
			cout <<"Podaj druga liczbe: ";
		  cin>>y;
		}
		else
			cout << x/y <<endl;
		}

return 0;
}
