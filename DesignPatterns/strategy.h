#include<bits/stdc++.h>
using namespace std;

class Travel{
    public :
        virtual void transport()=0;
        
};

class Ship:public Travel{
    public:
    void transport(){
        cout<<"transporting heavy cargo Plane"<<endl;
    }
};

class Bus:public Travel{
    public:
        void transport(){
            cout<<"Cost efficient transport via Plane"<<endl;
        }
};

class Plane:public Travel{
    public:
        void transport(){
            cout<<"Quick transport via Plane"<<endl;
        }
};


class Strategy{
    public:
        Travel* SendIt(int choice){
            if(choice==1)return new Ship();
            else if(choice==2)return new Bus();
            else return new Plane();
        }
};