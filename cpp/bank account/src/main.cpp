#include <iostream>
#include<string>
class account{
	private:
	std::string name;
	double balance;
	long id;
	public:
	account(double balance,long id,std::string name){
		this->balance=balance;
		this->id=id;
		this->name=name;
	}
	double getbalance(){
		return balance;
	}
	std::string getname(){
		return name;
	}
	long getid(){
		return id;
	}
	void deposit(double x){
		balance=balance+x;
	}
	void withdraw(double y){
		balance=balance-y;
	}
	void displayinfo(){
		std::cout<<"Account information:"<<std::endl;
		std::cout<<"Name: "<<getname()<<std::endl;
		std::cout<<"Id: "<<getid()<<std::endl;
		std::cout<<"Balance: "<<getbalance()<<std::endl;
	}
	void ui(){
		int i;
		double x;
		displayinfo();
		std::cout<<"Do you wish the following action:";
		std::cout<<"1. deposit\n2. withdraw\n";std::cin>>i;
		switch (i)
		{
			case 1/* constant-expression */:
				std::cout<<"Please enter the specific ammount: ";std::cin>>x;
				deposit(x);/* code */
				break;
		
			case 2:
			std::cout<<"Please enter the specific ammount: ";std::cin>>x;
			withdraw(x);
				break;
		}
	}
};
int main(int argc, char *argv[]) {
	account a(200000,123160056,"ky");
	a.ui();
	a.displayinfo();
	return 0;
}