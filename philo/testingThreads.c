#include <stdio.h>
#include <pthread.h>

// Corrected function signature
void * print_something()
{
    printf("We lit kinda\n");
    return NULL;  // Return NULL to satisfy the function signature
}

int main(void)
{
    pthread_t thread1;

    // Pass the function without the '&' as functions are pointers by default
    pthread_create(&thread1, NULL, print_something, NULL);
    pthread_join(thread1, NULL);

    return 0;
}
