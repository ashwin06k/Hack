#include<stdio.h>
int conv(char);
main()
{  int i,j,k,num;
   char str[500],A[500],B[500];
   gets(str);
   for(i=0,j=0;str[i]!='\0';i=i+2,j++)
     { num = (16*conv(str[i]))+(conv(str[i+1]));
       A[j]=((char)num);
     }
   A[j]='\0';

   for(k=0;k<128;k++)
     { for(i=0;A[i]!='\0';i++)
          B[i] = (char)( ((int)(A[i])) ^ k );
       B[i]='\0';
       printf("%d %s\n",k,B);
     }
}

int conv(char a)
{  if(isdigit(a))
     return ((int)a-48);
   else
     { switch(a)
        { case 'a': return 10;
          case 'b': return 11;
          case 'c': return 12;
          case 'd': return 13;
          case 'e': return 14;
          case 'f': return 15;   }
     }
}

