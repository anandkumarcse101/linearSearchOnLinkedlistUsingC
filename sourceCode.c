#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
}*head=NULL;
void createLinked(int A[],int size)
{   int i;
    struct Node *temp,*last;
    head=(struct Node *)malloc(sizeof(struct Node));
    head->data=A[0];
    head->next=NULL;
    last=head;
    for(i=0;i<size;i++)
    {
        temp=(struct Node*)malloc(sizeof(struct Node));
        temp->data=A[i];
        temp->next=NULL;
        last->next=temp;
        last=temp;
    }
}
struct Node* linearSearch(struct Node *p,int target){
    
      while(p!=NULL)
      {
          if(p->data==target)
              return p;
              p=p->next;
      }
    return NULL;

}
int main()
{   struct Node *temp;
    int target=1;
    int A[]={1,2,3,4,5,6,7,8,9};
    int size=sizeof(A)/sizeof(A[0]); 
    createLinked(A,size);
    temp=linearSearch(head,target); 
    if (temp==NULL)
    {
        printf("Value not present in this given Node");
    }else
    {
        printf("Value present in this given linkedlist");
    }
    
    return 0;
}