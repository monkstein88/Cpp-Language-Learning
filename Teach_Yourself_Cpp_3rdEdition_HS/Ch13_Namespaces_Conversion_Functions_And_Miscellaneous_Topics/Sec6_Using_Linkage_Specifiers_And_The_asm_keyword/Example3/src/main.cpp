
/*
	Example 3.: This fragment embeds several assembly language instructions into 'func()':
*/

// Don't try this function!
void func()
{
	asm("mov bp, sp");
	asm("push ax");
	asm("mov c1, 4");
	// ...
}

/*
	Remember: You must be an accomplished assembly language programmer in order to succesfully use in-line assmebly language. Also, be sure
	to check your compiler's user manual for details regarding assembly language usage.
*/
