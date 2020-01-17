#include <stdio.h>

int main(void){

    int num1;
    int num2;
    float saida;
    float entrada;
    float valvula;
    int total;

    printf("Qual o valor de A?\n");
        scanf(" %d", &num1);

    printf("Qual o valor de B?\n");
        scanf(" %d", &num2);

    printf("Quanta agua saiu?\n");
        scanf(" %f", &saida);

    printf("Quanta agua entrou?\n");
        scanf(" %f", & entrada);



    if (num1< num2 && saida < entrada){
        printf("A é maior %d \n ", num1);
        printf( "realizou-se uma saida de %f \n", saida);
    }else if(num1> num2 && saida > entrada){
        printf("B é maior %d \n", num2);
        printf("realizou-se uma entrada de %f\n ", entrada);
    }else if(num1 <num2 && saida > entrada){
        printf("A é maior %d \n", num1);
        printf("realizou-se uma saida de %f \n", saida);
    }else if (num1 > num2 && saida < entrada){
        printf("B é maior %d \n", num2);
        printf("realizou-se uma entrada a %f \n", entrada);
    }
    }