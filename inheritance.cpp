#include<iostream>
#include<cstdlib>
using namespace std;

class Rps
{
   public:
   int human,ai;
   int ai_input;
   void getai_inp()
   {
      ai_input=rand()%3+1;
   }
   int dif()
   {
   return ai-human;
   }
   void checkwin()
   {
      if(human>ai)
      cout<<"yoo you have won the game:)"<<endl;
      else if(ai>human)
      cout<<"sorry you have lost the game:("<<endl;
      else
      cout<<"Tie ";
   }
};

class Game:public Rps
{
    public:
    string name;
    int your_input;
    Game(string s)
    {
       name=s;
       human=0;
       ai=0;
    }
    void show()
    {
       cout<<"your score::"<<human<<" computer score::"<<ai<<endl;
    }
    void getinp(int n)
    {
       your_input=n;
    }
    void update_score()
    {
        if(your_input==ai_input)
        {
        cout<<"both inputs are same"<<endl;
        show();
        }
        else if(your_input=1&& ai_input==3)
        {
        human++;
        cout<<"your input is rock and computers input is scissors"<<endl<<"your score is increased"<<endl;
        show();
        }
        else if(your_input=3&& ai_input==1)
        {
        ai++;
        cout<<"your input is scissors and computers input is rock"<<endl<<"computer's is increased"<<endl;
        show();
        }
        else if(your_input==2&& ai_input==1)
        {
        human++;
        cout<<"your input is paper and computers input is rock"<<endl<<"your score is increased"<<endl;
        show();
        }
        else if(your_input=1&& ai_input==2)
        {
        ai++;
        cout<<"your input is rock and computers input is paper"<<endl<<"computer's is increased"<<endl;
        show();
        }
        else if(your_input=3&& ai_input==2)
        {
        human++;
        cout<<"your input is scissors and computers input is paper"<<endl<<"your score is increased"<<endl;
        show();
        }
        else if(your_input=2&& ai_input==3)
        {
        ai++;
        cout<<"your input is paper and computers input is scissors"<<endl<<"computer's is increased"<<endl;
        show();
        }
    }
};


main()
{
    int f,s,n=3,i,v;
    string r;
    cout<<"Do you want to play the game"<<endl;
    cin>>f;
    if(f)
    {
        cout<<endl<<endl<<endl;
        cout<<"enter you name::  "<<endl;
        cin>>r;
        Game g(r);
        cout<<"broo!! get ready lets start the game!!"<<endl<<endl;
        cout<<"Game rules::"<<endl<<"it's a best of three game"<<endl<<"you have to enter one digit among 1,2,3 "<<endl;
        cout<<"1 stands for rock"<<endl<<"2 stands for paper"<<endl<<"3 stands for scissors"<<endl;
        cout<<"rock beats scissors and scissors beat paper and paper beats rock"<<endl;
        cout<<"so are you ready !!enter 1 or 0"<<endl;
        cin>>s;
        if(s)
        {
           cout<<"enter three values"<<endl<<endl;
           while(n--)
           {
              cin>>i;
              g.getinp(i);
              g.getai_inp();
              cout<<g.your_input<<"   "<<g.ai_input<<endl;
              g.update_score();
              if(n==0)
              {
                  v=g.dif();
                 if(v>0)
                 n=v;
              }
           }
           cout<<endl<<endl;
           g.checkwin();

        }
    }
}
