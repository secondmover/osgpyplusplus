// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgfx.h"
#include "wrap_referenced.h"
#include "scribe.pypp.hpp"

namespace bp = boost::python;

struct Scribe_wrapper : osgFX::Scribe, bp::wrapper< osgFX::Scribe > {

    Scribe_wrapper( )
    : osgFX::Scribe( )
      , bp::wrapper< osgFX::Scribe >(){
        // null constructor
    
    }

    virtual void accept( ::osg::NodeVisitor & nv ) {
        if( bp::override func_accept = this->get_override( "accept" ) )
            func_accept( boost::ref(nv) );
        else{
            this->osgFX::Scribe::accept( boost::ref(nv) );
        }
    }
    
    void default_accept( ::osg::NodeVisitor & nv ) {
        osgFX::Scribe::accept( boost::ref(nv) );
    }

    virtual char const * className(  ) const  {
        if( bp::override func_className = this->get_override( "className" ) )
            return func_className(  );
        else{
            return this->osgFX::Scribe::className(  );
        }
    }
    
    char const * default_className(  ) const  {
        return osgFX::Scribe::className( );
    }

    virtual ::osg::Object * clone( ::osg::CopyOp const & copyop ) const  {
        if( bp::override func_clone = this->get_override( "clone" ) )
            return func_clone( boost::ref(copyop) );
        else{
            return this->osgFX::Scribe::clone( boost::ref(copyop) );
        }
    }
    
    ::osg::Object * default_clone( ::osg::CopyOp const & copyop ) const  {
        return osgFX::Scribe::clone( boost::ref(copyop) );
    }

    virtual ::osg::Object * cloneType(  ) const  {
        if( bp::override func_cloneType = this->get_override( "cloneType" ) )
            return func_cloneType(  );
        else{
            return this->osgFX::Scribe::cloneType(  );
        }
    }
    
    ::osg::Object * default_cloneType(  ) const  {
        return osgFX::Scribe::cloneType( );
    }

    virtual char const * effectAuthor(  ) const  {
        if( bp::override func_effectAuthor = this->get_override( "effectAuthor" ) )
            return func_effectAuthor(  );
        else{
            return this->osgFX::Scribe::effectAuthor(  );
        }
    }
    
    char const * default_effectAuthor(  ) const  {
        return osgFX::Scribe::effectAuthor( );
    }

    virtual char const * effectDescription(  ) const  {
        if( bp::override func_effectDescription = this->get_override( "effectDescription" ) )
            return func_effectDescription(  );
        else{
            return this->osgFX::Scribe::effectDescription(  );
        }
    }
    
    char const * default_effectDescription(  ) const  {
        return osgFX::Scribe::effectDescription( );
    }

    virtual char const * effectName(  ) const  {
        if( bp::override func_effectName = this->get_override( "effectName" ) )
            return func_effectName(  );
        else{
            return this->osgFX::Scribe::effectName(  );
        }
    }
    
    char const * default_effectName(  ) const  {
        return osgFX::Scribe::effectName( );
    }

    virtual bool isSameKindAs( ::osg::Object const * obj ) const  {
        if( bp::override func_isSameKindAs = this->get_override( "isSameKindAs" ) )
            return func_isSameKindAs( boost::python::ptr(obj) );
        else{
            return this->osgFX::Scribe::isSameKindAs( boost::python::ptr(obj) );
        }
    }
    
    bool default_isSameKindAs( ::osg::Object const * obj ) const  {
        return osgFX::Scribe::isSameKindAs( boost::python::ptr(obj) );
    }

    virtual char const * libraryName(  ) const  {
        if( bp::override func_libraryName = this->get_override( "libraryName" ) )
            return func_libraryName(  );
        else{
            return this->osgFX::Scribe::libraryName(  );
        }
    }
    
    char const * default_libraryName(  ) const  {
        return osgFX::Scribe::libraryName( );
    }

