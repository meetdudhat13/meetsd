#include<stdio.h>
int main(){
    printf("This program is to find the Area of tringle\n");
    int a, h, b;
   
    printf("Enter the height of triangle : \n");
    scanf("%d",&h);
   
    printf("Enter the base of triangle : \n");
    scanf("%d",&b);
   
    a=0.5*b*h;
   
    printf("The area of Triangle is : %d",a);
    return 0;

}