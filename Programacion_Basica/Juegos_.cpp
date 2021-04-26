#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
 
using namespace std;
 
void gotoxy(int x, int y){
        HANDLE hCon;
        hCon=GetStdHandle(STD_OUTPUT_HANDLE);
        
        COORD dwPos;
        dwPos.X=x;
        dwPos.Y=y;
        SetConsoleCursorPosition(hCon,dwPos);
}
 
class Snake{
        public:
                int x,y;
                int dx,dy;
                char cuerpo;
};
 
class Fruta{
        public:
                int x,y;
                char cuerpo=254;
};
 
class Juego{
        public:
                void main();
        private:
                int score,nivel,velocidad;
                Snake snake[100];
                Fruta fruta;
                int tam=4;
                int c=21,f=64;
                bool gameover=false;
                void tablero();
                //void inicio();
                void genFruta();
                void genSnake();
                void loop();
                void tecla();
                void actualizar();
                void imprimir();
                void cfruta();
                void muerte();
                void puntos();
                //void menu();
                void portada();
                void muerte2();
        
};
 
void Juego::muerte2(){
        system("cls");
        int c=24,f=79,r;
        char key;
        char t=178;
        for(int i=0 ; i<f ; i++){
                gotoxy(i,0);
                cout<<t;
                gotoxy(i,c);
                cout<<t;
        }
        for(int i=0 ; i<=c ; i++){
                gotoxy(0,i);
                cout<<t;
                gotoxy(f,i);
                cout<<t;
        }
        
        string g4meover[]={"  ____                       ___"," / ___| __ _ _ __ ___   ___ / _ \\__   _____ _ __ ",
        "| |  _ / _` | '_ ` _ \\ / _ \\ | | \\ \\ / / _ \\ '__|","| |_| | (_| | | | | | |  __/ |_| |\\ V /  __/ | ",
        " \\____|\\__,_|_| |_| |_|\\___|\\___/  \\_/ \\___|_|"};
        r=2;
        for(int i=0;i<5;i++){
                gotoxy(15,r);
                r++;
                cout<<g4meover[i]<<endl;
        }
        
        string g4meover2[]={"   _________         _________","  /         \\       /         \\",
        " /  /~~~~~\\  \\     /  /~~~~~\\  \\"," |  |     |  |     |  |     |  |"," |  |     |  |     |  |     |  |",
        " |  |     |  |     |  |     |  |         /"," |  |     |  |     |  |     |  |       //","(X  X)    \\  \\_____/  /     \\  \\_____/ /",
        " \\__/      \\         /       \\        /","  |         ~~~~~~~~~         ~~~~~~~~","  ^"};
        for(int i=0;i<11;i++){
                gotoxy(20,r);
                cout<<g4meover2[i]<<endl;
                r++;
                
        }
        gotoxy(33,r);
        cout<<"Score: "<<score;
        r++;
        gotoxy(33,r);
        cout<<"Level: "<<nivel;
        gotoxy(8,23);
        cout<<"Presione ESC para salir o cualquier otra tecla para seguir jugando";
        key=getch();
        if(key==27)
                exit(1);
}
 
 
void Juego::portada(){
        system("cls");
        int c=24,f=79,r;
        char t=178;
        for(int i=0 ; i<f ; i++){
                gotoxy(i,0);
                cout<<t;
                gotoxy(i,c);
                cout<<t;
        }
        for(int i=0 ; i<=c ; i++){
                gotoxy(0,i);
                cout<<t;
                gotoxy(f,i);
                cout<<t;
        }
        string snkd[]={"       ---_ ......._-_--.","      (|\\ /      / /| \\  \\","      /  /     .'  -=-'   `.",
                "     /  /    .'             )","   _/  /   .'        _.)   /","  / o   o        _.-' /  .'",
                "  \\          _.-'    / .'*|","   \\______.-'//    .'.' \\*|","    \\|  \\ | //   .'.' _ |*|",
                "     `   \\|//  .'.'_ _ _|*|","      .  .// .'.' | _ _ \\*|","      \\`-|\\_/ /    \\ _ _ \\*\\",
                "                     \\ _ _ \\*","                      \\ _ _ \\ ","                       \\_"};
                
        r=2;
        for(int i=0;i<14;i++){
                gotoxy(20,r);
                r++;
                cout<<snkd[i]<<endl;
        }
        
        string snkl[]={"                     __     ","   _________  ____ _/ /_____","  / ___/ __ \\/ __ `/ //_/ _ \\",
        " (__  ) / / / /_/ / ,< /  __/","/____/_/ /_/\\__,_/_/|_|\\___/"};
        for(int i=0;i<5;i++){
                gotoxy(22,r);
                r++;
                cout<<snkl[i]<<endl;
        }
        gotoxy(23,23);
        cout<<"Precione ENTER para empezar";
        system("pause>dsdsd");
}
 
 
void Juego::puntos(){
        gotoxy(f+2,2);
        cout<<"Score: "<<(score-1)*10;
        gotoxy(f+2,4);
        cout<<"Level: "<<nivel;
        gotoxy(f+2,6);
        cout<<"Length: "<<tam;
        
        
}
void Juego::tablero(){
        char t=178;
        for(int i=1 ; i<f ; i++){
                gotoxy(i,1);
                cout<<t;
                gotoxy(i,c);
                cout<<t;
        }
        for(int i=1 ; i<=c ; i++){
                gotoxy(1,i);
                cout<<t;
                gotoxy(f,i);
                cout<<t;
        }
}
 
