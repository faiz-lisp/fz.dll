
#include<iostream>

using std::endl;
using std::cout;

extern "C" {
    //nop
    //(imp "libtest.dll" "_Z6fz_addii" "int" "int" "int")
    //(_Z6fz_addii 1 2)    
    int fz_add (int a,int b){
       return a+b;
    }
    void fz_echol (int a){ //
       cout<<a<<endl;
       return;
    }
    
    //ffi
}

