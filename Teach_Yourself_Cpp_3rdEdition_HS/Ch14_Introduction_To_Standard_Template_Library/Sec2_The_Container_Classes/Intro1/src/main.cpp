
/*
	Intro 1.: As explained, containers are the STL objects that actually hold data. The containers defined by the STL are shown in the table
	below. Also shown are the headers you must include to use each container. The 'string' class, which manages character strings, is also
	a container, but it is discussed later in this chapter.

	----------------------------------------------------------------------------------------------------------------------------------
	||	Containers				Description																			                      Required Header ||
	==================================================================================================================================
	||	bitset					A set of bits																		   							<bitset>		  ||
	||	deque						A double-ended queues															   							<deque>		  ||
	||	list						A linear list 																		   						 	<list>		  ||
	||	map 						Stores key/value pairs in which each key is associated with only one value					 	<map>			  ||
	|| multimap					Stores key/value pairs in which one key can be associaed with two or more values				<map>			  ||
	||	priority_queue			A priority queue																									<queue>		  ||
	||	queue 					A priority queue 																									<queue>		  ||
	||	set 						A set in which each element is unique																		<set>			  ||
	||	stack 					A stack 																												<stack>		  ||
	|| vector 					A dynamic array																									<vector>		  ||
	----------------------------------------------------------------------------------------------------------------------------------

	Because the names of the placeholder types in a template class declaration are arbitrary, the container classes declare 'typedef'ed
	versions of these types. This makes the types names concrete. Some of the most common 'typedef' names are shown in the following table.

	------------------------------------------------------------------------------------------------------------------
	||	typedef Name						Description																			             ||
	==================================================================================================================
	||	size_type							An integral type equivalent to 'size_t'													 ||
	||	reference							A reference to an element															   		 ||
	||	const_reference					A linear list 																		   			 ||
	||	iterator								An iterator																							 ||
	|| const_iterator						A 'const' iterator																				 ||
	||	reverse_iterator					A reverse iterator																				 ||
	||	const_reverse_iterator			A 'const' reverse iterator 																	 ||
	||	value_type							The type of a value stored in a container													 ||
	||	allocator_type						The type of the allocator 																		 ||
	|| key_type								The type of a key																					 ||
	|| key_compare							The type of a function that compares two keys											 ||
	|| value_compare						The type of a function that compares two values											 ||
	------------------------------------------------------------------------------------------------------------------

	Although it is not possible to examine each container in this chapter, the next sections explore three representatives: 'vector', 'list'
	and 'map'. Once you understand how these containers work, you will have no trouble using the others.

*/
