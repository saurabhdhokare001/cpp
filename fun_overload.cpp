#include<iostream>
using namespace std;

class Circle{
	private:
	int centerX;
	int centerY;
	int radius;
	int circumference;
	int area;

	public:
	Circle(){
		centerX=0;
		centerY=0;
		radius=0;
		circumference=0;
		area=0;
	}

	Circle(int cx, int cy){
		centerX=cx;
		centerY=cy;
		radius=0;
		circumference=0;
		area=0;
	}
	Circle(int cx, int cy, int r){
		centerX=cx;
		centerY=cy;
		radius=r;
		circumference=0;
		area=0;
	}
	
	void calcArea(){
		area=3.14*radius*radius;
	}

	void getArea(){
		cout<<"area of cicle="<<area<<endl;
	}

	void calcCircumference(){
		circumference=2*3.14*radius;	
	}

	void getCircumference(){
		cout<<"circumference of circle="<<circumference<<endl;
	}
};

int main()
{
 	Class c1(5,5,3);
	c1.calcCircumference();
	c1.calcArea();
	
	c1.getCircumference();
	c1.getArea();
}



























