
/*
	Example 3.: Justify the inclusion of the 'explicit' keyword. (in other words, explain why implicit constructor conversions might not be
	desirable feature of C++ in some cases.)

*/


/*
	My answer:
		- Because this implicit conversion, that happens behind the scenes, might have some 'unseen' and unexpected effects if the user is
		not careful. Also there might problems when the automatic conversion to assign new values, might interfare with operator overloading
		for '=' operator. So for example if you have a constructor with a single argument, that is allowed implicit conversions and also for
		the same class you are overloading the '=' operator - there is no certainty as to what would happen because of interpretation
		collision.

	Official answer:
		- One potential problem with implicit constructor conversions is that you might forget that such a conversion is taking place. For
		example, an implicit conversion that takes place in an assignment statement looks a lot like an overloaded assignment operator.
		However, their actions are not necessarily the same. When you are creating classes that others will be using, it might be wise to
		prevent implicit constructor conversions to avoid misconceptions on the part of the users of your classes.

*/
