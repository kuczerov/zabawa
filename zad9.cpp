#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {

	int x=0, y=0, suma=0;

	cout << "Podaj x dla przedzialu od 10 do 100: ";
	cin>>x;

		while (x<=10 || x>=100){
			cout << "Liczba "<<x<<" nie nalezy do przedzalu od 10 do 100: "<<endl;
			cout << "Podaj poprawnie x: ";
			cin>>x;
		}

	cout << "Podaj y dla przedzialu od "<<x<<" do 100: ";
	cin>>y;

		while (y<x || y>=100){
			cout << "Liczba "<<y<<" nie nalezy do przedzalu od "<<x<<" do 100: "<<endl;
			cout << "Podaj poprawnie y: ";
			cin>>y;
		}

	for (int i=x; i<=y; i=i+1){
		if (i%2==0){
			suma=suma+i;
		}
	}
	cout<<"Suma: "<<suma;

	return 0;
}
