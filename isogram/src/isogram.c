#include "isogram.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

bool is_isogram(const char phrase[]) {
	if(phrase != NULL) {
		for (unsigned int i = 0; i < strlen(phrase); i ++) {
			for (unsigned int j = 0; j < strlen(phrase); j ++) {
				if (isalpha(phrase[i]) && isalpha(phrase[j]) && tolower(phrase[i]) == tolower(phrase[j]) && i != j)
					return false;
			}
		}
		return true;
	}
	return false;
}