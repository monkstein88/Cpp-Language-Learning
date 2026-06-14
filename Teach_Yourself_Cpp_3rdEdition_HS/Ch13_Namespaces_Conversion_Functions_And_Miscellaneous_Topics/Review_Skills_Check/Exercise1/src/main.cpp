
/*
	Exercise 1.: What are the casting operators and what do they do?
*/

/*

	My answer:
		- 'dynamic_cast' - it converts a pointer (or reference) of one type, to a pointer (or reference) , respectively, of another type. It is
    to be used with polymorphic (base and derived) types.
    - 'const_cast' - it is a type of cast, that is supposed take place among two similar types, that is, the source and target types have
    to be the same fundamentally (at their base), but what is to be changed only is, taing out/striping the 'const' and/or 'volatile'
    potion of a source type, and making the target 'const'-ness. This is the only type casting
    - 'reinterpret_cast' - it is used to convert types of very different fundament
    - 'static_cast' - this is just an alias for an ordinary C-style cast

	Official answer:
		- In addition to the C-like cast, the casting operators are:
    - 'dynamic_cast' - Performs a polymorphic cast
    - 'reinterpret_cast' - Converts one type of pointer into another
    - 'static cast' - Performs a ”normal” cast
    - 'const cast' -  Casts away 'const'-ness

*/
