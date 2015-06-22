#include <stdio.h>
#define MAXSIZE 5

typedef struct stack
{
    int stk[MAXSIZE];
    int top;
};
typedef struct stack ST;
ST *s;
void push();
int  pop();
void display();
void main ()
{
s = (ST *)malloc(sizeof(ST));   
 int choice,num;
    int option = 1;
    
 s->top = -1;
 
    printf ("STACK OPERATION\n");
    while (option)
    {
        printf ("------------------------------------------\n");
        printf ("      1    -->    PUSH               \n");
        printf ("      2    -->    POP               \n");
        printf ("      3    -->    DISPLAY               \n");
        printf ("      4    -->    EXIT           \n");
        printf ("------------------------------------------\n");
 
        printf ("Enter your choice\n");
        scanf    ("%d", &choice);
        switch (choice)
        {
        case 1:
            
            push();
          
            break;
        case 2:
            pop();
           
            break;
        case 3:
            
            display();
           
            break;
        case 4:
            return;
        }
        
        printf ("Do you want to continue(Type 0 or 1)?\n");
        scanf    ("%d", &option);
    
    }
}

void push (num)
{
   
    if (s->top == (MAXSIZE - 1))
    {
        
      printf ("Stack is Full\n");
      return;
        
    }
    else
    {
        printf ("Enter the element to be pushed\n");
        scanf ("%d", &num);
        s->top = s->top + 1;
        s->stk[s->top] = num;
        
    }
}

int pop ()
{
  int num;
if (s->top == - 1)
    {
       printf ("Stack is Empty\n");
       return;
    }
    else
    {
        num = s->stk[s->top];
        printf ("poped element is = %d\n", s->stk[s->top]);
        s->top = s->top - 1;
       
        return(num);
    }
   
}

void display ()
{
  
 int i;
    if (s->top == -1)
    {
         printf ("Stack is Empty\n");
         return;
    }
    
    else
    {
        printf ("\n The status of the stack is \n");
        for (i = s->top; i >= 0; i--)
        {
            printf ("%d\n", s->stk[i]);
              
        }
    }
}
    