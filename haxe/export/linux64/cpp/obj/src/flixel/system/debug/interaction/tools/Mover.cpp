#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Window
#include <flixel/system/debug/Window.h>
#endif
#ifndef INCLUDED_flixel_system_debug_interaction_Interaction
#include <flixel/system/debug/interaction/Interaction.h>
#endif
#ifndef INCLUDED_flixel_system_debug_interaction_tools_GraphicMoverTool
#include <flixel/system/debug/interaction/tools/GraphicMoverTool.h>
#endif
#ifndef INCLUDED_flixel_system_debug_interaction_tools_Mover
#include <flixel/system/debug/interaction/tools/Mover.h>
#endif
#ifndef INCLUDED_flixel_system_debug_interaction_tools_Tool
#include <flixel/system/debug/interaction/tools/Tool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
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

Void Mover_obj::__construct()
{
HX_STACK_FRAME("flixel.system.debug.interaction.tools.Mover","new",0x9079915c,"flixel.system.debug.interaction.tools.Mover.new","flixel/system/debug/interaction/tools/Mover.hx",17,0xc1a785b7)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(19)
	this->_dragging = false;
	HX_STACK_LINE(17)
	super::__construct();
}
;
	return null();
}

//Mover_obj::~Mover_obj() { }

Dynamic Mover_obj::__CreateEmpty() { return  new Mover_obj; }
hx::ObjectPtr< Mover_obj > Mover_obj::__new()
{  hx::ObjectPtr< Mover_obj > _result_ = new Mover_obj();
	_result_->__construct();
	return _result_;}

Dynamic Mover_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Mover_obj > _result_ = new Mover_obj();
	_result_->__construct();
	return _result_;}

