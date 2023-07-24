#include<bits/stdc++.h>
using namespace std;
class Bajaj{
    public:
            void printv(){
                cout<<"we will provide retail stores"<<endl;
            }
};

class Triumph{
    public:
            void printv(){
                cout<<"We will provide technology and brand value"<<endl;
            }
};

class Speed400:public Bajaj,public Triumph{
    public:
            void printv(){
                cout<<"Will be a very good machine"<<endl;
            }
};