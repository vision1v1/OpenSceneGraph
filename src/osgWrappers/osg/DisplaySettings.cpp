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

#include <osg/ArgumentParser>
#include <osg/DisplaySettings>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_ENUM_REFLECTOR(osg::DisplaySettings::DisplayType)
	I_DeclaringFile("osg/DisplaySettings");
	I_EnumLabel(osg::DisplaySettings::MONITOR);
	I_EnumLabel(osg::DisplaySettings::POWERWALL);
	I_EnumLabel(osg::DisplaySettings::REALITY_CENTER);
	I_EnumLabel(osg::DisplaySettings::HEAD_MOUNTED_DISPLAY);
END_REFLECTOR

BEGIN_ENUM_REFLECTOR(osg::DisplaySettings::StereoMode)
	I_DeclaringFile("osg/DisplaySettings");
	I_EnumLabel(osg::DisplaySettings::QUAD_BUFFER);
	I_EnumLabel(osg::DisplaySettings::ANAGLYPHIC);
	I_EnumLabel(osg::DisplaySettings::HORIZONTAL_SPLIT);
	I_EnumLabel(osg::DisplaySettings::VERTICAL_SPLIT);
	I_EnumLabel(osg::DisplaySettings::LEFT_EYE);
	I_EnumLabel(osg::DisplaySettings::RIGHT_EYE);
	I_EnumLabel(osg::DisplaySettings::HORIZONTAL_INTERLACE);
	I_EnumLabel(osg::DisplaySettings::VERTICAL_INTERLACE);
END_REFLECTOR

BEGIN_ENUM_REFLECTOR(osg::DisplaySettings::SplitStereoHorizontalEyeMapping)
	I_DeclaringFile("osg/DisplaySettings");
	I_EnumLabel(osg::DisplaySettings::LEFT_EYE_LEFT_VIEWPORT);
	I_EnumLabel(osg::DisplaySettings::LEFT_EYE_RIGHT_VIEWPORT);
END_REFLECTOR

