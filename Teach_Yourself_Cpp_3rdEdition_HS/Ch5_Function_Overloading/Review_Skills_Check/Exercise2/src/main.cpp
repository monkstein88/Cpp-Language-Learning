
/*
	Exercise 1.: Show how to allocate a 'float' and 'int' by 'new'. Also, show how to free them by using 'delete'.
*/

// How to alloacate them by using 'new':
int* p_int = new int;
float* p_fl = new float;

// How to deallocate (free) the memory of them by using 'delete':
delete p_int;
delete p_fl;
