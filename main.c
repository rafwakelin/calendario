//
//  main.c
//  canlendario
//
//  Created by Rafael Queiroz on 07/05/2022.
//

#include <stdio.h>

int main (){
    int mes ;
    
    printf ("Escolha o mês de 1 à 12 \n") ;
    scanf ("%d", &mes);
    
    switch (mes) {
        case (1):
            printf ("Janeiro \n");
            break;
        case (2):
            printf ("Fevereiro \n");
            break;
        case (3):
            printf ("Março \n");
            break;
        case (4):
            printf ("Abril \n");
            break;
        case (5):
            printf ("Maio \n");
            break;
        case (6):
            printf ("Junho \n");
            break;
        case (7):
            printf ("Julho \n");
            break;
        case (8):
            printf ("Agosto \n");
            break;
        case (9):
            printf ("Setembro \n");
            break;
        case (10):
            printf ("Outubro \n");
            break;
        case (11):
            printf ("Novembro \n");
            break;
        case (12):
            printf ("Dezembro \n");
            break;
        default:
            printf ("Mês informado é inválido. \n");
            break;
    }
    return 0;
}
