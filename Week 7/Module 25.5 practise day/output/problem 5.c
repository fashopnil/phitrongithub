#include<stdio.h>
int plus(int a)
{
    if(a>0)
    {
        return plus(a-1)+a;
    }
    return 0;

}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",plus(n));
    return 0;
}