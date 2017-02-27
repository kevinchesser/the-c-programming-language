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
        switch(c){
            case '(':
                lParen++;
                break;
            case ')':
                rParen++;
                break;
            case '{':
                lBrace++;
                break;
            case '}':
                rBrace++;
                break;
            case '[':
                lBracket++;
                break;
            case ']':
                rBracket++;
                break;
            default:
                break;
        }
    }
    fclose(fp);
    if(lParen != rParen){
        printf("Unbalanced amount of parens");
    }
    if(lBrace != rBrace){
        printf("Unbalanced amount of braces");
    }
    if(lBracket!= rBracket){
        printf("Unbalanced amount of brackets");
    }
    return 0;
}
