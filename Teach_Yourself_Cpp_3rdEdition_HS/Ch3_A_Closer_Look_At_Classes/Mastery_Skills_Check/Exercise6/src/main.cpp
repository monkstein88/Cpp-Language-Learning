
/*
	Exercise 6.: Explain why you must be carefule when passing objects to a funtion or returning objects
	from a function.

	- You must be careful when using those with dynamically allocated resources - like dynamic memory, operation with files (opening and closing files)
	the problem will occur that if you assign one object that uses dynamically allocated memory for storing data, by utilizing a pointer variable, to another
	of object of the same type - the assignee will overwrite the address value (held in the pointer) over the pointer of the assigned. Thus, both objects
	from that point on will operate on the exact same physicall memory space for holding the value, which breaks ''

	Official: When passing an object to a function or returning an object from a function, temporary
	copies of the object are created that will be destroyed, when the function terminates. When a
	temporary  copy of an object is destroyed, the destructor function might destroy something that
	is needed elsewhere in the program.

*/
