#include<bits/stdc++.h>
using namespace std;

//public
class A{
    public:
    void publicFunction(){
        cout<<"Public function"<<endl;
    }
    protected:
    void protectedFunction(){
        cout<<"Protected function"<<endl;
    }
    private:
    void privateFunction(){
        cout<<"Private function"<<endl;
    }
};
class B: public A{
    public:
    void accesseProtectedFunctionOfA(){
        protectedFunction();
        // privateFunction();
    
};
//public Function or class: Acccessed by object or by inherting class
int main(){
    A a;
    a.publicFunction();
    //can not access protected and private functions
    // a.protectedFunction();
    // a.privateFunction();

    B b;
    b.accesseProtectedFunctionOfA();

    return 0;
}