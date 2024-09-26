#include <stdio.h>
#include <stdlib.h>

using namespace std;

// use this for readability + information later
const int CAPACITY = 10;

typedef struct queue
{
    int array[CAPACITY];
    int front;
    int size;
}queue;

queue q;

queue *start = NULL;

void enqueue();
void dequeue();

int main
{
    char cont = 'Y';
    cout << "This is to test my knowledge on queues." << endl << endl;
    return 0;
}

void enqueue()
{

}

void dequeue()
{

}
