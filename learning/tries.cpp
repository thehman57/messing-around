#include <string.h>
#include <iostream>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

using namespace std;

typedef struct trie
{
    string word[45];
    struct trie *paths[26];
}
