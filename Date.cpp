#include<iostream>
using namespace std;
class Date{
	private:
		int day, year, month;
		public:
			Date(int d, int y, int m){
				day=d;
				year=y;
				month=m;
			}
			void set(){
				cout<<"Enter month: ";
				cin>>month;
				cout<<"Enter year: ";
				cin>>year;
				cout<<"Ente day: ";
				cin>>day;
			}
			void get(){
				if(month>12){
					cout<<"Enter valid month - Month value can not be more than 12";
				}
				else if(day>31){
					cout<<"Enter valid day - day value can not be more than 31";
				}
				else if(year%4!=0 && month==2 && day>28){
					cout<<"Enter valid date: non-leap year can not have more than 28 days in February";
				}
				else if(year%4==0 && month==2 && day>29){
					cout<<"Enter valid date: February month can not have more than 29 days";
				}
				else if((month==4 || month==6 || month==9 || month==11) && day>30){
						cout<<"Enter valid no. of days in a month - 4,6,9 and 11 month can not have more than 30 days";
					}
				else{
					cout<<endl;
					cout<<"Date is: "<<day<<"-"<<month<<"-"<<year;
				}
			}
};
int main(){
	Date d1=Date(1,2,3);
	d1.set();
	d1.get();
}
