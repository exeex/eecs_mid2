#include<stdio.h>

#define MAX_SIZE_X 1000
#define MAX_SIZE_Y 1000


char map[MAX_SIZE_X][MAX_SIZE_Y]={};
int size_x, size_y;
int is_alive=0;

void walk(int x, int y){

    if(is_alive==1) return;

    if(0<=x && x < size_x && 0<=y && y < size_y){
        if(map[x][y] == '.' || map[x][y] == 'e'){
            map[x][y] = '%';
            walk(x-1,y);
            walk(x+1,y);
            walk(x,y-1);
            walk(x,y+1);
        }else if(map[x][y] == '~'){
            is_alive = 1;
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


int main(){

scanf("%d %d",&size_x, &size_y);
input_map();
//print_map();

int i,j;
int counter=0;
    for(i=0;i<size_x;i++){
        for(j=0;j<size_y;j++){
            if(map[i][j]=='e'){
            walk(i,j);
            }
        }
    }

if(is_alive){
printf("Alive!\n");
}else{
printf("Dead!\n");
}

return 0;

}