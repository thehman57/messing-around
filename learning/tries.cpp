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
unsigned int letter(string word, int letter);

// global var
trie *root = (trie*)malloc(sizeof(trie));


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
}

unsigned int letter(string word, int letter)
{
    return toupper(word[letter] - 'A');
}

void append()
{
    // door is the number we will unlock, string simply opens the doors
    int door;
    string word;


    cout << "Please input a word to add to this list: " << endl;
    cin >> word;

    trie *n = root;
    for(int x = 0; x < size(word); x ++)
    {
        door = letter(word, x);
        if (n->child[door] == NULL)
        {
            n = n->child[door];
            n->character = word[x];
        }
    }

}



