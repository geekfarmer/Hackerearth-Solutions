#include <iostream>
#include<string.h>
using namespace std;

int main()
{
    //cout << "Hello World!" << endl;
    int t,i,c;
    char s[1000002];
    cin>>t;
    while(t--)
    {
        cin>>s;
        c=0;
        for(i=0;i<strlen(s);i++)
        {
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' )
                c++;

        }
        cout<<c<<endl;
    }

    return 0;
}
