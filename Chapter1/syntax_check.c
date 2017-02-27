#include <stdio.h>

//Exercise 1-24 - Check a C program for rudimentary syntax errors
//Unbalanced parens, brackets, and braces

int main(int argc, char* argv[]){
    int lParen = 0, rParen = 0;
    int lBracket = 0, rBracket = 0;
    int lBrace= 0, rBrace = 0;
    int c;
    FILE * fp;
    fp = fopen(argv[1], "r");

    while((c = fgetc(fp))){
        if(feof(fp)){
            break;
        }
        printf("%c", c); 
    }
    fclose(fp);

    return 0;
}
