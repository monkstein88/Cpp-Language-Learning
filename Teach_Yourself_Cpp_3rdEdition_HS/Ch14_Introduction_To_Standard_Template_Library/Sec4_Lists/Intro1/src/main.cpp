
/*
	Intro 1.: The 'list' class supports a bidirectional, linear list. Unlike a vector, which supports random access, a list can be accessed
	sequentially only. Because lists are bidirectional, they can be accessed front to back or back to front.

	The 'list' clas has this template specification:
*/
	template <class T, class Allocator = allocator<T> > class list
/*
	Here 'T' is the type of data stored in the list. The allocator is specified by 'Allocator', which defaults to the standard allocator.
	This class has the following constructors:
*/
	explicit list(const Allocator &a= allocator());

	explicit list(size_type num, const T &val=T(), const Allocator &a=Allocator());

	list(const list<T, Allocator> &ob);

	template<class InIter> list(InIter start, InIter end, const Allocator &a=Allocator());
/*
	The first form constructs empty list.
	The second form constructs a list that has 'num' elements with value 'val', which can be allowed to default.
	The third form constructs a list that contains the same elements as 'ob'.
	The fourth form constructs a list that contains the elements in the range specified by the iterators 'start' and 'end'.

	----------------------------------------------------------------------------------------------------------------------------------------
	||	Member Function																				Description															  ||
	========================================================================================================================================
	||	template<class InIter> void assign(InIter start, InIter end);					Assigns the list the sequence defined by 'start' and    ||
	||																										'end'.                                                  ||
	||------------------------------------------------------------------------------------------------------------------------------------||
	|| template<class Size, class T> void assign(Size num, const T &val=T());		Assigns the list 'num' elements of value 'val'.         ||
	||------------------------------------------------------------------------------------------------------------------------------------||
	|| reference back();																				Returns a reference to the last element in the list.    ||
	|| const_reference back() const;															   																		  ||
	||------------------------------------------------------------------------------------------------------------------------------------||
	|| iterator begin();																				Returns an iterator to the first element in the list.   ||
	|| const_iterator begin() const;																																		  ||
	||------------------------------------------------------------------------------------------------------------------------------------||
	|| void clear();																					Removes all elements from the list.	     					  ||
	||------------------------------------------------------------------------------------------------------------------------------------||
	|| bool empty() const;																			Returns true if the invoking list is empty and false    ||
	||																										otherwise.															  ||
	||------------------------------------------------------------------------------------------------------------------------------------||
	|| iterator end();																				Returns an iterator to the end of the list.	   		  ||
	|| const_iterator end();																																				  ||
	||------------------------------------------------------------------------------------------------------------------------------------||
	|| iterator erase(iterator i);																Removes the element pointed to by 'i'. Returns an		  ||
	||																										iterator to the element after the one removed.			  ||
	||------------------------------------------------------------------------------------------------------------------------------------||
	|| iterator erase(iterator start, iterator end);										Removes the elements in the range 'start' to 'end'. 	  ||
	||																										Returns an iterator to the element after the last       ||
	||																										element 																  ||
	||------------------------------------------------------------------------------------------------------------------------------------||
	|| reference front();																			Returns a reference to the first element in the list.   ||
	|| const_reference front() const;																																	  ||
	||------------------------------------------------------------------------------------------------------------------------------------||
	|| allocator_type get_allocator() const; 													Returns the list's allocator 								     ||
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
	|| size_type max_size() const; 																Returns the maximum number of elements that the list    ||
	||																										can hold.															  ||
	||------------------------------------------------------------------------------------------------------------------------------------||
	||	void merge(list<T, Allocator> &ob);														Merges the ordered list contained in 'ob' with the 	  ||
	|| template<class Comp> void merge(<list <T,Allocator >> &ob, Comp cmpfn)		invoking ordered list. The result is ordered. After the ||
	||																										merge, the list contained in 'ob' is empty. In the 	  ||
	||																									 	second form, a comparison function can be specified to  ||
	||																										determine whether the value of one element is less than ||
	||																										that of another.									   	        ||
	||------------------------------------------------------------------------------------------------------------------------------------||
	||	void pop_back();																				Removes the last element in the list.						  ||
	||------------------------------------------------------------------------------------------------------------------------------------||
	||	void pop_front();																				Removes the first element in the list.						  ||
	||------------------------------------------------------------------------------------------------------------------------------------||
	|| void push_back(const T &val);																Adds an element with the value specified by 'val' to    ||
	||																										the end of the list.											  	  ||
	||------------------------------------------------------------------------------------------------------------------------------------||
	|| void push_front(const T &val);															Adds an element with the value specified by 'val' to    ||
	||																										the front of the list.											  ||
	||------------------------------------------------------------------------------------------------------------------------------------||
	|| reverse_iterator rbegin();																	Returns a reverse iterator to the end of the list. 	  ||
	||	const_reverse_iterator rbegin() const;																															  ||
	||------------------------------------------------------------------------------------------------------------------------------------||
	|| void remove(const T &val);																	Remove elements with the value 'val' from the list.     ||
	||------------------------------------------------------------------------------------------------------------------------------------||
	|| template<class UnPred> void remove_if(Unpred pr);									Removes elements for which the unary predicate 'pr' is  ||
	||																										true.																	  ||
	||------------------------------------------------------------------------------------------------------------------------------------||
	|| reverse_iterator rend();																	Retrurns a reverse iterator to the start of the list.   ||
	|| const_reverse_iterator rend() const;																															  ||
	||------------------------------------------------------------------------------------------------------------------------------------||
	|| void resize(size_type, num, T val = T());												Changes the size of the list to that specified by       ||
	||																										'num'. If the list must lenghtened, elements with the   ||
	||																										value specified by 'val' are added to the end.			  ||
	||------------------------------------------------------------------------------------------------------------------------------------||
	|| void reverse();																				Reverses the invoking list. 									  ||
	||------------------------------------------------------------------------------------------------------------------------------------||
	|| size_type size() const;																		Returns the number of elements currently in the list.   ||
	||------------------------------------------------------------------------------------------------------------------------------------||
	|| void sort();																					Sorts the list. The second for sorts the list using the ||
	||	template<class Comp> void sort(Comp cmpfn);											comparison function cmpfn to determine whether the      ||
	||																										value of one element is less than that of another.      ||
	||------------------------------------------------------------------------------------------------------------------------------------||
	|| void splice(iterator i, list<T, Allocator>&ob);										Inserts the contents of 'ob' into the invoking list at  ||
	||																										the location pointed to by 'i'. After the operation     ||
	||																										'ob' is empty.												        ||
	||------------------------------------------------------------------------------------------------------------------------------------||
	|| void splice(iterator i, list<T, Allocator>&ob, iterator el); 					Removes the element pointed to by 'el' from the list    ||
	||																										'ob' and stores it in the invoking list at the location ||
	||																									 	pointed to by 'i'.												  ||
	||------------------------------------------------------------------------------------------------------------------------------------||
	||	void splice(iterator i, list<T, Allocator>&ob, 										Removes the range defined by 'start' and 'end' from     ||
	||														iterator start, iterator end);		'ob' and stores it in the invoking list beginning at 	  ||
	||																									 	the location pointed by 'i'. 									  ||
	||------------------------------------------------------------------------------------------------------------------------------------||
	|| void swap(list<T, Allocator>&ob); 														Exchanges the eleemnts stored in the invoking list with ||
	||																										those in 'ob'.    												  ||
	||------------------------------------------------------------------------------------------------------------------------------------||
	|| void unique();																					Removes duplicate elements from the invoking list. The  ||
	||	template<class BinPred> void unique(BinPred pr); 									second form uses 'pr' to determine uniqueness.			  ||
	||------------------------------------------------------------------------------------------------------------------------------------||
																		The 'list' Member Functions

	The following copmparison operators are difined for 'list':
	== , < , <= , != , > , >=

	The member function defined for 'list' are shown in the table above. Like a vector, a list can have eleemnts put into it with the
	'push_back()' function.	You can put elements on the front of the list by using 'push_front()', and you can insert an eleemnt into the
	middle of a list by using 'insert()'. You can use 'splice()' to join two lists, and you can merge one list into another by using
	'merge()'.

	Any data type that will be held in a list must define a default constructor. It must also define various comparison operators. At the
	time of this writing, the precise requirements for an object that will be stored in a list vary from compiler to compiler and subject to
	change, so you will need to check your compiler's documentation.

*/
