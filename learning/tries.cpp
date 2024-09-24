#include <string.h>
#include <iostream>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

using namespace std;

// trying to make a trie data structure
typedef struct trie
{
    string character;
    struct trie *child[26] = {NULL}; // 26 is the amount of letters in the alphabet
    bool isEnd = false;
} trie;

// prototypes
void append();
unsigned int letter(string word, int x);
void search();

// global var
trie *root = new trie(); // allocate memory as to have a root


int main()
{
    char cont = 'Y';

    cout << "This is a test of my knowledge on tries:" << endl << endl;

    do
    {
        cout << "Would you like to add a word to the trie?" << endl;
        cin >> cont;
        cont = toupper(cont);

        if (cont == 'Y')
        {
            append();
        }
    } while (cont == 'Y');

    do
    {
        cout << "Would you like to search for something?" << endl;
        cin >> cont;
        cont = toupper(cont);

        if (cont == 'Y')
        {
            search();
        }
    } while (cont == 'Y');
}

unsigned int letter(string word, int x)
{
    return toupper(word[x]) - 'A';
}

void append()
{
    // door is the number we will unlock, word simply opens the doors
    int door;
    string word;


    cout << "Please input a word to add to this list: " << endl;
    cin >> word;

    trie *n = root; // get n back to the root

    for(int x = 0; x < size(word); x ++)
    {
        door = letter(word, x);
        if (n->child[door] == NULL)
        {
            n->child[door] = new trie(); // must allocate memory before moving there
                                         // reason it is a different here is because you make children
                                         //we used new instead because its better, it keeps all original
                                         // part of a node (such as child is NULL)
            n->isEnd = false;
            n = n->child[door];
            n->character = word[x];
        }
        else
        {
            n = n->child[door];
        }

    }
    n->isEnd = true;
}

void search()
{
    // open is the number door we will unlock , word simply gives me the key
    int open;
    string word;

    cout << "Please give me a word to test and see if exists:" << endl;
    cin >> word;

    trie *n = root; //return n to root

    for (int x = 0; x < size(word); x ++)
    {
        open = letter(word,x);

        if(n->child[open] == NULL)
        {
            cout << "Word not found!" << endl;
            return; // because you can just return a void function if you return nothing with it
        }
        n = n->child[open];
    }
    if (n->isEnd == true)
    {
        cout << "Word does exist!" << endl;
    }
    else
    {
        cout << "Word not found!" << endl;
    }
    return;
}



