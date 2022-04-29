#include<stdio.h>
#include<malloc.h>
struct double_list
{
	int data;
	struct double_list *prev,*next;
}   *p;
int main()
{
	for(int i=0;i<3;i++)
	{
	printf("Enter elements are");
	struct double_list *head=NULL;
	p=(struct double_list *) malloc (sizeof(struct double_list));
	scanf("%d",&p->data);
	p->prev=NULL;
	p->next=NULL;
	if(head==NULL)
	  {
	  head=p;
      }
	else
	   {
	   	while(head->next!=NULL)
	   	 {
	   	 	head=head->next;
		 }
		 head->next=p;
		 p->prev=head;
	   }
	while(head->prev=NULL);
	   {
	   	  printf("The elements are %d",head->data);
		  head=head->next;  	  
	   }   
   }
  return 0;
}
