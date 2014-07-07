#include <stdio.h>
#include "TokenDebug.h"
#include "Token.h"

void tokenDump(Token *token)
{
	if(((Number *)token)->type == NUMBER_TOKEN)
	{
		printf("%d\n", ((Number *)token)->value);
	}
	else if(((Operator *)token)->type == OPERATOR_TOKEN)
	{
		printf("%c\n", (((Operator *)token)->info)->name);
	}

}