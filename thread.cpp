#include<iostream>
#include<pthread.h>
using namespace std;

#define NUM_OF_THREADS 5

void *PrintHello(void *threadid) {
   long tid;
   tid = (long)threadid;
   cout << "welcom to apple pro " << tid << endl;
   pthread_exit(NULL);
}

int main()
{
 pthread_t threads[NUM_OF_THREADS];
  int rc;
   int i;
   for( i = 0; i < NUM_OF_THREADS; i++ ) {
      cout << " creating thread, " << i << endl;
      rc = pthread_create(&threads[i], NULL, PrintHello, (void *)i);
      
      if (rc) {
         cout << "Error:unable to create thread," << rc << endl;
         exit(-1);
      }
   }
   return 0;
}