#include<iostream>
#include<iomanip>
using namespace std;
const int max_size=10;
struct Product
{
	int id;
	char name[20];
	float price,gst,totalprice;
};
int main()
{
	 Product p[max_size];
	int temp=0,next=-1,choice;
	while(temp!=2)
	{
	cout<<"enter the choice1.insert,2.delete,3.display"<<endl;
	cin>>choice;
		switch(choice)
		{
			case 1:
				if(next==max_size)
				{
					cout<<"list is full"<<endl;
				}	
				else
				{
					next++;
					cout<<"enter the product name"<<endl;
					cin>>p[next].name;
					cout<<"enter the product id"<<endl;
					cin>>p[next].id;
					cout<<"enter the product price"<<endl;
					cin>>p[next].price;
					cout<<"enter the product gst  in percentage"<<endl;
					cin>>p[next].gst;
					p[next].totalprice=(p[next].price*p[next].gst/100)+p[next].price;
					
				}
				break;
			case 2:
				if(next==-1)
				{
					cout<<"list in underflow"<<endl;
				}
				else
				{
	
					next--;
				}
				break;
			case 3:
				if(next==-1)
				{
					cout<<"list is empty";
				}
				else
				{
					cout<<"product name"<<setw(15)<<"product id"<<setw(15)<<"product price"<<setw(20)<<"GST"<<setw(15)<<" totalprice"<<endl;
					for(int i=0;i<=next;i++)
					{
						cout<<p[i].name<<setw(15)<<p[i].id<<setw(15)<<p[i].price<<"Rs."<<setw(20)<<p[i].gst<<"%"<<setw(15)<<p[i].totalprice<<"Rs."<<endl;
					
					}
				}
				break;
			default :
				
				cout<<"wrong choice";
			break;
		}
	}
}
