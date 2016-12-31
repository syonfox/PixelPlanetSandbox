#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Window
#include <flixel/system/debug/Window.h>
#endif
#ifndef INCLUDED_flixel_system_debug_interaction_Interaction
#include <flixel/system/debug/interaction/Interaction.h>
#endif
#ifndef INCLUDED_flixel_system_debug_interaction_tools_Tool
#include <flixel/system/debug/interaction/tools/Tool.h>
#endif
#ifndef INCLUDED_flixel_system_ui_FlxSystemButton
#include <flixel/system/ui/FlxSystemButton.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#include <openfl/_legacy/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
namespace flixel{
namespace _system{
namespace debug{
namespace interaction{
namespace tools{

Void Tool_obj::__construct()
{
HX_STACK_FRAME("flixel.system.debug.interaction.tools.Tool","new",0xbd6c80c1,"flixel.system.debug.interaction.tools.Tool.new","flixel/system/debug/interaction/tools/Tool.hx",14,0xb5d06f0c)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(19)
	this->_name = HX_HCSTRING("(Unknown tool)","\x73","\xdb","\x28","\x1c");
	HX_STACK_LINE(14)
	super::__construct();
}
;
	return null();
}

//Tool_obj::~Tool_obj() { }

Dynamic Tool_obj::__CreateEmpty() { return  new Tool_obj; }
hx::ObjectPtr< Tool_obj > Tool_obj::__new()
{  hx::ObjectPtr< Tool_obj > _result_ = new Tool_obj();
	_result_->__construct();
	return _result_;}

Dynamic Tool_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Tool_obj > _result_ = new Tool_obj();
	_result_->__construct();
	return _result_;}

hx::Object *Tool_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::util::IFlxDestroyable_obj)) return operator ::flixel::util::IFlxDestroyable_obj *();
	return super::__ToInterface(inType);
}

Tool_obj::operator ::flixel::util::IFlxDestroyable_obj *()
	{ return new ::flixel::util::IFlxDestroyable_delegate_< Tool_obj >(this); }
