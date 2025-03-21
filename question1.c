//! Question 1: Basic Stack Implementation
// Implement a static stack using an array and functions for:
//* Pushing (push)
//* Popping (pop)
//* Checking if the stack is empty
//* Checking if the stack is full
//* Displaying the top element of the stack

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Since we're going the "basic route" of things, I'm not going to use a struct for the stack. As of right now, I must understand the basics of a stack and how it works. I'll implement a struct later on.
// As a starting point, let's imagine as if it was a ring pyramid (you know, the toy for babies). The top of the pyramid is the top of the stack. The bottom of the pyramid is the bottom of the stack. The ring is the element of the stack.
#define MAX 5

// In this case, we're going to use an array to represent the stack.
// The stack is going to have a maximum of 5 elements. (defined by the MAX constant)
// The top of the stack is going to be represented by the top variable, that starts at -1.
// But why -1? Because the stack is empty. If the stack was full, the top variable would be equal to 4.
int stack[MAX];
int top = -1;

// So... The push function. Basically, it adds an element to the top of the stack.
// The tricky question is: How it works?
// In sum, it adds an increment to the top variable index and then assigns the value to the stack's top.
// In other words, it's like adding a ring to the top of the pyramid.
void push(int i)
{
    stack[++top] = i;
}

// Now the pop fuction. It removes the top element of the stack.
// Once again, how it works?
// It returns the top element from the stack, and right after, decrements the top variable index.
// In other words, it's like removing a ring from the top of the pyramid.
int pop()
{
    return stack[top--];
}

// The empty function checks if the stack is empty. It's simple, so there's no need for further explanation.
bool empty()
{
    return top == -1;
}

// Just like the empty function, the full function checks if the stack is full. It's also simple.
// I could just use the empty function, but since the question asks for a full function, I'll implement it.
bool full()
{
    return top == MAX - 1;
}

// Last one: the stacktop function. It returns the top element of the stack, without removing it.
// How it works? It simply returns the top element of the stack.
// It's like telling your mom the color of the top ring of the pyramid.
// Like: "Mommy, the top ring is red!"
int stacktop()
{
    return stack[top];
}

int main()
{
    // Let's test the stack.
    // First, let's push some elements to the stack.
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    // The stack should be like this: 1 (the bottom element), 2, 3, 4, 5 (the top element).

    // Now, let's check if the stack is full.
    // The expected result should be: The stack is full.
    if (full())
        printf("The stack is full.\n");
    else
        printf("The stack is not full.\n");

    // Let's check the top element of the stack.
    // The expected result should be: 5
    printf("The top element of the stack is: %d\n", stacktop());

    // Now, let's pop the top element of the stack.
    // The expected result should be: 5
    printf("The top element of the stack was: %d\n", pop());

    // Let's check if the stack is empty.
    // The expected result should be: The stack is not empty.
    if (empty())
        printf("The stack is empty.\n");
    else
        printf("The stack is not empty.\n");

    return 0;
}