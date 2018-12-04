#include<stdio.h>
#include<string.h>


int counter = 0;

void select(char* s,char* sub, int current_select,int depth,int sub_str_len, int str_len, char* s2){
    if(depth > sub_str_len){
        int i;
//        for(i=0;i<sub_str_len;i++){
//            printf("%c", sub[i]);
//        }
//
//        for(i=0;i<sub_str_len;i++){
//            printf("%c", s2[i]);
//        }
//        printf(" %d \n",strncmp(s2,sub,sub_str_len));

        if(strncmp(s2,sub,sub_str_len)==0){
//        printf("!\n");
        counter++;
        }


        return;
}
    int next_select;
    for(next_select=current_select+1; next_select<str_len; next_select++){
        sub[depth-1] = s[next_select];
        select(s, sub, next_select, depth + 1, sub_str_len, str_len, s2);
    }

}

void main(){

char s[100] = {};
char s2[30] = {};
char sub[30] = {};

while(scanf("%s %s",&s,&s2)!=EOF){
counter = 0;
select(s, sub, -1, 1, strlen(s2), strlen(s),s2);
printf("%d\n", counter);
}

}