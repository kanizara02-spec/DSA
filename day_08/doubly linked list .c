#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* prev;
    struct Node* next;
};
struct Node*insertAtBegin(struct Node* head,int data){
    struct Node*n=(struct Node*)malloc(sizeof(struct Node));
    n->data=data;
    n->prev=NULL;
    n->next=head;
    if(head!=NULL){
        head->prev=n;
    }
    return n;
}