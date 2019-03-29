#include<stdio.h>

typedef struct
{
	long a,b;
} fraction;
 
fraction add(fraction arr[],int n)
{
	int i;
	fraction sum;
	sum.a=arr[0].a,sum.b=arr[0].b;
	for(i=1;i<n;i++)
	{
		sum.a=(sum.a*arr[i].b)+(arr[i].a*sum.b);
		sum.b=(sum.b)*(arr[i].b);
		
	}
	return sum;
}

int main()
{
	int n,i;
	fraction arr[100],z;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%li%li",&arr[i].a,&arr[i].b);
	}
	z=add(arr,n);
	printf("%li/%li",z.a,z.b);
	return 0;
}

