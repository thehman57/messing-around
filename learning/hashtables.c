#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

//structure
typedef struct node
{
    //pointer to the head of a linked list
    struct node *table[26];
    string name;
}node;


unsigned int keygen(string name);
void append(string name, int key);

int main()
{
    cout << "This is a test to see if I know how hashtables work." << endl << endl;
    char cont ='Y';
    do
    {

    } while (cont == 'Y');
}

unsigned int keygen(string name)
{

}

void append(string name, int key)
{

}
