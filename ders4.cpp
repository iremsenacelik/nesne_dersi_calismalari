//DERS 4 - LENGTH VE SUBSTR
#include<iostream>
#include<string>
using namespace std;

int main()
{
	//length - string bir ifadenin uzunlu�unu verir. bo�luklar 1 character say�l�r.
	string input;
	cout << "enter a sentence please : " ;
	getline(cin , input);
	cout << "you have " << input.length() << " character in your sentense" << endl; 
	//substr( a , b ) - a indisinden baslay�p b indisine kadar al�r ve verilen de�i�kene atar.
	if ( input.length() > 10 )
	{
		string newinput = input.substr(0 , 10);
		cout << newinput << endl;
	}
}
