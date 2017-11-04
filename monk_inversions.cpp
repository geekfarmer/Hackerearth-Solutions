#include<iostream>
using namespace std;
int main()
{
    std::ios::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n][n];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>arr[i][j];
            }
        }
        int c=0;
        for(int k=0;k<n;k++)
        {

            for(int l=0;l<n;l++)
            {
                for(int i=n-1;i>=k;i--)
                  {

                      for(int j=n-1;j>=l;j--)
                        {
                            if(arr[k][l]>arr[i][j])
                                c++;
                        }

                  }
            }
        }

        cout<<c<<endl;
    }
    return 0;
}
