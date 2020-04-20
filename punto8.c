#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

int main(){
    int count = 0;
    int valor;

    int *vector = malloc(sizeof(int));

    while(1) {
        printf("Ingrese el valor, para cancelar ingrese '0': \n");
        scanf("%d", &valor);

        if (valor != 0) {
            vector = realloc(vector ,(count+1)*sizeof(int));
            vector[count] = valor;
            count++;
        } else {
            printf("\nEl vector resultante es: \n");
            for (int i = 0; i < count; i++) { 
                printf("%d, ", *(vector+i));
            }
            printf("\n");
            break;
        }
    }
    free(vector);
    return 0;
}
