//
//  slist.h
//  linked_list
//
//  Created by William McCarthy on 084//20.
//  Copyright © 2020 William McCarthy. All rights reserved.
//

#ifndef slist_h
#define slist_h

#include <stdio.h>
#include <stdbool.h>


typedef struct snode snode;
struct snode {
  char* data;
  snode* next;
};

typedef struct slist slist;
struct slist {
  snode* head;
  snode* tail;
  size_t size;
};

snode* snode_create(char* data, snode* next);
slist* slist_create(void);

bool slist_empty(slist* list);
size_t slist_size(slist* list);

void slist_popfront(slist* list);
void slist_popback(slist* list);

void slist_pushfront(slist* list, char* data);
void slist_pushback(slist* list, char* data);

void slist_clear(slist* list);

void slist_print(slist* list, const char* msg);

char* slist_front(slist* list);
char* slist_back(slist* list);




#endif /* slist_h */
