#include<iostream>
using namespace std;
class Bank{
	public:
		int account_no;
		float balance, deposit_amount, withdraw_amount, new_balance;
		char depositor_name[20], account_type[20];
		
		void values(){
			cout<<"Enter Account no.: ";
			cin>>account_no;
			cout<<"Enter Depositor Name: ";
			cin>>depositor_name;
			cout<<"Enter Balance: ";
			cin>>balance;
			cout<<"Enter account_type: ";
			cin>>account_type;
			cout<<endl;
		}
		void deposit(){
			
			cout<<"Enter amount you want to deposit: ";
			cin>>deposit_amount;
			balance=balance+deposit_amount;
		}
		void withdraw(){
			cout<<"Your account balance is: "<<balance<<endl;
			cout<<endl;
			cout<<"Enter amount you want to withdraw: ";
			cin>>withdraw_amount;
			cout<<endl;
			balance=balance-withdraw_amount;
		}
		void display(){
			cout<<"Name: "<<depositor_name<<endl;
			cout<<"Balance after withdrawing money is: "<<balance<<endl;
		}
			
};
int main(){
	Bank b1;
	b1.values();
	b1.deposit();
	b1.withdraw();
	b1.display();
}
