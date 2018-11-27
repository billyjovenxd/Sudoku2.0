#ifndef SUDOKU_3_0_VERIFICAR2_H
#define SUDOKU_3_0_VERIFICAR2_H


class Verificar2{
private:
    int x;
    int y;
    int num;
    int matriz[4][4];
public:
    Verificar2();
    Verificar2(int x, int y, int num, int matriz[4][4]);
    int get_num();
    bool verificar_sudoku2_columna();
    bool verificar_sudoku2_fila();
    bool verificar_sudoku2_casilla();

};


#endif //SUDOKU_3_0_VERIFICAR2_H
