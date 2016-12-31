#ifndef INCLUDED_flixel_system_frontEnds_WatchFrontEnd
#define INCLUDED_flixel_system_frontEnds_WatchFrontEnd

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,_system,frontEnds,WatchFrontEnd)
namespace flixel{
namespace _system{
namespace frontEnds{


class HXCPP_CLASS_ATTRIBUTES  WatchFrontEnd_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef WatchFrontEnd_obj OBJ_;
		WatchFrontEnd_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="flixel.system.frontEnds.WatchFrontEnd")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< WatchFrontEnd_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~WatchFrontEnd_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("WatchFrontEnd","\x01","\x3c","\x87","\x3e"); }

		virtual Void add( Dynamic object,::String field,::String displayName);
		Dynamic add_dyn();

		virtual Void remove( Dynamic object,::String field);
		Dynamic remove_dyn();

		virtual Void addQuick( ::String displayName,Dynamic value);
		Dynamic addQuick_dyn();

		virtual Void removeQuick( ::String displayName);
		Dynamic removeQuick_dyn();

		virtual Void addExpression( ::String expression,::String displayName);
		Dynamic addExpression_dyn();

		virtual Void removeExpression( ::String expression);
		Dynamic removeExpression_dyn();

		virtual Void addMouse( );
		Dynamic addMouse_dyn();

		virtual Void removeMouse( );
		Dynamic removeMouse_dyn();

};

} // end namespace flixel
} // end namespace system
} // end namespace frontEnds

#endif /* INCLUDED_flixel_system_frontEnds_WatchFrontEnd */ 
