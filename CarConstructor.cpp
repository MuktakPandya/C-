#include<iostream>
using namespace std;
class Car{
	private:
		string company,model;
		int year;
		public:
			Car(string c,string m,int y){
				company=c;
				model=m;
				year=y;
			}
			void set(){
				cout<<"Enter name of car compnay: ";
				cin>>company;
				cout<<"Enter model of car: ";
				cin>>model;
				cout<<"Enter year of car: ";
				cin>>year;
				cout<<endl;
			}
			void get(){
				cout<<"Name of car company: "<<company<<endl;
				cout<<"Model of car: "<<model<<endl;
				cout<<"Year of car: "<<year<<endl;
			}
};
int main(){
	Car c1= Car("A","B",1);
	c1.set();
	c1.get();
}
