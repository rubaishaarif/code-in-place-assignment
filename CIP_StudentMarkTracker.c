#include <stdio.h>

int main()
{
  int pass=0, fail=0, marks, consecutive_fails=0;
 printf("\tStudent MarksTracker\t\n");
 while(marks!=-1)
 {
  printf("Enter marks \n");
  scanf("%d",&marks);
  if (marks>=50)
  {
      pass=pass+1;
  }
  else
  {
  fail=fail+1;
  consecutive_fails=consecutive_fails+1;
  
  if(consecutive_fails>3)
  {
      printf("STOP!more than 3 fails are entered consecutively");
      break;
  }
  }
}
    return 0;
}