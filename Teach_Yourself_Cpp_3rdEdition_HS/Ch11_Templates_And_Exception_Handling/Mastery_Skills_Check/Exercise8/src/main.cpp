/*
	Exercise 8.: Thought question: Give a reason why having 'new' generate an exception is a better approach than having 'new' return null
	on failure.

	My answer:
		- Well with exceptions, it is possible to divert the program execution frlow in different dirrections, based on throw's argruments,
		depending on the source/condition of the malfunction that had occured when invoking 'new'. And thus allowing for more flexible code
		behaviour and handling different kind of values/variables when an , that

	Official answer:
		- If 'new' throws an exception when an allocation error occurs, you can be sure that the error will be handled one way or another-
		even if only by abnormal program termination. In contrast, an allocation failure that is reported by 'new', a return of a null
		pointer can be overlooked if you forget to check for this possibility. The trouble is that when your program attempts to use the null
		pointer, it might work for a while, then behave erratically, and finally crash in unpredictable (and unduplicatable ) ways. This is
		very difficult type of bug to diagnose.
*/
