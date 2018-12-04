#include<stdio.h>


#define MAX_X 1000
#define MAX_Y 1000

char map[MAX_X][MAX_Y]={};
int size_x, size_y;

void erase(int x, int y){

    if(0<=x && x < size_x && 0<=y && y < size_y){
        if(map[x][y] == '~'){
            map[x][y] = '%';

            erase(x-1,y);
            erase(x+1,y);
            erase(x,y-1);
            erase(x,y+1);
        }
    }
return;
}

void print_map(){
    int i,j;
    for(i=0;i<size_x;i++){
        for(j=0;j<size_y;j++){
            printf("%c", map[i][j]);
        }
        printf("\n");
    }
}

void input_map(){
    int i,j;
    for(i=0;i<size_x;i++){
        for(j=0;j<size_y;j++){
            scanf(" %c", &map[i][j]);
        }
    }
}


void main(){

scanf("%d %d",&size_x, &size_y);
input_map();
//print_map();

int i,j;
int counter=0;
    for(i=0;i<size_x;i++){
        for(j=0;j<size_y;j++){
            if(map[i][j]=='~'){
            erase(i,j);
            counter++;
            }
        }
    }

printf("%d", counter);

return;

}