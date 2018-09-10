#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <stdbool.h>

struct Node {
   int data;
   struct Node *next;
}*node;

struct Node *ptr, *prev, *header=NULL, *tmp=NULL;

// check verifies if the ptr is NULL or not.
bool check(struct Node *newptr){
   if (newptr == NULL) {
      printf("node is empty");
      return false;
   }
   return true;
}

// create_link_lists create a link list and fills random data.
void create_link_list() {
    printf("Create a link list of size 5\n");
    int i = 0;
        while(i < 5){
        if (header == NULL) {
           // typecasting is not neccessry in c, its automatically
           // done by the compiler itself. Both of the below ways are
           // valid.
           // node = (struct Node *)malloc(sizeof(struct Node));
            node = malloc(sizeof(struct Node));
            if (!check(node)){
               return;
            }
            node->data = rand();
            header = node;
        }
        else {
           // node->next = (struct Node *)malloc(sizeof(struct Node));
            node->next = malloc(sizeof(struct Node));
            if (!check(node->next)){
                return;
            }
            node=node->next;
            node->data= rand();
        }
            node->next=NULL;
            i++;
    }
}

// traverse print all the data in the link list.
void traverse() {
    printf("traverse the link list\n");
    node = header;
    if (!check(node)) {
        return;
    }
    printf("Header: %p\n", header);
    while(node != NULL) {
        printf("data: %d\n", node->data);
        node=node->next;
    }
}

// reverse_list reverses the list in one pass.
void reverse_list() {
    printf("reverse the link list\n");
    node = header;
    prev = NULL;
    if (!check(node)){
        return;
    }
    while(node != NULL) {
        tmp=node->next;
        node->next=prev;
        prev=node;
        node=tmp;
    }
    header=prev;
}

void free_memory(){
   printf("free the link list\n");
   node=header;
   if (!check(node)){
        return;
   }
   while(node != NULL){
       tmp = node;
       node=node->next;
       free(tmp);
   }
}

int main() {
    create_link_list();
    traverse();
    reverse_list();
    traverse();
    free_memory();
    return 0;
}
