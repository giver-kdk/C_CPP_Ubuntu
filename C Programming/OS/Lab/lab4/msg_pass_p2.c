// Program to simulate message passing for reciever process
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/msg.h>
struct ipc_msg
{
	long int msg_type;
	char some_text[BUFSIZ];
};
int main()
{
	int running = 1;
	int msgid;
	struct ipc_msg process_msg;
	long int msg_to_rec = 0;
	msgid = msgget((key_t)14534, 0666 | IPC_CREAT);
	while (running)
	{
		msgrcv(msgid, (void *)&process_msg, BUFSIZ, msg_to_rec, 0);
		printf("Data received: %s\n", process_msg.some_text);
		if (strncmp(process_msg.some_text, "end", 3) == 0)
		{
			running = 0;
		}
	}
	msgctl(msgid, IPC_RMID, 0);
}