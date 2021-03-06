#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head=NULL;
void insertBeg();
void insertLast();
void deleteBeg();
void deleteLast();
void searchEle();
void displayEle();
int main()
{
    int choice=0;
    while(choice!=8)
    {
        printf("*********Main Menu*********\n");
        printf("Choose one option from the following list ...\n\n");
        printf("===============================================\n\n");
        printf("1.Insert in begining\n");
        printf("2.Insert at last\n");
        printf("3.Delete from Beginning\n");
        printf("4.Delete from last\n");
        printf("5.Search for an element\n");
        printf("6.Show\n");
        printf("7.Exit\n\n");
        printf("Enter your choice?\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: insertBeg();  break;
            case 2: insertLast(); break;
            case 3: deleteBeg();  break;
            case 4: deleteLast(); break;
            case 5: searchEle();  break;
            case 6: displayEle(); break;
            case 7: exit(0); break;
            default:
            printf("Enter valid choice");
        }
    }    
}
void insertBeg()
 {
    struct node *p,*temp;
    int item;
    p = (struct node *) malloc (sizeof(struct node));
    scanf("%d",&p->data);
    if(p==NULL)
      {
        printf("\nOverflow");
      }
    else
      {
        printf("Enter node data");
        scanf("%d",&item);
        p->data=item;
        if(head==NULL)
          {
            head=p;
            p->next=head;
          }
        else
          {
              temp=head;
              while(temp->next!=head)
              {
                 temp=temp->next;
              }
              temp->next=p;
              p->next=head;
              head=p;
          }
          printf("\nnode inserted\n");
      }
   }
void insertLast()
  {
    struct node *p,*temp;
    int item;
    p=(struct node *) malloc (sizeof(struct node));
    scanf("%d",&p->data);
    if(p==NULL)
     {
        printf("\nOverflow");
     }
    else
     {
        printf("\nEnter node data");
        scanf("%d",&item);
        p->data=item;
        if(head=NULL)
          {
            head=p;
            p->next=head;
          }
        else
          {
            temp=head;
            while(temp->next!=head)
              {
                  temp=temp->next;
              }
              temp->next=p;
              p->next=head;
          }
        printf("\nnode inserted\n");
      }
    }
void deleteBeg()
  {
      struct node *p;
      if(head==NULL)
        {
          printf("\nUnderflow");
        }
      else if(head->next==head)
        {
           head=NULL;
           free(head);
           printf("\nnode deleted\n");
        }
      else 
        {
           p=head;
           while(p->next!=head)
             p=p->next;
            p->next=head->next;
            free(head);
            head=p->next;
            printf("\nnode deleted\n");
        }
   }
 void deleteLast()
    {
        struct node *p,*temp;
        if(head==NULL)
          {
             printf("\nUnderflow");
          }
        else if(head->next == head)
          {
              head=NULL;
              free(head);
              printf("\nnode deleted\n");
          }
        else
          {
              p=head;
              while(p->next!=head)
                {
                    p=head;
                    p=p->next;
                }
                temp->next=p->next;
                free(p);
                printf("\nnode deleted\n");
          }
     }
 void searchEle()
     {
         struct node *p;
         int item,i=0,flag=1;
         p=head;
         if(p==NULL)
           {
               printf("\nEmpty list\n");
           }
         else
           {
               printf("\nEnter item which we want to search\n");
               scanf("%d",&item);
               if(head->data == item)
                  {
                      printf("Item found at location %d",i+1);
                      flag=0; 
                  }
               else 
                 {
                     flag=1;
                 }
                 i++;
                 p=p->next;
            }
            if(flag!=0)
              {
                  printf("Item not found\n");
              }
     }
 void displayEle()
     {
         struct node *p;
         p=head;
         if(head==NULL)
           {
               printf("\nnothing to print");
           }
         else
           {
               printf("\n printing values\n");
               while(p->next!=head)
                 {
                     printf("%d\n",p->data);
                     p=p->next;
                 }
             printf("%d\n",p->data);
           }
     }