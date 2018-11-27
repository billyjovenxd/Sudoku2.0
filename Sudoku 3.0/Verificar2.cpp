#include "Verificar2.h"

Verificar2::Verificar2() {
    x={};
    y={};
    num={};
    int i,j;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            matriz[i][j]=0;
        }
    }
}


Verificar2::Verificar2(int x, int y, int num, int matriz[4][4]) {
    this->x=x;
    this->y=y;
    this->num=num;
    int i, j;
    for(i=0; i<4;i++){
        for(j=0 ; j<4 ;j++){
            this->matriz[i][j]=matriz[i][j];
        }
    }
}


bool Verificar2:: verificar_sudoku2_columna(){
    for (int i=0; i<4; i++){
        if(matriz[i][x-1]== num){
            return true;
        }
    }
    return false;
}


bool Verificar2:: verificar_sudoku2_fila(){
    for (int i=0; i<4; i++){
        if(matriz[y-1][i]== num){
            return true;
        }
    }
    return false;
}


bool Verificar2:: verificar_sudoku2_casilla() {
    if(x<=2 && y<=2){
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                if (matriz[i][j] == num) {
                    return true;
                }
            }
        }
    }
    else if(y>=2 && y<=4 && x<=2){
        for (int i = 2; i < 4; i++) {
            for (int j = 0; j < 2; j++) {
                if (matriz[i][j] == num) {
                    return true;
                }
            }
        }
    }
    else if(x>=2 && x<=4 && y<=2){
        for (int i = 0; i < 2; i++) {
            for (int j = 2; j < 4; j++) {
                if (matriz[i][j] == num) {
                    return true;
                }
            }
        }
    }
    else if(y<=4 && y>=2 && x>=2 && x<=4) {
        for (int i = 2; i < 4; i++) {
            for (int j = 2; j < 4; j++) {
                if (matriz[i][j] == num) {
                    return true;
                }
            }
        }
    }
    return false;
}


int Verificar2::get_num() {
    return num;
}