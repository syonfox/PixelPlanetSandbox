#ifndef INCLUDED_Planet
#define INCLUDED_Planet

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Planet)
HX_DECLARE_CLASS0(Vector)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)


class HXCPP_CLASS_ATTRIBUTES  Planet_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Planet_obj OBJ_;
		Planet_obj();
		Void __construct(Float ix,Float iy,Float ir,Float im,Float vx,Float vy,Dynamic __o_ic);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="Planet")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Planet_obj > __new(Float ix,Float iy,Float ir,Float im,Float vx,Float vy,Dynamic __o_ic);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Planet_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Planet","\xb8","\x06","\x45","\x6c"); }

		Float r;
		Float m;
		::Vector p;
		::Vector v;
		::Vector a;
		::flixel::FlxSprite sprite;
		int color;
		virtual Void generateSprite( );
		Dynamic generateSprite_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		virtual ::flixel::FlxSprite getSprite( );
		Dynamic getSprite_dyn();

};


#endif /* INCLUDED_Planet */ 
