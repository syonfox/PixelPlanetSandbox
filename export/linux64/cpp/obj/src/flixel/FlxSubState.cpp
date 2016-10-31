#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
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
#ifndef INCLUDED_flixel_FlxSubState
#include <flixel/FlxSubState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_system_FlxBGSprite
#include <flixel/system/FlxBGSprite.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Graphics
#include <openfl/_legacy/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
namespace flixel{

Void FlxSubState_obj::__construct(hx::Null< int >  __o_BGColor)
{
HX_STACK_FRAME("flixel.FlxSubState","new",0xef991343,"flixel.FlxSubState.new","flixel/FlxSubState.hx",10,0xd8a3e54e)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_BGColor,"BGColor")
int BGColor = __o_BGColor.Default(0);
{
	HX_STACK_LINE(35)
	this->_created = false;
	HX_STACK_LINE(42)
	super::__construct(null());
	HX_STACK_LINE(43)
	this->closeCallback = null();
	HX_STACK_LINE(45)
	bool tmp = ::flixel::FlxG_obj::renderTile;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(45)
	if ((tmp)){
		HX_STACK_LINE(47)
		::flixel::_system::FlxBGSprite tmp1 = ::flixel::_system::FlxBGSprite_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(47)
		this->_bgSprite = tmp1;
	}
	HX_STACK_LINE(49)
	int tmp1 = BGColor;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(49)
	this->set_bgColor(tmp1);
}
;
	return null();
}

//FlxSubState_obj::~FlxSubState_obj() { }

Dynamic FlxSubState_obj::__CreateEmpty() { return  new FlxSubState_obj; }
hx::ObjectPtr< FlxSubState_obj > FlxSubState_obj::__new(hx::Null< int >  __o_BGColor)
{  hx::ObjectPtr< FlxSubState_obj > _result_ = new FlxSubState_obj();
	_result_->__construct(__o_BGColor);
	return _result_;}

Dynamic FlxSubState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxSubState_obj > _result_ = new FlxSubState_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void FlxSubState_obj::draw( ){
{
		HX_STACK_FRAME("flixel.FlxSubState","draw",0xafc56fc1,"flixel.FlxSubState.draw","flixel/FlxSubState.hx",53,0xd8a3e54e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(55)
		bool tmp = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(55)
		if ((tmp)){
			HX_STACK_LINE(57)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(57)
			Array< ::Dynamic > _g1 = this->get_cameras();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(57)
			while((true)){
				HX_STACK_LINE(57)
				bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(57)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(57)
				if ((tmp2)){
					HX_STACK_LINE(57)
					break;
				}
				HX_STACK_LINE(57)
				::flixel::FlxCamera tmp3 = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(57)
				::flixel::FlxCamera camera = tmp3;		HX_STACK_VAR(camera,"camera");
				HX_STACK_LINE(57)
				++(_g);
				HX_STACK_LINE(59)
				int tmp4 = this->_bgColor;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(59)
				camera->fill(tmp4,null(),null(),null());
			}
		}
		else{
			HX_STACK_LINE(64)
			::flixel::_system::FlxBGSprite tmp1 = this->_bgSprite;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(64)
			tmp1->__Field(HX_HCSTRING("draw","\x04","\x2c","\x70","\x42"), hx::paccDynamic )();
		}
		HX_STACK_LINE(68)
		this->super::draw();
	}
return null();
}


Void FlxSubState_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.FlxSubState","destroy",0xc08a1d5d,"flixel.FlxSubState.destroy","flixel/FlxSubState.hx",72,0xd8a3e54e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(73)
		this->super::destroy();
		HX_STACK_LINE(74)
		this->closeCallback = null();
		HX_STACK_LINE(75)
		this->_parentState = null();
		HX_STACK_LINE(76)
		this->_bgSprite = null();
	}
return null();
}


