#include<stdio.h> 
int print(int n)
{
   int i=n;
  if(n==0)
    return 0;
  else
  {
    print(n-1);
  
    
  }
    printf("%d",n);
   
  
}
 int main() 
{    
  int n;
  printf("enter number");
  scanf("%d",&n);
  print(n);
  return 0;
  
}   
