#include <stdio.h>
#include <ncurses.h>


#define LINHAS 10
#define COLUNAS 34
#define POS_X 8
#define POS_Y 15

void move_jogador();

int main (){

    initscr();

    int i,j, posX=POS_X, posY=POS_Y;
    char frog;

    char mapa [LINHAS][COLUNAS] =   {{"**"},
                                      {"                               "},
                                      {"                               "},
                                      {"                               "},
                                      {"                               "},
                                      {"                               "},
                                      {"                               "},
                                      {"                               "},
                                      {"                               "},
                                      {"**"}};



    //desenha mapa
    for(i = 0; i < LINHAS; i++){
        for(j = 0; j < COLUNAS; j++)
            printw("%c",mapa[i][j]);
        printw("\n");

    }

    //imprime jogador na posição inicial
    mvprintw(posX,posY, "%c", '@');

    //imprime posição do jogador no mapa
    move_jogador(posX, posY,mapa);

    refresh();
    getch();
    endwin();

    printf("\n\n<<<<<Fim do jogo!! rs..>>>>>\n\n\n");


    return 0;

}


void move_jogador(int *posX, int posY, char mapa[LINHAS][COLUNAS]){

    char c;

    c=getch();

    switch (c)
    {
    case 'w' :

        if (mapa[posX][posY]== '@')
        {
            mvprintw(posX,*posY, "%c", ' ');
            getch();

        }





        break;

    default:
        break;
    }



}