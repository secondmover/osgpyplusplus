// This file has been generated by Py++.

#include "boost/python.hpp"
#include "indexing_suite/container_suite.hpp"
#include "indexing_suite/vector.hpp"
#include "wrap_osg.h"
#include "vector_less__double__greater_.pypp.hpp"

namespace bp = boost::python;

void register_vector_less__double__greater__class(){

    { //::std::vector< double >
        typedef bp::class_< std::vector< double > > vector_less__double__greater__exposer_t;
        vector_less__double__greater__exposer_t vector_less__double__greater__exposer = vector_less__double__greater__exposer_t( "vector_less__double__greater_" );
        bp::scope vector_less__double__greater__scope( vector_less__double__greater__exposer );
        vector_less__double__greater__exposer.def( bp::indexing::vector_suite< std::vector< double > >() );
    }

}
