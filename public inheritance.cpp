// PUBLIC DERIVATION
#include <iostream>
using namespace std;
class B
{
    int a ;
    public: 
    int b ;
    void get_ab();
    int get_a();
    void show_a(void);

};

class D: public B
{
    int c;
    public: 
    void mul (void);
    void display(void);
} ;

void B::get_ab(void) // jo uper datatype defined h whi lena
{
    a=5; b=10;
}
int B:: get_a()
{
    return a;
}
void B:: show_a()
{
  cout<<"a = "<<a<<"/n";
}

void D :: mul()
{
    c=b*get_a();
}

void D :: display()
{
    cout<< "a ="<<get_a()<<"/n";
    cout<< "b ="<< b <<"/n";
     cout<< "c ="<< c <<"/n";
}

int main()
{
    D d;
    d.get_ab();
    d.mul();
    d.show_a();

    d.b=20;
    d.mul();
    d.display();

    return 0;
}
/*Explaination -
The class D is a public derivation of base class B. Therefore, D inherits all the public members of B and retain their visibility . THhus a public 
of base class is also a public member of derived class D. The PRIVATE MEMBERS OF B CANNOT BE INHERITED BY D . THE CLASS D IN EFFECT WILL HAVE MORE 
MEMBERS THAN WHAT IT CONTAINS AT THE TIME OF DECLARATION.*/

/* The program illustrates that D has full acess to all public members of class B. functions show_a() and mul():
void B :: show_a()
{
    cout<<"a= "<< a <<"\n";
}

void D :: mul()
{
    c=b*get_a();
}
Although the data member a is private in B and cannot be inherited , objects of D are able to access it through an inherited member
function of B . 

*/

