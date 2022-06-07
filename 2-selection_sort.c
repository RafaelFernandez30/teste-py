#include <stdio.h>
#include <conio.h>

//CÓDIGO SELECTIONSORT

void main(){
	
int total_count, contador1, contador2, menor, aux;
int numeros[20];

printf("=-=-=-=SELECTION_SORT=-=-=-=\n");
printf("\nQuantos numeros deseja inserir?\n");
scanf("%d", &total_count);
	
printf("Por favor digite %d de inteiros que devem ser ordenados.\n", total_count);
	
for (contador1 = 0; contador1 < total_count; contador1++){
	scanf("%d", &numeros[contador1]);
}
	//percorre toda a lista até encontrar o menor item entre eles
for (contador1 = 0; contador1 < total_count - 1; contador1++){
    menor = contador1;
	 
    //se o item for menor do que o item da lista, ele troca de posição. isso acontece com CADA item da lista
for(contador2 = contador1 + 1; contador2 < total_count; contador2++){
    if(numeros[menor] > numeros[contador2])
        menor = contador2;
}	        

    //pega o menor item e vai comparando com os outros
	if (menor != contador1){//garantir que não irá fazer uma troca da mesma posição
        aux = numeros[contador1];
	    numeros[contador1] = numeros[menor];
	    numeros[menor] = aux;
    }
}
    //exibir os elementos ordenados
printf("\nNumeros em ordem crescente:\n");
    for (contador1 = 0; contador1 < total_count; contador1++){
        printf("%d\n", numeros[contador1]);
    }
    
getch();
}
