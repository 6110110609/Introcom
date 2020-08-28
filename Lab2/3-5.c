#include <stdio.h>
int main()
{

     char c;      //3.5
     printf("Enter a character: ");
     scanf(" %c",&c);
     if(c=='a' || c=='e' || c=='i'|| c=='o'|| c=='u'){
         printf("%c is a vowel.",c);
     }
     else
     {
         printf("%c is not a vowel.",c);
     }

    return 0;
}
