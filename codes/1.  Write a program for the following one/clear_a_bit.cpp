#include<iostream>
using namespace std;

int main(){

    
int num, pos;

cout<<"enter the number.."<<endl;

cin>>num;

cout<<"enter the position..,\n"<<endl;

cin>>pos;

cout<<"Before Number =  "<<endl;

printf("Before Number= %d\n", num);

num= num &~ (1<<pos);

          
printf("After Number= %d\n" , num);

return 0;
}

