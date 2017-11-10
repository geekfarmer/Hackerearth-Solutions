#include<iostream>
#include<stack>

using namespace std;

int main()
{
    stack <int> stackstl;
    int q,x,y;
    cin>>q;
    while(q)
    {
        cin>>x;
        if(x==1){
            if(stackstl.empty())
                cout<<"No Food\n";
            else
                cout<<stackstl.top()<<endl;
                stackstl.pop();
        }
        if(x==2){
            cin>>y;
            stackstl.push(y);
        }
    }

    return 0;
}
