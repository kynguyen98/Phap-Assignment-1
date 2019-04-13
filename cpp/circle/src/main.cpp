#define _USE_MATH_DEFINES
#include<iostream>
#include <cmath>
using namespace std;
class circle{
	private:
	float radius;
	public:
	void setradius(float);
	float getradius() const;
	float area() const;
	float priemeter() const;
};
void circle::setradius(float r){
	radius=r;
}
float circle::getradius()const{
	return radius;
}
float circle::area() const{
	return M_PI*radius*radius;
}
float circle::perimeter() const{
	return 2*M_1_PI*radius;
}

int main(){
	circle c;
	float r;
	cout<<"enter the radius";cin>>r;
	c.setradius(r);
	cout<<"Here is the area";cout<<c.area();
	cout<<"Here is the priemeter";cout<<c.priemeter();
	return 0;
}
