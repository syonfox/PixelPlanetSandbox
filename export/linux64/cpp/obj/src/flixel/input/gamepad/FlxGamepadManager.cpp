#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepad
#include <flixel/input/gamepad/FlxGamepad.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadAnalogStick
#include <flixel/input/gamepad/FlxGamepadAnalogStick.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadAttachment
#include <flixel/input/gamepad/FlxGamepadAttachment.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadButton
#include <flixel/input/gamepad/FlxGamepadButton.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadManager
#include <flixel/input/gamepad/FlxGamepadManager.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadModel
#include <flixel/input/gamepad/FlxGamepadModel.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_FlxGamepadMapping
#include <flixel/input/gamepad/mappings/FlxGamepadMapping.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_openfl__legacy_Lib
#include <openfl/_legacy/Lib.h>
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
#ifndef INCLUDED_openfl__legacy_display_MovieClip
#include <openfl/_legacy/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Stage
#include <openfl/_legacy/display/Stage.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_Event
#include <openfl/_legacy/events/Event.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_JoystickEvent
#include <openfl/_legacy/events/JoystickEvent.h>
#endif
namespace flixel{
namespace input{
namespace gamepad{

Void FlxGamepadManager_obj::__construct()
{
HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","new",0x05218fad,"flixel.input.gamepad.FlxGamepadManager.new","flixel/input/gamepad/FlxGamepadManager.hx",18,0xccfee0a6)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(47)
	this->_activeGamepads = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(43)
	this->_gamepads = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(307)
	::openfl::_legacy::display::MovieClip tmp = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(307)
	::openfl::_legacy::display::Stage tmp1 = tmp->get_stage();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(307)
	Dynamic tmp2 = this->handleAxisMove_dyn();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(307)
	tmp1->addEventListener(HX_HCSTRING("axisMove","\x52","\x90","\xf4","\x8f"),tmp2,null(),null(),null());
	HX_STACK_LINE(308)
	::openfl::_legacy::display::MovieClip tmp3 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(308)
	::openfl::_legacy::display::Stage tmp4 = tmp3->get_stage();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(308)
	Dynamic tmp5 = this->handleBallMove_dyn();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(308)
	tmp4->addEventListener(HX_HCSTRING("ballMove","\xb0","\x5c","\xfd","\x37"),tmp5,null(),null(),null());
	HX_STACK_LINE(309)
	::openfl::_legacy::display::MovieClip tmp6 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(309)
	::openfl::_legacy::display::Stage tmp7 = tmp6->get_stage();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(309)
	Dynamic tmp8 = this->handleButtonDownEvent_dyn();		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(309)
	tmp7->addEventListener(HX_HCSTRING("buttonDown","\x74","\x67","\x64","\xac"),tmp8,null(),null(),null());
	HX_STACK_LINE(310)
	::openfl::_legacy::display::MovieClip tmp9 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(310)
	::openfl::_legacy::display::Stage tmp10 = tmp9->get_stage();		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(310)
	Dynamic tmp11 = this->handleButtonUpEvent_dyn();		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(310)
	tmp10->addEventListener(HX_HCSTRING("buttonUp","\xed","\x8c","\x32","\x5c"),tmp11,null(),null(),null());
	HX_STACK_LINE(311)
	::openfl::_legacy::display::MovieClip tmp12 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(311)
	::openfl::_legacy::display::Stage tmp13 = tmp12->get_stage();		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(311)
	Dynamic tmp14 = this->handleHatMove_dyn();		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(311)
	tmp13->addEventListener(HX_HCSTRING("hatMove","\x0c","\x98","\x0b","\xab"),tmp14,null(),null(),null());
	HX_STACK_LINE(312)
	::openfl::_legacy::display::MovieClip tmp15 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(312)
	::openfl::_legacy::display::Stage tmp16 = tmp15->get_stage();		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(312)
	Dynamic tmp17 = this->handleDeviceRemoved_dyn();		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(312)
	tmp16->addEventListener(HX_HCSTRING("deviceRemoved","\xaa","\xc9","\x5b","\x59"),tmp17,null(),null(),null());
	HX_STACK_LINE(313)
	::openfl::_legacy::display::MovieClip tmp18 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(313)
	::openfl::_legacy::display::Stage tmp19 = tmp18->get_stage();		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(313)
	Dynamic tmp20 = this->handleDeviceAdded_dyn();		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(313)
	tmp19->addEventListener(HX_HCSTRING("deviceAdded","\x4a","\x08","\x84","\x0b"),tmp20,null(),null(),null());
}
;
	return null();
}

//FlxGamepadManager_obj::~FlxGamepadManager_obj() { }

Dynamic FlxGamepadManager_obj::__CreateEmpty() { return  new FlxGamepadManager_obj; }
hx::ObjectPtr< FlxGamepadManager_obj > FlxGamepadManager_obj::__new()
{  hx::ObjectPtr< FlxGamepadManager_obj > _result_ = new FlxGamepadManager_obj();
	_result_->__construct();
	return _result_;}

Dynamic FlxGamepadManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxGamepadManager_obj > _result_ = new FlxGamepadManager_obj();
	_result_->__construct();
	return _result_;}

hx::Object *FlxGamepadManager_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::util::IFlxDestroyable_obj)) return operator ::flixel::util::IFlxDestroyable_obj *();
	if (inType==typeid( ::flixel::input::IFlxInputManager_obj)) return operator ::flixel::input::IFlxInputManager_obj *();
	return super::__ToInterface(inType);
}

FlxGamepadManager_obj::operator ::flixel::util::IFlxDestroyable_obj *()
	{ return new ::flixel::util::IFlxDestroyable_delegate_< FlxGamepadManager_obj >(this); }
FlxGamepadManager_obj::operator ::flixel::input::IFlxInputManager_obj *()
	{ return new ::flixel::input::IFlxInputManager_delegate_< FlxGamepadManager_obj >(this); }
::flixel::input::gamepad::FlxGamepad FlxGamepadManager_obj::getByID( int GamepadID){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","getByID",0xe19992f5,"flixel.input.gamepad.FlxGamepadManager.getByID","flixel/input/gamepad/FlxGamepadManager.hx",61,0xccfee0a6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(GamepadID,"GamepadID")
	HX_STACK_LINE(62)
	::flixel::input::gamepad::FlxGamepad tmp = this->_activeGamepads->__get(GamepadID).StaticCast< ::flixel::input::gamepad::FlxGamepad >();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(62)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadManager_obj,getByID,return )

