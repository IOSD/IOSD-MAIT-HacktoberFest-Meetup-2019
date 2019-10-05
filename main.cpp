#include <iostream>
#include<string.h>

using namespace std;

// Complete the timeInWords function below.
string timeInWords(int h, int m) {

    int to_or_past;

    if(m>30)
        to_or_past=1;
    else
        to_or_past=0;

    int teen=0;

    char time[1000]="";

    if(m==15 || m==45 || m==0)
    {
        if(m==15)
        {
            strcpy(time,"quarter past ");
        }
        else if(m==45)
        {
            strcpy(time,"quarter to ");
            h++;
        }
        else
        {
            strcpy(time,(h==1?"one o' clock":(h==2?"two o' clock":(h==3?"three o' clock":(h==4?"four o' clock":(h==5?"five o' clock":(h==6?"six o' clock":(h==7?"seven o' clock":(h==8?"eight o' clock":(h==9?"nine o' clock":(h==10?"ten o' clock":(h==11?"eleven o' clock":"twelve o' clock"))))))))))));

            return(time);
        }

        goto hr;
    }

    a123:
    if(m<13 && m>0)
    strcat(time,(m==1?"one ":(m==2?"two ":(m==3?"three ":(m==4?"four ":(m==5?"five ":(m==6?"six ":(m==7?"seven ":(m==8?"eight ":(m==9?"nine ":(m==10?"ten ":(m==11?"eleven ":"twelve "))))))))))));

    if(m>12 && m<20)
    {
        teen=1;
        if(m<16)
        strcpy(time,(m==13?"thir":(m==14?"for":(m==15?"fif":(m==16?"six":(m==17?"seven":(m==18?"eight":"nine")))))));
    }

    if(teen==1)
        strcat(time,"teen ");



    if(m>=20 && m<30){
    strcpy(time,"twenty ");
    m=m%10;
    goto a123;
    }
    else if(m==30){
    strcpy(time,"half past ");
    m=h;
    goto hr;
    return(time);
    }
    else if(m>30){
        m=60-m;
        to_or_past=1;
        teen=0;
        h++;
    goto a123;
    }

    strcat(time,(m==1 && teen==0)?"minute ":"minutes ");


    if(to_or_past==0)
        strcat(time,"past ");
    else
        strcat(time,"to ");

    hr:

    strcat(time,(h==1?"one":(h==2?"two":(h==3?"three":(h==4?"four":(h==5?"five":(h==6?"six":(h==7?"seven":(h==8?"eight":(h==9?"nine":(h==10?"ten":(h==11?"eleven":"twelve"))))))))))));


    return(time);





}

int main(int argc,char **args)
{

    int h;
    int m;
    cout<<"\n\t Enter the time - hr (press Enter) min ";
    cin >> h>> m;


    string result = timeInWords(h, m);

    cout << result << "\n";



    return 0;
}
