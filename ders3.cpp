//DERS 3 - CLASSES AND OBJECTS

#include<iostream>
#include<string>
using namespace std;


class GradeBook
{
	// hi�bir keyword yazmazsak , default de�er private 'd�r.
	public:
		void displayMessage()
		{
			cout << "welcome to my github account" << endl;
		}
		void displayMessage( string courseName)
		{
			cout << "welcome to my github course : " << courseName << endl;
		}
		void displayUserNameMessage()
		{
			cout << "welcome to my github  " << getUserName() << endl;
		}
		
		void setUserName ( string name) 
		{
			userName = name;
		}
		string getUserName()
		{
			return userName ; 
		}
		
		
	private:
		string userName;
};



int main()
{	
	//1.�RNEK - GRADEBOOK
	GradeBook myGradeBook; // GradeBook s�n�f�ndan myGradeBook nesnesi olusturuldu.
	myGradeBook.displayMessage(); //nesne �zerinden s�n�f�n methodu �a�r�ld�.
	
	//KLAVYEDEN G�R�� ALMA VE KULLANMA
	
	string courseName;
	cout << "Enter your course name :  " ;
	getline(cin , courseName);
	cout << endl;
	myGradeBook.displayMessage(courseName);
	
	
	//SET - GET FONKS�YONLARI
	
	string userName ;
	cout << endl;
	cout << "Enter your name please : " ;
	getline(cin , userName);
	myGradeBook.setUserName( userName );
	cout << endl;
	myGradeBook.displayUserNameMessage();
}


