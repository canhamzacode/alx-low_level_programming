# 0x12. C - Singly linked lists
---

## Materials to checkout
- [Data Structure](https://alx-intranet.hbtn.io/concepts/120)
- [Linked List](https://alx-intranet.hbtn.io/rltoken/joxg32-tt4lUh8Afgst8tA)

---

---

## Tasks
- Write a function that prints all the elements of a list_t list.
	Prototype: 
```c
	size_t print_list(const list_t *h);
```
if str is NULL, print [0] (nil)

- Write a function that returns the number of elements in a linked list_t list.
        Prototype:
```c
        size_t list_len(const list_t *h);
```

- Write a function that adds a new node at the beginning of a list_t list.
        Prototype:
```c
        list_t *add_node(list_t **head, const char *str);
```
Return: the address of the new element, or NULL if it failed

- Write a function that adds a new node at the end of a list_t list.
        Prototype:
```c
        list_t *add_node_end(list_t **head, const char *str);
```
- Write a function that frees a list_t list.
        Prototype:
```c
        void free_list(list_t *head);
```

