// This file has been generated by Py++.

#ifndef _ScreenSettings__value_traits_pypp_hpp_hpp__pyplusplus_wrapper
#define _ScreenSettings__value_traits_pypp_hpp_hpp__pyplusplus_wrapper

namespace boost { namespace python { namespace indexing {

template<>
struct value_traits< osg::GraphicsContext::ScreenSettings >{

    static bool const equality_comparable = true;
    typedef std::equal_to< osg::GraphicsContext::ScreenSettings > equal_to;

    static bool const less_than_comparable = false;
    

    template<typename PythonClass, typename Policy>
    static void visit_container_class(PythonClass &, Policy const &){
        
    }

};

}/*indexing*/ } /*python*/ } /*boost*/

#endif//_ScreenSettings__value_traits_pypp_hpp_hpp__pyplusplus_wrapper
