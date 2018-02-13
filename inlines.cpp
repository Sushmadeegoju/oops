#include<iostream>
using namespace std;

inline void gcd(int a, int b){
    int g=1,n;
    n=(a>b)?a:b;
    for(int i=2; i<=n; i++){
        if((a%i==0) && (b%i==0))
            g=i;
    }
    cout<<"161210019-sushma_deegoju"<<endl;
    cout<<"the gcd is:"<<g;
}

int main(){
    int a,b;
    cout<<"enter the two no.'s:"<<endl;
    cin>>a>>b;
    gcd(a,b);
    return 0;
}
