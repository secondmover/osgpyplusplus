// This file has been generated by Py++.

#include "boost/python.hpp"
#include "indexing_suite/container_suite.hpp"
#include "indexing_suite/vector.hpp"
#include "wrap_osg.h"
#include "vector_less__std_scope_string__greater_.pypp.hpp"

namespace bp = boost::python;

void register_vector_less__std_scope_string__greater__class(){

    { //::std::vector< std::string >
        typedef bp::class_< std::vector< std::string > > vector_less__std_scope_string__greater__exposer_t;
        vector_less__std_scope_string__greater__exposer_t vector_less__std_scope_string__greater__exposer = vector_less__std_scope_string__greater__exposer_t( "vector_less__std_scope_string__greater_" );
        bp::scope vector_less__std_scope_string__greater__scope( vector_less__std_scope_string__greater__exposer );
        vector_less__std_scope_string__greater__exposer.def( bp::indexing::vector_suite< std::vector< std::string > >() );
    }

}
