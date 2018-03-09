/**
 *  Generic Type Definition
 *
 *  COMP220: Example - generic data structures using typedef
 *  Author:  Joseph Fall
 *  Date:    Jan. 8, 2018
 */
#ifndef GENERIC_TYPE_H
#define GENERIC_TYPE_H

typedef char* ItemType;// define generic type

// Values and format specifiers required for each specific generic type
#define ITEMTYPE_NONE ""

#define ITEMTYPE_FORMAT_SPEC "%s"
#define ITEMTYPE_PRINT(item) printf(ITEMTYPE_FORMAT_SPEC, item); 

#endif