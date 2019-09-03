#include<semaphore.h>
class FooBar {
private:
    int n;
    sem_t semFoo;
    sem_t semBar;

public:
    FooBar(int n) {
        sem_init(&semFoo,0,1);
        sem_init(&semBar,0,0);
        this->n = n;
    }

    void foo(function<void()> printFoo) {
        
        for (int i = 0; i < n; i++) {
            sem_wait(&semFoo);
        	// printFoo() outputs "foo". Do not change or remove this line.
        	printFoo();
            sem_post(&semBar);
            
        }
    }

    void bar(function<void()> printBar) {
        
        for (int i = 0; i < n; i++) {
            sem_wait(&semBar);
        	// printBar() outputs "bar". Do not change or remove this line.
        	printBar();
            sem_post(&semFoo);
            
        }
    }
};