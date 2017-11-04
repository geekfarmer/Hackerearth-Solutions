#include <stdio.h>
unsigned long long a[1000005];
void get(unsigned long long *z)
{
    char c=getchar_unlocked();
    for(*z=0;c>=48 && c<=57;c=getchar_unlocked())
        *z=*z*10+c-'0';
}

int main()
{
    unsigned long long n,q,l,r,i;
    for(get(&n),get(&q),get(a+1),i=2;i<n+1;i++)
        get(a+i),*(a+i)+=*(a+i-1);
    while(q--)
        get(&l),get(&r),printf("%llu\n",(*(a+r)-*(a+l-1))/(r-l+1));
    return 0;
}
