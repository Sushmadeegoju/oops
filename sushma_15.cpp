#include<iostream>
#include<cstdlib>
using namespace std;

class game
{
    int p1_ip, p2_ip,p1_score=0, p2_score=0;
public:
    int range=100;
    int p1_input(int z, int t)
    {
        cout<<"enter your choice(p1):";
        cin>>p1_ip;
        range-=20;
        cout<<"the range is:"<<"0-"<<range<<endl;
        if(p1_ip<z)
        {
            cout<<"the no. is greater than your choice"<<endl;

        }
        else if(p1_ip>z)
            cout<<"the no. is smaller than your choice"<<endl;
        else
        {
            cout<<"your guess is correct"<<endl;
            if(t==1)
                p1_score+=10;
            if(t==2)
                p1_score+=8;
            if(t==3)
                p1_score+=6;
            if(t==4)
                p1_score+=4;
            if(t==5)
                p1_score+=2;
            cout<<"p1_score is:"<<p1_score<<endl;
            range=100;
            return 1;
        }
    }
    int p2_input(int z, int t)
    {
        cout<<"enter your choice(p2):";
        cin>>p2_ip;
        range-=20;
        cout<<"the range is:"<<"0-"<<range<<endl;


        if(p2_ip<z)
            cout<<"the no. is greater than your choice"<<endl;
        else if(p2_ip>z)
            cout<<"the no. is smaller than your choice"<<endl;
        else
        {
            cout<<"your guess is correct"<<endl;
            if(t==1)
                p2_score+=10;
            if(t==2)
                p2_score+=8;
            if(t==3)
                p2_score+=6;
            if(t==4)
                p2_score+=4;
            if(t==5)
                p2_score+=2;
            cout<<"p2_score is:"<<p2_score<<endl;
            range=100;
            return 1;
        }
    }
    int bot()
    {
        int temp=rand()%5+10;
        return temp;

    }
    int checkWin()
    {
        if (p1_score>=10)
        {
            cout<<"the final winner is p1";
            return 1;

        }
        if(p2_score>=10)
        {
            cout<<"the final winner is p2";
            return 1;

        }
    }

};
int main()
{
    game g;
    int i=1;
    int j=1;

    while(j<10)
    {
        int z=g.bot();
        i=1;
        while(i<10)
        {

            if(i<=5)
            {


                int m=g.p1_input(z,i);
                i++;
                if(m==1)
                    break;

                int n=g.p2_input(z,i);
                i++;

                if(n==1)
                    break;


            }

            if(i>=6)
            {
                cout<<i;
                cout<<"no one wins"<<endl;
                cout<<"the no. is:"<<z<<endl;
                break;

            }


        }
        int k=g.checkWin();
        if(k==1)
            break;
        j++;
    }
}
