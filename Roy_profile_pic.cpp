#include <iostream>
using namespace std;



int main()
{
    int L,N,W,H;
    cin>>L;
    cin>>N;
    while(N)
    {
        cin>>W>>H;
        if(W<L || H<L)
            cout<<"UPLOAD ANOTHER\n";
        if(W>=L && H>=L)
            if(W==L && H==L)
                cout<<"ACCEPTED\n";
            else
                cout<<"CROP IT\n";

        N--;
    }
    return 0;

}
