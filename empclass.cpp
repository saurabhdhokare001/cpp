#include<iostream>
#include<iomanip>
using namespace std;

class Employee
{
  	public:char name[30];
  	public:char employee_ID[30];
  	public:char employee_mobile[10];
  	public:char employee_designation[100];
  	public:int basic_salary;
  	public:float da;
  	public:float gross_salary;
  	public:float hra;
	public:void getdata();
	public:void putdata();
};

int main()
{

 	class Employee a[100];
 	int i,n;
  
	cout<<"Enter the number of employee:";
	cin>>n;

	for(i=0;i<n;i++)
	{
  		cout<<"Enter the name of employee:";
  		cin>>a[i].name;
  		cout<<endl;  

  		cout<<"Enter the id of employee:";
  		cin>>a[i].employee_ID;
  		cout<<endl; 

 		cout<<"Enter the mobile number of an employee:";
  		cin>>a[i].employee_mobile;
  		cout<<endl; 

  		cout<<"Enter the designation of employee:";
  		cin>>a[i].employee_designation;
  		cout<<endl; 

  		cout<<"Enter the basic salary of employee:";
  		cin>>a[i].basic_salary;
  		cout<<endl; 

  		a[i].da = (80*a[i].basic_salary)/100;
  		a[i].hra = (20*a[i].basic_salary)/100;
 		a[i].gross_salary = a[i].basic_salary+a[i].da+a[i].hra;
	}

 	cout<<"Details about employee:"<<endl;
 
 	cout<<"Name"<<setw(20)<<"ID"<<setw(20)<<"Mobile"<<setw(20)<<"Designation"<<endl;
	for(i=0;i<n;i++)
	{
 		cout<<a[i].name<<setw(20)<<a[i].employee_ID<<setw(18)<<a[i].employee_mobile<<setw(18)<<a[i].employee_designation<<endl;
	}

	cout<<endl;
	cout<<endl;
	cout<<"Salary details of an employee:"<<endl;

	cout<<"basic salary"<<setw(20);cout<<"DA"<<setw(20);cout<<"hra"<<setw(20);cout<<"gross salary"<<setw(20)<<endl;

	for(i=0;i<n;i++)
	{
  		cout<<a[i].basic_salary<<setw(20);cout<<a[i].da<<setw(20);cout<<a[i].hra<<setw(20);cout<<a[i].gross_salary<<setw(20);
	}
	cout<<endl;
}
