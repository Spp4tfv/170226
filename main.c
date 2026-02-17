#include <stdio.h>
#include "filelib.h"

int main() {
    printf("Это обычный вывод (stdout)\n");
    fprintf(stderr, "Сообщение ошибки! (stderr)\n");
    save_message("log.txt", "Запись в файл в библиотеке\n");
    
    return 0;
}