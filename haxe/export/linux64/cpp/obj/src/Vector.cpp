#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Vector
#include <Vector.h>
#endif

Void Vector_obj::__construct(Dynamic __o_ix,Dynamic __o_iy)
{
HX_STACK_FRAME("Vector","new",0xec857355,"Vector.new","Vector.hx",12,0x192b0dbb)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_ix,"ix")
HX_STACK_ARG(__o_iy,"iy")
Dynamic ix = __o_ix.Default(0);
Dynamic iy = __o_iy.Default(0);
{
	HX_STACK_LINE(13)
	this->x = ix;
	HX_STACK_LINE(14)
	this->y = iy;
}
;
	return null();
}

//Vector_obj::~Vector_obj() { }

Dynamic Vector_obj::__CreateEmpty() { return  new Vector_obj; }
hx::ObjectPtr< Vector_obj > Vector_obj::__new(Dynamic __o_ix,Dynamic __o_iy)
{  hx::ObjectPtr< Vector_obj > _result_ = new Vector_obj();
	_result_->__construct(__o_ix,__o_iy);
	return _result_;}

Dynamic Vector_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Vector_obj > _result_ = new Vector_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Float Vector_obj::length( ){
	HX_STACK_FRAME("Vector","length",0x5df87911,"Vector.length","Vector.hx",22,0x192b0dbb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(23)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(23)
	Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(23)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(23)
	Float tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(23)
	Float tmp4 = this->x;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(23)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(23)
	Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(23)
	Float tmp7 = ::Math_obj::sqrt(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(23)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC0(Vector_obj,length,return )

::Vector Vector_obj::add( ::Vector v){
	HX_STACK_FRAME("Vector","add",0xec7b9516,"Vector.add","Vector.hx",28,0x192b0dbb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(29)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(29)
	Float tmp1 = v->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(29)
	Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(29)
	Float tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(29)
	Float tmp4 = v->y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(29)
	Float tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(29)
	::Vector tmp6 = ::Vector_obj::__new(tmp2,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(29)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(Vector_obj,add,return )

::Vector Vector_obj::sub( ::Vector v){
	HX_STACK_FRAME("Vector","sub",0xec894c75,"Vector.sub","Vector.hx",33,0x192b0dbb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(34)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(34)
	Float tmp1 = v->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(34)
	Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(34)
	Float tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(34)
	Float tmp4 = v->y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(34)
	Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(34)
	::Vector tmp6 = ::Vector_obj::__new(tmp2,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(34)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(Vector_obj,sub,return )

::Vector Vector_obj::scalerProduct( Float s){
	HX_STACK_FRAME("Vector","scalerProduct",0xaf64189c,"Vector.scalerProduct","Vector.hx",37,0x192b0dbb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(38)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(38)
	Float tmp1 = s;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(38)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(38)
	Float tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(38)
	Float tmp4 = s;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(38)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(38)
	::Vector tmp6 = ::Vector_obj::__new(tmp2,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(38)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(Vector_obj,scalerProduct,return )

::Vector Vector_obj::polarToVector( Float l,Float r){
	HX_STACK_FRAME("Vector","polarToVector",0x503fb9b1,"Vector.polarToVector","Vector.hx",41,0x192b0dbb)
	HX_STACK_ARG(l,"l")
	HX_STACK_ARG(r,"r")
	HX_STACK_LINE(42)
	Float tmp = l;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(42)
	Float tmp1 = r;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(42)
	Float tmp2 = ::Math_obj::cos(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(42)
	Float tmp3 = (tmp * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(42)
	Float tmp4 = l;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(42)
	Float tmp5 = r;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(42)
	Float tmp6 = ::Math_obj::sin(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(42)
	Float tmp7 = (tmp4 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(42)
	::Vector tmp8 = ::Vector_obj::__new(tmp3,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(42)
	return tmp8;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector_obj,polarToVector,return )


Vector_obj::Vector_obj()
{
}

Dynamic Vector_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		if (HX_FIELD_EQ(inName,"sub") ) { return sub_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"twoPi") ) { return twoPi; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return length_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"scalerProduct") ) { return scalerProduct_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Vector_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"polarToVector") ) { outValue = polarToVector_dyn(); return true;  }
	}
	return false;
}

Dynamic Vector_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"twoPi") ) { twoPi=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Vector_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("twoPi","\xa5","\x2e","\x78","\x19"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Vector_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Vector_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Vector_obj,twoPi),HX_HCSTRING("twoPi","\xa5","\x2e","\x78","\x19")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("twoPi","\xa5","\x2e","\x78","\x19"),
	HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("sub","\x80","\xa9","\x57","\x00"),
	HX_HCSTRING("scalerProduct","\x67","\x51","\x37","\x27"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Vector_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Vector_obj::__mClass,"__mClass");
};

#endif

hx::Class Vector_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("polarToVector","\x7c","\xf2","\x12","\xc8"),
	::String(null()) };

void Vector_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Vector","\xe3","\x24","\xf2","\xcb");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Vector_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Vector_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

