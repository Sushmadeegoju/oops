#include<iostream>
using namespace std;
void bubblesort(int a[],int n){
int i,j,temp=0;
for(i=0;i<n-1;i++)
{
for(j=0;j<n-i-1;j++){
if(a[j]>a[j+1]){
    temp=a[j];
    a[j]=a[j+1];
    a[j+1]=temp;
  }
}
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
bubblesort(a,n);
return 0;
}
