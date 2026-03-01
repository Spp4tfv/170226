#include <stdio.h>
#include <stdlib.h>
int main(){
    int* data = malloc(5 * sizeof(int));
    data[0] = 42;
    printf("Первый элемент: %d\n", data[0]);
    free(data);
    data = NULL;
    return 0;
}