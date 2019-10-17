#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[100];
    long long int i,j,temp;

    for(i=0;i<n;i++)
 {
     cin>>a[i];
 }

      i=0;
      j=n-1;

     while(i<j)
     {
         temp=a[i];
         a[i]=a[j];
         a[j]=temp;
         i++;
         j--;

 }
  for(i=0;i<n;i++)
   {
       cout<<a[i]<<" ";


   }
   }

