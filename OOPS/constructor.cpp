#include<bits/stdc++.h>
using namespace std;
class A{
    // public:
    // A(){
    //     cout<<"A constructor"<<endl;
    // }
    // protected:
    // A(){
    //     cout<<"A protected constructor"<<endl;
    // }
    public:
    static A* createObject(){
        if(c==0){
            c=1;
            return new A();
        }
        return nullptr;
    }
    static int c;

    private:
    A(){
        cout<<"A private constructor"<<endl;
    }
    
       
    

};
int A::c=0;

// class B: public A{
//     public:
//     B(){
//         cout<<"B constructor"<<endl;
//     }
// };
int main(){
    cout<<A::c<<endl;
    // A a;
    A *n=A::createObject();
    if(n!=nullptr){
        cout<<"Object created"<<endl;
    }
    else{
        cout<<"Object already created"<<endl;
    }
   
    A *n2=A::createObject();
    if(n2!=nullptr){
        cout<<"Object created"<<endl;
    }
    else{
        cout<<"Object already created"<<endl;
    }

    return 0;
}