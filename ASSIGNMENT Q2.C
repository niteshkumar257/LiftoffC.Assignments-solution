#include<stdio.h>
    int main(){
    int a[10],i;
	int se=0;
	int sp=0;
	printf ("enter 10 numbers");
	for (i=0;i<=9;i++)
	scanf  ("%d",&a[i]);
    for (i=0;i<=9;i++)
	{
	if (a[i]%2==0)
	se=se+a[i];
	}
    for(i=1;i<=9;i++)
	{
	 if (i%2==0)
	sp=sp+a[i];
    }
	printf ("sum of even is %d \n",se);
	printf ("sum of even position elements is %d",sp);
    return 0;
    }
