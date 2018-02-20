#include<iostream>
#include<string.h>
using namespace std;
class bank_account
{
    char depositor_name[50],type_of_account[50];
    int account_num;
    double balance_amount;
    public:
        void assign_values(char dep_name[],char type_of_acc[], int acc_num, double bal_amount){
            strcpy(depositor_name,dep_name);
            strcpy(type_of_account,type_of_acc);
            account_num=acc_num;
            balance_amount=bal_amount;
        }
        void deposit(int x){
            balance_amount+=x;
        }
        void withdrawl(int y){
            if(y<balance_amount)
                balance_amount-=y;
            else
                cout<<"insufficient balance";
        }
        void display(){
                cout<<"depositor_name is:"<<depositor_name;
                cout<<"\nbalance_amount is:"<<balance_amount;
        }
};
int main(){
    bank_account obj;
    int n,acc_num,x,y;
    double bal_amount;
    char name[50], type[50];
    cout<<"161210019-Sushma_deegoju\n";
    cout<<"enter the details:\n"<<"depositor_name:";
    cin>>name;
    cout<<"acc_num:";
    cin>>acc_num;
    cout<<"type_of_account:";
    cin>>type;
    cout<<"bal_amount:";
    cin>>bal_amount;
    obj.assign_values(name,type,acc_num,bal_amount);
    while(true){
        cout<<"\nthe menu is:\n"<<"1.deposit\t"<<"2.withdrawl\t"<<"3.display\t"<<"4.Exit\n"<<"your choice is:";
        cin>>n;

        switch(n){
            case 1:
                cout<<"enter the amount to be credited:";
                cin>>x;
                obj.deposit(x);
                break;
            case 2:
                cout<<"enter the amount to be debited:";
                cin>>y;
                obj.withdrawl(y);
                break;
            case 3:
                obj.display();
                break;

            default:cout<<"thank you";
            return 0;

}
}
}
