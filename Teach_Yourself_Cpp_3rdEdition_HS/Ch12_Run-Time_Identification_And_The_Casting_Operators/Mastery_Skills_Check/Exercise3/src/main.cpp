/*
	Exercise 3: In addition to the standard cast, C++ defines four casting operators. What are they and what are they for?
*/

/*
	My answer:
    - 'dynamic_cast' - it used to convert/cast a pointer or reference of one type into a pointer or reference of another, respectivelly, if
    and only if that action is valid/compatible. This is mostly used for polymorphic types (casting pointers between based and derived
    classes)

		- 'const_cast' - is used to convert/cast a 'const' and/or 'volatile type object, into one of the same general type but with the
    'const'-ness and/or 'volatile'-ness removed.

    - 'reinterpet_cast' - it is used to convert/cast one type into another , both of which are fundamentally different. I.e. one type of
    pointer into a another, or a pointer to a ordinary variable. It is usually used with non-polymorphic types.

    - 'static_cast' - it performs conversion/casting, the same as ordinary C-style one, no checks of any kind are executed.

	Official answer:

	 - 'dynamic_cast' - Performs a polymorphic cast
   - 'reinterpret_cast' - Converts one type of pointer into another
   - 'static cast' - Performs a ”normal” cast
   - 'const cast' -  Casts away const-ness

*/
