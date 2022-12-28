#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void freq_char(char *p)
{
    int l=strlen(p);
    int a[l],i,j,count=0;
    char max;
    for(i=0;i<l;i++)
    {
        count=1;
        for(j=i+1;j<l;j++)
        {
            if(p[i]==p[j])
            {
                count++;
                a[j]=-1;
            }
        }
        if(a[i]!=-1)
    a[i]=count;   
    }
   
    for(i=0;i<l;i++)
    {
       if(a[i]!=-1) 
       {
           if(a[0]<a[i])
           {
               a[0]=a[i];
               max=p[i];
               
           }
       }
    }
    printf("%c:%d",max,a[0]);
}
int main()
{
    char *p=(char *)malloc(100*sizeof(char));
    printf("enter the string:");
    fgets(p,100,stdin);
    void (*fptr)(char *);
    fptr=freq_char;
    fptr(p);
}
