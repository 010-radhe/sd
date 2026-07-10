#include<bits/stdc++.h>
using namespace std;
class A{

    // protected:
    // A(){
    //     cout<<"A constructor"<<endl;
    // }
    // private:
    // A(){
    //     cout<<"A private constructor"<<endl;
    // }

    public:
    virtual void print()=0;
    void f1(){
        cout<<"f1"<<endl;
    }
};
class B: public A{
    public:
    void print(){
        cout<<"B print"<<endl;
    }
};
int main(){
    B a;
    return 0;
}