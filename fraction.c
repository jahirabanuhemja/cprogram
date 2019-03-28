#include<stdio.h>
typedef struct
{
	long long a,b;
} fraction;

/*int main()
{
	fraction a;
}
*/
fraction add(fraction x,fraction y)
{
  fraction z;
  z.a=(x.a*y.b)+(y.a*x.b);
  z.b=x.b*y.b;
  return z;
}

 int main()
{
  fraction x,y,z;
  //int z;
  scanf("%llu/%llu+%llu/%llu",&x.a,&x.b,&y.a,&y.b);
  z=add(x,y);
  printf("%llu/%llu",z.a,z.b);
  return 0;
}

