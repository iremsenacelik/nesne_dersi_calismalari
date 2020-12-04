//DERS 2 �RNEKLER�

#include<iostream>
using namespace std;

int num = 13;
int square ( int );
double square( double );
void nothing1 ( int , float , char , int& );

template < class T >	 // or template < typename T >
T max( T value1 , T value2 , T value3)
{
	T maxValue = value1;
	
	if(value2 > maxValue ) 
	{
		maxValue = value2;
		return  maxValue;
	}
	if(value3 > maxValue ) 
	{
		maxValue = value3;
		return maxValue;
	}
		
	return maxValue;
		
}

int main()
{
	//1.�RNEK - UNARY SCOPE RESOLUT�ON OPERATOR
	
	double num = 10.13;
	cout << "Local value of number is :  " << num << endl;
	cout << "Global value of number is  :  "  << ::num << endl; //:: oparet�r� global de�i�kene eri�memizi sa�lar.
 	
 	cout << "---------------------------------------------------------------" << endl;
 	//2.�RNEK - FUNCT�ON OVERLOAD�NG
 	//Farkl� data tipleri i�in ayn� i�lemi yapan fonksiyonlar i�in kullan�l�r.
 	
 	cout << "square of integer 5 is :  " << square(5) << endl;
 	cout << "square of double 10.7 is :  " << square(10.7) << endl;
 	
 	cout << "---------------------------------------------------------------" << endl;
 	//3.�RNEK - RANDOM �S�M �RETME
 	//__ ile ba�lan�r . ard�ndan gelen say� (Z) fonksiyon isminde ka� tane karakter oldu�unu g�sterir.
 	//say�dan sonra fonksiyon ismi gelir. ard�ndan ald�klar� tipler geliyor.
 	// bu �ekilde compiler bunun hangi fonksiyon oldu�unu anlar .
 	//__Z6squarex -- �rnek.
 	//main fonksiyonu overloading edilemez.
 	
 	
	cout << "---------------------------------------------------------------" << endl;
	//4.�RNEK - FUNCT�ON TEMPLATES
	//fonksiyon overloading templateler kullan�larak , �ok daha kolay �ekilde yap�labilir.
	
	cout << "Three integer values are :  5 , 60 , 40 " << endl;
	cout << "Max integer is : " << max(5 , 60 , 40) << endl;
	
	cout << "Three double values are :  0.01 , 0.001 , 0.02 " << endl;
	cout << "Max double is : " << max(0.01 , 0.001 , 0.02) << endl;
	
		
		
		
	}
 	
 
 
 int square ( int x )
 {
 	return x*x ;
 }
 
 double square( double y )
 {
 	return y*y ;
 }
 
 void nothing1 ( int a , float b , char c , int& d)
 {
 	
 }
 
 void nothing2( char a , int b , float& c , double& d)
 {
 
 }
 