    virtual bool addChild( ::osg::Node * child ) {
        if( bp::override func_addChild = this->get_override( "addChild" ) )
            return func_addChild( boost::python::ptr(child) );
        else{
            return this->osg::Group::addChild( boost::python::ptr(child) );
        }
    }
    
    bool default_addChild( ::osg::Node * child ) {
        return osg::Group::addChild( boost::python::ptr(child) );
    }

    virtual ::osg::Camera * asCamera(  ) {
        if( bp::override func_asCamera = this->get_override( "asCamera" ) )
            return func_asCamera(  );
        else{
            return this->osg::Node::asCamera(  );
        }
    }
    
    ::osg::Camera * default_asCamera(  ) {
        return osg::Node::asCamera( );
    }

    virtual ::osg::Camera const * asCamera(  ) const  {
        if( bp::override func_asCamera = this->get_override( "asCamera" ) )
            return func_asCamera(  );
        else{
            return this->osg::Node::asCamera(  );
        }
    }
    
    ::osg::Camera const * default_asCamera(  ) const  {
        return osg::Node::asCamera( );
    }

    virtual ::osg::Geode * asGeode(  ) {
        if( bp::override func_asGeode = this->get_override( "asGeode" ) )
            return func_asGeode(  );
        else{
            return this->osg::Node::asGeode(  );
        }
    }
    
    ::osg::Geode * default_asGeode(  ) {
        return osg::Node::asGeode( );
    }

    virtual ::osg::Geode const * asGeode(  ) const  {
        if( bp::override func_asGeode = this->get_override( "asGeode" ) )
            return func_asGeode(  );
        else{
            return this->osg::Node::asGeode(  );
        }
    }
    
    ::osg::Geode const * default_asGeode(  ) const  {
        return osg::Node::asGeode( );
    }

    virtual ::osg::Group * asGroup(  ) {
        if( bp::override func_asGroup = this->get_override( "asGroup" ) )
            return func_asGroup(  );
        else{
            return this->osg::Group::asGroup(  );
        }
    }
    
    ::osg::Group * default_asGroup(  ) {
        return osg::Group::asGroup( );
    }

    virtual ::osg::Group const * asGroup(  ) const  {
        if( bp::override func_asGroup = this->get_override( "asGroup" ) )
            return func_asGroup(  );
        else{
            return this->osg::Group::asGroup(  );
        }
    }
    
    ::osg::Group const * default_asGroup(  ) const  {
        return osg::Group::asGroup( );
    }

    virtual ::osg::Switch * asSwitch(  ) {
        if( bp::override func_asSwitch = this->get_override( "asSwitch" ) )
            return func_asSwitch(  );
        else{
            return this->osg::Node::asSwitch(  );
        }
    }
    
    ::osg::Switch * default_asSwitch(  ) {
        return osg::Node::asSwitch( );
    }

    virtual ::osg::Switch const * asSwitch(  ) const  {
        if( bp::override func_asSwitch = this->get_override( "asSwitch" ) )
            return func_asSwitch(  );
        else{
            return this->osg::Node::asSwitch(  );
        }
    }
    
    ::osg::Switch const * default_asSwitch(  ) const  {
        return osg::Node::asSwitch( );
    }

    virtual ::osg::Transform * asTransform(  ) {
        if( bp::override func_asTransform = this->get_override( "asTransform" ) )
            return func_asTransform(  );
        else{
            return this->osg::Node::asTransform(  );
        }
    }
    
    ::osg::Transform * default_asTransform(  ) {
        return osg::Node::asTransform( );
    }

    virtual ::osg::Transform const * asTransform(  ) const  {
        if( bp::override func_asTransform = this->get_override( "asTransform" ) )
            return func_asTransform(  );
        else{
            return this->osg::Node::asTransform(  );
        }
    }
    
    ::osg::Transform const * default_asTransform(  ) const  {
        return osg::Node::asTransform( );
    }

