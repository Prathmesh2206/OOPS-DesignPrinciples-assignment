#include<bits/stdc++.h>
using namespace std;
//Single level inheritance
class Base{
    private:
            int privateVar;
    public:
            int publicVar;
            Base(){
                publicVar=10;
                privateVar=5;
                protectedVar=15;
                cout<<"Base constructor calling"<<endl;
            }
            void printv(){
                cout<<"printing the private var-> "<<privateVar<<endl;
                cout<<"printing the public var-> "<<publicVar<<endl;
            }
    protected:
            int protectedVar;
};


class Derived: public Base{
    public:
            int dervicedPublicVar;
            Derived(){
                dervicedPublicVar=10;
                cout<<"Derived constructor calling"<<endl;
            }
            void printv(){
                cout<<"printing variable of derived class-> "<<dervicedPublicVar<<endl;
                //accessing base class variable through derived class
                cout<<"printing public variable of base class-> "<<publicVar<<endl;
            }
};
