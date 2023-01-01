
#include<stdio.h>
int main()

{
    int num,pos;
    printf("enter any number \n");
    scanf("%d",&num);
    printf("enter postion which you want to set:\n");
    scanf("%d",&pos);

    printf("befoer setting the number:%d\n",num);
    num=-num;
    
    return 0;



}