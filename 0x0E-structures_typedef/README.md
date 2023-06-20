# 0x0E-structures_typedef
![A dog image](https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/medias/2021/3/3b534d73d79949ef8b7535d462014518256953f2.jpg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20221010%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20221010T115509Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=15dad4df040d5e976331bbb99efa2dce30e435978f7e8fb4f0b605a2bbb2e1dc)

> This is a readme template for better undersanding of the task (0x0E-structure_typedef)

---
### Task Questions
Click below to navigate to the question of your choice

- [0 dog.h](#dog.h)
- [1-init_dog.c](#1-init_dog.c)
- [2-print_dog.c](#2-print_dog.c)
- [3-dog.h](#3dog.h)
- [4-new_dog.c](#4-new_dog.c)
- [5-free_dog.c](#5-free_dog.c)

---
### 0_dog.h
Define a new type struct dog with the following elements:
- name, type = char *
- age, type = float
- owner, type = char *
- filename: dog.h

### 1-init_dog.c
Write a function that initialize a variable of type struct dog
- prototype: void init_dog(struct dog *d, char *name, float age, char *owner);
- filename: 1-init_dog.c

### 2-print_dog.c
Write a function that prints a struct dog
Format: see example bellow
- You are allowed to use the standard library
- If an element of d is NULL, print (nil) instead of this element. (if name is NULL, print Name: (nil))
- If d is NULL print nothing.

### 3-dog.h
Define a new type dog_t as a new name for the type struct dog.

### 4-new_dog.c
Write a function that creates a new dog.
- Prototype: dog_t *new_dog(char *name, float age, char *owner);
- You have to store a copy of name and owner
- Return NULL if the function fails

### 5-free_dog.c
Write a function that frees dogs

