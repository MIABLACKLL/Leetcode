#include<semaphore.h>
class ZeroEvenOdd {
private:
    int n;
    sem_t s_zero;
    sem_t s_one;
    sem_t s_two;


public:
    ZeroEvenOdd(int n) {
        this->n = n;
        sem_init(&s_zero,0,1);
        sem_init(&s_one,0,0);
        sem_init(&s_two,0,0);
    }

    // printNumber(x) outputs "x", where x is an integer.
    void zero(function<void(int)> printNumber) {
        for(int i=0;i<n;i++)
        {
            sem_wait(&s_zero);
            printNumber(0);
            if(i%2)
                sem_post(&s_one);
            else
                sem_post(&s_two);
        }
    }

    void even(function<void(int)> printNumber) {
        for(int i=2;i<=n;i+=2)
        {
            sem_wait(&s_one);
            printNumber(i);
            sem_post(&s_zero);
        }
    }

    void odd(function<void(int)> printNumber) {
        for(int i=1;i<=n;i+=2)
        {
            sem_wait(&s_two);         
            printNumber(i);
            sem_post(&s_zero);
        }
    }
};