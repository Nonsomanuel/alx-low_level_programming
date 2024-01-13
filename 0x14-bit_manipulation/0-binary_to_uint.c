#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @b: binary.
 *
 * Return: unsigned int.
 */

unsigned int binary_to_uint(const char *b) {
	if (b == NULL)
		return 0;

	unsigned int result = 0;

	while (*b != '\0') {
		if (*b == '0' || *b == '1') {
			result = (result << 1) + (*b - '0');
		} else {
			// If the character is not 0 or 1, return 0 as an error indicator
			return 0;
		}
		b++;
	}

	return result;
}

int main() {
	const char *binary_str = "110101";
	unsigned int result = binary_to_uint(binary_str);

	if (result == 0 && binary_str != NULL) {
		printf("Error: Invalid binary string\n");
	} else {
		printf("Decimal representation: %u\n", result);
	}

	return 0;
}
