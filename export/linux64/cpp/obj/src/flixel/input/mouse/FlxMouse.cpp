#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouseButton
#include <flixel/input/mouse/FlxMouseButton.h>
#endif
#ifndef INCLUDED_flixel_input_mouse__FlxMouse_GraphicCursor
#include <flixel/input/mouse/_FlxMouse/GraphicCursor.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SignalFrontEnd
#include <flixel/system/frontEnds/SignalFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_replay_MouseRecord
#include <flixel/system/replay/MouseRecord.h>
#endif
#ifndef INCLUDED_flixel_system_scaleModes_BaseScaleMode
#include <flixel/system/scaleModes/BaseScaleMode.h>
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
#ifndef INCLUDED_flixel_util_IFlxSignal
#include <flixel/util/IFlxSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxBaseSignal
#include <flixel/util/_FlxSignal/FlxBaseSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal0
#include <flixel/util/_FlxSignal/FlxSignal0.h>
#endif
#ifndef INCLUDED_openfl__legacy_AssetType
#include <openfl/_legacy/AssetType.h>
#endif
#ifndef INCLUDED_openfl__legacy_Assets
#include <openfl/_legacy/Assets.h>
#endif
#ifndef INCLUDED_openfl__legacy_Lib
#include <openfl/_legacy/Lib.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Bitmap
#include <openfl/_legacy/display/Bitmap.h>
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
#ifndef INCLUDED_openfl__legacy_display_MovieClip
#include <openfl/_legacy/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_PixelSnapping
#include <openfl/_legacy/display/PixelSnapping.h>
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
#ifndef INCLUDED_openfl__legacy_events_MouseEvent
#include <openfl/_legacy/events/MouseEvent.h>
#endif
#ifndef INCLUDED_openfl__legacy_ui_Mouse
#include <openfl/_legacy/ui/Mouse.h>
#endif
namespace flixel{
namespace input{
namespace mouse{

Void FlxMouse_obj::__construct(::openfl::_legacy::display::Sprite CursorContainer)
{
HX_STACK_FRAME("flixel.input.mouse.FlxMouse","new",0x1251bd04,"flixel.input.mouse.FlxMouse.new","flixel/input/mouse/FlxMouse.hx",34,0xe4e80b89)
HX_STACK_THIS(this)
HX_STACK_ARG(CursorContainer,"CursorContainer")
{
	HX_STACK_LINE(134)
	this->_lastWheel = (int)0;
	HX_STACK_LINE(133)
	this->_lastY = (int)0;
	HX_STACK_LINE(132)
	this->_lastX = (int)0;
	HX_STACK_LINE(127)
	this->_visibleWhenFocusLost = true;
	HX_STACK_LINE(126)
	this->_wheelUsed = false;
	HX_STACK_LINE(124)
	this->_cursor = null();
	HX_STACK_LINE(60)
	this->useSystemCursor = false;
	HX_STACK_LINE(56)
	this->visible = true;
	HX_STACK_LINE(45)
	this->wheel = (int)0;
	HX_STACK_LINE(40)
	this->enabled = true;
	HX_STACK_LINE(374)
	super::__construct();
	HX_STACK_LINE(375)
	this->cursorContainer = CursorContainer;
	HX_STACK_LINE(376)
	::openfl::_legacy::display::Sprite tmp = this->cursorContainer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(376)
	tmp->set_mouseChildren(false);
	HX_STACK_LINE(377)
	::openfl::_legacy::display::Sprite tmp1 = this->cursorContainer;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(377)
	tmp1->set_mouseEnabled(false);
	HX_STACK_LINE(379)
	::flixel::input::mouse::FlxMouseButton tmp2 = ::flixel::input::mouse::FlxMouseButton_obj::__new((int)-1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(379)
	this->_leftButton = tmp2;
	HX_STACK_LINE(381)
	::openfl::_legacy::display::MovieClip tmp3 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(381)
	::openfl::_legacy::display::Stage tmp4 = tmp3->get_stage();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(381)
	this->_stage = tmp4;
	HX_STACK_LINE(382)
	::openfl::_legacy::display::Stage tmp5 = this->_stage;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(382)
	::String tmp6 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_DOWN;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(382)
	::flixel::input::mouse::FlxMouseButton tmp7 = this->_leftButton;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(382)
	Dynamic tmp8 = tmp7->onDown_dyn();		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(382)
	tmp5->addEventListener(tmp6,tmp8,null(),null(),null());
	HX_STACK_LINE(383)
	::openfl::_legacy::display::Stage tmp9 = this->_stage;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(383)
	::String tmp10 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_UP;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(383)
	::flixel::input::mouse::FlxMouseButton tmp11 = this->_leftButton;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(383)
	Dynamic tmp12 = tmp11->onUp_dyn();		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(383)
	tmp9->addEventListener(tmp10,tmp12,null(),null(),null());
	HX_STACK_LINE(386)
	::flixel::input::mouse::FlxMouseButton tmp13 = ::flixel::input::mouse::FlxMouseButton_obj::__new((int)-2);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(386)
	this->_middleButton = tmp13;
	HX_STACK_LINE(387)
	::flixel::input::mouse::FlxMouseButton tmp14 = ::flixel::input::mouse::FlxMouseButton_obj::__new((int)-3);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(387)
	this->_rightButton = tmp14;
	HX_STACK_LINE(389)
	::openfl::_legacy::display::Stage tmp15 = this->_stage;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(389)
	::String tmp16 = ::openfl::_legacy::events::MouseEvent_obj::MIDDLE_MOUSE_DOWN;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(389)
	::flixel::input::mouse::FlxMouseButton tmp17 = this->_middleButton;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(389)
	Dynamic tmp18 = tmp17->onDown_dyn();		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(389)
	tmp15->addEventListener(tmp16,tmp18,null(),null(),null());
	HX_STACK_LINE(390)
	::openfl::_legacy::display::Stage tmp19 = this->_stage;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(390)
	::String tmp20 = ::openfl::_legacy::events::MouseEvent_obj::MIDDLE_MOUSE_UP;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(390)
	::flixel::input::mouse::FlxMouseButton tmp21 = this->_middleButton;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(390)
	Dynamic tmp22 = tmp21->onUp_dyn();		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(390)
	tmp19->addEventListener(tmp20,tmp22,null(),null(),null());
	HX_STACK_LINE(391)
	::openfl::_legacy::display::Stage tmp23 = this->_stage;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(391)
	::String tmp24 = ::openfl::_legacy::events::MouseEvent_obj::RIGHT_MOUSE_DOWN;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(391)
	::flixel::input::mouse::FlxMouseButton tmp25 = this->_rightButton;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(391)
	Dynamic tmp26 = tmp25->onDown_dyn();		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(391)
	tmp23->addEventListener(tmp24,tmp26,null(),null(),null());
	HX_STACK_LINE(392)
	::openfl::_legacy::display::Stage tmp27 = this->_stage;		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(392)
	::String tmp28 = ::openfl::_legacy::events::MouseEvent_obj::RIGHT_MOUSE_UP;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(392)
	::flixel::input::mouse::FlxMouseButton tmp29 = this->_rightButton;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(392)
	Dynamic tmp30 = tmp29->onUp_dyn();		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(392)
	tmp27->addEventListener(tmp28,tmp30,null(),null(),null());
	HX_STACK_LINE(394)
	::openfl::_legacy::display::Stage tmp31 = this->_stage;		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(394)
	::String tmp32 = ::openfl::_legacy::events::Event_obj::MOUSE_LEAVE;		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(394)
	Dynamic tmp33 = this->onMouseLeave_dyn();		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(394)
	tmp31->addEventListener(tmp32,tmp33,null(),null(),null());
	HX_STACK_LINE(397)
	::openfl::_legacy::display::Stage tmp34 = this->_stage;		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(397)
	::String tmp35 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_WHEEL;		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(397)
	Dynamic tmp36 = this->onMouseWheel_dyn();		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(397)
	tmp34->addEventListener(tmp35,tmp36,null(),null(),null());
	HX_STACK_LINE(399)
	{
		HX_STACK_LINE(399)
		::flixel::_system::frontEnds::SignalFrontEnd tmp37 = ::flixel::FlxG_obj::signals;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(399)
		Dynamic tmp38 = this->onGameStart_dyn();		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(399)
		tmp37->__Field(HX_HCSTRING("gameStarted","\x6f","\x9f","\xd1","\x19"), hx::paccDynamic )->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )(tmp38);
	}
	HX_STACK_LINE(400)
	::openfl::_legacy::ui::Mouse_obj::hide();
}
;
	return null();
}

//FlxMouse_obj::~FlxMouse_obj() { }

Dynamic FlxMouse_obj::__CreateEmpty() { return  new FlxMouse_obj; }
hx::ObjectPtr< FlxMouse_obj > FlxMouse_obj::__new(::openfl::_legacy::display::Sprite CursorContainer)
{  hx::ObjectPtr< FlxMouse_obj > _result_ = new FlxMouse_obj();
	_result_->__construct(CursorContainer);
	return _result_;}

Dynamic FlxMouse_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxMouse_obj > _result_ = new FlxMouse_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

hx::Object *FlxMouse_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::util::IFlxDestroyable_obj)) return operator ::flixel::util::IFlxDestroyable_obj *();
	if (inType==typeid( ::flixel::input::IFlxInputManager_obj)) return operator ::flixel::input::IFlxInputManager_obj *();
	return super::__ToInterface(inType);
}

