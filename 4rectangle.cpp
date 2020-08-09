#include<iostream>
using namespace std;
class Rectangle{
	float length,breadth;
	public:
		Rectangle(){
			length=1.0;
			breadth=1.0;

		}
		float setlength(float l){
			if(l>(float)0&&l<(float)20)
			{length=l;}
			else
            {length=1.0;}

			}
	    float setbreadth(float b){
	    	if(b>(float)0&&b<(float)20)
	    	{breadth=b;}
	    	else
	    	{breadth=1.0;}
	    	;
			}

	    float getlength(){return length;}
	    float getbreadth(){return breadth;}


		float perimeter(){
			return 2*(length+breadth);
		}
		float area(){
			return length*breadth;
		}
};


int main()
{
	Rectangle r();
	float l,b;
cout<<"ENTER LENGTH AND BREADTH : ";
cin>>l>>b;
r.setlength(l);r.setbreadth(b);
cout<<"\nPERIMETER ="<<r.perimeter();
cout<<"\nAREA ="<<r.area();


return 0;
}
