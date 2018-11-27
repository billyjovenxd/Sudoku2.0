#include <iostream>
#include "Sudoku.h"
#include "Verificar2.h"
#include "Verificar3.h"


using namespace std;


int menu(){
    int niveldif;
    cout << "BIENVENIDO A SUDOKU!" << endl;
    cout<<'\n'<<"Elija su nivel de dificultad:" <<'\n'<<
        "Marque 2 para jugar 2x2"<<'\n'<<"Marque 3 para jugar 3x3"<<'\n'<<"->";
    cin>> niveldif;cout<<'\n';

    while (true) {
        if (niveldif == 2) {
            break;

        } else if (niveldif == 3) {
            break;

        } else {
            cout << '\n' << "Por favor ingrese un numero valido (2 o 3)" << '\n' << "->";
            cin >> niveldif;
            cout << '\n';
        }
    }
    return niveldif;
}


void sudoku3() {
    int contador;
    contador=0;

    enum { _ = -1 };
    int matriz[9][9] = {{_, 1, _, 1, _, 1, _, 1, _},
                        {_, _, _, 1, _, 1, 1, _, _},
                        {1, _, _, _, _, _, _, _, 1},
                        {1, _, _, 1, _, 1, _, _, 1},
                        {_, _, 1, _, _, _, 1, _, _},
                        {1, _, _, 1, _, 1, _, _, 1},
                        {1, _, _, _, _, _, _, _, 1},
                        {_, _, 1, 1, _, 1, 1, _, _},
                        {_, 1, _, 1, _, 1, _, 1, _}};

    srand(time(NULL));
    for(int i = 0; i < 9 ; i++){
        for(int j = 0; j < 9; j++){
            if (matriz[i][j]>0){
                while(true) {
                    Verificar3 t =Verificar3(j+1, i+1, (rand() % 9) + 1, matriz);
                    if (t.verificar_sudoku3_casilla()== 0 &&
                        t.verificar_sudoku3_columna()==0 &&
                        t.verificar_sudoku3_fila()==0) {
                        matriz[i][j] = t.get_num();
                        break;
                    }
                }
            }
        }
    }



    do{
        for (int i = 0; i < 9; i++) {
            if (i == 3 || i == 6 || i == 0) {
                cout << " --- --- --- --- --- --- --- --- ---" << endl << "| ";
            } else {
                cout << "  -   -   -   -   -   -   -   -   - " << endl << "| ";
            }
            for (int j = 0; j < 9; j++) {
                if (j == 2 || j == 5 || j == 8) {
                    if (matriz[i][j] > 0) { cout << matriz[i][j] << " | "; }
                    else {
                        cout << " " << " | ";
                    }
                }
                else { if (matriz[i][j] > 0) { cout << matriz[i][j] << " : "; } else { cout << " " << " : "; }}
            }
            cout << endl;
        }
        cout << " --- --- --- --- --- --- --- --- ---" << endl << endl;

        int x;
        int y;
        int num;
        int contador2;
        contador2=0;
        while (true) {
            cout << "Ingrese la coordenada x: " << '\n';
            cin >> x;
            cout << "Ingrese la coordenada y: " << '\n';
            cin >> y;
            cout << "Ingrese el numero que quiera agregar: " << '\n';
            cin >> num;

            Verificar3 nuevo_num = Verificar3(x, y, num, matriz);

            if (x >= 1 && x <= 9 && y >= 1 && y <= 9) {
                if (num >= 1 && num <= 9) {
                    if (nuevo_num.verificar_sudoku3_fila() == 0 &&
                        nuevo_num.verificar_sudoku3_columna() == 0 &&
                        nuevo_num.verificar_sudoku3_casilla() == 0) {

                        if (matriz[y - 1][x - 1] <= 0) {

                            matriz[y - 1][x - 1] = num;
                            break;

                        } else {
                            cout << "Posición ocupada" << '\n';
                        }
                    } else {
                        cout << "Numero inválido" << '\n';
                    }
                }
                else {
                    cout << "Numero inválido" << '\n';
                }
            }
            else {
                cout << "Coordenadas inválidas" << '\n';
            }
            contador2++;
            if (contador2==5){
                cout<<"AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA \n YA PERDISTE \n\n\n\n\n\n\n\n\n\n\n\n";
                break;
            }
        }
        contador++;
    }while (contador<52);

    for (int i = 0; i < 9; i++) {
        if (i == 3 || i == 6 || i == 0) {
            cout << " --- --- --- --- --- --- --- --- ---" << endl << "| ";
        } else {
            cout << "  -   -   -   -   -   -   -   -   - " << endl << "| ";
        }
        for (int j = 0; j < 9; j++) {
            if (j == 2 || j == 5 || j == 8) {
                if (matriz[i][j] > 0) { cout << matriz[i][j] << " | "; }
                else {
                    cout << " " << " | ";
                }
            }
            else { if (matriz[i][j] > 0) { cout << matriz[i][j] << " : "; } else { cout << " " << " : "; }}
        }
        cout << endl;
    }
    cout << " --- --- --- --- --- --- --- --- ---" << endl << endl;

    cout<<"GANASTE!"<<'\n';//cambiar mas tarde
}


