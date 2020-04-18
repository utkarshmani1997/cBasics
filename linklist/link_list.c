#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <stdbool.h>
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

void middle() {
        struct Node *slow = header->node;
        struct Node *fast = header->node;
        while(slow->next != NULL && fast->next != NULL) {
                slow = slow->next;
                fast = fast->next;
                if (fast != NULL) {
                        fast = fast->next;
                }
        }
        printf("middle: %d\n",slow->data);
}

// floyd approach O(n)
// Other approach could be adding additional field visited in Node struct
bool find_loop() {
        struct Node *fast=header->node;
        struct Node *slow=header->node;
        while(fast && slow) {
                fast = fast->next;
                if (fast == NULL) {
                        return false;
                }
                if (fast == slow) {
                        return true;
                }
                fast = fast->next;
                if (fast == slow) {
                        return true;
                }
                slow = slow->next;
        }
        return false;
}

int main() {
    header = malloc(sizeof(header));
    create_link_list();
//    node->next=header->node;
//    printf("%d\n",find_loop());
    traverse();
    middle();
    sleep(5);
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
