
/*
	Intro 1.: Perhaps the most general-purpose of the containers is the vector. The 'vector' class supports a dynamic array. This is an
	array tha can grow as needed. As you know, in C++ the size of an array is fixed at compile time. Although this is by far the most
	efficient way to implement arrays, it is also the most restrictive, because the size of the array cannot be adjusted at run time to
	accomodate changing program conditions. A vector solves this problem by allocating memory as needed. Although a vector is dynamic, you
	can still use the standard arrays subscript notation to access its elemnts.

	The template specification for 'vector' is shown here:
*/
	template<class T, class Allocator=allocator<T>> class vector
/*
	Here 'T' is the type of data being stored and 'Allocator' specifies the allocator, which defaults to the standard allocator. 'vector'
	has the following constructors:
*/
	explicit vector(const Allocator &a=Allocator());

	explicit vector(size_type num, const T &val=T(), const Allocator &a=Allocator());

	vector(const vector<T, Allocator>&ob);

	template<class InIter> vector<InIter start, InIter end, const Allocator &a=Allocator());
/*
	The first form constructs an empty vector.
	The second form constructs a vector that has 'num' elements with the value 'val'. The value of 'val' can be allowed to defaullt.
	The third form constructs a vector that contains the same elements as 'ob'.
	The fourth form constructs a vector that contains the elements in the range specified by the iterators 'start' and 'end'.

	Any object that will be stored in a vector must define a default constructor. It must also define the '<' and '==' operations. Some
	compilers might require that other comparison operators be defined. (Because implmentations vary, consult your compiler's documentation
	for precise information.) All of the built-in types automatically satisfy these requirements.

	Although the template syntax looks rather complex, there is nothing difficult about declaring a vector. Here are some examples:
*/
	vector<int> iv; // creates a zero-length int vector
	vector<char> cv(5); // creates a 5-element char vector
	vector<char> cv(5, 'x'); // initializes a 5-element char vector
	vector<int> iv2(iv); // creates an int vector from an int vector
