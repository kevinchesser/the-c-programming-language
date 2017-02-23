#include <stdio.h>

//Exercise 1.10 - Copy input to output, replace tab with \t 
//backspace by \b and \ by \\         /
int main(void){
    int c;
    while((c = getchar()) != EOF){
        switch(c){
            case '\t': 
                  putchar('\\');
                  putchar('t');
                  break;
            case '\b': 
                  putchar('\\');
                  putchar('b');
                  break;
            case '\\':
                  putchar('\\');
                  putchar('\\');
                  break;
            default:
                  putchar(c);
        }
    }
    return 0;
}
