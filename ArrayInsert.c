#include <iostream>
using namespace std;

int main()
{
    long long N,M,X,L,R,sum=0;
    cin>>N>>M;
    long long a[n];
    for(long i=0;i<N;i++)
        cin>>a[i];
    for(long j=0;j<M;j++)
        cin>>X>>L>>R;
        if(X==1)
        {
            a[L]=R;
        }
        else if(X==2)
        {
            if(L<=N && R<=N)
                {
                    for(long i=L;i<R;i++)
                        sum += a[i];
                }
            else
                sum = -1

        }
        cout<<sum<<endl;
    return 0;

}
