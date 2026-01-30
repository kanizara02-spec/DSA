#include<stdio.h>
#define SIZE 5
int stck[SIZE];
int top=-1;
void push(int value){
    if(top==SIZE-1){
        printf("Stack overflow\n");
        return ;
    }
    top++;
    stck[top]=value;
    printf("%d pushed into the stack\n",value);

}
void pop(){
    if(top==-1){
        printf("Stack underflow\n");
        return ;
    }
    printf("%d popped from stck \n",stack[top]);
    top--;
}
void peek(){
    if(top==-1){
        printf("Stack is empty");
        return ;
    }
    printf("Top element is %d\n",stack[top]);
}
void displa(){
    if(top==-1){
        printf("stack is empty");
        return;
    }
    printf("stack elements:\n");
    for(int i=top;i>=0;i--){
        printf("%d",stack[i]);
    }
}
int main(){
    push(10);
    push(20);
    push(30);
    peek();
    display();
    pop();
    pop();
    return 0;
}