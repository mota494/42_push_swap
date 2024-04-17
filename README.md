<div align="center">

# 42 push_swap

![Static Badge](https://img.shields.io/badge/Score-%3F%2F100-green?style=for-the-badge&logo=42&labelColor=%2302343F&color=%23F0EDCC)
![Static Badge](https://img.shields.io/badge/Programming%20Language-green?style=for-the-badge&logo=C&labelColor=%2302343F&color=%23F0EDCC)

[![Static Badge](https://img.shields.io/badge/Music%20Suggestion-Click%20Me?style=for-the-badge&logo=YouTube&logoColor=%23000000&labelColor=%23FFFFFF&color=%23FF0000)](https://www.youtube.com/watch?v=kdURqcVxIdk)

</div>

<div align="center">

# Introduction

Push_Swap is a sorting algorithm project meant to sort numbers on an asceding order on a stack.

A stack, in computer science, is an abstract data type that it's defined by an array of unique information that majorly uses two operations, push to introduce a new "node" and pop that removes a specific node from the stack.

In push_swap the student is challenged to make a programm that will take an arbitrary ammount of non repeating numbers, inserting them into the first stack and then using only two stacks to organize the numbers given and for a bit more challenge the programm has to organize the stack with the minimum ammount of movememts.

# Operations

</div>

Push_Swap operations behaviour is defined by the subject and it's up to the student to programm them. The operations that the student can use are as follows:

>ra : rotate the stack A making the last number the first

>rra : reverse rotate the stack A making the first number the last

>sa : swaps the first two numbers on stack A

>pa : pushes the first number on stack B to stack A

>rb : the same as ra but for stack B

>rrb : the same as rra but for stack B

>sb : swaps the first two numbers on stack B

>pb : pushes the first number on stack A to stack B

>ss : swaps the first two numbers of both stacks

>rr : rotates both stacks making the last number the first

>rrr : reverse rotate both stacks making the first number the last

<div align="center">

# Algorithm

</div>

The algorithm choosen is the thing that will define how the student develops push_swap. There are a bunch of algorithms out there and i highly recommend everyone
that is starting this project to try to develop their own algorithm first before developing anything already made, yes it will suck and it will be super inefficient but at least
you'll have a good grasp on how the other existant algorithms work.

After experimenting a bunch with different algorithms like radix, bubble sort and stallin sort but in the end, the one that i chose was the Turk Algorithm a straightforward and incredibly fast sorting algorithm which has a name inspired by "The Mechanical Turk" story.

<div align="center">

# The turk algorithm

</div>

The turk algorithm starts by pushing two numbers to the stack B and giving every number on stack A it's target. 
The target will be as follows.
```c
void    target(long num, t_stack **stack_b)
{
    if (num > max_num(stack_b) || num < min_num(stack_b))
        num.target = max_num(stack_b);
    else
        num.target = min_num(stack_b);

}
```
After every number receives it's first target the program will give every number it's cost, the cost is calculated by the ammount of rotation that it has to do to make both the number and it's target at the top of each stack.

After this the program will push to B the number with the lowest cost and after that it will reasign every number a new target that now instead of being the max or min number it will be depending on how close it is to the number 

Example:
    The number 8 on stack A can have the target 6 but after the number 7 is pushed to B the number 8 doesn't fit after number 6 and has to have 7 as it's target instead.

This loop will be repeated untill there's only three numbers left on the A stack.

After those 3 numbers get organized from smalles to largest the process repeats itself but from stack B to stack A.
