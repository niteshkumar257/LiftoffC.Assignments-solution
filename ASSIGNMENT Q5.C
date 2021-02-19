#include<stdio.h>
int main (){
	int j,i;
	for (i=1;i<=5;i++)
	{
	
	for (j=1;j<=5;j++)
	if (i==j|| i==(6-j))
	printf ("*");
	else 
	printf (" ");
	printf ("\n");
}
	return 0;
	
	
}
