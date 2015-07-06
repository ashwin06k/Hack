#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int conv(char);
void binconv(int c[],int x);
main() 
{  char str[]="49276d206b696c6c696e6720796f757220627261696e206c696b65206120706f69736f6e6f7573206d757368726f6f6d";
   char B[500];
   int A[24]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
   int b,i,j,k; 

   for(i=0,j=0;str[i]!='\0';i=i+2,j++)
     B[j]=(char)((16*conv(str[i]))+(conv(str[i+1])));
   B[j]='\0';
   printf("%s", B);
   printf("\n");
 
   for(i=0;B[i]!='\0';i=i+3)
     {    
        j=7;  
        b=(int)(B[i]);
        while(b!=0)
         {  A[j]=b%2;
            b/=2;
            j--;  }
        
        j=15;
        b=(int)(B[i+1]);
        while(b!=0)
         {  A[j]=b%2;
            b/=2;
            j--;  } 
         
        j=23;
        b=(int)(B[i+2]);
        while(b!=0)
         {  A[j]=b%2;
            b/=2;
            j--;  } 
        
        for(k=0;k<24;k=k+6)
          binconv(A,k);
          
    } 
printf("\n");
}

int conv(char a)
 {  if(isdigit(a))  
      return ((int)a-48);  
    else
     { switch(a)
        {  case 'a': return 10;  
           case 'b': return 11; 
           case 'c': return 12; 
           case 'd': return 13; 
           case 'e': return 14;
           case 'f': return 15;  
    
 }}}
     
void binconv(int C[], int x)
{  int i,j;
   int s=0; 
   for(i=x+5,j=0;i>=x;i--,j++)
     s+= (C[i]*(pow(2,j)));
     
   if((s>=0)&&(s<=25)) 
     printf("%c", (char)(s+65)); 
   if((s>=26)&&(s<=51)) 
     printf("%c", (char)(s+71));
   if((s>=52)&&(s<=61)) 
     printf("%c", (char)(s-4));  

}

