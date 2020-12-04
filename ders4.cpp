//DERS 4 - LENGTH VE SUBSTR
#include<iostream>
#include<string>
using namespace std;

int main()
{
	//length - string bir ifadenin uzunluðunu verir. boþluklar 1 character sayýlýr.
	string input;
	cout << "enter a sentence please : " ;
	getline(cin , input);
	cout << "you have " << input.length() << " character in your sentense" << endl; 
	//substr( a , b ) - a indisinden baslayýp b indisine kadar alýr ve verilen deðiþkene atar.
	if ( input.length() > 10 )
	{
		string newinput = input.substr(0 , 10);
		cout << newinput << endl;
	}
}
