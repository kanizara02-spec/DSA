#include<stdio.h>
int main(){
    int a[10][10];
    int temp;
    int i,j,r,c;
    scanf("%d %d",&r,&c);
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
    }
    for(i=0;i<r;i++){
        fopr(j=0;j<c;j++){
            printf("%d",a[i][j]);
        }
    }
    return 0;
}