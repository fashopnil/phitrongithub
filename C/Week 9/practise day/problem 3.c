#include<stdio.h>
void solve(int n)
{
    if (n==0)
    {
       return 0;
    }
    solve(n-1);
    printf("%d",n);
    
}
int main()
{
    int n;
    scanf("%d",&n);
    solve(n);
    return 0;
}