#include<stdio.h>

int main(){
	int a[10],i;
	int small ;
	int large ;
	printf ("enter numbers");
	for (i=0;i<=9;i++)
	scanf  ("%d",&a[i]);
	
	large =small =a[0];
	
	for (i=0;i<=9;i++)
	{
	
    if (small >a[i])
      small=a[i];
	  }
      

 
 for (i=0;i<=9;i++)
 
 	{
	 if (large<a[i])
 	large =a[i];
	 }
 	
 
 printf ("small %d \n",small);
 printf ("large %d ",large);
 return 0;
}
 
