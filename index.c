#include <stdio.h>

struct node{
    int data;
    struct node *next;
};

typedef struct  node NODE;

int main(){
    NODE a;
    a.data = 10;
    a.next = NULL;
    return 0;
}
