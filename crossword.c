#include <graphics.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void c(){
	int x=20;
	for(int i=0;i<4;i++){
		rectangle(x,100,x+40,140);
		x=x+40;
	}
}
void s(){
	int y=20;
	for(int i=0;i<6;i++){
		rectangle(140,y,180,y+40);
		y=y+40;
	}
}
void sp(){
	int x=140;
	for(int i=0;i<5;i++){
		rectangle(x,220,x+40,260);
		x=x+40;
}
}
void j(){
	int x=140;
	for(int i=0;i<5;i++){
		rectangle(x,340,x+40,380);
		x=x+40;
}
}
void k(){
		int y=180;
	for(int i=0;i<5;i++){
		rectangle(300,y,340,y+40);
		y=y+40;
	}
}
void f(){
		int x=300;
	for(int i=0;i<4;i++){
		rectangle(x,300,x+40,340);
		x=x+40;
}
}
//1
void cake(){
	readimagefile("C:\\Users\\LENOVO\\Pictures\\cake.jpg",600,60,1000,360);
	char w[6];
	do{
	setcolor(YELLOW);
	c();
		gets(w);
		if(strcmp(w,"cake")){
			setcolor(RED);
			c();
			delay(1000);
		}
	}while(strcmp(w,"cake"));
	setcolor(WHITE);
	outtextxy(25,105,"C");
	outtextxy(105,105,"K");
	outtextxy(145,105,"E");
	setcolor (GREEN);
	c();
	setcolor(WHITE);
}
//2
void sweets(){
	readimagefile("C:\\Users\\LENOVO\\Pictures\\sweets.jpg",600,60,1000,360);
	char w[6];
	do{
	setcolor(YELLOW);
	s();
		gets(w);
		if(strcmp(w,"sweets")){
			setcolor(RED);
			s();
			delay(1000);
		}
	}while(strcmp(w,"sweets"));
		setcolor(WHITE);
	outtextxy(145,65,"W");
	outtextxy(145,105,"E");
	outtextxy(145,145,"E");
	outtextxy(145,185,"T");
	setcolor (GREEN);
	s();
	setcolor(WHITE);
}
//3
void spoon(){
	readimagefile("C:\\Users\\LENOVO\\Pictures\\spoon.jpg",600,60,1000,360);
	char w[6];
	do{
	setcolor(YELLOW);
	sp();
		gets(w);
		if(strcmp(w,"spoon")){
			setcolor(RED);
			sp();
			delay(1000);
		}
	}while(strcmp(w,"spoon"));
		setcolor(WHITE);
	outtextxy(185,225,"P");
	outtextxy(225,225,"O");
	outtextxy(265,225,"O");
	setcolor (GREEN);
	sp();
	setcolor(WHITE);
}
//4
void juice(){
	readimagefile("C:\\Users\\LENOVO\\Pictures\\juice.jpg",600,60,1000,360);
	char w[6];
	do{
	setcolor(YELLOW);
	j();
		gets(w);
		if(strcmp(w,"juice")){
			setcolor(RED);
			j();
			delay(1000);
		}
	}while(strcmp(w,"juice"));
		setcolor(WHITE);
	outtextxy(145,345,"J");
	outtextxy(185,345,"U");
	outtextxy(225,345,"I");
	outtextxy(265,345,"C");
	setcolor (GREEN);
	j();
	setcolor(WHITE);
}
//5
void knife(){
	readimagefile("C:\\Users\\LENOVO\\Pictures\\knife.jpg",600,60,1000,360);
	char w[20];
	do{
	setcolor(YELLOW);
	k();
		gets(w);
		if(strcmp(w,"knife")){
			setcolor(RED);
			k();
			delay(1000);
		}
	}while(strcmp(w,"knife"));
		setcolor(WHITE);
	outtextxy(305,185,"K");
	outtextxy(305,265,"I");
	outtextxy(305,305,"F");
	setcolor (GREEN);
	k();
	setcolor(WHITE);
}
//6
void fork(){
	readimagefile("C:\\Users\\LENOVO\\Pictures\\fork.jpg",600,60,1000,360);
	char w[6];
	do{
	setcolor(YELLOW);
	f();
		gets(w);
		if(strcmp(w,"fork")){
			setcolor(RED);
			f();
			delay(1000);
		}
	}while(strcmp(w,"fork"));
		setcolor(WHITE);
	outtextxy(305,305,"F");
	outtextxy(345,305,"O");
	outtextxy(385,305,"R");
	setcolor (GREEN);
	f();
	setcolor(WHITE);
}

int main(){

	int gd=DETECT, gm;
	initgraph(&gd,&gm, (char*)"");
	initwindow(1400,700,"TUTORIAL");
	c(); s(); sp(); j(); k(); f();
	settextstyle( SANS_SERIF_FONT, HORIZ_DIR, 3);
	setcolor(YELLOW);
	outtextxy(65,105,"A");
	outtextxy(145,25,"S");
	outtextxy(145,225,"S");
	outtextxy(305,225,"N");
	outtextxy(305,345,"E");
	outtextxy(425,305,"K");
	outtextxy(5,105,"1");
	outtextxy(120,5,"2");
	outtextxy(105,225,"3");
	outtextxy(105,345,"4");
	outtextxy(305,145,"5");
	outtextxy(265,305,"6");
	setcolor(WHITE);
	int nbr,i;
	for( i=0; i<6;i++){
	printf("enter the number ");
	scanf("%i",&nbr);
	switch(nbr){
	case 1: cake(); break;
	case 2: sweets();break;
	case 3: spoon(); break;
    case 4: juice();break;
	case 5: knife(); break;
	case 6: fork();break;
}
}
delay(20);
cleardevice();
	settextstyle( SANS_SERIF_FONT, HORIZ_DIR, 8);
	setcolor(YELLOW);
outtextxy(140,250,"you  win");
	
		system("pause");
		getch();
	closegraph();
}
