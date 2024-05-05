// parameterized constructor (same name as class)
#include<iostream>
using namespace std;
class circle{
	private:
		int r; //data member
		
		public:
		circle(int radius) // default constructor
		{
			r = radius;
		}
		void area(){
		//	float area;
		//	cin>>r;
			cout<<"Area of circle is: "<<3.14*r*r<<endl;
		}
		void circumferance(){
		//	float circumferance;
		//	cin>>r;
			cout<<"Circumferance of circle is: "<<2*3.14*r<<endl;
		}
};
int main(){
	circle c1=circle(20);
	c1.area();
	c1.circumferance();
}
