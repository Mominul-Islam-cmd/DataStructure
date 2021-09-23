#include<iostream>
#include<stdlib.h>
using namespace std;

struct node{
   int data;
   struct node *next;

};
struct node *creat_linklist(int arr[],int size)
{
    int i;
    struct node *head=NULL,*temp=NULL,*current=NULL;
    for(i=0;i<size;i++)
    {
        temp=(struct node*)malloc(sizeof(struct node));
        temp->data=arr[i];
        temp->next=NULL;
        if(head==NULL)
        {
            head=temp;
            current=temp;
        }
        else
        {
            current->next=temp;
            current=current->next;
        }
    }
return head;
};

int main()
{
    int arr[]={10,4,2,6,7};
    struct node *head;
    head=creat_linklist(arr,5);
    while(head!=NULL)
    {
        cout<<head->data<<"->";
        head=head->next;
    }
}
