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


//global variable
trie *list[MAX_LENGTH][26] = {NULL};


int main()
{
    cout << "Hello World!" << endl;
}

