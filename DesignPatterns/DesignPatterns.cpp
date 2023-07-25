#include<bits/stdc++.h>
#include"singleton.h"
#include"factory.h"

using namespace std;

int main(){
    //implementation of singleton Design
    cout<<"Example of Singleton Pattern:"<<endl;
    Singleton* onlyObj=Singleton::getInstance();
    onlyObj->print();
    Singleton* obj2=Singleton::getInstance();
    obj2->print();
    cout<<endl<<endl<<endl<<endl<<endl<<endl;

    cout<<"Example of Factory Pattern:"<<endl;
    while(1){
        cout<<"Enter the type from following:-"<<endl<<"1.FourWheeler"<<endl<<"2.ThreeWheeler"<<endl<<"3.TwoWheeler"<<endl<<"4.End"<<endl;
        int choice;
        cin>>choice;
        if(choice==4)
        break;
        VehicleFactory vehicleFactory;
        Vehicle* vehicle=vehicleFactory.build(choice); 
        vehicle->print();
    }   
    cout<<endl<<endl<<endl<<endl<<endl;

    cout<<"Example of Facade Pattern:-"<<endl;


    return 0;
}