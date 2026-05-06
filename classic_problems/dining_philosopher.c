/*
  The Dining Philosophers Problem

  To avoid deadlock (where everyone picks up a left chopstick and waits
  forever), this code makes the last philosopher pick up their chopsticks in a
  different order.
*/

#include <pthread.h>
#include <semaphore.h>
#include <stdio.h>

sem_t chopsticks[3]; // One semaphore per chopstick

void *philosopher(void *num) {
  int id = *(int *)num;

  // To prevent deadlock, the 5th philosopher picks up Right then Left
  if (id == 4) {
    sem_wait(&chopsticks[(id + 1) % 5]);
    sem_wait(&chopsticks[id]);
  } else {
    sem_wait(&chopsticks[id]);           // Pick up Left
    sem_wait(&chopsticks[(id + 1) % 5]); // Pick up Right
  }

  // ... Eating ...

  sem_post(&chopsticks[id]);
  sem_post(&chopsticks[(id + 1) % 5]);
  return NULL;
}
