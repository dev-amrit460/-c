// Write a program to implement stack using Array with PUSH, POP, and TRAVERSE operations.

#include <stdio.h>
#include <stdlib.h>
#include <limits.h> 

int stack[100], SIZE, top=-1;  
int push(int);  
int pop();  
void traverse();  

void main ()  
{  
    int choice, ret, data;  
    printf("Enter the size of your stack: \t");   
    scanf("%d",&SIZE);
    
    
    {  
        while(1){  
        printf("\n----------------------------------------------\n");  	
        printf("\t Stack operations using array \t");  
        printf("\n----------------------------------------------\n");  
        printf("1.Push \t 2.Pop \t 3.Traverse \t 4.Exit \n");  
        
        printf("\nEnter your choice: ");        
	    scanf("%d",&choice);
        switch(choice)
	{  
            case 1:
            {   
		     printf("Enter data to push into stack: ");
                scanf("%d", &data);
                push(data);
                break;
            }

		  
            case 2:
            {data = pop();
            break;}

            case 3:
           {traverse(); 
            break;}
            

            case 4:
            {  
                printf("Exiting....\n");  
		        exit(0);
                break;
            }  
            default:
            {  
                printf("Please Enter valid choice ");  
            }   
        } 
    }  
} 
} 
int push(int data)
{
    if(top>=SIZE-1)
    {
        printf("*** Stack Overflow, can't add more element element to stack.\n");
    }
    else
    {
        top++;
        stack[top] = data;
        printf("*** Data pushed to stack.\n");
    }
}
int pop()
{ 
		if(top<=-1)             
		{
			printf("*** Stack underflow.\n");
		}
		else
		{   
			printf("*** Data removed ==> %d\n",stack[top]);
            top--;
		}
}         
void traverse()
{  
		if(top>=0)
    {
        for(int i=top; i>=0; i--)
        printf("\n%d",stack[i]);
    }
    else
    {
        printf("Stack is empty"); 
    }
} 