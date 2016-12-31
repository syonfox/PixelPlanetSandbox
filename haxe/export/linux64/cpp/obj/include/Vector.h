#ifndef INCLUDED_Vector
#define INCLUDED_Vector

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Vector)


class HXCPP_CLASS_ATTRIBUTES  Vector_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Vector_obj OBJ_;
		Vector_obj();
		Void __construct(Dynamic __o_ix,Dynamic __o_iy);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="Vector")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Vector_obj > __new(Dynamic __o_ix,Dynamic __o_iy);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Vector_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Vector","\xe3","\x24","\xf2","\xcb"); }

		static ::Vector polarToVector( Float l,Float r);
		static Dynamic polarToVector_dyn();

		Float x;
		Float y;
		Float twoPi;
		virtual Float length( );
		Dynamic length_dyn();

		virtual ::Vector add( ::Vector v);
		Dynamic add_dyn();

		virtual ::Vector sub( ::Vector v);
		Dynamic sub_dyn();

		virtual ::Vector scalerProduct( Float s);
		Dynamic scalerProduct_dyn();

};


#endif /* INCLUDED_Vector */ 
