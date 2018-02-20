#include<iostream>
using namespace std;

class area
{
    int len;
    int brth;
    int ar;
    public:
    area(int l=0, int b=0):len(l),brth(b){}
    int res()
    {
        ar=len * brth;
        return ar;
    }
    void print()
    {
        cout<<"161210019-Sushma_deegoju"<<endl;
        cout<<"the area is:"<<ar;
    }

};

int main()
{
    area a1(4,6);
    a1.res();
    a1.print();

}
