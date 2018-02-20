#include<iostream>
using namespace std;
void selectionsort(int a[],int n){
int i,j,loc,minm,temp;
for(i=0;i<n-1;i++)
{
    loc=i;
    minm=a[i];

    for(j=i+1;j<n;j++){
if(a[loc]>a[j])
    loc=j;
    minm=a[j];
}
    temp=a[loc];
    a[loc]=a[i];
    a[i]=temp;
}
cout<<"the sorted array is:\n";
for(i=0;i<n;i++)
{
cout<<a[i]<<" ";
}
}
int main(){
int a[50],i,n;
cout<<"161210019-Sushma_deegoju\n";
cout<<"enter the size of the array:";
cin>>n;
cout<<"enter the array:\n";
for(i=0;i<n;i++){
cin>>a[i];
}
selectionsort(a,n);
return 0;
}
