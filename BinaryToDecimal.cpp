#include<iostream>
using namespace std;
int main(){
int sum=0,r,n,i=1;
cin>>n;
while(n>0)
{

    r=n%10;
    sum=sum+r*i;
    i=i*2;
    n=n/10;

}
cout<<sum;
return 0;
}
