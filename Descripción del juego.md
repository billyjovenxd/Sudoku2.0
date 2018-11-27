# Sudoku2.0
Es el avance final del juego.

* ¿Cómo jugar este programa de sudoku? *
 

El juego comenzará realizando una orden: 

Elija su nivel de dificultad:
Marque 2 para jugar 2x2
Marque 3 para jugar 3x3
-->3

* Luego de elegir el nivel de dificultad el juego empezará, ya sea un sudoku 2x2 o 3x3.	 

                                                  --- --- --- ---                   
                                                 |   :   |   :   |                           
                                                   -   -   -   -                    
                                                 |   :   | 1 :   |                
                                                  --- --- --- ---                     
                                                 | 4 :   |   :   |               
                                                  --- --- --- ---                 
                                                 |   : 2 |   : 3 |               
                                                  --- --- --- ---  
   
		
		
		                        --- --- --- --- --- --- --- --- ---
                                   |   : 6 :   | 1 :   : 4 |   : 5 :   |
                                     -   -   -   -   -   -   -   -   -
                                   |   :   :   | 3 :   : 5 | 6 :   :   |
                                     -   -   -   -   -   -   -   -   -
                                   | 2 :   :   |   :   :   |   :   : 1 |
	                                --- --- --- --- --- --- --- --- ---
                                   | 8 :   :   | 4 :   : 7 |   :   : 6 |
		                         -   -   -   -   -   -   -   -   -
                                   |   :   : 6 |   :   :   | 3 :   :   |
                                     -   -   -   -   -   -   -   -   -
                                   | 7 :   :   |9  :   : 1 |   :   : 4 |
                                    --- --- --- --- --- --- --- --- ---
                                   | 5 :   :   |   :   :   |   :   : 2 |
                                     -   -   -   -   -   -   -   -   -
                                   |   :   : 7 | 2 :   : 6 | 9 :   :   |
                                     -   -   -   -   -   -   -   -   -
                                   |   : 4 :   | 5 :   : 8 |   : 7 :   |
                                    --- --- --- --- --- --- --- --- ---



El juego te pedirá tres datos, los cuales servirán para completar el sudoku.
Te pedirá una coordenada “x”, y una “y”. También un número a agregar.

x->    1    2    3    4	
      --- --- --- ---
     | 1 :   :   :   |   1                   
       -   -   -   -   
     |   :   : 4 :   |   2
      --- --- --- ---
     |   :   :   : 3 |   3
       -   -   -   -
     |   : 2 :   :   |   4 
      --- --- --- ---
                         ^
		        | |
                         y  

Ejemplo:

      --- --- --- ---
     | 1 :   :   :   |                      
       -   -   -   -   
     |   :   : 4 :   |   
      --- --- --- ---
     |   :   :   : 3 |   
       -   -   -   -
     |   : 2 :   :   |    
      --- --- --- ---
Ingrese la coordenada x:
1
Ingrese la coordenada y:
2
Ingrese el número que quiera agregar:
3:

      --- --- --- ---
     | 1 :   :   :   |                      
       -   -   -   -   
     | 3 :   : 4 :   |   
      --- --- --- ---
     |   :   :   : 3 |   
       -   -   -   -
     |   : 2 :   :   |    
      --- --- --- ---


Cuando tus valores no son aceptados pueden aparecer 3 alertas:

* Posición ocupada.       -Aparece cuando la posición seleccionada ya tenia un número.

* Número inválido         -Aparece cuando tu numero no está entre los rangos del sudoku o no cumple con los requisitos del sudoku.

* Coordenadas inválidas   -Aparece cuando tus coordenadas están fuera de los rangos del sudoku.

-Requisitos del sudoku: Que el número seleccionado no se repita en su columna, fila o casilla.



Si usted logra completar el sudoku exitosamente se mostrará en pantalla un:

# GANASTE!



Si  fallas 4 veces seguidas saldrá el anuncio 
 #AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
 #YA PERDISTE
