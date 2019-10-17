#include<iostream.h>
#include<conio.h>




int main() {
clrscr();

int n,q,c[100][100],b[100],d[100][1],i,j,r,s;

cin>>n>>q;

  for(i=0;i<n;i++)
  {
    cin>>b[i];
    for(j=0;j<b[i];j++)
    {
      cin>>c[i][j];
    }
  }


for(i=0;i<q;i++)
{

  for(j=0;j<2;j++)
     {
	 cin>>d[i][j];
     }
}
  for(i=0;i<q;i++)
  {
     for(j=0;j<2;j++)
	 if(j==0)
	    r=d[i][j];
	 else
	    s=d[i][j];


  cout<<c[r][s-1]<<endl;
}


getch();
return 0;
}
