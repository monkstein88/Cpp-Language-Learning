
/*
	Intro 1.: The 'map' class supports an associative container in which unique keys are mapped with values. In essence, a key is simply a
	name that you give to a value. Once a value has been stored, you can retrieve it by using its key. Thus, in its most general sense a map
	is a list of key/value pairs. The power of a map is that you can look up a value given its key. For example, you could define a map that
	uses a person's name as its key and stores that person's telephone number as its value. Associative containers are becoming more popular
	in programming.

	As mentioned, a map can hold only unique keys. Duplicate keys are not allowed. To create a map that allows nonunique keys, use
	'multimap'.

	The 'map' container has the follwing template specification:
*/
	template <class Key, class T, class Comp=less<Key>, class Allocator=allocator<T>> class map
/*
	Here 'Key' is the data type of the keys, 'T' is the data type of the values being stored (mapped), and 'Comp' is a function that
	compares two keys. Thus defaults to the standard 'less()' utility function object. 'Allocator' is the allocator (which defaults to
	'allocator').

	The 'map' class has the following constructors:
*/
	explicit map(const Comp &cmpfn=Comp(), const Allocator &a=Allocator());

	map(const map<Key, T, Comp, Allocator> &ob);

	template<class InIter> map(InIter start, InIter end, const Comp &cmpfn=Comp(), const Allocator &a=Allocator());
