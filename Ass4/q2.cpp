/*2.Draw an inheritance hierarchy for students at a university. Use Student as the base class of the hierarchy, then include
classes UndergraduateStudent and GraduateStudent that derive from Student . Continue to extend the hierarchy as deep
(i.e.,as many levels) as possible. For example, Freshman, Junior and Senior might derive from UndergraduateStudent ,
and DoctoralStudent and MastersStudent might derive from GraduateStudent . After drawing the hierarchy, discuss the
relationships that exist between the classes. Also, implement the above hierarchy using C++ code. */


#include<iostream>
using namespace std;
class student{
public:
    student(){
    cout<<"CLASS STUDENT "<<endl;
    }
};
class underGraduate:public student{
public:
    underGraduate(){
    cout<<"CLASS UNDERGRADUATE"<<endl;
    }
};
class freshman:public underGraduate{
public:
    freshman()
    {
    cout<<"CLASS FRESHMAN"<<endl;
    }
};
class junior:public underGraduate{
public:
    junior(){
    cout<<"CLASS JUNIOR"<<endl;}
};
class senior:public underGraduate{
public:
    senior(){
    cout<<"CLASS SENIOR "<<endl;
    }
};
class postGraduate:public student{
public:
    postGraduate()
    {
    cout<<"CLASS POSTGRADUATE "<<endl;
    }
    };
class doctorate:public postGraduate{
public:
    doctorate()
    {
    cout<<"CLASS DOCTORATE"<<endl;
    }
    };
class master:public postGraduate{
public:
    master()
    {
    cout<<"CLASS MASTER"<<endl;
    }
    };



    int main(){
    freshman f;
    return 0;
    }
