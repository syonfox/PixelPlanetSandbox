#ifndef INCLUDED_System
#define INCLUDED_System

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Planet)
HX_DECLARE_CLASS0(System)


class HXCPP_CLASS_ATTRIBUTES  System_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef System_obj OBJ_;
		System_obj();
		Void __construct(hx::Null< Float >  __o_grav);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="System")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< System_obj > __new(hx::Null< Float >  __o_grav);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~System_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("System","\x0f","\x0b","\x77","\x27"); }

		static void __boot();
		static Float EPSILON;
		Array< ::Dynamic > planets;
		Float g;
		virtual Void addPlanet( ::Planet p);
		Dynamic addPlanet_dyn();

		virtual Void update( );
		Dynamic update_dyn();

};


#endif /* INCLUDED_System */ 
