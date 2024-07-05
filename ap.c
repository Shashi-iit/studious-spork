// WAP to show 7 terms of arithmetic progression. first term and common difference given by user.
#include<stdio.h>
void sum(int* d){
    int t =0;
    for (int i = 0; i < 5; i++)
    {
        t+=*(d+i);
    }
    printf("%d",t);
}
void main()
{
    int a[5]={1,3,2,4,5};
    sum(a);
}