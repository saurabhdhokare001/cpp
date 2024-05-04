#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

class person
{
	public:
		string name;
		string mob;
		string email;
		string add;

	void get_person()
	{
		cout<<"enter the name"<<endl;
		cin>>name;
		cout<<"enter mob no."<<endl;
		cin>>mob;
		cout<<"enter email"<<endl;
		cin>>email;
		cout<<"enter the address"<<endl;
		cin>>add;
	}

	void display_person()
	{
		cout<<name<<setw(25)<<mob<<setw(25)<<email<<setw(25)<<add<<endl;
	}
};
class Employee:public person
{
	public:
		int emp_Id;
		string designation;
		double salary;
	void get_emp()
	{
		person::get_person();
		cout<<"enter employee Id"<<endl;
		cin>>emp_Id;
		cout<<"enter designation"<<endl;
		cin>>designation;
		cout<<"enter employee salary"<<endl;
		cin>>salary;
	}
	void display_emp()
	{
	      
		person::display_person();
		
		cout<<emp_Id<<setw(25)<<designation<<setw(25)<<salary<<setw(25)<<endl;
	}
};

int main()
{
	Employee e;
	cout<<"enter employee details"<<endl;
	e.get_emp();
	cout<<"employee details"<<endl;
        cout<<"employee ID"<<setw(25)<<"designation"<<setw(25)<<"salary"<<setw(25)<<endl;
	e.display_emp();
}

		
		
	
		
