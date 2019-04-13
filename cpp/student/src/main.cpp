#include <iostream>
#include <string>
//using namespace std;
class student{
	private:
	std::string name;
	long id;
	double math,english,physic,chemistry;
	public:
	student (std::string n,long i,double x,double y,double z, double f){//constructor
		name=n;
		id=i;
		math=x;
		english=y;
		chemistry=z;
		physic=f;
	}
	std::string getname();
	long getid();
	double getmath();
	double getenglish();
	double getchem();
	double getphy();
	double getavg();
	void display();
};
std::string student::getname(){
	return name;
}
long student::getid (){
	return id;
}
double student::getmath(){
	return math;
}
double student::getenglish(){
	return english;
}
double student::getchem(){
	return chemistry;
}
double student::getphy(){
	return physic;
}
double student::getavg(){
	return (math+english+chemistry+physic)/4;
}
double comparision (double x){
	if (x>=85 && x<=100 ) std::cout<<"Excellent Grade";
	else if (x<=84 && x>=7.5) std::cout<<"fine grade";
	else std::cout<<"Sucks grade";
return 0;
}
void student::display(){
	std::cout<<"Name: "<<getname()<<std::endl;
	std::cout<<"Id: "<<getid()<<std::endl;
	std::cout<<"Average: "<<getavg()<<std::endl;
	std::cout<<"Grade: "<<comparision(getavg())<<std::endl;
}
int main(){
	student s("ky",123160056,99,89,99,77);
	s.display();
	return 0;
}