//Connor Johnson
//Pig Latin Converter

#include <stdio.h>
#include <iostream>
#include <cstring>

using namespace std;

// node structure
typedef struct node
{
    string letter;
    struct node *next;
    struct node *prev;
}node;

// beginning and end of word variables + pointer variable
node *enday = NULL;
node *artstay = NULL;
node *list = NULL;

// global varables
bool print = false;

// prototypes
void append(string sent);
void foutput();
//void boutput();

int main()
{
    string sent;

    cout << "Input a string to be converted to Pig-Latin: " << endl;
    getline(cin, sent);

    append(sent);
    foutput();


    return 0;
}

void append(string sent)
{
    for (int x = 0; x < size(sent); x++)
    {
        node *n = new node();

        n->next = list;
        if (list != NULL)
        {
            list->prev = n;
        }
        list = n;

        if (x == 0)
        {
            artstay = n;
            enday = n;
        }
        n->letter = sent[x];
    }
}

void foutput()
{
    // check for vowels
    for (artstay; artstay != NULL; artstay = artstay->prev)
    {
        cout << artstay->letter;
    }

}

