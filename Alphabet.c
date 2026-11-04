#include <stdio.h>
int main()
{
    char f;
    scanf(" %c",&f);
   
    if(f>=97 && f<122)
   { 
    char ch=f+1;
    printf("%c\n",ch);
   }
  
   if(f==122) 
   {
     
    printf("%c\n",97);
   }

    return 0;

}