#include <stdio.h>
int main ()
{
	int phy ,math ,chem,computer ,bio;
	int per = (phy+math +chem+computer+bio)/5 ;
	printf ("Enter the mark in phy \n");
	scanf  ("%d",&phy );
      printf ("Enter the mark in chem \n");
	scanf  ("%d",&chem );	
	printf ("Enter the mark in math \n");
	scanf  ("%d",&math );
	printf ("Enter the mark in computer \n");
	scanf  ("%d",&computer );
	printf ("Enter the mark in bio \n");
	scanf  ("%d",&bio );
	printf ("the per is %d \n",per =(phy+chem+math+computer+bio)/5 );
	
printf("\nYou got %d %% marks and ",per);
 
  if(per>100){
    printf("Invalid marks assigned");
  }else if(per>=90 && per<=100){
    printf("Your grade is A");
  }else if(per>=80 && per<90){
    printf("Your grade is B");
  }else if(per>=70 && per<80){
      printf("Your grade is C");
  }else if(per>=60 && per<70){
    printf("Your grade is D");
  }else if(per>=40 && per<60){
      printf("Your grade is E");
  }else
      printf("Your grade is F");
      
      
	return 0; 
}
	
	
	
	
	
	
	
	
	
	
	

	
	
	
	
	
	
	
	
	
	
	

