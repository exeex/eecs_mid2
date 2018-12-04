#include<stdio.h>
#include<string.h>


int counter = 0;

int cursor = 0;
char s[100];

float parse(char* tokens){
    char token = tokens[cursor];
    cursor++;
//    printf("%c",token);
    if(token == '+') return parse(tokens)+parse(tokens);
    else if(token == '-') return parse(tokens)-parse(tokens);
    else if(token == '*') return parse(tokens)*parse(tokens);
    else if(token == '/') return parse(tokens)/parse(tokens);
    else {
    return (float)(int)(token-'0');
    }

}


void main(){

scanf("%s", s);
printf("%.3f", parse(s));

}