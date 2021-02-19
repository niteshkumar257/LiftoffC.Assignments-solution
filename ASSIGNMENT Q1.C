#include<stdio.h>
int main(){
	int n,b,sum=0;
	printf ("any number ");
	scanf ("%d",&n);
	while(n!=0){
		b=n%10;
		sum=sum+b;
		n=n/10;
	}
	printf ("sum is %d",sum);
}
