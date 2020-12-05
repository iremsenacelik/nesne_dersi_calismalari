//CONSTANT 
/*
	CONST - Bir nesnenin de�i�tirilemez oldu�unu belirtmek i�in kullan�l�r.
	Nesnenin constant olmas� durumunda �yelik fonksiyonlar� da constant tan�mlanmal�d�r.
	Hem protoype hem definitionda const olarak tan�mlanmal�d�r.
	Get fonksiyonlar� const tan�mlanmal�d�r.
	Nesneleri tan�mlarken const keywordunu definitionun ba��na ekliyoruz. �yelik fonksiyonlar�n�n sonuna eklenir.

*/
#include<iostream>
#include<string>

using namespace std;

class Increment
{
	public:
		Increment( int c = 0 , int i = 1 ); //default constructor
		void addIncrement();
		void print() const;
		
	private:
		int count;
		const int increment;
	
};

int main()
{
	Increment value ( 10, 5 ) ;
	
	cout << "Before incrementing : " ;
	value.print() ;
	
	for ( int j = 1 ; j <= 3 ; j++)
	{
		value.addIncrement();
		cout << "After increment " << j <<" : " ;
		value.print() ; 
	}
}

//const ve non-const data memberlara atama yapma .
Increment :: Increment( int c , int i)
	: count ( c ), //initializer for non-const member
	  increment ( i ) // required initializer for const member
{ 
	//count = c ; --> allowed becouse count is non-constant
	//increment = i ; --> ERROR : Cannot modify a const object.
	// empty body
} // end constructor Increment

void Increment :: addIncrement()
{
	count += increment ;
}

void Increment :: print() const
{
	cout << "count = " << count << ", increment = " << increment << endl;
}
