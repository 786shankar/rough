#include<stdio.h>
#include<string.h>
void main()
{
    int i,g,e,t=0;
    char s[100],a[100];
    printf(" enter the string\n");
    gets(s);
    printf(" enter the string\n");
    gets(a);
    g=strlen(s);
    e=strlen(a);
    if(g==e)
    {
    for(i=0;i<j;i++)
    {
       if(s[i]!=a[i]) 
       {
         t++;  
       }
    }
    if(t==0)
    {
        printf("the given strings are equal:%s\n",s);
    }
    }
    elseif(g>e)
        {
        printf("the greater string is %s",s);
        }
        elseif(g<e)
        {
        printf("the greater string is %s",a);
        }
        }
}
}