/*
	The first form constructs an empty map.
	The second form constructs a map that contains the same leements as 'ob'.
	The third form constructs a map that contains the elements in the range specified by the iterators 'start' and 'end'. The function
	specified by 'cmpfn', if present, determines the ordering of the map.

	In general, any object used as a key must define a default constructor and overload any necessary comparison operators.

	The following comparison operators are defined for 'map'.
	'==', '<', '<=', '!=', '>', '>='

	The member functions defined by 'map' are shown in the table below. In the descriptions, 'key_type' is the type of the key and
	'value_type' represents 'pair<Key,T>'.

	----------------------------------------------------------------------------------------------------------------------------------------
	||	Member Function																				Description															  ||
	========================================================================================================================================
	|| iterator begin();																				Returns an iterator to the first element in the map.    ||
	|| const_iterator begin() const;																																		  ||
	||------------------------------------------------------------------------------------------------------------------------------------||
	|| void clear();																					Removes all elements from the map.	     					  ||
	||------------------------------------------------------------------------------------------------------------------------------------||
	|| size_type count(const key_type &k);														Returns the number of times 'k' occurs in the map (1 or ||
	||																										0)																		  ||
	||------------------------------------------------------------------------------------------------------------------------------------||
	|| bool empty() const;																			Returns true if the invoking map is empty and false     ||
	||																										otherwise.															  ||
	||------------------------------------------------------------------------------------------------------------------------------------||
	|| iterator end();																				Returns an iterator to the end of the map.	   		  ||
	|| const_iterator end();																																				  ||
	||------------------------------------------------------------------------------------------------------------------------------------||
	|| pair<iterator, iterator> equal_range(const key_type &k);							Returns a pair of iterators that point to the first and ||
	|| pair<const_iterator, const iterator> equal_range(const key_type &k) const; and last elements in the map that contain the specified ||
	||																										key.																	  ||
	||------------------------------------------------------------------------------------------------------------------------------------||
	|| void erase(iterator i);																		Removes the element pointed to by 'i'.					 	  ||
	||------------------------------------------------------------------------------------------------------------------------------------||
	|| iterator erase(iterator start, iterator end);										Removes the elements in the range 'start' to 'end'. 	  ||
	||------------------------------------------------------------------------------------------------------------------------------------||
	||	size_type erase(const key_type &k);														Removes elements that have keys with the value 'k'      ||
	||------------------------------------------------------------------------------------------------------------------------------------||
	|| iterator find(const key_type &k);														Returns an iterator to the specified key. If the key is ||
	|| const_iterator find(const key_type &k);												not found, an iterator to the end of the map is 		  ||
	||																										returned. 															  ||
	||------------------------------------------------------------------------------------------------------------------------------------||
	|| allocator_type get_allocator() const; 													Returns the map's allocator 								     ||
	||------------------------------------------------------------------------------------------------------------------------------------||
	|| iterator insert(iterator i, const value_type &val);								Inserts 'val' at or after the element specified by 'i'. ||
	||																										An iterator to the element is returned.			  		  ||
	||------------------------------------------------------------------------------------------------------------------------------------||
	|| template<class InIter> void insert(InIter start, InIter end);					Inserts a range of elements. 		  							  ||
	||------------------------------------------------------------------------------------------------------------------------------------||
	|| pair<iterator, bool> insert(const value_type &val();								Inserts 'val' into the invoking map. An iterator to the ||
	||																										element is returned. The element is inserted only if it ||
	||																										does not already exist. If the element was inserted, 	  ||
	||																										'pair<iterator, true>' is returned. Otherwise,          ||
	||																										'pair<iterator, false>' is returned.						  ||
	||------------------------------------------------------------------------------------------------------------------------------------||
	|| key_compare key_comp() const;																Returns the function object that compares keys.    	  ||
	||------------------------------------------------------------------------------------------------------------------------------------||
	||	iterator lower_bound(cosnt key_type &k);												Returns an iterator to the first element in the map     ||
	|| const_iterator lower_bound(const key_type &k const);								with key equal to or greater than 'k' 						  ||
	||------------------------------------------------------------------------------------------------------------------------------------||
	|| size_type max_size() const;																Returns the maximum number of elements that the map can ||
	||																										hold.																	  ||
	||------------------------------------------------------------------------------------------------------------------------------------||
	|| reference operator[](const key_type &i);												Returns a reference to the element specified by 'i'. If ||
	||																										this element does not exist, it is inserted.				  ||
	||------------------------------------------------------------------------------------------------------------------------------------||
	|| reverse_iterator rbegin();																	Returns a reverse iterator to the end of the map.       ||
	|| const_reverse_iterator rbegin() const;																															  ||
	||------------------------------------------------------------------------------------------------------------------------------------||
	|| reverse_iterator rend();																	Returns a reverse iterator to the start of the map.	  ||
	|| const_reverse_iterator rend() const;																															  ||
	||------------------------------------------------------------------------------------------------------------------------------------||
	|| size_type size() const;																		Returns the number of elements currently in the map.    ||
	||------------------------------------------------------------------------------------------------------------------------------------||
	|| void swap(map<Key, T, Comp, Allocator>&ob); 											Exchanges the elements stored in the invoking map with  ||
	||																										those in 'ob'.    												  ||
	||------------------------------------------------------------------------------------------------------------------------------------||
	|| iterator upper_bound(const key_type &k);												Returns an iterator to the first element in the map     ||
	|| const_iterator upper_bound(const key_type &k) const;								with the key greater than 'k'. 								  ||
	||------------------------------------------------------------------------------------------------------------------------------------||
	|| value_compare value_comp() const;														Returns the function object that compares values.		  ||
	||------------------------------------------------------------------------------------------------------------------------------------||
																	The 'map' Member Functions

	Key/value pairs are stored in a map as objects of type 'pair', which has this template specificaiton:
*/
	template <class Ktype, class Vtype> struct pair
	{
		typedef Ktype first_type; // type of key
		typedef Vtype second_type; // type of value
		Ktype first; // contains the key
		Vtype second; // contains the value

		// constructors
		pair();
		pair(const Ktype &k, const Vtype &v);
		template<class A, class B> pair(const<A, B> &ob);
	}
/*
	As the comments suggest, the value in 'first' contains the key and the value in 'second' contains the value associated with that key.

	You can construct a pair using either one of 'pair's constructors or by using 'make_pair()', which constructs a 'pair' object based upon
	the types of the data used as parameters. 'make_pair()' is a generic function that has this prototype:
*/
	template<class Ktype, class Vtype> pair<Ktype, Vtype> make_pair(const Ktype &k, const Vtype &v);
/*
	As you can see, it returns a 'pair' object consisting of values of the types specified by 'Ktype' and 'Vtype'. The advantage of
	'make_pair()' is that it allows the types of the objects being stored to be determined automatically by the compiler rather than being
	explicitly specified by you.
*/
