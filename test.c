#include <stdlib.h>
#include <stdio.h>
#include <pthread.h>

void *f(void *arg);

int main() {
	pthread_t tid;
	
	pthread_create(&tid, NULL, f, NULL);
	
	fork();
	
	while (1) {
		printf("ciao da main %d\n", pthread_self());
		sleep(1);
	}
}

void *f(void *arg) {
	while (1) {
		printf("ciao da f %d\n", pthread_self());
		sleep(1);
	}
}