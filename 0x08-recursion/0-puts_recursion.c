#include <main.h>
/**
 * _puts_recursion - recursive functio to print a string
 *
 * @s - pointer to the string
 *
 * Return - Always 0
 */

void _puts_recursion(char *s){
	if (*s != '\0'){
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	if (*s == '\0'){
		_putchar('\n');
	}
}
	
