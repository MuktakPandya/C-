// parameterized constructor (same name as class)
#include<iostream>
using namespace std;
class employee{
	private:
		int id;       //data members
		string name;
		char performance_rating;
		float salary;	
		public:
		employee(int i, string n, float s) // default constructor
		{
			id=i;
			name=n;
			salary=s;
		}
		void details(){
			cout<<"Enter Employee ID: ";
			cin>>id;
			cout<<"Enter Name: ";
			cin>>name;
			cout<<"Enter Performance rating(A, B, C or D): ";
			cin>>performance_rating;
		}
		void get(){
			if(performance_rating=='A'){
				cout<<"Salary is Rs 60,000";
			}
			if(performance_rating=='B'){
				cout<<"Salary is Rs 50,000";
			}
			if(performance_rating=='C'){
				cout<<"Salary is Rs 40,000";
			}
			if(performance_rating=='D'){
				cout<<"Salary is Rs 30,000";
			}
		}
};
int main(){
	employee e1= employee(1,"Muktak",2000);
	e1.details();
	e1.get();
}