void sudoku2() {
    int contador;
    contador=0;
    enum {_ =-1};
    int matriz[4][4]= {{ _, _, _, _},
                       { _, _, 1, _},
                       { 1, _, _, _},
                       { _, 1, _, 1}};
    srand(time(NULL));
    for(int i = 0; i < 4 ; i++){
        for(int j = 0; j < 4; j++){
            if (matriz[i][j]>0){
                while(true) {
                    Verificar2 t = Verificar2(j+1,i+1,(rand() % 4) + 1,matriz);
                    if (t.verificar_sudoku2_columna() == 0 &&
                        t.verificar_sudoku2_casilla()==0 &&
                        t.verificar_sudoku2_fila()==0){
                        matriz[i][j] = t.get_num();
                        break;
                    }
                }
            }
        }
    }

    do{
        for (int i = 0; i < 4; i++){
            if (i==2 || i==0){
                cout<<" --- --- --- ---"<<endl<<"| ";
            }
            else{
                cout<<"  -   -   -   -"<<endl<<"| ";
            }
            for (int j = 0; j < 4; j++) {
                if (j==1 || j==3 ){  if (matriz[i][j]>0){cout<<matriz[i][j]<<" | ";} else{cout<<" "<<" | ";}}
                else {if (matriz[i][j]>0){cout<<matriz[i][j]<<" : ";} else{cout<<" "<<" : ";}}
            }cout<<endl;
        }
        cout<<" --- --- --- ---"<<endl<<endl;

        int x;
        int y;
        int num;
        int contador2;
        contador2=0;
        while(true){
            cout << "Ingrese la coordenada x: " << '\n';
            cin >> x;
            cout << "Ingrese la coordenada y: " << '\n';
            cin >> y;
            cout << "Ingrese el numero que quiera agregar: " << '\n';
            cin >> num;

            Verificar2 nuevo_num= Verificar2(x, y, num, matriz);

            if (x >= 1 && x <= 4 && y >= 1 && y <= 4) {
                if (num >= 1 && num <= 4) {
                    if (nuevo_num.verificar_sudoku2_fila()==0 &&
                        nuevo_num.verificar_sudoku2_casilla()==0 &&
                        nuevo_num.verificar_sudoku2_columna() == 0) {

                        if (matriz[y - 1][x - 1] <= 0) {

                            for (int i = 0; i < 4; i++) {
                                for (int j = 0; j < 4; j++) {
                                    matriz[y - 1][x - 1] = num;
                                }
                            }
                            break;
                        }

                        else{
                            cout<< "Posición ocupada" <<"\n\n";
                        }
                    }
                    else {
                        cout << "Numero inválido " << "\n\n";
                    }
                } else {
                    cout << "Numero fuera de rango" << "\n\n";
                }
            }
            else {
                cout << "Coordenadas inválidas" << "\n\n";
            }
            contador2++;
            if (contador2==4){
                cout<<"AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA \n YA PERDISTE \n\n\n\n\n\n\n\n\n\n\n\n";
                break;
            }

        }
        contador++;
    }while (contador<12);

    for (int i = 0; i < 4; i++){
        if (i==2 || i==0){
            cout<<" --- --- --- ---"<<endl<<"| ";
        }
        else{
            cout<<"  -   -   -   -"<<endl<<"| ";
        }
        for (int j = 0; j < 4; j++) {
            if (j==1 || j==3 ){  if (matriz[i][j]>0){cout<<matriz[i][j]<<" | ";} else{cout<<" "<<" | ";}}
            else {if (matriz[i][j]>0){cout<<matriz[i][j]<<" : ";} else{cout<<" "<<" : ";}}
        }cout<<endl;
    }
    cout<<" --- --- --- ---"<<endl<<endl;

    cout<<"GANASTE!"<< '\n';
}


void juego_sudoku(Sudoku s){
    if (s.get_tamano()==2){
        sudoku2();
    }
    else if(s.get_tamano()==3){
        sudoku3();
    }
}


int main() {
    int l;
    l = menu();
    auto s1 = Sudoku(l);
    juego_sudoku(s1);
    return 0;
}