#include <stdio.h>
int main () {
	int a;
	int b;
	int sum = a+b;
	int sub =  a-b;
	int mul =  a*b;
    float div = a/b;
	
	printf (" Enter the value of a");
	scanf ("%d",&a);
	printf (" Enter the value of b");
	scanf ("%d",&b);
	
	printf (" the value of sum is %d \n",a+b);
	printf ("the value of sub is %d \n",a-b);
	printf ("the value of mul is %d\n",a*b);
	printf ("the value of div is %f ",a/b);
	return 0;
	
}
