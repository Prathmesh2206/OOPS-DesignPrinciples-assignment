#include<bits/stdc++.h>
using namespace std;
class Vehicle{
    public :
        Vehicle(){
            cout<<"Vehicle constructor is called"<<endl;
        }
};

class VehicleWithEngine:public Vehicle{
    public:
        VehicleWithEngine():Vehicle(){
            cout<<"Vehicle with engine called"<<endl;
        }
};

class VehicleWithoutEngine:public Vehicle{
    public:
        VehicleWithoutEngine():Vehicle(){
            cout<<"Vehicle without engine called"<<endl;
        }
};
