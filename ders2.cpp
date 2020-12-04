//DERS 2 ÖRNEKLERÝ

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
	//1.ÖRNEK - UNARY SCOPE RESOLUTÝON OPERATOR
	
	double num = 10.13;
	cout << "Local value of number is :  " << num << endl;
	cout << "Global value of number is  :  "  << ::num << endl; //:: oparetörü global deðiþkene eriþmemizi saðlar.
 	
 	cout << "---------------------------------------------------------------" << endl;
 	//2.ÖRNEK - FUNCTÝON OVERLOADÝNG
 	//Farklý data tipleri için ayný iþlemi yapan fonksiyonlar için kullanýlýr.
 	
 	cout << "square of integer 5 is :  " << square(5) << endl;
 	cout << "square of double 10.7 is :  " << square(10.7) << endl;
 	
 	cout << "---------------------------------------------------------------" << endl;
 	//3.ÖRNEK - RANDOM ÝSÝM ÜRETME
 	//__ ile baþlanýr . ardýndan gelen sayý (Z) fonksiyon isminde kaç tane karakter olduðunu gösterir.
 	//sayýdan sonra fonksiyon ismi gelir. ardýndan aldýklarý tipler geliyor.
 	// bu þekilde compiler bunun hangi fonksiyon olduðunu anlar .
 	//__Z6squarex -- örnek.
 	//main fonksiyonu overloading edilemez.
 	
 	
	cout << "---------------------------------------------------------------" << endl;
	//4.ÖRNEK - FUNCTÝON TEMPLATES
	//fonksiyon overloading templateler kullanýlarak , çok daha kolay þekilde yapýlabilir.
	
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
 

