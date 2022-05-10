#include<stdio.h>
#include<stdlib.h>
struct tree
{
    int data;
    struct tree *left;
    struct tree *right;
};
void inordertraversal(struct tree *root)
 {
     if(root == NULL) return;
     inordertraversal(root->left);
     printf("%d  ",root->data);
     inordertraversal(root->right);
 }
 void preorder(struct tree *root)
  {
      if(root==NULL) return;
      printf("%d  ",root->data);
      preorder(root->left);
      preorder(root->right);
  }
 void postorder(struct tree *root)
 {
     if(root==NULL) return;
     postorder(root->left);
     postorder(root->right);
     printf("%d ",root->data);
 }

int main()
{
    struct tree *root=NULL,*p,*q;
    for(int i=0;i<5;i++)
     {
         p=(struct tree *) malloc (sizeof(struct tree));
         scanf("%d",&p->data);
         p->left=NULL;
         p->right=NULL;
         if(root==NULL)
          {
              root =p;
          }
         else
          {
              q=root;
              while(1)
               {
                   if(p->data < q->data)
                    {
                         if(q->left==NULL)
                          {
                              q->left=p;
                              break;
                          }
                          else
                           {
                               q=q->left;
                           }
                    }
                    else
                     {
                        if(q->right ==NULL)
                         {
                             q->right = p;
                             break;
                         }
                        else
                         {
                            q=q->right; 
                         }
                     }
                    
               }
          }
     }
     printf("\ninorder. ");
     inordertraversal(root);
     printf("\npreorder. ");
     preorder(root);
     printf("\npostorder. ");
     postorder(root);
    
}
