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

// prototypes
unsigned int keygen(string name);
void append(string name, int key);

// global vars
node *list[26] = NULL;

int main()
{
    cout << "This is a test to see if I know how hashtables work." << endl << endl;
    char cont ='Y';
    do
    {
        cout << "Would you like to add a name?" << endl;
        cin >> cont;
        cont = toupper(cont);
        if (cont == 'Y')
        {
            append();
        }
    } while (cont == 'Y');
}

unsigned int keygen(string name)
{

}

void append()
{
    
}
