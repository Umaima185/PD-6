#include<iostream>
#include<cmath>
#include<windows.h>
#include<string>
#include <atomic>
using namespace std;

void echar();
void player();
void gotoxy(int,int);
void display();
void bullets_x();
void bullets_y();
void bullets_xy();
void pipe_x();
void pipe_y();
void player_move();
void erase_player();
void shoot_bullets();

atomic<bool> bullet_in_motion(false);
    int x = 0;
    int y = 10;


main(){

    system("cls");

    display();
    player_move();
   
}


void player(){
    gotoxy(x+10,y+15);
    cout<<"P";
}

void player_move() {
   while (true) {
      
        if (GetAsyncKeyState(VK_UP) & 0x8000) {
            erase_player();
            y--;
            if (y < 1) y = 1;
            gotoxy(x, y);
            player();
        }
     
        if (GetAsyncKeyState(VK_DOWN) & 0x8000) {
            erase_player();
            y++;
            if (y > 23) y = 23;
            gotoxy(x, y);
            player();
        }
      
        if (GetAsyncKeyState(VK_SPACE) & 0x8000) {
            bullet_in_motion = true; 
            shoot_bullets();
        }
 echar();
        Sleep(100);
    }
}

void shoot_bullets() {
    int bullet_x = x + 12; 
    int bullet_y = y + 15; 


    while (bullet_x < 80) { 
        gotoxy(bullet_x, bullet_y);
        cout << "-"; 

        Sleep(50); 
        x++;
        gotoxy(bullet_x, bullet_y); 
        cout << " "; 
        bullet_x++;
    }
}

void erase_player(){
gotoxy(x+10,y+15);
    cout<<" ";

}


void echar(){
    gotoxy(x+1,y+10);
    cout<<"**";
}

void display(){
    gotoxy(x,y);
    cout<<"***************************************************************************************************************************************************************";
    gotoxy(x,y+1);
    cout<<"##                                                                                                                                                           ##";
    gotoxy(x,y+2);
    cout<<"##                                                                                                                                                           ##";
    gotoxy(x,y+3);
    cout<<"##                                                                                                                                                           ##";
    gotoxy(x,y+4);
    cout<<"##                                                                                                                                                           ##";
    gotoxy(x,y+5);
    cout<<"##                                                                                                                                                           ##";
    gotoxy(x,y+6);
    cout<<"##                                                                                                                                                           ##";
    gotoxy(x,y+7);
    cout<<"##                                                                                                                                                           ##";
    gotoxy(x,y+8);
    cout<<"##                                                                                                                                                           ##";
    gotoxy(x,y+9);
    cout<<"##                                                                                                                                                           ##";
    gotoxy(x,y+10);
    cout<<"##                                                                                                                                                           ##";
    gotoxy(x,y+11);
    cout<<"##                                                                                                                                                           ##";
    gotoxy(x,y+12);
    cout<<"##                                                                                                                                                           ##";
    gotoxy(x,y+13);
    cout<<"##                                                                                                                                                           ##";
    gotoxy(x,y+14);
    cout<<"##                                                                                                                                                           ##";
    gotoxy(x,y+15);
    cout<<"##                                                                                                                                                           ##";
    gotoxy(x,y+16);
    cout<<"##                                                                                                                                                           ##";
    gotoxy(x,y+17);
    cout<<"##                                                                                                                                                           ##";
    gotoxy(x,y+18);
    cout<<"##                                                                                                                                                           ##";
    gotoxy(x,y+19);
    cout<<"##                                                                                                                                                           ##";
    gotoxy(x,y+20);
    cout<<"##                                                                                                                                                           ##";
    gotoxy(x,y+21);
    cout<<"##                                                                                                                                                           ##";
    gotoxy(x,y+22);
    cout<<"##                                                                                                                                                           ##";
    gotoxy(x,y+23);
    cout<<"***************************************************************************************************************************************************************";


}


void gotoxy(int x, int y)
{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
