/*
 *  Generic Stack ADT: private implementation
 *
 *  Author:  Joseph Fall
 *  Date:    Mar. 1, 2018
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>
#include <limits.h>

#include "istack.h"

IntStack_t istackCreate()
{
   return illCreate();
}

void istackDestroy(IntStack_t* stack)
{
   illDestroy(stack);
}

void istackPrint(const IntStack_t stack)
{
   illPrint(stack);
}

bool istackIsEmpty(const IntStack_t stack)
{
   return illIsEmpty(stack);
}

void istackPopAll(IntStack_t* stack)
{
   illDelete(stack);
}

int istackSize(const IntStack_t stack)
{
   return illLength(stack);
}

void istackPush(IntStack_t* stack, int value)
{
   illPush(stack, value);
}

int istackTop(const IntStack_t stack)
{
   return illHead(stack);
}

int istackPop(IntStack_t* stack)
{
   return illPop(stack);
}

