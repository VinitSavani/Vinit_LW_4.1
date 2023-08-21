#include<iostream>
using namespace std;

class P 
{
	public:
		float cel;
		float fer;
		float kel;
		
		void set()
		{
			cout << "Enter temprature in Celsious :- " ;
			cin >> cel ;
		}
};

class Q : public P
{
	public:
		void toFer()
		{
			fer = cel * 1.8 + 32 ;
			cout << endl << "Temprature in Fehrenheit :- " << fer << endl ;
		}
};

class R : public Q
{
	public:
		void toKel()
		{
			kel = ( 0.55 * ( fer - 32 ) ) + 273.15 ;
			cout << endl << "Temprature in Kelvin :- " << kel << endl ;	
		}
};

int main()
{
	R data;
	
	data.set();
	data.toFer();
	data.toKel();
	
	return 0;
}
