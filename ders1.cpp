//DERS 1 �RNEKLER�

#include<iostream>
using namespace std;

int squareByValue( int ); // value pass prototype
void squareByReference( int& ); // reference pass prototype
int boxVolume(int length = 1 , int width = 1 , int height = 1);
//default argumanlar� fonksiyonun prototype de yazmal�y�z.

int main()
{
	// 1.�RNEK - BY.VALUE & BY.REFERENCE
	int x = 2 ;
	int z = 4 ;
	
	cout << " x  = "  << x << "  before squareByValue \n " ;
	cout << "Value returned by squareByValue : " << squareByValue( x ) << endl;
	cout << " x  =  " << x << "  after squareByValue\n " << endl;
	
	cout << "**************************************************************" << endl;
	
	cout << " z  = " << z << "  before squareByReference \n ";
	squareByReference ( z ) ;
	cout << " z  = " << z << "  after squareByReference " << endl;
	
	cout << "---------------------------------------------------------------" << endl;
	//2.�RNEK - AL�AS
	
	int i_name  = 13;
	int &i_nick  = i_name;  // i_nick refers to (is an alias for) i_name
	
	cout << "name  =  " << i_name << endl << "nick  = " << i_nick << endl;
	
	i_nick = 15; //modifies i_name too
	cout << "name = " << i_name << endl << "nick  = " << i_nick << endl;

	cout << "---------------------------------------------------------------" << endl;
	//3.�RNEK - DEFAULT ARGUMAN	
	
	cout << "The default box volume  is  :  " << boxVolume() << endl;
	cout << "The default box volume  with 'length = 10' is  :  " << boxVolume( 10 ) << endl;
	cout << "The default box volume with 'length = 10 , width = 5' is  :  " << boxVolume( 10 , 5 ) << endl;
	cout << "The default box volume with 'length = 10 , width = 5 , height = 3' is  :  " << boxVolume( 10 , 5 , 3) << endl;
}

int squareByValue( int num)
{
	int square = num * num ; 
	return square;
}

void squareByReference( int& numRef)
{
	numRef *= numRef;
	
}

//default argumanlar� hem prototypede hem de header dosyas�nda yazmak bize derleme hatas� verir.
int boxVolume( int length , int width , int height )
{
	return length * width * height ;
}
