
/*
	Intro 1.: Although 'dynamic_cast' is the most important of the new casting operators, the other three are also valuable to the programmer.
  Their general forms are shown here:
*/
const_cast<target_type> (expr)
reinterpret_cast<target_type> (expr)
static_cast<target_type> (expr)
/*
  Here 'target_type' specifies the target type of the cast and 'expr' is the expression being cast into the new type. In general, these
  casting operators provide a safer, more explicit means of performing certain type conversions than that provided by the C-style cast.

  The 'const_cast' operator is used to explicitly override 'const' and/or 'volatile' in a cast. The target type must be the same as the
  source type except for the alteration of its 'const' or 'volatile' attributes. The most common use of 'const_cast' is to remove
  'const'-ness.

  The 'static_cast' operator performs a non-polymorphic cast. For example, it can be used to cast a base class pointer into into a derived
  class pointer. It can also be used for any standard conversion. No run-time checks are performed.

  The 'reinterpret_cast' operator changes one pointer type into another, fundamentally different, pointer type. It can also change a
  pointer into an integer and n integer into a pointer. A 'reinterpret_cast' should be used for casting inherently incompatible pointer
  types.

  Only 'const_cast' can cast away 'const'-ness. That is, neither 'dynamic_cast', 'static_cast', nor 'reinterpret_cast' can alter the
  'const'-ness of an object.
*/
