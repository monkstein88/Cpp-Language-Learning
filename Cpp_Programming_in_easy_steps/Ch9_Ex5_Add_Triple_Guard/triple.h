/*
 * triple.h
 *
 *  Created on: 15.01.2014
 *      Author: Joro
 */

#ifndef TRIPLE_H
#define TRIPLE_H

// Call a preprocessor directive to make the add function available for use in the inline declaration of a "triple" function
#include "add.h"

inline int triple(int x){ return ( add(x, add(x, x)) ); }



#endif /* TRIPLE_H */
