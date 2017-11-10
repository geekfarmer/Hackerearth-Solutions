#include <iostream>
using namespace std;

int main()
{
    long int Q;
    cin>>Q;
 long int j=Q-1;
   long int i,a,b;
    long int l[10000]={0};
    for(i=1,j=1;i<=Q;i++)
    {
        cin>>a;
        if(a==1)
        {
            if(l[j-1]==0){
            cout<<"No Food"<<endl;}
            else
            {
                cout<<l[j-1]<<endl;
                j--;
            }
        }

        else{
            cin>>b;

        l[j]=b;j++;
        }

         }





    return 0;
}
