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

// beginning and end of word variables
node *enday = NULL;
node *artstay = NULL;

// prototypes
void append(string sent);
void output();

int main()
{
    string sent;

    cout << "Input a string to be converted to Pig-Latin: " << endl;

    getline(cin, sent);

    append(sent);

    cout << "Worked!\n";
    output();

    cout << sent;

    return 0;
}

void append(string sent)
{
    for (int x = 0; x < size(sent); x++)
    {
        node *n = new node();

        while (n->next != NULL)
        {
            n = n->next;
        }

        if (x == 0)
        {
            artstay = n;
            enday = n;
        }


        n->letter = sent[x];

    }
}

void output()
{
    artstay = artstay->next;
    enday = enday->next;
    while (artstay != NULL)
    {
        if (toupper(artstay->letter[0] != 'A'))
        {
            cout << artstay->letter[0];
        }
        artstay = artstay->next;
    }
}
