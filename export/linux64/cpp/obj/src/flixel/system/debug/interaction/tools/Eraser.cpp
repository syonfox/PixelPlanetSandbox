#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
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
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroupIterator
#include <flixel/group/FlxTypedGroupIterator.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Window
#include <flixel/system/debug/Window.h>
#endif
#ifndef INCLUDED_flixel_system_debug_interaction_Interaction
#include <flixel/system/debug/interaction/Interaction.h>
#endif
#ifndef INCLUDED_flixel_system_debug_interaction_tools_Eraser
#include <flixel/system/debug/interaction/tools/Eraser.h>
#endif
#ifndef INCLUDED_flixel_system_debug_interaction_tools_Tool
#include <flixel/system/debug/interaction/tools/Tool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
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

Void Eraser_obj::__construct()
{
HX_STACK_FRAME("flixel.system.debug.interaction.tools.Eraser","new",0xafc41bf5,"flixel.system.debug.interaction.tools.Eraser.new","flixel/system/debug/interaction/tools/Eraser.hx",18,0xa546bf98)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(18)
	super::__construct();
}
;
	return null();
}

//Eraser_obj::~Eraser_obj() { }

Dynamic Eraser_obj::__CreateEmpty() { return  new Eraser_obj; }
hx::ObjectPtr< Eraser_obj > Eraser_obj::__new()
{  hx::ObjectPtr< Eraser_obj > _result_ = new Eraser_obj();
	_result_->__construct();
	return _result_;}

Dynamic Eraser_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Eraser_obj > _result_ = new Eraser_obj();
	_result_->__construct();
	return _result_;}

::flixel::_system::debug::interaction::tools::Tool Eraser_obj::init( ::flixel::_system::debug::interaction::Interaction Brain){
	HX_STACK_FRAME("flixel.system.debug.interaction.tools.Eraser","init",0x188d11db,"flixel.system.debug.interaction.tools.Eraser.init","flixel/system/debug/interaction/tools/Eraser.hx",21,0xa546bf98)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Brain,"Brain")
	HX_STACK_LINE(22)
	::flixel::_system::debug::interaction::Interaction tmp = Brain;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(22)
	this->super::init(tmp);
	HX_STACK_LINE(23)
	this->_name = HX_HCSTRING("Eraser","\xec","\x54","\xc3","\x7a");
	HX_STACK_LINE(24)
	return hx::ObjectPtr<OBJ_>(this);
}


Void Eraser_obj::update( ){
{
		HX_STACK_FRAME("flixel.system.debug.interaction.tools.Eraser","update",0x1312e594,"flixel.system.debug.interaction.tools.Eraser.update","flixel/system/debug/interaction/tools/Eraser.hx",28,0xa546bf98)
		HX_STACK_THIS(this)
		HX_STACK_LINE(29)
		::flixel::_system::debug::interaction::Interaction tmp = this->_brain;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(29)
		bool tmp1 = tmp->__Field(HX_HCSTRING("keyJustPressed","\x77","\xd2","\xb7","\xcd"), hx::paccDynamic )((int)46);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(29)
		if ((tmp1)){
			HX_STACK_LINE(30)
			::flixel::_system::debug::interaction::Interaction tmp2 = this->_brain;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(30)
			bool tmp3 = tmp2->__Field(HX_HCSTRING("keyPressed","\xc3","\x72","\x6e","\xa8"), hx::paccDynamic )((int)16);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(30)
			this->doDeletion(tmp3);
		}
	}
return null();
}


Void Eraser_obj::activate( ){
{
		HX_STACK_FRAME("flixel.system.debug.interaction.tools.Eraser","activate",0x9778b3fe,"flixel.system.debug.interaction.tools.Eraser.activate","flixel/system/debug/interaction/tools/Eraser.hx",34,0xa546bf98)
		HX_STACK_THIS(this)
		HX_STACK_LINE(35)
		::flixel::_system::debug::interaction::Interaction tmp = this->_brain;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(35)
		bool tmp1 = tmp->__Field(HX_HCSTRING("keyPressed","\xc3","\x72","\x6e","\xa8"), hx::paccDynamic )((int)16);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(35)
		this->doDeletion(tmp1);
		HX_STACK_LINE(38)
		::flixel::_system::debug::interaction::Interaction tmp2 = this->_brain;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(38)
		tmp2->__Field(HX_HCSTRING("setActiveTool","\x80","\x62","\xa4","\x97"), hx::paccDynamic )(null());
	}
return null();
}


