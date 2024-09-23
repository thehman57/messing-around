#include <string.h>
#include <iostream>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

using namespace std;


// longest word, const allows you to use it for arrays
const int MAX_LENGTH = 45; // pneumonoultramicroscopicsilicovolcanoconiosis is 45 letters long

// trying to make a trie data structure
typedef struct trie
{
    string word[MAX_LENGTH];
    struct trie *paths[26]; // 26 is the amount of letters in the alphabet
    bool isEnd = false;
} trie;


//global pointer variable
trie *list[MAX_LENGTH][26] = {NULL};

//prototypes
unsigned int direct(string name, int letter); // this will be used to get paths
void append();

int main()
{
    char cont = 'Y';
    cout << "This is a test on my knowledge of tries." << endl << endl;

    do
    {
        cout << "Would you like to add a word to the trie?" << endl;
        cin >> cont;

        if (cont == 'Y')
        {
            append();
        }
    }while (cont == 'Y');
}

unsigned int direct(string name, int letter)
{

}

void append()
{
    string word;

}
