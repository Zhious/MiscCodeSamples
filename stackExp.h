// File: $Id: stack.h,v 1.2 2013/10/18 02:37:52 csci243 Exp $
// Description: Interface to a node based stack implementation.
//	For this project, the tokens (C strings) from the 
//	postfix expression are pushed onto the stack.
// Author: sps

#ifndef STACKEXP_H
#define STACKEXP_H

#include "stackNodeExp.h"


/// Add an element to the top of the stack (stack is changed).
/// This routine should dynamically allocate a new node.
/// @param stack Points to the top of the stack
/// @param data The token (C String)
void pushExp(StackNodeExp** stack, ExpNode* data);

/// Return the top element from the stack (stack is unchanged)
/// @param stack Points to the top of the stack
/// @return the top element on the stack
/// @exception If the stack is empty, the program should 
///	exit with EXIT_FAILURE
ExpNode* topExp(StackNodeExp* stack);

/// Removes the top element from the stack (stack is changed).
/// This routine should free the memory associated with the top node.
/// @param stack Points to the top of the stack
/// @exception If the stack is empty, the program should 
///	exit with EXIT_FAILURE
void popExp(StackNodeExp** stack);

/// Tells whether the stack is empty or not (stack is unchanged)
/// @param stack Points to the top of the stack
/// @return 0 if not empty, any other value otherwise
int emptyStackExp(StackNodeExp* stack);

#endif