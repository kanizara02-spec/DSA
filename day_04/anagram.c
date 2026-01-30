#include<stdio.h>
#include<string.h>
int anagram(char str 1[],char str2[]){
    int i=0;
    if(str[0]=='\0'){
        return 0;
    }
    while(str2[i]!='/0'){
        if(str[0]==str2[i]){
            while(str[i]!='\0'){
                str2[i]=str[i+1];
                i++;
            }
            return anagram(str+1,str2);
        }
        i++;
    }
    return 0;
}
int main() {
    char s1[100], s2[100];
    scanf("%s %s", s1, s2);

    if (checkAnagram(s1, s2, 0))
        printf("Anagram");
    else
        printf("Not Anagram");

    return 0;
}