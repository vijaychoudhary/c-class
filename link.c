#include<stdio.h.>
#include<stdlib.h>
struct dnode {
	int value;
	struct dnode *next;
    struct dnode *previous;
};

typedef struct dnode dNode;

dNode *head;
dNode *tail;
dNode *pointer;



void insert(int);
int fetch(int);
void display(void);
int search(int);
void main()
{
    int choice;
	int value;
	int index;
    int srch;
    int find;
	while(1) {
		printf("What do you want to do in doubly linklist?\n\n");
		printf("1. Insert \n2. Fetch \n3. display \n4. search\n5. Exit\n");
		scanf("%d", &choice);
		
		switch(choice) {
			case 1:
				printf("\nEnter the value you want to insert!\n");
				scanf("%d", &value);
				insert(value);
				printf("\nInserted the value %d into linkedList\n", value); 
				break;
			case 2:
				printf("\nValue at what index you want to fetch\n");
				scanf("%d", &index);
				value = fetch(index);
				printf("\nValue at index %d is %d\n", index, value);
             
				break;
			case 3:
				
				display();
                break;
           case 4:
               printf("\nEnter the value U want to search\n");
				 scanf("%d", &srch);
               find=search(srch);
               printf("%d\n", find);
               break;
           case 5:
                   printf("\nExiting...\n"); 
                  exit(0);   
			default:
				break;
		}
	}
}
void insert(int value) {
	if(head == NULL) {
		head = (dNode *)malloc(sizeof(dNode));
		head->value = value;
        head->next = NULL;
		tail = head;
	} else {
		tail->next = (dNode *)malloc(sizeof(dNode));
       tail->next->value = value;
       tail->next->next = NULL;
       tail = tail->next;
		
     	}
}
int fetch(int index) {
    int i;
    
	if(head == NULL) {
		printf("Double linklist is empty");
	}
    if(index<0)
    {
	
	
   
	for ( i = -1; i > index; i--) {
        if(tail->previous == NULL) {
			printf("Double Linklist is emty");
        
		  }
		tail = tail->previous;
	}
	
	return tail->value;
}
if(index>=0)
{
    pointer=head;
    for ( i = 0; i < index; i++) {
		if(pointer->next == NULL) {
			return -1;
		}
		pointer = pointer->next;
	}
	
	return pointer->value;
}
}
void display()
{
    
int i;
     dNode *im;
     
    im=head;
    if (head==NULL)
    {
        printf("Linklist is empty\n");
    }
   
    else
    {
        printf ("\n The status of the link list is \n");
       
        
            while(im->next!=NULL)
            {
           
                
                printf ("%d\n",(im->value));
                im=im->next;
                
        
            }
            printf ("%d\n",(im->value));
            return;
        
    }
}
int search(srch)
{
    dNode *sr;
    sr=head;
    if (head==NULL)
    {
        printf("Linklist is empty\n");
    }
while(sr->next!=NULL)   
{
if(sr->value==srch)
{
return(1);}

else{ 
return 0;

} 
sr=sr->next;
}
if(sr->value==srch)
{
    return 1;
}

    
    
}
    