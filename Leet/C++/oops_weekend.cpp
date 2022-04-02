#include<iostream>
using namespace std;


int ptsm(int a, int b){
    int *p1=&a,*p2=&b;
    return *p1+*p2;
}

void maxpt(int a,int b){
    int *p11=&a;
    int *p22=&b;
    if(*p11>*p22)
        cout<<*p22<<" is smaller";
    else if(*p11==*p22){
        cout<<*p11<<" is equal to "<<*p22;
    }
    else{
        cout<<*p11<<" is smaller";
    }
}

