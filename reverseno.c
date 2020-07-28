/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
    int x,y=0,r;
    printf("enter a number\n");
    scanf("%d",&x);
    while(x!=0){
        r=x%10;
        y=y*10+r;
        x=x/10;
    }
    printf("reverse is %d",y);
}
