/*4. Create a base Shape class which is inherited by TwoDShape and ThreeDShape and these shapes are further extended by their
 derived classes like square, rectangle, sphere etc. You should provide necessary methods like calculateArea, calculateVolume
 in these shapes*/
#include<iostream>
using namespace std;
class shape{
protected:
    int length,breadth,radius;
public:

    int getlength()
    {
    return length;
    }
};
class twoDshape:public shape{
protected:
    int peri,area;

public:
    int getperi(){
        return peri;
    }
    int getarea()
    {
    return area;
    }

};
class circle:public twoDshape{
public:
    circle(int r){
        length=r;
        peri=2*3.14*length;
        area=3.14*length*length;
        }
};
class rect:public twoDshape{
public:
    rect(int l,int b){
    area=l*b;
    peri=2*(l+b);
    }
};
class square:public twoDshape{
public:
    square(int s){
    length=s;
    peri=4*length;
    area=length*length;}
    };
class threeDshape:public shape{
protected:
    float vol;
public:
    float getvol()
    {
    return vol;
    }
};
class sphere:public threeDshape{
public:
    sphere(int r){
    length=r;
    vol=(4*3.14*length*length*length)/3;
    }
};
class cube:public threeDshape{
public:
    cube(int s){
    length=s;
    vol=s*s*s;}

    };
int main()
{
    square s(4);
    cout<<"PERIMETER OF SQUARE : "<<s.getperi()<<" AREA OF SQUARE : "<<s.getarea()<<endl;
    rect r(2,4);
    cout<<"PERIMETER OF RECTANGLE : "<<r.getperi()<<" AREA OF RECTANGLE : "<<r.getarea()<<endl;
    circle c(5);
    cout<<"CIRCUMFERENCE : "<<c.getperi()<<" AREA OF CIRCLE : "<<c.getarea()<<endl;
    sphere sp(6);
    cout<<"VOLUME OF SPHERE : "<<sp.getvol()<<endl;
    cube cub(10);
    cout<<"VOLUME OF CUBE : "<<cub.getvol();

return 0 ;
}