    virtual void ascend( ::osg::NodeVisitor & nv ) {
        if( bp::override func_ascend = this->get_override( "ascend" ) )
            func_ascend( boost::ref(nv) );
        else{
            this->osg::Node::ascend( boost::ref(nv) );
        }
    }
    
    void default_ascend( ::osg::NodeVisitor & nv ) {
        osg::Node::ascend( boost::ref(nv) );
    }

    virtual ::osg::BoundingSphere computeBound(  ) const  {
        if( bp::override func_computeBound = this->get_override( "computeBound" ) )
            return func_computeBound(  );
        else{
            return this->osg::Group::computeBound(  );
        }
    }
    
    ::osg::BoundingSphere default_computeBound(  ) const  {
        return osg::Group::computeBound( );
    }

    virtual void computeDataVariance(  ) {
        if( bp::override func_computeDataVariance = this->get_override( "computeDataVariance" ) )
            func_computeDataVariance(  );
        else{
            this->osg::Object::computeDataVariance(  );
        }
    }
    
    void default_computeDataVariance(  ) {
        osg::Object::computeDataVariance( );
    }

    virtual ::osg::Referenced * getUserData(  ) {
        if( bp::override func_getUserData = this->get_override( "getUserData" ) )
            return func_getUserData(  );
        else{
            return this->osg::Object::getUserData(  );
        }
    }
    
    ::osg::Referenced * default_getUserData(  ) {
        return osg::Object::getUserData( );
    }

    virtual ::osg::Referenced const * getUserData(  ) const  {
        if( bp::override func_getUserData = this->get_override( "getUserData" ) )
            return func_getUserData(  );
        else{
            return this->osg::Object::getUserData(  );
        }
    }
    
    ::osg::Referenced const * default_getUserData(  ) const  {
        return osg::Object::getUserData( );
    }

    virtual bool insertChild( unsigned int index, ::osg::Node * child ) {
        if( bp::override func_insertChild = this->get_override( "insertChild" ) )
            return func_insertChild( index, boost::python::ptr(child) );
        else{
            return this->osg::Group::insertChild( index, boost::python::ptr(child) );
        }
    }
    
    bool default_insertChild( unsigned int index, ::osg::Node * child ) {
        return osg::Group::insertChild( index, boost::python::ptr(child) );
    }

    virtual bool removeChildren( unsigned int pos, unsigned int numChildrenToRemove ) {
        if( bp::override func_removeChildren = this->get_override( "removeChildren" ) )
            return func_removeChildren( pos, numChildrenToRemove );
        else{
            return this->osg::Group::removeChildren( pos, numChildrenToRemove );
        }
    }
    
    bool default_removeChildren( unsigned int pos, unsigned int numChildrenToRemove ) {
        return osg::Group::removeChildren( pos, numChildrenToRemove );
    }

    virtual bool replaceChild( ::osg::Node * origChild, ::osg::Node * newChild ) {
        if( bp::override func_replaceChild = this->get_override( "replaceChild" ) )
            return func_replaceChild( boost::python::ptr(origChild), boost::python::ptr(newChild) );
        else{
            return this->osg::Group::replaceChild( boost::python::ptr(origChild), boost::python::ptr(newChild) );
        }
    }
    
    bool default_replaceChild( ::osg::Node * origChild, ::osg::Node * newChild ) {
        return osg::Group::replaceChild( boost::python::ptr(origChild), boost::python::ptr(newChild) );
    }

    virtual void resizeGLObjectBuffers( unsigned int maxSize ) {
        if( bp::override func_resizeGLObjectBuffers = this->get_override( "resizeGLObjectBuffers" ) )
            func_resizeGLObjectBuffers( maxSize );
        else{
            this->osg::Group::resizeGLObjectBuffers( maxSize );
        }
    }
    
    void default_resizeGLObjectBuffers( unsigned int maxSize ) {
        osg::Group::resizeGLObjectBuffers( maxSize );
    }

