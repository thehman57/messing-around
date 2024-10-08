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
void output();

int main()
{
    string sent;

    cout << "Input a string to be converted to Pig-Latin: " << endl;
    getline(cin, sent);

    append(sent);
    output();


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

void output()
{
    // check for vowels
    if (toupper(artstay->letter[0]) == 'A'||
        toupper(artstay->letter[0]) == 'E'||
        toupper(artstay->letter[0]) == 'I'||
        toupper(artstay->letter[0]) == 'O'||
        toupper(artstay->letter[0]) == 'U')
    {
        print = true;
    }
    // output the front half of the words
    if (print == true)
    {
       cout << artstay->letter;
    }
    if (artstay->letter[0] == 32)
    {
        print = false;
    }

    //output the back half of words
    if (toupper(enday->letter[0]) == 'A'||
        toupper(enday->letter[0]) == 'E'||
        toupper(enday->letter[0]) == 'I'||
        toupper(enday->letter[0]) == 'O'||
        toupper(enday->letter[0]) == 'U')
    {
        enday = artstay;
    }
    else
    {
        cout << enday->letter;
        
    }

    if (artstay->prev != NULL)
    {
        artstay = artstay->prev;
        output();
    }
    return;
}
