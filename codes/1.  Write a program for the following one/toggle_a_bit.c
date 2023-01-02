#include<stdio.h>
int main(){

    
int num, pos;
printf("Enter the number..\n");
scanf("%d" ,&num);
printf("Enter the Position..\n");
scanf("%d",&pos);
printf("Before Number= %d\n", num);

num= num ^ 1<<pos;
          
printf("After Number= %d\n" , num);

return 0;
}

