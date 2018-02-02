#include<stdio.h>
void main()
{
    int a,b,c,d=0,i,j;
    printf("enter the limites a ,b ");
    scanf("%d%d",&a,&b);
    for(i=a+1;i<b;i++)
    {
        for(j=2;j<i;j++)
    {
        c=i%j;
        if(c==0)
        {
        d++; 
        }
    }
        if(d==0)
        printf("%d\t",i);
    }
    
}


