
/*
	Intro 1.: In addition to the formatting flags, there are three member functions defined by 'ios' that set these format
   parameters: the field width, the precision, and the fill character. These are 'width()', 'precision()' and 'fill()',
   respectively.

   By default, when a value is output, it occupies only as much space as the number of characters it takes to display it. However,
   you can specify a minimum field width by using the 'width()' function. Its prototype is shown here:

   streamsize width(streamsize w);

   Here 'w' becomes the field width, and the previous field width is returned. The 'streamsize' type is defined by '<iostream>' as
   some form of integer. In some implementations, each time an output operation is performed, the field width returns to its
   default setting, so it might be necessary to set the minimum field width before each output statement.

   After you set the minimum field width, when a value uses less than the specified width, the field is padded with the current
   fil character (the space, by default) so that the field width is reached. However, keep in mind that if the size of the output
   value exceeds the minimum field width, the field will be overrun. No values are truncated.

   By default, six digits of precision are used. You can set this number by using the 'precision()' function. Its prototype is
   shown here:

   streamsize precision(streamsize p)

   Here the precision is set to 'p' and the old value is returned.

   By default, when a field needs to be filled, it is filled with spaces. You can specify the fill character by using the 'fill()'
   function. Its prototype is shown here:

   char fill(char ch);

   After a call to 'fill()', 'ch' becomes the new fill character, and the old one is returned.
*/
