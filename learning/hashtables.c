#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

typedef struct node
{
    struct node *table[26];
    string name;

}node;