void Juego::genFruta(){
        
    fruta.x = 2+( rand() % (f-2) );
    fruta.y = 2+(rand() % (c-2));
    gotoxy(fruta.x,fruta.y);
    cout<<fruta.cuerpo;
        
}
 
void Juego::muerte(){
        if(snake[0].x==1 || snake[0].x==f || snake[0].y==1 || snake[0].y==c)
        gameover=true;
        
    for(int i=1;i<tam && gameover==false;i++){
        if(snake[0].x==snake[i].x && snake[0].y==snake[i].y){
            gameover=true;
        }
    
        }
}
 
void Juego::tecla(){
        int i;
    char key;
    
        if (!gameover){
                if (kbhit()==1){
                        key=getch();
        
                }
                if((key==72) && snake[0].dy !=1){
                        snake[0].dx=0;
                        snake[0].dy=-1;
                }
                if((key==80) && snake[0].dy !=-1){
                        snake[0].dx=0;
                        snake[0].dy=1;
                }
                if((key==75) && snake[0].dx !=1){
                        snake[0].dx=-1;
                        snake[0].dy=0;
                }
                if((key==77) && snake[0].dx !=-1){
                        snake[0].dx=1;
                        snake[0].dy=0;
                }
        }
}
 
void Juego::genSnake(){
        int i;
        snake[0].x=30;
        snake[0].y=10;
        snake[0].dx=1;
    snake[0].dy=0;
        snake[0].cuerpo=157;
        
        
        
    for(i=1;i < tam; i++){
        snake[i].x=snake[i-1].x-1;
        snake[i].y=snake[i-1].y;
        snake[i].cuerpo=184;
    }
    
 
    for(i=0; i<tam; i++){
        gotoxy(snake[i].x,snake[i].y);
        cout<<snake[i].cuerpo;
    }
}
 
void Juego::cfruta(){
        if(snake[0].x==fruta.x && snake[0].y==fruta.y){
                genFruta();
        tam+=1;
        snake[tam-1].cuerpo=184;
        score+=1;
        if(tam%10==0){
                        nivel++;
                        velocidad-=20;
                }
 
    }
}
void Juego::actualizar(){
        int i;
        gotoxy(snake[tam-1].x,snake[tam-1].y);
        cout<<" ";
        
    for (i= tam-1; i>0; i--){
        snake[i].x=snake[i-1].x;
        snake[i].y=snake[i-1].y;
    }
    snake[0].x += snake[0].dx;
    snake[0].y += snake[0].dy;
        
}
 
void Juego::imprimir(){
        int i;
        for(i= tam-1; i>=0; i--){
        gotoxy(snake[i].x,snake[i].y);
        cout<<snake[i].cuerpo;
    }
}
void Juego::loop(){
        while(!gameover){
                cfruta();
                puntos();
                actualizar();
                imprimir();
                tecla();
                tecla();
                tecla();
                muerte();
                Sleep(velocidad);
        }
}
 
void Juego::main(){
        system("color 0a");
        gameover=false;
        portada();
        system("cls");
        score=1;
        velocidad=110;
        tam=4;
        nivel=1;
        tablero();
        srand(time(NULL));
        genSnake();
        genFruta();
        loop();
        muerte2();
        main();
 
        
    
        
}
 
int main(){
        Juego j;
        j.main();
}
 