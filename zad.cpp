#include <iostream>
using namespace std;
int main() {
int liczba ;
cout<<"Podaj liczbę a sprawdze czy daje reszta z dzielenia przez 5"<<endl;
cin>>liczba;
cout << "Podana liczba = " << liczba << endl;
string mhm;

if (liczba %5 == 2) mhm = "Reszta z dzielenia to 2 ";

 else  mhm = "Liczbe nie daje reszty 2";

cout << mhm << endl;
return 0;
}
