//CONSTANT 
/*
	CONST - Bir nesnenin değiştirilemez olduğunu belirtmek için kullanılır.
	Nesnenin constant olması durumunda üyelik fonksiyonları da constant tanımlanmalıdır.
	Hem protoype hem definitionda const olarak tanımlanmalıdır.
	Get fonksiyonları const tanımlanmalıdır.
	Nesneleri tanımlarken const keywordunu definitionun başına ekliyoruz. Üyelik fonksiyonlarının sonuna eklenir.

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
