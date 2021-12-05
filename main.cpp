#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef char ElemType;

typedef struct LinkNode {
    ElemType data;
    struct LinkNode *next;
}LinkNode, *LinkList;

//there'll be list with 1st node

bool InitList(LinkList &L) {
    if(!(L = (LinkNode*) malloc(sizeof(LinkNode)))){ // not successfully built
        printf("it's not enough space.\n");
        return false;
    }
    L->next = NULL;
    return true;
}
bool DestroyList(LinkList &L){
    free(L);
}
bool ClearList(LinkList &L){
    L->next = NULL;
}
bool ListEmpty(LinkList L){
    return (L->next == NULL) ? true : false;
}
int ListLength(LinkList){
    int length = 0;
    LinkNode *p = L-> next;
    while (p){
        length++; p = p->next;
    }
    return length;
}
bool GetElem(LinkList L, int i, ElemType &e) {
if(i < 1 || i > ListLength(L)) return false;
int cnt = 1;
LinkNode *p = L->next;
while(p){
    if(cnt == 1) {
        e = p->data;
return true;
    }
    p = p->next;
    cnt++;
  }
}
bool Compare(ElemType a, ElemType b) {
    if (a == b) return 0;
    if(a > b) return 1;
    else return -1;
}
// no need to write more...