// ***************************************************************************
//
//   Generated automatically by genwrapper.
//   Please DO NOT EDIT this file!
//
// ***************************************************************************

#include <osgIntrospection/ReflectionMacros>
#include <osgIntrospection/TypedMethodInfo>
#include <osgIntrospection/StaticMethodInfo>
#include <osgIntrospection/Attributes>

#include <osg/Vec4>
#include <osgSim/ScalarsToColors>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_OBJECT_REFLECTOR(osgSim::ScalarsToColors)
	I_DeclaringFile("osgSim/ScalarsToColors");
	I_BaseType(osg::Referenced);
	I_Constructor2(IN, float, scalarMin, IN, float, scalarMax,
	               ____ScalarsToColors__float__float,
	               "",
	               "");
	I_Method1(osg::Vec4, getColor, IN, float, scalar,
	          Properties::VIRTUAL,
	          __osg_Vec4__getColor__float,
	          "Get the color for a given scalar value. ",
	          "");
	I_Method0(float, getMin,
	          Properties::NON_VIRTUAL,
	          __float__getMin,
	          "Get the minimum scalar value. ",
	          "");
	I_Method0(float, getMax,
	          Properties::NON_VIRTUAL,
	          __float__getMax,
	          "Get the maximum scalar value. ",
	          "");
	I_SimpleProperty(float, Max, 
	                 __float__getMax, 
	                 0);
	I_SimpleProperty(float, Min, 
	                 __float__getMin, 
	                 0);
END_REFLECTOR