FlxMouse_obj::operator ::flixel::util::IFlxDestroyable_obj *()
	{ return new ::flixel::util::IFlxDestroyable_delegate_< FlxMouse_obj >(this); }
FlxMouse_obj::operator ::flixel::input::IFlxInputManager_obj *()
	{ return new ::flixel::input::IFlxInputManager_delegate_< FlxMouse_obj >(this); }
Void FlxMouse_obj::load( Dynamic Graphic,hx::Null< Float >  __o_Scale,hx::Null< int >  __o_XOffset,hx::Null< int >  __o_YOffset){
Float Scale = __o_Scale.Default(1);
int XOffset = __o_XOffset.Default(0);
int YOffset = __o_YOffset.Default(0);
	HX_STACK_FRAME("flixel.input.mouse.FlxMouse","load",0xf3e8bd02,"flixel.input.mouse.FlxMouse.load","flixel/input/mouse/FlxMouse.hx",161,0xe4e80b89)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Graphic,"Graphic")
	HX_STACK_ARG(Scale,"Scale")
	HX_STACK_ARG(XOffset,"XOffset")
	HX_STACK_ARG(YOffset,"YOffset")
{
		HX_STACK_LINE(163)
		::openfl::_legacy::display::Bitmap tmp = this->_cursor;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(163)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(163)
		if ((tmp1)){
			HX_STACK_LINE(165)
			::openfl::_legacy::display::Sprite tmp2 = this->cursorContainer;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(165)
			::openfl::_legacy::display::Bitmap tmp3 = this->_cursor;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(165)
			::flixel::util::FlxDestroyUtil_obj::removeChild(tmp2,tmp3);
		}
		HX_STACK_LINE(169)
		bool tmp2 = (Graphic == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(169)
		if ((tmp2)){
			HX_STACK_LINE(171)
			::flixel::input::mouse::_FlxMouse::GraphicCursor tmp3 = ::flixel::input::mouse::_FlxMouse::GraphicCursor_obj::__new((int)0,(int)0,null(),null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(171)
			Graphic = tmp3;
		}
		HX_STACK_LINE(174)
		Dynamic tmp3 = Graphic;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(174)
		bool tmp4 = ::Std_obj::is(tmp3,hx::ClassOf< ::hx::Class >());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(174)
		if ((tmp4)){
			HX_STACK_LINE(176)
			Dynamic tmp5 = Graphic;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(176)
			::openfl::_legacy::display::Bitmap tmp6 = ::Type_obj::createInstance(tmp5,cpp::ArrayBase_obj::__new());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(176)
			this->_cursor = tmp6;
		}
		else{
			HX_STACK_LINE(178)
			Dynamic tmp5 = Graphic;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(178)
			bool tmp6 = ::Std_obj::is(tmp5,hx::ClassOf< ::openfl::_legacy::display::BitmapData >());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(178)
			if ((tmp6)){
				HX_STACK_LINE(180)
				::openfl::_legacy::display::Bitmap tmp7 = ::openfl::_legacy::display::Bitmap_obj::__new(((::openfl::_legacy::display::BitmapData)(Graphic)),null(),null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(180)
				this->_cursor = tmp7;
			}
			else{
				HX_STACK_LINE(182)
				Dynamic tmp7 = Graphic;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(182)
				bool tmp8 = ::Std_obj::is(tmp7,hx::ClassOf< ::String >());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(182)
				if ((tmp8)){
					HX_STACK_LINE(184)
					::openfl::_legacy::display::BitmapData tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(184)
					{
						HX_STACK_LINE(184)
						::String id = Graphic;		HX_STACK_VAR(id,"id");
						HX_STACK_LINE(184)
						::String tmp10 = id;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(184)
						bool tmp11 = ::openfl::_legacy::Assets_obj::exists(tmp10,null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(184)
						if ((tmp11)){
							HX_STACK_LINE(184)
							::String tmp12 = id;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(184)
							tmp9 = ::openfl::_legacy::Assets_obj::getBitmapData(tmp12,false);
						}
						else{
							HX_STACK_LINE(184)
							tmp9 = null();
						}
					}
					HX_STACK_LINE(184)
					::openfl::_legacy::display::Bitmap tmp10 = ::openfl::_legacy::display::Bitmap_obj::__new(tmp9,null(),null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(184)
					this->_cursor = tmp10;
				}
				else{
					HX_STACK_LINE(188)
					::flixel::input::mouse::_FlxMouse::GraphicCursor tmp9 = ::flixel::input::mouse::_FlxMouse::GraphicCursor_obj::__new((int)0,(int)0,null(),null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(188)
					::openfl::_legacy::display::Bitmap tmp10 = ::openfl::_legacy::display::Bitmap_obj::__new(tmp9,null(),null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(188)
					this->_cursor = tmp10;
				}
			}
		}
		HX_STACK_LINE(191)
		::openfl::_legacy::display::Bitmap tmp5 = this->_cursor;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(191)
		int tmp6 = XOffset;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(191)
		tmp5->set_x(tmp6);
		HX_STACK_LINE(192)
		::openfl::_legacy::display::Bitmap tmp7 = this->_cursor;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(192)
		int tmp8 = YOffset;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(192)
		tmp7->set_y(tmp8);
		HX_STACK_LINE(193)
		::openfl::_legacy::display::Bitmap tmp9 = this->_cursor;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(193)
		Float tmp10 = Scale;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(193)
		tmp9->set_scaleX(tmp10);
		HX_STACK_LINE(194)
		::openfl::_legacy::display::Bitmap tmp11 = this->_cursor;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(194)
		Float tmp12 = Scale;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(194)
		tmp11->set_scaleY(tmp12);
		HX_STACK_LINE(223)
		::openfl::_legacy::display::Sprite tmp13 = this->cursorContainer;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(223)
		::openfl::_legacy::display::Bitmap tmp14 = this->_cursor;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(223)
		tmp13->addChild(tmp14);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxMouse_obj,load,(void))

Void FlxMouse_obj::unload( ){
{
		HX_STACK_FRAME("flixel.input.mouse.FlxMouse","unload",0x5a7132db,"flixel.input.mouse.FlxMouse.unload","flixel/input/mouse/FlxMouse.hx",232,0xe4e80b89)
		HX_STACK_THIS(this)
		HX_STACK_LINE(233)
		::openfl::_legacy::display::Bitmap tmp = this->_cursor;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(233)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(233)
		if ((tmp1)){
			HX_STACK_LINE(235)
			::openfl::_legacy::display::Sprite tmp2 = this->cursorContainer;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(235)
			bool tmp3 = tmp2->get_visible();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(235)
			if ((tmp3)){
				HX_STACK_LINE(237)
				this->load(null(),null(),null(),null());
			}
			else{
				HX_STACK_LINE(241)
				::openfl::_legacy::display::Sprite tmp4 = this->cursorContainer;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(241)
				::openfl::_legacy::display::Bitmap tmp5 = this->_cursor;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(241)
				::openfl::_legacy::display::Bitmap tmp6 = ::flixel::util::FlxDestroyUtil_obj::removeChild(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(241)
				this->_cursor = tmp6;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,unload,(void))

Void FlxMouse_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.input.mouse.FlxMouse","destroy",0x77a13b9e,"flixel.input.mouse.FlxMouse.destroy","flixel/input/mouse/FlxMouse.hx",320,0xe4e80b89)
		HX_STACK_THIS(this)
		HX_STACK_LINE(321)
		::openfl::_legacy::display::Stage tmp = this->_stage;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(321)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(321)
		if ((tmp1)){
			HX_STACK_LINE(323)
			::openfl::_legacy::display::Stage tmp2 = this->_stage;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(323)
			::String tmp3 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_DOWN;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(323)
			::flixel::input::mouse::FlxMouseButton tmp4 = this->_leftButton;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(323)
			Dynamic tmp5 = tmp4->onDown_dyn();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(323)
			tmp2->removeEventListener(tmp3,tmp5,null());
			HX_STACK_LINE(324)
			::openfl::_legacy::display::Stage tmp6 = this->_stage;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(324)
			::String tmp7 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_UP;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(324)
			::flixel::input::mouse::FlxMouseButton tmp8 = this->_leftButton;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(324)
			Dynamic tmp9 = tmp8->onUp_dyn();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(324)
			tmp6->removeEventListener(tmp7,tmp9,null());
			HX_STACK_LINE(327)
			::openfl::_legacy::display::Stage tmp10 = this->_stage;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(327)
			::String tmp11 = ::openfl::_legacy::events::MouseEvent_obj::MIDDLE_MOUSE_DOWN;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(327)
			::flixel::input::mouse::FlxMouseButton tmp12 = this->_middleButton;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(327)
			Dynamic tmp13 = tmp12->onDown_dyn();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(327)
			tmp10->removeEventListener(tmp11,tmp13,null());
			HX_STACK_LINE(328)
			::openfl::_legacy::display::Stage tmp14 = this->_stage;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(328)
			::String tmp15 = ::openfl::_legacy::events::MouseEvent_obj::MIDDLE_MOUSE_UP;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(328)
			::flixel::input::mouse::FlxMouseButton tmp16 = this->_middleButton;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(328)
			Dynamic tmp17 = tmp16->onUp_dyn();		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(328)
			tmp14->removeEventListener(tmp15,tmp17,null());
			HX_STACK_LINE(329)
			::openfl::_legacy::display::Stage tmp18 = this->_stage;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(329)
			::String tmp19 = ::openfl::_legacy::events::MouseEvent_obj::RIGHT_MOUSE_DOWN;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(329)
			::flixel::input::mouse::FlxMouseButton tmp20 = this->_rightButton;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(329)
			Dynamic tmp21 = tmp20->onDown_dyn();		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(329)
			tmp18->removeEventListener(tmp19,tmp21,null());
			HX_STACK_LINE(330)
			::openfl::_legacy::display::Stage tmp22 = this->_stage;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(330)
			::String tmp23 = ::openfl::_legacy::events::MouseEvent_obj::RIGHT_MOUSE_UP;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(330)
			::flixel::input::mouse::FlxMouseButton tmp24 = this->_rightButton;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(330)
			Dynamic tmp25 = tmp24->onUp_dyn();		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(330)
			tmp22->removeEventListener(tmp23,tmp25,null());
			HX_STACK_LINE(332)
			::openfl::_legacy::display::Stage tmp26 = this->_stage;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(332)
			::String tmp27 = ::openfl::_legacy::events::Event_obj::MOUSE_LEAVE;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(332)
			Dynamic tmp28 = this->onMouseLeave_dyn();		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(332)
			tmp26->removeEventListener(tmp27,tmp28,null());
			HX_STACK_LINE(335)
			::openfl::_legacy::display::Stage tmp29 = this->_stage;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(335)
			::String tmp30 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_WHEEL;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(335)
			Dynamic tmp31 = this->onMouseWheel_dyn();		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(335)
			tmp29->removeEventListener(tmp30,tmp31,null());
		}
		HX_STACK_LINE(338)
		this->cursorContainer = null();
		HX_STACK_LINE(339)
		this->_cursor = null();
		HX_STACK_LINE(345)
		::flixel::input::mouse::FlxMouseButton tmp2 = this->_leftButton;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(345)
		::flixel::input::mouse::FlxMouseButton tmp3 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(345)
		this->_leftButton = tmp3;
		HX_STACK_LINE(347)
		::flixel::input::mouse::FlxMouseButton tmp4 = this->_middleButton;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(347)
		::flixel::input::mouse::FlxMouseButton tmp5 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(347)
		this->_middleButton = tmp5;
		HX_STACK_LINE(348)
		::flixel::input::mouse::FlxMouseButton tmp6 = this->_rightButton;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(348)
		::flixel::input::mouse::FlxMouseButton tmp7 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(348)
		this->_rightButton = tmp7;
		HX_STACK_LINE(351)
		::openfl::_legacy::display::BitmapData tmp8 = this->_cursorBitmapData;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(351)
		::openfl::_legacy::display::BitmapData tmp9 = ::flixel::util::FlxDestroyUtil_obj::dispose(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(351)
		this->_cursorBitmapData = tmp9;
		HX_STACK_LINE(352)
		{
			HX_STACK_LINE(352)
			::flixel::_system::frontEnds::SignalFrontEnd tmp10 = ::flixel::FlxG_obj::signals;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(352)
			Dynamic tmp11 = this->onGameStart_dyn();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(352)
			tmp10->__Field(HX_HCSTRING("gameStarted","\x6f","\x9f","\xd1","\x19"), hx::paccDynamic )->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(tmp11);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,destroy,(void))

Void FlxMouse_obj::reset( ){
{
		HX_STACK_FRAME("flixel.input.mouse.FlxMouse","reset",0xe595a773,"flixel.input.mouse.FlxMouse.reset","flixel/input/mouse/FlxMouse.hx",359,0xe4e80b89)
		HX_STACK_THIS(this)
		HX_STACK_LINE(360)
		::flixel::input::mouse::FlxMouseButton tmp = this->_leftButton;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(360)
		tmp->reset();
		HX_STACK_LINE(363)
		::flixel::input::mouse::FlxMouseButton tmp1 = this->_middleButton;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(363)
		tmp1->reset();
		HX_STACK_LINE(364)
		::flixel::input::mouse::FlxMouseButton tmp2 = this->_rightButton;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(364)
		tmp2->reset();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,reset,(void))

Void FlxMouse_obj::update( ){
{
		HX_STACK_FRAME("flixel.input.mouse.FlxMouse","update",0x7bea17e5,"flixel.input.mouse.FlxMouse.update","flixel/input/mouse/FlxMouse.hx",408,0xe4e80b89)
		HX_STACK_THIS(this)
		HX_STACK_LINE(410)
		{
			HX_STACK_LINE(410)
			::flixel::FlxGame tmp = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(410)
			Float tmp1 = tmp->get_mouseX();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(410)
			Float newX = tmp1;		HX_STACK_VAR(newX,"newX");
			HX_STACK_LINE(410)
			::flixel::FlxGame tmp2 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(410)
			Float tmp3 = tmp2->get_mouseY();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(410)
			Float newY = tmp3;		HX_STACK_VAR(newY,"newY");
			HX_STACK_LINE(410)
			Float tmp4 = newX;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(410)
			::flixel::_system::scaleModes::BaseScaleMode tmp5 = ::flixel::FlxG_obj::scaleMode;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(410)
			Float tmp6 = tmp5->__Field(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"), hx::paccDynamic )->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(410)
			Float tmp7 = (Float(tmp4) / Float(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(410)
			int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(410)
			this->_globalScreenX = tmp8;
			HX_STACK_LINE(410)
			Float tmp9 = newY;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(410)
			::flixel::_system::scaleModes::BaseScaleMode tmp10 = ::flixel::FlxG_obj::scaleMode;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(410)
			Float tmp11 = tmp10->__Field(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"), hx::paccDynamic )->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(410)
			Float tmp12 = (Float(tmp9) / Float(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(410)
			int tmp13 = ::Std_obj::_int(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(410)
			this->_globalScreenY = tmp13;
			HX_STACK_LINE(410)
			this->updatePositions();
		}
		HX_STACK_LINE(413)
		bool tmp = this->visible;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(413)
		if ((tmp)){
			HX_STACK_LINE(415)
			::openfl::_legacy::display::Sprite tmp1 = this->cursorContainer;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(415)
			::flixel::FlxGame tmp2 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(415)
			Float tmp3 = tmp2->get_mouseX();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(415)
			tmp1->set_x(tmp3);
			HX_STACK_LINE(416)
			::openfl::_legacy::display::Sprite tmp4 = this->cursorContainer;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(416)
			::flixel::FlxGame tmp5 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(416)
			Float tmp6 = tmp5->get_mouseY();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(416)
			tmp4->set_y(tmp6);
		}
		HX_STACK_LINE(421)
		::flixel::input::mouse::FlxMouseButton tmp1 = this->_leftButton;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(421)
		tmp1->update();
		HX_STACK_LINE(423)
		::flixel::input::mouse::FlxMouseButton tmp2 = this->_middleButton;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(423)
		tmp2->update();
		HX_STACK_LINE(424)
		::flixel::input::mouse::FlxMouseButton tmp3 = this->_rightButton;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(424)
		tmp3->update();
		HX_STACK_LINE(428)
		bool tmp4 = this->_wheelUsed;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(428)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(428)
		if ((tmp5)){
			HX_STACK_LINE(430)
			this->wheel = (int)0;
		}
		HX_STACK_LINE(432)
		this->_wheelUsed = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,update,(void))

Void FlxMouse_obj::onFocus( ){
{
		HX_STACK_FRAME("flixel.input.mouse.FlxMouse","onFocus",0xede20cdd,"flixel.input.mouse.FlxMouse.onFocus","flixel/input/mouse/FlxMouse.hx",439,0xe4e80b89)
		HX_STACK_THIS(this)
		HX_STACK_LINE(440)
		this->reset();
		HX_STACK_LINE(443)
		bool tmp = this->useSystemCursor;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(443)
		this->set_useSystemCursor(tmp);
		HX_STACK_LINE(445)
		bool tmp1 = this->_visibleWhenFocusLost;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(445)
		this->set_visible(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,onFocus,(void))

Void FlxMouse_obj::onFocusLost( ){
{
		HX_STACK_FRAME("flixel.input.mouse.FlxMouse","onFocusLost",0xc7f71561,"flixel.input.mouse.FlxMouse.onFocusLost","flixel/input/mouse/FlxMouse.hx",453,0xe4e80b89)
		HX_STACK_THIS(this)
		HX_STACK_LINE(455)
		bool tmp = this->visible;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(455)
		this->_visibleWhenFocusLost = tmp;
		HX_STACK_LINE(457)
		bool tmp1 = this->visible;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(457)
		if ((tmp1)){
			HX_STACK_LINE(459)
			this->set_visible(false);
		}
		HX_STACK_LINE(462)
		::openfl::_legacy::ui::Mouse_obj::show();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,onFocusLost,(void))

Void FlxMouse_obj::onGameStart( ){
{
		HX_STACK_FRAME("flixel.input.mouse.FlxMouse","onGameStart",0x61da7695,"flixel.input.mouse.FlxMouse.onGameStart","flixel/input/mouse/FlxMouse.hx",467,0xe4e80b89)
		HX_STACK_THIS(this)
		HX_STACK_LINE(470)
		bool tmp = this->visible;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(470)
		this->set_visible(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,onGameStart,(void))

Void FlxMouse_obj::onMouseWheel( ::openfl::_legacy::events::MouseEvent FlashEvent){
{
		HX_STACK_FRAME("flixel.input.mouse.FlxMouse","onMouseWheel",0xdc642911,"flixel.input.mouse.FlxMouse.onMouseWheel","flixel/input/mouse/FlxMouse.hx",477,0xe4e80b89)
		HX_STACK_THIS(this)
		HX_STACK_ARG(FlashEvent,"FlashEvent")
		HX_STACK_LINE(478)
		bool tmp = this->enabled;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(478)
		if ((tmp)){
			HX_STACK_LINE(480)
			this->_wheelUsed = true;
			HX_STACK_LINE(481)
			this->wheel = FlashEvent->delta;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxMouse_obj,onMouseWheel,(void))

Void FlxMouse_obj::onMouseLeave( Dynamic _){
{
		HX_STACK_FRAME("flixel.input.mouse.FlxMouse","onMouseLeave",0x84fd296d,"flixel.input.mouse.FlxMouse.onMouseLeave","flixel/input/mouse/FlxMouse.hx",491,0xe4e80b89)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(492)
		::flixel::input::mouse::FlxMouseButton tmp = this->_rightButton;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(492)
		tmp->onUp(null());
		HX_STACK_LINE(493)
		::flixel::input::mouse::FlxMouseButton tmp1 = this->_middleButton;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(493)
		tmp1->onUp(null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxMouse_obj,onMouseLeave,(void))

bool FlxMouse_obj::get_pressed( ){
	HX_STACK_FRAME("flixel.input.mouse.FlxMouse","get_pressed",0x4652635d,"flixel.input.mouse.FlxMouse.get_pressed","flixel/input/mouse/FlxMouse.hx",497,0xe4e80b89)
	HX_STACK_THIS(this)
	HX_STACK_LINE(497)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(497)
	{
		HX_STACK_LINE(497)
		::flixel::input::mouse::FlxMouseButton tmp1 = this->_leftButton;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(497)
		::flixel::input::mouse::FlxMouseButton _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(497)
		bool tmp2 = (_this->current == (int)1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(497)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(497)
		if ((tmp3)){
			HX_STACK_LINE(497)
			tmp = (_this->current == (int)2);
		}
		else{
			HX_STACK_LINE(497)
			tmp = true;
		}
	}
	HX_STACK_LINE(497)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,get_pressed,return )

bool FlxMouse_obj::get_justPressed( ){
	HX_STACK_FRAME("flixel.input.mouse.FlxMouse","get_justPressed",0x70091811,"flixel.input.mouse.FlxMouse.get_justPressed","flixel/input/mouse/FlxMouse.hx",498,0xe4e80b89)
	HX_STACK_THIS(this)
	HX_STACK_LINE(498)
	::flixel::input::mouse::FlxMouseButton tmp = this->_leftButton;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(498)
	int tmp1 = tmp->current;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(498)
	bool tmp2 = (tmp1 == (int)2);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(498)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,get_justPressed,return )

bool FlxMouse_obj::get_justReleased( ){
	HX_STACK_FRAME("flixel.input.mouse.FlxMouse","get_justReleased",0x9ec2046e,"flixel.input.mouse.FlxMouse.get_justReleased","flixel/input/mouse/FlxMouse.hx",499,0xe4e80b89)
	HX_STACK_THIS(this)
	HX_STACK_LINE(499)
	::flixel::input::mouse::FlxMouseButton tmp = this->_leftButton;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(499)
	int tmp1 = tmp->current;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(499)
	bool tmp2 = (tmp1 == (int)-1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(499)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,get_justReleased,return )

bool FlxMouse_obj::get_pressedRight( ){
	HX_STACK_FRAME("flixel.input.mouse.FlxMouse","get_pressedRight",0x90e8c73f,"flixel.input.mouse.FlxMouse.get_pressedRight","flixel/input/mouse/FlxMouse.hx",502,0xe4e80b89)
	HX_STACK_THIS(this)
	HX_STACK_LINE(502)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(502)
	{
		HX_STACK_LINE(502)
		::flixel::input::mouse::FlxMouseButton tmp1 = this->_rightButton;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(502)
		::flixel::input::mouse::FlxMouseButton _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(502)
		bool tmp2 = (_this->current == (int)1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(502)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(502)
		if ((tmp3)){
			HX_STACK_LINE(502)
			tmp = (_this->current == (int)2);
		}
		else{
			HX_STACK_LINE(502)
			tmp = true;
		}
	}
	HX_STACK_LINE(502)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,get_pressedRight,return )

bool FlxMouse_obj::get_justPressedRight( ){
	HX_STACK_FRAME("flixel.input.mouse.FlxMouse","get_justPressedRight",0xa8a2860b,"flixel.input.mouse.FlxMouse.get_justPressedRight","flixel/input/mouse/FlxMouse.hx",503,0xe4e80b89)
	HX_STACK_THIS(this)
	HX_STACK_LINE(503)
	::flixel::input::mouse::FlxMouseButton tmp = this->_rightButton;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(503)
	int tmp1 = tmp->current;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(503)
	bool tmp2 = (tmp1 == (int)2);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(503)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,get_justPressedRight,return )

bool FlxMouse_obj::get_justReleasedRight( ){
	HX_STACK_FRAME("flixel.input.mouse.FlxMouse","get_justReleasedRight",0x8742a88e,"flixel.input.mouse.FlxMouse.get_justReleasedRight","flixel/input/mouse/FlxMouse.hx",504,0xe4e80b89)
	HX_STACK_THIS(this)
	HX_STACK_LINE(504)
	::flixel::input::mouse::FlxMouseButton tmp = this->_rightButton;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(504)
	int tmp1 = tmp->current;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(504)
	bool tmp2 = (tmp1 == (int)-1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(504)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,get_justReleasedRight,return )

bool FlxMouse_obj::get_pressedMiddle( ){
	HX_STACK_FRAME("flixel.input.mouse.FlxMouse","get_pressedMiddle",0x38fe0e92,"flixel.input.mouse.FlxMouse.get_pressedMiddle","flixel/input/mouse/FlxMouse.hx",506,0xe4e80b89)
	HX_STACK_THIS(this)
	HX_STACK_LINE(506)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(506)
	{
		HX_STACK_LINE(506)
		::flixel::input::mouse::FlxMouseButton tmp1 = this->_middleButton;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(506)
		::flixel::input::mouse::FlxMouseButton _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(506)
		bool tmp2 = (_this->current == (int)1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(506)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(506)
		if ((tmp3)){
			HX_STACK_LINE(506)
			tmp = (_this->current == (int)2);
		}
		else{
			HX_STACK_LINE(506)
			tmp = true;
		}
	}
	HX_STACK_LINE(506)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,get_pressedMiddle,return )

bool FlxMouse_obj::get_justPressedMiddle( ){
	HX_STACK_FRAME("flixel.input.mouse.FlxMouse","get_justPressedMiddle",0xe3cb4246,"flixel.input.mouse.FlxMouse.get_justPressedMiddle","flixel/input/mouse/FlxMouse.hx",507,0xe4e80b89)
	HX_STACK_THIS(this)
	HX_STACK_LINE(507)
	::flixel::input::mouse::FlxMouseButton tmp = this->_middleButton;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(507)
	int tmp1 = tmp->current;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(507)
	bool tmp2 = (tmp1 == (int)2);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(507)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,get_justPressedMiddle,return )

bool FlxMouse_obj::get_justReleasedMiddle( ){
	HX_STACK_FRAME("flixel.input.mouse.FlxMouse","get_justReleasedMiddle",0xd1495263,"flixel.input.mouse.FlxMouse.get_justReleasedMiddle","flixel/input/mouse/FlxMouse.hx",508,0xe4e80b89)
	HX_STACK_THIS(this)
	HX_STACK_LINE(508)
	::flixel::input::mouse::FlxMouseButton tmp = this->_middleButton;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(508)
	int tmp1 = tmp->current;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(508)
	bool tmp2 = (tmp1 == (int)-1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(508)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,get_justReleasedMiddle,return )

Void FlxMouse_obj::showSystemCursor( ){
{
		HX_STACK_FRAME("flixel.input.mouse.FlxMouse","showSystemCursor",0xf4551c9e,"flixel.input.mouse.FlxMouse.showSystemCursor","flixel/input/mouse/FlxMouse.hx",512,0xe4e80b89)
		HX_STACK_THIS(this)
		HX_STACK_LINE(516)
		::openfl::_legacy::display::Sprite tmp = this->cursorContainer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(516)
		tmp->set_visible(false);
		HX_STACK_LINE(519)
		::openfl::_legacy::ui::Mouse_obj::show();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,showSystemCursor,(void))

Void FlxMouse_obj::hideSystemCursor( ){
{
		HX_STACK_FRAME("flixel.input.mouse.FlxMouse","hideSystemCursor",0xb5438fe3,"flixel.input.mouse.FlxMouse.hideSystemCursor","flixel/input/mouse/FlxMouse.hx",523,0xe4e80b89)
		HX_STACK_THIS(this)
		HX_STACK_LINE(530)
		::openfl::_legacy::ui::Mouse_obj::hide();
		HX_STACK_LINE(532)
		bool tmp = this->visible;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(532)
		if ((tmp)){
			HX_STACK_LINE(534)
			::openfl::_legacy::display::Sprite tmp1 = this->cursorContainer;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(534)
			tmp1->set_visible(true);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,hideSystemCursor,(void))

bool FlxMouse_obj::set_useSystemCursor( bool Value){
	HX_STACK_FRAME("flixel.input.mouse.FlxMouse","set_useSystemCursor",0x074e74d3,"flixel.input.mouse.FlxMouse.set_useSystemCursor","flixel/input/mouse/FlxMouse.hx",540,0xe4e80b89)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(541)
	bool tmp = Value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(541)
	if ((tmp)){
		HX_STACK_LINE(543)
		this->showSystemCursor();
	}
	else{
		HX_STACK_LINE(547)
		this->hideSystemCursor();
	}
	HX_STACK_LINE(549)
	bool tmp1 = this->useSystemCursor = Value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(549)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxMouse_obj,set_useSystemCursor,return )

Void FlxMouse_obj::showCursor( ){
{
		HX_STACK_FRAME("flixel.input.mouse.FlxMouse","showCursor",0xa585e38f,"flixel.input.mouse.FlxMouse.showCursor","flixel/input/mouse/FlxMouse.hx",553,0xe4e80b89)
		HX_STACK_THIS(this)
		HX_STACK_LINE(554)
		bool tmp = this->useSystemCursor;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(554)
		if ((tmp)){
			HX_STACK_LINE(556)
			::openfl::_legacy::ui::Mouse_obj::show();
		}
		else{
			HX_STACK_LINE(560)
			::openfl::_legacy::display::Bitmap tmp1 = this->_cursor;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(560)
			bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(560)
			if ((tmp2)){
				HX_STACK_LINE(561)
				this->load(null(),null(),null(),null());
			}
			HX_STACK_LINE(566)
			::openfl::_legacy::display::Sprite tmp3 = this->cursorContainer;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(566)
			tmp3->set_visible(true);
			HX_STACK_LINE(567)
			::openfl::_legacy::ui::Mouse_obj::hide();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,showCursor,(void))

Void FlxMouse_obj::hideCursor( ){
{
		HX_STACK_FRAME("flixel.input.mouse.FlxMouse","hideCursor",0xd396e514,"flixel.input.mouse.FlxMouse.hideCursor","flixel/input/mouse/FlxMouse.hx",573,0xe4e80b89)
		HX_STACK_THIS(this)
		HX_STACK_LINE(574)
		::openfl::_legacy::display::Sprite tmp = this->cursorContainer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(574)
		tmp->set_visible(false);
		HX_STACK_LINE(575)
		::openfl::_legacy::ui::Mouse_obj::hide();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,hideCursor,(void))

bool FlxMouse_obj::set_visible( bool Value){
	HX_STACK_FRAME("flixel.input.mouse.FlxMouse","set_visible",0xb9fd1039,"flixel.input.mouse.FlxMouse.set_visible","flixel/input/mouse/FlxMouse.hx",579,0xe4e80b89)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(580)
	bool tmp = Value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(580)
	if ((tmp)){
		HX_STACK_LINE(581)
		this->showCursor();
	}
	else{
		HX_STACK_LINE(583)
		this->hideCursor();
	}
	HX_STACK_LINE(585)
	bool tmp1 = this->visible = Value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(585)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxMouse_obj,set_visible,return )

::flixel::_system::replay::MouseRecord FlxMouse_obj::record( ){
	HX_STACK_FRAME("flixel.input.mouse.FlxMouse","record",0xf2d1086d,"flixel.input.mouse.FlxMouse.record","flixel/input/mouse/FlxMouse.hx",590,0xe4e80b89)
	HX_STACK_THIS(this)
	HX_STACK_LINE(591)
	int tmp = this->_lastX;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(591)
	int tmp1 = this->_globalScreenX;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(591)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(591)
	bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(591)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(591)
	if ((tmp3)){
		HX_STACK_LINE(591)
		int tmp5 = this->_lastY;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(591)
		int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(591)
		int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(591)
		int tmp8 = this->_globalScreenY;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(591)
		int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(591)
		int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(591)
		tmp4 = (tmp7 == tmp10);
	}
	else{
		HX_STACK_LINE(591)
		tmp4 = false;
	}
	HX_STACK_LINE(591)
	bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(591)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(591)
	if ((tmp5)){
		HX_STACK_LINE(592)
		int tmp7 = this->_lastLeftButtonState;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(592)
		int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(592)
		int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(592)
		::flixel::input::mouse::FlxMouseButton tmp10 = this->_leftButton;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(592)
		::flixel::input::mouse::FlxMouseButton tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(592)
		::flixel::input::mouse::FlxMouseButton tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(592)
		int tmp13 = tmp12->current;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(592)
		tmp6 = (tmp9 == tmp13);
	}
	else{
		HX_STACK_LINE(591)
		tmp6 = false;
	}
	HX_STACK_LINE(591)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(591)
	if ((tmp6)){
		HX_STACK_LINE(592)
		int tmp8 = this->_lastWheel;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(592)
		int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(592)
		int tmp10 = this->wheel;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(592)
		int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(592)
		tmp7 = (tmp9 == tmp11);
	}
	else{
		HX_STACK_LINE(591)
		tmp7 = false;
	}
	HX_STACK_LINE(591)
	if ((tmp7)){
		HX_STACK_LINE(594)
		return null();
	}
	HX_STACK_LINE(597)
	int tmp8 = this->_globalScreenX;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(597)
	this->_lastX = tmp8;
	HX_STACK_LINE(598)
	int tmp9 = this->_globalScreenY;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(598)
	this->_lastY = tmp9;
	HX_STACK_LINE(599)
	::flixel::input::mouse::FlxMouseButton tmp10 = this->_leftButton;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(599)
	this->_lastLeftButtonState = tmp10->current;
	HX_STACK_LINE(600)
	int tmp11 = this->wheel;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(600)
	this->_lastWheel = tmp11;
	HX_STACK_LINE(601)
	int tmp12 = this->_lastX;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(601)
	int tmp13 = this->_lastY;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(601)
	::flixel::input::mouse::FlxMouseButton tmp14 = this->_leftButton;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(601)
	int tmp15 = tmp14->current;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(601)
	int tmp16 = this->_lastWheel;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(601)
	::flixel::_system::replay::MouseRecord tmp17 = ::flixel::_system::replay::MouseRecord_obj::__new(tmp12,tmp13,tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(601)
	return tmp17;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,record,return )

Void FlxMouse_obj::playback( ::flixel::_system::replay::MouseRecord Record){
{
		HX_STACK_FRAME("flixel.input.mouse.FlxMouse","playback",0xaadcd2f7,"flixel.input.mouse.FlxMouse.playback","flixel/input/mouse/FlxMouse.hx",606,0xe4e80b89)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Record,"Record")
		HX_STACK_LINE(610)
		int tmp = this->_lastLeftButtonState;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(610)
		bool tmp1 = (tmp == (int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(610)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(610)
		bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(610)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(610)
		if ((tmp3)){
			HX_STACK_LINE(610)
			int tmp5 = this->_lastLeftButtonState;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(610)
			int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(610)
			int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(610)
			tmp4 = (tmp7 == (int)2);
		}
		else{
			HX_STACK_LINE(610)
			tmp4 = true;
		}
		HX_STACK_LINE(610)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(610)
		if ((tmp4)){
			HX_STACK_LINE(611)
			bool tmp6 = (Record->__Field(HX_HCSTRING("button","\xf2","\x61","\xe0","\xd9"), hx::paccDynamic ) == (int)0);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(611)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(611)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(611)
			bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(611)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(611)
			bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(611)
			if ((tmp11)){
				HX_STACK_LINE(611)
				tmp5 = (Record->__Field(HX_HCSTRING("button","\xf2","\x61","\xe0","\xd9"), hx::paccDynamic ) == (int)-1);
			}
			else{
				HX_STACK_LINE(611)
				tmp5 = true;
			}
		}
		else{
			HX_STACK_LINE(610)
			tmp5 = false;
		}
		HX_STACK_LINE(610)
		if ((tmp5)){
			HX_STACK_LINE(613)
			::openfl::_legacy::display::Stage tmp6 = this->_stage;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(613)
			::String tmp7 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_UP;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(613)
			int tmp8 = Record->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(613)
			int tmp9 = Record->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(613)
			::openfl::_legacy::events::MouseEvent tmp10 = ::openfl::_legacy::events::MouseEvent_obj::__new(tmp7,true,false,tmp8,tmp9,null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(613)
			tmp6->dispatchEvent(tmp10);
		}
		HX_STACK_LINE(615)
		::flixel::input::mouse::FlxMouseButton tmp6 = this->_leftButton;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(615)
		int tmp7 = tmp6->current = Record->__Field(HX_HCSTRING("button","\xf2","\x61","\xe0","\xd9"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(615)
		this->_lastLeftButtonState = tmp7;
		HX_STACK_LINE(616)
		this->wheel = Record->__Field(HX_HCSTRING("wheel","\x9b","\x34","\xba","\xc9"), hx::paccDynamic );
		HX_STACK_LINE(617)
		this->_globalScreenX = Record->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );
		HX_STACK_LINE(618)
		this->_globalScreenY = Record->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );
		HX_STACK_LINE(619)
		this->updatePositions();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxMouse_obj,playback,(void))


FlxMouse_obj::FlxMouse_obj()
{
}

void FlxMouse_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxMouse);
	HX_MARK_MEMBER_NAME(enabled,"enabled");
	HX_MARK_MEMBER_NAME(wheel,"wheel");
	HX_MARK_MEMBER_NAME(cursorContainer,"cursorContainer");
	HX_MARK_MEMBER_NAME(visible,"visible");
	HX_MARK_MEMBER_NAME(useSystemCursor,"useSystemCursor");
	HX_MARK_MEMBER_NAME(_leftButton,"_leftButton");
	HX_MARK_MEMBER_NAME(_middleButton,"_middleButton");
	HX_MARK_MEMBER_NAME(_rightButton,"_rightButton");
	HX_MARK_MEMBER_NAME(_cursor,"_cursor");
	HX_MARK_MEMBER_NAME(_cursorBitmapData,"_cursorBitmapData");
	HX_MARK_MEMBER_NAME(_wheelUsed,"_wheelUsed");
	HX_MARK_MEMBER_NAME(_visibleWhenFocusLost,"_visibleWhenFocusLost");
	HX_MARK_MEMBER_NAME(_lastX,"_lastX");
	HX_MARK_MEMBER_NAME(_lastY,"_lastY");
	HX_MARK_MEMBER_NAME(_lastWheel,"_lastWheel");
	HX_MARK_MEMBER_NAME(_lastLeftButtonState,"_lastLeftButtonState");
	HX_MARK_MEMBER_NAME(_stage,"_stage");
	HX_MARK_END_CLASS();
}

void FlxMouse_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(enabled,"enabled");
	HX_VISIT_MEMBER_NAME(wheel,"wheel");
	HX_VISIT_MEMBER_NAME(cursorContainer,"cursorContainer");
	HX_VISIT_MEMBER_NAME(visible,"visible");
	HX_VISIT_MEMBER_NAME(useSystemCursor,"useSystemCursor");
	HX_VISIT_MEMBER_NAME(_leftButton,"_leftButton");
	HX_VISIT_MEMBER_NAME(_middleButton,"_middleButton");
	HX_VISIT_MEMBER_NAME(_rightButton,"_rightButton");
	HX_VISIT_MEMBER_NAME(_cursor,"_cursor");
	HX_VISIT_MEMBER_NAME(_cursorBitmapData,"_cursorBitmapData");
	HX_VISIT_MEMBER_NAME(_wheelUsed,"_wheelUsed");
	HX_VISIT_MEMBER_NAME(_visibleWhenFocusLost,"_visibleWhenFocusLost");
	HX_VISIT_MEMBER_NAME(_lastX,"_lastX");
	HX_VISIT_MEMBER_NAME(_lastY,"_lastY");
	HX_VISIT_MEMBER_NAME(_lastWheel,"_lastWheel");
	HX_VISIT_MEMBER_NAME(_lastLeftButtonState,"_lastLeftButtonState");
	HX_VISIT_MEMBER_NAME(_stage,"_stage");
}

Dynamic FlxMouse_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"wheel") ) { return wheel; }
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_lastX") ) { return _lastX; }
		if (HX_FIELD_EQ(inName,"_lastY") ) { return _lastY; }
		if (HX_FIELD_EQ(inName,"_stage") ) { return _stage; }
		if (HX_FIELD_EQ(inName,"unload") ) { return unload_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"record") ) { return record_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { return enabled; }
		if (HX_FIELD_EQ(inName,"visible") ) { return visible; }
		if (HX_FIELD_EQ(inName,"pressed") ) { if (inCallProp == hx::paccAlways) return get_pressed(); }
		if (HX_FIELD_EQ(inName,"_cursor") ) { return _cursor; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"onFocus") ) { return onFocus_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"playback") ) { return playback_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_wheelUsed") ) { return _wheelUsed; }
		if (HX_FIELD_EQ(inName,"_lastWheel") ) { return _lastWheel; }
		if (HX_FIELD_EQ(inName,"showCursor") ) { return showCursor_dyn(); }
		if (HX_FIELD_EQ(inName,"hideCursor") ) { return hideCursor_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"justPressed") ) { if (inCallProp == hx::paccAlways) return get_justPressed(); }
		if (HX_FIELD_EQ(inName,"_leftButton") ) { return _leftButton; }
		if (HX_FIELD_EQ(inName,"onFocusLost") ) { return onFocusLost_dyn(); }
		if (HX_FIELD_EQ(inName,"onGameStart") ) { return onGameStart_dyn(); }
		if (HX_FIELD_EQ(inName,"get_pressed") ) { return get_pressed_dyn(); }
		if (HX_FIELD_EQ(inName,"set_visible") ) { return set_visible_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"justReleased") ) { if (inCallProp == hx::paccAlways) return get_justReleased(); }
		if (HX_FIELD_EQ(inName,"pressedRight") ) { if (inCallProp == hx::paccAlways) return get_pressedRight(); }
		if (HX_FIELD_EQ(inName,"_rightButton") ) { return _rightButton; }
		if (HX_FIELD_EQ(inName,"onMouseWheel") ) { return onMouseWheel_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseLeave") ) { return onMouseLeave_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"pressedMiddle") ) { if (inCallProp == hx::paccAlways) return get_pressedMiddle(); }
		if (HX_FIELD_EQ(inName,"_middleButton") ) { return _middleButton; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"cursorContainer") ) { return cursorContainer; }
		if (HX_FIELD_EQ(inName,"useSystemCursor") ) { return useSystemCursor; }
		if (HX_FIELD_EQ(inName,"get_justPressed") ) { return get_justPressed_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"justPressedRight") ) { if (inCallProp == hx::paccAlways) return get_justPressedRight(); }
		if (HX_FIELD_EQ(inName,"get_justReleased") ) { return get_justReleased_dyn(); }
		if (HX_FIELD_EQ(inName,"get_pressedRight") ) { return get_pressedRight_dyn(); }
		if (HX_FIELD_EQ(inName,"showSystemCursor") ) { return showSystemCursor_dyn(); }
		if (HX_FIELD_EQ(inName,"hideSystemCursor") ) { return hideSystemCursor_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"justReleasedRight") ) { if (inCallProp == hx::paccAlways) return get_justReleasedRight(); }
		if (HX_FIELD_EQ(inName,"justPressedMiddle") ) { if (inCallProp == hx::paccAlways) return get_justPressedMiddle(); }
		if (HX_FIELD_EQ(inName,"_cursorBitmapData") ) { return _cursorBitmapData; }
		if (HX_FIELD_EQ(inName,"get_pressedMiddle") ) { return get_pressedMiddle_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"justReleasedMiddle") ) { if (inCallProp == hx::paccAlways) return get_justReleasedMiddle(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"set_useSystemCursor") ) { return set_useSystemCursor_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_lastLeftButtonState") ) { return _lastLeftButtonState; }
		if (HX_FIELD_EQ(inName,"get_justPressedRight") ) { return get_justPressedRight_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_visibleWhenFocusLost") ) { return _visibleWhenFocusLost; }
		if (HX_FIELD_EQ(inName,"get_justReleasedRight") ) { return get_justReleasedRight_dyn(); }
		if (HX_FIELD_EQ(inName,"get_justPressedMiddle") ) { return get_justPressedMiddle_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"get_justReleasedMiddle") ) { return get_justReleasedMiddle_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxMouse_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"wheel") ) { wheel=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_lastX") ) { _lastX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_lastY") ) { _lastY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_stage") ) { _stage=inValue.Cast< ::openfl::_legacy::display::Stage >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { enabled=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"visible") ) { if (inCallProp == hx::paccAlways) return set_visible(inValue);visible=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_cursor") ) { _cursor=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_wheelUsed") ) { _wheelUsed=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_lastWheel") ) { _lastWheel=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_leftButton") ) { _leftButton=inValue.Cast< ::flixel::input::mouse::FlxMouseButton >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_rightButton") ) { _rightButton=inValue.Cast< ::flixel::input::mouse::FlxMouseButton >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_middleButton") ) { _middleButton=inValue.Cast< ::flixel::input::mouse::FlxMouseButton >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"cursorContainer") ) { cursorContainer=inValue.Cast< ::openfl::_legacy::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"useSystemCursor") ) { if (inCallProp == hx::paccAlways) return set_useSystemCursor(inValue);useSystemCursor=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_cursorBitmapData") ) { _cursorBitmapData=inValue.Cast< ::openfl::_legacy::display::BitmapData >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_lastLeftButtonState") ) { _lastLeftButtonState=inValue.Cast< int >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_visibleWhenFocusLost") ) { _visibleWhenFocusLost=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxMouse_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("enabled","\x81","\x04","\x31","\x7e"));
	outFields->push(HX_HCSTRING("wheel","\x9b","\x34","\xba","\xc9"));
	outFields->push(HX_HCSTRING("cursorContainer","\x8b","\x3b","\x1c","\x12"));
	outFields->push(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"));
	outFields->push(HX_HCSTRING("useSystemCursor","\x0c","\x3e","\xde","\xf9"));
	outFields->push(HX_HCSTRING("pressed","\xa2","\xd2","\xe6","\x39"));
	outFields->push(HX_HCSTRING("justPressed","\xd6","\x0d","\xa7","\xf2"));
	outFields->push(HX_HCSTRING("justReleased","\x09","\x1b","\x5b","\x66"));
	outFields->push(HX_HCSTRING("pressedRight","\xda","\xdd","\x81","\x58"));
	outFields->push(HX_HCSTRING("justPressedRight","\x26","\x86","\x9a","\xc0"));
	outFields->push(HX_HCSTRING("justReleasedRight","\x13","\xc0","\x4a","\x68"));
	outFields->push(HX_HCSTRING("pressedMiddle","\x97","\xbf","\x58","\x17"));
	outFields->push(HX_HCSTRING("justPressedMiddle","\xcb","\x59","\xd3","\xc4"));
	outFields->push(HX_HCSTRING("justReleasedMiddle","\x3e","\xcf","\x55","\xd7"));
	outFields->push(HX_HCSTRING("_leftButton","\x78","\xea","\x7a","\xdb"));
	outFields->push(HX_HCSTRING("_middleButton","\x06","\xea","\x42","\xd7"));
	outFields->push(HX_HCSTRING("_rightButton","\xef","\xdc","\x6e","\xa9"));
	outFields->push(HX_HCSTRING("_cursor","\x75","\xa0","\x5f","\xad"));
	outFields->push(HX_HCSTRING("_cursorBitmapData","\x8e","\x5e","\x40","\xcd"));
	outFields->push(HX_HCSTRING("_wheelUsed","\x39","\x58","\x29","\xd8"));
	outFields->push(HX_HCSTRING("_visibleWhenFocusLost","\xcf","\x95","\x3f","\x38"));
	outFields->push(HX_HCSTRING("_lastX","\x83","\x48","\xa3","\x6b"));
	outFields->push(HX_HCSTRING("_lastY","\x84","\x48","\xa3","\x6b"));
	outFields->push(HX_HCSTRING("_lastWheel","\x26","\xde","\x09","\x72"));
	outFields->push(HX_HCSTRING("_lastLeftButtonState","\x43","\xeb","\x82","\x82"));
	outFields->push(HX_HCSTRING("_stage","\xff","\xb1","\xf2","\x7f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(FlxMouse_obj,enabled),HX_HCSTRING("enabled","\x81","\x04","\x31","\x7e")},
	{hx::fsInt,(int)offsetof(FlxMouse_obj,wheel),HX_HCSTRING("wheel","\x9b","\x34","\xba","\xc9")},
	{hx::fsObject /*::openfl::_legacy::display::Sprite*/ ,(int)offsetof(FlxMouse_obj,cursorContainer),HX_HCSTRING("cursorContainer","\x8b","\x3b","\x1c","\x12")},
	{hx::fsBool,(int)offsetof(FlxMouse_obj,visible),HX_HCSTRING("visible","\x72","\x78","\x24","\xa3")},
	{hx::fsBool,(int)offsetof(FlxMouse_obj,useSystemCursor),HX_HCSTRING("useSystemCursor","\x0c","\x3e","\xde","\xf9")},
	{hx::fsObject /*::flixel::input::mouse::FlxMouseButton*/ ,(int)offsetof(FlxMouse_obj,_leftButton),HX_HCSTRING("_leftButton","\x78","\xea","\x7a","\xdb")},
	{hx::fsObject /*::flixel::input::mouse::FlxMouseButton*/ ,(int)offsetof(FlxMouse_obj,_middleButton),HX_HCSTRING("_middleButton","\x06","\xea","\x42","\xd7")},
	{hx::fsObject /*::flixel::input::mouse::FlxMouseButton*/ ,(int)offsetof(FlxMouse_obj,_rightButton),HX_HCSTRING("_rightButton","\xef","\xdc","\x6e","\xa9")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(FlxMouse_obj,_cursor),HX_HCSTRING("_cursor","\x75","\xa0","\x5f","\xad")},
	{hx::fsObject /*::openfl::_legacy::display::BitmapData*/ ,(int)offsetof(FlxMouse_obj,_cursorBitmapData),HX_HCSTRING("_cursorBitmapData","\x8e","\x5e","\x40","\xcd")},
	{hx::fsBool,(int)offsetof(FlxMouse_obj,_wheelUsed),HX_HCSTRING("_wheelUsed","\x39","\x58","\x29","\xd8")},
	{hx::fsBool,(int)offsetof(FlxMouse_obj,_visibleWhenFocusLost),HX_HCSTRING("_visibleWhenFocusLost","\xcf","\x95","\x3f","\x38")},
	{hx::fsInt,(int)offsetof(FlxMouse_obj,_lastX),HX_HCSTRING("_lastX","\x83","\x48","\xa3","\x6b")},
	{hx::fsInt,(int)offsetof(FlxMouse_obj,_lastY),HX_HCSTRING("_lastY","\x84","\x48","\xa3","\x6b")},
	{hx::fsInt,(int)offsetof(FlxMouse_obj,_lastWheel),HX_HCSTRING("_lastWheel","\x26","\xde","\x09","\x72")},
	{hx::fsInt,(int)offsetof(FlxMouse_obj,_lastLeftButtonState),HX_HCSTRING("_lastLeftButtonState","\x43","\xeb","\x82","\x82")},
	{hx::fsObject /*::openfl::_legacy::display::Stage*/ ,(int)offsetof(FlxMouse_obj,_stage),HX_HCSTRING("_stage","\xff","\xb1","\xf2","\x7f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("enabled","\x81","\x04","\x31","\x7e"),
	HX_HCSTRING("wheel","\x9b","\x34","\xba","\xc9"),
	HX_HCSTRING("cursorContainer","\x8b","\x3b","\x1c","\x12"),
	HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"),
	HX_HCSTRING("useSystemCursor","\x0c","\x3e","\xde","\xf9"),
	HX_HCSTRING("_leftButton","\x78","\xea","\x7a","\xdb"),
	HX_HCSTRING("_middleButton","\x06","\xea","\x42","\xd7"),
	HX_HCSTRING("_rightButton","\xef","\xdc","\x6e","\xa9"),
	HX_HCSTRING("_cursor","\x75","\xa0","\x5f","\xad"),
	HX_HCSTRING("_cursorBitmapData","\x8e","\x5e","\x40","\xcd"),
	HX_HCSTRING("_wheelUsed","\x39","\x58","\x29","\xd8"),
	HX_HCSTRING("_visibleWhenFocusLost","\xcf","\x95","\x3f","\x38"),
	HX_HCSTRING("_lastX","\x83","\x48","\xa3","\x6b"),
	HX_HCSTRING("_lastY","\x84","\x48","\xa3","\x6b"),
	HX_HCSTRING("_lastWheel","\x26","\xde","\x09","\x72"),
	HX_HCSTRING("_lastLeftButtonState","\x43","\xeb","\x82","\x82"),
	HX_HCSTRING("_stage","\xff","\xb1","\xf2","\x7f"),
	HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"),
	HX_HCSTRING("unload","\xff","\xa0","\x8c","\x65"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("onFocus","\x39","\xfe","\xc6","\x9a"),
	HX_HCSTRING("onFocusLost","\xbd","\xe4","\x85","\x41"),
	HX_HCSTRING("onGameStart","\xf1","\x45","\x69","\xdb"),
	HX_HCSTRING("onMouseWheel","\x35","\xca","\xca","\xbf"),
	HX_HCSTRING("onMouseLeave","\x91","\xca","\x63","\x68"),
	HX_HCSTRING("get_pressed","\xb9","\x32","\xe1","\xbf"),
	HX_HCSTRING("get_justPressed","\x6d","\xc5","\x88","\xb3"),
	HX_HCSTRING("get_justReleased","\x92","\x07","\xfa","\x6a"),
	HX_HCSTRING("get_pressedRight","\x63","\xca","\x20","\x5d"),
	HX_HCSTRING("get_justPressedRight","\x2f","\xeb","\x04","\xdf"),
	HX_HCSTRING("get_justReleasedRight","\xea","\xc2","\xf8","\xe6"),
	HX_HCSTRING("get_pressedMiddle","\xee","\xca","\xc8","\x1d"),
	HX_HCSTRING("get_justPressedMiddle","\xa2","\x5c","\x81","\x43"),
	HX_HCSTRING("get_justReleasedMiddle","\x87","\x48","\xea","\x30"),
	HX_HCSTRING("showSystemCursor","\xc2","\x1f","\x8d","\xc0"),
	HX_HCSTRING("hideSystemCursor","\x07","\x93","\x7b","\x81"),
	HX_HCSTRING("set_useSystemCursor","\x2f","\x00","\x86","\xc1"),
	HX_HCSTRING("showCursor","\xb3","\x33","\x5d","\xa8"),
	HX_HCSTRING("hideCursor","\x38","\x35","\x6e","\xd6"),
	HX_HCSTRING("set_visible","\x95","\xdf","\x8b","\x33"),
	HX_HCSTRING("record","\x91","\x76","\xec","\xfd"),
	HX_HCSTRING("playback","\x1b","\x12","\x4b","\x46"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxMouse_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxMouse_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxMouse_obj::__mClass;

void FlxMouse_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.input.mouse.FlxMouse","\x12","\x2b","\x6e","\x8c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxMouse_obj >;
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
} // end namespace mouse
