/*
Harry is riding buckbeak for the first time. While enjoying the blissful ride in the air he notices two numbers represented as integer-digit linked lists flying in the sky (Strange things happen in the wizarding world). Harry is a fan of bigger numbers and hence he wants to add the two flying linked lists.

image
Harry is a wizard and not a programmer and so he does not know how to add two singly linked lists represented as numbers. Complete the task for him.

Formally, write a function that takes two linked lists as input and returns a linked list that represents the sum of both linked lists,



    
More
*/
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
typedef struct LinkedListNode LinkedListNode;

struct LinkedListNode {
    int val;
    LinkedListNode *next;
};

LinkedListNode* _insert_node_into_singlylinkedlist(LinkedListNode *head, LinkedListNode *tail, int val) {
    if(head == NULL) {
        head = (LinkedListNode *) (malloc(sizeof(LinkedListNode)));
        head->val = val;
        head->next = NULL;
        tail = head;
    }
    else {
        LinkedListNode *node = (LinkedListNode *) (malloc(sizeof(LinkedListNode)));
        node->val = val;
        node->next = NULL;
        tail->next = node;
        tail = tail->next;
    }
    return tail;
}


/*
 * Complete the function below.
 */
/*
For your reference:
LinkedListNode {
    int val;
    LinkedListNode *next;
};
*/
LinkedListNode* reverse(LinkedListNode *head){
    LinkedListNode *nh=NULL,*temp;
    while(head){
        temp=head;
        head=head->next;
        temp->next=nh;
        nh=temp;
    }
    return nh;
}
LinkedListNode* addLists(LinkedListNode* list1, LinkedListNode* list2) {
    if(list1==NULL)return list2;
    if(list2==NULL)return list1;
    LinkedListNode *list3=NULL,*temp;
    list1=reverse(list1);
    list2=reverse(list2);
    int c=0;
    while(list1||list2||c){
        int sum=c;
        if(list1){
            sum+=list1->val;
            list1=list1->next;
        }
        if(list2){
            sum+=list2->val;
            list2=list2->next;
        }
        int data=sum%10;
        c=sum/10;
        temp=(LinkedListNode*)malloc(sizeof(LinkedListNode));
        temp->val=data;
        temp->next=list3;
        list3=temp;
    }
    return list3;
}

int main()
{
    FILE *f = stdout;
    char *output_path = getenv("OUTPUT_PATH");
    if (output_path) {
        f = fopen(output_path, "w");
    }

    LinkedListNode* res;
    int list1_size = 0;

    LinkedListNode* list1 = NULL;
    LinkedListNode* list1_tail = NULL;

    scanf("%d\n", &list1_size);
    for(int i = 0; i < list1_size; i++) {
        int list1_item;
        scanf("%d", &list1_item);
        list1_tail = _insert_node_into_singlylinkedlist(list1, list1_tail, list1_item);

        if(i == 0) {
            list1 = list1_tail;
        }
    }


    int list2_size = 0;

    LinkedListNode* list2 = NULL;
    LinkedListNode* list2_tail = NULL;

    scanf("%d\n", &list2_size);
    for(int i = 0; i < list2_size; i++) {
        int list2_item;
        scanf("%d", &list2_item);
        list2_tail = _insert_node_into_singlylinkedlist(list2, list2_tail, list2_item);

        if(i == 0) {
            list2 = list2_tail;
        }
    }


    res = addLists(list1, list2);
    while (res != NULL) {
        fprintf(f, "%d", res->val);

        res = res->next;
    }

    fclose(f);
    return 0;
}
