#include <iostream>
using namespace std;

int main(){
   int n1,n2,m;

    cin >> n1 >> n2;

   m = (n1 > n2) ? n1 : n2;

   while(100)
   {
      if((m%n1 == 0) && (m%n2 == 0))
      {
         cout <<m<< endl;
         break;
      }
      ++m;
   }
   return 0;
}
