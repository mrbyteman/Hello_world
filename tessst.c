#include <stdio.h>
#include <stdlib.h>
#include "tabelaHash2.h"


int main(int argc, char const *argv[]){
	Hash *ha=(Hash*)malloc(sizeof(Hash*));
	struct registrador a[7] = {{1235,"Andre",9.5,7.8,8.5,"andre@gmail.com"},
                         {7895,"Ricardo",7.5,8.7,6.8,"ricardo@yahoo.com"},
                         {3459,"Maria",9.7,6.7,8.4,"maria@hotmail.com"},
                         {6814,"Daniel",7.5,8.7,6.8,"daniel@yahoo.com"},
                         {5293,"Ana",5.7,6.1,7.4,"ana@gmail.com"},
                     	 {1234,"Ronaldo",5.7,6.1,7.4,"ronaldo@gmail.com"},
                     	 {8909,"Celso",5.7,6.1,7.4,"celso@gmail.com"}};
    
	inicializa(ha);
	printf("Insercao\n");
    printf("\n");
    for(int i=0; i < 7; i++){
        inserir(ha,a[i]);
    }
    imprimir(ha);
    printf("Busca\n");
    busca(ha,7895);
    printf("Remove\n");
    remover(ha,7895);
	return 0;
}
