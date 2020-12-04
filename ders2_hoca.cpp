//DERS 2 HOCANIN �RNEKLER�

#include<iostream>
using namespace std;

double pi = 3.14;
inline double circleArea( double); 
/*
inline fonksiyonlar k���k i�leri yap�cak fonksiyonlar i�in kullan�labilir.
inline keywordu kullan�lmal�d�r.
*/

int tripleByValue ( int );
void tripleByReference ( int& );


int main()
{
	
	//1.�RNEK -INL�NE FUNCT�ON
	double radius;
	
	cout << "Enter the radius : " ;
	cin >> radius ;
	cout << "The area is " << circleArea(radius) << endl;
	
	cout << "---------------------------------------------------------------" << endl;
	//2.�RNEK - BY.VALUE & BY.REFERENCE
	int c;
	
	
	cout << "Enter a value : ";
	cin >> c;
	cout << "fonksiyon ciktisi : " << tripleByValue(c) << endl;
	cout << "c degeri : " << c << endl;
	
	cout << "************************" << endl;
	
	cout << "call by reference c : " << endl;
	tripleByReference(c) ;
	cout << "c degeri : " << c << endl;
	//c degeri fonksiyon �a�r�s�ndan sonra eski haline gelmez , g�ncellenmi�tir. 
	
}

double circleArea( double r )
{
	int area = pi * r * r;
	return area;
}

int tripleByValue ( int value)
{
	return value * 3;
}
void tripleByReference ( int& valueRef)
{
	valueRef = valueRef * 3;
}

