
/*
	Exercise 1.: Explaing why 'namespace' was added to C++.
*/

/*

	My answer:
		-  It was added so the users and subsequent library expansions have a way to create spaces or more of sections of code, that will not
		produce conflicts (name collisions) with already existing types, functions, variables, etc. that have the same names. So namespace
		allows the selection of different declarative areas/sections of code that would be visible and accessible from the point that it is
		being used (mentioned). So it allows two functions or items in general, to have the same names, but they can be accessed under
		different namespaces.

	Official answer:
		-  Namespaces were added to C++ to localize identifier names in order to prevent name collisions. The problem of name collisions was
		becoming severe because of the growth of third-party class libraries.

*/
