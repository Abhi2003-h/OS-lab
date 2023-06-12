#include<stdio.h>
#include<unistd.h>
#include<sys/shm.h>
int main()
{
int i;
void * sharedmemory;
char buff[100];
int shmid;
shmid=shmget((key_t)2345,1024,0666);
printf("key of sharedmemory is %d\n",shmid);
sharedmemory=shmat(shmid,NULL,0);
printf("process attached at %p \n",sharedmemory);
printf("Data read from shared memory is : %s\n",(char *)sharedmemory);
}

