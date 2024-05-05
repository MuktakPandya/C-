//Multilevel Inheritence

#include<iostream>
using namespace std;
class grandfather{
	public:
		void set(){
			cout<<"this is class grand father method"<<endl;
		}
};
class father: public grandfather{
	public:
		void set1(){
			cout<<"this is class father method"<<endl;
		}
};
class son: public father{
	public:
		void set2(){
			cout<<"this is class son method"<<endl;
		}
};
int main(){
	son s1;
	s1.set();
	s1.set1();
	s1.set2();
}