Void Eraser_obj::doDeletion( bool remove){
{
		HX_STACK_FRAME("flixel.system.debug.interaction.tools.Eraser","doDeletion",0x007d62c4,"flixel.system.debug.interaction.tools.Eraser.doDeletion","flixel/system/debug/interaction/tools/Eraser.hx",42,0xa546bf98)
		HX_STACK_THIS(this)
		HX_STACK_ARG(remove,"remove")
		HX_STACK_LINE(43)
		::flixel::_system::debug::interaction::Interaction tmp = this->_brain;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(43)
		::flixel::group::FlxTypedGroup selectedItems = tmp->__Field(HX_HCSTRING("selectedItems","\xa5","\x87","\x4e","\xb8"), hx::paccDynamic );		HX_STACK_VAR(selectedItems,"selectedItems");
		HX_STACK_LINE(44)
		bool tmp1 = (selectedItems != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(44)
		if ((tmp1)){
			HX_STACK_LINE(46)
			::flixel::group::FlxTypedGroup tmp2 = selectedItems;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(46)
			bool tmp3 = remove;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(46)
			this->findAndDelete(tmp2,tmp3);
			HX_STACK_LINE(47)
			selectedItems->clear();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Eraser_obj,doDeletion,(void))

Void Eraser_obj::findAndDelete( ::flixel::group::FlxTypedGroup items,hx::Null< bool >  __o_remove){
bool remove = __o_remove.Default(false);
	HX_STACK_FRAME("flixel.system.debug.interaction.tools.Eraser","findAndDelete",0xc5f7a2be,"flixel.system.debug.interaction.tools.Eraser.findAndDelete","flixel/system/debug/interaction/tools/Eraser.hx",52,0xa546bf98)
	HX_STACK_THIS(this)
	HX_STACK_ARG(items,"items")
	HX_STACK_ARG(remove,"remove")
{
		HX_STACK_LINE(53)
		::flixel::group::FlxTypedGroupIterator tmp = ::flixel::group::FlxTypedGroupIterator_obj::__new(items->members,null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(53)
		for(::cpp::FastIterator_obj< ::flixel::FlxObject > *__it = ::cpp::CreateFastIterator< ::flixel::FlxObject >(tmp);  __it->hasNext(); ){
			::flixel::FlxObject member = __it->next();
			{
				HX_STACK_LINE(55)
				bool tmp1 = (member == null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(55)
				if ((tmp1)){
					HX_STACK_LINE(56)
					continue;
				}
				HX_STACK_LINE(58)
				::flixel::FlxObject tmp2 = member;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(58)
				bool tmp3 = ::Std_obj::is(tmp2,hx::ClassOf< ::flixel::group::FlxTypedGroup >());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(58)
				if ((tmp3)){
				}
				else{
					HX_STACK_LINE(64)
					member->kill();
					HX_STACK_LINE(65)
					bool tmp4 = remove;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(65)
					if ((tmp4)){
						HX_STACK_LINE(66)
						::flixel::FlxObject tmp5 = member;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(66)
						::flixel::FlxGame tmp6 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(66)
						::flixel::FlxState tmp7 = tmp6->_state;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(66)
						this->removeFromMemory(tmp5,tmp7);
					}
				}
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Eraser_obj,findAndDelete,(void))

Void Eraser_obj::removeFromMemory( ::flixel::FlxBasic item,::flixel::group::FlxTypedGroup parentGroup){
{
		HX_STACK_FRAME("flixel.system.debug.interaction.tools.Eraser","removeFromMemory",0x828b48ba,"flixel.system.debug.interaction.tools.Eraser.removeFromMemory","flixel/system/debug/interaction/tools/Eraser.hx",73,0xa546bf98)
		HX_STACK_THIS(this)
		HX_STACK_ARG(item,"item")
		HX_STACK_ARG(parentGroup,"parentGroup")
		HX_STACK_LINE(73)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(73)
		Array< ::Dynamic > _g1 = parentGroup->members;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(73)
		while((true)){
			HX_STACK_LINE(73)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(73)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(73)
			if ((tmp1)){
				HX_STACK_LINE(73)
				break;
			}
			HX_STACK_LINE(73)
			::flixel::FlxBasic tmp2 = _g1->__get(_g).StaticCast< ::flixel::FlxBasic >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(73)
			::flixel::FlxBasic member = tmp2;		HX_STACK_VAR(member,"member");
			HX_STACK_LINE(73)
			++(_g);
			HX_STACK_LINE(75)
			bool tmp3 = (member == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(75)
			if ((tmp3)){
				HX_STACK_LINE(76)
				continue;
			}
			HX_STACK_LINE(78)
			::flixel::FlxBasic tmp4 = member;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(78)
			bool tmp5 = ::Std_obj::is(tmp4,hx::ClassOf< ::flixel::group::FlxTypedGroup >());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(78)
			if ((tmp5)){
				HX_STACK_LINE(79)
				::flixel::FlxBasic tmp6 = item;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(79)
				::flixel::group::FlxTypedGroup tmp7 = ((::flixel::group::FlxTypedGroup)(member));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(79)
				this->removeFromMemory(tmp6,tmp7);
			}
			else{
				HX_STACK_LINE(80)
				bool tmp6 = (member == item);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(80)
				if ((tmp6)){
					HX_STACK_LINE(81)
					::flixel::FlxBasic tmp7 = member;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(81)
					parentGroup->remove(tmp7,null());
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Eraser_obj,removeFromMemory,(void))


Eraser_obj::Eraser_obj()
{
}

Dynamic Eraser_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"activate") ) { return activate_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"doDeletion") ) { return doDeletion_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"findAndDelete") ) { return findAndDelete_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"removeFromMemory") ) { return removeFromMemory_dyn(); }
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
	HX_HCSTRING("activate","\xb3","\x1b","\xac","\xe5"),
	HX_HCSTRING("doDeletion","\xb9","\xe1","\x21","\xd0"),
	HX_HCSTRING("findAndDelete","\xe9","\x2a","\xa7","\x3f"),
	HX_HCSTRING("removeFromMemory","\x6f","\xed","\xac","\x01"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Eraser_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Eraser_obj::__mClass,"__mClass");
};

#endif

hx::Class Eraser_obj::__mClass;

void Eraser_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.debug.interaction.tools.Eraser","\x83","\xfd","\x47","\x13");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Eraser_obj >;
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
