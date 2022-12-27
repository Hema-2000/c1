#include <stdio.h>
//#define a 10//it is a preprocessor directive it is working
const int a=20;//global declaration of const alaso works
int main()
{
   //const int a=20;
   printf("%d",a);
   //a=40;// error: assignment of read-only variable ‘a’
    printf("%d",a);

    return 0;
}
