#include<stdio.h>
int palin(int n,int rev){
    if(n==0){
        return rev;
    }
    else{
        return palin((n/10),palin*10+(num%10));
    }
}
int main(){
    int n,rev=0;
    scanf("%d",&n);
    palin(n,rev);
    if(n==plain){
        printf("palindrome");
    }else{
        printf("Not a palindrome");
    }
    return 0;
}