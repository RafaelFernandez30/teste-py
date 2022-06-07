#include <stdio.h>
#include <stdlib.h>

//CÓDIGO BUBBLESORT

int main(){

 int numeros[20]; //numero de posições 
 int contador1, aux, contador2, total_count;


printf("=-=-=-=BUBBLE_SORT=-=-=-=\n");
printf("\nQuantos numeros deseja inserir?\n");
scanf("%d", &total_count);
	
printf("Digite %d numeros inteiros que devem ser ordenados.\n", total_count);

//pegar a quantidade de numeros e guardar nas posições
 for (contador1 = 0; contador1 < total_count; contador1++){
 scanf("%d", &numeros[contador1]); 
 }
 

//Ordenação do Bubblesort
 for (contador2 = 1; contador2 < total_count; contador2++){ //pega o primeiro item com o ultimo
   for (contador1 = 0; contador1 < total_count - 1; contador1++){ //ver se o numero é menor do que o proximo numero
     if (numeros[contador1] > numeros[contador1 + 1]){// comparar o numero com o proximo para ver se é maior
       //trocar numeros
	   aux = numeros[contador1];
       numeros[contador1] = numeros[contador1 + 1];
       numeros[contador1 + 1] = aux;
     }
   }
 }
 
//exibir os elementos ordenados
printf("\nNumeros em ordem crescente:\n");
    for (contador1 = 0; contador1 < total_count; contador1++) {
        printf("%d\n", numeros[contador1]);
}

printf("\n");

return 0;
}
