#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int k,m,n,p;
    unsigned int i;
    cin>>s;
    cin>>k;
    unsigned int l=s.length();
    for(i=0;i<l;i++)
    {
        if(s.at(i)>=65&&s.at(i)<=90)
        {
            m=s.at(i);
            if((m+k)>90)
            {
                m+=k;
                while(m>90)
                {
                    m-=26;
                }
            }
            else {m+=k;}
            s.at(i)=m;
        }

        else if(s.at(i)>=97&&s.at(i)<=122)
        {
            n=s.at(i);
            if((n+k)>122)
             {  n+=k;
                 while(n>122)
                {
                    n-=26;
                }
             }
            else {n+=k;}
            s.at(i)=n;
        }

        else if(s.at(i)>='0'&&s.at(i)<='9')
        {
            p=s.at(i);
            if((p+k)>'9')
             {p=(p+k);
                 while(p>'9')
                 {
                     p-=10;
                 }
             }
            else {p+=k;}
            s.at(i)=p;
        }

    }
    cout<<s;
    return 0;
}
