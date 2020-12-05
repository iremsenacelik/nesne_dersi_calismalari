#include <iostream>
#include <string>

using namespace std;



class Complex
{
public:
	Complex( double = 0.0 , double = 0.0  );
	Complex add( const Complex & ) ;
	Complex substract ( const Complex &) ;
	void setComplexNumber ( double , double );
	void printComplex ( );
	
private:
	double realPart ;
	double imaginaryPart ; 
};


int main()
{
	Complex a( 1 , 7 );
	Complex b( 9 , 2 );
	Complex c ;
	
	a.printComplex() ; 
	cout << " + " ,
	b.printComplex() ;
	cout << " = ";
	c = a.add(b) ;
	c.printComplex();
	cout << endl;
	
	c.printComplex() ; 
	cout << " - " ;
	b.printComplex() ; 
	cout << " = " ;
	c.substract( b ).printComplex() ;
  		
	return 0 ;
}


Complex :: Complex ( double real , double imaginary)
{
	setComplexNumber(real , imaginary) ;
}

Complex Complex :: add( const Complex& right) 
{
	return Complex ( realPart + right.realPart , imaginaryPart + right.imaginaryPart);
}

Complex Complex :: substract ( const Complex& right) 
{
	return Complex ( realPart - right.realPart , imaginaryPart - right.imaginaryPart);
}

void Complex :: setComplexNumber ( double r , double i)
{
	realPart = r;
	imaginaryPart = i ;
}

void Complex :: printComplex() 
{
	cout << "( " << realPart << "," << imaginaryPart << ")"  ;
}
