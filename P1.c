#include<stdio.h>
void main()
{
    int s,e,b,c=0;
    printf("enter the limits");
    scanf("%d%d",&s,&e);
    for(j=s+1;j<e;j++)
    {
    for(int i=2;i<j;i++)
    {
        b=j%i;
        if(b==0)
        {
        c++; 
        }
    }
        if((c==0)||(s==1))
        printf("%d",j);
        }
}




