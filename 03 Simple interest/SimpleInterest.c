#include<stdio.h>
int main(){
    printf("This program is for find simple interest\n");

    int i, p, r, n;
    printf("Enter the value of Amount :\n");
    scanf("%d",&p);

    printf("Enter the rate of Interest :\n");
    scanf("%d",&r);
    
    printf("Enter the time period :\n");
    scanf("%d",&n);

    i=(p*r*n)/100;

    printf("The simple interest of given data is : %d",i);

}