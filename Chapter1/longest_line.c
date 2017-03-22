#include <stdio.h>
#define MAXLINE 1000

//getline - read a line into array and return the length
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

//copy - copy from into to
void copy(char to[], char from[]){
    int i = 0;
    while((to[i] = from[i] != '\0')){
        i++;
    }
}

int main(void){
    int len; //current line length
    int max; //max length seen
    char line[MAXLINE];         //current input line
    char longest[MAXLINE];      //longest line seen

    max = 0;
    while((len = myGetline(line, MAXLINE)) > 0){
        if(len > max) {
            max = len;
            copy(longest, line);
        }
    }
    if(max > 0){
        printf("%s\n", longest);
    }
    return 0;
}
