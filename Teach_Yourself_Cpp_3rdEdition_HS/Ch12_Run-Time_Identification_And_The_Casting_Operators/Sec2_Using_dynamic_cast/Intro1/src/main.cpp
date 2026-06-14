
/*
	Intro 1.: Although C++ still fully supports the traditional casting operator defined by C, C++ adds four new ones. They are
	'dynamic_cast', 'const_cast' , 'reinterpret_cast' and 'static_cast'. We will examine 'dynamic_cast' first because it relates to RTTI.
	The other casting operators are examined in the following section.

	The 'dynamic_cast' operator performs a run-time cast that verifies the validity of a cast. If, at the time 'dynamic_cast' is executed,
	the cast is invalid, the cast fails. The general form of 'dynamic_cast' is shown here:
*/
	dynamic_cast<target_type> (expr)
/*
	Here 'target_type' specifies the target type of the cast and 'expr' is the expression being cast into the new type. The target type must
	be a pointer or reference type, and the expression being cast must evaluate to a pointer or reference. Thus, 'dynamic_cast' can be used
	to cast one type of pointer into another or one type of reference into a another.

	The purpose of 'dynamic_cast' is to perform casts on polymorphic types. For example, given the two polymorphic classes 'B' and 'D', with
	'D' derived from 'B', a 'dynamic_cast' can always cast a 'D*' pointer into a 'B*' pointer. This is because a base pointer can always
	point to a derived object. But a 'dynamic_cast' can cast a 'B*' pointer into a 'D*' pointer only if the object being pointed to actually
	is a 'D' object. In general, 'dynamic_cast' will succeed if the pointer (or reference)  being cast is a pointer (or reference) to either
	an object of the target type or an object derived from the target type. Otherwise, the cast will fail. If the cast fails, 'dynamic_cast'
	evalutates to null if the cast involves pointers. If a 'dynamic_cast' on reference types fails, a 'bad_cast' exception is thrown.

	Here is a simple example. Assume that 'Base' is a polymorphic class and that 'Derived' is derived from 'Base'.
*/
	Base *bp, b_ob;
	Derived *dp, d_ob;

	bp = &d_ob; // base pointer points to 'Derived' object
	dp = dynamic_cast<Derived *>(bp);
	if(dp)
		cout << "Cast OK";
/*
	Here the cast from the base pointer 'bp' to the derived pointer 'dp' works because 'bp' is actually pointing to a 'Derived' object. Thus,
	this fragment displays "Cast OK". But in the next fragment, the cast fails because 'bp' is pointing to a 'Base' object and it is illegal
	to casta base object into a derived object.
*/
	bp = &b_ob; // base pointer points to 'Base' objects
	dp = dynamic_cast<Derived *> (bp);
 	if(!dp)
		cout << "Cast Fials";
/*
	Because the cast fails, this fragment displays "Cast Fails".

	The 'dynamic_cast' operator can sometimes be used instead of 'typeid' in certain cases. For example, again assume that 'Base' is a
	polymorphic base class for 'Derived'. The following fragment will assign 'dp' the address of the object pointed to by 'bp' if and only
	if the object is really a 'Derived' object.
*/
	Base *bp;
	Derived *dp;
	// ...
	if(typeid(*bp) == typeid(Derived))
		dp = (Derived *) bp;
/*
	In this case, a C-style cast is used to actually perform the cast. This is safe because the 'if' statement checks the legality of the
	cast using 'typeid' before the cast actually occurs. However a better way to accomplish this is to replace the 'typeid' operators and
	'if' statements with this 'dynamic_cast':
*/
	dp = dynamic_cast<Derived *> (bp);
/*
	Because 'dynamic_cast' succeeds only if the object being cast is either already an object of the target type or an object derived from
	the target type, after this statement executes 'dp' will contain either a null or a pointer to an object of type 'Derived'. Since
	'dynamic_cast' succeeds only if the cast is legal, it can simplify the logic in certain situations.
*/
