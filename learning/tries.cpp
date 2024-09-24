#include <string.h>
#include <iostream>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

using namespace std;

// trying to make a trie data structure
typedef struct trie
{
    struct trie *paths[26] = {NULL}; // 26 is the amount of letters in the alphabet
    bool isEnd = false;
} trie;

// prototypes
void append();


int main()
{
    char cont = 'Y';

    cout << "This is a test of my knowledge on tries:" << endl << endl;

    do
    {
        cout << "Would you like to add a word to the trie?" << endl;
        cin >> cont;
        cont = toupper(cont);
    } while (cont == 'Y');
}

