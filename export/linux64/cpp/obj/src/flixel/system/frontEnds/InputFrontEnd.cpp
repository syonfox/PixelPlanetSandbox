#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadManager
#include <flixel/input/gamepad/FlxGamepadManager.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_InputFrontEnd
#include <flixel/system/frontEnds/InputFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
namespace flixel{
namespace _system{
namespace frontEnds{

Void InputFrontEnd_obj::__construct()
{
HX_STACK_FRAME("flixel.system.frontEnds.InputFrontEnd","new",0x5285aa54,"flixel.system.frontEnds.InputFrontEnd.new","flixel/system/frontEnds/InputFrontEnd.hx",7,0x759f67bd)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(18)
	this->resetOnStateSwitch = true;
	HX_STACK_LINE(12)
	this->list = Array_obj< ::flixel::input::IFlxInputManager >::__new();
}
;
	return null();
}

//InputFrontEnd_obj::~InputFrontEnd_obj() { }

Dynamic InputFrontEnd_obj::__CreateEmpty() { return  new InputFrontEnd_obj; }
hx::ObjectPtr< InputFrontEnd_obj > InputFrontEnd_obj::__new()
{  hx::ObjectPtr< InputFrontEnd_obj > _result_ = new InputFrontEnd_obj();
	_result_->__construct();
	return _result_;}

Dynamic InputFrontEnd_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< InputFrontEnd_obj > _result_ = new InputFrontEnd_obj();
	_result_->__construct();
	return _result_;}

::flixel::input::mouse::FlxMouse InputFrontEnd_obj::replace_flixel_input_mouse_FlxMouse( ::flixel::input::mouse::FlxMouse Old,::flixel::input::mouse::FlxMouse New){
	HX_STACK_FRAME("flixel.system.frontEnds.InputFrontEnd","replace_flixel_input_mouse_FlxMouse",0x59a38f0e,"flixel.system.frontEnds.InputFrontEnd.replace_flixel_input_mouse_FlxMouse","flixel/system/frontEnds/InputFrontEnd.hx",73,0x759f67bd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Old,"Old")
	HX_STACK_ARG(New,"New")
	HX_STACK_LINE(74)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(75)
	bool success = false;		HX_STACK_VAR(success,"success");
	HX_STACK_LINE(76)
	{
		HX_STACK_LINE(76)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(76)
		Array< ::flixel::input::IFlxInputManager > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(76)
		while((true)){
			HX_STACK_LINE(76)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(76)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(76)
			if ((tmp1)){
				HX_STACK_LINE(76)
				break;
			}
			HX_STACK_LINE(76)
			::flixel::input::IFlxInputManager tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(76)
			::flixel::input::IFlxInputManager input = tmp2;		HX_STACK_VAR(input,"input");
			HX_STACK_LINE(76)
			++(_g);
			HX_STACK_LINE(78)
			bool tmp3 = (input == Old);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(78)
			if ((tmp3)){
				HX_STACK_LINE(80)
				::flixel::input::mouse::FlxMouse tmp4 = New;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(80)
				hx::IndexRef((this->list).mPtr,i) = tmp4;
				HX_STACK_LINE(81)
				success = true;
				HX_STACK_LINE(82)
				break;
			}
			HX_STACK_LINE(84)
			(i)++;
		}
	}
	HX_STACK_LINE(87)
	bool tmp = success;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(87)
	if ((tmp)){
		HX_STACK_LINE(89)
		::flixel::input::mouse::FlxMouse tmp1 = New;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(89)
		return tmp1;
	}
	HX_STACK_LINE(91)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(InputFrontEnd_obj,replace_flixel_input_mouse_FlxMouse,return )

::flixel::input::gamepad::FlxGamepadManager InputFrontEnd_obj::add_flixel_input_gamepad_FlxGamepadManager( ::flixel::input::gamepad::FlxGamepadManager Input){
	HX_STACK_FRAME("flixel.system.frontEnds.InputFrontEnd","add_flixel_input_gamepad_FlxGamepadManager",0x189964b2,"flixel.system.frontEnds.InputFrontEnd.add_flixel_input_gamepad_FlxGamepadManager","flixel/system/frontEnds/InputFrontEnd.hx",28,0x759f67bd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Input,"Input")
	HX_STACK_LINE(30)
	{
		HX_STACK_LINE(30)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(30)
		Array< ::flixel::input::IFlxInputManager > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(30)
		while((true)){
			HX_STACK_LINE(30)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(30)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(30)
			if ((tmp1)){
				HX_STACK_LINE(30)
				break;
			}
			HX_STACK_LINE(30)
			::flixel::input::IFlxInputManager tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(30)
			::flixel::input::IFlxInputManager input = tmp2;		HX_STACK_VAR(input,"input");
			HX_STACK_LINE(30)
			++(_g);
			HX_STACK_LINE(32)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(32)
			{
				HX_STACK_LINE(32)
				bool Simple = true;		HX_STACK_VAR(Simple,"Simple");
				HX_STACK_LINE(32)
				::flixel::input::gamepad::FlxGamepadManager tmp4 = Input;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(32)
				bool tmp5 = Simple;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(32)
				::String tmp6 = ::flixel::util::FlxStringUtil_obj::getClassName(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(32)
				::flixel::input::IFlxInputManager tmp7 = input;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(32)
				bool tmp8 = Simple;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(32)
				::String tmp9 = ::flixel::util::FlxStringUtil_obj::getClassName(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(32)
				tmp3 = (tmp6 == tmp9);
			}
			HX_STACK_LINE(32)
			if ((tmp3)){
				HX_STACK_LINE(34)
				::flixel::input::gamepad::FlxGamepadManager tmp4 = Input;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(34)
				return tmp4;
			}
		}
	}
	HX_STACK_LINE(38)
	::flixel::input::gamepad::FlxGamepadManager tmp = Input;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(38)
	this->list->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp);
	HX_STACK_LINE(39)
	::flixel::input::gamepad::FlxGamepadManager tmp1 = Input;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(39)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(InputFrontEnd_obj,add_flixel_input_gamepad_FlxGamepadManager,return )

::flixel::input::mouse::FlxMouse InputFrontEnd_obj::add_flixel_input_mouse_FlxMouse( ::flixel::input::mouse::FlxMouse Input){
	HX_STACK_FRAME("flixel.system.frontEnds.InputFrontEnd","add_flixel_input_mouse_FlxMouse",0xe1e4487b,"flixel.system.frontEnds.InputFrontEnd.add_flixel_input_mouse_FlxMouse","flixel/system/frontEnds/InputFrontEnd.hx",28,0x759f67bd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Input,"Input")
	HX_STACK_LINE(30)
	{
		HX_STACK_LINE(30)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(30)
		Array< ::flixel::input::IFlxInputManager > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(30)
		while((true)){
			HX_STACK_LINE(30)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(30)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(30)
			if ((tmp1)){
				HX_STACK_LINE(30)
				break;
			}
			HX_STACK_LINE(30)
			::flixel::input::IFlxInputManager tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(30)
			::flixel::input::IFlxInputManager input = tmp2;		HX_STACK_VAR(input,"input");
			HX_STACK_LINE(30)
			++(_g);
			HX_STACK_LINE(32)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(32)
			{
				HX_STACK_LINE(32)
				bool Simple = true;		HX_STACK_VAR(Simple,"Simple");
				HX_STACK_LINE(32)
				::flixel::input::mouse::FlxMouse tmp4 = Input;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(32)
				bool tmp5 = Simple;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(32)
				::String tmp6 = ::flixel::util::FlxStringUtil_obj::getClassName(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(32)
				::flixel::input::IFlxInputManager tmp7 = input;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(32)
				bool tmp8 = Simple;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(32)
				::String tmp9 = ::flixel::util::FlxStringUtil_obj::getClassName(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(32)
				tmp3 = (tmp6 == tmp9);
			}
			HX_STACK_LINE(32)
			if ((tmp3)){
				HX_STACK_LINE(34)
				::flixel::input::mouse::FlxMouse tmp4 = Input;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(34)
				return tmp4;
			}
		}
	}
	HX_STACK_LINE(38)
	::flixel::input::mouse::FlxMouse tmp = Input;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(38)
	this->list->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp);
	HX_STACK_LINE(39)
	::flixel::input::mouse::FlxMouse tmp1 = Input;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(39)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(InputFrontEnd_obj,add_flixel_input_mouse_FlxMouse,return )

::flixel::input::keyboard::FlxKeyboard InputFrontEnd_obj::add_flixel_input_keyboard_FlxKeyboard( ::flixel::input::keyboard::FlxKeyboard Input){
	HX_STACK_FRAME("flixel.system.frontEnds.InputFrontEnd","add_flixel_input_keyboard_FlxKeyboard",0xa934da2f,"flixel.system.frontEnds.InputFrontEnd.add_flixel_input_keyboard_FlxKeyboard","flixel/system/frontEnds/InputFrontEnd.hx",28,0x759f67bd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Input,"Input")
	HX_STACK_LINE(30)
	{
		HX_STACK_LINE(30)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(30)
		Array< ::flixel::input::IFlxInputManager > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(30)
		while((true)){
			HX_STACK_LINE(30)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(30)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(30)
			if ((tmp1)){
				HX_STACK_LINE(30)
				break;
			}
			HX_STACK_LINE(30)
			::flixel::input::IFlxInputManager tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(30)
			::flixel::input::IFlxInputManager input = tmp2;		HX_STACK_VAR(input,"input");
			HX_STACK_LINE(30)
			++(_g);
			HX_STACK_LINE(32)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(32)
			{
				HX_STACK_LINE(32)
				bool Simple = true;		HX_STACK_VAR(Simple,"Simple");
				HX_STACK_LINE(32)
				::flixel::input::keyboard::FlxKeyboard tmp4 = Input;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(32)
				bool tmp5 = Simple;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(32)
				::String tmp6 = ::flixel::util::FlxStringUtil_obj::getClassName(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(32)
				::flixel::input::IFlxInputManager tmp7 = input;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(32)
				bool tmp8 = Simple;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(32)
				::String tmp9 = ::flixel::util::FlxStringUtil_obj::getClassName(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(32)
				tmp3 = (tmp6 == tmp9);
			}
			HX_STACK_LINE(32)
			if ((tmp3)){
				HX_STACK_LINE(34)
				::flixel::input::keyboard::FlxKeyboard tmp4 = Input;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(34)
				return tmp4;
			}
		}
	}
	HX_STACK_LINE(38)
	::flixel::input::keyboard::FlxKeyboard tmp = Input;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(38)
	this->list->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp);
	HX_STACK_LINE(39)
	::flixel::input::keyboard::FlxKeyboard tmp1 = Input;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(39)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(InputFrontEnd_obj,add_flixel_input_keyboard_FlxKeyboard,return )

Void InputFrontEnd_obj::reset( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.InputFrontEnd","reset",0x8c9b88c3,"flixel.system.frontEnds.InputFrontEnd.reset","flixel/system/frontEnds/InputFrontEnd.hx",96,0x759f67bd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(96)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(96)
		Array< ::flixel::input::IFlxInputManager > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(96)
		while((true)){
			HX_STACK_LINE(96)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(96)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(96)
			if ((tmp1)){
				HX_STACK_LINE(96)
				break;
			}
			HX_STACK_LINE(96)
			::flixel::input::IFlxInputManager tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(96)
			::flixel::input::IFlxInputManager input = tmp2;		HX_STACK_VAR(input,"input");
			HX_STACK_LINE(96)
			++(_g);
			HX_STACK_LINE(98)
			input->reset();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(InputFrontEnd_obj,reset,(void))

Void InputFrontEnd_obj::update( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.InputFrontEnd","update",0xfa095c95,"flixel.system.frontEnds.InputFrontEnd.update","flixel/system/frontEnds/InputFrontEnd.hx",108,0x759f67bd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(108)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(108)
		Array< ::flixel::input::IFlxInputManager > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(108)
		while((true)){
			HX_STACK_LINE(108)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(108)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(108)
			if ((tmp1)){
				HX_STACK_LINE(108)
				break;
			}
			HX_STACK_LINE(108)
			::flixel::input::IFlxInputManager tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(108)
			::flixel::input::IFlxInputManager input = tmp2;		HX_STACK_VAR(input,"input");
			HX_STACK_LINE(108)
			++(_g);
			HX_STACK_LINE(110)
			input->update();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(InputFrontEnd_obj,update,(void))

Void InputFrontEnd_obj::onFocus( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.InputFrontEnd","onFocus",0xcb1ee22d,"flixel.system.frontEnds.InputFrontEnd.onFocus","flixel/system/frontEnds/InputFrontEnd.hx",117,0x759f67bd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(117)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(117)
		Array< ::flixel::input::IFlxInputManager > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(117)
		while((true)){
			HX_STACK_LINE(117)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(117)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(117)
			if ((tmp1)){
				HX_STACK_LINE(117)
				break;
			}
			HX_STACK_LINE(117)
			::flixel::input::IFlxInputManager tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(117)
			::flixel::input::IFlxInputManager input = tmp2;		HX_STACK_VAR(input,"input");
			HX_STACK_LINE(117)
			++(_g);
			HX_STACK_LINE(119)
			input->onFocus();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(InputFrontEnd_obj,onFocus,(void))

Void InputFrontEnd_obj::onFocusLost( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.InputFrontEnd","onFocusLost",0x5cd0d2b1,"flixel.system.frontEnds.InputFrontEnd.onFocusLost","flixel/system/frontEnds/InputFrontEnd.hx",126,0x759f67bd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(126)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(126)
		Array< ::flixel::input::IFlxInputManager > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(126)
		while((true)){
			HX_STACK_LINE(126)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(126)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(126)
			if ((tmp1)){
				HX_STACK_LINE(126)
				break;
			}
			HX_STACK_LINE(126)
			::flixel::input::IFlxInputManager tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(126)
			::flixel::input::IFlxInputManager input = tmp2;		HX_STACK_VAR(input,"input");
			HX_STACK_LINE(126)
			++(_g);
			HX_STACK_LINE(128)
			input->onFocusLost();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(InputFrontEnd_obj,onFocusLost,(void))

Void InputFrontEnd_obj::onStateSwitch( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.InputFrontEnd","onStateSwitch",0x594606fa,"flixel.system.frontEnds.InputFrontEnd.onStateSwitch","flixel/system/frontEnds/InputFrontEnd.hx",135,0x759f67bd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(136)
		bool tmp = this->resetOnStateSwitch;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(136)
		if ((tmp)){
			HX_STACK_LINE(138)
			this->reset();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(InputFrontEnd_obj,onStateSwitch,(void))

Void InputFrontEnd_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.InputFrontEnd","destroy",0x54de10ee,"flixel.system.frontEnds.InputFrontEnd.destroy","flixel/system/frontEnds/InputFrontEnd.hx",144,0x759f67bd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(144)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(144)
		Array< ::flixel::input::IFlxInputManager > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(144)
		while((true)){
			HX_STACK_LINE(144)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(144)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(144)
			if ((tmp1)){
				HX_STACK_LINE(144)
				break;
			}
			HX_STACK_LINE(144)
			::flixel::input::IFlxInputManager tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(144)
			::flixel::input::IFlxInputManager input = tmp2;		HX_STACK_VAR(input,"input");
			HX_STACK_LINE(144)
			++(_g);
			HX_STACK_LINE(146)
			::flixel::input::IFlxInputManager tmp3 = input;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(146)
			::flixel::input::IFlxInputManager tmp4 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(146)
			input = tmp4;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(InputFrontEnd_obj,destroy,(void))


InputFrontEnd_obj::InputFrontEnd_obj()
{
}

void InputFrontEnd_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(InputFrontEnd);
	HX_MARK_MEMBER_NAME(list,"list");
	HX_MARK_MEMBER_NAME(resetOnStateSwitch,"resetOnStateSwitch");
	HX_MARK_END_CLASS();
}

void InputFrontEnd_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(list,"list");
	HX_VISIT_MEMBER_NAME(resetOnStateSwitch,"resetOnStateSwitch");
}

Dynamic InputFrontEnd_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { return list; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onFocus") ) { return onFocus_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onFocusLost") ) { return onFocusLost_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"onStateSwitch") ) { return onStateSwitch_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"resetOnStateSwitch") ) { return resetOnStateSwitch; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"add_flixel_input_mouse_FlxMouse") ) { return add_flixel_input_mouse_FlxMouse_dyn(); }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"replace_flixel_input_mouse_FlxMouse") ) { return replace_flixel_input_mouse_FlxMouse_dyn(); }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"add_flixel_input_keyboard_FlxKeyboard") ) { return add_flixel_input_keyboard_FlxKeyboard_dyn(); }
		break;
	case 42:
		if (HX_FIELD_EQ(inName,"add_flixel_input_gamepad_FlxGamepadManager") ) { return add_flixel_input_gamepad_FlxGamepadManager_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic InputFrontEnd_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { list=inValue.Cast< Array< ::flixel::input::IFlxInputManager > >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"resetOnStateSwitch") ) { resetOnStateSwitch=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void InputFrontEnd_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"));
	outFields->push(HX_HCSTRING("resetOnStateSwitch","\xb7","\x84","\x01","\x3e"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::flixel::input::IFlxInputManager >*/ ,(int)offsetof(InputFrontEnd_obj,list),HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47")},
	{hx::fsBool,(int)offsetof(InputFrontEnd_obj,resetOnStateSwitch),HX_HCSTRING("resetOnStateSwitch","\xb7","\x84","\x01","\x3e")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("replace_flixel_input_mouse_FlxMouse","\x1a","\x65","\xd5","\xe3"),
	HX_HCSTRING("add_flixel_input_gamepad_FlxGamepadManager","\x26","\xa8","\x4b","\x80"),
	HX_HCSTRING("add_flixel_input_mouse_FlxMouse","\x87","\x28","\x57","\xa0"),
	HX_HCSTRING("add_flixel_input_keyboard_FlxKeyboard","\x3b","\x4b","\x11","\x84"),
	HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"),
	HX_HCSTRING("resetOnStateSwitch","\xb7","\x84","\x01","\x3e"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("onFocus","\x39","\xfe","\xc6","\x9a"),
	HX_HCSTRING("onFocusLost","\xbd","\xe4","\x85","\x41"),
	HX_HCSTRING("onStateSwitch","\x06","\xb4","\xec","\xa2"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(InputFrontEnd_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(InputFrontEnd_obj::__mClass,"__mClass");
};

#endif

hx::Class InputFrontEnd_obj::__mClass;

void InputFrontEnd_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.frontEnds.InputFrontEnd","\x62","\x30","\x2d","\x70");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< InputFrontEnd_obj >;
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
} // end namespace frontEnds
