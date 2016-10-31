#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_system_FlxAssets
#include <flixel/system/FlxAssets.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSoundGroup
#include <flixel/system/FlxSoundGroup.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_ui_FlxSoundTray
#include <flixel/system/ui/FlxSoundTray.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
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
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_media_Sound
#include <openfl/_legacy/media/Sound.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_TextField
#include <openfl/_legacy/text/TextField.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_TextFormat
#include <openfl/_legacy/text/TextFormat.h>
#endif
namespace flixel{
namespace _system{
namespace ui{

Void FlxSoundTray_obj::__construct()
{
HX_STACK_FRAME("flixel.system.ui.FlxSoundTray","new",0x221b6352,"flixel.system.ui.FlxSoundTray.new","flixel/system/ui/FlxSoundTray.hx",23,0x04618f9d)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(43)
	this->_defaultScale = ((Float)2.0);
	HX_STACK_LINE(41)
	this->_width = (int)80;
	HX_STACK_LINE(51)
	super::__construct();
	HX_STACK_LINE(53)
	this->set_visible(false);
	HX_STACK_LINE(54)
	Float tmp = this->_defaultScale;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(54)
	this->set_scaleX(tmp);
	HX_STACK_LINE(55)
	Float tmp1 = this->_defaultScale;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(55)
	this->set_scaleY(tmp1);
	HX_STACK_LINE(56)
	int tmp2 = this->_width;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(56)
	::openfl::_legacy::display::BitmapData tmp3 = ::openfl::_legacy::display::BitmapData_obj::__new(tmp2,(int)30,true,(int)2130706432,null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(56)
	::openfl::_legacy::display::Bitmap tmp4 = ::openfl::_legacy::display::Bitmap_obj::__new(tmp3,null(),null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(56)
	::openfl::_legacy::display::Bitmap tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(57)
	this->screenCenter();
	HX_STACK_LINE(58)
	::openfl::_legacy::display::Bitmap tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(58)
	this->addChild(tmp6);
	HX_STACK_LINE(60)
	::openfl::_legacy::text::TextField tmp7 = ::openfl::_legacy::text::TextField_obj::__new();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(60)
	::openfl::_legacy::text::TextField text = tmp7;		HX_STACK_VAR(text,"text");
	HX_STACK_LINE(61)
	Float tmp8 = tmp5->get_width();		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(61)
	text->set_width(tmp8);
	HX_STACK_LINE(62)
	Float tmp9 = tmp5->get_height();		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(62)
	text->set_height(tmp9);
	HX_STACK_LINE(63)
	text->set_multiline(true);
	HX_STACK_LINE(64)
	text->set_wordWrap(true);
	HX_STACK_LINE(65)
	text->set_selectable(false);
	HX_STACK_LINE(74)
	::String tmp10 = ::flixel::_system::FlxAssets_obj::FONT_DEFAULT;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(74)
	::openfl::_legacy::text::TextFormat tmp11 = ::openfl::_legacy::text::TextFormat_obj::__new(tmp10,(int)10,(int)16777215,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(74)
	::openfl::_legacy::text::TextFormat dtf = tmp11;		HX_STACK_VAR(dtf,"dtf");
	HX_STACK_LINE(75)
	dtf->align = HX_HCSTRING("center","\xd5","\x25","\xdb","\x05");
	HX_STACK_LINE(76)
	::openfl::_legacy::text::TextFormat tmp12 = dtf;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(76)
	text->set_defaultTextFormat(tmp12);
	HX_STACK_LINE(77)
	::openfl::_legacy::text::TextField tmp13 = text;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(77)
	this->addChild(tmp13);
	HX_STACK_LINE(78)
	text->set_text(HX_HCSTRING("VOLUME","\xda","\xd5","\xd5","\x11"));
	HX_STACK_LINE(79)
	text->set_y((int)16);
	HX_STACK_LINE(81)
	int bx = (int)10;		HX_STACK_VAR(bx,"bx");
	HX_STACK_LINE(82)
	int by = (int)14;		HX_STACK_VAR(by,"by");
	HX_STACK_LINE(83)
	this->_bars = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(85)
	{
		HX_STACK_LINE(85)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(85)
		while((true)){
			HX_STACK_LINE(85)
			bool tmp14 = (_g < (int)10);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(85)
			bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(85)
			if ((tmp15)){
				HX_STACK_LINE(85)
				break;
			}
			HX_STACK_LINE(85)
			int tmp16 = (_g)++;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(85)
			int i = tmp16;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(87)
			int tmp17 = (i + (int)1);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(87)
			::openfl::_legacy::display::BitmapData tmp18 = ::openfl::_legacy::display::BitmapData_obj::__new((int)4,tmp17,false,(int)-1,null());		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(87)
			::openfl::_legacy::display::Bitmap tmp19 = ::openfl::_legacy::display::Bitmap_obj::__new(tmp18,null(),null());		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(87)
			tmp5 = tmp19;
			HX_STACK_LINE(88)
			int tmp20 = bx;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(88)
			tmp5->set_x(tmp20);
			HX_STACK_LINE(89)
			int tmp21 = by;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(89)
			tmp5->set_y(tmp21);
			HX_STACK_LINE(90)
			::openfl::_legacy::display::Bitmap tmp22 = tmp5;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(90)
			this->addChild(tmp22);
			HX_STACK_LINE(91)
			::openfl::_legacy::display::Bitmap tmp23 = tmp5;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(91)
			this->_bars->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp23);
			HX_STACK_LINE(92)
			hx::AddEq(bx,(int)6);
			HX_STACK_LINE(93)
			(by)--;
		}
	}
	HX_STACK_LINE(96)
	Float tmp14 = this->get_height();		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(96)
	Float tmp15 = -(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(96)
	this->set_y(tmp15);
	HX_STACK_LINE(97)
	this->set_visible(false);
}
;
	return null();
}

//FlxSoundTray_obj::~FlxSoundTray_obj() { }

Dynamic FlxSoundTray_obj::__CreateEmpty() { return  new FlxSoundTray_obj; }
hx::ObjectPtr< FlxSoundTray_obj > FlxSoundTray_obj::__new()
{  hx::ObjectPtr< FlxSoundTray_obj > _result_ = new FlxSoundTray_obj();
	_result_->__construct();
	return _result_;}

Dynamic FlxSoundTray_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxSoundTray_obj > _result_ = new FlxSoundTray_obj();
	_result_->__construct();
	return _result_;}

Void FlxSoundTray_obj::update( Float MS){
{
		HX_STACK_FRAME("flixel.system.ui.FlxSoundTray","update",0x9cbad657,"flixel.system.ui.FlxSoundTray.update","flixel/system/ui/FlxSoundTray.hx",104,0x04618f9d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(MS,"MS")
		HX_STACK_LINE(106)
		Float tmp = this->_timer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(106)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(106)
		if ((tmp1)){
			HX_STACK_LINE(108)
			Float tmp2 = (Float(MS) / Float((int)1000));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(108)
			hx::SubEq(this->_timer,tmp2);
		}
		else{
			HX_STACK_LINE(110)
			Float tmp2 = this->get_y();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(110)
			Float tmp3 = this->get_height();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(110)
			Float tmp4 = -(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(110)
			bool tmp5 = (tmp2 > tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(110)
			if ((tmp5)){
				HX_STACK_LINE(112)
				{
					HX_STACK_LINE(112)
					::flixel::_system::ui::FlxSoundTray _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(112)
					Float tmp6 = _g->__Field(HX_HCSTRING("get_y","\x50","\xa5","\x60","\x91"), hx::paccDynamic )();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(112)
					Float tmp7 = (Float(MS) / Float((int)1000));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(112)
					int tmp8 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(112)
					Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(112)
					Float tmp10 = (tmp9 * (int)2);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(112)
					Float tmp11 = (tmp6 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(112)
					_g->__Field(HX_HCSTRING("set_y","\x5c","\x9b","\x2f","\x7a"), hx::paccDynamic )(tmp11);
				}
				HX_STACK_LINE(114)
				Float tmp6 = this->get_y();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(114)
				Float tmp7 = this->get_height();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(114)
				Float tmp8 = -(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(114)
				bool tmp9 = (tmp6 <= tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(114)
				if ((tmp9)){
					HX_STACK_LINE(116)
					this->set_visible(false);
					HX_STACK_LINE(117)
					this->active = false;
					HX_STACK_LINE(120)
					::flixel::_system::frontEnds::SoundFrontEnd tmp10 = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(120)
					::flixel::util::FlxSave tmp11 = ::flixel::FlxG_obj::save;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(120)
					tmp11->data->__FieldRef(HX_HCSTRING("mute","\xd9","\x6e","\x65","\x48")) = tmp10->__Field(HX_HCSTRING("muted","\x6b","\x8f","\x5b","\x10"), hx::paccDynamic );
					HX_STACK_LINE(121)
					::flixel::_system::frontEnds::SoundFrontEnd tmp12 = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(121)
					::flixel::util::FlxSave tmp13 = ::flixel::FlxG_obj::save;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(121)
					tmp13->data->__FieldRef(HX_HCSTRING("volume","\xda","\x29","\x53","\x5f")) = tmp12->__Field(HX_HCSTRING("volume","\xda","\x29","\x53","\x5f"), hx::paccDynamic );
					HX_STACK_LINE(122)
					::flixel::util::FlxSave tmp14 = ::flixel::FlxG_obj::save;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(122)
					tmp14->flush(null(),null());
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSoundTray_obj,update,(void))

Void FlxSoundTray_obj::show( hx::Null< bool >  __o_Silent){
bool Silent = __o_Silent.Default(false);
	HX_STACK_FRAME("flixel.system.ui.FlxSoundTray","show",0xb92bd5cb,"flixel.system.ui.FlxSoundTray.show","flixel/system/ui/FlxSoundTray.hx",133,0x04618f9d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Silent,"Silent")
{
		HX_STACK_LINE(134)
		bool tmp = Silent;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(134)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(134)
		if ((tmp1)){
			HX_STACK_LINE(136)
			::openfl::_legacy::media::Sound tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(136)
			{
				HX_STACK_LINE(136)
				::String extension = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(extension,"extension");
				HX_STACK_LINE(136)
				extension = HX_HCSTRING(".ogg","\xe1","\x64","\xbc","\x1e");
				HX_STACK_LINE(136)
				::String tmp3 = (HX_HCSTRING("flixel/sounds/beep","\xe6","\xb5","\xa9","\x33") + extension);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(136)
				tmp2 = ::openfl::_legacy::Assets_obj::getSound(tmp3,null());
			}
			HX_STACK_LINE(136)
			::openfl::_legacy::media::Sound sound = tmp2;		HX_STACK_VAR(sound,"sound");
			HX_STACK_LINE(137)
			bool tmp3 = (sound != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(137)
			if ((tmp3)){
				HX_STACK_LINE(138)
				::flixel::_system::frontEnds::SoundFrontEnd tmp4 = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(138)
				::openfl::_legacy::media::Sound tmp5 = sound;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(138)
				::flixel::_system::FlxSound tmp6 = tmp4->__Field(HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"), hx::paccDynamic )(tmp5,null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(138)
				tmp6->__Field(HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"), hx::paccDynamic )(null(),null(),null());
			}
		}
		HX_STACK_LINE(141)
		this->_timer = (int)1;
		HX_STACK_LINE(142)
		this->set_y((int)0);
		HX_STACK_LINE(143)
		this->set_visible(true);
		HX_STACK_LINE(144)
		this->active = true;
		HX_STACK_LINE(145)
		::flixel::_system::frontEnds::SoundFrontEnd tmp2 = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(145)
		Float tmp3 = tmp2->__Field(HX_HCSTRING("volume","\xda","\x29","\x53","\x5f"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(145)
		Float tmp4 = (tmp3 * (int)10);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(145)
		int tmp5 = ::Math_obj::round(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(145)
		int globalVolume = tmp5;		HX_STACK_VAR(globalVolume,"globalVolume");
		HX_STACK_LINE(147)
		::flixel::_system::frontEnds::SoundFrontEnd tmp6 = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(147)
		bool tmp7 = tmp6->__Field(HX_HCSTRING("muted","\x6b","\x8f","\x5b","\x10"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(147)
		if ((tmp7)){
			HX_STACK_LINE(149)
			globalVolume = (int)0;
		}
		HX_STACK_LINE(152)
		{
			HX_STACK_LINE(152)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(152)
			int tmp8 = this->_bars->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(152)
			int _g = tmp8;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(152)
			while((true)){
				HX_STACK_LINE(152)
				bool tmp9 = (_g1 < _g);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(152)
				bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(152)
				if ((tmp10)){
					HX_STACK_LINE(152)
					break;
				}
				HX_STACK_LINE(152)
				int tmp11 = (_g1)++;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(152)
				int i = tmp11;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(154)
				bool tmp12 = (i < globalVolume);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(154)
				if ((tmp12)){
					HX_STACK_LINE(156)
					::openfl::_legacy::display::Bitmap tmp13 = this->_bars->__GetItem(i);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(156)
					tmp13->set_alpha((int)1);
				}
				else{
					HX_STACK_LINE(160)
					::openfl::_legacy::display::Bitmap tmp13 = this->_bars->__GetItem(i);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(160)
					tmp13->set_alpha(((Float)0.5));
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSoundTray_obj,show,(void))

Void FlxSoundTray_obj::screenCenter( ){
{
		HX_STACK_FRAME("flixel.system.ui.FlxSoundTray","screenCenter",0x0f14ad2f,"flixel.system.ui.FlxSoundTray.screenCenter","flixel/system/ui/FlxSoundTray.hx",166,0x04618f9d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(167)
		Float tmp = this->_defaultScale;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(167)
		this->set_scaleX(tmp);
		HX_STACK_LINE(168)
		Float tmp1 = this->_defaultScale;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(168)
		this->set_scaleY(tmp1);
		HX_STACK_LINE(170)
		::openfl::_legacy::display::MovieClip tmp2 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(170)
		::openfl::_legacy::display::Stage tmp3 = tmp2->get_stage();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(170)
		int tmp4 = tmp3->get_stageWidth();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(170)
		int tmp5 = this->_width;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(170)
		Float tmp6 = this->_defaultScale;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(170)
		Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(170)
		Float tmp8 = (tmp4 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(170)
		Float tmp9 = (((Float)0.5) * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(170)
		::flixel::FlxGame tmp10 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(170)
		Float tmp11 = tmp10->get_x();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(170)
		Float tmp12 = (tmp9 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(170)
		this->set_x(tmp12);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSoundTray_obj,screenCenter,(void))


FlxSoundTray_obj::FlxSoundTray_obj()
{
}

void FlxSoundTray_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxSoundTray);
	HX_MARK_MEMBER_NAME(active,"active");
	HX_MARK_MEMBER_NAME(_timer,"_timer");
	HX_MARK_MEMBER_NAME(_bars,"_bars");
	HX_MARK_MEMBER_NAME(_width,"_width");
	HX_MARK_MEMBER_NAME(_defaultScale,"_defaultScale");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxSoundTray_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(active,"active");
	HX_VISIT_MEMBER_NAME(_timer,"_timer");
	HX_VISIT_MEMBER_NAME(_bars,"_bars");
	HX_VISIT_MEMBER_NAME(_width,"_width");
	HX_VISIT_MEMBER_NAME(_defaultScale,"_defaultScale");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxSoundTray_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"show") ) { return show_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_bars") ) { return _bars; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { return active; }
		if (HX_FIELD_EQ(inName,"_timer") ) { return _timer; }
		if (HX_FIELD_EQ(inName,"_width") ) { return _width; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"screenCenter") ) { return screenCenter_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_defaultScale") ) { return _defaultScale; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxSoundTray_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_bars") ) { _bars=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { active=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_timer") ) { _timer=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_width") ) { _width=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_defaultScale") ) { _defaultScale=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxSoundTray_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("active","\xc6","\x41","\x46","\x16"));
	outFields->push(HX_HCSTRING("_timer","\x06","\x07","\x1d","\x0c"));
	outFields->push(HX_HCSTRING("_bars","\x1f","\x03","\x22","\xf4"));
	outFields->push(HX_HCSTRING("_width","\x47","\xfd","\x49","\xc6"));
	outFields->push(HX_HCSTRING("_defaultScale","\xe8","\x9c","\x98","\x10"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(FlxSoundTray_obj,active),HX_HCSTRING("active","\xc6","\x41","\x46","\x16")},
	{hx::fsFloat,(int)offsetof(FlxSoundTray_obj,_timer),HX_HCSTRING("_timer","\x06","\x07","\x1d","\x0c")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxSoundTray_obj,_bars),HX_HCSTRING("_bars","\x1f","\x03","\x22","\xf4")},
	{hx::fsInt,(int)offsetof(FlxSoundTray_obj,_width),HX_HCSTRING("_width","\x47","\xfd","\x49","\xc6")},
	{hx::fsFloat,(int)offsetof(FlxSoundTray_obj,_defaultScale),HX_HCSTRING("_defaultScale","\xe8","\x9c","\x98","\x10")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("active","\xc6","\x41","\x46","\x16"),
	HX_HCSTRING("_timer","\x06","\x07","\x1d","\x0c"),
	HX_HCSTRING("_bars","\x1f","\x03","\x22","\xf4"),
	HX_HCSTRING("_width","\x47","\xfd","\x49","\xc6"),
	HX_HCSTRING("_defaultScale","\xe8","\x9c","\x98","\x10"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("show","\xfd","\xd4","\x52","\x4c"),
	HX_HCSTRING("screenCenter","\x61","\x2e","\xf9","\xe2"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxSoundTray_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxSoundTray_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxSoundTray_obj::__mClass;

void FlxSoundTray_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.ui.FlxSoundTray","\x60","\x12","\xf7","\x3e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxSoundTray_obj >;
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
} // end namespace ui
