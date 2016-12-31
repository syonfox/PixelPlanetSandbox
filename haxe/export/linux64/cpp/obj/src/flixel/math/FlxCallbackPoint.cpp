#include <hxcpp.h>

#ifndef INCLUDED_flixel_math_FlxCallbackPoint
#include <flixel/math/FlxCallbackPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
namespace flixel{
namespace math{

Void FlxCallbackPoint_obj::__construct(Dynamic setXCallback,Dynamic setYCallback,Dynamic setXYCallback)
{
HX_STACK_FRAME("flixel.math.FlxCallbackPoint","new",0x2af621df,"flixel.math.FlxCallbackPoint.new","flixel/math/FlxPoint.hx",472,0xb3e1cd2c)
HX_STACK_THIS(this)
HX_STACK_ARG(setXCallback,"setXCallback")
HX_STACK_ARG(setYCallback,"setYCallback")
HX_STACK_ARG(setXYCallback,"setXYCallback")
{
	HX_STACK_LINE(473)
	super::__construct(null(),null());
	HX_STACK_LINE(475)
	this->_setXCallback = setXCallback;
	HX_STACK_LINE(476)
	this->_setYCallback = setXYCallback;
	HX_STACK_LINE(477)
	this->_setXYCallback = setXYCallback;
	HX_STACK_LINE(479)
	Dynamic tmp = this->_setXCallback_dyn();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(479)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(479)
	if ((tmp1)){
		HX_STACK_LINE(481)
		Dynamic tmp2 = this->_setYCallback_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(481)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(481)
		if ((tmp3)){
			HX_STACK_LINE(482)
			this->_setYCallback = setXCallback;
		}
		HX_STACK_LINE(483)
		Dynamic tmp4 = this->_setXYCallback_dyn();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(483)
		bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(483)
		if ((tmp5)){
			HX_STACK_LINE(484)
			this->_setXYCallback = setXCallback;
		}
	}
}
;
	return null();
}

//FlxCallbackPoint_obj::~FlxCallbackPoint_obj() { }

Dynamic FlxCallbackPoint_obj::__CreateEmpty() { return  new FlxCallbackPoint_obj; }
hx::ObjectPtr< FlxCallbackPoint_obj > FlxCallbackPoint_obj::__new(Dynamic setXCallback,Dynamic setYCallback,Dynamic setXYCallback)
{  hx::ObjectPtr< FlxCallbackPoint_obj > _result_ = new FlxCallbackPoint_obj();
	_result_->__construct(setXCallback,setYCallback,setXYCallback);
	return _result_;}

Dynamic FlxCallbackPoint_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxCallbackPoint_obj > _result_ = new FlxCallbackPoint_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

::flixel::math::FlxPoint FlxCallbackPoint_obj::set( hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y){
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
	HX_STACK_FRAME("flixel.math.FlxCallbackPoint","set",0x2af9ed21,"flixel.math.FlxCallbackPoint.set","flixel/math/FlxPoint.hx",489,0xb3e1cd2c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
{
		HX_STACK_LINE(490)
		Float tmp = X;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(490)
		Float tmp1 = Y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(490)
		this->super::set(tmp,tmp1);
		HX_STACK_LINE(491)
		Dynamic tmp2 = this->_setXYCallback_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(491)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(491)
		if ((tmp3)){
			HX_STACK_LINE(492)
			this->_setXYCallback(hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(493)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


Float FlxCallbackPoint_obj::set_x( Float Value){
	HX_STACK_FRAME("flixel.math.FlxCallbackPoint","set_x",0x4f288a9a,"flixel.math.FlxCallbackPoint.set_x","flixel/math/FlxPoint.hx",497,0xb3e1cd2c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(498)
	Float tmp = Value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(498)
	this->super::set_x(tmp);
	HX_STACK_LINE(499)
	Dynamic tmp1 = this->_setXCallback_dyn();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(499)
	bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(499)
	if ((tmp2)){
		HX_STACK_LINE(500)
		this->_setXCallback(hx::ObjectPtr<OBJ_>(this));
	}
	HX_STACK_LINE(501)
	Float tmp3 = Value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(501)
	return tmp3;
}


Float FlxCallbackPoint_obj::set_y( Float Value){
	HX_STACK_FRAME("flixel.math.FlxCallbackPoint","set_y",0x4f288a9b,"flixel.math.FlxCallbackPoint.set_y","flixel/math/FlxPoint.hx",505,0xb3e1cd2c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(506)
	Float tmp = Value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(506)
	this->super::set_y(tmp);
	HX_STACK_LINE(507)
	Dynamic tmp1 = this->_setYCallback_dyn();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(507)
	bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(507)
	if ((tmp2)){
		HX_STACK_LINE(508)
		this->_setYCallback(hx::ObjectPtr<OBJ_>(this));
	}
	HX_STACK_LINE(509)
	Float tmp3 = Value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(509)
	return tmp3;
}


Void FlxCallbackPoint_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.math.FlxCallbackPoint","destroy",0xdd08a9f9,"flixel.math.FlxCallbackPoint.destroy","flixel/math/FlxPoint.hx",513,0xb3e1cd2c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(514)
		this->super::destroy();
		HX_STACK_LINE(515)
		this->_setXCallback = null();
		HX_STACK_LINE(516)
		this->_setYCallback = null();
		HX_STACK_LINE(517)
		this->_setXYCallback = null();
	}
return null();
}


Void FlxCallbackPoint_obj::put( ){
{
		HX_STACK_FRAME("flixel.math.FlxCallbackPoint","put",0x2af7b44e,"flixel.math.FlxCallbackPoint.put","flixel/math/FlxPoint.hx",520,0xb3e1cd2c)
		HX_STACK_THIS(this)
	}
return null();
}



FlxCallbackPoint_obj::FlxCallbackPoint_obj()
{
}

void FlxCallbackPoint_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxCallbackPoint);
	HX_MARK_MEMBER_NAME(_setXCallback,"_setXCallback");
	HX_MARK_MEMBER_NAME(_setYCallback,"_setYCallback");
	HX_MARK_MEMBER_NAME(_setXYCallback,"_setXYCallback");
	HX_MARK_END_CLASS();
}

void FlxCallbackPoint_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_setXCallback,"_setXCallback");
	HX_VISIT_MEMBER_NAME(_setYCallback,"_setYCallback");
	HX_VISIT_MEMBER_NAME(_setXYCallback,"_setXYCallback");
}

Dynamic FlxCallbackPoint_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		if (HX_FIELD_EQ(inName,"put") ) { return put_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"set_x") ) { return set_x_dyn(); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return set_y_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_setXCallback") ) { return _setXCallback; }
		if (HX_FIELD_EQ(inName,"_setYCallback") ) { return _setYCallback; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_setXYCallback") ) { return _setXYCallback; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxCallbackPoint_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"_setXCallback") ) { _setXCallback=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_setYCallback") ) { _setYCallback=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_setXYCallback") ) { _setXYCallback=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxCallbackPoint_obj,_setXCallback),HX_HCSTRING("_setXCallback","\x3a","\xe1","\x9f","\x40")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxCallbackPoint_obj,_setYCallback),HX_HCSTRING("_setYCallback","\x3b","\x4a","\x91","\x13")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxCallbackPoint_obj,_setXYCallback),HX_HCSTRING("_setXYCallback","\x49","\x36","\x58","\xb1")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_setXCallback","\x3a","\xe1","\x9f","\x40"),
	HX_HCSTRING("_setYCallback","\x3b","\x4a","\x91","\x13"),
	HX_HCSTRING("_setXYCallback","\x49","\x36","\x58","\xb1"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("set_x","\x5b","\x9b","\x2f","\x7a"),
	HX_HCSTRING("set_y","\x5c","\x9b","\x2f","\x7a"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("put","\xcf","\x62","\x55","\x00"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxCallbackPoint_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxCallbackPoint_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxCallbackPoint_obj::__mClass;

void FlxCallbackPoint_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.math.FlxCallbackPoint","\x6d","\x46","\xf2","\x5b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxCallbackPoint_obj >;
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

} // end namespace flixel
} // end namespace math
