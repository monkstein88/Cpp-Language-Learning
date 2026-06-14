
/*
	Exercise 2.: What happens when a public member is inherited as public? What happens when it is inherited as private?
*/



/*
	My answer:
		- When a public member (of a base class) is inherited as public (in a derived class), the original member could be accessed/
		called directly upon by the object, after it is being declared, as an ordinary member element (using the '.' operator). So,
		the member can be accessed inside and outside the derived class.
		When a public member (of a base class) is inherited as private (in a derived class) , the original member could not be
		accessed/called upon directly outside of the derived class definition. It can be accessed inside the derived class definition
		(specification) only.

	Official answer:
		- A public member of a base becomes a public member of a derived class when it is inherited as public. When a public member
		of a base is inherited as private, it becomes a private member of the derived class.

*/
