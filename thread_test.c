#include "types.h"
#include "stat.h"
#include "user.h"

void childPrint(void* args){
    printf(1, "hi, childs function executed properly with argument : %d\n", *(int*)args);
}

int main(void){
    int N = 5;
    int argument = 0x0F01;
    int thread_ids[5];
    for (int i = 0; i < N; i++) {
        thread_ids[i] = thread_creator(&childPrint, (void*)&argument);
        if(thread_ids[i] < 0)
            printf(1, "thread_create failed %d\n", i);
    }

    for (int i = 0; i < N; i++) {
        thread_wait();
    }

    for (int i = 0; i < N; i++) {
        printf(1, "thread_id is : %d\n", thread_ids[i]);
    }

    exit();
}