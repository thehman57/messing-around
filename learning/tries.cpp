#include <string.h>
#include <iostream>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

using namespace std;

// trying to make a trie data structure
typedef struct trie
{
    string word[MAX_LENGTH];
    struct trie *paths[26];
    bool isEnd = false;
} trie;


//global variables
trie *list[45][26] = {NULL};

