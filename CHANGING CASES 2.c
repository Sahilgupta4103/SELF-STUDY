#include <stdio.h>

int main()
{
   
    char a[]="welCome";
    for(int i=0;a[i]!='\0';i++)
   {
      if(a[i]>=65 && a[i]<=90)
      {
         a[i]+=32;
     
      }   
      else if(a[i]>=97 && a[i]<=122)
      {
         a[i]-=32;
      }
     
   }
    printf("%s",a);
    return 0;
}
