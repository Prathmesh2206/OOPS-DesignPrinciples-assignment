#include<bits/stdc++.h>
using namespace std;

class Singleton{
    private:
            int var;
            static Singleton* instancePtr;
            Singleton(){
                cout<<"Singleton instance is called"<<endl;
                var = 10;
            }
    public:
            //deleted copy constructor so no copy can be made out of the given instance
            Singleton (const Singleton& obj)=delete;
            void operator=(const Singleton& obj)=delete;
            static Singleton* getInstance(){
                return instancePtr;
            }

            void print(){
                cout<<"Just a print function to print current address-> "<<this->instancePtr<<endl;
            }
};

Singleton* Singleton::instancePtr=new Singleton(); 