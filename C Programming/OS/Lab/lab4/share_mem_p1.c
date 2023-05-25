// Program to simulate share memory for writer process
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/shm.h>
#include <string.h>

void write_shared();
int main()
{
	int i;
	void *shared_memory;
	int shmid;
	// creates shared memory segment with key 2345, having size 1024 bytes.
	// IPC_CREAT is used to create the shared segment if it does not exist.
	// 0666 are the permisions on the shared segment
	shmid = shmget((key_t)2345, 1024, 0666 | IPC_CREAT);
	printf("+ Key of shared memory is %d\n", shmid);
	// process attached to shared memory segment
	shared_memory = shmat(shmid, NULL, 0);
	// this prints the address where the segment is attached with this process
	printf("+ Process attached at %p\n", shared_memory);
	printf("** Writting buffer into shared memory \n");
	write_shared(shared_memory);
}

void write_shared(void *shared_memory)
{
	char buff[100];
	printf("++ Enter some data to write to shared memory:");
	scanf("%s", &buff);
	strcpy(shared_memory, buff); // data written to shared memory
	printf("++ You wrote : %s\n", (char *)shared_memory);
}