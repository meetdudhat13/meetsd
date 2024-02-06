#include<stdio.h>
int main(){
    int a, b, c;
    printf("Enter the value of first number : ");
    scanf("%d",&a);
    printf("Enter the value of second number : ");
    scanf("%d",&b);

    c=a;
    a=b;
    b=c;

    printf("The value of first number is %d\n",a);
    printf("The value of second number is %d\n",b);

}