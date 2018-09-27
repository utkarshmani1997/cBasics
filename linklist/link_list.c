#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include "node.h"

struct Node *node, *ptr, *prev, *header=NULL, *tmp=NULL;

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
