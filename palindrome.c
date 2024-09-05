#include <stdio.h>
#include <string.h>

int main(){
    char input[30],reverse[30],temp[30];
    int i,flag=0;
    printf("Enter a String: ");
    scanf("%s",input);
    strcpy(temp,input);
    int length=strlen(input);
    for(i=0;i<length;i++){
        reverse[length-1-i]=input[i];
    }
    for(i=0;i<length;i++){
        if(reverse[i]!=temp[i]){
            break;
        }
        else{
            flag=1;
        }
    }
    if(flag==1){
        printf("The string is a palindrome\n");
    }
    else{
        printf("The string is not a palindrome\n");
    }
}