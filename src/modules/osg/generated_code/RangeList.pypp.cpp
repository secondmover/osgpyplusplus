// This file has been generated by Py++.

#include "boost/python.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "wrap_osg.h"
#include "rangelist.pypp.hpp"

namespace bp = boost::python;

void register_RangeList_class(){

    { //::std::vector< std::pair<float, float> >
        typedef bp::class_< std::vector< std::pair<float, float> > > RangeList_exposer_t;
        RangeList_exposer_t RangeList_exposer = RangeList_exposer_t( "RangeList" );
        bp::scope RangeList_scope( RangeList_exposer );
        //WARNING: the next line of code will not compile, because "::std::pair<float, float>" does not have operator== !
        RangeList_exposer.def( bp::vector_indexing_suite< ::std::vector< std::pair<float, float> > >() );
    }

}
