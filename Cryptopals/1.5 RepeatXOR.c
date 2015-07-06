#include<stdio.h>
#include<string.h>
char conv(int);
main()
{ int i,j,b,d;
  char str[]="Burning 'em, if you ain't quick and nimble\nI go crazy when I hear a cymbal";
  char key[]="ICE";
  
  for(i=0;str[i]!='\0';i++)
   {  str[i] = str[i] ^ key[i%(strlen(key))];
      b=(int)(str[i]);
      while(b!=0)
       { d=b%16;
         if(d>9)
          printf("%c", conv(d));
         else
          printf("%d", d);
         b/=16;
       }
    }
  printf("\n");
}

char conv(int x)
{ switch(x)
   { case 10 : return 'a';
     case 11 : return 'b';
     case 12 : return 'c';
     case 13 : return 'd';
     case 14 : return 'e';
     case 15 : return 'f';
  }
}
