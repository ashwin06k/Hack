#include<stdio.h>
#include<string.h>
main()
{ char str[100];
  char key[100];
  int i,j;
  printf(" Enter plaintext ");
  gets(str);
  printf(" Enter key ");
  gets(key);
  for(i=0,j=0;str[i]!='\0';)
   { if(j==strlen(key))
       j=0;
     else
       { str[i]=(str[i]^key[j]);
         i++; j++;  }
   }
  for(i=0;str[i]!='\0';i++)
   printf("%c",str[i]);
}
~    
