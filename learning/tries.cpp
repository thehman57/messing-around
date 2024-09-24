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
    string number[11]; // 11 digits in a phone number
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
        cout << "Would you like to add a name to the trie?" << endl;
        cin >> cont;

        if (cont == 'Y')
        {
            append();
        }
    }while (cont == 'Y');
}

unsigned int direct(string name, int letter)
{
    return toupper(name[letter]) - 'A';
}

void append()
{
    string name;

    cout << "Please input a name you would like to validate:" << endl;
    cin >> name;

    for (int letter = 0; letter < strlen(name); letter++)
    {
        cout << "Hello world!" << endl;
    }
}
