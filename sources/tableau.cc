//#
//# FILE: tableau.cc -- tableau and basis class instantiations
//#
//# $Id$
//#

#include "rational.h"
#include "tableau.imp"

#ifdef __GNUG__
#define TEMPLATE template
#elif defined __BORLANDC__
#define TEMPLATE
#pragma option -Jgd
#else
#error Unsupported compiler type
#endif // __GNUG__, __BORLANDC__

TEMPLATE class Tableau<double>;
TEMPLATE class Tableau<gRational>;

TEMPLATE class Basis<double>;
TEMPLATE class Basis<gRational>;

TEMPLATE class BasisCode<double>;
TEMPLATE class BasisCode<gRational>;

/*
TEMPLATE gOutput & operator<< {gOutput&, const BasisCode<double>&);
TEMPLATE gOutput & operator<< {gOutput&, const BasisCode<gRational>&);
TEMPLATE gOutput & operator<< {gOutput&, const Basis<double>&);
TEMPLATE gOutput & operator<< {gOutput&, const Basis<gRational>&);
*/

