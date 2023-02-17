

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include <unistd.h>
int height=20,width=20,i,j,gameover,score,x,y,fruitx,fruity,flag;

void setup(){
	gameover=0;
	x=height/2;
	y=width/2;

	label1:
	fruitx=rand()%20;
	if(fruitx==0){
		goto label1;
	}

	label2:
	fruity=rand()%20;
	if(fruity==0){
		goto label2;
	}
	score=0;
}
/*
void draw(){
	system("cls");
	for(i=0;i<height;i++){
		for(j=0;j<width;j++){
			if(i==0||j==height-1||j==0||i==width-1){
				printf("#");
			}
			else{
				if(i==x&&j==y){
					printf("<");
				}
				else if(i==fruitx&&j==fruity){
					printf("*");
				}
		
			}
		}
		printf("\n");
	}

	printf("score=%d\n",score);
	printf("enter x to exit\n");
	printf("===gameover=======\n");
}
*/

void draw()
{
    system("cls");
    for (i = 0; i < height; i++) {
        for (j = 0; j < width; j++) {
            if (i == 0 || i == width - 1
                || j == 0
                || j == height - 1) {
                printf("#");
            }
            else {
                if (i == x && j == y)
                    printf("<");
                else if (i == fruitx
                         && j == fruity)
                    printf("*");
                else
                    printf(" ");
            }
        }
        printf("\n");
    }
  
    // Print the score after the
    // game ends
    printf("score = %d", score);
    printf("\n");
    printf("press X to quit the game");
}
/*
void input(){
	char ch;
	if (kbhit()) {
//	fflush(stdin);
//	scanf("%c",&ch);
	switch(getch()){
		case 'a':flag=1;
		break;

		case 's':flag=2;
		break;

		case 'd':flag=3;
		break;

		case 'w':flag=4;
		break;
		case 'x':
		gameover=1;
		break;

	}
	}
}

*/



void input()
{
	char ch;
    if (kbhit()) {
		//ch=getchar();
       switch (getch()) {
         //    switch (ch) {
        case 'a':
            flag = 1;
            break;
        case 's':
            flag = 2;
            break;
        case 'd':
            flag = 3;
            break;
        case 'w':
            flag = 4;
            break;
        case 'x':
            gameover = 1;
            break;
        }
    }
}



void logic(){
sleep(0.01);
	switch(flag){
		case 1:
		y--;
		break;
		case 2:
		x++;
		break;
		case 3:
		y++;
		break;
		case 4:
		x--;
		break;
		default:
		break;
	}

	//if gameover

	if(x<0||y<0||x>height||y>width){
		gameover=1;
	}

	if(x==fruitx&&y==fruity){
		
label3:
	fruitx=rand()%20;
	if(fruitx==0){
		goto label3;
	}

	do{
	fruity=rand()%20;
    }
	while(fruity==0);
		score+=10;
	}
	
}



void main(){
	setup();
	while(!gameover){
		draw();
		input();
		logic();
	}
}