// Program to simulate share memory for reader process
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/shm.h>
#include <string.h>

void read_shared();
int main()
{
	int i;
	void *shared_memory;
	int shmid;
	// creates shared memory segment with key 2345, having size 1024 bytes.
	// IPC_CREAT is used to create the shared segment if it does not exist.
	// 0666 are permissions where 0 is Execute only, 6 is Read(4)/Write(2)/Execute(0)
	shmid = shmget((key_t)2345, 1024, 0666 | IPC_CREAT);
	printf("+ Key of shared memory is %d\n", shmid);
	// process attached to shared memory segment
	shared_memory = shmat(shmid, NULL, 0);
	// this prints the address where the segment is attached with this process
	printf("+ Process attached at %p\n", shared_memory);

	printf("** Reading buffer from shared memory \n");
	read_shared(shared_memory);
}

void read_shared(void *shared_memory)
{
	printf("- Process attached at %p\n", shared_memory);
	// Print memory content as character pointer(String)
	printf("- Data read from shared memory is : %s\n", (char *)shared_memory);
}