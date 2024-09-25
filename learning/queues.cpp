#include <stdio.h>
#include <stdlib.h>

using namespace std;

// use this for readability + information later
const int CAPACITY = 10;

typedef struct queue
{
    VALUE array[CAPACITY];
    int front;
    int size;
}queue;

queue *
