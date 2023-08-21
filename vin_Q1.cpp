#include<iostream>
using namespace std;

class X
{
	public:
		int a;
		int b;
		int c;
		int sum;
};

class Y : public X
{
	public:
		void set()
		{
			cout << "Enter value of A :- " ;
			cin >> a ;
			cout << "Enter value of B :- " ;
			cin >> b ;
			cout << "Enter value of C :- " ;
			cin >> c ;
		}
		
		void get()
		{
			a = a * a * a ;
			b = b * b * b ;
			c = c * c * c ;
			sum = a + b + c ;
			
			cout << endl << "The sum of all three numbers's cube is " << sum ;
		}
};

int main()
{
	Y data;
	
	data.set();
	data.get();
	
	return 0;
}

