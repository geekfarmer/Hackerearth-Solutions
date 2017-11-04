#include <iostream>
using namespace std;
bool prime[127]={0};
void init()
{
//cout<<prime[0];
prime[67]=prime[71]=prime[73]=prime[79]=prime[83]=prime[89]=prime[97]=prime[101]=prime[103]=prime[107]=prime[109]=prime[113]=1;
}


int search(char s)
{

    int k=1,i=0,j=0,res;
    int l,h;
    int asc=int(s);
    if(prime[asc]==1)
    return 1;
    else
    {
        while(k!=0)
        {
            if(prime[asc+i]==1||prime[asc-j]==1)
            {
            k=0;
            l=asc-j;
            h=asc+i;
            if(prime[l]==1)
            {
                res=l;
            }
            else if(prime[h]==1)
            {
                res=h;
            }
            else
            {
                res=l;
            }
            }
            i++;
            j++;
        }
        return res;

    }
}

 int main()
{
  int t,size,i,res;
  char s[500];
  cin>>t;
  init();
  while(t>0)
  {
    cin>>size>>s;
      for(i=0;i<size;i++)
      {
          res=search(s[i]);
          if(res!=1)
          {
              s[i]=res;
          }
      }
      cout<<s<<endl;
      t--;

  }
    return 0;
}
