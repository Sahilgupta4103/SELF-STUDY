//RECURSIVE FUMCTION FOR DISPLAYING A LINKED LIST
#include <stdio.h>
#include <stdlib.h>

struct node
{
   int data; 
   struct node *next;
}*first = NULL;

void create(int a[],int n)
{
   int i;
   struct node *t,*last;
   first=(struct node*)malloc(sizeof(struct node));
   first->data=a[0];
   first->next=NULL;
   last=first;
   
   for(i=0;i<n;i++)
   {
      t=(struct node*)malloc(sizeof(struct node));
        t->data=a[i];
        t->next=NULL;
        last->next=t;
        last=t;
   }
}


void RDisplay(struct node *p)
{
   if(p!=NULL)
   
{
   printf("%d",p->data);
   RDisplay(p->next);
}  
}



int main()
{
   int a[]={3,5,7,10,15};
   create(a,5);
   RDisplay(first);
    return 0;
}