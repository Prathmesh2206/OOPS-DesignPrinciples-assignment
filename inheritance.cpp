#include<bits/stdc++.h>
#include"multiLevelInheritance.h"
#include"multipleInheritance.h"
#include"hierarchical.h"


using namespace std;

int main(){
    //SingleLevel inheritance
    //creating a base class object
    cout<<"Example of single level inheritance:-\n";
    Base b;

    //calling base class printv method
    b.printv();
    //Derived class object creation 
    Derived d;
    //calling derived class method from derived class object
    d.printv();


    //calling base class method from derived class object
    d.Base::printv();
    cout<<"\n\n\n\n\n\n"<<endl;

    cout<<"Example of multilevel Inheritance"<<endl;
    //multilevel inheritance 
    DerivedLevel2 dl2;
    cout<<"\n\n\n\n\n\n"<<endl;

    cout<<"Example of multiple Inheritance"<<endl; 
    //Multiple inheritance
    Speed400 s1;
    //object accessing member of parent 1
    s1.Bajaj::printv();
    //object accessing member of parent 2
    s1.Triumph::printv();
    //object accessing its own member;
    s1.printv();
    cout<<"\n\n\n\n\n\n\n\n\n\n\n"<<endl;
    
    cout<<"Example of hierarchical Inheritance"<<endl; 
    //object of type 1 creating
    VehicleWithEngine vwe;
    //object of type 2 creating
    VehicleWithoutEngine vwoe;
    


}