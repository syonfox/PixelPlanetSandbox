#include <hxcpp.h>

#include "hxMath.h"
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
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroupIterator
#include <flixel/group/FlxTypedGroupIterator.h>
#endif
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_system_debug_GraphicInteractive
#include <flixel/system/debug/GraphicInteractive.h>
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
#ifndef INCLUDED_flixel_system_debug_interaction_tools_Mover
#include <flixel/system/debug/interaction/tools/Mover.h>
#endif
#ifndef INCLUDED_flixel_system_debug_interaction_tools_Pointer
#include <flixel/system/debug/interaction/tools/Pointer.h>
#endif
#ifndef INCLUDED_flixel_system_debug_interaction_tools_Tool
#include <flixel/system/debug/interaction/tools/Tool.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_DebuggerFrontEnd
#include <flixel/system/frontEnds/DebuggerFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SignalFrontEnd
#include <flixel/system/frontEnds/SignalFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_scaleModes_BaseScaleMode
#include <flixel/system/scaleModes/BaseScaleMode.h>
#endif
#ifndef INCLUDED_flixel_system_ui_FlxSystemButton
#include <flixel/system/ui/FlxSystemButton.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSpriteUtil
#include <flixel/util/FlxSpriteUtil.h>
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
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
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
#ifndef INCLUDED_openfl__legacy_display_BlendMode
#include <openfl/_legacy/display/BlendMode.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_CapsStyle
#include <openfl/_legacy/display/CapsStyle.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#include <openfl/_legacy/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Graphics
#include <openfl/_legacy/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_JointStyle
#include <openfl/_legacy/display/JointStyle.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_LineScaleMode
#include <openfl/_legacy/display/LineScaleMode.h>
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
#ifndef INCLUDED_openfl__legacy_events_KeyboardEvent
#include <openfl/_legacy/events/KeyboardEvent.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_MouseEvent
#include <openfl/_legacy/events/MouseEvent.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_ColorTransform
#include <openfl/_legacy/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Matrix
#include <openfl/_legacy/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif
namespace flixel{
namespace _system{
namespace debug{
namespace interaction{

Void Interaction_obj::__construct(::openfl::_legacy::display::Sprite container)
{
HX_STACK_FRAME("flixel.system.debug.interaction.Interaction","new",0xfa21d580,"flixel.system.debug.interaction.Interaction.new","flixel/system/debug/interaction/Interaction.hx",33,0x4548a912)
HX_STACK_THIS(this)
HX_STACK_ARG(container,"container")
{
	HX_STACK_LINE(52)
	this->_flixelPointer = ::flixel::input::FlxPointer_obj::__new();
	HX_STACK_LINE(51)
	this->_debuggerInteraction = false;
	struct _Function_1_1{
		inline static ::haxe::ds::IntMap Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/system/debug/interaction/Interaction.hx",48,0x4548a912)
			{
				HX_STACK_LINE(48)
				::haxe::ds::IntMap tmp = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(48)
				::haxe::ds::IntMap tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(48)
				return tmp1;
			}
			return null();
		}
	};
	HX_STACK_LINE(48)
	this->_keysUp = _Function_1_1::Block();
	struct _Function_1_2{
		inline static ::haxe::ds::IntMap Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/system/debug/interaction/Interaction.hx",47,0x4548a912)
			{
				HX_STACK_LINE(47)
				::haxe::ds::IntMap tmp = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(47)
				::haxe::ds::IntMap tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(47)
				return tmp1;
			}
			return null();
		}
	};
	HX_STACK_LINE(47)
	this->_keysDown = _Function_1_2::Block();
	HX_STACK_LINE(46)
	this->_turn = (int)2;
	HX_STACK_LINE(45)
	this->_tools = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(41)
	this->pointerPressed = false;
	HX_STACK_LINE(40)
	this->pointerJustReleased = false;
	HX_STACK_LINE(39)
	this->pointerJustPressed = false;
	HX_STACK_LINE(38)
	this->flixelPointer = ::flixel::math::FlxPoint_obj::__new(null(),null());
	HX_STACK_LINE(36)
	this->selectedItems = ::flixel::group::FlxTypedGroup_obj::__new(null());
	HX_STACK_LINE(56)
	::flixel::_system::debug::GraphicInteractive tmp = ::flixel::_system::debug::GraphicInteractive_obj::__new((int)0,(int)0,null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(56)
	super::__construct(HX_HCSTRING("Tools","\xfb","\x01","\x5c","\xa7"),tmp,(int)40,(int)25,false,null(),null());
	HX_STACK_LINE(57)
	this->reposition((int)2,(int)100);
	HX_STACK_LINE(58)
	this->_container = container;
	HX_STACK_LINE(60)
	::openfl::_legacy::display::Sprite tmp1 = ::openfl::_legacy::display::Sprite_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(60)
	this->_customCursor = tmp1;
	HX_STACK_LINE(61)
	::openfl::_legacy::display::Sprite tmp2 = this->_customCursor;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(61)
	tmp2->set_mouseEnabled(false);
	HX_STACK_LINE(62)
	::openfl::_legacy::display::Sprite tmp3 = this->_container;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(62)
	::openfl::_legacy::display::Sprite tmp4 = this->_customCursor;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(62)
	tmp3->addChild(tmp4);
	HX_STACK_LINE(65)
	::flixel::_system::debug::interaction::tools::Pointer tmp5 = ::flixel::_system::debug::interaction::tools::Pointer_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(65)
	this->addTool(tmp5);
	HX_STACK_LINE(66)
	::flixel::_system::debug::interaction::tools::Mover tmp6 = ::flixel::_system::debug::interaction::tools::Mover_obj::__new();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(66)
	this->addTool(tmp6);
	HX_STACK_LINE(67)
	::flixel::_system::debug::interaction::tools::Eraser tmp7 = ::flixel::_system::debug::interaction::tools::Eraser_obj::__new();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(67)
	this->addTool(tmp7);
	HX_STACK_LINE(69)
	{
		HX_STACK_LINE(69)
		::flixel::_system::frontEnds::SignalFrontEnd tmp8 = ::flixel::FlxG_obj::signals;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(69)
		Dynamic tmp9 = this->postDraw_dyn();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(69)
		tmp8->__Field(HX_HCSTRING("postDraw","\x84","\x8c","\xaf","\x00"), hx::paccDynamic )->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )(tmp9);
	}
	HX_STACK_LINE(70)
	{
		HX_STACK_LINE(70)
		::flixel::_system::frontEnds::DebuggerFrontEnd tmp8 = ::flixel::FlxG_obj::debugger;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(70)
		Dynamic tmp9 = this->handleDebuggerVisibilityChanged_dyn();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(70)
		tmp8->__Field(HX_HCSTRING("visibilityChanged","\x42","\x69","\x31","\xf5"), hx::paccDynamic )->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )(tmp9);
	}
	HX_STACK_LINE(72)
	::openfl::_legacy::display::MovieClip tmp8 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(72)
	::openfl::_legacy::display::Stage tmp9 = tmp8->get_stage();		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(72)
	::String tmp10 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_MOVE;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(72)
	Dynamic tmp11 = this->updateMouse_dyn();		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(72)
	tmp9->addEventListener(tmp10,tmp11,null(),null(),null());
	HX_STACK_LINE(73)
	::openfl::_legacy::display::MovieClip tmp12 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(73)
	::openfl::_legacy::display::Stage tmp13 = tmp12->get_stage();		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(73)
	::String tmp14 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_DOWN;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(73)
	Dynamic tmp15 = this->handleMouseClick_dyn();		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(73)
	tmp13->addEventListener(tmp14,tmp15,null(),null(),null());
	HX_STACK_LINE(74)
	::openfl::_legacy::display::MovieClip tmp16 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(74)
	::openfl::_legacy::display::Stage tmp17 = tmp16->get_stage();		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(74)
	::String tmp18 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_UP;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(74)
	Dynamic tmp19 = this->handleMouseClick_dyn();		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(74)
	tmp17->addEventListener(tmp18,tmp19,null(),null(),null());
	HX_STACK_LINE(75)
	::openfl::_legacy::display::MovieClip tmp20 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(75)
	::openfl::_legacy::display::Stage tmp21 = tmp20->get_stage();		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(75)
	::String tmp22 = ::openfl::_legacy::events::KeyboardEvent_obj::KEY_DOWN;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(75)
	Dynamic tmp23 = this->handleKeyEvent_dyn();		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(75)
	tmp21->addEventListener(tmp22,tmp23,null(),null(),null());
	HX_STACK_LINE(76)
	::openfl::_legacy::display::MovieClip tmp24 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(76)
	::openfl::_legacy::display::Stage tmp25 = tmp24->get_stage();		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(76)
	::String tmp26 = ::openfl::_legacy::events::KeyboardEvent_obj::KEY_UP;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(76)
	Dynamic tmp27 = this->handleKeyEvent_dyn();		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(76)
	tmp25->addEventListener(tmp26,tmp27,null(),null(),null());
	HX_STACK_LINE(78)
	::openfl::_legacy::display::Sprite tmp28 = this->_container;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(78)
	::String tmp29 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_OVER;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(78)
	Dynamic tmp30 = this->handleMouseInDebugger_dyn();		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(78)
	tmp28->addEventListener(tmp29,tmp30,null(),null(),null());
	HX_STACK_LINE(79)
	::openfl::_legacy::display::Sprite tmp31 = this->_container;		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(79)
	::String tmp32 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_OUT;		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(79)
	Dynamic tmp33 = this->handleMouseInDebugger_dyn();		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(79)
	tmp31->addEventListener(tmp32,tmp33,null(),null(),null());
}
;
	return null();
}

//Interaction_obj::~Interaction_obj() { }

Dynamic Interaction_obj::__CreateEmpty() { return  new Interaction_obj; }
hx::ObjectPtr< Interaction_obj > Interaction_obj::__new(::openfl::_legacy::display::Sprite container)
{  hx::ObjectPtr< Interaction_obj > _result_ = new Interaction_obj();
	_result_->__construct(container);
	return _result_;}

Dynamic Interaction_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Interaction_obj > _result_ = new Interaction_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Interaction_obj::handleDebuggerVisibilityChanged( ){
{
		HX_STACK_FRAME("flixel.system.debug.interaction.Interaction","handleDebuggerVisibilityChanged",0x3dea5c39,"flixel.system.debug.interaction.Interaction.handleDebuggerVisibilityChanged","flixel/system/debug/interaction/Interaction.hx",83,0x4548a912)
		HX_STACK_THIS(this)
		HX_STACK_LINE(84)
		::flixel::_system::frontEnds::DebuggerFrontEnd tmp = ::flixel::FlxG_obj::debugger;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(84)
		bool tmp1 = tmp->__Field(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(84)
		if ((tmp1)){
			HX_STACK_LINE(85)
			this->saveSystemCursorInfo();
		}
		else{
			HX_STACK_LINE(87)
			this->restoreSystemCursor();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Interaction_obj,handleDebuggerVisibilityChanged,(void))

Void Interaction_obj::updateMouse( ::openfl::_legacy::events::MouseEvent event){
{
		HX_STACK_FRAME("flixel.system.debug.interaction.Interaction","updateMouse",0x7f05a47c,"flixel.system.debug.interaction.Interaction.updateMouse","flixel/system/debug/interaction/Interaction.hx",91,0x4548a912)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(97)
		Float offsetX = ((Float)0.0);		HX_STACK_VAR(offsetX,"offsetX");
		HX_STACK_LINE(98)
		Float offsetY = ((Float)0.0);		HX_STACK_VAR(offsetY,"offsetY");
		HX_STACK_LINE(102)
		::flixel::_system::debug::interaction::tools::Tool tmp = this->activeTool;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(102)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(102)
		if ((tmp1)){
			HX_STACK_LINE(104)
			::flixel::_system::debug::interaction::tools::Tool tmp2 = this->activeTool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(104)
			::openfl::_legacy::display::BitmapData cursorIcon = tmp2->__Field(HX_HCSTRING("cursor","\xd6","\x8e","\xe8","\x3e"), hx::paccDynamic );		HX_STACK_VAR(cursorIcon,"cursorIcon");
			HX_STACK_LINE(105)
			bool tmp3 = (cursorIcon != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(105)
			if ((tmp3)){
				HX_STACK_LINE(107)
				int tmp4 = cursorIcon->get_width();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(107)
				::flixel::_system::scaleModes::BaseScaleMode tmp5 = ::flixel::FlxG_obj::scaleMode;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(107)
				Float tmp6 = tmp5->__Field(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"), hx::paccDynamic )->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(107)
				Float tmp7 = (Float(tmp4) / Float(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(107)
				Float tmp8 = (Float(tmp7) / Float((int)2));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(107)
				offsetX = tmp8;
				HX_STACK_LINE(108)
				int tmp9 = cursorIcon->get_height();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(108)
				::flixel::_system::scaleModes::BaseScaleMode tmp10 = ::flixel::FlxG_obj::scaleMode;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(108)
				Float tmp11 = tmp10->__Field(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"), hx::paccDynamic )->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(108)
				Float tmp12 = (Float(tmp9) / Float(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(108)
				Float tmp13 = (Float(tmp12) / Float((int)2));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(108)
				offsetY = tmp13;
			}
		}
		HX_STACK_LINE(112)
		::openfl::_legacy::display::Sprite tmp2 = this->_customCursor;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(112)
		Float tmp3 = (event->stageX + offsetX);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(112)
		tmp2->set_x(tmp3);
		HX_STACK_LINE(113)
		::openfl::_legacy::display::Sprite tmp4 = this->_customCursor;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(113)
		Float tmp5 = (event->stageY + offsetY);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(113)
		tmp4->set_y(tmp5);
		HX_STACK_LINE(117)
		{
			HX_STACK_LINE(117)
			::flixel::input::FlxPointer tmp6 = this->_flixelPointer;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(117)
			::flixel::input::FlxPointer _this = tmp6;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(117)
			Float tmp7 = event->stageX;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(117)
			::flixel::_system::scaleModes::BaseScaleMode tmp8 = ::flixel::FlxG_obj::scaleMode;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(117)
			Float tmp9 = tmp8->__Field(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"), hx::paccDynamic )->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(117)
			Float tmp10 = (Float(tmp7) / Float(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(117)
			int tmp11 = ::Std_obj::_int(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(117)
			_this->_globalScreenX = tmp11;
			HX_STACK_LINE(117)
			Float tmp12 = event->stageY;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(117)
			::flixel::_system::scaleModes::BaseScaleMode tmp13 = ::flixel::FlxG_obj::scaleMode;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(117)
			Float tmp14 = tmp13->__Field(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"), hx::paccDynamic )->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(117)
			Float tmp15 = (Float(tmp12) / Float(tmp14));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(117)
			int tmp16 = ::Std_obj::_int(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(117)
			_this->_globalScreenY = tmp16;
			HX_STACK_LINE(117)
			_this->updatePositions();
		}
		HX_STACK_LINE(121)
		::flixel::math::FlxPoint tmp6 = this->flixelPointer;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(121)
		::flixel::input::FlxPointer tmp7 = this->_flixelPointer;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(121)
		int tmp8 = tmp7->x;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(121)
		Float tmp9 = offsetX;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(121)
		Float tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(121)
		tmp6->set_x(tmp10);
		HX_STACK_LINE(122)
		::flixel::math::FlxPoint tmp11 = this->flixelPointer;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(122)
		::flixel::input::FlxPointer tmp12 = this->_flixelPointer;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(122)
		int tmp13 = tmp12->y;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(122)
		Float tmp14 = offsetY;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(122)
		Float tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(122)
		tmp11->set_y(tmp15);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Interaction_obj,updateMouse,(void))

Void Interaction_obj::handleMouseClick( ::openfl::_legacy::events::MouseEvent event){
{
		HX_STACK_FRAME("flixel.system.debug.interaction.Interaction","handleMouseClick",0x6baf608b,"flixel.system.debug.interaction.Interaction.handleMouseClick","flixel/system/debug/interaction/Interaction.hx",127,0x4548a912)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(130)
		Dynamic tmp = event->get_target();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(130)
		bool tmp1 = ::Std_obj::is(tmp,hx::ClassOf< ::flixel::_system::ui::FlxSystemButton >());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(130)
		if ((tmp1)){
			HX_STACK_LINE(131)
			return null();
		}
		HX_STACK_LINE(133)
		::String tmp2 = event->get_type();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(133)
		::String tmp3 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_DOWN;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(133)
		bool tmp4 = (tmp2 == tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(133)
		this->pointerJustPressed = tmp4;
		HX_STACK_LINE(134)
		::String tmp5 = event->get_type();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(134)
		::String tmp6 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_UP;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(134)
		bool tmp7 = (tmp5 == tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(134)
		this->pointerJustReleased = tmp7;
		HX_STACK_LINE(136)
		bool tmp8 = this->pointerJustPressed;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(136)
		if ((tmp8)){
			HX_STACK_LINE(137)
			this->pointerPressed = true;
		}
		else{
			HX_STACK_LINE(138)
			bool tmp9 = this->pointerJustReleased;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(138)
			if ((tmp9)){
				HX_STACK_LINE(139)
				this->pointerPressed = false;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Interaction_obj,handleMouseClick,(void))

Void Interaction_obj::handleMouseInDebugger( ::openfl::_legacy::events::MouseEvent event){
{
		HX_STACK_FRAME("flixel.system.debug.interaction.Interaction","handleMouseInDebugger",0xefc0f203,"flixel.system.debug.interaction.Interaction.handleMouseInDebugger","flixel/system/debug/interaction/Interaction.hx",143,0x4548a912)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(146)
		bool tmp = this->isActive();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(146)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(146)
		if ((tmp1)){
			HX_STACK_LINE(147)
			return null();
		}
		HX_STACK_LINE(149)
		::String tmp2 = event->get_type();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(149)
		::String tmp3 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_OVER;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(149)
		bool tmp4 = (tmp2 == tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(149)
		if ((tmp4)){
			HX_STACK_LINE(150)
			this->_debuggerInteraction = true;
		}
		else{
			HX_STACK_LINE(151)
			::String tmp5 = event->get_type();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(151)
			::String tmp6 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_OUT;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(151)
			bool tmp7 = (tmp5 == tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(151)
			if ((tmp7)){
				HX_STACK_LINE(152)
				this->_debuggerInteraction = false;
			}
		}
		HX_STACK_LINE(154)
		event->stopPropagation();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Interaction_obj,handleMouseInDebugger,(void))

Void Interaction_obj::handleKeyEvent( ::openfl::_legacy::events::KeyboardEvent event){
{
		HX_STACK_FRAME("flixel.system.debug.interaction.Interaction","handleKeyEvent",0xda0964a3,"flixel.system.debug.interaction.Interaction.handleKeyEvent","flixel/system/debug/interaction/Interaction.hx",158,0x4548a912)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(159)
		::String tmp = event->get_type();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(159)
		::String tmp1 = ::openfl::_legacy::events::KeyboardEvent_obj::KEY_DOWN;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(159)
		bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(159)
		if ((tmp2)){
			HX_STACK_LINE(160)
			::haxe::ds::IntMap tmp3 = this->_keysDown;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(160)
			int tmp4 = event->keyCode;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(160)
			int tmp5 = this->_turn;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(160)
			tmp3->set(tmp4,tmp5);
		}
		else{
			HX_STACK_LINE(161)
			::String tmp3 = event->get_type();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(161)
			::String tmp4 = ::openfl::_legacy::events::KeyboardEvent_obj::KEY_UP;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(161)
			bool tmp5 = (tmp3 == tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(161)
			if ((tmp5)){
				HX_STACK_LINE(162)
				::haxe::ds::IntMap tmp6 = this->_keysUp;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(162)
				int tmp7 = event->keyCode;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(162)
				int tmp8 = this->_turn;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(162)
				tmp6->set(tmp7,tmp8);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Interaction_obj,handleKeyEvent,(void))

Void Interaction_obj::addTool( ::flixel::_system::debug::interaction::tools::Tool tool){
{
		HX_STACK_FRAME("flixel.system.debug.interaction.Interaction","addTool",0xefc5b339,"flixel.system.debug.interaction.Interaction.addTool","flixel/system/debug/interaction/Interaction.hx",166,0x4548a912)
		HX_STACK_THIS(this)
		HX_STACK_ARG(tool,"tool")
		HX_STACK_LINE(167)
		tool->__Field(HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"), hx::paccDynamic )(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(168)
		::flixel::_system::debug::interaction::tools::Tool tmp = tool;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(168)
		this->_tools->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp);
		HX_STACK_LINE(171)
		::flixel::_system::ui::FlxSystemButton button = tool->__Field(HX_HCSTRING("button","\xf2","\x61","\xe0","\xd9"), hx::paccDynamic );		HX_STACK_VAR(button,"button");
		HX_STACK_LINE(172)
		bool tmp1 = (button == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(172)
		if ((tmp1)){
			HX_STACK_LINE(173)
			return null();
		}
		HX_STACK_LINE(175)
		int tmp2 = (int)-10;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(175)
		int tmp3 = this->_tools->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(175)
		int tmp4 = (tmp3 * (int)20);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(175)
		int tmp5 = (tmp2 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(175)
		button->__Field(HX_HCSTRING("set_x","\x5b","\x9b","\x2f","\x7a"), hx::paccDynamic )(tmp5);
		HX_STACK_LINE(176)
		button->__Field(HX_HCSTRING("set_y","\x5c","\x9b","\x2f","\x7a"), hx::paccDynamic )((int)20);
		HX_STACK_LINE(177)
		::flixel::_system::ui::FlxSystemButton tmp6 = button;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(177)
		this->addChild(tmp6);
		HX_STACK_LINE(179)
		int tmp7 = this->_tools->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(179)
		int tmp8 = (tmp7 * (int)20);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(179)
		Float tmp9 = ::Math_obj::max(tmp8,(int)55);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(179)
		this->resize(tmp9,(int)35);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Interaction_obj,addTool,(void))

Void Interaction_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.system.debug.interaction.Interaction","destroy",0x8b0d421a,"flixel.system.debug.interaction.Interaction.destroy","flixel/system/debug/interaction/Interaction.hx",186,0x4548a912)
		HX_STACK_THIS(this)
		HX_STACK_LINE(187)
		{
			HX_STACK_LINE(187)
			::flixel::_system::frontEnds::SignalFrontEnd tmp = ::flixel::FlxG_obj::signals;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(187)
			Dynamic tmp1 = this->postDraw_dyn();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(187)
			tmp->__Field(HX_HCSTRING("postDraw","\x84","\x8c","\xaf","\x00"), hx::paccDynamic )->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(tmp1);
		}
		HX_STACK_LINE(188)
		{
			HX_STACK_LINE(188)
			::flixel::_system::frontEnds::DebuggerFrontEnd tmp = ::flixel::FlxG_obj::debugger;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(188)
			Dynamic tmp1 = this->handleDebuggerVisibilityChanged_dyn();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(188)
			tmp->__Field(HX_HCSTRING("visibilityChanged","\x42","\x69","\x31","\xf5"), hx::paccDynamic )->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(tmp1);
		}
		HX_STACK_LINE(190)
		::openfl::_legacy::display::MovieClip tmp = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(190)
		::openfl::_legacy::display::Stage tmp1 = tmp->get_stage();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(190)
		::String tmp2 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_MOVE;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(190)
		Dynamic tmp3 = this->updateMouse_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(190)
		tmp1->removeEventListener(tmp2,tmp3,null());
		HX_STACK_LINE(191)
		::openfl::_legacy::display::MovieClip tmp4 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(191)
		::openfl::_legacy::display::Stage tmp5 = tmp4->get_stage();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(191)
		::String tmp6 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_DOWN;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(191)
		Dynamic tmp7 = this->handleMouseClick_dyn();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(191)
		tmp5->removeEventListener(tmp6,tmp7,null());
		HX_STACK_LINE(192)
		::openfl::_legacy::display::MovieClip tmp8 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(192)
		::openfl::_legacy::display::Stage tmp9 = tmp8->get_stage();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(192)
		::String tmp10 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_UP;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(192)
		Dynamic tmp11 = this->handleMouseClick_dyn();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(192)
		tmp9->removeEventListener(tmp10,tmp11,null());
		HX_STACK_LINE(193)
		::openfl::_legacy::display::MovieClip tmp12 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(193)
		::openfl::_legacy::display::Stage tmp13 = tmp12->get_stage();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(193)
		::String tmp14 = ::openfl::_legacy::events::KeyboardEvent_obj::KEY_DOWN;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(193)
		Dynamic tmp15 = this->handleKeyEvent_dyn();		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(193)
		tmp13->removeEventListener(tmp14,tmp15,null());
		HX_STACK_LINE(194)
		::openfl::_legacy::display::MovieClip tmp16 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(194)
		::openfl::_legacy::display::Stage tmp17 = tmp16->get_stage();		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(194)
		::String tmp18 = ::openfl::_legacy::events::KeyboardEvent_obj::KEY_UP;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(194)
		Dynamic tmp19 = this->handleKeyEvent_dyn();		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(194)
		tmp17->removeEventListener(tmp18,tmp19,null());
		HX_STACK_LINE(196)
		::openfl::_legacy::display::Sprite tmp20 = this->_container;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(196)
		bool tmp21 = (tmp20 != null());		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(196)
		if ((tmp21)){
			HX_STACK_LINE(198)
			::openfl::_legacy::display::Sprite tmp22 = this->_container;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(198)
			::String tmp23 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_OVER;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(198)
			Dynamic tmp24 = this->handleMouseInDebugger_dyn();		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(198)
			tmp22->removeEventListener(tmp23,tmp24,null());
			HX_STACK_LINE(199)
			::openfl::_legacy::display::Sprite tmp25 = this->_container;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(199)
			::String tmp26 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_OUT;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(199)
			Dynamic tmp27 = this->handleMouseInDebugger_dyn();		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(199)
			tmp25->removeEventListener(tmp26,tmp27,null());
		}
		HX_STACK_LINE(202)
		::openfl::_legacy::display::Sprite tmp22 = this->_customCursor;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(202)
		bool tmp23 = (tmp22 != null());		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(202)
		if ((tmp23)){
			HX_STACK_LINE(204)
			::openfl::_legacy::display::Sprite tmp24 = this->_customCursor;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(204)
			::openfl::_legacy::display::DisplayObjectContainer tmp25 = tmp24->get_parent();		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(204)
			::openfl::_legacy::display::Sprite tmp26 = this->_customCursor;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(204)
			tmp25->removeChild(tmp26);
			HX_STACK_LINE(205)
			this->_customCursor = null();
		}
		HX_STACK_LINE(208)
		this->_tools = ::flixel::util::FlxDestroyUtil_obj::destroyArray(this->_tools);
		HX_STACK_LINE(209)
		::flixel::group::FlxTypedGroup tmp24 = this->selectedItems;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(209)
		::flixel::group::FlxTypedGroup tmp25 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(209)
		this->selectedItems = tmp25;
		HX_STACK_LINE(210)
		::flixel::math::FlxPoint tmp26 = this->flixelPointer;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(210)
		::flixel::math::FlxPoint tmp27 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(210)
		this->flixelPointer = tmp27;
		HX_STACK_LINE(212)
		this->_keysDown = null();
		HX_STACK_LINE(213)
		this->_keysUp = null();
	}
return null();
}


bool Interaction_obj::isActive( ){
	HX_STACK_FRAME("flixel.system.debug.interaction.Interaction","isActive",0xbe5b4430,"flixel.system.debug.interaction.Interaction.isActive","flixel/system/debug/interaction/Interaction.hx",217,0x4548a912)
	HX_STACK_THIS(this)
	HX_STACK_LINE(218)
	::flixel::_system::frontEnds::DebuggerFrontEnd tmp = ::flixel::FlxG_obj::debugger;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(218)
	bool tmp1 = tmp->__Field(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(218)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(218)
	if ((tmp1)){
		HX_STACK_LINE(218)
		tmp2 = this->get_visible();
	}
	else{
		HX_STACK_LINE(218)
		tmp2 = false;
	}
	HX_STACK_LINE(218)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Interaction_obj,isActive,return )

Void Interaction_obj::update( ){
{
		HX_STACK_FRAME("flixel.system.debug.interaction.Interaction","update",0x852f74e9,"flixel.system.debug.interaction.Interaction.update","flixel/system/debug/interaction/Interaction.hx",222,0x4548a912)
		HX_STACK_THIS(this)
		HX_STACK_LINE(223)
		bool tmp = this->isActive();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(223)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(223)
		if ((tmp1)){
			HX_STACK_LINE(224)
			return null();
		}
		HX_STACK_LINE(226)
		this->updateCustomCursors();
		HX_STACK_LINE(228)
		{
			HX_STACK_LINE(228)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(228)
			Array< ::Dynamic > _g1 = this->_tools;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(228)
			while((true)){
				HX_STACK_LINE(228)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(228)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(228)
				if ((tmp3)){
					HX_STACK_LINE(228)
					break;
				}
				HX_STACK_LINE(228)
				::flixel::_system::debug::interaction::tools::Tool tmp4 = _g1->__get(_g).StaticCast< ::flixel::_system::debug::interaction::tools::Tool >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(228)
				::flixel::_system::debug::interaction::tools::Tool tool = tmp4;		HX_STACK_VAR(tool,"tool");
				HX_STACK_LINE(228)
				++(_g);
				HX_STACK_LINE(229)
				tool->__Field(HX_HCSTRING("update","\x09","\x86","\x05","\x87"), hx::paccDynamic )();
			}
		}
		HX_STACK_LINE(231)
		this->pointerJustPressed = false;
		HX_STACK_LINE(232)
		this->pointerJustReleased = false;
		HX_STACK_LINE(233)
		(this->_turn)++;
	}
return null();
}


Void Interaction_obj::postDraw( ){
{
		HX_STACK_FRAME("flixel.system.debug.interaction.Interaction","postDraw",0x505af364,"flixel.system.debug.interaction.Interaction.postDraw","flixel/system/debug/interaction/Interaction.hx",240,0x4548a912)
		HX_STACK_THIS(this)
		HX_STACK_LINE(241)
		bool tmp = this->isActive();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(241)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(241)
		if ((tmp1)){
			HX_STACK_LINE(242)
			return null();
		}
		HX_STACK_LINE(244)
		{
			HX_STACK_LINE(244)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(244)
			Array< ::Dynamic > _g1 = this->_tools;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(244)
			while((true)){
				HX_STACK_LINE(244)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(244)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(244)
				if ((tmp3)){
					HX_STACK_LINE(244)
					break;
				}
				HX_STACK_LINE(244)
				::flixel::_system::debug::interaction::tools::Tool tmp4 = _g1->__get(_g).StaticCast< ::flixel::_system::debug::interaction::tools::Tool >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(244)
				::flixel::_system::debug::interaction::tools::Tool tool = tmp4;		HX_STACK_VAR(tool,"tool");
				HX_STACK_LINE(244)
				++(_g);
				HX_STACK_LINE(245)
				tool->__Field(HX_HCSTRING("draw","\x04","\x2c","\x70","\x42"), hx::paccDynamic )();
			}
		}
		HX_STACK_LINE(247)
		this->drawItemsSelection();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Interaction_obj,postDraw,(void))

::openfl::_legacy::display::Graphics Interaction_obj::getDebugGraphics( ){
	HX_STACK_FRAME("flixel.system.debug.interaction.Interaction","getDebugGraphics",0xd1fe02a8,"flixel.system.debug.interaction.Interaction.getDebugGraphics","flixel/system/debug/interaction/Interaction.hx",251,0x4548a912)
	HX_STACK_THIS(this)
	HX_STACK_LINE(252)
	bool tmp = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(252)
	if ((tmp)){
		HX_STACK_LINE(254)
		::openfl::_legacy::display::Graphics tmp1 = ::flixel::util::FlxSpriteUtil_obj::flashGfx;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(254)
		tmp1->clear();
		HX_STACK_LINE(255)
		::openfl::_legacy::display::Graphics tmp2 = ::flixel::util::FlxSpriteUtil_obj::flashGfx;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(255)
		return tmp2;
	}
	HX_STACK_LINE(262)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Interaction_obj,getDebugGraphics,return )

Void Interaction_obj::drawItemsSelection( ){
{
		HX_STACK_FRAME("flixel.system.debug.interaction.Interaction","drawItemsSelection",0xcdd9aa30,"flixel.system.debug.interaction.Interaction.drawItemsSelection","flixel/system/debug/interaction/Interaction.hx",266,0x4548a912)
		HX_STACK_THIS(this)
		HX_STACK_LINE(267)
		::openfl::_legacy::display::Graphics tmp = this->getDebugGraphics();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(267)
		::openfl::_legacy::display::Graphics gfx = tmp;		HX_STACK_VAR(gfx,"gfx");
		HX_STACK_LINE(268)
		bool tmp1 = (gfx == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(268)
		if ((tmp1)){
			HX_STACK_LINE(269)
			return null();
		}
		HX_STACK_LINE(271)
		::flixel::group::FlxTypedGroup tmp2 = this->selectedItems;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(271)
		::flixel::group::FlxTypedGroupIterator tmp3 = ::flixel::group::FlxTypedGroupIterator_obj::__new(tmp2->members,null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(271)
		for(::cpp::FastIterator_obj< ::flixel::FlxObject > *__it = ::cpp::CreateFastIterator< ::flixel::FlxObject >(tmp3);  __it->hasNext(); ){
			::flixel::FlxObject member = __it->next();
			{
				HX_STACK_LINE(273)
				bool tmp4 = (member != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(273)
				bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(273)
				bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(273)
				if ((tmp5)){
					HX_STACK_LINE(273)
					tmp6 = (member->scrollFactor != null());
				}
				else{
					HX_STACK_LINE(273)
					tmp6 = false;
				}
				HX_STACK_LINE(273)
				bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(273)
				if ((tmp6)){
					HX_STACK_LINE(273)
					tmp7 = member->isOnScreen(null());
				}
				else{
					HX_STACK_LINE(273)
					tmp7 = false;
				}
				HX_STACK_LINE(273)
				if ((tmp7)){
					HX_STACK_LINE(276)
					gfx->lineStyle(((Float)1.5),(int)16711680,null(),null(),null(),null(),null(),null());
					HX_STACK_LINE(277)
					Float tmp8 = member->x;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(277)
					::flixel::FlxCamera tmp9 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(277)
					Float tmp10 = tmp9->scroll->x;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(277)
					Float tmp11 = (tmp8 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(278)
					Float tmp12 = member->y;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(278)
					::flixel::FlxCamera tmp13 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(278)
					Float tmp14 = tmp13->scroll->y;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(278)
					Float tmp15 = (tmp12 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(279)
					Float tmp16 = member->get_width();		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(279)
					Float tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(279)
					Float tmp18 = member->get_height();		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(279)
					Float tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(277)
					gfx->drawRect(tmp11,tmp15,tmp17,tmp19);
				}
			}
;
		}
		HX_STACK_LINE(284)
		bool tmp4 = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(284)
		if ((tmp4)){
			HX_STACK_LINE(285)
			::flixel::FlxCamera tmp5 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(285)
			::openfl::_legacy::display::Sprite tmp6 = ::flixel::util::FlxSpriteUtil_obj::flashGfxSprite;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(285)
			tmp5->buffer->draw(tmp6,null(),null(),null(),null(),null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Interaction_obj,drawItemsSelection,(void))

::flixel::_system::debug::interaction::tools::Tool Interaction_obj::getTool( ::hx::Class className){
	HX_STACK_FRAME("flixel.system.debug.interaction.Interaction","getTool",0x860b202e,"flixel.system.debug.interaction.Interaction.getTool","flixel/system/debug/interaction/Interaction.hx",289,0x4548a912)
	HX_STACK_THIS(this)
	HX_STACK_ARG(className,"className")
	HX_STACK_LINE(290)
	{
		HX_STACK_LINE(290)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(290)
		Array< ::Dynamic > _g1 = this->_tools;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(290)
		while((true)){
			HX_STACK_LINE(290)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(290)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(290)
			if ((tmp1)){
				HX_STACK_LINE(290)
				break;
			}
			HX_STACK_LINE(290)
			::flixel::_system::debug::interaction::tools::Tool tmp2 = _g1->__get(_g).StaticCast< ::flixel::_system::debug::interaction::tools::Tool >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(290)
			::flixel::_system::debug::interaction::tools::Tool tool = tmp2;		HX_STACK_VAR(tool,"tool");
			HX_STACK_LINE(290)
			++(_g);
			HX_STACK_LINE(291)
			::flixel::_system::debug::interaction::tools::Tool tmp3 = tool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(291)
			::hx::Class tmp4 = className;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(291)
			bool tmp5 = ::Std_obj::is(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(291)
			if ((tmp5)){
				HX_STACK_LINE(292)
				::flixel::_system::debug::interaction::tools::Tool tmp6 = tool;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(292)
				return tmp6;
			}
		}
	}
	HX_STACK_LINE(293)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Interaction_obj,getTool,return )

Void Interaction_obj::toggleVisible( ){
{
		HX_STACK_FRAME("flixel.system.debug.interaction.Interaction","toggleVisible",0x4f15685e,"flixel.system.debug.interaction.Interaction.toggleVisible","flixel/system/debug/interaction/Interaction.hx",297,0x4548a912)
		HX_STACK_THIS(this)
		HX_STACK_LINE(298)
		this->super::toggleVisible();
		HX_STACK_LINE(300)
		bool tmp = this->get_visible();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(300)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(300)
		if ((tmp1)){
			HX_STACK_LINE(303)
			this->setActiveTool(null());
			HX_STACK_LINE(304)
			this->restoreSystemCursor();
		}
	}
return null();
}


Void Interaction_obj::registerCustomCursor( ::String name,::openfl::_legacy::display::BitmapData icon){
{
		HX_STACK_FRAME("flixel.system.debug.interaction.Interaction","registerCustomCursor",0xf323974a,"flixel.system.debug.interaction.Interaction.registerCustomCursor","flixel/system/debug/interaction/Interaction.hx",309,0x4548a912)
		HX_STACK_THIS(this)
		HX_STACK_ARG(name,"name")
		HX_STACK_ARG(icon,"icon")
		HX_STACK_LINE(310)
		bool tmp = (icon == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(310)
		if ((tmp)){
			HX_STACK_LINE(311)
			return null();
		}
		HX_STACK_LINE(316)
		::openfl::_legacy::display::Sprite tmp1 = ::openfl::_legacy::display::Sprite_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(316)
		::openfl::_legacy::display::Sprite sprite = tmp1;		HX_STACK_VAR(sprite,"sprite");
		HX_STACK_LINE(317)
		sprite->set_visible(false);
		HX_STACK_LINE(318)
		::String tmp2 = name;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(318)
		sprite->set_name(tmp2);
		HX_STACK_LINE(319)
		::openfl::_legacy::display::Bitmap tmp3 = ::openfl::_legacy::display::Bitmap_obj::__new(icon,null(),null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(319)
		sprite->addChild(tmp3);
		HX_STACK_LINE(320)
		::openfl::_legacy::display::Sprite tmp4 = this->_customCursor;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(320)
		::openfl::_legacy::display::Sprite tmp5 = sprite;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(320)
		tmp4->addChild(tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Interaction_obj,registerCustomCursor,(void))

Void Interaction_obj::updateCustomCursors( ){
{
		HX_STACK_FRAME("flixel.system.debug.interaction.Interaction","updateCustomCursors",0x218c1283,"flixel.system.debug.interaction.Interaction.updateCustomCursors","flixel/system/debug/interaction/Interaction.hx",325,0x4548a912)
		HX_STACK_THIS(this)
		HX_STACK_LINE(330)
		::flixel::_system::debug::interaction::tools::Tool tmp = this->activeTool;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(330)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(330)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(330)
		if ((tmp1)){
			HX_STACK_LINE(330)
			bool tmp3 = this->_debuggerInteraction;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(330)
			bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(330)
			bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(330)
			tmp2 = !(tmp5);
		}
		else{
			HX_STACK_LINE(330)
			tmp2 = false;
		}
		HX_STACK_LINE(330)
		if ((tmp2)){
			HX_STACK_LINE(333)
			::flixel::_system::debug::interaction::tools::Tool tmp3 = this->activeTool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(333)
			::openfl::_legacy::display::BitmapData tmp4 = tmp3->__Field(HX_HCSTRING("cursor","\xd6","\x8e","\xe8","\x3e"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(333)
			bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(333)
			if ((tmp5)){
				HX_STACK_LINE(343)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(343)
				::openfl::_legacy::display::Sprite tmp6 = this->_customCursor;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(343)
				int tmp7 = tmp6->get_numChildren();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(343)
				int _g = tmp7;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(343)
				while((true)){
					HX_STACK_LINE(343)
					bool tmp8 = (_g1 < _g);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(343)
					bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(343)
					if ((tmp9)){
						HX_STACK_LINE(343)
						break;
					}
					HX_STACK_LINE(343)
					int tmp10 = (_g1)++;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(343)
					int i = tmp10;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(345)
					::openfl::_legacy::display::Sprite tmp11 = this->_customCursor;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(345)
					int tmp12 = i;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(345)
					::openfl::_legacy::display::DisplayObject tmp13 = tmp11->getChildAt(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(345)
					::openfl::_legacy::display::DisplayObject sprite = tmp13;		HX_STACK_VAR(sprite,"sprite");
					HX_STACK_LINE(346)
					::String tmp14 = sprite->get_name();		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(346)
					::flixel::_system::debug::interaction::tools::Tool tmp15 = this->activeTool;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(346)
					::String tmp16 = tmp15->__Field(HX_HCSTRING("get_name","\xd4","\x2d","\xba","\xc8"), hx::paccDynamic )();		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(346)
					bool tmp17 = (tmp14 == tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(346)
					sprite->set_visible(tmp17);
				}
			}
			else{
				HX_STACK_LINE(354)
				::flixel::input::mouse::FlxMouse tmp6 = ::flixel::FlxG_obj::mouse;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(354)
				tmp6->set_useSystemCursor(true);
			}
		}
		else{
			HX_STACK_LINE(361)
			::flixel::input::mouse::FlxMouse tmp3 = ::flixel::FlxG_obj::mouse;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(361)
			tmp3->set_useSystemCursor(true);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Interaction_obj,updateCustomCursors,(void))

Void Interaction_obj::saveSystemCursorInfo( ){
{
		HX_STACK_FRAME("flixel.system.debug.interaction.Interaction","saveSystemCursorInfo",0x622efa70,"flixel.system.debug.interaction.Interaction.saveSystemCursorInfo","flixel/system/debug/interaction/Interaction.hx",367,0x4548a912)
		HX_STACK_THIS(this)
		HX_STACK_LINE(369)
		::flixel::input::mouse::FlxMouse tmp = ::flixel::FlxG_obj::mouse;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(369)
		this->_wasMouseVisible = tmp->visible;
		HX_STACK_LINE(370)
		::flixel::input::mouse::FlxMouse tmp1 = ::flixel::FlxG_obj::mouse;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(370)
		this->_wasUsingSystemCursor = tmp1->useSystemCursor;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Interaction_obj,saveSystemCursorInfo,(void))

Void Interaction_obj::restoreSystemCursor( ){
{
		HX_STACK_FRAME("flixel.system.debug.interaction.Interaction","restoreSystemCursor",0x6747acb3,"flixel.system.debug.interaction.Interaction.restoreSystemCursor","flixel/system/debug/interaction/Interaction.hx",375,0x4548a912)
		HX_STACK_THIS(this)
		HX_STACK_LINE(377)
		::flixel::input::mouse::FlxMouse tmp = ::flixel::FlxG_obj::mouse;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(377)
		bool tmp1 = this->_wasUsingSystemCursor;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(377)
		tmp->set_useSystemCursor(tmp1);
		HX_STACK_LINE(378)
		::flixel::input::mouse::FlxMouse tmp2 = ::flixel::FlxG_obj::mouse;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(378)
		bool tmp3 = this->_wasMouseVisible;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(378)
		tmp2->set_visible(tmp3);
		HX_STACK_LINE(379)
		::openfl::_legacy::display::Sprite tmp4 = this->_customCursor;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(379)
		tmp4->set_visible(false);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Interaction_obj,restoreSystemCursor,(void))

Void Interaction_obj::setActiveTool( ::flixel::_system::debug::interaction::tools::Tool value){
{
		HX_STACK_FRAME("flixel.system.debug.interaction.Interaction","setActiveTool",0x92d80fa0,"flixel.system.debug.interaction.Interaction.setActiveTool","flixel/system/debug/interaction/Interaction.hx",384,0x4548a912)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(385)
		::flixel::_system::debug::interaction::tools::Tool tmp = this->activeTool;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(385)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(385)
		if ((tmp1)){
			HX_STACK_LINE(387)
			::flixel::_system::debug::interaction::tools::Tool tmp2 = this->activeTool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(387)
			tmp2->__Field(HX_HCSTRING("deactivate","\x34","\x5c","\x01","\x3c"), hx::paccDynamic )();
			HX_STACK_LINE(388)
			::flixel::_system::debug::interaction::tools::Tool tmp3 = this->activeTool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(388)
			tmp3->__Field(HX_HCSTRING("button","\xf2","\x61","\xe0","\xd9"), hx::paccDynamic )->__Field(HX_HCSTRING("set_toggled","\x73","\x49","\x6b","\x5c"), hx::paccDynamic )(true);
		}
		HX_STACK_LINE(391)
		::flixel::_system::debug::interaction::tools::Tool tmp2 = this->activeTool;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(391)
		::flixel::_system::debug::interaction::tools::Tool tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(391)
		bool tmp4 = (tmp2 == tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(391)
		if ((tmp4)){
			HX_STACK_LINE(392)
			value = null();
		}
		HX_STACK_LINE(394)
		this->activeTool = value;
		HX_STACK_LINE(396)
		::flixel::_system::debug::interaction::tools::Tool tmp5 = this->activeTool;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(396)
		bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(396)
		if ((tmp6)){
			HX_STACK_LINE(399)
			this->setToolsCursorVisibility(true);
			HX_STACK_LINE(401)
			::flixel::_system::debug::interaction::tools::Tool tmp7 = this->activeTool;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(401)
			tmp7->__Field(HX_HCSTRING("button","\xf2","\x61","\xe0","\xd9"), hx::paccDynamic )->__Field(HX_HCSTRING("set_toggled","\x73","\x49","\x6b","\x5c"), hx::paccDynamic )(false);
			HX_STACK_LINE(402)
			::flixel::_system::debug::interaction::tools::Tool tmp8 = this->activeTool;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(402)
			tmp8->__Field(HX_HCSTRING("activate","\xb3","\x1b","\xac","\xe5"), hx::paccDynamic )();
			HX_STACK_LINE(403)
			this->updateCustomCursors();
		}
		else{
			HX_STACK_LINE(409)
			this->setSystemCursorVisibility(true);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Interaction_obj,setActiveTool,(void))

Void Interaction_obj::setSystemCursorVisibility( bool status){
{
		HX_STACK_FRAME("flixel.system.debug.interaction.Interaction","setSystemCursorVisibility",0x3bad5fb9,"flixel.system.debug.interaction.Interaction.setSystemCursorVisibility","flixel/system/debug/interaction/Interaction.hx",414,0x4548a912)
		HX_STACK_THIS(this)
		HX_STACK_ARG(status,"status")
		HX_STACK_LINE(416)
		::flixel::input::mouse::FlxMouse tmp = ::flixel::FlxG_obj::mouse;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(416)
		bool tmp1 = status;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(416)
		tmp->set_useSystemCursor(tmp1);
		HX_STACK_LINE(418)
		::openfl::_legacy::display::Sprite tmp2 = this->_customCursor;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(418)
		bool tmp3 = status;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(418)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(418)
		tmp2->set_visible(tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Interaction_obj,setSystemCursorVisibility,(void))

Void Interaction_obj::setToolsCursorVisibility( bool status){
{
		HX_STACK_FRAME("flixel.system.debug.interaction.Interaction","setToolsCursorVisibility",0x9dd4e861,"flixel.system.debug.interaction.Interaction.setToolsCursorVisibility","flixel/system/debug/interaction/Interaction.hx",422,0x4548a912)
		HX_STACK_THIS(this)
		HX_STACK_ARG(status,"status")
		HX_STACK_LINE(424)
		::flixel::input::mouse::FlxMouse tmp = ::flixel::FlxG_obj::mouse;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(424)
		tmp->set_useSystemCursor(false);
		HX_STACK_LINE(426)
		::openfl::_legacy::display::Sprite tmp1 = this->_customCursor;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(426)
		bool tmp2 = status;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(426)
		tmp1->set_visible(tmp2);
		HX_STACK_LINE(428)
		bool tmp3 = status;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(428)
		if ((tmp3)){
			HX_STACK_LINE(429)
			return null();
		}
		HX_STACK_LINE(434)
		{
			HX_STACK_LINE(434)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(434)
			::openfl::_legacy::display::Sprite tmp4 = this->_customCursor;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(434)
			int tmp5 = tmp4->get_numChildren();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(434)
			int _g = tmp5;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(434)
			while((true)){
				HX_STACK_LINE(434)
				bool tmp6 = (_g1 < _g);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(434)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(434)
				if ((tmp7)){
					HX_STACK_LINE(434)
					break;
				}
				HX_STACK_LINE(434)
				int tmp8 = (_g1)++;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(434)
				int i = tmp8;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(435)
				::openfl::_legacy::display::Sprite tmp9 = this->_customCursor;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(435)
				int tmp10 = i;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(435)
				::openfl::_legacy::display::DisplayObject tmp11 = tmp9->getChildAt(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(435)
				tmp11->set_visible(false);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Interaction_obj,setToolsCursorVisibility,(void))

Void Interaction_obj::clearSelection( ){
{
		HX_STACK_FRAME("flixel.system.debug.interaction.Interaction","clearSelection",0x1e241bdf,"flixel.system.debug.interaction.Interaction.clearSelection","flixel/system/debug/interaction/Interaction.hx",439,0x4548a912)
		HX_STACK_THIS(this)
		HX_STACK_LINE(440)
		::flixel::group::FlxTypedGroup tmp = this->selectedItems;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(440)
		tmp->clear();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Interaction_obj,clearSelection,(void))

bool Interaction_obj::keyPressed( int key){
	HX_STACK_FRAME("flixel.system.debug.interaction.Interaction","keyPressed",0xc6e951a3,"flixel.system.debug.interaction.Interaction.keyPressed","flixel/system/debug/interaction/Interaction.hx",444,0x4548a912)
	HX_STACK_THIS(this)
	HX_STACK_ARG(key,"key")
	HX_STACK_LINE(445)
	::haxe::ds::IntMap tmp = this->_keysDown;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(445)
	int tmp1 = key;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(445)
	Dynamic tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(445)
	Dynamic tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(445)
	bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(445)
	int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(445)
	if ((tmp4)){
		HX_STACK_LINE(445)
		tmp5 = (int)0;
	}
	else{
		HX_STACK_LINE(445)
		::haxe::ds::IntMap tmp6 = this->_keysDown;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(445)
		int tmp7 = key;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(445)
		Dynamic tmp8 = tmp6->get(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(445)
		tmp5 = tmp8;
	}
	HX_STACK_LINE(445)
	int value = tmp5;		HX_STACK_VAR(value,"value");
	HX_STACK_LINE(446)
	int tmp6 = this->_turn;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(446)
	int tmp7 = value;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(446)
	bool tmp8 = (tmp6 <= tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(446)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC1(Interaction_obj,keyPressed,return )

bool Interaction_obj::keyJustPressed( int key){
	HX_STACK_FRAME("flixel.system.debug.interaction.Interaction","keyJustPressed",0x9fbba157,"flixel.system.debug.interaction.Interaction.keyJustPressed","flixel/system/debug/interaction/Interaction.hx",450,0x4548a912)
	HX_STACK_THIS(this)
	HX_STACK_ARG(key,"key")
	HX_STACK_LINE(451)
	::haxe::ds::IntMap tmp = this->_keysUp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(451)
	int tmp1 = key;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(451)
	Dynamic tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(451)
	Dynamic tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(451)
	bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(451)
	int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(451)
	if ((tmp4)){
		HX_STACK_LINE(451)
		tmp5 = (int)0;
	}
	else{
		HX_STACK_LINE(451)
		::haxe::ds::IntMap tmp6 = this->_keysUp;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(451)
		int tmp7 = key;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(451)
		Dynamic tmp8 = tmp6->get(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(451)
		tmp5 = tmp8;
	}
	HX_STACK_LINE(451)
	int value = tmp5;		HX_STACK_VAR(value,"value");
	HX_STACK_LINE(452)
	int tmp6 = this->_turn;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(452)
	int tmp7 = value;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(452)
	int tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(452)
	bool tmp9 = (tmp8 == (int)1);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(452)
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC1(Interaction_obj,keyJustPressed,return )


Interaction_obj::Interaction_obj()
{
}

void Interaction_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Interaction);
	HX_MARK_MEMBER_NAME(activeTool,"activeTool");
	HX_MARK_MEMBER_NAME(selectedItems,"selectedItems");
	HX_MARK_MEMBER_NAME(flixelPointer,"flixelPointer");
	HX_MARK_MEMBER_NAME(pointerJustPressed,"pointerJustPressed");
	HX_MARK_MEMBER_NAME(pointerJustReleased,"pointerJustReleased");
	HX_MARK_MEMBER_NAME(pointerPressed,"pointerPressed");
	HX_MARK_MEMBER_NAME(_container,"_container");
	HX_MARK_MEMBER_NAME(_customCursor,"_customCursor");
	HX_MARK_MEMBER_NAME(_tools,"_tools");
	HX_MARK_MEMBER_NAME(_turn,"_turn");
	HX_MARK_MEMBER_NAME(_keysDown,"_keysDown");
	HX_MARK_MEMBER_NAME(_keysUp,"_keysUp");
	HX_MARK_MEMBER_NAME(_wasMouseVisible,"_wasMouseVisible");
	HX_MARK_MEMBER_NAME(_wasUsingSystemCursor,"_wasUsingSystemCursor");
	HX_MARK_MEMBER_NAME(_debuggerInteraction,"_debuggerInteraction");
	HX_MARK_MEMBER_NAME(_flixelPointer,"_flixelPointer");
	::flixel::_system::debug::Window_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Interaction_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(activeTool,"activeTool");
	HX_VISIT_MEMBER_NAME(selectedItems,"selectedItems");
	HX_VISIT_MEMBER_NAME(flixelPointer,"flixelPointer");
	HX_VISIT_MEMBER_NAME(pointerJustPressed,"pointerJustPressed");
	HX_VISIT_MEMBER_NAME(pointerJustReleased,"pointerJustReleased");
	HX_VISIT_MEMBER_NAME(pointerPressed,"pointerPressed");
	HX_VISIT_MEMBER_NAME(_container,"_container");
	HX_VISIT_MEMBER_NAME(_customCursor,"_customCursor");
	HX_VISIT_MEMBER_NAME(_tools,"_tools");
	HX_VISIT_MEMBER_NAME(_turn,"_turn");
	HX_VISIT_MEMBER_NAME(_keysDown,"_keysDown");
	HX_VISIT_MEMBER_NAME(_keysUp,"_keysUp");
	HX_VISIT_MEMBER_NAME(_wasMouseVisible,"_wasMouseVisible");
	HX_VISIT_MEMBER_NAME(_wasUsingSystemCursor,"_wasUsingSystemCursor");
	HX_VISIT_MEMBER_NAME(_debuggerInteraction,"_debuggerInteraction");
	HX_VISIT_MEMBER_NAME(_flixelPointer,"_flixelPointer");
	::flixel::_system::debug::Window_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Interaction_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_turn") ) { return _turn; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_tools") ) { return _tools; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_keysUp") ) { return _keysUp; }
		if (HX_FIELD_EQ(inName,"addTool") ) { return addTool_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"getTool") ) { return getTool_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isActive") ) { return isActive_dyn(); }
		if (HX_FIELD_EQ(inName,"postDraw") ) { return postDraw_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_keysDown") ) { return _keysDown; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"activeTool") ) { return activeTool; }
		if (HX_FIELD_EQ(inName,"_container") ) { return _container; }
		if (HX_FIELD_EQ(inName,"keyPressed") ) { return keyPressed_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"updateMouse") ) { return updateMouse_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"selectedItems") ) { return selectedItems; }
		if (HX_FIELD_EQ(inName,"flixelPointer") ) { return flixelPointer; }
		if (HX_FIELD_EQ(inName,"_customCursor") ) { return _customCursor; }
		if (HX_FIELD_EQ(inName,"toggleVisible") ) { return toggleVisible_dyn(); }
		if (HX_FIELD_EQ(inName,"setActiveTool") ) { return setActiveTool_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"pointerPressed") ) { return pointerPressed; }
		if (HX_FIELD_EQ(inName,"_flixelPointer") ) { return _flixelPointer; }
		if (HX_FIELD_EQ(inName,"handleKeyEvent") ) { return handleKeyEvent_dyn(); }
		if (HX_FIELD_EQ(inName,"clearSelection") ) { return clearSelection_dyn(); }
		if (HX_FIELD_EQ(inName,"keyJustPressed") ) { return keyJustPressed_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_wasMouseVisible") ) { return _wasMouseVisible; }
		if (HX_FIELD_EQ(inName,"handleMouseClick") ) { return handleMouseClick_dyn(); }
		if (HX_FIELD_EQ(inName,"getDebugGraphics") ) { return getDebugGraphics_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"pointerJustPressed") ) { return pointerJustPressed; }
		if (HX_FIELD_EQ(inName,"drawItemsSelection") ) { return drawItemsSelection_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"pointerJustReleased") ) { return pointerJustReleased; }
		if (HX_FIELD_EQ(inName,"updateCustomCursors") ) { return updateCustomCursors_dyn(); }
		if (HX_FIELD_EQ(inName,"restoreSystemCursor") ) { return restoreSystemCursor_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_debuggerInteraction") ) { return _debuggerInteraction; }
		if (HX_FIELD_EQ(inName,"registerCustomCursor") ) { return registerCustomCursor_dyn(); }
		if (HX_FIELD_EQ(inName,"saveSystemCursorInfo") ) { return saveSystemCursorInfo_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_wasUsingSystemCursor") ) { return _wasUsingSystemCursor; }
		if (HX_FIELD_EQ(inName,"handleMouseInDebugger") ) { return handleMouseInDebugger_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"setToolsCursorVisibility") ) { return setToolsCursorVisibility_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"setSystemCursorVisibility") ) { return setSystemCursorVisibility_dyn(); }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"handleDebuggerVisibilityChanged") ) { return handleDebuggerVisibilityChanged_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Interaction_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_turn") ) { _turn=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_tools") ) { _tools=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_keysUp") ) { _keysUp=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_keysDown") ) { _keysDown=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"activeTool") ) { activeTool=inValue.Cast< ::flixel::_system::debug::interaction::tools::Tool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_container") ) { _container=inValue.Cast< ::openfl::_legacy::display::Sprite >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"selectedItems") ) { selectedItems=inValue.Cast< ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"flixelPointer") ) { flixelPointer=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_customCursor") ) { _customCursor=inValue.Cast< ::openfl::_legacy::display::Sprite >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"pointerPressed") ) { pointerPressed=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flixelPointer") ) { _flixelPointer=inValue.Cast< ::flixel::input::FlxPointer >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_wasMouseVisible") ) { _wasMouseVisible=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"pointerJustPressed") ) { pointerJustPressed=inValue.Cast< bool >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"pointerJustReleased") ) { pointerJustReleased=inValue.Cast< bool >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_debuggerInteraction") ) { _debuggerInteraction=inValue.Cast< bool >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_wasUsingSystemCursor") ) { _wasUsingSystemCursor=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Interaction_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("activeTool","\x3e","\x24","\x2c","\xf6"));
	outFields->push(HX_HCSTRING("selectedItems","\xa5","\x87","\x4e","\xb8"));
	outFields->push(HX_HCSTRING("flixelPointer","\xc1","\xe9","\x8f","\xfe"));
	outFields->push(HX_HCSTRING("pointerJustPressed","\x19","\xd4","\xe3","\x63"));
	outFields->push(HX_HCSTRING("pointerJustReleased","\x66","\xcf","\x4b","\x0a"));
	outFields->push(HX_HCSTRING("pointerPressed","\x65","\x7b","\x0c","\x9c"));
	outFields->push(HX_HCSTRING("_container","\x02","\xf1","\x15","\x1b"));
	outFields->push(HX_HCSTRING("_customCursor","\x46","\x78","\xf4","\x20"));
	outFields->push(HX_HCSTRING("_tools","\x5c","\xd9","\x15","\x10"));
	outFields->push(HX_HCSTRING("_turn","\x5c","\x07","\x17","\x00"));
	outFields->push(HX_HCSTRING("_keysDown","\xd5","\x07","\x2e","\x5d"));
	outFields->push(HX_HCSTRING("_keysUp","\x0e","\xa3","\x71","\xae"));
	outFields->push(HX_HCSTRING("_wasMouseVisible","\x17","\x92","\xd7","\x91"));
	outFields->push(HX_HCSTRING("_wasUsingSystemCursor","\xff","\xd8","\x04","\xe6"));
	outFields->push(HX_HCSTRING("_debuggerInteraction","\x32","\x64","\xf1","\x95"));
	outFields->push(HX_HCSTRING("_flixelPointer","\x02","\xda","\xe1","\x3c"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::_system::debug::interaction::tools::Tool*/ ,(int)offsetof(Interaction_obj,activeTool),HX_HCSTRING("activeTool","\x3e","\x24","\x2c","\xf6")},
	{hx::fsObject /*::flixel::group::FlxTypedGroup*/ ,(int)offsetof(Interaction_obj,selectedItems),HX_HCSTRING("selectedItems","\xa5","\x87","\x4e","\xb8")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(Interaction_obj,flixelPointer),HX_HCSTRING("flixelPointer","\xc1","\xe9","\x8f","\xfe")},
	{hx::fsBool,(int)offsetof(Interaction_obj,pointerJustPressed),HX_HCSTRING("pointerJustPressed","\x19","\xd4","\xe3","\x63")},
	{hx::fsBool,(int)offsetof(Interaction_obj,pointerJustReleased),HX_HCSTRING("pointerJustReleased","\x66","\xcf","\x4b","\x0a")},
	{hx::fsBool,(int)offsetof(Interaction_obj,pointerPressed),HX_HCSTRING("pointerPressed","\x65","\x7b","\x0c","\x9c")},
	{hx::fsObject /*::openfl::_legacy::display::Sprite*/ ,(int)offsetof(Interaction_obj,_container),HX_HCSTRING("_container","\x02","\xf1","\x15","\x1b")},
	{hx::fsObject /*::openfl::_legacy::display::Sprite*/ ,(int)offsetof(Interaction_obj,_customCursor),HX_HCSTRING("_customCursor","\x46","\x78","\xf4","\x20")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Interaction_obj,_tools),HX_HCSTRING("_tools","\x5c","\xd9","\x15","\x10")},
	{hx::fsInt,(int)offsetof(Interaction_obj,_turn),HX_HCSTRING("_turn","\x5c","\x07","\x17","\x00")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(Interaction_obj,_keysDown),HX_HCSTRING("_keysDown","\xd5","\x07","\x2e","\x5d")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(Interaction_obj,_keysUp),HX_HCSTRING("_keysUp","\x0e","\xa3","\x71","\xae")},
	{hx::fsBool,(int)offsetof(Interaction_obj,_wasMouseVisible),HX_HCSTRING("_wasMouseVisible","\x17","\x92","\xd7","\x91")},
	{hx::fsBool,(int)offsetof(Interaction_obj,_wasUsingSystemCursor),HX_HCSTRING("_wasUsingSystemCursor","\xff","\xd8","\x04","\xe6")},
	{hx::fsBool,(int)offsetof(Interaction_obj,_debuggerInteraction),HX_HCSTRING("_debuggerInteraction","\x32","\x64","\xf1","\x95")},
	{hx::fsObject /*::flixel::input::FlxPointer*/ ,(int)offsetof(Interaction_obj,_flixelPointer),HX_HCSTRING("_flixelPointer","\x02","\xda","\xe1","\x3c")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("activeTool","\x3e","\x24","\x2c","\xf6"),
	HX_HCSTRING("selectedItems","\xa5","\x87","\x4e","\xb8"),
	HX_HCSTRING("flixelPointer","\xc1","\xe9","\x8f","\xfe"),
	HX_HCSTRING("pointerJustPressed","\x19","\xd4","\xe3","\x63"),
	HX_HCSTRING("pointerJustReleased","\x66","\xcf","\x4b","\x0a"),
	HX_HCSTRING("pointerPressed","\x65","\x7b","\x0c","\x9c"),
	HX_HCSTRING("_container","\x02","\xf1","\x15","\x1b"),
	HX_HCSTRING("_customCursor","\x46","\x78","\xf4","\x20"),
	HX_HCSTRING("_tools","\x5c","\xd9","\x15","\x10"),
	HX_HCSTRING("_turn","\x5c","\x07","\x17","\x00"),
	HX_HCSTRING("_keysDown","\xd5","\x07","\x2e","\x5d"),
	HX_HCSTRING("_keysUp","\x0e","\xa3","\x71","\xae"),
	HX_HCSTRING("_wasMouseVisible","\x17","\x92","\xd7","\x91"),
	HX_HCSTRING("_wasUsingSystemCursor","\xff","\xd8","\x04","\xe6"),
	HX_HCSTRING("_debuggerInteraction","\x32","\x64","\xf1","\x95"),
	HX_HCSTRING("_flixelPointer","\x02","\xda","\xe1","\x3c"),
	HX_HCSTRING("handleDebuggerVisibilityChanged","\x19","\xe7","\xa4","\x01"),
	HX_HCSTRING("updateMouse","\x5c","\x7f","\xfd","\xf1"),
	HX_HCSTRING("handleMouseClick","\xab","\x19","\xf2","\x35"),
	HX_HCSTRING("handleMouseInDebugger","\xe3","\x24","\x6b","\x87"),
	HX_HCSTRING("handleKeyEvent","\xc3","\x95","\x05","\x08"),
	HX_HCSTRING("addTool","\x19","\x9e","\x3e","\x89"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("isActive","\x50","\xdd","\xaf","\x6e"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("postDraw","\x84","\x8c","\xaf","\x00"),
	HX_HCSTRING("getDebugGraphics","\xc8","\xbb","\x40","\x9c"),
	HX_HCSTRING("drawItemsSelection","\x50","\xeb","\x14","\xb9"),
	HX_HCSTRING("getTool","\x0e","\x0b","\x84","\x1f"),
	HX_HCSTRING("toggleVisible","\x3e","\xbb","\xe1","\x53"),
	HX_HCSTRING("registerCustomCursor","\x6a","\x60","\x89","\x94"),
	HX_HCSTRING("updateCustomCursors","\x63","\xcd","\x29","\x0a"),
	HX_HCSTRING("saveSystemCursorInfo","\x90","\xc3","\x94","\x03"),
	HX_HCSTRING("restoreSystemCursor","\x93","\x67","\xe5","\x4f"),
	HX_HCSTRING("setActiveTool","\x80","\x62","\xa4","\x97"),
	HX_HCSTRING("setSystemCursorVisibility","\x99","\x82","\x1a","\xf3"),
	HX_HCSTRING("setToolsCursorVisibility","\x81","\xc1","\x25","\x4d"),
	HX_HCSTRING("clearSelection","\xff","\x4c","\x20","\x4c"),
	HX_HCSTRING("keyPressed","\xc3","\x72","\x6e","\xa8"),
	HX_HCSTRING("keyJustPressed","\x77","\xd2","\xb7","\xcd"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Interaction_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Interaction_obj::__mClass,"__mClass");
};

#endif

hx::Class Interaction_obj::__mClass;

void Interaction_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.debug.interaction.Interaction","\x8e","\x55","\xb1","\x5c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Interaction_obj >;
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
