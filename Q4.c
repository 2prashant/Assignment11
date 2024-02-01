//4. Write a function to find the next prime number of a given number. (TSRS)
#include<stdio.h>
int main()
{
    int primenum(int num);
    int num;
    printf(" find  next prime number\nEnter number");
    scanf("%d",&num);
    printf("Next prime number %d",primenum(num));
    return 0;

}
int primenum(int num)
{
    int flag=0,i;
    for(i=num;1;i++)
    {
        flag=0;
       for(int j=2;j<=i/2;j++)
       {
         if(i%j==0)
          flag=1;
       }
       if(flag==0)
      {
        return i;
        break;
      }
    }
     return i;
}