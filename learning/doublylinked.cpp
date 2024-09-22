
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
void del();


int main()
{
    int again = 0;
    char cont = 'Y';

    cout << "This is practice with linked lists." << endl;

    append();

    do
    {
        cout << "Add another number?" << endl;
        cin >> cont;lea
        cont = toupper(cont);

        if (cont == 'Y')
        {
            append();
        }
    } while (cont == 'Y');

    output();

    cont = 'Y';

    do
    {
        cout << endl << "Would you like to delete a number?" << endl;
        cin >> cont;
        cont = toupper(cont);

        if (cont == 'Y')
        {
            again ++;
            del();
        }
    } while (cont == 'Y');

    if (again != 0)
    {
        output();
    }


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
    cout << endl << endl << "NULL" << endl;
    while(list != NULL)
    {
        cout << list->number << endl;
        cout << "next" << endl;
        if (list->next != NULL)
        {
            // go to next
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
            //go to prev
            list = list->prev;
        }
        else
        {
            break;
        }
    }
    cout << "NULL" << endl;
}

void del()
{
    int d;

    // picking the number to delete
    cout << "Please input the number you would like to delete: " << endl;
    cin >> d;


    for (list; list != NULL; list = list->next)
    {
        if (list->number == d)
        {
            // if first item in list, make pointers skip over a node. but edges must be null
            if (list->prev == NULL)
            {
                list = list->next;
                list->prev->next = NULL;
                list->prev = NULL;
                cout << d << " deleted." << endl;
                break;
            }
            //if last item in list, make pointers skip over a node. but edges must be null
            else if (list->next == NULL)
            {
                list = list->prev;
                list->next->prev = NULL;
                list->next = NULL;
                cout << d << " deleted." << endl;
                break;
            }
            //if in middle, make pointers skip over a node
            else
            {
                list->prev->next = list->next;
                list->next->prev = list->prev;
                list = list->next;
                cout << d << " deleted." << endl;
                break;
            }
        }
        //if we don't find the number
        if (list->next == NULL)
        {
            cout << "Number not found." << endl;
            break;
        }
    }
    // go back to beginning of list
    while (list->prev != NULL)
    {
        list = list->prev;
    }
}
