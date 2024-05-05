#include<iostream>
using namespace std;
class Person{
	private:
		string name, country;
		int age;
		public:
		Person(string n, string c, int a){
			name=n;
			country=c;
			age=a;
	}
		void set(){
			cout<<"Enter name: ";
			cin>>name;
			cout<<"Enter country: ";
			cin>>country;
			cout<<"Enter age: ";
			cin>>age;
			cout<<endl;
		}
		void get(){
			cout<<"Name is: "<<name<<endl;
			cout<<"Country is: "<<country<<endl;
			cout<<"Age is: "<<age<<endl;
		}
};
int main(){
	Person p1=Person("Muktak","India",30);
	p1.set();
	p1.get();
}
