#ifndef SUDOKU_3_0_VERIFICAR3_H
#define SUDOKU_3_0_VERIFICAR3_H


class Verificar3{
private:
    int x;
    int y;
    int num;
    int matriz[9][9];
public:
    Verificar3();
    Verificar3(int x, int y, int num, int matriz[9][9]);
    int get_num();
    bool verificar_sudoku3_columna();
    bool verificar_sudoku3_fila();
    bool verificar_sudoku3_casilla();

};


#endif //SUDOKU_3_0_VERIFICAR3_H
