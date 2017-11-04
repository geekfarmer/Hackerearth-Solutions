#include <bits/stdc++.h>
using namespace std;

int main()
{   int t,d,y;char m[20];
    cin>>t;
    while(t--)
    {cin>>d>>m>>y;
     if(d!=1)
     cout<<d-1<<" "<<m<<" "<<y<<endl;
     else
     {if(strcmp(m,"January")==0)
      cout<<"31 December "<<y-1<<endl;
      if(strcmp(m,"February")==0)
      cout<<"31 January "<<y<<endl;
      if(strcmp(m,"March")==0)
      {if(y%4==0&&y%100!=0)
       cout<<"29 February "<<y<<endl;
       else
       cout<<"28 February "<<y<<endl;
      }
      if(strcmp(m,"April")==0)
      cout<<"31 March "<<y<<endl;
      if(strcmp(m,"May")==0)
      cout<<"30 April "<<y<<endl;
      if(strcmp(m,"June")==0)
      cout<<"31 May "<<y<<endl;
      if(strcmp(m,"July")==0)
      cout<<"30 June "<<y<<endl;
      if(strcmp(m,"August")==0)
      cout<<"31 July "<<y<<endl;
      if(strcmp(m,"September")==0)
      cout<<"31 August "<<y<<endl;
      if(strcmp(m,"October")==0)
      cout<<"30 September "<<y<<endl;
      if(strcmp(m,"November")==0)
      cout<<"31 October "<<y<<endl;
      if(strcmp(m,"December")==0)
      cout<<"30 November "<<y<<endl;
     }




    }
    return 0;
}
