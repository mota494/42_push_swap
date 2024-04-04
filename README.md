<div align="center">

# 42 push_swap

![Static Badge](https://img.shields.io/badge/Score-%3F%2F100-green?style=for-the-badge&logo=42&labelColor=%2302343F&color=%23F0EDCC)
![Static Badge](https://img.shields.io/badge/Programming%20Language-green?style=for-the-badge&logo=C&labelColor=%2302343F&color=%23F0EDCC)

[![Static Badge](https://img.shields.io/badge/Music%20Suggestion-Click%20Me?style=for-the-badge&logo=YouTube&logoColor=%23000000&labelColor=%23FFFFFF&color=%23FF0000)](https://www.youtube.com/watch?v=kdURqcVxIdk)

</div>

---

<div align="center">

# Functions List

</div>

```c
Linked List Utils 

void ft_populate_list(t_stack **head, int argc, char **argv); //gets the argumments from argv and creates a list out of it
t_stack *ft_add_node(int num); //adds a node
int num_elems(t_stack **stack); //returns the number of elements on a stack
long max_num(t_stack **stack); //returns the biggest number on a stack
long min_num(t_stack **stack); //returns the smallest number on a stack
int node_index(t_stack **stack, long num); //returns the position of a number on the stack

Stack Operations

void swap_a(t_stack **stack_a); //swaps the first two elements of the stack
void rotate_a(t_stack **stack_a); //rotates the whole stack the last element becomes the first
void reverse_rra(t_stack **stack_a); //rotates the whole stack the first element becomes the last
void push_a(t_stack **stack_a, t_stack **stack_b); //pushes the top element to the other stack

Simultaneously stack operations

void swap_ss(t_stack **stack_a, t_stack **stack_b); //swaps the first two elements of both stacks
void rotate_rr(t_stack **stack_a, t_stack **stack_b); //rotates both stacks, the last element becomes the first
void reverse_rrr(t_stack **stack_a, t_stack **stack_b); //rotates both stack, the first element becomes the 

Error checks

int ft_doublenumber(int argc, char **argv); //checks if the user inserted the same number twice
int ft_alldigit(int argc, char **argv); //checks if everything inputed is a number
int already_sort(int argc, char **argv); //checks if the stack inputed is already sorted

Algorithm
```
