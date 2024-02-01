//9. Write a program in C to find the square of any number using the function.
#include<stdio.h>
#include<math.h>
int main()
{
    int num;
    printf("square of number\n Enter number=");
    scanf("%d",&num);
    printf("%d",pow(num,2));
    return 0;

}