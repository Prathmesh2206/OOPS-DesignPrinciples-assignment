#include<bits/stdc++.h>
using namespace std;


class Helper1{
    public:
            void MethodOne(){
                cout<<"This is a method of helper 1 class"<<endl;
            }
};

class Helper2{
    public:
            void MethodTwo(){
                cout<<"This is a method of helper 2 class"<<endl;
            }
};

class Helper3{
    public:
            void MethodThree(){
                cout<<"This is a method of helper 3 class"<<endl;
            }
};


class Facade{
    private:
            Helper1 *helper1;
            Helper2 *helper2;
            Helper3 *helper3;
    public:
        Facade(){
            helper1=new Helper1();
            helper2=new Helper2();
            helper3=new Helper3();
        }

        void MethodA(){
            cout<<"Function A combining functionality of helper 1 and helper 2"<<endl;
            helper1->MethodOne();
            helper2->MethodTwo();
        }

        void MethodB(){
            cout<<"Function B combining functionality of helper 2 and helper 3"<<endl;
            helper2->MethodTwo();
            helper3->MethodThree();
        }
};