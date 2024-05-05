#include<iostream>
using namespace std;
class Calculator{
	public:
		int a,b, choice;
		Calculator(){
			cout<<"Enter value of a: ";
			cin>>a;
			cout<<"Enter value of b: ";
			cin>>b;
			cout<<endl;
			
			cout<<"Enter 1 for addition"<<endl;
			cout<<"Enter 2 for subtraction"<<endl;
			cout<<"Enter 3 for multiplication"<<endl;
			cout<<"Enter 4 for Division"<<endl;
			cout<<"Enter 5 for Modulo"<<endl;
			cout<<endl;
			
			cout<<"Enter your choice: ";
			cin>>choice;
			
			switch(choice){
				case 1: cout<<"Addition of two no.s is: "<<a+b<<endl;
				break;
				case 2: cout<<"Subtraction of two no.s is: "<<a-b<<endl;
				break;
				case 3: cout<<"Multiplication of two no.s is: "<<a*b<<endl;
				break;
				case 4: cout<<"Division of two no.s is: "<<a/b<<endl;
				break;
				case 5: cout<<"Modulo of two no.s is: "<<a%b<<endl;
				break;
			}
		}
};
int main(){
	Calculator();
}
