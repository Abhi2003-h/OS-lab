#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/shm.h>
#include<string.h>
int main()
{
int i;
void *sharedmemory;
char buff[100];
int shmid;
shmid=shmget((key_t)2345,1024,0666|IPC_CREAT);
printf("key of shared memory is %d\n",shmid);
sharedmemory=shmat(shmid,NULL,0);
printf("process attached at %p \n",sharedmemory);
read(0,buff,100);
strcpy(sharedmemory,buff);
printf("you wrote: %s\n",(char *)sharedmemory);
}
