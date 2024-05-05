// Multiple inheritence

#include<iostream>
using namespace std;
class parent1{
	public:
	void electronic_dept(){
		cout<<"This is parent1 class method"<<endl;
	}
};
class parent2{
	public:
	void electronic_dept1(){
		cout<<"This is parent2 class method"<<endl;
	}
};
class child: public parent1, public parent2{
	public:
	void electronic_dept2(){
		cout<<"This is child class method"<<endl;
	}
};
int main(){
	child c1;
	c1.electronic_dept();
	c1.electronic_dept1();
	c1.electronic_dept2();
}