    virtual bool setChild( unsigned int i, ::osg::Node * node ) {
        if( bp::override func_setChild = this->get_override( "setChild" ) )
            return func_setChild( i, boost::python::ptr(node) );
        else{
            return this->osg::Group::setChild( i, boost::python::ptr(node) );
        }
    }
    
    bool default_setChild( unsigned int i, ::osg::Node * node ) {
        return osg::Group::setChild( i, boost::python::ptr(node) );
    }

    virtual void setName( ::std::string const & name ) {
        if( bp::override func_setName = this->get_override( "setName" ) )
            func_setName( name );
        else{
            this->osg::Object::setName( name );
        }
    }
    
    void default_setName( ::std::string const & name ) {
        osg::Object::setName( name );
    }

    virtual void setThreadSafeRefUnref( bool threadSafe ) {
        if( bp::override func_setThreadSafeRefUnref = this->get_override( "setThreadSafeRefUnref" ) )
            func_setThreadSafeRefUnref( threadSafe );
        else{
            this->osg::Group::setThreadSafeRefUnref( threadSafe );
        }
    }
    
    void default_setThreadSafeRefUnref( bool threadSafe ) {
        osg::Group::setThreadSafeRefUnref( threadSafe );
    }

    virtual void setUpDemo(  ) {
        if( bp::override func_setUpDemo = this->get_override( "setUpDemo" ) )
            func_setUpDemo(  );
        else{
            this->osgFX::Effect::setUpDemo(  );
        }
    }
    
    void default_setUpDemo(  ) {
        osgFX::Effect::setUpDemo( );
    }

    virtual void setUserData( ::osg::Referenced * obj ) {
        if( bp::override func_setUserData = this->get_override( "setUserData" ) )
            func_setUserData( boost::python::ptr(obj) );
        else{
            this->osg::Object::setUserData( boost::python::ptr(obj) );
        }
    }
    
    void default_setUserData( ::osg::Referenced * obj ) {
        osg::Object::setUserData( boost::python::ptr(obj) );
    }

    virtual void traverse( ::osg::NodeVisitor & nv ) {
        if( bp::override func_traverse = this->get_override( "traverse" ) )
            func_traverse( boost::ref(nv) );
        else{
            this->osgFX::Effect::traverse( boost::ref(nv) );
        }
    }
    
    void default_traverse( ::osg::NodeVisitor & nv ) {
        osgFX::Effect::traverse( boost::ref(nv) );
    }

};

