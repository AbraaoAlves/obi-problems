#include <stdio.h>
#include <stdlib.h>


typedef struct No{
    char numero;
    struct No *esquerda;
    struct No *direita;
}No;


void exibirPreOrdem(No *pRaiz){
    if(pRaiz != NULL){
        printf("\n%i", pRaiz->numero);
        exibirPreOrdem(pRaiz->esquerda);
        exibirPreOrdem(pRaiz->direita);
    }
}

void exibirPosOrdem(No *pRaiz){
    if(pRaiz != NULL){
        exibirPosOrdem(pRaiz->esquerda);
        exibirPosOrdem(pRaiz->direita);
        printf("\n%i", pRaiz->numero);
    }
}

No makeTree(char *str){
	return {
		.numero   = "D", 
		.esquerda = {.numero = "B", .esquerda = {.numero = 3}, .direita = {.numero = 5}},
		.direita  = {.numero = "E", .esquerda = {.numero = 4}, .direita = {.numero = 6}}
	};
}

void main(){
	char *input = "DBACEGF"
	
	exibirPosOrdem(makeTree(input));

	return 0;
}