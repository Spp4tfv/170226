#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main() {
    const char *filename = "myfile.txt";
    
    int fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0644);
    
    if (fd == -1) {
        perror("Ошибка при открытии/создании файла");
        return 1;
    }
    
    const char *text = "Hello, system programming!\n";
    
    ssize_t bytes_written = write(fd, text, 27);
    
    if (bytes_written == -1) {
        perror("Ошибка при записи в файл");
        close(fd);
        return 1;
    }
    
    if (close(fd) == -1) {
        perror("Ошибка при закрытии файла");
        return 1;
    }
    
    printf("Файл '%s' успешно создан и записан.\n", filename);
    
    return 0;
}