Void FlxGamepadManager_obj::removeByID( int GamepadID){
{
		HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","removeByID",0x7466a829,"flixel.input.gamepad.FlxGamepadManager.removeByID","flixel/input/gamepad/FlxGamepadManager.hx",66,0xccfee0a6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(GamepadID,"GamepadID")
		HX_STACK_LINE(67)
		::flixel::input::gamepad::FlxGamepad tmp = this->_gamepads->__get(GamepadID).StaticCast< ::flixel::input::gamepad::FlxGamepad >();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(67)
		::flixel::input::gamepad::FlxGamepad gamepad = tmp;		HX_STACK_VAR(gamepad,"gamepad");
		HX_STACK_LINE(68)
		bool tmp1 = (gamepad != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(68)
		if ((tmp1)){
			HX_STACK_LINE(70)
			::flixel::input::gamepad::FlxGamepad tmp2 = gamepad;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(70)
			::flixel::util::FlxDestroyUtil_obj::destroy(tmp2);
			HX_STACK_LINE(71)
			this->_gamepads[GamepadID] = null();
			HX_STACK_LINE(73)
			::flixel::input::gamepad::FlxGamepad tmp3 = gamepad;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(73)
			int tmp4 = this->_activeGamepads->indexOf(tmp3,null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(73)
			int i = tmp4;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(74)
			bool tmp5 = (i != (int)-1);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(74)
			if ((tmp5)){
				HX_STACK_LINE(75)
				this->_activeGamepads[i] = null();
			}
		}
		HX_STACK_LINE(78)
		::flixel::input::gamepad::FlxGamepad tmp2 = this->lastActive;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(78)
		::flixel::input::gamepad::FlxGamepad tmp3 = gamepad;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(78)
		bool tmp4 = (tmp2 == tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(78)
		if ((tmp4)){
			HX_STACK_LINE(79)
			this->lastActive = null();
		}
		HX_STACK_LINE(81)
		::flixel::input::gamepad::FlxGamepad tmp5 = this->firstActive;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(81)
		::flixel::input::gamepad::FlxGamepad tmp6 = gamepad;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(81)
		bool tmp7 = (tmp5 == tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(81)
		if ((tmp7)){
			HX_STACK_LINE(82)
			this->firstActive = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadManager_obj,removeByID,(void))

::flixel::input::gamepad::FlxGamepad FlxGamepadManager_obj::createByID( int GamepadID,::flixel::input::gamepad::FlxGamepadModel Model){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","createByID",0x09d52ee1,"flixel.input.gamepad.FlxGamepadManager.createByID","flixel/input/gamepad/FlxGamepadManager.hx",86,0xccfee0a6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(GamepadID,"GamepadID")
	HX_STACK_ARG(Model,"Model")
	HX_STACK_LINE(87)
	::flixel::input::gamepad::FlxGamepad tmp = this->_gamepads->__get(GamepadID).StaticCast< ::flixel::input::gamepad::FlxGamepad >();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(87)
	::flixel::input::gamepad::FlxGamepad gamepad = tmp;		HX_STACK_VAR(gamepad,"gamepad");
	HX_STACK_LINE(88)
	bool tmp1 = (gamepad == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(88)
	if ((tmp1)){
		HX_STACK_LINE(90)
		::flixel::input::gamepad::FlxGamepad tmp2 = ::flixel::input::gamepad::FlxGamepad_obj::__new(GamepadID,hx::ObjectPtr<OBJ_>(this),Model,null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(90)
		gamepad = tmp2;
		HX_STACK_LINE(91)
		::flixel::input::gamepad::FlxGamepad tmp3 = gamepad;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(91)
		this->_gamepads[GamepadID] = tmp3;
		HX_STACK_LINE(94)
		bool nullFound = false;		HX_STACK_VAR(nullFound,"nullFound");
		HX_STACK_LINE(95)
		{
			HX_STACK_LINE(95)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(95)
			int tmp4 = this->_activeGamepads->length;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(95)
			int _g = tmp4;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(95)
			while((true)){
				HX_STACK_LINE(95)
				bool tmp5 = (_g1 < _g);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(95)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(95)
				if ((tmp6)){
					HX_STACK_LINE(95)
					break;
				}
				HX_STACK_LINE(95)
				int tmp7 = (_g1)++;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(95)
				int i = tmp7;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(97)
				::flixel::input::gamepad::FlxGamepad tmp8 = this->_activeGamepads->__get(i).StaticCast< ::flixel::input::gamepad::FlxGamepad >();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(97)
				bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(97)
				if ((tmp9)){
					HX_STACK_LINE(99)
					::flixel::input::gamepad::FlxGamepad tmp10 = gamepad;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(99)
					this->_activeGamepads[i] = tmp10;
					HX_STACK_LINE(100)
					nullFound = true;
					HX_STACK_LINE(101)
					break;
				}
			}
		}
		HX_STACK_LINE(105)
		bool tmp4 = nullFound;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(105)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(105)
		if ((tmp5)){
			HX_STACK_LINE(106)
			::flixel::input::gamepad::FlxGamepad tmp6 = gamepad;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(106)
			this->_activeGamepads->push(tmp6);
		}
	}
	HX_STACK_LINE(109)
	this->lastActive = gamepad;
	HX_STACK_LINE(110)
	::flixel::input::gamepad::FlxGamepad tmp2 = this->firstActive;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(110)
	bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(110)
	if ((tmp3)){
		HX_STACK_LINE(111)
		this->firstActive = gamepad;
	}
	HX_STACK_LINE(113)
	::flixel::input::gamepad::FlxGamepad tmp4 = gamepad;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(113)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxGamepadManager_obj,createByID,return )

Array< int > FlxGamepadManager_obj::getActiveGamepadIDs( Array< int > IDsArray){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","getActiveGamepadIDs",0x2dbae5a0,"flixel.input.gamepad.FlxGamepadManager.getActiveGamepadIDs","flixel/input/gamepad/FlxGamepadManager.hx",123,0xccfee0a6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(IDsArray,"IDsArray")
	HX_STACK_LINE(124)
	bool tmp = (IDsArray == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(124)
	if ((tmp)){
		HX_STACK_LINE(125)
		IDsArray = Array_obj< int >::__new();
	}
	HX_STACK_LINE(127)
	{
		HX_STACK_LINE(127)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(127)
		Array< ::Dynamic > _g1 = this->_gamepads;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(127)
		while((true)){
			HX_STACK_LINE(127)
			bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(127)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(127)
			if ((tmp2)){
				HX_STACK_LINE(127)
				break;
			}
			HX_STACK_LINE(127)
			::flixel::input::gamepad::FlxGamepad tmp3 = _g1->__get(_g).StaticCast< ::flixel::input::gamepad::FlxGamepad >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(127)
			::flixel::input::gamepad::FlxGamepad gamepad = tmp3;		HX_STACK_VAR(gamepad,"gamepad");
			HX_STACK_LINE(127)
			++(_g);
			HX_STACK_LINE(128)
			bool tmp4 = (gamepad != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(128)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(128)
			if ((tmp4)){
				HX_STACK_LINE(128)
				tmp5 = gamepad->anyInput();
			}
			else{
				HX_STACK_LINE(128)
				tmp5 = false;
			}
			HX_STACK_LINE(128)
			if ((tmp5)){
				HX_STACK_LINE(129)
				int tmp6 = gamepad->id;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(129)
				IDsArray->push(tmp6);
			}
		}
	}
	HX_STACK_LINE(131)
	return IDsArray;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadManager_obj,getActiveGamepadIDs,return )

Array< ::Dynamic > FlxGamepadManager_obj::getActiveGamepads( Array< ::Dynamic > GamepadArray){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","getActiveGamepads",0xd3d79bdb,"flixel.input.gamepad.FlxGamepadManager.getActiveGamepads","flixel/input/gamepad/FlxGamepadManager.hx",141,0xccfee0a6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(GamepadArray,"GamepadArray")
	HX_STACK_LINE(142)
	bool tmp = (GamepadArray == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(142)
	if ((tmp)){
		HX_STACK_LINE(143)
		GamepadArray = Array_obj< ::Dynamic >::__new();
	}
	HX_STACK_LINE(145)
	{
		HX_STACK_LINE(145)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(145)
		Array< ::Dynamic > _g1 = this->_gamepads;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(145)
		while((true)){
			HX_STACK_LINE(145)
			bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(145)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(145)
			if ((tmp2)){
				HX_STACK_LINE(145)
				break;
			}
			HX_STACK_LINE(145)
			::flixel::input::gamepad::FlxGamepad tmp3 = _g1->__get(_g).StaticCast< ::flixel::input::gamepad::FlxGamepad >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(145)
			::flixel::input::gamepad::FlxGamepad gamepad = tmp3;		HX_STACK_VAR(gamepad,"gamepad");
			HX_STACK_LINE(145)
			++(_g);
			HX_STACK_LINE(146)
			bool tmp4 = (gamepad != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(146)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(146)
			if ((tmp4)){
				HX_STACK_LINE(146)
				tmp5 = gamepad->anyInput();
			}
			else{
				HX_STACK_LINE(146)
				tmp5 = false;
			}
			HX_STACK_LINE(146)
			if ((tmp5)){
				HX_STACK_LINE(147)
				::flixel::input::gamepad::FlxGamepad tmp6 = gamepad;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(147)
				GamepadArray->push(tmp6);
			}
		}
	}
	HX_STACK_LINE(149)
	return GamepadArray;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadManager_obj,getActiveGamepads,return )

int FlxGamepadManager_obj::getFirstActiveGamepadID( ){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","getFirstActiveGamepadID",0x40a7d549,"flixel.input.gamepad.FlxGamepadManager.getFirstActiveGamepadID","flixel/input/gamepad/FlxGamepadManager.hx",157,0xccfee0a6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(158)
	::flixel::input::gamepad::FlxGamepad tmp = this->getFirstActiveGamepad();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(158)
	::flixel::input::gamepad::FlxGamepad firstActive = tmp;		HX_STACK_VAR(firstActive,"firstActive");
	HX_STACK_LINE(159)
	bool tmp1 = (firstActive == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(159)
	int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(159)
	if ((tmp1)){
		HX_STACK_LINE(159)
		tmp2 = (int)-1;
	}
	else{
		HX_STACK_LINE(159)
		tmp2 = firstActive->id;
	}
	HX_STACK_LINE(159)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadManager_obj,getFirstActiveGamepadID,return )

::flixel::input::gamepad::FlxGamepad FlxGamepadManager_obj::getFirstActiveGamepad( ){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","getFirstActiveGamepad",0x4c49bdee,"flixel.input.gamepad.FlxGamepadManager.getFirstActiveGamepad","flixel/input/gamepad/FlxGamepadManager.hx",167,0xccfee0a6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(168)
	{
		HX_STACK_LINE(168)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(168)
		Array< ::Dynamic > _g1 = this->_gamepads;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(168)
		while((true)){
			HX_STACK_LINE(168)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(168)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(168)
			if ((tmp1)){
				HX_STACK_LINE(168)
				break;
			}
			HX_STACK_LINE(168)
			::flixel::input::gamepad::FlxGamepad tmp2 = _g1->__get(_g).StaticCast< ::flixel::input::gamepad::FlxGamepad >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(168)
			::flixel::input::gamepad::FlxGamepad gamepad = tmp2;		HX_STACK_VAR(gamepad,"gamepad");
			HX_STACK_LINE(168)
			++(_g);
			HX_STACK_LINE(169)
			bool tmp3 = (gamepad != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(169)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(169)
			if ((tmp3)){
				HX_STACK_LINE(169)
				tmp4 = gamepad->anyInput();
			}
			else{
				HX_STACK_LINE(169)
				tmp4 = false;
			}
			HX_STACK_LINE(169)
			if ((tmp4)){
				HX_STACK_LINE(170)
				::flixel::input::gamepad::FlxGamepad tmp5 = gamepad;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(170)
				return tmp5;
			}
		}
	}
	HX_STACK_LINE(172)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadManager_obj,getFirstActiveGamepad,return )

bool FlxGamepadManager_obj::anyButton( hx::Null< int >  __o_state){
int state = __o_state.Default(1);
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","anyButton",0x595b810b,"flixel.input.gamepad.FlxGamepadManager.anyButton","flixel/input/gamepad/FlxGamepadManager.hx",179,0xccfee0a6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(state,"state")
{
		HX_STACK_LINE(180)
		{
			HX_STACK_LINE(180)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(180)
			Array< ::Dynamic > _g1 = this->_gamepads;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(180)
			while((true)){
				HX_STACK_LINE(180)
				bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(180)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(180)
				if ((tmp1)){
					HX_STACK_LINE(180)
					break;
				}
				HX_STACK_LINE(180)
				::flixel::input::gamepad::FlxGamepad tmp2 = _g1->__get(_g).StaticCast< ::flixel::input::gamepad::FlxGamepad >();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(180)
				::flixel::input::gamepad::FlxGamepad gamepad = tmp2;		HX_STACK_VAR(gamepad,"gamepad");
				HX_STACK_LINE(180)
				++(_g);
				HX_STACK_LINE(181)
				bool tmp3 = (gamepad != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(181)
				bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(181)
				if ((tmp3)){
					HX_STACK_LINE(181)
					int tmp5 = state;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(181)
					int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(181)
					tmp4 = gamepad->anyButton(tmp6);
				}
				else{
					HX_STACK_LINE(181)
					tmp4 = false;
				}
				HX_STACK_LINE(181)
				if ((tmp4)){
					HX_STACK_LINE(182)
					return true;
				}
			}
		}
		HX_STACK_LINE(184)
		return false;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadManager_obj,anyButton,return )

bool FlxGamepadManager_obj::anyInput( ){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","anyInput",0xa448cb11,"flixel.input.gamepad.FlxGamepadManager.anyInput","flixel/input/gamepad/FlxGamepadManager.hx",191,0xccfee0a6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(192)
	{
		HX_STACK_LINE(192)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(192)
		Array< ::Dynamic > _g1 = this->_gamepads;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(192)
		while((true)){
			HX_STACK_LINE(192)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(192)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(192)
			if ((tmp1)){
				HX_STACK_LINE(192)
				break;
			}
			HX_STACK_LINE(192)
			::flixel::input::gamepad::FlxGamepad tmp2 = _g1->__get(_g).StaticCast< ::flixel::input::gamepad::FlxGamepad >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(192)
			::flixel::input::gamepad::FlxGamepad gamepad = tmp2;		HX_STACK_VAR(gamepad,"gamepad");
			HX_STACK_LINE(192)
			++(_g);
			HX_STACK_LINE(193)
			bool tmp3 = (gamepad != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(193)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(193)
			if ((tmp3)){
				HX_STACK_LINE(193)
				tmp4 = gamepad->anyInput();
			}
			else{
				HX_STACK_LINE(193)
				tmp4 = false;
			}
			HX_STACK_LINE(193)
			if ((tmp4)){
				HX_STACK_LINE(194)
				return true;
			}
		}
	}
	HX_STACK_LINE(196)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadManager_obj,anyInput,return )

bool FlxGamepadManager_obj::anyPressed( int buttonID){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","anyPressed",0x4626e969,"flixel.input.gamepad.FlxGamepadManager.anyPressed","flixel/input/gamepad/FlxGamepadManager.hx",203,0xccfee0a6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(buttonID,"buttonID")
	HX_STACK_LINE(204)
	int tmp = buttonID;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(204)
	bool tmp1 = this->anyHasState(tmp,(int)1);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(204)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadManager_obj,anyPressed,return )

bool FlxGamepadManager_obj::anyJustPressed( int buttonID){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","anyJustPressed",0x8467941d,"flixel.input.gamepad.FlxGamepadManager.anyJustPressed","flixel/input/gamepad/FlxGamepadManager.hx",211,0xccfee0a6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(buttonID,"buttonID")
	HX_STACK_LINE(212)
	int tmp = buttonID;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(212)
	bool tmp1 = this->anyHasState(tmp,(int)2);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(212)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadManager_obj,anyJustPressed,return )

bool FlxGamepadManager_obj::anyJustReleased( int buttonID){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","anyJustReleased",0x5d1012e2,"flixel.input.gamepad.FlxGamepadManager.anyJustReleased","flixel/input/gamepad/FlxGamepadManager.hx",219,0xccfee0a6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(buttonID,"buttonID")
	HX_STACK_LINE(220)
	int tmp = buttonID;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(220)
	bool tmp1 = this->anyHasState(tmp,(int)-1);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(220)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadManager_obj,anyJustReleased,return )

bool FlxGamepadManager_obj::anyHasState( int buttonID,int state){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","anyHasState",0xbc3797b0,"flixel.input.gamepad.FlxGamepadManager.anyHasState","flixel/input/gamepad/FlxGamepadManager.hx",224,0xccfee0a6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(buttonID,"buttonID")
	HX_STACK_ARG(state,"state")
	HX_STACK_LINE(225)
	{
		HX_STACK_LINE(225)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(225)
		Array< ::Dynamic > _g1 = this->_gamepads;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(225)
		while((true)){
			HX_STACK_LINE(225)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(225)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(225)
			if ((tmp1)){
				HX_STACK_LINE(225)
				break;
			}
			HX_STACK_LINE(225)
			::flixel::input::gamepad::FlxGamepad tmp2 = _g1->__get(_g).StaticCast< ::flixel::input::gamepad::FlxGamepad >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(225)
			::flixel::input::gamepad::FlxGamepad gamepad = tmp2;		HX_STACK_VAR(gamepad,"gamepad");
			HX_STACK_LINE(225)
			++(_g);
			HX_STACK_LINE(226)
			bool tmp3 = (gamepad != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(226)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(226)
			if ((tmp3)){
				HX_STACK_LINE(226)
				int tmp5 = buttonID;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(226)
				int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(226)
				int tmp7 = gamepad->mapping->getRawID(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(226)
				int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(226)
				int tmp9 = state;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(226)
				int tmp10 = tmp8;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(226)
				int tmp11 = tmp9;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(226)
				tmp4 = gamepad->checkStatusRaw(tmp10,tmp11);
			}
			else{
				HX_STACK_LINE(226)
				tmp4 = false;
			}
			HX_STACK_LINE(226)
			if ((tmp4)){
				HX_STACK_LINE(227)
				return true;
			}
		}
	}
	HX_STACK_LINE(229)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxGamepadManager_obj,anyHasState,return )

Float FlxGamepadManager_obj::anyMovedXAxis( ::flixel::input::gamepad::FlxGamepadAnalogStick RawAxisID){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","anyMovedXAxis",0x17da8f9f,"flixel.input.gamepad.FlxGamepadManager.anyMovedXAxis","flixel/input/gamepad/FlxGamepadManager.hx",239,0xccfee0a6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(RawAxisID,"RawAxisID")
	HX_STACK_LINE(240)
	{
		HX_STACK_LINE(240)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(240)
		Array< ::Dynamic > _g1 = this->_gamepads;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(240)
		while((true)){
			HX_STACK_LINE(240)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(240)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(240)
			if ((tmp1)){
				HX_STACK_LINE(240)
				break;
			}
			HX_STACK_LINE(240)
			::flixel::input::gamepad::FlxGamepad tmp2 = _g1->__get(_g).StaticCast< ::flixel::input::gamepad::FlxGamepad >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(240)
			::flixel::input::gamepad::FlxGamepad gamepad = tmp2;		HX_STACK_VAR(gamepad,"gamepad");
			HX_STACK_LINE(240)
			++(_g);
			HX_STACK_LINE(242)
			bool tmp3 = (gamepad == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(242)
			if ((tmp3)){
				HX_STACK_LINE(243)
				continue;
			}
			HX_STACK_LINE(245)
			::flixel::input::gamepad::FlxGamepadAnalogStick tmp4 = RawAxisID;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(245)
			Float tmp5 = gamepad->getAnalogXAxisValue(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(245)
			Float value = tmp5;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(246)
			bool tmp6 = (value != (int)0);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(246)
			if ((tmp6)){
				HX_STACK_LINE(247)
				Float tmp7 = value;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(247)
				return tmp7;
			}
		}
	}
	HX_STACK_LINE(250)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadManager_obj,anyMovedXAxis,return )

Float FlxGamepadManager_obj::anyMovedYAxis( ::flixel::input::gamepad::FlxGamepadAnalogStick RawAxisID){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","anyMovedYAxis",0xab412420,"flixel.input.gamepad.FlxGamepadManager.anyMovedYAxis","flixel/input/gamepad/FlxGamepadManager.hx",260,0xccfee0a6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(RawAxisID,"RawAxisID")
	HX_STACK_LINE(261)
	{
		HX_STACK_LINE(261)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(261)
		Array< ::Dynamic > _g1 = this->_gamepads;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(261)
		while((true)){
			HX_STACK_LINE(261)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(261)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(261)
			if ((tmp1)){
				HX_STACK_LINE(261)
				break;
			}
			HX_STACK_LINE(261)
			::flixel::input::gamepad::FlxGamepad tmp2 = _g1->__get(_g).StaticCast< ::flixel::input::gamepad::FlxGamepad >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(261)
			::flixel::input::gamepad::FlxGamepad gamepad = tmp2;		HX_STACK_VAR(gamepad,"gamepad");
			HX_STACK_LINE(261)
			++(_g);
			HX_STACK_LINE(263)
			bool tmp3 = (gamepad == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(263)
			if ((tmp3)){
				HX_STACK_LINE(264)
				continue;
			}
			HX_STACK_LINE(266)
			::flixel::input::gamepad::FlxGamepadAnalogStick tmp4 = RawAxisID;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(266)
			Float tmp5 = gamepad->getYAxisRaw(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(266)
			Float value = tmp5;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(267)
			bool tmp6 = (value != (int)0);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(267)
			if ((tmp6)){
				HX_STACK_LINE(268)
				Float tmp7 = value;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(268)
				return tmp7;
			}
		}
	}
	HX_STACK_LINE(271)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadManager_obj,anyMovedYAxis,return )

Void FlxGamepadManager_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","destroy",0xf27a16c7,"flixel.input.gamepad.FlxGamepadManager.destroy","flixel/input/gamepad/FlxGamepadManager.hx",279,0xccfee0a6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(280)
		this->_gamepads = ::flixel::util::FlxDestroyUtil_obj::destroyArray(this->_gamepads);
		HX_STACK_LINE(282)
		this->firstActive = null();
		HX_STACK_LINE(283)
		this->lastActive = null();
		HX_STACK_LINE(284)
		this->_gamepads = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadManager_obj,destroy,(void))

Void FlxGamepadManager_obj::reset( ){
{
		HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","reset",0x09fe365c,"flixel.input.gamepad.FlxGamepadManager.reset","flixel/input/gamepad/FlxGamepadManager.hx",298,0xccfee0a6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(298)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(298)
		Array< ::Dynamic > _g1 = this->_gamepads;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(298)
		while((true)){
			HX_STACK_LINE(298)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(298)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(298)
			if ((tmp1)){
				HX_STACK_LINE(298)
				break;
			}
			HX_STACK_LINE(298)
			::flixel::input::gamepad::FlxGamepad tmp2 = _g1->__get(_g).StaticCast< ::flixel::input::gamepad::FlxGamepad >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(298)
			::flixel::input::gamepad::FlxGamepad gamepad = tmp2;		HX_STACK_VAR(gamepad,"gamepad");
			HX_STACK_LINE(298)
			++(_g);
			HX_STACK_LINE(299)
			bool tmp3 = (gamepad != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(299)
			if ((tmp3)){
				HX_STACK_LINE(300)
				gamepad->reset();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadManager_obj,reset,(void))

::flixel::input::gamepad::FlxGamepadModel FlxGamepadManager_obj::getModelFromJoystick( Float id){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","getModelFromJoystick",0x94fdf62c,"flixel.input.gamepad.FlxGamepadManager.getModelFromJoystick","flixel/input/gamepad/FlxGamepadManager.hx",405,0xccfee0a6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(408)
	::flixel::input::gamepad::FlxGamepadModel tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(408)
	{
		HX_STACK_LINE(408)
		Float tmp1 = id;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(408)
		int tmp2 = ::Math_obj::round(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(408)
		int _g = tmp2;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(408)
		int tmp3 = _g;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(408)
		switch( (int)(tmp3)){
			case (int)0: {
				HX_STACK_LINE(410)
				tmp = ::flixel::input::gamepad::FlxGamepadModel_obj::XINPUT;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(411)
				tmp = ::flixel::input::gamepad::FlxGamepadModel_obj::PS4;
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(412)
				tmp = ::flixel::input::gamepad::FlxGamepadModel_obj::OUYA;
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(413)
				tmp = ::flixel::input::gamepad::FlxGamepadModel_obj::MAYFLASH_WII_REMOTE;
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(414)
				tmp = ::flixel::input::gamepad::FlxGamepadModel_obj::WII_REMOTE;
			}
			;break;
			default: {
				HX_STACK_LINE(415)
				tmp = ::flixel::input::gamepad::FlxGamepadModel_obj::UNKNOWN;
			}
		}
	}
	HX_STACK_LINE(408)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadManager_obj,getModelFromJoystick,return )

Void FlxGamepadManager_obj::handleButtonDownEvent( ::openfl::_legacy::events::JoystickEvent event){
{
		HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","handleButtonDownEvent",0x228bc3cb,"flixel.input.gamepad.FlxGamepadManager.handleButtonDownEvent","flixel/input/gamepad/FlxGamepadManager.hx",420,0xccfee0a6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(421)
		int tmp = event->device;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(421)
		int tmp1 = event->id;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(421)
		this->handleButtonDown(tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadManager_obj,handleButtonDownEvent,(void))

Void FlxGamepadManager_obj::handleButtonDown( int device,int id){
{
		HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","handleButtonDown",0x9a9405cf,"flixel.input.gamepad.FlxGamepadManager.handleButtonDown","flixel/input/gamepad/FlxGamepadManager.hx",425,0xccfee0a6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(device,"device")
		HX_STACK_ARG(id,"id")
		HX_STACK_LINE(426)
		int tmp = device;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(426)
		::flixel::input::gamepad::FlxGamepad tmp1 = this->createByID(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(426)
		int tmp2 = id;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(426)
		::flixel::input::gamepad::FlxGamepadButton tmp3 = tmp1->getButton(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(426)
		::flixel::input::gamepad::FlxGamepadButton button = tmp3;		HX_STACK_VAR(button,"button");
		HX_STACK_LINE(427)
		bool tmp4 = (button != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(427)
		if ((tmp4)){
			HX_STACK_LINE(428)
			button->press();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxGamepadManager_obj,handleButtonDown,(void))

Void FlxGamepadManager_obj::handleButtonUpEvent( ::openfl::_legacy::events::JoystickEvent event){
{
		HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","handleButtonUpEvent",0x75a63c72,"flixel.input.gamepad.FlxGamepadManager.handleButtonUpEvent","flixel/input/gamepad/FlxGamepadManager.hx",432,0xccfee0a6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(433)
		int tmp = event->device;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(433)
		int tmp1 = event->id;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(433)
		this->handleButtonUp(tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadManager_obj,handleButtonUpEvent,(void))

Void FlxGamepadManager_obj::handleButtonUp( int device,int id){
{
		HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","handleButtonUp",0x87ba4e88,"flixel.input.gamepad.FlxGamepadManager.handleButtonUp","flixel/input/gamepad/FlxGamepadManager.hx",437,0xccfee0a6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(device,"device")
		HX_STACK_ARG(id,"id")
		HX_STACK_LINE(438)
		int tmp = device;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(438)
		::flixel::input::gamepad::FlxGamepad tmp1 = this->createByID(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(438)
		int tmp2 = id;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(438)
		::flixel::input::gamepad::FlxGamepadButton tmp3 = tmp1->getButton(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(438)
		::flixel::input::gamepad::FlxGamepadButton button = tmp3;		HX_STACK_VAR(button,"button");
		HX_STACK_LINE(439)
		bool tmp4 = (button != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(439)
		if ((tmp4)){
			HX_STACK_LINE(440)
			button->release();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxGamepadManager_obj,handleButtonUp,(void))

Void FlxGamepadManager_obj::handleAxisMove( ::openfl::_legacy::events::JoystickEvent event){
{
		HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","handleAxisMove",0xbb7c51ed,"flixel.input.gamepad.FlxGamepadManager.handleAxisMove","flixel/input/gamepad/FlxGamepadManager.hx",444,0xccfee0a6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(445)
		int device = event->device;		HX_STACK_VAR(device,"device");
		HX_STACK_LINE(446)
		int tmp = device;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(446)
		::flixel::input::gamepad::FlxGamepad tmp1 = this->createByID(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(446)
		::flixel::input::gamepad::FlxGamepad gamepad = tmp1;		HX_STACK_VAR(gamepad,"gamepad");
		HX_STACK_LINE(448)
		Array< Float > oldAxis = gamepad->axis;		HX_STACK_VAR(oldAxis,"oldAxis");
		HX_STACK_LINE(449)
		Array< Float > newAxis = event->axis;		HX_STACK_VAR(newAxis,"newAxis");
		HX_STACK_LINE(451)
		{
			HX_STACK_LINE(451)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(451)
			int _g = newAxis->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(451)
			while((true)){
				HX_STACK_LINE(451)
				bool tmp2 = (_g1 < _g);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(451)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(451)
				if ((tmp3)){
					HX_STACK_LINE(451)
					break;
				}
				HX_STACK_LINE(451)
				int tmp4 = (_g1)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(451)
				int i = tmp4;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(453)
				int tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(453)
				bool tmp6 = gamepad->isAxisForAnalogStick(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(453)
				bool isForStick = tmp6;		HX_STACK_VAR(isForStick,"isForStick");
				HX_STACK_LINE(454)
				int tmp7 = i;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(454)
				bool tmp8 = gamepad->mapping->isAxisForMotion(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(454)
				bool isForMotion = tmp8;		HX_STACK_VAR(isForMotion,"isForMotion");
				HX_STACK_LINE(456)
				bool tmp9 = isForStick;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(456)
				bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(456)
				bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(456)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(456)
				if ((tmp11)){
					HX_STACK_LINE(456)
					bool tmp13 = isForMotion;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(456)
					bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(456)
					tmp12 = !(tmp14);
				}
				else{
					HX_STACK_LINE(456)
					tmp12 = false;
				}
				HX_STACK_LINE(456)
				if ((tmp12)){
					HX_STACK_LINE(460)
					Float tmp13 = newAxis->__get(i);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(460)
					Float tmp14 = (tmp13 + (int)1);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(460)
					Float tmp15 = (Float(tmp14) / Float((int)2));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(460)
					newAxis[i] = tmp15;
				}
				else{
					HX_STACK_LINE(462)
					bool tmp13 = isForStick;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(462)
					if ((tmp13)){
						HX_STACK_LINE(464)
						int tmp14 = i;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(464)
						Float tmp15 = newAxis->__get(i);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(464)
						bool tmp16 = (i >= (int)0);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(464)
						bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(464)
						if ((tmp16)){
							HX_STACK_LINE(464)
							tmp17 = (i < oldAxis->length);
						}
						else{
							HX_STACK_LINE(464)
							tmp17 = false;
						}
						HX_STACK_LINE(464)
						Float tmp18;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(464)
						if ((tmp17)){
							HX_STACK_LINE(464)
							tmp18 = oldAxis->__get(i);
						}
						else{
							HX_STACK_LINE(464)
							tmp18 = (int)0;
						}
						HX_STACK_LINE(464)
						gamepad->handleAxisMove(tmp14,tmp15,tmp18);
					}
				}
			}
		}
		HX_STACK_LINE(468)
		gamepad->axis = newAxis;
		HX_STACK_LINE(469)
		gamepad->axisActive = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadManager_obj,handleAxisMove,(void))

Void FlxGamepadManager_obj::copyToPointWithDeadzone( ::flixel::input::gamepad::FlxGamepad gamepad,::flixel::math::FlxPoint point,::openfl::_legacy::events::JoystickEvent event){
{
		HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","copyToPointWithDeadzone",0xd4338883,"flixel.input.gamepad.FlxGamepadManager.copyToPointWithDeadzone","flixel/input/gamepad/FlxGamepadManager.hx",473,0xccfee0a6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gamepad,"gamepad")
		HX_STACK_ARG(point,"point")
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(474)
		Float tmp = event->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(474)
		Float tmp1 = ::Math_obj::abs(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(474)
		Float tmp2 = gamepad->get_deadZone();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(474)
		bool tmp3 = (tmp1 < tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(474)
		Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(474)
		if ((tmp3)){
			HX_STACK_LINE(474)
			tmp4 = (int)0;
		}
		else{
			HX_STACK_LINE(474)
			tmp4 = event->x;
		}
		HX_STACK_LINE(474)
		point->set_x(tmp4);
		HX_STACK_LINE(475)
		Float tmp5 = event->y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(475)
		Float tmp6 = ::Math_obj::abs(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(475)
		Float tmp7 = gamepad->get_deadZone();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(475)
		bool tmp8 = (tmp6 < tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(475)
		Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(475)
		if ((tmp8)){
			HX_STACK_LINE(475)
			tmp9 = (int)0;
		}
		else{
			HX_STACK_LINE(475)
			tmp9 = event->y;
		}
		HX_STACK_LINE(475)
		point->set_y(tmp9);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxGamepadManager_obj,copyToPointWithDeadzone,(void))

Void FlxGamepadManager_obj::handleBallMove( ::openfl::_legacy::events::JoystickEvent event){
{
		HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","handleBallMove",0x63851e4b,"flixel.input.gamepad.FlxGamepadManager.handleBallMove","flixel/input/gamepad/FlxGamepadManager.hx",479,0xccfee0a6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(480)
		int tmp = event->device;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(480)
		::flixel::input::gamepad::FlxGamepad tmp1 = this->createByID(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(480)
		::flixel::input::gamepad::FlxGamepad gamepad = tmp1;		HX_STACK_VAR(gamepad,"gamepad");
		HX_STACK_LINE(481)
		::flixel::input::gamepad::FlxGamepad tmp2 = gamepad;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(481)
		::flixel::math::FlxPoint tmp3 = gamepad->ball;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(481)
		::openfl::_legacy::events::JoystickEvent tmp4 = event;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(481)
		this->copyToPointWithDeadzone(tmp2,tmp3,tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadManager_obj,handleBallMove,(void))

Void FlxGamepadManager_obj::handleHatMove( ::openfl::_legacy::events::JoystickEvent event){
{
		HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","handleHatMove",0x5f7942d1,"flixel.input.gamepad.FlxGamepadManager.handleHatMove","flixel/input/gamepad/FlxGamepadManager.hx",485,0xccfee0a6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(486)
		int device = event->device;		HX_STACK_VAR(device,"device");
		HX_STACK_LINE(487)
		int tmp = device;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(487)
		::flixel::input::gamepad::FlxGamepad tmp1 = this->createByID(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(487)
		::flixel::input::gamepad::FlxGamepad gamepad = tmp1;		HX_STACK_VAR(gamepad,"gamepad");
		HX_STACK_LINE(489)
		Float tmp2 = gamepad->hat->x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(489)
		Float oldX = tmp2;		HX_STACK_VAR(oldX,"oldX");
		HX_STACK_LINE(490)
		Float tmp3 = gamepad->hat->y;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(490)
		Float oldY = tmp3;		HX_STACK_VAR(oldY,"oldY");
		HX_STACK_LINE(492)
		::flixel::input::gamepad::FlxGamepad tmp4 = gamepad;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(492)
		::flixel::math::FlxPoint tmp5 = gamepad->hat;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(492)
		::openfl::_legacy::events::JoystickEvent tmp6 = event;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(492)
		this->copyToPointWithDeadzone(tmp4,tmp5,tmp6);
		HX_STACK_LINE(494)
		int tmp7 = device;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(494)
		Float tmp8 = oldX;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(494)
		Float tmp9 = gamepad->hat->x;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(494)
		this->checkDpadAxisChange(tmp7,tmp8,tmp9,(int)13,(int)14);
		HX_STACK_LINE(496)
		int tmp10 = device;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(496)
		Float tmp11 = oldY;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(496)
		Float tmp12 = gamepad->hat->y;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(496)
		this->checkDpadAxisChange(tmp10,tmp11,tmp12,(int)11,(int)12);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadManager_obj,handleHatMove,(void))

Void FlxGamepadManager_obj::checkDpadAxisChange( int device,Float oldValue,Float newValue,int negativeID,int positiveID){
{
		HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","checkDpadAxisChange",0x1e10a175,"flixel.input.gamepad.FlxGamepadManager.checkDpadAxisChange","flixel/input/gamepad/FlxGamepadManager.hx",502,0xccfee0a6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(device,"device")
		HX_STACK_ARG(oldValue,"oldValue")
		HX_STACK_ARG(newValue,"newValue")
		HX_STACK_ARG(negativeID,"negativeID")
		HX_STACK_ARG(positiveID,"positiveID")
		HX_STACK_LINE(503)
		bool tmp = (oldValue == newValue);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(503)
		if ((tmp)){
			HX_STACK_LINE(504)
			return null();
		}
		HX_STACK_LINE(506)
		int tmp1 = device;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(506)
		::flixel::input::gamepad::FlxGamepad tmp2 = this->createByID(tmp1,null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(506)
		int tmp3 = negativeID;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(506)
		int tmp4 = tmp2->mapping->getRawID(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(506)
		int rawNegativeID = tmp4;		HX_STACK_VAR(rawNegativeID,"rawNegativeID");
		HX_STACK_LINE(507)
		int tmp5 = device;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(507)
		::flixel::input::gamepad::FlxGamepad tmp6 = this->createByID(tmp5,null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(507)
		int tmp7 = positiveID;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(507)
		int tmp8 = tmp6->mapping->getRawID(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(507)
		int rawPositiveID = tmp8;		HX_STACK_VAR(rawPositiveID,"rawPositiveID");
		HX_STACK_LINE(509)
		bool tmp9 = (oldValue == (int)-1);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(509)
		if ((tmp9)){
			HX_STACK_LINE(510)
			int tmp10 = device;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(510)
			int tmp11 = rawNegativeID;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(510)
			this->handleButtonUp(tmp10,tmp11);
		}
		else{
			HX_STACK_LINE(511)
			bool tmp10 = (oldValue == (int)1);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(511)
			if ((tmp10)){
				HX_STACK_LINE(512)
				int tmp11 = device;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(512)
				int tmp12 = rawPositiveID;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(512)
				this->handleButtonUp(tmp11,tmp12);
			}
		}
		HX_STACK_LINE(514)
		bool tmp10 = (newValue == (int)-1);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(514)
		if ((tmp10)){
			HX_STACK_LINE(515)
			int tmp11 = device;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(515)
			int tmp12 = rawNegativeID;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(515)
			this->handleButtonDown(tmp11,tmp12);
		}
		else{
			HX_STACK_LINE(516)
			bool tmp11 = (newValue == (int)1);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(516)
			if ((tmp11)){
				HX_STACK_LINE(517)
				int tmp12 = device;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(517)
				int tmp13 = rawPositiveID;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(517)
				this->handleButtonDown(tmp12,tmp13);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(FlxGamepadManager_obj,checkDpadAxisChange,(void))

Void FlxGamepadManager_obj::handleDeviceAdded( ::openfl::_legacy::events::JoystickEvent event){
{
		HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","handleDeviceAdded",0x86fef98f,"flixel.input.gamepad.FlxGamepadManager.handleDeviceAdded","flixel/input/gamepad/FlxGamepadManager.hx",521,0xccfee0a6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(522)
		int tmp = event->device;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(522)
		Float tmp1 = event->x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(522)
		::flixel::input::gamepad::FlxGamepadModel tmp2 = this->getModelFromJoystick(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(522)
		this->createByID(tmp,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadManager_obj,handleDeviceAdded,(void))

Void FlxGamepadManager_obj::handleDeviceRemoved( ::openfl::_legacy::events::JoystickEvent event){
{
		HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","handleDeviceRemoved",0xde69562f,"flixel.input.gamepad.FlxGamepadManager.handleDeviceRemoved","flixel/input/gamepad/FlxGamepadManager.hx",526,0xccfee0a6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(527)
		int tmp = event->device;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(527)
		this->removeByID(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadManager_obj,handleDeviceRemoved,(void))

Void FlxGamepadManager_obj::update( ){
{
		HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","update",0x32fe94dc,"flixel.input.gamepad.FlxGamepadManager.update","flixel/input/gamepad/FlxGamepadManager.hx",536,0xccfee0a6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(536)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(536)
		Array< ::Dynamic > _g1 = this->_gamepads;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(536)
		while((true)){
			HX_STACK_LINE(536)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(536)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(536)
			if ((tmp1)){
				HX_STACK_LINE(536)
				break;
			}
			HX_STACK_LINE(536)
			::flixel::input::gamepad::FlxGamepad tmp2 = _g1->__get(_g).StaticCast< ::flixel::input::gamepad::FlxGamepad >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(536)
			::flixel::input::gamepad::FlxGamepad gamepad = tmp2;		HX_STACK_VAR(gamepad,"gamepad");
			HX_STACK_LINE(536)
			++(_g);
			HX_STACK_LINE(537)
			bool tmp3 = (gamepad != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(537)
			if ((tmp3)){
				HX_STACK_LINE(538)
				gamepad->update();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadManager_obj,update,(void))

Void FlxGamepadManager_obj::onFocus( ){
{
		HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","onFocus",0x68bae806,"flixel.input.gamepad.FlxGamepadManager.onFocus","flixel/input/gamepad/FlxGamepadManager.hx",541,0xccfee0a6)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadManager_obj,onFocus,(void))

Void FlxGamepadManager_obj::onFocusLost( ){
{
		HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","onFocusLost",0xeb47390a,"flixel.input.gamepad.FlxGamepadManager.onFocusLost","flixel/input/gamepad/FlxGamepadManager.hx",545,0xccfee0a6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(545)
		this->reset();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadManager_obj,onFocusLost,(void))

int FlxGamepadManager_obj::get_numActiveGamepads( ){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","get_numActiveGamepads",0x4cfd1ae2,"flixel.input.gamepad.FlxGamepadManager.get_numActiveGamepads","flixel/input/gamepad/FlxGamepadManager.hx",549,0xccfee0a6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(550)
	int count = (int)0;		HX_STACK_VAR(count,"count");
	HX_STACK_LINE(551)
	{
		HX_STACK_LINE(551)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(551)
		Array< ::Dynamic > _g1 = this->_gamepads;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(551)
		while((true)){
			HX_STACK_LINE(551)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(551)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(551)
			if ((tmp1)){
				HX_STACK_LINE(551)
				break;
			}
			HX_STACK_LINE(551)
			::flixel::input::gamepad::FlxGamepad tmp2 = _g1->__get(_g).StaticCast< ::flixel::input::gamepad::FlxGamepad >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(551)
			::flixel::input::gamepad::FlxGamepad gamepad = tmp2;		HX_STACK_VAR(gamepad,"gamepad");
			HX_STACK_LINE(551)
			++(_g);
			HX_STACK_LINE(552)
			bool tmp3 = (gamepad != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(552)
			if ((tmp3)){
				HX_STACK_LINE(553)
				(count)++;
			}
		}
	}
	HX_STACK_LINE(554)
	int tmp = count;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(554)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadManager_obj,get_numActiveGamepads,return )


FlxGamepadManager_obj::FlxGamepadManager_obj()
{
}

void FlxGamepadManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxGamepadManager);
	HX_MARK_MEMBER_NAME(firstActive,"firstActive");
	HX_MARK_MEMBER_NAME(lastActive,"lastActive");
	HX_MARK_MEMBER_NAME(numActiveGamepads,"numActiveGamepads");
	HX_MARK_MEMBER_NAME(globalDeadZone,"globalDeadZone");
	HX_MARK_MEMBER_NAME(_gamepads,"_gamepads");
	HX_MARK_MEMBER_NAME(_activeGamepads,"_activeGamepads");
	HX_MARK_END_CLASS();
}

void FlxGamepadManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(firstActive,"firstActive");
	HX_VISIT_MEMBER_NAME(lastActive,"lastActive");
	HX_VISIT_MEMBER_NAME(numActiveGamepads,"numActiveGamepads");
	HX_VISIT_MEMBER_NAME(globalDeadZone,"globalDeadZone");
	HX_VISIT_MEMBER_NAME(_gamepads,"_gamepads");
	HX_VISIT_MEMBER_NAME(_activeGamepads,"_activeGamepads");
}

Dynamic FlxGamepadManager_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getByID") ) { return getByID_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"onFocus") ) { return onFocus_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"anyInput") ) { return anyInput_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_gamepads") ) { return _gamepads; }
		if (HX_FIELD_EQ(inName,"anyButton") ) { return anyButton_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"lastActive") ) { return lastActive; }
		if (HX_FIELD_EQ(inName,"removeByID") ) { return removeByID_dyn(); }
		if (HX_FIELD_EQ(inName,"createByID") ) { return createByID_dyn(); }
		if (HX_FIELD_EQ(inName,"anyPressed") ) { return anyPressed_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"firstActive") ) { return firstActive; }
		if (HX_FIELD_EQ(inName,"anyHasState") ) { return anyHasState_dyn(); }
		if (HX_FIELD_EQ(inName,"onFocusLost") ) { return onFocusLost_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"anyMovedXAxis") ) { return anyMovedXAxis_dyn(); }
		if (HX_FIELD_EQ(inName,"anyMovedYAxis") ) { return anyMovedYAxis_dyn(); }
		if (HX_FIELD_EQ(inName,"handleHatMove") ) { return handleHatMove_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"globalDeadZone") ) { return globalDeadZone; }
		if (HX_FIELD_EQ(inName,"anyJustPressed") ) { return anyJustPressed_dyn(); }
		if (HX_FIELD_EQ(inName,"handleButtonUp") ) { return handleButtonUp_dyn(); }
		if (HX_FIELD_EQ(inName,"handleAxisMove") ) { return handleAxisMove_dyn(); }
		if (HX_FIELD_EQ(inName,"handleBallMove") ) { return handleBallMove_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_activeGamepads") ) { return _activeGamepads; }
		if (HX_FIELD_EQ(inName,"anyJustReleased") ) { return anyJustReleased_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"handleButtonDown") ) { return handleButtonDown_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"numActiveGamepads") ) { return inCallProp == hx::paccAlways ? get_numActiveGamepads() : numActiveGamepads; }
		if (HX_FIELD_EQ(inName,"getActiveGamepads") ) { return getActiveGamepads_dyn(); }
		if (HX_FIELD_EQ(inName,"handleDeviceAdded") ) { return handleDeviceAdded_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"getActiveGamepadIDs") ) { return getActiveGamepadIDs_dyn(); }
		if (HX_FIELD_EQ(inName,"handleButtonUpEvent") ) { return handleButtonUpEvent_dyn(); }
		if (HX_FIELD_EQ(inName,"checkDpadAxisChange") ) { return checkDpadAxisChange_dyn(); }
		if (HX_FIELD_EQ(inName,"handleDeviceRemoved") ) { return handleDeviceRemoved_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"getModelFromJoystick") ) { return getModelFromJoystick_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"getFirstActiveGamepad") ) { return getFirstActiveGamepad_dyn(); }
		if (HX_FIELD_EQ(inName,"handleButtonDownEvent") ) { return handleButtonDownEvent_dyn(); }
		if (HX_FIELD_EQ(inName,"get_numActiveGamepads") ) { return get_numActiveGamepads_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"getFirstActiveGamepadID") ) { return getFirstActiveGamepadID_dyn(); }
		if (HX_FIELD_EQ(inName,"copyToPointWithDeadzone") ) { return copyToPointWithDeadzone_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxGamepadManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"_gamepads") ) { _gamepads=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"lastActive") ) { lastActive=inValue.Cast< ::flixel::input::gamepad::FlxGamepad >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"firstActive") ) { firstActive=inValue.Cast< ::flixel::input::gamepad::FlxGamepad >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"globalDeadZone") ) { globalDeadZone=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_activeGamepads") ) { _activeGamepads=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"numActiveGamepads") ) { numActiveGamepads=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxGamepadManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("firstActive","\x16","\x72","\xe8","\xfa"));
	outFields->push(HX_HCSTRING("lastActive","\xbc","\x24","\x21","\xe1"));
	outFields->push(HX_HCSTRING("numActiveGamepads","\x7e","\x81","\x36","\x4b"));
	outFields->push(HX_HCSTRING("globalDeadZone","\x73","\xc7","\x06","\xa4"));
	outFields->push(HX_HCSTRING("_gamepads","\x11","\xa4","\x34","\x13"));
	outFields->push(HX_HCSTRING("_activeGamepads","\x37","\x29","\x57","\x2d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::input::gamepad::FlxGamepad*/ ,(int)offsetof(FlxGamepadManager_obj,firstActive),HX_HCSTRING("firstActive","\x16","\x72","\xe8","\xfa")},
	{hx::fsObject /*::flixel::input::gamepad::FlxGamepad*/ ,(int)offsetof(FlxGamepadManager_obj,lastActive),HX_HCSTRING("lastActive","\xbc","\x24","\x21","\xe1")},
	{hx::fsInt,(int)offsetof(FlxGamepadManager_obj,numActiveGamepads),HX_HCSTRING("numActiveGamepads","\x7e","\x81","\x36","\x4b")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxGamepadManager_obj,globalDeadZone),HX_HCSTRING("globalDeadZone","\x73","\xc7","\x06","\xa4")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxGamepadManager_obj,_gamepads),HX_HCSTRING("_gamepads","\x11","\xa4","\x34","\x13")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxGamepadManager_obj,_activeGamepads),HX_HCSTRING("_activeGamepads","\x37","\x29","\x57","\x2d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("firstActive","\x16","\x72","\xe8","\xfa"),
	HX_HCSTRING("lastActive","\xbc","\x24","\x21","\xe1"),
	HX_HCSTRING("numActiveGamepads","\x7e","\x81","\x36","\x4b"),
	HX_HCSTRING("globalDeadZone","\x73","\xc7","\x06","\xa4"),
	HX_HCSTRING("_gamepads","\x11","\xa4","\x34","\x13"),
	HX_HCSTRING("_activeGamepads","\x37","\x29","\x57","\x2d"),
	HX_HCSTRING("getByID","\x28","\xa9","\xa5","\x13"),
	HX_HCSTRING("removeByID","\xd6","\x33","\x42","\xbe"),
	HX_HCSTRING("createByID","\x8e","\xba","\xb0","\x53"),
	HX_HCSTRING("getActiveGamepadIDs","\x53","\xfc","\xe8","\xb1"),
	HX_HCSTRING("getActiveGamepads","\xce","\x8f","\x6a","\x56"),
	HX_HCSTRING("getFirstActiveGamepadID","\x7c","\xc1","\x52","\x55"),
	HX_HCSTRING("getFirstActiveGamepad","\x61","\x27","\x31","\xc9"),
	HX_HCSTRING("anyButton","\xfe","\xc9","\x3f","\x37"),
	HX_HCSTRING("anyInput","\x7e","\x21","\xd0","\x3c"),
	HX_HCSTRING("anyPressed","\x16","\x75","\x02","\x90"),
	HX_HCSTRING("anyJustPressed","\x4a","\xfa","\xb6","\xa6"),
	HX_HCSTRING("anyJustReleased","\x15","\x14","\x3a","\x40"),
	HX_HCSTRING("anyHasState","\x63","\x43","\x76","\x12"),
	HX_HCSTRING("anyMovedXAxis","\x12","\xce","\xe1","\x7b"),
	HX_HCSTRING("anyMovedYAxis","\x93","\x62","\x48","\x0f"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	HX_HCSTRING("getModelFromJoystick","\x19","\xbc","\x23","\xb9"),
	HX_HCSTRING("handleButtonDownEvent","\x3e","\x2d","\x73","\x9f"),
	HX_HCSTRING("handleButtonDown","\x3c","\x11","\x2b","\x7c"),
	HX_HCSTRING("handleButtonUpEvent","\x25","\x53","\xd4","\xf9"),
	HX_HCSTRING("handleButtonUp","\xb5","\xb4","\x09","\xaa"),
	HX_HCSTRING("handleAxisMove","\x1a","\xb8","\xcb","\xdd"),
	HX_HCSTRING("copyToPointWithDeadzone","\xb6","\x74","\xde","\xe8"),
	HX_HCSTRING("handleBallMove","\x78","\x84","\xd4","\x85"),
	HX_HCSTRING("handleHatMove","\x44","\x81","\x80","\xc3"),
	HX_HCSTRING("checkDpadAxisChange","\x28","\xb8","\x3e","\xa2"),
	HX_HCSTRING("handleDeviceAdded","\x82","\xed","\x91","\x09"),
	HX_HCSTRING("handleDeviceRemoved","\xe2","\x6c","\x97","\x62"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("onFocus","\x39","\xfe","\xc6","\x9a"),
	HX_HCSTRING("onFocusLost","\xbd","\xe4","\x85","\x41"),
	HX_HCSTRING("get_numActiveGamepads","\x55","\x84","\xe4","\xc9"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxGamepadManager_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxGamepadManager_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxGamepadManager_obj::__mClass;

void FlxGamepadManager_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.input.gamepad.FlxGamepadManager","\x3b","\x35","\x83","\x33");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxGamepadManager_obj >;
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
} // end namespace input
} // end namespace gamepad
