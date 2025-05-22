#include <stdio.h>

typedef struct node {
  int data;
  struct node *next;
} node;

typedef struct linked_list {
  node *head;
} linked_list;

linked_list new_list(node *head) {
  linked_list l;
  l.head = head;
  return l;
}

node new_node(int data) {
  node n;
  n.data = data;
  return n;
}

void append_node(linked_list l, node *next) {
  node *current = l.head;
  while (current->next != NULL) {
    current = current->next;
  }
  current->next = next;
}

void print_list(linked_list l) {
  node *current = l.head;
  do {
    printf("%d\n", current->data);
    current = current->next;
  } while (current != NULL);
}

int list_length(linked_list l) {
  int count = 0;
  node *current = l.head;
  do {
    count++;
    current = current->next;
  } while (current != NULL);
  return count;
}

int list_search(linked_list l, int value) {
  node *current = l.head;
  do {
    if (current->data == value) {
      return 1;
    }
    current = current->next;
  } while (current != NULL);
  return 0;
}

void insert_at_beginning(linked_list *l, node *n) {
  n->next = l->head;
  l->head = n;
}

int linked_list_run() {
  node n1 = new_node(1);
  node n2 = new_node(2);
  node n3 = new_node(3);
  node n4 = new_node(4);
  node n6 = new_node(6);
  node n5 = new_node(5);
  node n7 = new_node(7);
  node n8 = new_node(8);
  node n9 = new_node(9);
  node n10 = new_node(10);
  node n11 = new_node(11);
  node n12 = new_node(12);

  linked_list list = new_list(&n1);
  // 0 -> 1 -> 3 -> 5 -> 12 -> 6 -> 2 -> 8 -> 4 -> 9 -> 10 -> 7 -> 11
  append_node(list, &n3);
  append_node(list, &n5);
  append_node(list, &n12);
  append_node(list, &n6);
  append_node(list, &n2);
  append_node(list, &n8);
  append_node(list, &n4);
  append_node(list, &n9);
  append_node(list, &n10);
  append_node(list, &n7);
  append_node(list, &n11);

  print_list(list);

  node n0 = new_node(0);
  insert_at_beginning(&list, &n0);

  printf("\n");
  print_list(list);

  printf("list length: %d\n", list_length(list));
  printf("search 3: %d\n", list_search(list, 3));
  printf("search 29: %d\n", list_search(list, 29));

  return 0;
}