BEGIN_ENUM_REFLECTOR(osg::DisplaySettings::SplitStereoVerticalEyeMapping)
	I_DeclaringFile("osg/DisplaySettings");
	I_EnumLabel(osg::DisplaySettings::LEFT_EYE_TOP_VIEWPORT);
	I_EnumLabel(osg::DisplaySettings::LEFT_EYE_BOTTOM_VIEWPORT);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osg::DisplaySettings)
	I_DeclaringFile("osg/DisplaySettings");
	I_BaseType(osg::Referenced);
	I_Constructor0(____DisplaySettings,
	               "",
	               "");
	I_Constructor1(IN, osg::ArgumentParser &, arguments,
	               Properties::NON_EXPLICIT,
	               ____DisplaySettings__ArgumentParser_R1,
	               "",
	               "");
	I_Constructor1(IN, const osg::DisplaySettings &, vs,
	               Properties::NON_EXPLICIT,
	               ____DisplaySettings__C5_DisplaySettings_R1,
	               "",
	               "");
	I_Method1(void, setDisplaySettings, IN, const osg::DisplaySettings &, vs,
	          Properties::NON_VIRTUAL,
	          __void__setDisplaySettings__C5_DisplaySettings_R1,
	          "",
	          "");
	I_Method1(void, merge, IN, const osg::DisplaySettings &, vs,
	          Properties::NON_VIRTUAL,
	          __void__merge__C5_DisplaySettings_R1,
	          "",
	          "");
	I_Method0(void, setDefaults,
	          Properties::NON_VIRTUAL,
	          __void__setDefaults,
	          "",
	          "");
	I_Method0(void, readEnvironmentalVariables,
	          Properties::NON_VIRTUAL,
	          __void__readEnvironmentalVariables,
	          "read the environmental variables. ",
	          "");
	I_Method1(void, readCommandLine, IN, osg::ArgumentParser &, arguments,
	          Properties::NON_VIRTUAL,
	          __void__readCommandLine__ArgumentParser_R1,
	          "read the commandline arguments. ",
	          "");
	I_Method1(void, setDisplayType, IN, osg::DisplaySettings::DisplayType, type,
	          Properties::NON_VIRTUAL,
	          __void__setDisplayType__DisplayType,
	          "",
	          "");
	I_Method0(osg::DisplaySettings::DisplayType, getDisplayType,
	          Properties::NON_VIRTUAL,
	          __DisplayType__getDisplayType,
	          "",
	          "");
	I_Method1(void, setStereo, IN, bool, on,
	          Properties::NON_VIRTUAL,
	          __void__setStereo__bool,
	          "",
	          "");
	I_Method0(bool, getStereo,
	          Properties::NON_VIRTUAL,
	          __bool__getStereo,
	          "",
	          "");
	I_Method1(void, setStereoMode, IN, osg::DisplaySettings::StereoMode, mode,
	          Properties::NON_VIRTUAL,
	          __void__setStereoMode__StereoMode,
	          "",
	          "");
	I_Method0(osg::DisplaySettings::StereoMode, getStereoMode,
	          Properties::NON_VIRTUAL,
	          __StereoMode__getStereoMode,
	          "",
	          "");
	I_Method1(void, setEyeSeparation, IN, float, eyeSeparation,
	          Properties::NON_VIRTUAL,
	          __void__setEyeSeparation__float,
	          "",
	          "");
	I_Method0(float, getEyeSeparation,
	          Properties::NON_VIRTUAL,
	          __float__getEyeSeparation,
	          "",
	          "");
	I_Method1(void, setSplitStereoHorizontalEyeMapping, IN, osg::DisplaySettings::SplitStereoHorizontalEyeMapping, m,
	          Properties::NON_VIRTUAL,
	          __void__setSplitStereoHorizontalEyeMapping__SplitStereoHorizontalEyeMapping,
	          "",
	          "");
	I_Method0(osg::DisplaySettings::SplitStereoHorizontalEyeMapping, getSplitStereoHorizontalEyeMapping,
	          Properties::NON_VIRTUAL,
	          __SplitStereoHorizontalEyeMapping__getSplitStereoHorizontalEyeMapping,
	          "",
	          "");
	I_Method1(void, setSplitStereoHorizontalSeparation, IN, int, s,
	          Properties::NON_VIRTUAL,
	          __void__setSplitStereoHorizontalSeparation__int,
	          "",
	          "");
	I_Method0(int, getSplitStereoHorizontalSeparation,
	          Properties::NON_VIRTUAL,
	          __int__getSplitStereoHorizontalSeparation,
	          "",
	          "");
	I_Method1(void, setSplitStereoVerticalEyeMapping, IN, osg::DisplaySettings::SplitStereoVerticalEyeMapping, m,
	          Properties::NON_VIRTUAL,
	          __void__setSplitStereoVerticalEyeMapping__SplitStereoVerticalEyeMapping,
	          "",
	          "");
	I_Method0(osg::DisplaySettings::SplitStereoVerticalEyeMapping, getSplitStereoVerticalEyeMapping,
	          Properties::NON_VIRTUAL,
	          __SplitStereoVerticalEyeMapping__getSplitStereoVerticalEyeMapping,
	          "",
	          "");
	I_Method1(void, setSplitStereoVerticalSeparation, IN, int, s,
	          Properties::NON_VIRTUAL,
	          __void__setSplitStereoVerticalSeparation__int,
	          "",
	          "");
	I_Method0(int, getSplitStereoVerticalSeparation,
	          Properties::NON_VIRTUAL,
	          __int__getSplitStereoVerticalSeparation,
	          "",
	          "");
	I_Method1(void, setSplitStereoAutoAjustAspectRatio, IN, bool, flag,
	          Properties::NON_VIRTUAL,
	          __void__setSplitStereoAutoAjustAspectRatio__bool,
	          "",
	          "");
	I_Method0(bool, getSplitStereoAutoAjustAspectRatio,
	          Properties::NON_VIRTUAL,
	          __bool__getSplitStereoAutoAjustAspectRatio,
	          "",
	          "");
	I_Method1(void, setScreenWidth, IN, float, width,
	          Properties::NON_VIRTUAL,
	          __void__setScreenWidth__float,
	          "",
	          "");
	I_Method0(float, getScreenWidth,
	          Properties::NON_VIRTUAL,
	          __float__getScreenWidth,
	          "",
	          "");
	I_Method1(void, setScreenHeight, IN, float, height,
	          Properties::NON_VIRTUAL,
	          __void__setScreenHeight__float,
	          "",
	          "");
	I_Method0(float, getScreenHeight,
	          Properties::NON_VIRTUAL,
	          __float__getScreenHeight,
	          "",
	          "");
	I_Method1(void, setScreenDistance, IN, float, distance,
	          Properties::NON_VIRTUAL,
	          __void__setScreenDistance__float,
	          "",
	          "");
	I_Method0(float, getScreenDistance,
	          Properties::NON_VIRTUAL,
	          __float__getScreenDistance,
	          "",
	          "");
	I_Method1(void, setDoubleBuffer, IN, bool, flag,
	          Properties::NON_VIRTUAL,
	          __void__setDoubleBuffer__bool,
	          "",
	          "");
	I_Method0(bool, getDoubleBuffer,
	          Properties::NON_VIRTUAL,
	          __bool__getDoubleBuffer,
	          "",
	          "");
	I_Method1(void, setRGB, IN, bool, flag,
	          Properties::NON_VIRTUAL,
	          __void__setRGB__bool,
	          "",
	          "");
	I_Method0(bool, getRGB,
	          Properties::NON_VIRTUAL,
	          __bool__getRGB,
	          "",
	          "");
	I_Method1(void, setDepthBuffer, IN, bool, flag,
	          Properties::NON_VIRTUAL,
	          __void__setDepthBuffer__bool,
	          "",
	          "");
	I_Method0(bool, getDepthBuffer,
	          Properties::NON_VIRTUAL,
	          __bool__getDepthBuffer,
	          "",
	          "");
	I_Method1(void, setMinimumNumAlphaBits, IN, unsigned int, bits,
	          Properties::NON_VIRTUAL,
	          __void__setMinimumNumAlphaBits__unsigned_int,
	          "",
	          "");
	I_Method0(unsigned int, getMinimumNumAlphaBits,
	          Properties::NON_VIRTUAL,
	          __unsigned_int__getMinimumNumAlphaBits,
	          "",
	          "");
	I_Method0(bool, getAlphaBuffer,
	          Properties::NON_VIRTUAL,
	          __bool__getAlphaBuffer,
	          "",
	          "");
	I_Method1(void, setMinimumNumStencilBits, IN, unsigned int, bits,
	          Properties::NON_VIRTUAL,
	          __void__setMinimumNumStencilBits__unsigned_int,
	          "",
	          "");
	I_Method0(unsigned int, getMinimumNumStencilBits,
	          Properties::NON_VIRTUAL,
	          __unsigned_int__getMinimumNumStencilBits,
	          "",
	          "");
	I_Method0(bool, getStencilBuffer,
	          Properties::NON_VIRTUAL,
	          __bool__getStencilBuffer,
	          "",
	          "");
	I_Method4(void, setMinimumNumAccumBits, IN, unsigned int, red, IN, unsigned int, green, IN, unsigned int, blue, IN, unsigned int, alpha,
	          Properties::NON_VIRTUAL,
	          __void__setMinimumNumAccumBits__unsigned_int__unsigned_int__unsigned_int__unsigned_int,
	          "",
	          "");
	I_Method0(unsigned int, getMinimumNumAccumRedBits,
	          Properties::NON_VIRTUAL,
	          __unsigned_int__getMinimumNumAccumRedBits,
	          "",
	          "");
	I_Method0(unsigned int, getMinimumNumAccumGreenBits,
	          Properties::NON_VIRTUAL,
	          __unsigned_int__getMinimumNumAccumGreenBits,
	          "",
	          "");
	I_Method0(unsigned int, getMinimumNumAccumBlueBits,
	          Properties::NON_VIRTUAL,
	          __unsigned_int__getMinimumNumAccumBlueBits,
	          "",
	          "");
	I_Method0(unsigned int, getMinimumNumAccumAlphaBits,
	          Properties::NON_VIRTUAL,
	          __unsigned_int__getMinimumNumAccumAlphaBits,
	          "",
	          "");
	I_Method0(bool, getAccumBuffer,
	          Properties::NON_VIRTUAL,
	          __bool__getAccumBuffer,
	          "",
	          "");
	I_Method1(void, setMaxNumberOfGraphicsContexts, IN, unsigned int, num,
	          Properties::NON_VIRTUAL,
	          __void__setMaxNumberOfGraphicsContexts__unsigned_int,
	          "",
	          "");
	I_Method0(unsigned int, getMaxNumberOfGraphicsContexts,
	          Properties::NON_VIRTUAL,
	          __unsigned_int__getMaxNumberOfGraphicsContexts,
	          "",
	          "");
	I_Method1(void, setNumMultiSamples, IN, unsigned int, samples,
	          Properties::NON_VIRTUAL,
	          __void__setNumMultiSamples__unsigned_int,
	          "",
	          "");
	I_Method0(unsigned int, getNumMultiSamples,
	          Properties::NON_VIRTUAL,
	          __unsigned_int__getNumMultiSamples,
	          "",
	          "");
	I_Method0(bool, getMultiSamples,
	          Properties::NON_VIRTUAL,
	          __bool__getMultiSamples,
	          "",
	          "");
	I_StaticMethod0(osg::DisplaySettings *, instance,
	                __DisplaySettings_P1__instance_S,
	                "Maintain a DisplaySettings singleton for objects to query at runtime. ",
	                "");
	I_SimpleProperty(bool, AccumBuffer, 
	                 __bool__getAccumBuffer, 
	                 0);
	I_SimpleProperty(bool, AlphaBuffer, 
	                 __bool__getAlphaBuffer, 
	                 0);
	I_SimpleProperty(bool, DepthBuffer, 
	                 __bool__getDepthBuffer, 
	                 __void__setDepthBuffer__bool);
	I_SimpleProperty(const osg::DisplaySettings &, DisplaySettings, 
	                 0, 
	                 __void__setDisplaySettings__C5_DisplaySettings_R1);
	I_SimpleProperty(osg::DisplaySettings::DisplayType, DisplayType, 
	                 __DisplayType__getDisplayType, 
	                 __void__setDisplayType__DisplayType);
	I_SimpleProperty(bool, DoubleBuffer, 
	                 __bool__getDoubleBuffer, 
	                 __void__setDoubleBuffer__bool);
	I_SimpleProperty(float, EyeSeparation, 
	                 __float__getEyeSeparation, 
	                 __void__setEyeSeparation__float);
	I_SimpleProperty(unsigned int, MaxNumberOfGraphicsContexts, 
	                 __unsigned_int__getMaxNumberOfGraphicsContexts, 
	                 __void__setMaxNumberOfGraphicsContexts__unsigned_int);
	I_SimpleProperty(unsigned int, MinimumNumAccumAlphaBits, 
	                 __unsigned_int__getMinimumNumAccumAlphaBits, 
	                 0);
	I_SimpleProperty(unsigned int, MinimumNumAccumBlueBits, 
	                 __unsigned_int__getMinimumNumAccumBlueBits, 
	                 0);
	I_SimpleProperty(unsigned int, MinimumNumAccumGreenBits, 
	                 __unsigned_int__getMinimumNumAccumGreenBits, 
	                 0);
	I_SimpleProperty(unsigned int, MinimumNumAccumRedBits, 
	                 __unsigned_int__getMinimumNumAccumRedBits, 
	                 0);
	I_SimpleProperty(unsigned int, MinimumNumAlphaBits, 
	                 __unsigned_int__getMinimumNumAlphaBits, 
	                 __void__setMinimumNumAlphaBits__unsigned_int);
	I_SimpleProperty(unsigned int, MinimumNumStencilBits, 
	                 __unsigned_int__getMinimumNumStencilBits, 
	                 __void__setMinimumNumStencilBits__unsigned_int);
	I_SimpleProperty(bool, MultiSamples, 
	                 __bool__getMultiSamples, 
	                 0);
	I_SimpleProperty(unsigned int, NumMultiSamples, 
	                 0, 
	                 __void__setNumMultiSamples__unsigned_int);
	I_SimpleProperty(bool, RGB, 
	                 __bool__getRGB, 
	                 __void__setRGB__bool);
	I_SimpleProperty(float, ScreenDistance, 
	                 __float__getScreenDistance, 
	                 __void__setScreenDistance__float);
	I_SimpleProperty(float, ScreenHeight, 
	                 __float__getScreenHeight, 
	                 __void__setScreenHeight__float);
	I_SimpleProperty(float, ScreenWidth, 
	                 __float__getScreenWidth, 
	                 __void__setScreenWidth__float);
	I_SimpleProperty(bool, SplitStereoAutoAjustAspectRatio, 
	                 __bool__getSplitStereoAutoAjustAspectRatio, 
	                 __void__setSplitStereoAutoAjustAspectRatio__bool);
	I_SimpleProperty(osg::DisplaySettings::SplitStereoHorizontalEyeMapping, SplitStereoHorizontalEyeMapping, 
	                 __SplitStereoHorizontalEyeMapping__getSplitStereoHorizontalEyeMapping, 
	                 __void__setSplitStereoHorizontalEyeMapping__SplitStereoHorizontalEyeMapping);
	I_SimpleProperty(int, SplitStereoHorizontalSeparation, 
	                 __int__getSplitStereoHorizontalSeparation, 
	                 __void__setSplitStereoHorizontalSeparation__int);
	I_SimpleProperty(osg::DisplaySettings::SplitStereoVerticalEyeMapping, SplitStereoVerticalEyeMapping, 
	                 __SplitStereoVerticalEyeMapping__getSplitStereoVerticalEyeMapping, 
	                 __void__setSplitStereoVerticalEyeMapping__SplitStereoVerticalEyeMapping);
	I_SimpleProperty(int, SplitStereoVerticalSeparation, 
	                 __int__getSplitStereoVerticalSeparation, 
	                 __void__setSplitStereoVerticalSeparation__int);
	I_SimpleProperty(bool, StencilBuffer, 
	                 __bool__getStencilBuffer, 
	                 0);
	I_SimpleProperty(bool, Stereo, 
	                 __bool__getStereo, 
	                 __void__setStereo__bool);
	I_SimpleProperty(osg::DisplaySettings::StereoMode, StereoMode, 
	                 __StereoMode__getStereoMode, 
	                 __void__setStereoMode__StereoMode);
END_REFLECTOR

