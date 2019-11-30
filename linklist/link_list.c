#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include "node.h"

struct Node *node, *ptr, *prev, *tmp=NULL;
struct Head *header=NULL;

void free_memory(){
   printf("free the link list\n");
   node=header->node;
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
    header = malloc(sizeof(header));
    create_link_list();
    traverse();
    reverse_list();
    traverse();
    insert_at_begining();
    traverse();
    insert_at_last();
    traverse();
    insert_at_any(8);
    traverse();
    delete_at_begining();
    traverse();
    delete_at_any(5);
    traverse();
    free_memory();
    return 0;
}
