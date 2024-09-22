#include <stdio.h>
#include <iostream>
#include <string.h>
#include <cstdlib>

using namespace std;

typedef struct node
{
    string name;
    struct node *next;
    struct node *tables[26];
} node;
