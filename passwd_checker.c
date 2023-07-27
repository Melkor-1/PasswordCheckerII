#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include <assert.h>

#define HAS_LOWER   0x01    /* 0b00000001 */
#define HAS_UPPER   0x02    /* 0b00000010 */
#define HAS_DIGIT   0x04    /* 0b00000100 */
#define HAS_SPECIAL 0x08    /* 0b00001000 */

bool strongPasswordCheckerII(const char *password)
{
    size_t const sz = strlen (password);
    if (sz < 8) {
        return false;
    }

    unsigned char flags = 0;
    for (size_t i = 0; i < sz; ++i) {
        if (i > 0 && password[i - 1] == password[i]) {
            return false;
        }
    
        unsigned char ch = password[i];
        flags |= islower (ch) ? HAS_LOWER :
                 isupper (ch) ? HAS_UPPER :
                 isdigit (ch) ? HAS_DIGIT :
                 HAS_SPECIAL;

	if ((flags & HAS_LOWER) && (flags & HAS_UPPER) && (flags & HAS_DIGIT) && (flags & HAS_SPECIAL)) {
		return true;
	}
    }
    return (flags & HAS_LOWER) && (flags & HAS_UPPER) && (flags & HAS_DIGIT) && (flags & HAS_SPECIAL);
}

int main(void) 
{
	assert (strongPasswordCheckerII ("IloveLe3tcode$"));
	assert (!strongPasswordCheckerII ("Me+You--IsMyDream"));
	assert (!strongPasswordCheckerII ("1aB!"));
	return EXIT_SUCCESS;
}



