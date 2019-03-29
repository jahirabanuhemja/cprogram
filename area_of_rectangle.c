#include<stdio.h>
#include<math.h>
 typedef struct
 {
 	float x,y;
 }point;
 
 //function for calculating area of rectangle
 float area(point p1,point p2,point p3)
 {
 	float l1,l2,l3,z;
 	//calculate distance between p1 abd p2
 	l1=sqrt(pow(p1.x-p2.x,2)+ pow(p1.y-p2.y,2));
 	
	//calculate distance between p2 abd p3
 	l2=sqrt(pow(p2.x-p3.x,2)+ pow(p2.y-p3.y,2));
 	
 	//calculate distance between p1 abd p2
 	l3=sqrt(pow(p3.x-p1.x,2)+ pow(p3.y-p1.y,2));
 	//product of two adjacent side l*w
 	
 	if(l1>l2 &&l2>l3)
 	{
 		z=l2*l3;
	 }
	 else if(l2>l1 && l2>l3)
	 {
	 	z=l1*l3;
	 }
	 else
	     z=l1*l2;
 	 return z;
 	
 }
 
int main()
{
	int n,i;
	float z;
	point p1,p2,p3;
	printf("enter the number of rectangle:\n");
	scanf("%d",&n);
	//coordinate inputs
	for(i=0;i<n;i++)
	{
	   scanf("%f %f %f %f %f %f",&p1.x,&p1.y,&p2.x,&p2.y,&p3.x,&p3.y);	
		
	//call function
		z=area(p1,p2,p3);
		printf("%f\n",z);
	}
	
	return 0;
	
}
