#include<stdio.h>
int set(char);
char reset(int);
main()
{  int i;
   char str[100];
   char key[100];
   printf(" Enter plaintext ");
   gets(str);
   printf(" Enter key ");
   gets(key);
   for(i=0;str[i]!='\0';i++)
     printf("%c", reset( set(str[i]) ^ set(key[i]) )) ;
   printf("\n");
 }

int set(char a)
{  if(isdigit(a))
     return ((int)a-48);
   else
     { switch(a)
        { case 'A': return 10;
          case 'B': return 11;
          case 'C': return 12;
          case 'D': return 13;
          case 'E': return 14;
          case 'F': return 15;   }
     }
}

char reset(int b)
{ if(b<10)
    return (char)(48+b);
  else
    return (char)(55+b);
}    
