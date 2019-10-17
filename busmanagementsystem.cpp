#include <conio.h>
#include <stdio.h>
#include <iostream.h>
#include <string.h>
#include <stdlib.h>

static int p = 0;

   class a
   {

       char busno[5], driver[10], arrival[5], depart[5], from[10], to[10], seat[8][4][10];

    public:

       void Install();
       void Allotment();
       void Empty();
       void Show();
       void Avail();
       void Position(int i);

   }

   bus[10];


   void line(char ch)
   {

       for (int i=80;i>0;i--)
       cout<<ch;

   }


   class a :: void Install()
   {

       cout<<"Enter bus no : ";
       cin>>bus[p].busno;

       cout<<"\nEnter Driver's name : ";
       cin>>bus[p].driver;

       cout<<"\nArrival time : ";
       cin>>bus[p].arrival;

       cout<<"\nDeparture : ";
       cin>>bus[p].depart;

       cout<<"\nFrom: \t\t";
       cin>>bus[p].from;

       cout<<"\nTo: \t\t";
       cin>>bus[p].to;

       bus[p].Empty();

       p++;

   }


   class a:: void Allotment()
   {

       int seat;
       char number[5];

       top:

       cout<<"Bus no: ";
       cin>>number;

       for(int n=0;n<=p;n++)
       {
	      if(strcmp(bus[n].busno, number)==0)
			break;

       }

       while(n<=p)
       {
	      cout<<"\nSeat Number: ";
	      cin>>seat;

	      if(seat>32)
	      {
		    cout<<"\nThere are only 32 seats available in this bus.";
	      }

	      else
	      {

		    if(strcmp(bus[n].seat[seat/4][(seat%4)-1], "Empty")==0)

		    {
			    cout<<"Enter passanger's name: ";
			    cin>>bus[n].seat[seat/4][(seat%4)-1];
			    break;
		    }

		    else

		    {
			    cout<<"The seat no. is already reserved.\n";
		    }

	      }


	      if(n>p)
	      {
		    cout<<"Enter correct bus no.\n";
		    goto top;
	      }

       }


   class a:: void Empty()
   {

       for(int i=0; i<8;i++)
       {

	      for(int j=0;j<4;j++)
	      {
		    strcpy(bus[p].seat[i][j], "Empty");
	      }

       }

   }


   class a:: void Show()
   {

       int n;
       char number[5];

       cout<<"Enter bus no: ";
       cin>>number;

       for(n=0;n<=p;n++)
       {

	      if(strcmp(bus[n].busn, number)==0)
	      break;
       }

       while(n<=p)
       {
	      vline('*');
	      cout<<"Bus no: \t"<<bus[n].busn
		    <<"\nDriver: \t"<<bus[n].driver<<"\t\tArrival time: \t"
		    <<bus[n].arrival<<"\tDeparture time:"<<bus[n].depart
		    <<"\nFrom: \t\t"<<bus[n].from<<"\t\tTo: \t\t"
		    <<bus[n].to<<"\n";

	      vline('*');
	      bus[0].position(n);

	      int a=1;

	      for (int i=0; i<8; i++)
	      {

		     for(int j=0;j<4;j++)
		     {
			    a++;

			    if(strcmp(bus[n].seat[i][j],"Empty")!=0)
			    cout<<"\nThe seat no "<<(a-1)<<" is reserved for "<<bus[n].seat[i][j]<<".";
		     }

	      }

	      break;

       }

       if(n>p)
       {

	      cout<<"Enter correct bus no: ";

       }
   }


   class a:: void Position(int l)
   {

       int s=0;p=0;

       for (int i =0; i<8;i++)
       {
	      cout<<"\n";

	      for (int j = 0;j<4; j++)
	      {
		     s++;

		     if(strcmp(bus[l].seat[i][j], "Empty")==0)
		     {
			    cout.width(5);
			    cout.fill(' ');
			    cout<<s<<".";
			    cout.width(10);
			    cout.fill(' ');
			    cout<<bus[l].seat[i][j];

		      p++;
		      }

		      else
		      {
			     cout.width(5);
			     cout.fill(' ');
			     cout<<s<<".";
			     cout.width(10);
			     cout.fill(' ');
			     cout<<bus[l].seat[i][j];

		      }

	      }

       }

       cout<<"\n\nThere are "<<p<<" seats empty in Bus No: "<<bus[l].busn;

   }


   class a:: void Avail()
   {

       for(int n=0;n<p;n++)
       {
	      vline('*');

	      cout<<"Bus no: \t"<<bus[n].busn<<"\nDriver: \t"<<bus[n].driver
	      <<"\t\tArrival time: \t"<<bus[n].arrival<<"\tDeparture Time: \t"
	      <<bus[n].depart<<"\nFrom: \t\t"<<bus[n].from<<"\t\tTo: \t\t\t"
	      <<bus[n].to<<"\n";

	      vline('*');
	      vline('_');

       }

   }



int main()
{

   system("cls");
   int w;

   while(1)
   {
       cout<<"\n\n\n\n\n";

       cout<<"\t\t\t1.Install"<<endl
       <<"\t\t\t2.Reservation"<<endl
       <<"\t\t\t3.Show"<<endl
       <<"\t\t\t4.Buses Available"<<endl
       <<"\t\t\t5.Exit"<<endl;

       cout<<"\t\t\tEnter your choice:-> ";
       cin>>w;

       switch(w)
       {

	      case 1:  bus[p].install();
		       break;

	      case 2:  bus[p].allotment();
		       break;

	      case 3:  bus[0].show();
		       break;

	      case 4:  bus[0].avail();
		       break;

	      case 5:  exit(0);

	}

   }
   getch();
   return 0;

}
