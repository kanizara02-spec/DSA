#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;
};
struct node* insertAtBegin(sruct Node* head,int data){
    struct Node* n=(struct Node*)malloc(sizeof(struct Node));
    n->data=data;
    n->next=head;
    head=n;
}
struct node* insertAtEnd(int data){
    struct node* n=(struct node*)malloc(sizeof(struct node));
    struct node *temp=head;
    n->data=data;
    n->next=NULL;
    if(head==NULL){
        head=n;
        return;
    }
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}
void insertAfter(int key,int x){
    struct node * temp=head;
    while (temp!=NULL && temp->data!=key){
        temp=temp->next;
    }
    if(temp==NULL){
        return ;
    }
    struct node* n=malloc(sizeof(struct node));
    n->data=data;
    n->next=temp->next;
    temp->next=n;
}
void display(){
    struct node* temp=head;
    while(temp!=NULL){
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
int main(){
    inserAtBegin(10);
    insertAtBegin(5);
    inserAtEnd(20);
    insertAfter(10,15);
    display();
    return 0;
}