// Insertion At Beginning & Ending.....

#include<stdio.h> 
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};

struct node * list() {
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

struct node *insert_at_start (struct node *head) {
    struct node *newnode;

newnode = (struct node *)malloc(sizeof(struct node));

printf("Enter data: ");
scanf("%d", &newnode->data);

newnode->next = head;
head = newnode;
return head;
}

struct node *insert_aT_end(struct node *head){
       struct node *newnode;
     struct node *temp=head;
newnode = (struct node *)malloc(sizeof(struct node));
printf("Enter data: ");
scanf("%d", &newnode->data);
 newnode->next=NULL;
 if(head == NULL) {
        head = newnode;
        return head;
    }
    while(temp->next!=NULL) {
        temp=temp->next;
    }
    temp->next=newnode;
    return head;
}
 

void display(struct node*head) {
    struct node *temp=head;
    while(temp!=NULL) {
        printf("%d->", temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
    printf("\t");
}


int main() {
    struct node *head;
    head=list();
    printf("original linked list ");
    display(head);

    head=insert_aT_end(head);
    printf("After insertion");
    display(head);
    return 0;
}

