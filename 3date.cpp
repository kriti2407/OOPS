#include<iostream>
using namespace std;
class Date{
	int day,month,year;
	public:
		Date(int d,int m,int y){
			day=d;
			month=m;
			year=y;

		}
		void setyear(int y){

			year=y;

			}
	    void setmonth(int m){
	    	if(m>=1&&m<=12)
			month=m;
			else
			month=1;
			}
		void setday(int d){
			day=d;

			}

	    int getyear(){return year;}
	    int getmonth(){return month;}
	    int getday(){return day;}


		int displaymessage(int day,int month,int year){
			cout<<"DATE YOU ENTERED IS = "<<getday()<<"/"<<getmonth()<<"/"<<getyear()<<endl;
		}
};


int main()
{
int d,m,y;
cout<<"ENTER DAY,DATE AND YEAR = ";
cin>>d>>m>>y;
Date d1(d,m,y);
d1.setyear(y);
d1.setmonth(m);
d1.setday(d);
  cout<<d1.displaymessage(d,m,y)<<endl;

return 0;
}
