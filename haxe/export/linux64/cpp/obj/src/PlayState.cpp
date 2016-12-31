#include <hxcpp.h>

#ifndef INCLUDED_Planet
#include <Planet.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_System
#include <System.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif

Void PlayState_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("PlayState","new",0xf8bf96cf,"PlayState.new","PlayState.hx",12,0xb30d7781)
HX_STACK_THIS(this)
HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(12)
	Dynamic tmp = MaxSize;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(12)
	super::__construct(tmp);
}
;
	return null();
}

//PlayState_obj::~PlayState_obj() { }

Dynamic PlayState_obj::__CreateEmpty() { return  new PlayState_obj; }
hx::ObjectPtr< PlayState_obj > PlayState_obj::__new(Dynamic MaxSize)
{  hx::ObjectPtr< PlayState_obj > _result_ = new PlayState_obj();
	_result_->__construct(MaxSize);
	return _result_;}

Dynamic PlayState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PlayState_obj > _result_ = new PlayState_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void PlayState_obj::create( ){
{
		HX_STACK_FRAME("PlayState","create",0x82220fed,"PlayState.create","PlayState.hx",17,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(18)
		Dynamic tmp = hx::SourceInfo(HX_HCSTRING("PlayState.hx","\x81","\x77","\x0d","\xb3"),18,HX_HCSTRING("PlayState","\x5d","\x83","\xc2","\x46"),HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(18)
		::haxe::Log_obj::trace(HX_HCSTRING("PlayState","\x5d","\x83","\xc2","\x46"),tmp);
		HX_STACK_LINE(19)
		int tmp1 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(19)
		int w = tmp1;		HX_STACK_VAR(w,"w");
		HX_STACK_LINE(20)
		int tmp2 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(20)
		int h = tmp2;		HX_STACK_VAR(h,"h");
		HX_STACK_LINE(21)
		Float size = (int)10;		HX_STACK_VAR(size,"size");
		HX_STACK_LINE(22)
		Float mass = (int)100;		HX_STACK_VAR(mass,"mass");
		HX_STACK_LINE(23)
		Float speed = (int)0;		HX_STACK_VAR(speed,"speed");
		HX_STACK_LINE(27)
		::System tmp3 = ::System_obj::__new(null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(27)
		this->_system = tmp3;
		HX_STACK_LINE(28)
		Float tmp4 = (Float(w) / Float((int)2));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(28)
		Float tmp5 = (Float(h) / Float((int)2));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(28)
		Float tmp6 = size;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(28)
		::Planet tmp7 = ::Planet_obj::__new(tmp4,tmp5,tmp6,(int)1000,(int)0,(int)-1,(int)-16776961);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(28)
		::Planet p1 = tmp7;		HX_STACK_VAR(p1,"p1");
		HX_STACK_LINE(29)
		::System tmp8 = this->_system;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(29)
		::Planet tmp9 = p1;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(29)
		tmp8->addPlanet(tmp9);
		HX_STACK_LINE(30)
		::flixel::FlxSprite tmp10 = p1->getSprite();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(30)
		this->add(tmp10);
		HX_STACK_LINE(31)
		Float tmp11 = (Float(w) / Float((int)4));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(31)
		Float tmp12 = (Float(h) / Float((int)2));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(31)
		Float tmp13 = size;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(31)
		Float tmp14 = mass;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(31)
		::Planet tmp15 = ::Planet_obj::__new(tmp11,tmp12,tmp13,tmp14,(int)0,(int)10,(int)-65536);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(31)
		::Planet p2 = tmp15;		HX_STACK_VAR(p2,"p2");
		HX_STACK_LINE(32)
		::System tmp16 = this->_system;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(32)
		::Planet tmp17 = p2;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(32)
		tmp16->addPlanet(tmp17);
		HX_STACK_LINE(33)
		::flixel::FlxSprite tmp18 = p2->getSprite();		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(33)
		this->add(tmp18);
		HX_STACK_LINE(35)
		this->super::create();
	}
return null();
}


Void PlayState_obj::update( Float elapsed){
{
		HX_STACK_FRAME("PlayState","update",0x8d182efa,"PlayState.update","PlayState.hx",39,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(41)
		::System tmp = this->_system;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(41)
		tmp->update();
		HX_STACK_LINE(42)
		Float tmp1 = elapsed;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(42)
		this->super::update(tmp1);
	}
return null();
}



PlayState_obj::PlayState_obj()
{
}

void PlayState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PlayState);
	HX_MARK_MEMBER_NAME(_system,"system");
	::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PlayState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_system,"system");
	::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic PlayState_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"system") ) { return _system; }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PlayState_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"system") ) { _system=inValue.Cast< ::System >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PlayState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("system","\xef","\x96","\xe2","\xf2"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::System*/ ,(int)offsetof(PlayState_obj,_system),HX_HCSTRING("system","\xef","\x96","\xe2","\xf2")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("system","\xef","\x96","\xe2","\xf2"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PlayState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PlayState_obj::__mClass,"__mClass");
};

#endif

hx::Class PlayState_obj::__mClass;

void PlayState_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("PlayState","\x5d","\x83","\xc2","\x46");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< PlayState_obj >;
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

