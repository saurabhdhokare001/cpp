#include<iostream>
using namespace std;

class B{
	public:
	void display()
	{
		cout<<"This is base display"<<endl;	
	}
	void view()
	{
		cout<<"This is base view"<<endl;
	}
		
};
class D1:virtual public B
{
	public:
	void display()
	{
		cout<<"This is D1 display"<<endl;	
	}
	void view()
	{
		cout<<"This is D1 view"<<endl;
	}	
};
class D2:virtual public B
{
	public:
	void display()
	{
		cout<<"This is D2 display"<<endl;	
	}
	void view()
	{
		cout<<"This is D2 view"<<endl;
	}	
};
class D3:public D1,public D2
{
	public:
	void display()
	{
		cout<<"This is D3 display"<<endl;	
	}
	void view()
	{
		cout<<"This is D3 view"<<endl;
	}	
};
int main()
{
	B *b;
	D3 d;
	b=&d;
	b->display();
	b->view();
}
