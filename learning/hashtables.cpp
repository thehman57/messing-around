#include <stdio.h>
#include <iostream>
#include <string.h>
#include <cstdlib>

using namespace std;

typedef struct node
{
    string name;
    struct node *next;
    struct node *tables[26];
} node;

unsigned int key(string name);
void append();
void output();

node *list[26] = {NULL};

int main()
{
    char cont = 'Y';
    cout << "This is a test to see my knowledge of making hashtables." << endl << endl;

    do
    {
        cout << "Would you like to add a name? (Y/N)" << endl;
        cin >> cont;
        cont = toupper(cont);

        if (cont == 'Y')
        {
            append();
        }

    } while (cont == 'Y');

    do
    {
        cout << "Would you like to see a letter section?" << endl;
        cin >> cont;
        cont = toupper(cont);

        if (cont == 'Y')
        {
            output();
        }

    } while (cont == 'Y');

    return 0;
}

unsigned int key(string name)
{
    return toupper(name[0]) - 'A';
}

void append()
{
    int key;
    string name;

    cout << "Please input a name for the list:" << endl;
    cin >> name;

    key = key(name);

    node *n[key] = {(node*)malloc(sizeof(node))};

    n[key]->name[key] = name;
    n[key]->next = list[key];

    list[key] = n[key];
}

