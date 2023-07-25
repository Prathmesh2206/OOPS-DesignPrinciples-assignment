#include<bits/stdc++.h>
using namespace std;


class Vehicle{
    public:
            virtual void print(){};
            ~Vehicle(){}
};

class ThreeWheeler: public Vehicle{
    public:
        void print(){
            cout<<"I am a three wheeler"<<endl;
        }
};

class TwoWheeler: public Vehicle{
    public:
        void print(){
            cout<<"I am a Two wheeler"<<endl;
        }
};

class FourWheeler:public Vehicle{
    public:
        void print(){
            cout<<"I am a four wheeler"<<endl;
        }
};


class VehicleFactory{
    public:
            Vehicle* build(int vehicleType){
                if(vehicleType==1){
                    return new TwoWheeler();
                }else if(vehicleType==2){
                    return new ThreeWheeler();
                }else if(vehicleType==3){
                    return new FourWheeler();
                }else return NULL;
            }
};