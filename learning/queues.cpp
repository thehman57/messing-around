#include <stdio.h>
#include <stdlib.h>

using namespace std;

// use this for readability + information later
const int CAPACITY = 10;

typedef struct queue
{
    int array[CAPACITY] = {0};
    int front;
    int size;
}queue;

queue q;

queue *start = NULL;

void enqueue();
void dequeue();
void output();

int main
{
    char cont = 'Y';
    cout << "This is to test my knowledge on queues." << endl << endl;

    do
    {
        cout << "Would you like to add a number to the queue?" << endl;
        cin >> cont;
        cont = toupper(cont);

        if (cont == 'Y')
        {
            enqueue();
        }
    } while (cont == 'Y')

    do
    {
        cout << "Would you like to delete a number from the queue?" << endl;
        cin >> cont;
        cont = toupper(cont);

        if (cont == 'Y')
        {
            dequeue();
        }
    } while (cont == 'Y')

    do
    {
        cout << "Would you like to output the queue?" << endl;
        cin >> cont;
        cont = toupper(cont);

        if (cont == 'Y')
        {
            output();
        }
    } while (cont == 'Y')

    return 0;
}

void enqueue()
{

}

void dequeue()
{

}
