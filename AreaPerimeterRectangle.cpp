#include<iostream>
using namespace std;
class Rectangle{
	private:
		int length, breadth;
		public:
			Rectangle(int l, int b){
				length=l;
				breadth=b;
			}
			void area_perimeter_rectangle(){
				cout<<"Enter length: ";
				cin>>length;
				cout<<"Enter breadth: ";
				cin>>breadth;
				
				cout<<endl;
				cout<<"Area of rectangle is: "<<length*breadth<<endl;
				cout<<"Perimeter of rectangle is: "<<2*(length+breadth)<<endl;
			}
};
int main(){
	Rectangle r1=Rectangle(2,3);
	r1.area_perimeter_rectangle();
}
