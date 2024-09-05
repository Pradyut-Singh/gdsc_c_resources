#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char str[1000];
    int i,count=0;
    char c;
    printf("Enter a string: ");
    gets(str);
    for(i=0;i<strlen(str);i++){
        str[i]=tolower(str[i]);
    }
    //puts(str);
    printf("Enter The Character You Need To Find The Frequency: ");
    scanf("%c", &c);
    char target=tolower(c);
    for(i=0;i<strlen(str);i++){
        if(target==str[i]){
            count++;
        }
    }
    printf("Frequency of %c = %d", c, count);
    
    return 0;
}