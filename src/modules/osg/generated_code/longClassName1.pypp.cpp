// This file has been generated by Py++.

#include "boost/python.hpp"
#include "indexing_suite/container_suite.hpp"
#include "indexing_suite/map.hpp"
#include "wrap_osg.h"
#include "_pair_less__osg_scope_ref_ptr_less__osg_scope_StateAttribute__greater__comma__unsigned_int__greater___value_traits.pypp.hpp"
#include "longclassname1.pypp.hpp"

namespace bp = boost::python;

void register_longClassName1_class(){

    bp::class_< std::map< std::pair<osg::StateAttribute::Type, unsigned int>, std::pair<osg::ref_ptr<osg::StateAttribute>, unsigned int> > >( "longClassName1" )    
        .def( bp::indexing::map_suite< std::map< std::pair<osg::StateAttribute::Type, unsigned int>, std::pair<osg::ref_ptr<osg::StateAttribute>, unsigned int> > >() );

}
