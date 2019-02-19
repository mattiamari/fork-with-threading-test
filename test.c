#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <pthread.h>

void *f(void *arg);

int main() {
	pthread_t tid;
	
	pthread_create(&tid, NULL, f, NULL);
	
	fork();
	
	while (1) {
		printf("hello from main() ppid=%d pid=%d tid=%lu\n", getppid(), getpid(), pthread_self());
		sleep(1);
	}
}

void *f(void *arg) {
	while (1) {
		printf("hello from f() ppid=%d pid=%d tid=%lu\n", getppid(), getpid(), pthread_self());
		sleep(1);
	}
}