::flixel::_system::debug::interaction::tools::Tool Tool_obj::init( ::flixel::_system::debug::interaction::Interaction brain){
	HX_STACK_FRAME("flixel.system.debug.interaction.tools.Tool","init",0xfe3cdf8f,"flixel.system.debug.interaction.tools.Tool.init","flixel/system/debug/interaction/tools/Tool.hx",23,0xb5d06f0c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(brain,"brain")
	HX_STACK_LINE(24)
	this->_brain = brain;
	HX_STACK_LINE(25)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Tool_obj,init,return )

Void Tool_obj::update( ){
{
		HX_STACK_FRAME("flixel.system.debug.interaction.tools.Tool","update",0x9e988848,"flixel.system.debug.interaction.tools.Tool.update","flixel/system/debug/interaction/tools/Tool.hx",28,0xb5d06f0c)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Tool_obj,update,(void))

Void Tool_obj::draw( ){
{
		HX_STACK_FRAME("flixel.system.debug.interaction.tools.Tool","draw",0xfaf1d083,"flixel.system.debug.interaction.tools.Tool.draw","flixel/system/debug/interaction/tools/Tool.hx",30,0xb5d06f0c)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Tool_obj,draw,(void))

Void Tool_obj::activate( ){
{
		HX_STACK_FRAME("flixel.system.debug.interaction.tools.Tool","activate",0x49b36bb2,"flixel.system.debug.interaction.tools.Tool.activate","flixel/system/debug/interaction/tools/Tool.hx",32,0xb5d06f0c)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Tool_obj,activate,(void))

Void Tool_obj::deactivate( ){
{
		HX_STACK_FRAME("flixel.system.debug.interaction.tools.Tool","deactivate",0x2c7be9f3,"flixel.system.debug.interaction.tools.Tool.deactivate","flixel/system/debug/interaction/tools/Tool.hx",34,0xb5d06f0c)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Tool_obj,deactivate,(void))

Void Tool_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.system.debug.interaction.tools.Tool","destroy",0xad9521db,"flixel.system.debug.interaction.tools.Tool.destroy","flixel/system/debug/interaction/tools/Tool.hx",36,0xb5d06f0c)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Tool_obj,destroy,(void))

bool Tool_obj::isActive( ){
	HX_STACK_FRAME("flixel.system.debug.interaction.tools.Tool","isActive",0xd2b72d4f,"flixel.system.debug.interaction.tools.Tool.isActive","flixel/system/debug/interaction/tools/Tool.hx",39,0xb5d06f0c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(40)
	::flixel::_system::debug::interaction::Interaction tmp = this->_brain;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(40)
	::flixel::_system::debug::interaction::tools::Tool tmp1 = tmp->__Field(HX_HCSTRING("activeTool","\x3e","\x24","\x2c","\xf6"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(40)
	bool tmp2 = (tmp1 == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(40)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(40)
	if ((tmp2)){
		HX_STACK_LINE(40)
		::flixel::_system::debug::interaction::Interaction tmp4 = this->_brain;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(40)
		::flixel::_system::debug::interaction::Interaction tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(40)
		tmp3 = tmp5->__Field(HX_HCSTRING("get_visible","\x89","\xd8","\x1e","\x29"), hx::paccDynamic )();
	}
	else{
		HX_STACK_LINE(40)
		tmp3 = false;
	}
	HX_STACK_LINE(40)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(Tool_obj,isActive,return )

Void Tool_obj::setButton( ::hx::Class Icon){
{
		HX_STACK_FRAME("flixel.system.debug.interaction.tools.Tool","setButton",0x5be68655,"flixel.system.debug.interaction.tools.Tool.setButton","flixel/system/debug/interaction/tools/Tool.hx",44,0xb5d06f0c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Icon,"Icon")
		HX_STACK_LINE(45)
		::hx::Class tmp = Icon;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(45)
		::openfl::_legacy::display::BitmapData tmp1 = ::Type_obj::createInstance(tmp,cpp::ArrayBase_obj::__new().Add((int)0).Add((int)0));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(45)
		Dynamic tmp2 = this->onButtonClicked_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(45)
		::flixel::_system::ui::FlxSystemButton tmp3 = ::flixel::_system::ui::FlxSystemButton_obj::__new(tmp1,tmp2,true);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(45)
		this->button = tmp3;
		HX_STACK_LINE(46)
		::flixel::_system::ui::FlxSystemButton tmp4 = this->button;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(46)
		tmp4->__Field(HX_HCSTRING("set_toggled","\x73","\x49","\x6b","\x5c"), hx::paccDynamic )(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Tool_obj,setButton,(void))

Void Tool_obj::setCursor( ::openfl::_legacy::display::BitmapData Icon){
{
		HX_STACK_FRAME("flixel.system.debug.interaction.tools.Tool","setCursor",0xc0eeb339,"flixel.system.debug.interaction.tools.Tool.setCursor","flixel/system/debug/interaction/tools/Tool.hx",50,0xb5d06f0c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Icon,"Icon")
		HX_STACK_LINE(51)
		this->cursor = Icon;
		HX_STACK_LINE(52)
		::flixel::_system::debug::interaction::Interaction tmp = this->_brain;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(52)
		::String tmp1 = this->_name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(52)
		::openfl::_legacy::display::BitmapData tmp2 = this->cursor;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(52)
		tmp->__Field(HX_HCSTRING("registerCustomCursor","\x6a","\x60","\x89","\x94"), hx::paccDynamic )(tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Tool_obj,setCursor,(void))

Void Tool_obj::onButtonClicked( ){
{
		HX_STACK_FRAME("flixel.system.debug.interaction.tools.Tool","onButtonClicked",0x655fe417,"flixel.system.debug.interaction.tools.Tool.onButtonClicked","flixel/system/debug/interaction/tools/Tool.hx",56,0xb5d06f0c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(57)
		::flixel::_system::debug::interaction::Interaction tmp = this->_brain;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(57)
		tmp->__Field(HX_HCSTRING("setActiveTool","\x80","\x62","\xa4","\x97"), hx::paccDynamic )(hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Tool_obj,onButtonClicked,(void))

::String Tool_obj::getName( ){
	HX_STACK_FRAME("flixel.system.debug.interaction.tools.Tool","getName",0xa49116e2,"flixel.system.debug.interaction.tools.Tool.getName","flixel/system/debug/interaction/tools/Tool.hx",61,0xb5d06f0c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(62)
	::String tmp = this->_name;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(62)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Tool_obj,getName,return )


Tool_obj::Tool_obj()
{
}

void Tool_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Tool);
	HX_MARK_MEMBER_NAME(button,"button");
	HX_MARK_MEMBER_NAME(cursor,"cursor");
	HX_MARK_MEMBER_NAME(_name,"_name");
	HX_MARK_MEMBER_NAME(_brain,"_brain");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Tool_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(button,"button");
	HX_VISIT_MEMBER_NAME(cursor,"cursor");
	HX_VISIT_MEMBER_NAME(_name,"_name");
	HX_VISIT_MEMBER_NAME(_brain,"_brain");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Tool_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_name") ) { return _name; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"button") ) { return button; }
		if (HX_FIELD_EQ(inName,"cursor") ) { return cursor; }
		if (HX_FIELD_EQ(inName,"_brain") ) { return _brain; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"getName") ) { return getName_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"activate") ) { return activate_dyn(); }
		if (HX_FIELD_EQ(inName,"isActive") ) { return isActive_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"setButton") ) { return setButton_dyn(); }
		if (HX_FIELD_EQ(inName,"setCursor") ) { return setCursor_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"deactivate") ) { return deactivate_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"onButtonClicked") ) { return onButtonClicked_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Tool_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_name") ) { _name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"button") ) { button=inValue.Cast< ::flixel::_system::ui::FlxSystemButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cursor") ) { cursor=inValue.Cast< ::openfl::_legacy::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_brain") ) { _brain=inValue.Cast< ::flixel::_system::debug::interaction::Interaction >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Tool_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("button","\xf2","\x61","\xe0","\xd9"));
	outFields->push(HX_HCSTRING("cursor","\xd6","\x8e","\xe8","\x3e"));
	outFields->push(HX_HCSTRING("_name","\x2a","\x8e","\x10","\xfc"));
	outFields->push(HX_HCSTRING("_brain","\xf7","\x69","\xd0","\xb4"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::_system::ui::FlxSystemButton*/ ,(int)offsetof(Tool_obj,button),HX_HCSTRING("button","\xf2","\x61","\xe0","\xd9")},
	{hx::fsObject /*::openfl::_legacy::display::BitmapData*/ ,(int)offsetof(Tool_obj,cursor),HX_HCSTRING("cursor","\xd6","\x8e","\xe8","\x3e")},
	{hx::fsString,(int)offsetof(Tool_obj,_name),HX_HCSTRING("_name","\x2a","\x8e","\x10","\xfc")},
	{hx::fsObject /*::flixel::_system::debug::interaction::Interaction*/ ,(int)offsetof(Tool_obj,_brain),HX_HCSTRING("_brain","\xf7","\x69","\xd0","\xb4")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("button","\xf2","\x61","\xe0","\xd9"),
	HX_HCSTRING("cursor","\xd6","\x8e","\xe8","\x3e"),
	HX_HCSTRING("_name","\x2a","\x8e","\x10","\xfc"),
	HX_HCSTRING("_brain","\xf7","\x69","\xd0","\xb4"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("draw","\x04","\x2c","\x70","\x42"),
	HX_HCSTRING("activate","\xb3","\x1b","\xac","\xe5"),
	HX_HCSTRING("deactivate","\x34","\x5c","\x01","\x3c"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("isActive","\x50","\xdd","\xaf","\x6e"),
	HX_HCSTRING("setButton","\x34","\xd7","\x87","\x39"),
	HX_HCSTRING("setCursor","\x18","\x04","\x90","\x9e"),
	HX_HCSTRING("onButtonClicked","\x36","\xa6","\x0f","\xa0"),
	HX_HCSTRING("getName","\x01","\x22","\x82","\x1b"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Tool_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Tool_obj::__mClass,"__mClass");
};

#endif

hx::Class Tool_obj::__mClass;

void Tool_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.debug.interaction.tools.Tool","\x4f","\x0c","\x93","\x8d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Tool_obj >;
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
} // end namespace system
} // end namespace debug
} // end namespace interaction
} // end namespace tools
