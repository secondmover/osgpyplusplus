// This file has been generated by Py++.

#include "boost/python.hpp"
#include "indexing_suite/container_suite.hpp"
#include "indexing_suite/list.hpp"
#include "wrap_osg.h"
#include "_ref_ptr_less__osg_scope_Operation__greater___value_traits.pypp.hpp"
#include "list_less__osg_scope_ref_ptr_less_osg_scope_operation_greater___greater_.pypp.hpp"

namespace bp = boost::python;

void register_list_less__osg_scope_ref_ptr_less_osg_scope_Operation_greater___greater__class(){

    { //::std::list< osg::ref_ptr<osg::Operation> >
        typedef bp::class_< std::list< osg::ref_ptr<osg::Operation> > > list_less__osg_scope_ref_ptr_less_osg_scope_Operation_greater___greater__exposer_t;
        list_less__osg_scope_ref_ptr_less_osg_scope_Operation_greater___greater__exposer_t list_less__osg_scope_ref_ptr_less_osg_scope_Operation_greater___greater__exposer = list_less__osg_scope_ref_ptr_less_osg_scope_Operation_greater___greater__exposer_t( "list_less__osg_scope_ref_ptr_less_osg_scope_Operation_greater___greater_" );
        bp::scope list_less__osg_scope_ref_ptr_less_osg_scope_Operation_greater___greater__scope( list_less__osg_scope_ref_ptr_less_osg_scope_Operation_greater___greater__exposer );
        list_less__osg_scope_ref_ptr_less_osg_scope_Operation_greater___greater__exposer.def( bp::indexing::list_suite< std::list< osg::ref_ptr<osg::Operation> > >() );
    }

}
