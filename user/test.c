#include "kernel/types.h"
#include "user/user.h"

int main(){
    int i, j;
    for(i = 0; i < 10; i++){
        if(fork() == 0){
            for(j = 0; j < 10000000; j++){

            }
            printf("Child %d finished working\n", i);
            exit(0);
        }
    }
    for(i = 0; i < 10; i++){
        wait(0);
    }
    exit(0);
}