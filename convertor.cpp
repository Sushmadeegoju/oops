#include<iostream>
using namespace std;


class convertor{
    float length;
    float inch2cm(){
        return length*2.54;
    }
    float cm2inch(){
        return length/2.54;
    }
    float km2mile(){
        return length*1.6;
    }
    float mile2km(){
        return length/1.6;
    }
    public:

        friend void print(convertor obj,int n,float a);
};

void print(convertor obj, int n,float a){
    obj.length=a;
    switch(n){
        case 1: cout<<"the inch2cm conversion is:"<<obj.inch2cm()<<endl;break;
        case 2: cout<<"the cm2inch conversion is:"<<obj.cm2inch()<<endl;break;
        case 3: cout<<"the km2mile conversion is:"<<obj.km2mile()<<endl;break;
        case 4: cout<<"the mile2km conversion is:"<<obj.mile2km()<<endl;break;
        default: cout<<"invalid choice"<<endl;

    }
}

int main(){
    convertor obj;
    float a;
    int n;
    cout<<"161210019-sushma_deegoju"<<endl;
    while(1){
    cout<<"enter the no.:"<<endl;
    cin>>a;
    cout<<"the menu is:"<<"1.inch2cm\t"<<"2.cm2inch\t"<<"3.mile2km\t"<<"4.mile2km\n"<<"your choice is:";
    cin>>n;


    print(obj,n,a);
    }
}
