#include<bits/stdc++.h>
#include"singleton.h"

using namespace std;

int main(){
    //implementation of singleton Design
    Singleton* onlyObj=Singleton::getInstance();
    onlyObj->print();
    Singleton* obj2=Singleton::getInstance();
    obj2->print();
    return 0;
}