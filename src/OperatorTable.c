#include "OperatorTable.h"

OperatorInfo primaryOperatorTable[12] = {
	{.name = "NULL", .id = UNKNOWN_OP, .precedence = 0, .associativity = NO_ASSOCIATIVITY, .affix = INFIX},
	{.name = "+", .id = ADD_OP, .precedence = 70, .associativity = LEFT_TO_RIGHT, .affix = INFIX},
	{.name = "-", .id = SUB_OP, .precedence = 70, .associativity = LEFT_TO_RIGHT, .affix = INFIX},
	{.name = "*", .id = MUL_OP, .precedence = 80, .associativity = LEFT_TO_RIGHT, .affix = INFIX},
	{.name = "%", .id = NPERCENT_OP, .precedence = 80, .associativity = LEFT_TO_RIGHT, .affix = INFIX},
	{.name = "/", .id = DIV_OP, .precedence = 80, .associativity = LEFT_TO_RIGHT, .affix = INFIX},
	{.name = "|", .id = OR_OP, .precedence = 40, .associativity = LEFT_TO_RIGHT, .affix = INFIX},
	{.name = "^", .id = XOR_OP, .precedence = 50, .associativity = LEFT_TO_RIGHT, .affix = INFIX},
	{.name = "&", .id = AND_OP, .precedence = 60, .associativity = LEFT_TO_RIGHT, .affix = INFIX},
	{.name = "&&", .id = BITWISE_AND_OP, .precedence = 30, .associativity = LEFT_TO_RIGHT, .affix = INFIX},
	{.name = "||", .id = BITWISE_OR_OP, .precedence = 20, .associativity = LEFT_TO_RIGHT, .affix = INFIX}	
									   };