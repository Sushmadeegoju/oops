#include<iostream>
using namespace std;
class calc
{
int a,b;
public:
    void get(int x,int y){
    a=x;
    b=y;
    }
    void sum(void){
    cout<<"sum is:"<<a+b;
    }
    void difference(void){
    cout<<"difference is:"<<a-b;
    }
    void multiply(void){
    cout<<"result is :"<<a*b;
    }
    void divide(void){
        if(b!=0)
            cout<<"result is:"<<a/b;
        else
            cout<<"division of given numbers is not possible";
    }
};
int main(){
    calc obj;
    int n,x,y;
    cout<<"161210019-Sushma_deegoju\n";
    cout<<"enter x and y:\n";
    cin>>x>>y;
    obj.get(x,y);
    while(true){
    cout<<"\nthe menu is:\n"<<"1.sum\t"<<"2.difference\t"<<"3.multiply\t"<<"4.divide\n"<<"your choice is:";
    cin>>n;
    switch(n){
        case 1:obj.sum();break;
        case 2:obj.difference();break;
        case 3:obj.multiply();break;
        case 4:obj.divide();break;
        default:cout<<"select a proper choice";
    }
    }

}
