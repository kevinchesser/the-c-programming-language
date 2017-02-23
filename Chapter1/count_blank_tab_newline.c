#include <stdio.h>

//Exercise 1.8
int main(void){
    int c, blank = 0, tab = 0, nl = 0;
    while((c = getchar()) != EOF){
        if(c == '\t')
            tab++;
        if(c == ' ')
            blank++;
        if(c == '\n')
            nl++;
    }
    printf("Blank: %3d Tab: %3d Newline: %3d", blank, tab, nl); 
    return 0;
}
