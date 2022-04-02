#include<iostream>
using namespace std;
int main(){
    int p1,p2,*p11,*p22;
    cin>>p1>>p2;
    p11=&p1;
    p22=&p2;
    if(*p11>*p22)
        cout<<*p22<<" is smaller";
    else if(*p11==*p22){
        cout<<*p11<<" is equal to "<<*p22;
    }
    else{
        cout<<*p11<<" is smaller";
    }
    return 0;
}
