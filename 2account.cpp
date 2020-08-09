
#include<iostream>
using namespace std;
class Account{
	int balance;
	public:
		Account()
		{cout<<"enter the balance : ";
		cin>>balance;
		}

		int credit(int cr)
		{

		return balance+cr;
		}

	   int debit(int deb)
		{
		if(deb>balance)
		{cout<<"AMOUNT EXCEEDS BALANCE ";}
		else
		return balance-deb;

		}

		int getbalance()
		{return balance;
		}

};
int main(){
	int n,m,j,k;
	Account a1, a2;

	cout<<"\nENTER THE AMOUNT TO CREDIT AND DEBIT IN ACCOUNT 1 RESPECTIVELY : ";
	cin>>n>>m;
	cout<<"\nBALANCE IN ACCOUNT 1 : "<<a1.getbalance()<<"\nAMOUNT AFTER CREDIT : "<<a1.credit(n)<<"\nAMOUNT AFTER DEBIT : "<<a1.debit(m)<<endl;


	cout<<"\nENTER THE AMOUNT TO CREDIT AND DEBIT IN ACCOUNT 2 RESPECTIVELY : ";
	cin>>j>>k;
	cout<<"\nBALANCE IN ACCOUNT 2 : "<<a2.getbalance()<<"\nAMOUNT AFTER CREDIT : "<<a2.credit(j)<<"\nAMOUNT AFTER DEBIT : "<<a2.debit(k)<<endl;

	return 0;
}
