
/*
	Exercise 2.: On your own, thing about ways in which you can apply run-time polymorphism to simplify the solutions to certain
	types of problems.
*/


/*

	My answer:

	- For example for programs featuring inter-process communication, or, ones that need to respond to different kinds of events,
     but, handle those in somewhat similar if not in uniform fashion - using the approach of 'multiple methods, but a signle
     interface'. So using virtual methods - each class representing a different type of event - the uniform (virtual) method can
     take care of the complexity, with 'self-adjusted' call to the corresponding method. With, run-time polymorphism you can
	  simplify a program that must respond to random events.


	Official answer:

	- NONE


*/
