#include <stdio.h>
#define MINLENGTH 80
#define MAXLINE 1000

//Exercise 1-17 Print all lines that are longer than 80 characters
int main(void){
    int len;
    char line[MAXLINE]; 
    
    while((len = getline(line, MAXLINE)) > 0){
        if(len >= MINLENGTH){
            printf("%s\n", line);
        }
    }
    return 0;
}
