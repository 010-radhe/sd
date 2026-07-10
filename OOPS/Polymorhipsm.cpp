#include<bits/stdc++.h>
using namespace std;

// Function Overloading
class PaymentService{
    public:
    void pay(double amount){
        cout<<"Payment of "<<amount<<" is done"<<endl;
    }
    void pay(double amount, string upiId){
        cout<<"Payment of "<<amount<<" "<<upiId<<" is done"<<endl;
    }
    void pay(double amount, string cardNumber, string cvv, string expiryDate){
        cout<<"Payment of "<<amount<<" "<<cardNumber<<" "<<cvv<<" "<<expiryDate<<" is done"<<endl;
    }
};

//Operator Overloading
class Complex{
    public:
    int real,imag;
    Complex(int r, int i){
        real = r;
        imag = i;
    }
    Complex(){
        real = 0;
        imag = 0;
    }
    Complex operator + (Complex c){
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }
};
// Run time polymorphisms
class Animal{
    public:
    Animal(){
        cout<<"Animal constructor"<<endl;
    }
   virtual ~Animal(){
        cout<<"Animal destructor"<<endl;
    }
    public:
   virtual void sound(){
        cout<<"Animal makes sound"<<endl;
    }
};

class Dog: public Animal{
    public:
    Dog(){
        cout<<"Dog constructor"<<endl;
    }
    ~Dog(){
        cout<<"Dog destructor"<<endl;
    }
    void sound(){
        cout<<"Dog barks"<<endl;
    }
};



int main(){
    // Animal a;
    // Dog d;
//     Dog *d=new Dog();
// delete d;
    //    Animal *a;
    //    a= new Animal();
    // delete a;
    Animal *a;
    a=new Dog();
    delete a;

    cout<<"----Function Overloading----"<<endl;
    PaymentService ps;
    ps.pay(100);
    ps.pay(100, "1234567890");
    ps.pay(100, "1234567890", "123", "12/2026");

    cout<<"----Operator Overloading----"<<endl;
    Complex c1(10, 20), c2(30, 40);
    Complex c3 = c1 + c2;
    cout<<c3.real<<" + "<<c3.imag<<"i"<<endl;

    return 0;
}
