#include<bits/stdc++.h>
using namespace std;
#include"singleLevelInheritance.h"



//Multilevel inheritance
class DerivedLevel2:public Derived{
        public:
            DerivedLevel2(){
                cout<<"Derived level 2 constructor calling"<<endl;
            }
};