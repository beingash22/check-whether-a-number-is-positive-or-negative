#include <stdio.h>

void main()
{
double n,num,res;
printf ("enter a number");
scanf ("%lf",&n);
 
num=n;

res=num-n;

if (res==0.0)
printf ("negative number");
else
printf ("positive number");
}
