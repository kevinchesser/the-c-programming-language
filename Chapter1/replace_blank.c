#include <stdio.h>

//Exercise 1.9 - Copy input to output, replace multiple blanks with single
int main(void){
    int c;
    int prev;
    while((c = getchar()) != EOF){
        if(prev == ' ' && c == ' '){
        } else{
            putchar(c);
        }
        prev = c;
    }
}
