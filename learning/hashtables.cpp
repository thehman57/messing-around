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
void append();
void output();

// global vars, also new syntax yay
node *list[26] = {NULL};

int main()
{
    cout << "This is a test to see if I know how hashtables work." << endl << endl;
    char cont ='Y';
    do
    {
        cout << "Would you like to add a name? (Y/N)" << endl;
        cin >> cont;
        cont = toupper(cont);
        if (cont == 'Y')
        {
            append();
        }
    } while (cont == 'Y');

    do
    {
        cout << "Would you like to see a section of the list? (Y/N)" << endl;
        cin >> cont;
        cont = toupper(cont);
        if (cont == 'Y')
        {
            output();
        }
    } while (cont == 'Y');
}

unsigned int keygen(string name)
{
    return toupper(name[0]) - 'A';
}

void append()
{
    // key for pointer, string to get key
    int key;
    string name;

    cout << "Please input a name:" << endl;
    cin >> name;

    key = keygen(name);

    node *n[key] = {(node*)malloc(sizeof(node))};

    // append to list
    n[key]->name = name;
    n[key]->table[key] = list[key];
    list[key] = n[key];
}

void output()
{
    // integer for which hash do i unlock??
    // char for the correct hash key
    int key;
    string unlock;

    // pick the key
    cout << "What letter section would you like to go through?" << endl;
    cin >> unlock;

    key = keygen(unlock);

    cout << key;


}
