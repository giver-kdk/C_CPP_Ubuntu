#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void* threadFun(void* arg) {
    printf("Thread created. Thread ID: %lu\n", pthread_self());		// Show id of current thread
    pthread_exit(NULL);  											// Terminate the thread
}

int main() {
    pthread_t thread;												// Create new thread
	// pthread_create(&thread_identifier, attributes, function_as_thread, thread_function_args)
    int result = pthread_create(&thread, NULL, threadFun, NULL);

    if (result != 0) {
        fprintf(stderr, "Thread creation failed.\n");
        return 1;
    }

    printf("Main thread. Thread ID: %lu\n", pthread_self());
    pthread_join(thread, NULL);  									// Wait for the thread to finish

    return 0;
}
