#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
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
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Window
#include <flixel/system/debug/Window.h>
#endif
#ifndef INCLUDED_flixel_system_debug_interaction_Interaction
#include <flixel/system/debug/interaction/Interaction.h>
#endif
#ifndef INCLUDED_flixel_system_debug_interaction_tools_GraphicCursorCross
#include <flixel/system/debug/interaction/tools/GraphicCursorCross.h>
#endif
#ifndef INCLUDED_flixel_system_debug_interaction_tools_Pointer
#include <flixel/system/debug/interaction/tools/Pointer.h>
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

Void Pointer_obj::__construct()
{
HX_STACK_FRAME("flixel.system.debug.interaction.tools.Pointer","new",0x18297018,"flixel.system.debug.interaction.tools.Pointer.new","flixel/system/debug/interaction/tools/Pointer.hx",20,0x6c93613b)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(20)
	super::__construct();
}
;
	return null();
}

//Pointer_obj::~Pointer_obj() { }

Dynamic Pointer_obj::__CreateEmpty() { return  new Pointer_obj; }
hx::ObjectPtr< Pointer_obj > Pointer_obj::__new()
{  hx::ObjectPtr< Pointer_obj > _result_ = new Pointer_obj();
	_result_->__construct();
	return _result_;}

Dynamic Pointer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Pointer_obj > _result_ = new Pointer_obj();
	_result_->__construct();
	return _result_;}

