#include <iostream>
using namespace std;
class B
{
    int a ;
    public: 
    int b ;
    void get_ab();
    int get_a();
    void show_a();

};

class D: private B           //private derivation
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
  cout<<"a = "<<a<<"\n";
}

void D :: mul()
{
    get_ab();
    c=b*get_a(); // a cannot be used directly
}

void D :: display()
{
    show_a(); // outputs value of a
    cout<< "a ="<<get_a()<<"\n";
    cout<< "b ="<< b <<"\n";
     cout<< "c ="<< c <<"\n";

}

int main()
{
    D d;
   // d.get_ab(); // get_ab() is private
    d.mul();
  //  d.show_a();//private
  //  d.get_a();
  //  d.b=20;
    d.mul();
    d.display();

    return 0;
}

/* suppose a base class and a derived class define a funcion of same name in such case what will happen if a
derived class object invokes thev function? In such cases derived class function supersedes base class definiotion. THe
base class function will be called only if derived class does not redefine the function. */ 