void register_Scribe_class(){

    bp::class_< Scribe_wrapper, bp::bases< osgFX::Effect >, osg::ref_ptr< Scribe_wrapper >, boost::noncopyable >( "Scribe", "\n     This is a two-passes effect; the first pass renders the subgraph as usual\n     while the second pass switches to wireframe mode, sets up lighting and\n     material to obtain a fixed (user-defined) color and then renders the subgraph.\n     This effect uses the PolygonOffset attribute to avoid Z-fighting, so it\n     requires at least OpenGL version 1.1.\n", bp::no_init )    
        .def( bp::init< >("\n     This is a two-passes effect; the first pass renders the subgraph as usual\n     while the second pass switches to wireframe mode, sets up lighting and\n     material to obtain a fixed (user-defined) color and then renders the subgraph.\n     This effect uses the PolygonOffset attribute to avoid Z-fighting, so it\n     requires at least OpenGL version 1.1.\n") )    
        .def( 
            "accept"
            , (void ( ::osgFX::Scribe::* )( ::osg::NodeVisitor & ))(&::osgFX::Scribe::accept)
            , (void ( Scribe_wrapper::* )( ::osg::NodeVisitor & ))(&Scribe_wrapper::default_accept)
            , ( bp::arg("nv") ) )    
        .def( 
            "className"
            , (char const * ( ::osgFX::Scribe::* )(  )const)(&::osgFX::Scribe::className)
            , (char const * ( Scribe_wrapper::* )(  )const)(&Scribe_wrapper::default_className) )    
        .def( 
            "clone"
            , (::osg::Object * ( ::osgFX::Scribe::* )( ::osg::CopyOp const & )const)(&::osgFX::Scribe::clone)
            , (::osg::Object * ( Scribe_wrapper::* )( ::osg::CopyOp const & )const)(&Scribe_wrapper::default_clone)
            , ( bp::arg("copyop") )
            , bp::return_value_policy< bp::reference_existing_object >() )    
        .def( 
            "cloneType"
            , (::osg::Object * ( ::osgFX::Scribe::* )(  )const)(&::osgFX::Scribe::cloneType)
            , (::osg::Object * ( Scribe_wrapper::* )(  )const)(&Scribe_wrapper::default_cloneType)
            , bp::return_value_policy< bp::reference_existing_object >() )    
        .def( 
            "effectAuthor"
            , (char const * ( ::osgFX::Scribe::* )(  )const)(&::osgFX::Scribe::effectAuthor)
            , (char const * ( Scribe_wrapper::* )(  )const)(&Scribe_wrapper::default_effectAuthor) )    
        .def( 
            "effectDescription"
            , (char const * ( ::osgFX::Scribe::* )(  )const)(&::osgFX::Scribe::effectDescription)
            , (char const * ( Scribe_wrapper::* )(  )const)(&Scribe_wrapper::default_effectDescription) )    
        .def( 
            "effectName"
            , (char const * ( ::osgFX::Scribe::* )(  )const)(&::osgFX::Scribe::effectName)
            , (char const * ( Scribe_wrapper::* )(  )const)(&Scribe_wrapper::default_effectName) )    
        .def( 
            "getWireframeColor"
            , (::osg::Vec4 const & ( ::osgFX::Scribe::* )(  )const)( &::osgFX::Scribe::getWireframeColor )
            , bp::return_internal_reference< >() )    
        .def( 
            "getWireframeLineWidth"
            , (float ( ::osgFX::Scribe::* )(  )const)( &::osgFX::Scribe::getWireframeLineWidth ) )    
        .def( 
            "isSameKindAs"
            , (bool ( ::osgFX::Scribe::* )( ::osg::Object const * )const)(&::osgFX::Scribe::isSameKindAs)
            , (bool ( Scribe_wrapper::* )( ::osg::Object const * )const)(&Scribe_wrapper::default_isSameKindAs)
            , ( bp::arg("obj") ) )    
        .def( 
            "libraryName"
            , (char const * ( ::osgFX::Scribe::* )(  )const)(&::osgFX::Scribe::libraryName)
            , (char const * ( Scribe_wrapper::* )(  )const)(&Scribe_wrapper::default_libraryName) )    
        .def( 
            "setWireframeColor"
            , (void ( ::osgFX::Scribe::* )( ::osg::Vec4 const & ))( &::osgFX::Scribe::setWireframeColor )
            , ( bp::arg("color") ) )    
        .def( 
            "setWireframeLineWidth"
            , (void ( ::osgFX::Scribe::* )( float ))( &::osgFX::Scribe::setWireframeLineWidth )
            , ( bp::arg("w") ) )    
        .def( 
            "setUpDemo"
            , (void ( ::osgFX::Effect::* )(  ))(&::osgFX::Effect::setUpDemo)
            , (void ( Scribe_wrapper::* )(  ))(&Scribe_wrapper::default_setUpDemo) )    
        .def( 
            "traverse"
            , (void ( ::osgFX::Effect::* )( ::osg::NodeVisitor & ))(&::osgFX::Effect::traverse)
            , (void ( Scribe_wrapper::* )( ::osg::NodeVisitor & ))(&Scribe_wrapper::default_traverse)
            , ( bp::arg("nv") ) );

}
