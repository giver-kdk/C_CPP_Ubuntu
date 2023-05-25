// Program to simulate message passing for sender process
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#define MAX_TEXT 512 // maximum length of the message that can be sent allowed
struct ipc_msg
{
	long int msg_type;
	char some_text[MAX_TEXT];
};
int main()
{

	int running = 1;
	int msgid;
	struct ipc_msg process_msg;
	char buffer[50]; // array to store user input
	msgid = msgget((key_t)14534, 0666 | IPC_CREAT);
	// -1 means the message queue is not created
	if (msgid == -1)
	{
		printf("Error in creating queue\n");
		exit(0);
	}

	while (running)
	{

		printf("Enter some text:");
		fgets(buffer, 50, stdin);
		process_msg.msg_type = 1;
		strcpy(process_msg.some_text, buffer);
		// msgsnd returns -1 if the message is not sent
		if (msgsnd(msgid, (void *)&process_msg, MAX_TEXT, 0) == -1)
		{
			printf("Msg not sent\n");
		}
		if (strncmp(buffer, "end", 3) == 0)
		{
			running = 0;
		}
	}
}