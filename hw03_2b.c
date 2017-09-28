#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, N;
    scanf("%i", &N);
    int flag = 0;
    for (i = 0; i < N; ++i){
        if (flag != getppid())
        {
            flag = getppid();
            pid_t pid = fork();
            sleep(1);
            if (pid == -1) printf("error"); else
            if (pid == 0) printf("process #%i created\n", i+1);
            else {
                wait(); 
                sleep(1);
                printf("process #%i killed\n", i+1);
            }
        }
    }
    return 0;
}
