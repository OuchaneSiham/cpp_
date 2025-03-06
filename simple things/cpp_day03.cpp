// about threads in cpp
#include <cstdlib>
#include <iostream>
#include <pthread.h>
using namespace std;

#define NUM_THREADS 5

void *printing(void *thread_id)
{
    long tid;
    tid = (long)thread_id;
    cout << "hello from thread: "
        << tid << endl;
    pthread_exit(NULL);
}

int main()
{
    pthread_t threads[NUM_THREADS];
    int rc;
    int i;
    for(i = 0; i < NUM_THREADS; i++)
    {
        cout << "main: creating thread "
            << i << endl;
        rc = pthread_create(&threads[i], NULL, printing, (void *)&i);
        if(rc)
        {
            cout << "Error: unable to create thread, "
                 << rc << endl;
            exit(-1);
        }
    }
    pthread_exit(NULL);
}
// run with 
// @OuchaneSiham ➜ /workspaces/cpp_ (main) $ g++ cpp_day03.cpp -pthread 
// @OuchaneSiham ➜ /workspaces/cpp_ (main) $ ./a.out 