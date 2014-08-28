// This file has been generated by Py++.

#include "boost/python.hpp"
#include "indexing_suite/container_suite.hpp"
#include "indexing_suite/vector.hpp"
#include "wrap_osg.h"
#include "std_vector_osgobjectptr.pypp.hpp"

namespace bp = boost::python;

void register_std_vector_osgObjectPtr_class(){

    { //::std::vector< osg::Object* >
        typedef bp::class_< std::vector< osg::Object* > > std_vector_osgObjectPtr_exposer_t;
        std_vector_osgObjectPtr_exposer_t std_vector_osgObjectPtr_exposer = std_vector_osgObjectPtr_exposer_t( "std_vector_osgObjectPtr" );
        bp::scope std_vector_osgObjectPtr_scope( std_vector_osgObjectPtr_exposer );
        std_vector_osgObjectPtr_exposer.def( bp::indexing::vector_suite< std::vector< osg::Object* > >::with_policies(bp::return_internal_reference< >()) );
    }

}
