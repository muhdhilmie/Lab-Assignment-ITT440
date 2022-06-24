#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main(void){
	for(int i = 1; i < 13; i++){
		pid_t pid = fork();
	
	if(pid == 0){
		printf("Child process => PPID=%d, PID=%d\n", getppid(), getpid());
	}
	else{
		printf("Parent process => PID=%d\n", getpid());
		printf("Waiting for the child processes to finish...\n");
		wait(NULL);
		printf("child process finished.\n");
	}
}
return EXIT_SUCCESS;
}
