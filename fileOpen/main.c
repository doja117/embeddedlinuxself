#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
int main(){
    int fd=open("../README.md",O_RDONLY);
    if (fd==-1){
        perror("Error");    
        return 1;
    }
    printf("%d\n",fd);
    return 0;
}