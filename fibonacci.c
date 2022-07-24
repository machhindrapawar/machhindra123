
  //fibonacci series 
#include<stdio.h>
main()
{
  int n,a=1,b=1,i,c;
  printf("Enter a series :");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
  printf("%d",a);
  c=a+b;
  a=b;
  b=c;
  }
  getch();
}
