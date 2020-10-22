/*5. Create any base class as per your wish and extend that into other derived class.You should be able to understand the
calling order or default constructors, parameterised constructors and destructorsof all the classes. You should
implement hybrid inheritance in this example.*/
#include<iostream>
using namespace std;
class one
{
public:
one()
{
cout<<"class 'one' Default constructor(base class)"<<endl;
}
one(int a)
{
cout<<"\n class 'one' Parameterized constructor(base class)\n"<<endl;
}
};
class two:public one
{
public:
two()
{
cout<<"Class 'two ' Default constructor"<<endl;
}
two(int a){
cout<<"Class 'two' parameterized constructor"<<endl;
}
};
class three:public one,public two
{
public:
    three()
    {
    cout<<"Class 'three' Default constructor"<<endl;
    }
    three(int a){
    cout<<"class 'three' parameterized constructor"<<endl;
    }
};
class four:public two
{
    public:
four()
{
cout<<"Class 'four' default constructor"<<endl;
}
four(int a)
{
    cout<<"\t Class 'four' parameterized constructor\n";
}
};
int main()
{
four f;//this will call default constructor of one,two,three
cout<<"\n";
three t(1);//this will call default of one then two which will call one again and then parameterized constructor of class three
    return 0;
}
