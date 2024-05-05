#include<iostream>
using namespace std;
class bank_account{
	private:
		int account_number, balance;
		public:
			bank_account(int a, int b){
				account_number=a;
				balance=b;
			}
			void set(){
				int deposit_amount;
				cout<<"Enter your Account number: ";
				cin>>account_number;
				cout<<endl;
				cout<<"Enter amount you want to deposit: ";
				cin>>deposit_amount;
				cout<<endl;
				balance=balance+deposit_amount;
				cout<<"Account number: "<<account_number<<endl;
				cout<<"Balance after depositing money is: "<<balance<<endl;
				cout<<endl;
			}
			void get(){
				int withdraw_amount;
				cout<<"Enter amount you want to withdraw: ";
				cin>>withdraw_amount;
				cout<<endl;
				balance=balance-withdraw_amount;
				cout<<"Account number: "<<account_number<<endl;
				cout<<"Balance after withdrawing money is: "<<balance<<endl;
			}
};
int main(){
	bank_account b1=bank_account(1,0);
	b1.set();
	b1.get();
}