/*
	The following comparison operators are defined for 'vector':
	==, <, <=, !=, >, >=

	The subscript operator '[]' is also defined for 'vector'. This allows you to access the elements of a vector using standard array
	subscripting notation.

	The member functions defined by 'vector' are shown in the table below. (Again, it is important not to be put off by the syntax.) Some of
	the most important memeber functions are 'size()', 'begin()', 'end()', 'push_back()', 'insert()', and 'erase()'. The 'size()' function
	returns the current size of the vetor. This function is quite useful because it allows you determine the size of a vector at run time.
	Remember, vectors will increase in size as needed, so the size of a vector must be determined during execution, not during compilation.

	The 'begin()' function returns an iterator to the start of the vector. The 'end()' function returns an iterator to the end of the vector.
	As explained, iterators are similar to pointers, and it is through the use of the 'begin()' and 'end()' functions that you obtain an
	iterator to the beginning and end of a vector.

	----------------------------------------------------------------------------------------------------------------------------------------
	||	Member Function																				Description															  ||
	========================================================================================================================================
	||	template<class InIter> void assign(InIter start, InIter end);					Assigns the vector the sequence defined by 'start' and  ||
	||																										'end'.                                                  ||
	||------------------------------------------------------------------------------------------------------------------------------------||
	|| template<class Size, class T> void assign(Size num, const T &val=T());		Assigns the vector 'num' elements of value 'val'.       ||
	||------------------------------------------------------------------------------------------------------------------------------------||
	||	reference at(size_type i);																	Returns a reference to an element specified by i.		  ||
	||	const_reference at(size_type i) const;																															  ||
	||------------------------------------------------------------------------------------------------------------------------------------||
	|| reference back();																				Returns a reference to the last element in the vector.  ||
	|| const_reference back() const;															   																		  ||
	||------------------------------------------------------------------------------------------------------------------------------------||
	|| iterator begin();																				Returns an iterator to the first element in the vector. ||
	|| const_iterator begin() const;																																		  ||
	||------------------------------------------------------------------------------------------------------------------------------------||
	||	size_type capacity() const;																Returns the current capacity of the vector. This is the ||
	||																										number of elements it can hold before it will need to   ||
	||																										allocate more memory.											  ||
	||------------------------------------------------------------------------------------------------------------------------------------||
	|| void clear();																					Removes all elements from the vector.						  ||
	||------------------------------------------------------------------------------------------------------------------------------------||
	|| bool empty() const;																			Returns true if the invoking vector is empty and false  ||
	||																										otherwise.															  ||
	||------------------------------------------------------------------------------------------------------------------------------------||
	|| iterator end();																				Returns an iterator to the end of the vector.			  ||
	|| const_iterator end();																																				  ||
	||------------------------------------------------------------------------------------------------------------------------------------||
	|| iterator erase(iterator i);																Removes the element pointed to by 'i'. Returns an		  ||
	||																										iterator to the element after the one removed.			  ||
	||------------------------------------------------------------------------------------------------------------------------------------||
	|| iterator erase(iterator start, iterator end);										Removes the elements in the range 'start' to 'end'. 	  ||
	||																										Returns an iterator to the element after the last       ||
	||																										element 																  ||
	||------------------------------------------------------------------------------------------------------------------------------------||
	|| reference front();																			Returns a reference to the first element in the vector. ||
	|| const_reference front() const;																																	  ||
	||------------------------------------------------------------------------------------------------------------------------------------||
	|| allocator_type get_allocator() const; 													Returns the vector's allocator 								  ||
	||------------------------------------------------------------------------------------------------------------------------------------||
	|| iterator insert(iterator i, const T &val=T());										Inserts 'val' immediately before the element specified  ||
	||																										by 'i'. An iterator to the element is returned.			  ||
	||------------------------------------------------------------------------------------------------------------------------------------||
	|| void insert(iterator i, size_type num, const T &val);								Inserts 'num' copies of 'val' immediately before the 	  ||
	||																										element specified by 'i'										  ||
	||------------------------------------------------------------------------------------------------------------------------------------||
	|| template<class InIter> void insert(iterator i, InIter start, InIter end);	Inserts the sequence defined by 'start' and 'end' 		  ||
	||																										immediately before the element specified by 'i'.		  ||
	||------------------------------------------------------------------------------------------------------------------------------------||
	|| size_type max_size() const; 																Returns the maximum number of elements that the vector  ||
	||																										can hold.															  ||
	||------------------------------------------------------------------------------------------------------------------------------------||
	||	reference operator[](size_type i) const; 												Returns a reference ti the element specified by 'i'.	  ||
	||	const_reference operator[](size_type i) const;																												  ||
	||------------------------------------------------------------------------------------------------------------------------------------||
	||	void pop_back();																				Removes the last element in the vector.					  ||
	||------------------------------------------------------------------------------------------------------------------------------------||
	|| void push_back(const T &val);																Adds an element with the value specified by 'val' to    ||
	||																										the end of the vector.											  ||
	||------------------------------------------------------------------------------------------------------------------------------------||
	|| reverse_iterator rbegin();																	Returns a reverse iterator to the end of the vector 	  ||
	||	const_reverse_iterator rbegin() const;																															  ||
	||------------------------------------------------------------------------------------------------------------------------------------||
	|| reverse_iterator rend();																	Returns a reverse iterator to the start of the vector   ||
	|| const_reverse_iterator rend() const;																															  ||
	||------------------------------------------------------------------------------------------------------------------------------------||
	|| void reserve(size_type num);																Sets the capacity of the vector so that it is equal to  ||
	||																										at least 'num'.													  ||
	||------------------------------------------------------------------------------------------------------------------------------------||
	|| void resize(size_type, num, T val = T());												Changes the size of the vector to that specified by     ||
	||																										'num'. If the vector must lenghtened, elements with the ||
	||																										value specified by 'val' are added to the end.			  ||
	||------------------------------------------------------------------------------------------------------------------------------------||
	|| size_type size() const;																		Returns the number of elements currently in the vector. ||
	||------------------------------------------------------------------------------------------------------------------------------------||
	|| void swap(vector<T, Allocator>&ob)														Exchanges the elements stored in the invoking vector    ||
	||																										with those in 'ob'.												  ||
	||------------------------------------------------------------------------------------------------------------------------------------||
																The 'vector' Member Functions

	The 'push_back()' function puts a value onto the end of the vector. If necessary, the vector is increased in length to accommodate the
	new element. You can also add elements to the middle using 'insert()'. A vector can also be initialized. In any vent, once a vector
	contains elements, you can use array subscripting to access or modify those elements. You can remove elements from a vector using
	'erase()'.
*/
