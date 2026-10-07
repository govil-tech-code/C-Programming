// Insert at any position....

#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node* next;
};
struct node *list(){
    struct node *node;
    struct node *temp;
    struct node *head=NULL;
int i,n;
    printf("enter nodes");
    scanf("%d", &n);
  for(i=0; i<n; i++) {
    node=(struct node *)malloc(sizeof(struct node));
    printf("enter data");
    scanf("%d", &node->data);
       node->next=NULL;
       if(head==NULL) {
        head=node;
        temp=node;
       } else {
        temp->next=node;
        temp=node;
       }
  }
  return head;
}

struct node insert_at_pos(struct node *head) {
    struct node *newnode;
        struct node *temp;
        int pos,i;
        printf("enter position");
        scanf("%d", &pos);
     newnode=(struct node *)malloc(sizeof(struct node));
    printf("enter data to be inserted");
    scanf("%d", &newnode->data);
    newnode->next=NULL;

    if(pos<1) {
        printf("not valid");
    }
    if(pos==1) {
        newnode->next=head;
        head=newnode;
        return *head;
    }
    temp=head;
    for(i=1; i<pos-1 && temp!=NULL; i++) {
        temp=temp->next;
    }
    if(temp==NULL) {
        printf("invalid operation");
        free(newnode);
        return *head;
    } 

    newnode->next=temp->next;
    temp->next=newnode;
    return *head;
    
}

void display(struct node *head) {
    struct node *temp=head;
    while(temp!=NULL) {
        printf("%d->", temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
}


int main() {
    struct node *head;
    head=list();
    printf("original list");
    display(head);
    *head = insert_at_pos(head);
    printf("After Insertion");
    display(head);
    return 0;
}