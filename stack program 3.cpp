// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>
#define size 4
int top=-1,inp_array[size];
void push();
void pop();
void show();
void firstupdated();
void peak();
void oddelement();
void evenelement();
int main()
{
    int choice;
    while(1)
    {
        printf("\noperations performed by stack");
        printf("\n1.push the element\n2.pop the element\n3.show the element\n4.first updated element\n5.peak element\n6.odd element\n7.even element\n8.end");
        printf("\nenter the choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            push();
            break;
            case 2:
            pop();
            break;
            case 3:
            show();
            break;
            case 4:
            firstupdated();
            break;
            case 5:
            peak();
            break;
            case 6:
            oddelement();
            break;
            case 7:
            evenelement();
            break;
            case 8:
            exit(0);
            default:
            printf("\nInvalidchoice!!");
        }
    }
}
void push()
{
    int x;
    if(top==size-1)
    {
        printf("Overflow!!");
    }
    else
    {
        printf("\nenter element to be inserted to the stack:");
        scanf("%d",&x);
        top=top+1;
        inp_array[top]=x;
    }
}
void pop()
{
    if(top==-1)
    {
        printf("Underflow!!");
    }
    else
    {
        printf("\npopped element: %d",inp_array[top]);
        inp_array[top]=0;
        top=top-1;
    }
}
void show()
{
    if(top==-1)
    {
        printf("\nUnderflow!!");
    }
    else
    {
        printf("\nenter present in the stack:\n");
        for(int i=top;i>=0;--i)
        {
            printf("%d\n",inp_array[i]);
        }
    }
}
void firstupdated()
{
    printf("%d\n",inp_array[0]);
}
void peak()
{
    printf("%d\n",inp_array[top]);
}
void oddelement()
{
    for(int i=0;i<=top;i++)
    {
        if(i%2!=0)
        {
            printf("%d\n",inp_array[i]);
        }
        
    }
}
void evenelement()
{
    for(int i=0;i<=top;i++)
    {
        if(i%2==0)
        {
            printf("%d\n",inp_array[i]);
        }
        
    }
}
