#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node * next;
};

struct node* create() {
    struct node* newNode;
    struct node *temp;
    struct node *head = NULL;
    int n,i;
    printf("enter number of Nodes: ");
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        newNode=(struct node*)malloc(sizeof(struct node));
        printf("enter data");
        scanf("%d", &newNode->data);
       newNode->next=NULL;
     
       if(head==NULL) {
        head=newNode;
        temp=newNode;
       } else {
        temp->next=newNode;
        temp=newNode;
       }
    }
    return head;
}

void display(struct node *head) {
    struct node *temp1 = head;

    printf("Linked List");
    
    while(temp1 != NULL) {
     printf("%d -> ", temp1->data);
     temp1=temp1->next;
    
    }
    printf("NULL\n");

}


int main() {
    struct node *head;
    head=create();
    display(head);
    return 0;
}