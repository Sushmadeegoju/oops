#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;

class user{
    int acc_num;
    double p,si,ci;
    string name;
    public:
        user(int acc=0, double bal=0.0, string userName=""){
            acc_num=acc;
            p=bal;
            //name=userName;
            strcpy(name,userName);
        }
        friend class bank;
        friend void display(user &);

};

class bank{
    double t,r;
    public:
        bank(double time, double rate){
            t=time;
            r=rate;
        }
        double si(user &u){
            u.si=u.p+((u.p)*t*r)/100;
        }
        double ci(user &u){
            return u.ci= (u.p)*pow((1+(r/100)),t);
        }

};

void display(user &u){
    cout<<"the amount after calculating simple interest is:"<<u.si;
    cout<<"the amount after calculating    compound interest is:"<<u.ci;
}

int main(){
    user u[10];
    bank b(5,2);
    int acc,n;
    double bal;
    string userName;
    cout<<"enter the no. of users:";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"enter the details:\n"<<"userName:";
        cin>>userName;
        cout<<"acc_num";
        cin>>acc;
        cout<<"balance:";
        cin>>bal;
        u[i](acc, bal, userName);
        b.si(u[i]);
        b.ci(u[i]);
        display(u[i]);
    }
}
