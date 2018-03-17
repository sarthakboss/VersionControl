#define max 10
#include<stdio.h>
int push(int[], int);
int pop(int[], int);
void display(int[], int);
int main()
{
int stack[max],top=-1,ch;
do

{
printf("\n 1-Push,2-Pop,3-Display,4-Exit");

Printf("\n Enter your Choice");
scanf("%d", &ch);
switch(ch)
{
Case1:
Top= push(stack,top);
break;
Case2:
Top= pop(stack,top);
break;
Case3:
dis(stack,top);
}
}
while(ch<=3)
}
int push(int stack[max], int top)
{
int x
if(top==max-1)
{
printf("\n stack is overflow");
break;


}
