#include<semaphore.h>
class Foo {
public:
    sem_t semA;
    sem_t semB;
    Foo() {
        sem_init(&semA,0,0);
        sem_init(&semB,0,0);
    }

    void first(function<void()> printFirst) {
        
        // printFirst() outputs "first". Do not change or remove this line.
        printFirst();
        sem_post(&semA);
    }

    void second(function<void()> printSecond) {
        sem_wait(&semA);
        // printSecond() outputs "second". Do not change or remove this line.
        printSecond();
        sem_post(&semB);
    }

    void third(function<void()> printThird) {
        sem_wait(&semB);
        // printThird() outputs "third". Do not change or remove this line.
        printThird();
    }
};