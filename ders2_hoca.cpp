//DERS 2 HOCANIN ÖRNEKLERÝ

#include<iostream>
using namespace std;

double pi = 3.14;
inline double circleArea( double); 
/*
inline fonksiyonlar küçük iþleri yapýcak fonksiyonlar için kullanýlabilir.
inline keywordu kullanýlmalýdýr.
*/

int tripleByValue ( int );
void tripleByReference ( int& );


int main()
{
	
	//1.ÖRNEK -INLÝNE FUNCTÝON
	double radius;
	
	cout << "Enter the radius : " ;
	cin >> radius ;
	cout << "The area is " << circleArea(radius) << endl;
	
	cout << "---------------------------------------------------------------" << endl;
	//2.ÖRNEK - BY.VALUE & BY.REFERENCE
	int c;
	
	
	cout << "Enter a value : ";
	cin >> c;
	cout << "fonksiyon ciktisi : " << tripleByValue(c) << endl;
	cout << "c degeri : " << c << endl;
	
	cout << "************************" << endl;
	
	cout << "call by reference c : " << endl;
	tripleByReference(c) ;
	cout << "c degeri : " << c << endl;
	//c degeri fonksiyon çaðrýsýndan sonra eski haline gelmez , güncellenmiþtir. 
	
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

