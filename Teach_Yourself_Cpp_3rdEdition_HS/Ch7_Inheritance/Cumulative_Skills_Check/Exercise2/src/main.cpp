
/*
	Exercise 2.: As you know from the preceding chapter, most operators overloaded in a base class are available for use in a derived class.
   Which one or ones are not? Can you offer a reason why this is the case?

*/

/*
	My answer:
		- Well one that is not inherited the assignment '=' operator can be inherited - I guess that the reason for that would be that once
        the base class, that holds this overloading, is inherited by a derived class that adds other (its own) elements/members to its
        structure, then the assignment operator would not conform to this new structure.But also the memory size (footpring) of the
        object would have changed - so proper application Maybe also arithmetic operators would not work.

	Official answer:
		- The assignment operators is the only operator that is not inherited. The reason for this
        is easy to understand. Since a derived class will contain members not found in the base
        class, the overloaded = relative to the base has no knowledge of the members added by
        the derived class and, as such, cannot properly copy those new members.
*/
