#include<iostream>
using namespace std;
class Triangle{
	private:
		int length_a, length_b, length_c;
		
		public:
			Triangle(int a, int b, int c){
				length_a=a;
				length_b=b;
				length_c=c;
			}
			void set(){
				cout<<"Enter length of a: ";
		cin>>length_a;
		cout<<"Enter length of b: ";
		cin>>length_b;
		cout<<"Enter length of c: ";
		cin>>length_c;
		cout<<endl;
			}
			void equilateral(){
				if(length_a==length_b && length_b==length_c && length_c==length_a){
					cout<<"It is an equilateral triangle"<<endl;
				}
			}
			void isoscales(){
				if((length_a==length_b && length_b!=length_c) || (length_b==length_c && length_c!=length_a) || (length_c==length_a && length_a!=length_b)){
					cout<<"It is isocales triangle"<<endl;
				}
			}
			void scalene(){
				if(length_a!=length_b && length_b!=length_c && length_c!=length_a){
					cout<<"It is scalene triangle"<<endl;
				}
			}
};
int main(){
	Triangle t1=Triangle(1,2,3);
	t1.set();
	t1.equilateral();
	t1.isoscales();
	t1.scalene();
}