::flixel::_system::debug::interaction::tools::Tool Pointer_obj::init( ::flixel::_system::debug::interaction::Interaction brain){
	HX_STACK_FRAME("flixel.system.debug.interaction.tools.Pointer","init",0x08d15c58,"flixel.system.debug.interaction.tools.Pointer.init","flixel/system/debug/interaction/tools/Pointer.hx",23,0x6c93613b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(brain,"brain")
	HX_STACK_LINE(24)
	::flixel::_system::debug::interaction::Interaction tmp = brain;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(24)
	this->super::init(tmp);
	HX_STACK_LINE(26)
	this->_name = HX_HCSTRING("Pointer","\x9d","\xe8","\x72","\x1e");
	HX_STACK_LINE(27)
	this->setButton(hx::ClassOf< ::flixel::_system::debug::interaction::tools::GraphicCursorCross >());
	HX_STACK_LINE(28)
	::flixel::_system::debug::interaction::tools::GraphicCursorCross tmp1 = ::flixel::_system::debug::interaction::tools::GraphicCursorCross_obj::__new((int)0,(int)0,null(),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(28)
	this->setCursor(tmp1);
	HX_STACK_LINE(30)
	return hx::ObjectPtr<OBJ_>(this);
}


Void Pointer_obj::update( ){
{
		HX_STACK_FRAME("flixel.system.debug.interaction.tools.Pointer","update",0xd4dc8951,"flixel.system.debug.interaction.tools.Pointer.update","flixel/system/debug/interaction/tools/Pointer.hx",34,0x6c93613b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(36)
		bool tmp = this->isActive();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(36)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(36)
		if ((tmp1)){
			HX_STACK_LINE(37)
			return null();
		}
		HX_STACK_LINE(40)
		::flixel::_system::debug::interaction::Interaction tmp2 = this->_brain;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(40)
		bool tmp3 = tmp2->__Field(HX_HCSTRING("pointerJustPressed","\x19","\xd4","\xe3","\x63"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(40)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(40)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(40)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(40)
		if ((tmp5)){
			HX_STACK_LINE(40)
			::flixel::_system::debug::interaction::Interaction tmp7 = this->_brain;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(40)
			::flixel::_system::debug::interaction::Interaction tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(40)
			bool tmp9 = tmp8->__Field(HX_HCSTRING("pointerJustReleased","\x66","\xcf","\x4b","\x0a"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(40)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(40)
			tmp6 = !(tmp10);
		}
		else{
			HX_STACK_LINE(40)
			tmp6 = false;
		}
		HX_STACK_LINE(40)
		if ((tmp6)){
			HX_STACK_LINE(41)
			return null();
		}
		HX_STACK_LINE(43)
		::flixel::FlxGame tmp7 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(43)
		::flixel::_system::debug::interaction::Interaction tmp8 = this->_brain;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(43)
		::flixel::math::FlxPoint tmp9 = tmp8->__Field(HX_HCSTRING("flixelPointer","\xc1","\xe9","\x8f","\xfe"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(43)
		::flixel::FlxObject tmp10 = this->pinpointItemInGroup(tmp7->_state->members,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(43)
		::flixel::FlxObject item = tmp10;		HX_STACK_VAR(item,"item");
		HX_STACK_LINE(44)
		bool tmp11 = (item != null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(44)
		if ((tmp11)){
			HX_STACK_LINE(45)
			::flixel::FlxObject tmp12 = item;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(45)
			this->handleItemClick(tmp12);
		}
		else{
			HX_STACK_LINE(46)
			::flixel::_system::debug::interaction::Interaction tmp12 = this->_brain;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(46)
			bool tmp13 = tmp12->__Field(HX_HCSTRING("pointerJustPressed","\x19","\xd4","\xe3","\x63"), hx::paccDynamic );		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(46)
			if ((tmp13)){
				HX_STACK_LINE(48)
				::flixel::_system::debug::interaction::Interaction tmp14 = this->_brain;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(48)
				tmp14->__Field(HX_HCSTRING("clearSelection","\xff","\x4c","\x20","\x4c"), hx::paccDynamic )();
			}
		}
	}
return null();
}


Void Pointer_obj::handleItemClick( ::flixel::FlxObject item){
{
		HX_STACK_FRAME("flixel.system.debug.interaction.tools.Pointer","handleItemClick",0xca57dd25,"flixel.system.debug.interaction.tools.Pointer.handleItemClick","flixel/system/debug/interaction/tools/Pointer.hx",52,0x6c93613b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(item,"item")
		HX_STACK_LINE(54)
		::flixel::_system::debug::interaction::Interaction tmp = this->_brain;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(54)
		::flixel::group::FlxTypedGroup selectedItems = tmp->__Field(HX_HCSTRING("selectedItems","\xa5","\x87","\x4e","\xb8"), hx::paccDynamic );		HX_STACK_VAR(selectedItems,"selectedItems");
		HX_STACK_LINE(55)
		bool tmp1 = (selectedItems->length == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(55)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(55)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(55)
		if ((tmp2)){
			HX_STACK_LINE(55)
			::flixel::_system::debug::interaction::Interaction tmp4 = this->_brain;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(55)
			::flixel::_system::debug::interaction::Interaction tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(55)
			tmp3 = tmp5->__Field(HX_HCSTRING("keyPressed","\xc3","\x72","\x6e","\xa8"), hx::paccDynamic )((int)17);
		}
		else{
			HX_STACK_LINE(55)
			tmp3 = true;
		}
		HX_STACK_LINE(55)
		if ((tmp3)){
			HX_STACK_LINE(58)
			::flixel::FlxObject tmp4 = item;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(58)
			selectedItems->add(tmp4);
		}
		else{
			HX_STACK_LINE(63)
			::flixel::FlxObject tmp4 = item;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(63)
			int tmp5 = selectedItems->members->__Field(HX_HCSTRING("indexOf","\xc9","\x48","\xbf","\xe0"), hx::paccDynamic )(tmp4,null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(63)
			bool tmp6 = (tmp5 != (int)-1);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(63)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(63)
			if ((tmp7)){
				HX_STACK_LINE(64)
				::flixel::_system::debug::interaction::Interaction tmp8 = this->_brain;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(64)
				tmp8->__Field(HX_HCSTRING("clearSelection","\xff","\x4c","\x20","\x4c"), hx::paccDynamic )();
			}
			HX_STACK_LINE(65)
			::flixel::FlxObject tmp8 = item;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(65)
			selectedItems->add(tmp8);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Pointer_obj,handleItemClick,(void))

::flixel::FlxObject Pointer_obj::pinpointItemInGroup( Array< ::Dynamic > members,::flixel::math::FlxPoint cursor){
	HX_STACK_FRAME("flixel.system.debug.interaction.tools.Pointer","pinpointItemInGroup",0x399a4be4,"flixel.system.debug.interaction.tools.Pointer.pinpointItemInGroup","flixel/system/debug/interaction/tools/Pointer.hx",70,0x6c93613b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(members,"members")
	HX_STACK_ARG(cursor,"cursor")
	HX_STACK_LINE(71)
	::flixel::FlxObject target = null();		HX_STACK_VAR(target,"target");
	HX_STACK_LINE(74)
	int i = members->length;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(75)
	while((true)){
		HX_STACK_LINE(75)
		int tmp = (i)--;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(75)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(75)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(75)
		if ((tmp2)){
			HX_STACK_LINE(75)
			break;
		}
		HX_STACK_LINE(77)
		::flixel::FlxBasic tmp3 = members->__get(i).StaticCast< ::flixel::FlxBasic >();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(77)
		::flixel::FlxBasic member = tmp3;		HX_STACK_VAR(member,"member");
		HX_STACK_LINE(79)
		bool tmp4 = (member == null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(79)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(79)
		bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(79)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(79)
		if ((tmp6)){
			HX_STACK_LINE(79)
			bool tmp8 = member->visible;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(79)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(79)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(79)
			tmp7 = !(tmp10);
		}
		else{
			HX_STACK_LINE(79)
			tmp7 = true;
		}
		HX_STACK_LINE(79)
		bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(79)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(79)
		if ((tmp8)){
			HX_STACK_LINE(79)
			bool tmp10 = member->exists;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(79)
			bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(79)
			tmp9 = !(tmp11);
		}
		else{
			HX_STACK_LINE(79)
			tmp9 = true;
		}
		HX_STACK_LINE(79)
		if ((tmp9)){
			HX_STACK_LINE(80)
			continue;
		}
		HX_STACK_LINE(82)
		::flixel::FlxBasic tmp10 = member;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(82)
		bool tmp11 = ::Std_obj::is(tmp10,hx::ClassOf< ::flixel::group::FlxTypedGroup >());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(82)
		if ((tmp11)){
			HX_STACK_LINE(83)
			::flixel::math::FlxPoint tmp12 = cursor;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(83)
			::flixel::FlxObject tmp13 = this->pinpointItemInGroup(((Dynamic)(member))->__Field(HX_HCSTRING("members","\xd9","\x2c","\x70","\x1a"), hx::paccDynamic ),tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(83)
			target = tmp13;
		}
		else{
			HX_STACK_LINE(84)
			::flixel::FlxBasic tmp12 = member;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(84)
			::flixel::FlxBasic tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(84)
			bool tmp14 = ::Std_obj::is(tmp13,hx::ClassOf< ::flixel::FlxSprite >());		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(84)
			bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(84)
			if ((tmp14)){
				HX_STACK_LINE(85)
				::flixel::FlxSprite tmp16;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(85)
				tmp16 = hx::TCast< ::flixel::FlxSprite >::cast(member);
				HX_STACK_LINE(85)
				::flixel::FlxSprite tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(85)
				::flixel::math::FlxPoint tmp18 = cursor;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(85)
				::flixel::math::FlxPoint tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(85)
				tmp15 = tmp17->overlapsPoint(tmp19,true,null());
			}
			else{
				HX_STACK_LINE(84)
				tmp15 = false;
			}
			HX_STACK_LINE(84)
			if ((tmp15)){
				HX_STACK_LINE(86)
				target = ((::flixel::FlxObject)(member));
			}
		}
		HX_STACK_LINE(88)
		bool tmp12 = (target != null());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(88)
		if ((tmp12)){
			HX_STACK_LINE(89)
			break;
		}
	}
	HX_STACK_LINE(91)
	::flixel::FlxObject tmp = target;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(91)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC2(Pointer_obj,pinpointItemInGroup,return )


Pointer_obj::Pointer_obj()
{
}

Dynamic Pointer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"handleItemClick") ) { return handleItemClick_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"pinpointItemInGroup") ) { return pinpointItemInGroup_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("handleItemClick","\x6d","\x89","\xb5","\x16"),
	HX_HCSTRING("pinpointItemInGroup","\x2c","\xbc","\x17","\xd9"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Pointer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Pointer_obj::__mClass,"__mClass");
};

#endif

hx::Class Pointer_obj::__mClass;

void Pointer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.debug.interaction.tools.Pointer","\x26","\xc4","\x01","\xfa");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Pointer_obj >;
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
