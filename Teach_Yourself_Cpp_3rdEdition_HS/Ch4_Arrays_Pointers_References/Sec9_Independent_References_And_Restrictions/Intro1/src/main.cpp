
/*
	Intro 1.: Although not commonly used, the 'independent reference' is another type of reference that is available
  in C++. An independent reference is a reference variable that in all effects is simply another name for another
  variable. Because references cannot be assigned new values, an independent reference must be initialized when it
  is declared.

  Note: Because indepenndent references are sometimes used, it is important that you know about them. However, most
  programmers feel that there is no need for them and that they acan add confusion to a program. Further, indepenndent
  references exist in C++ largerly because there was no compelling reason to disallow them. But for the most part,
  their use should be avoided.

  There are a number of restrictions that apply to all types of references.
    - You cannot reference another reference.
    - You cannot obtain the address of a reference.
    - You cannot create arrays of references.
    - You cannot reference a bit-field.
  References must be initialized unless they are:
    - members of a class
    - are return values
    - are function parameters

  Remember: References are similar to pointers, but they are not pointers.
*/
