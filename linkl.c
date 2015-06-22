#include<stdio.h>
struct linkedlist {
    int value;
    struct linkedlist *next;

};
typedef struct linkedlist Linkedlist;
Linkedlist *head;
Linkedlist *tail;
void main()
{
    
Linkedlist firstelement;
firstelement.value=10;
head=&firstelement;
tail=&firstelement;
Linkedlist secelement;
secelement.value=20;
*tail.next=&secelement;
tail=&secelement;

}
void insert(int element)
{
    

}
Linkedlist getNext(Linkedlist list){
    

} 