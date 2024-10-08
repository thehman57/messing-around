//Connor Johnson
//Pig Latin Converter

#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

// node structure
typedef struct node
{
    string letter;
    struct node *next;
    struct node *prev;
} letter;

// beginning and end of word variables
node *enday = NULL;
node *artstay = NULL;

// prototypes
void append(string sentence);
void output();

int main()
{
    string sentence;

    cout << "Input a string to be converted to Pig-Latin: " << endl;
    getline(cin, sentence);

    cout << "hello world";
    append(sentence);
    output();

    cout << sentence;

    return 0;
}

void append(string sentence)
{
    for (int x = 0; x < size(sentence); x++)
    {
        node *n = new node();

        if (x == 0)
        {
            artstay = n;
            enday = n;
        }

        while (n != NULL)
        {
            n = n->next;
        }
        n->letter = sentence[x];

    }
}

void output()
{
    while (artstay != NULL)
    {
        cout << artstay->letter;
        artstay = artstay->next;
    }
}
