//INHERITANCE
/*
- kalýtýlmýþ class ana class ýn non-private üyelerine eriþebilir.
- kalýtýlmýþ class için de constructor yazmak önemli. constructor miras alýnmaz.
- protected kullamanýn belirli sýkýntýlarý vardýr. private datalara üyelik fonksiyonlarý ile ulaþýlmalýdýr.
*/


#include<iostream>
#include<string>
#include<iomanip> 

using namespace std;



class CommissionEmployee
{
	public:
		CommissionEmployee( const string& , const string& , const string& , double = 0.0 , double = 0.0) ;
		
		void setFirstName ( const string& ) ;
		string getFirstName() const ; 
		
		void setLastName ( const string& ) ;
		string getLastName() const ; 
		
		void setSocialSecurityNumber( const string& ) ;
		string getSocialSecurityNumber() const ; 
		
		void setGrossSales( double ) ;
		double getGrossSales() const ;
		
		void setCommissionRate ( double ) ;
		double getCommissionRate() const ;
		
		double earnings() const ;
		void print() const ;

/*	
	protected: //private tanýmlanýrsa bu deðerlere kalýtýlmýþ classdan eriþemeyiz.
		string firstName ;
		string lastName ;
		string socialSecurityNumber ;
		double grossSales ;
		double commissionRate ;
		
*/
	private:
		string firstName ;
		string lastName ;
		string socialSecurityNumber ;
		double grossSales ;
		double commissionRate ;
		
	
};

class BasePlusCommissionEmployee : public CommissionEmployee
{
	public:
		BasePlusCommissionEmployee ( const string& , const string& , const string& , double = 0.0 , double = 0.0 , double = 0.0) ;
		
		void setBaseSalary( double ) ;
		double getBaseSalary() const ;
		
		double earnings() const ;
		void print() const ;
		
	private: 
		double baseSalary ;
};


int main()
{
	CommissionEmployee employee( "Sue" , "Jonas" , "222-22-2222" , 10000 , .06) ;

	cout << fixed << setprecision( 2 ) ;
	
	cout << "Employee information obtained by get functions: \n" 
		<<"\nFirst name is " << employee.getFirstName() 
		<<"\nLast name is " << employee.getLastName() 
		<<"\nSocial security number is " << employee.getSocialSecurityNumber() 
		<<"\nGross sales is " << employee.getGrossSales() 
		<<"\nCommission rate is " << employee.getCommissionRate() << endl; 	
		
		
	employee.setGrossSales( 8000 ) ;
	employee.setCommissionRate( .1 ) ;
	
	cout << "\nUpdated employee information  output by print function: \n" << endl ;
	employee.print() ;
	
	cout << " \n\nEmployee's earnings :  $" << employee.earnings()  << endl ;
	
	BasePlusCommissionEmployee bpcEmployee( "Bob" , "Lewis" , "333-33-3333" , 5000 , .04 , 300);
	
	cout << fixed << setprecision(2 ) ;
	
	cout << "Employee information obtained by get functions: \n"
		<<"\nFirst name is " << bpcEmployee.getFirstName()
		<<"\nLast name is " << bpcEmployee.getLastName() 
		<< "\nSocial security number is " << bpcEmployee.getSocialSecurityNumber()
		<<"\nGros sales is " << bpcEmployee.getGrossSales()
		<<"\nCommission rate is " << bpcEmployee.getBaseSalary() << endl;
		
	bpcEmployee.setBaseSalary( 1000 ) ;
	
	cout << "\nUpdated employee information output by printing function: \n" << endl;
	bpcEmployee.print() ;
	
	cout << "\n\nEmployee's earnings:  $" << bpcEmployee.earnings() << endl;   
	
}

CommissionEmployee :: CommissionEmployee(
	const string& first , const string& last , const string& ssn , 
	double sales , double rate )
		: firstName( first ) , lastName( last ) , socialSecurityNumber( ssn )
	{
	
		setGrossSales ( sales ) ;
		setCommissionRate ( rate ) ;
	}
	
void CommissionEmployee :: setFirstName ( const string& first )
{
	firstName = first ;
}

string CommissionEmployee :: getFirstName () const
{
	return firstName ;
}

void CommissionEmployee :: setLastName( const string& last) 
{
	lastName = last ;
 } 
 
string CommissionEmployee :: getLastName() const
{
	return lastName ;
}

void CommissionEmployee :: setSocialSecurityNumber( const string& ssn)
{
	socialSecurityNumber = ssn ;
}

string CommissionEmployee :: getSocialSecurityNumber() const
{
	return socialSecurityNumber;
}

void CommissionEmployee :: setGrossSales ( double sales ) 
{
	grossSales = ( sales < 0.0 ) ? 0.0 : sales ;
}

double CommissionEmployee :: getGrossSales() const
{
	return grossSales ;
}

void CommissionEmployee :: setCommissionRate ( double rate )
{
	commissionRate = ( rate > 0.0 && rate < 1.0) ? rate : 0.0 ;
}

double CommissionEmployee :: getCommissionRate() const
{
	return commissionRate ;
}

double CommissionEmployee :: earnings() const
{
	return getCommissionRate() * getGrossSales() ;
}

void CommissionEmployee:: print () const
{
	cout << "commission employee: " << getFirstName() << ' ' << getLastName()
		 << "\nsocial security number: " << getSocialSecurityNumber()
		 << "\ncommission rate : " << getCommissionRate() ;
}

BasePlusCommissionEmployee :: BasePlusCommissionEmployee( const string& first , const string& last , const string& ssn ,
double sales , double rate , double salary) : CommissionEmployee( first ,last , ssn , sales , rate)
{
	setBaseSalary ( salary ) ;
}

void BasePlusCommissionEmployee :: setBaseSalary ( double salary ) 
{
	baseSalary = ( salary < 0.0 ) ? 0.0 : salary ;
}

double BasePlusCommissionEmployee :: getBaseSalary() const
{
	return baseSalary ;
}

double BasePlusCommissionEmployee :: earnings() const
{
	return getBaseSalary() + CommissionEmployee :: earnings() ;
	//return baseSalary + ( commissionRate*grossSales ) ;
}

void BasePlusCommissionEmployee :: print() const
{
/*	cout << "base-salaried commission employee:  " << firstName << ' '
		 << lastName << "\nsocial security number: " << socialSecurityNumber 
		 << "\ngross sales: " << grossSales
		 << "\ncommission rate:" << commissionRate
		 << "\nbase salary: " << baseSalary ;
 */   
 
 	cout <<"base-salaried " ;
 	CommissionEmployee :: print() ;
 	cout << "\nbase salary : " << getBaseSalary() ;
 
 }
