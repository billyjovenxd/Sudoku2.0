#include "Verificar3.h"

Verificar3::Verificar3() {
    x={};
    y={};
    num={};
    int i, j;
    for(i = 0; i < 9; i++){
        for(j = 0; j < 9; j++){
            matriz[i][j] = 0;
        }
    }
}


Verificar3::Verificar3(int x, int y, int num, int matriz[9][9]) {
    this->x=x;
    this->y=y;
    this->num=num;
    int i,j;
    for(i=0; i<9;i++){
        for(j=0 ; j<9 ;j++){
            this->matriz[i][j]=matriz[i][j];
        }
    }
}


bool Verificar3:: verificar_sudoku3_columna(){
    for (int i=0; i<9; i++){
        if(matriz[i][x-1]==num){
            return true;
        }
    }
    return false;
}


bool Verificar3:: verificar_sudoku3_fila(){
    for (int i=0; i<9; i++){
        if(matriz[y-1][i]==num){
            return true;
        }
    }
    return false;
}


bool Verificar3:: verificar_sudoku3_casilla() {
    if(x<=3 && y<=3){
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (matriz[i][j] == num) {
                    return true;
                }
            }
        }
    }
    else if(y>=3 && y<=6 && x<=3){
        for (int i = 3; i < 6; i++) {
            for (int j = 0; j < 3; j++) {
                if (matriz[i][j] == num) {
                    return true;
                }
            }
        }
    }
    else if(y>=6 && y<=9 && x<=3) {
        for (int i = 6; i < 9; i++) {
            for (int j = 0; j < 3; j++) {
                if (matriz[i][j] == num) {
                    return true;
                }
            }
        }
    }
    else if(y<=3 && x>=3 && x<=6) {
        for (int i = 0; i < 3; i++) {
            for (int j = 3; j < 6; j++) {
                if (matriz[i][j] == num) {
                    return true;
                }
            }
        }
    }
    else if(y>=3 && y<=6 && x>=3 && x<=6) {
        for (int i = 3; i < 6; i++) {
            for (int j = 3; j < 6; j++) {
                if (matriz[i][j] == num) {
                    return true;
                }
            }
        }
    }
    else if(y>=6 && y<=9 && x>=3 && x<=6) {
        for (int i = 6; i < 9; i++) {
            for (int j = 3; j < 6; j++) {
                if (matriz[i][j] == num) {
                    return true;
                }
            }
        }
    }
    else if(y<=3 && x>=6 && x<=9) {
        for (int i = 0; i < 3; i++) {
            for (int j = 6; j < 9; j++) {
                if (matriz[i][j] == num) {
                    return true;
                }
            }
        }
    }
    else if(y>=3 && y<=6 && x>=6 && x<=9) {
        for (int i = 3; i < 6; i++) {
            for (int j = 6; j < 9; j++) {
                if (matriz[i][j] == num) {
                    return true;
                }
            }
        }
    }
    else if(y>=6 && y<=9 && x>=6 && x<=9) {
        for (int i = 6; i < 9; i++) {
            for (int j = 6; j < 9; j++) {
                if (matriz[i][j] == num) {
                    return true;
                }
            }
        }
    }
    return false;
}


int Verificar3::get_num() {
    return num;
}