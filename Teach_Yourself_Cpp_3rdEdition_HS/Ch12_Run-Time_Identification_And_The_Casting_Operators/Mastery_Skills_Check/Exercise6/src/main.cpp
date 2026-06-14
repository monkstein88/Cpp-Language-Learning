/*
	Exercise 6: What type of object is obtained bu the 'typeid' operator?

  My answer:
    - When 'typeid' is called ('typed(obj)'), a reference to a class of type 'type_info' is returned. Which class contains members functions
    that can utilized for comparing between types and obtaining the name of the type. Thus the 'type_info' object describes the object
    defined by 'obj'.

  Official answer:
    - The 'typeid' operator returns a reference to a 'type_info' object.
*/
