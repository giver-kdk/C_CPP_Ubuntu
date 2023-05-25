// #include <stdio.h>
// #define N 100
// typedef int semaphore;
// semaphore empty = N;
// semaphore full = 0;
// semaphore mutex = 1;



// void producer()
// {
// 	int item;
// 	while(TRUE)
// 	{
// 		item = produce_item();
// 		down(&empty);
// 		down(&mutex);
// 		insert_item(item);
// 		up(&mutex);
// 		up(&full);
// 	}
// }