#ifndef INCLUDED_flixel_tweens_motion_CubicMotion
#define INCLUDED_flixel_tweens_motion_CubicMotion

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_tweens_motion_Motion
#include <flixel/tweens/motion/Motion.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS2(flixel,tweens,FlxTween)
HX_DECLARE_CLASS2(flixel,tweens,FlxTweenManager)
HX_DECLARE_CLASS3(flixel,tweens,motion,CubicMotion)
HX_DECLARE_CLASS3(flixel,tweens,motion,Motion)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
namespace flixel{
namespace tweens{
namespace motion{


class HXCPP_CLASS_ATTRIBUTES  CubicMotion_obj : public ::flixel::tweens::motion::Motion_obj{
	public:
		typedef ::flixel::tweens::motion::Motion_obj super;
		typedef CubicMotion_obj OBJ_;
		CubicMotion_obj();
		Void __construct(Dynamic Options,::flixel::tweens::FlxTweenManager manager);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.tweens.motion.CubicMotion")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< CubicMotion_obj > __new(Dynamic Options,::flixel::tweens::FlxTweenManager manager);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CubicMotion_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("CubicMotion","\x00","\xc3","\x18","\xe7"); }

		Float _fromX;
		Float _fromY;
		Float _toX;
		Float _toY;
		Float _aX;
		Float _aY;
		Float _bX;
		Float _bY;
		Float _ttt;
		Float _tt;
		virtual ::flixel::tweens::motion::CubicMotion setMotion( Float fromX,Float fromY,Float aX,Float aY,Float bX,Float bY,Float toX,Float toY,Float duration);
		Dynamic setMotion_dyn();

		virtual Void update( Float elapsed);

};

} // end namespace flixel
} // end namespace tweens
} // end namespace motion

#endif /* INCLUDED_flixel_tweens_motion_CubicMotion */ 