Void FlxSubState_obj::close( ){
{
		HX_STACK_FRAME("flixel.FlxSubState","close",0x85a9195b,"flixel.FlxSubState.close","flixel/FlxSubState.hx",83,0xd8a3e54e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(84)
		::flixel::FlxState tmp = this->_parentState;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(84)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(84)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(84)
		if ((tmp1)){
			HX_STACK_LINE(84)
			::flixel::FlxState tmp3 = this->_parentState;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(84)
			::flixel::FlxState tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(84)
			::flixel::FlxSubState tmp5 = tmp4->subState;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(84)
			tmp2 = (tmp5 == hx::ObjectPtr<OBJ_>(this));
		}
		else{
			HX_STACK_LINE(84)
			tmp2 = false;
		}
		HX_STACK_LINE(84)
		if ((tmp2)){
			HX_STACK_LINE(86)
			::flixel::FlxState tmp3 = this->_parentState;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(86)
			tmp3->closeSubState();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSubState_obj,close,(void))

int FlxSubState_obj::get_bgColor( ){
	HX_STACK_FRAME("flixel.FlxSubState","get_bgColor",0x02e53f58,"flixel.FlxSubState.get_bgColor","flixel/FlxSubState.hx",92,0xd8a3e54e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(93)
	int tmp = this->_bgColor;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(93)
	return tmp;
}


int FlxSubState_obj::set_bgColor( int Value){
	HX_STACK_FRAME("flixel.FlxSubState","set_bgColor",0x0d524664,"flixel.FlxSubState.set_bgColor","flixel/FlxSubState.hx",98,0xd8a3e54e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(99)
	bool tmp = ::flixel::FlxG_obj::renderTile;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(99)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(99)
	if ((tmp)){
		HX_STACK_LINE(99)
		::flixel::_system::FlxBGSprite tmp2 = this->_bgSprite;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(99)
		::flixel::_system::FlxBGSprite tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(99)
		tmp1 = (tmp3 != null());
	}
	else{
		HX_STACK_LINE(99)
		tmp1 = false;
	}
	HX_STACK_LINE(99)
	if ((tmp1)){
		HX_STACK_LINE(100)
		::flixel::_system::FlxBGSprite tmp2 = this->_bgSprite;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(100)
		::openfl::_legacy::display::BitmapData tmp3 = tmp2->__Field(HX_HCSTRING("get_pixels","\xf6","\x5e","\x31","\x7d"), hx::paccDynamic )();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(100)
		int tmp4 = Value;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(100)
		tmp3->setPixel32((int)0,(int)0,tmp4);
	}
	HX_STACK_LINE(102)
	int tmp2 = this->_bgColor = Value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(102)
	return tmp2;
}



FlxSubState_obj::FlxSubState_obj()
{
}

void FlxSubState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxSubState);
	HX_MARK_MEMBER_NAME(closeCallback,"closeCallback");
	HX_MARK_MEMBER_NAME(_bgSprite,"_bgSprite");
	HX_MARK_MEMBER_NAME(_parentState,"_parentState");
	HX_MARK_MEMBER_NAME(_bgColor,"_bgColor");
	HX_MARK_MEMBER_NAME(_created,"_created");
	::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxSubState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(closeCallback,"closeCallback");
	HX_VISIT_MEMBER_NAME(_bgSprite,"_bgSprite");
	HX_VISIT_MEMBER_NAME(_parentState,"_parentState");
	HX_VISIT_MEMBER_NAME(_bgColor,"_bgColor");
	HX_VISIT_MEMBER_NAME(_created,"_created");
	::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxSubState_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"close") ) { return close_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_bgColor") ) { return _bgColor; }
		if (HX_FIELD_EQ(inName,"_created") ) { return _created; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_bgSprite") ) { return _bgSprite; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_bgColor") ) { return get_bgColor_dyn(); }
		if (HX_FIELD_EQ(inName,"set_bgColor") ) { return set_bgColor_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_parentState") ) { return _parentState; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"closeCallback") ) { return closeCallback; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxSubState_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_bgColor") ) { _bgColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_created") ) { _created=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_bgSprite") ) { _bgSprite=inValue.Cast< ::flixel::_system::FlxBGSprite >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_parentState") ) { _parentState=inValue.Cast< ::flixel::FlxState >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"closeCallback") ) { closeCallback=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxSubState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_bgSprite","\x09","\xbf","\x32","\xe0"));
	outFields->push(HX_HCSTRING("_parentState","\x88","\x96","\xcf","\x7a"));
	outFields->push(HX_HCSTRING("_bgColor","\xdf","\xda","\x3b","\x31"));
	outFields->push(HX_HCSTRING("_created","\x69","\x0f","\x23","\x4b"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxSubState_obj,closeCallback),HX_HCSTRING("closeCallback","\x9d","\xe5","\x0d","\x8a")},
	{hx::fsObject /*::flixel::_system::FlxBGSprite*/ ,(int)offsetof(FlxSubState_obj,_bgSprite),HX_HCSTRING("_bgSprite","\x09","\xbf","\x32","\xe0")},
	{hx::fsObject /*::flixel::FlxState*/ ,(int)offsetof(FlxSubState_obj,_parentState),HX_HCSTRING("_parentState","\x88","\x96","\xcf","\x7a")},
	{hx::fsInt,(int)offsetof(FlxSubState_obj,_bgColor),HX_HCSTRING("_bgColor","\xdf","\xda","\x3b","\x31")},
	{hx::fsBool,(int)offsetof(FlxSubState_obj,_created),HX_HCSTRING("_created","\x69","\x0f","\x23","\x4b")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("closeCallback","\x9d","\xe5","\x0d","\x8a"),
	HX_HCSTRING("_bgSprite","\x09","\xbf","\x32","\xe0"),
	HX_HCSTRING("_parentState","\x88","\x96","\xcf","\x7a"),
	HX_HCSTRING("_bgColor","\xdf","\xda","\x3b","\x31"),
	HX_HCSTRING("_created","\x69","\x0f","\x23","\x4b"),
	HX_HCSTRING("draw","\x04","\x2c","\x70","\x42"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("close","\xb8","\x17","\x63","\x48"),
	HX_HCSTRING("get_bgColor","\x75","\xe1","\x7d","\x7d"),
	HX_HCSTRING("set_bgColor","\x81","\xe8","\xea","\x87"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxSubState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxSubState_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxSubState_obj::__mClass;

void FlxSubState_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.FlxSubState","\xd1","\xb5","\x9f","\x37");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxSubState_obj >;
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
