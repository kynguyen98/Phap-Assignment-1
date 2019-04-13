#include<iostream>
#include<math.h>
//using namespace std;
class point{
    private: 
    double x,y,z;
    public:
    point (double x,double y,double z){
        this->x=x;
        this->y=y;
        this->z=z;
    }
    double getx(){
        return x;
    }
    double gety(){
        return y;
    }
    double getz(){
        return z;
    }
    double distancefromcenter(){
        return distancefrom(0,0,0);
    }
     double distancefrom(point other){
     return sqrt(pow(x-other.z,2)
     +pow(y-other.y,2)+
     pow(z-other.z,2));
 }
 double distancefrom(double xval,double yval,double zval){
     return sqrt(pow(x-xval,2)+pow(y-yval,2)
     +pow(z-zval,2)
     );
 }
 void display(){
     std::cout<<"Here is the cordinate:\n";
     std::cout<<"X:"<<getx()<<" ";
     std::cout<<"Y:"<<gety()<<" ";
     std::cout<<"Z:"<<getz()<<" \n";
     //std::cout<<distancefrom(getx(),gety(),getz());
 }
};
int main(){
    point p(1,2,3);
    point p2(3,4,1);
    p.display();
    p2.display();
    std::cout<<"Point 1 to center: "<<p.distancefromcenter()<<"\n";
    std::cout<<"Distance between point 1 and point 2: "<<p.distancefrom(p2);
    return 0;

}