//
// FILE: interval.cc -- Instantiation of gInterval class
// 
// $Id$
//

#include <assert.h>
#include "interval.imp"
#include "base/glist.imp"
#include "math/double.h"
#include "math/gnumber.h"

template class gInterval<gRational>;
template class gList< gInterval<gRational> >;
template gOutput& operator << (gOutput& output, const gInterval<gRational>& x);

template class gInterval<int>;
template class gList< gInterval<int> >;
template gOutput& operator << (gOutput& output, const gInterval<int>& x);

template class gInterval<double>;
template class gList< gInterval<double> >;
template gOutput& operator << (gOutput& output, const gInterval<double>& x);

template class gInterval<gDouble>;
template class gList< gInterval<gDouble> >;
template gOutput& operator << (gOutput& output, const gInterval<gDouble>& x);

template class gInterval<gNumber>;
template class gList< gInterval<gNumber> >;
template gOutput& operator << (gOutput& output, const gInterval<gNumber>& x);

