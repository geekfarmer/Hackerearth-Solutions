
#include <iostream>
#include <string>
#include <vector>
#include <iterator>
using namespace std;

struct user{
  string name;
  int age;
  string address;
  string hometown;
};

int main()
{
   int n,c=0;
   vector<pair<int,int>> v;
   vector<pair<int,int>> :: iterator it;
   cin>>n;
   struct user arr[n];
   for(int i=0;i<n;i++){
       cin>>arr[i].name>>arr[i].age>>arr[i].address>>arr[i].hometown;
   }
   for(int i=0;i<n-1;i++){
      for(int j=i+1;j<n;j++){
       if(arr[i].name==arr[j].name||arr[i].age==arr[j].age||arr[i].address==arr[j].address
       ||arr[i].hometown==arr[j].hometown){
           c++;
           v.push_back(make_pair(i,j));
       }
   }
   }
   cout<<c<<endl;
   for(it=v.begin();it!=v.end();it++){
       cout<<(it->first)+1<<" "<<(it->second)+1<<endl;
   }


    return 0;
}