::flixel::_system::debug::interaction::tools::Tool Mover_obj::init( ::flixel::_system::debug::interaction::Interaction brain){
	HX_STACK_FRAME("flixel.system.debug.interaction.tools.Mover","init",0xd69e5694,"flixel.system.debug.interaction.tools.Mover.init","flixel/system/debug/interaction/tools/Mover.hx",23,0xc1a785b7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(brain,"brain")
	HX_STACK_LINE(24)
	::flixel::_system::debug::interaction::Interaction tmp = brain;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(24)
	this->super::init(tmp);
	HX_STACK_LINE(25)
	Float tmp1 = brain->__Field(HX_HCSTRING("flixelPointer","\xc1","\xe9","\x8f","\xfe"), hx::paccDynamic )->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(25)
	Float tmp2 = brain->__Field(HX_HCSTRING("flixelPointer","\xc1","\xe9","\x8f","\xfe"), hx::paccDynamic )->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(25)
	::flixel::math::FlxPoint tmp3 = ::flixel::math::FlxPoint_obj::__new(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(25)
	this->_lastCursorPosition = tmp3;
	HX_STACK_LINE(27)
	this->_name = HX_HCSTRING("Mover","\x21","\x3c","\x93","\x9f");
	HX_STACK_LINE(28)
	this->setButton(hx::ClassOf< ::flixel::_system::debug::interaction::tools::GraphicMoverTool >());
	HX_STACK_LINE(29)
	::flixel::_system::debug::interaction::tools::GraphicMoverTool tmp4 = ::flixel::_system::debug::interaction::tools::GraphicMoverTool_obj::__new((int)0,(int)0,null(),null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(29)
	this->setCursor(tmp4);
	HX_STACK_LINE(31)
	return hx::ObjectPtr<OBJ_>(this);
}


Void Mover_obj::update( ){
{
		HX_STACK_FRAME("flixel.system.debug.interaction.tools.Mover","update",0x6b898a8d,"flixel.system.debug.interaction.tools.Mover.update","flixel/system/debug/interaction/tools/Mover.hx",35,0xc1a785b7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(37)
		bool tmp = this->isActive();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(37)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(37)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(37)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(37)
		if ((tmp2)){
			HX_STACK_LINE(37)
			::flixel::_system::debug::interaction::Interaction tmp4 = this->_brain;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(37)
			::flixel::_system::debug::interaction::Interaction tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(37)
			bool tmp6 = tmp5->__Field(HX_HCSTRING("keyPressed","\xc3","\x72","\x6e","\xa8"), hx::paccDynamic )((int)16);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(37)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(37)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(37)
			tmp3 = !(tmp8);
		}
		else{
			HX_STACK_LINE(37)
			tmp3 = false;
		}
		HX_STACK_LINE(37)
		if ((tmp3)){
			HX_STACK_LINE(38)
			return null();
		}
		HX_STACK_LINE(40)
		::flixel::_system::debug::interaction::Interaction tmp4 = this->_brain;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(40)
		bool tmp5 = tmp4->__Field(HX_HCSTRING("pointerPressed","\x65","\x7b","\x0c","\x9c"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(40)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(40)
		if ((tmp5)){
			HX_STACK_LINE(40)
			bool tmp7 = this->_dragging;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(40)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(40)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(40)
			tmp6 = !(tmp9);
		}
		else{
			HX_STACK_LINE(40)
			tmp6 = false;
		}
		HX_STACK_LINE(40)
		if ((tmp6)){
			HX_STACK_LINE(41)
			this->_dragging = true;
		}
		else{
			HX_STACK_LINE(42)
			::flixel::_system::debug::interaction::Interaction tmp7 = this->_brain;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(42)
			bool tmp8 = tmp7->__Field(HX_HCSTRING("pointerPressed","\x65","\x7b","\x0c","\x9c"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(42)
			bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(42)
			if ((tmp8)){
				HX_STACK_LINE(42)
				tmp9 = this->_dragging;
			}
			else{
				HX_STACK_LINE(42)
				tmp9 = false;
			}
			HX_STACK_LINE(42)
			if ((tmp9)){
				HX_STACK_LINE(43)
				this->doDragging();
			}
			else{
				HX_STACK_LINE(44)
				::flixel::_system::debug::interaction::Interaction tmp10 = this->_brain;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(44)
				bool tmp11 = tmp10->__Field(HX_HCSTRING("pointerJustReleased","\x66","\xcf","\x4b","\x0a"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(44)
				if ((tmp11)){
					HX_STACK_LINE(45)
					this->_dragging = false;
				}
			}
		}
		HX_STACK_LINE(47)
		::flixel::math::FlxPoint tmp7 = this->_lastCursorPosition;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(47)
		::flixel::_system::debug::interaction::Interaction tmp8 = this->_brain;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(47)
		Float tmp9 = tmp8->__Field(HX_HCSTRING("flixelPointer","\xc1","\xe9","\x8f","\xfe"), hx::paccDynamic )->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(47)
		tmp7->set_x(tmp9);
		HX_STACK_LINE(48)
		::flixel::math::FlxPoint tmp10 = this->_lastCursorPosition;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(48)
		::flixel::_system::debug::interaction::Interaction tmp11 = this->_brain;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(48)
		Float tmp12 = tmp11->__Field(HX_HCSTRING("flixelPointer","\xc1","\xe9","\x8f","\xfe"), hx::paccDynamic )->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(48)
		tmp10->set_y(tmp12);
	}
return null();
}


Void Mover_obj::doDragging( ){
{
		HX_STACK_FRAME("flixel.system.debug.interaction.tools.Mover","doDragging",0xb6bbe9fe,"flixel.system.debug.interaction.tools.Mover.doDragging","flixel/system/debug/interaction/tools/Mover.hx",52,0xc1a785b7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(53)
		::flixel::_system::debug::interaction::Interaction tmp = this->_brain;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(53)
		Float tmp1 = tmp->__Field(HX_HCSTRING("flixelPointer","\xc1","\xe9","\x8f","\xfe"), hx::paccDynamic )->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(53)
		::flixel::math::FlxPoint tmp2 = this->_lastCursorPosition;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(53)
		Float tmp3 = tmp2->x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(53)
		Float tmp4 = (tmp1 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(53)
		Float dx = tmp4;		HX_STACK_VAR(dx,"dx");
		HX_STACK_LINE(54)
		::flixel::_system::debug::interaction::Interaction tmp5 = this->_brain;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(54)
		Float tmp6 = tmp5->__Field(HX_HCSTRING("flixelPointer","\xc1","\xe9","\x8f","\xfe"), hx::paccDynamic )->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(54)
		::flixel::math::FlxPoint tmp7 = this->_lastCursorPosition;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(54)
		Float tmp8 = tmp7->y;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(54)
		Float tmp9 = (tmp6 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(54)
		Float dy = tmp9;		HX_STACK_VAR(dy,"dy");
		HX_STACK_LINE(56)
		{
			HX_STACK_LINE(56)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(56)
			::flixel::_system::debug::interaction::Interaction tmp10 = this->_brain;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(56)
			Array< ::Dynamic > _g1 = tmp10->__Field(HX_HCSTRING("selectedItems","\xa5","\x87","\x4e","\xb8"), hx::paccDynamic )->__Field(HX_HCSTRING("members","\xd9","\x2c","\x70","\x1a"), hx::paccDynamic );		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(56)
			while((true)){
				HX_STACK_LINE(56)
				bool tmp11 = (_g < _g1->length);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(56)
				bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(56)
				if ((tmp12)){
					HX_STACK_LINE(56)
					break;
				}
				HX_STACK_LINE(56)
				::flixel::FlxObject tmp13 = _g1->__get(_g).StaticCast< ::flixel::FlxObject >();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(56)
				::flixel::FlxObject member = tmp13;		HX_STACK_VAR(member,"member");
				HX_STACK_LINE(56)
				++(_g);
				HX_STACK_LINE(58)
				::flixel::FlxObject tmp14 = member;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(58)
				bool tmp15 = ::Std_obj::is(tmp14,hx::ClassOf< ::flixel::FlxObject >());		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(58)
				bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(58)
				if ((tmp16)){
					HX_STACK_LINE(59)
					continue;
				}
				HX_STACK_LINE(61)
				::flixel::FlxObject object = member;		HX_STACK_VAR(object,"object");
				HX_STACK_LINE(62)
				bool tmp17 = (object != null());		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(62)
				if ((tmp17)){
					HX_STACK_LINE(64)
					{
						HX_STACK_LINE(64)
						::flixel::FlxObject _g2 = object;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(64)
						Float tmp18 = (_g2->x + dx);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(64)
						_g2->set_x(tmp18);
					}
					HX_STACK_LINE(65)
					{
						HX_STACK_LINE(65)
						::flixel::FlxObject _g2 = object;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(65)
						Float tmp18 = (_g2->y + dy);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(65)
						_g2->set_y(tmp18);
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Mover_obj,doDragging,(void))


Mover_obj::Mover_obj()
{
}

void Mover_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Mover);
	HX_MARK_MEMBER_NAME(_dragging,"_dragging");
	HX_MARK_MEMBER_NAME(_lastCursorPosition,"_lastCursorPosition");
	::flixel::_system::debug::interaction::tools::Tool_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Mover_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_dragging,"_dragging");
	HX_VISIT_MEMBER_NAME(_lastCursorPosition,"_lastCursorPosition");
	::flixel::_system::debug::interaction::tools::Tool_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Mover_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_dragging") ) { return _dragging; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"doDragging") ) { return doDragging_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_lastCursorPosition") ) { return _lastCursorPosition; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Mover_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"_dragging") ) { _dragging=inValue.Cast< bool >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_lastCursorPosition") ) { _lastCursorPosition=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Mover_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_dragging","\x2e","\x34","\x22","\x7f"));
	outFields->push(HX_HCSTRING("_lastCursorPosition","\xb4","\xfe","\x02","\x31"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Mover_obj,_dragging),HX_HCSTRING("_dragging","\x2e","\x34","\x22","\x7f")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(Mover_obj,_lastCursorPosition),HX_HCSTRING("_lastCursorPosition","\xb4","\xfe","\x02","\x31")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_dragging","\x2e","\x34","\x22","\x7f"),
	HX_HCSTRING("_lastCursorPosition","\xb4","\xfe","\x02","\x31"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("doDragging","\x7a","\x53","\x01","\xa5"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Mover_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Mover_obj::__mClass,"__mClass");
};

#endif

hx::Class Mover_obj::__mClass;

void Mover_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.debug.interaction.tools.Mover","\x6a","\xf3","\x4e","\x4b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Mover_obj >;
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
