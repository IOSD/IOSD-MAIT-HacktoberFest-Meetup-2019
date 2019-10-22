#include<bits/stdc++.h>
using namespace std;

int mincheck(int a , int b){
if(a<=0)
    return b;

    else if(b<=0)
        return a;
    else return -1;


}


void minmoney(int n, int capacity , int price[]){
int dp[n][capacity];
//cout<<price[n];
   // cout<<"hey0\n";
for(int i=0;i<=n;i++){


    for(int j=0;j<=capacity;j++){

   // cout<<"hey1\n";
        if(i==0||j==0){
                  cout<<dp[1][5]<<"hey\n"<<i<<j;
            dp[i][j]=0;

              cout<<dp[1][5]<<"hey2\n";
        }

         else if(price[i]==-1){
               dp[i][j]=-1;

         }

       else{

   // cout<<"hey2\n";
                   if(dp[i-1][j]==-1||dp[i-1][j]==0){

   // cout<<"hey3\n";
                    if(dp[i][j%i]==-1||j<i){
                        dp[i][j]=-1;
                    }
                    else {
                        dp[i][j] = price[i]*(j/i) + dp[i][j%i];
                        //cout<<i<<" "<<j<<" - "<<dp[i][j]<<endl;
                    }
                   }

                   else{

   // cout<<"hey4\n";
                    if(dp[i][j%i]==-1||j<i){
                        dp[i][j]= dp[i-1][j];
                    }
                    else {
                         dp[i][j]= min(price[i]*(j/i) + dp[i][(j%i)], dp[i-1][j]);

                    }
                   }

            }


            }
        //  cout<<dp[1][5]<<"hey\n";}

   //  cout<<dp[1][5]<<"hey\n";
    }
    cout<<dp[1][5]<<"hey\n";
    for(int i=0;i<=n;i++){


    for(int j=0;j<=capacity;j++){
            cout<<dp[i][j]<<" ";
    }
    cout<<endl;
    }
    cout<<dp[n][capacity];
}






int main(){

int n , capacity;
cin>>n>>capacity;
int price[n];

for(int i=1;i<=n;i++){
    cin>>price[i];
}

minmoney(n , capacity , price);
}
