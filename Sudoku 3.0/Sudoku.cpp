#include "Sudoku.h"

Sudoku:: Sudoku(){
    tamano={};
}


Sudoku::Sudoku(int tamano) {
    this->tamano = tamano;
}


int Sudoku::get_tamano() {
    return tamano;
}
