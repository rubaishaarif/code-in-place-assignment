#include <stdio.h>

int main() {
    int i,first=0,second=1, next=0;
   printf("\tFibonacci numbers\t\n");
   for(i=0;i<=500;i++)
   {
       if(first>300)
       {
           break;
          
       }
       if(first%5==0)
       {
       next=first+second;
       first=second;
       second=next;
           continue;
       }
       
       printf("%d \n",first);
       next=first+second;
       first=second;
       second=next;
   }
   return 0;
   

}