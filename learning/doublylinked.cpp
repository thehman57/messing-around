
#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <string.h>

using namespace std;

typedef struct node
{
    int number;
    struct node *next;
    struct node *prev;
} node;

// global null pointer
node *list = NULL;

// prototypes
void append();
void output();


int main()
{
    char cont = 'Y';
    cout << "This is practice with linked lists." << endl;

    append();

    do
    {
        cout << "Add another number?" << endl;
        cin >> cont;
        cont = toupper(cont);

        if (cont == 'Y')
        {
            append();
        }
    } while (cont == 'Y');

    output();

    return 0;
}

void append()
{
    //TODO: Add a new thing at the beginning of linked list
    int number;

    node *n = (node*)malloc(sizeof(node));

    cout << "Input a number you would like to add to this list:" << endl;
    cin >> number;

    n->number = number;
    n->next = list;

    // point prev to home
    if (list != NULL)
    {
        list->prev = n;
    }
    //then return home
    list = n;

}

void output()
{
    //TODO: Output the new linked list

    //going next
    cout << endl << endl;
    while(list != NULL)
    {
        cout << list->number << endl;
        cout << "next" << endl;
        if (list->next != NULL)
        {
            list = list->next;
        }
        else
        {
            break;
        }

    }
    cout << "NULL" << endl;

    //going prev
    while (list != NULL)
    {
        cout << list->number << endl;
        cout << "prev" << endl;
        if (list->prev != NULL)
        {
            list = list->prev;
        }
        else
        {
            break;
        }
    }
    cout << "NULL" << endl;
}
