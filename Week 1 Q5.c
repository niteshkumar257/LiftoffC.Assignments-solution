#include <stdio.h> 
int main() {  
    char c;  
    printf ("Enter an Alphabet\n"); 
    scanf  ("%c",&c);
    switch(c) {  
        case 'a':
		printf ("%c is vowel\n",c) ;
		break;  
        case 'A':
        printf ("%c is vowel \n",c);
        break;
        case 'e':
		printf ("%c is vowel \n",c) ;
		break; 
        case 'E':
        printf ("%c is vowel \n",c);
        break;
        case 'i':
		printf ("%c is vowel \n",c);
		break; 
        case 'I':
		printf ("%c is vowel \n",c) ;
		break; 
        case 'o':
		printf ("%c is vowel \n",c)  ;
		break;
        case 'O':
		printf ("%c is vowel \n",c) ;
		break ; 
        case 'u': 
		printf ("%c is vowel \n",c);
		break;
		case 'U':
		printf ("%c is vowel\n",c);
		break;
        default: 
		printf("%c is CONSONANT", c);  
    } 
	return 0; 
    }  
