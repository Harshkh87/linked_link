#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,p=1,q=0;
    printf("Enter the no.");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        p=p*i;
        q=p+q;
        i++;
    }
    printf("\n%d",q);
    getch();
}
