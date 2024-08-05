#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h> 
#include <stdlib.h> 
#include <stdio.h>
#include <time.h>
int main(){
    int fd=open("../README.md",O_RDONLY);
    FILE *add;
    srand(time(NULL));
    add=fopen("../README.md","r");
    if (add==NULL){
        perror("ERROR OPENING FILE");
    }
    char buffer[256];
    while (fgets(buffer,sizeof(buffer),add)!=NULL){
        printf("%s",buffer);
    }
    printf("%d\n",fd);
    return 0;
}