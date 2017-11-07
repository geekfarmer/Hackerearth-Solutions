#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;

struct suffix
{
   //int index;
   char *suff;
};

int cmp(struct suffix a,struct suffix b)
{
    return strcmp(a.suff,b.suff)<0?1:0;
}
void buildSuffixArray(char *str,int k)
{
    int n=strlen(str);
    struct suffix array[n];
    for(int i=0;i<n;i++)
    {
        array[i].suff=(str+i);
       //array[i].index=i;
    }
   sort(array,array+n,cmp);
   cout<<array[k-1].suff;

}
int main()
{
    char str[26];
    int k;
    cin>>str>>k;
    buildSuffixArray(str,k);
}
