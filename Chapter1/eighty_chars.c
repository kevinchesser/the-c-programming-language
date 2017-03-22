#include <stdio.h>
#define MINLENGTH 80
#define MAXLINE 1000

//Exercise 1-17 Print all lines that are longer than 80 characters

int myGetline(char s[], int lim){
    int c, i;

    for(i = 0; i < lim - 1 && (c=getchar()) != EOF && c != '\n'; i++){
        s[i] = c;
    }
    if(c == '\n'){
        s[i] = c;
        i++;
    }
        s[i] = '\0';
        return i;
}




int main(void){
    int len;
    char line[MAXLINE]; 
    
    while((len = myGetline(line, MAXLINE)) > 0){
        if(len >= MINLENGTH){
            printf("%s\n", line);
        }
    }
    return 0;
}
