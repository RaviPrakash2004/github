#include<stdio.h>
#include<stdlib.h>
struct list
{
    int data;
    struct list *next;
};
struct list *head=NULL,*p,*q;
void FirstAdd();
void ThirdAdd();
void FifthAdd();
int main()
{
   int i;
   for(i=0;i<3;i++)
   {
     p=(struct list *)malloc(sizeof(struct list));
     scanf("%d",&p->data);
     if(head==NULL)
     {
     head=p;
     q=head;
     }
     else
     {
      q->next=p;
      q=p;
     }
   }
   while(q!=NULL)
     {
        printf("%d -->",q->data);
        q=q->next;
     }
     printf("\n");
     FirstAdd();
     ThirdAdd(); 
     FifthAdd();
  }
  void FirstAdd()
    {
      p=(struct list *) malloc (sizeof(struct list));
      p->data=15;
      p->next=head;
      head=p;
      q=head;
      while(q!=NULL)
       {
           printf("%d -->",q->data);
           q=q->next;
       }
        printf("\n");
    }
  void ThirdAdd()
     {
       p=(struct list *) malloc (sizeof(struct list));
       p->data=20;
       q=head;
       p->next = q->next;
       q->next = p;
       q = head;
       while (q!=NULL)
         {
             printf("%d -->",q->data);
             q = q->next;
         }
         printf("\n");
     }
  void FifthAdd()
     {
       p=(struct list *) malloc (sizeof(struct list));
       p->data=30;
       p->next=NULL;
       q=head;
       while(q->next != NULL)
         {
            q=q->next;
         }
         q->next=p;
         q=head;
         while(q!=NULL)
            {
               printf("%d -->",q->data);
               q = q->next;
            }
     }

