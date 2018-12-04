#include<stdio.h>



void select(char* s,char* sub, int current_select,int depth,int sub_str_len, int str_len){


    if(depth > sub_str_len){
        int i;
        for(i=0;i<=depth;i++){
            printf("%c", sub[i]);
        }
        printf("\n");

        return;
}
    int next_select;
    for(next_select=current_select+1; next_select<str_len; next_select++){
        sub[depth+1] = s[next_select];
        select(s, sub, next_select, depth + 1, sub_str_len, str_len);
    }

}

void main(){

char s[] = "01234";
char sub[10] = {};
select(s, sub, -1, 1, 3, 5);


}