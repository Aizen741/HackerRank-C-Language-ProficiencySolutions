#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
   int n , m;
   double a , b;
   scanf("%d %d", &n, &m);
   scanf("%lf %lf",&a, &b);
   printf("%d %d \n",n+m,n-m);

   /* (.1f, .2f ,.3f .... ) : These can be used to deal with the zeros after "." in the float output*/
   printf("%.1f %.1f",a+b, a-b);

   return 0;
}
