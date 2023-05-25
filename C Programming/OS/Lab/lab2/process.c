#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>				// Includes fork()

int main() {
    pid_t pid = fork();			// Creates new process

    if (pid < 0) {				// Error in process creation
        fprintf(stderr, "Fork failed.\n");
        return 1;
    } else if (pid == 0) {		// Child process excecuted
        // Child process
        printf("Child process created. Child PID: %d\n", getpid());
        exit(0);  				// Terminate child process
    } else {
        // Parent process
        printf("Parent process. PID: %d and Child PID: %d\n", getpid(), pid);
    }

    return 0;
}
