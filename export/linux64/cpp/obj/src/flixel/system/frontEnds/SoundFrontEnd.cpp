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
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
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
#ifndef INCLUDED_openfl__legacy_AssetType
#include <openfl/_legacy/AssetType.h>
#endif
#ifndef INCLUDED_openfl__legacy_Assets
#include <openfl/_legacy/Assets.h>
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
#ifndef INCLUDED_openfl__legacy_media_Sound
#include <openfl/_legacy/media/Sound.h>
#endif
namespace flixel{
namespace _system{
namespace frontEnds{

Void SoundFrontEnd_obj::__construct()
{
HX_STACK_FRAME("flixel.system.frontEnds.SoundFrontEnd","new",0x71610699,"flixel.system.frontEnds.SoundFrontEnd.new","flixel/system/frontEnds/SoundFrontEnd.hx",15,0x9ba4fb18)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(71)
	this->volume = ((Float)1);
	HX_STACK_LINE(67)
	this->list = ::flixel::group::FlxTypedGroup_obj::__new(null());
	HX_STACK_LINE(62)
	this->defaultSoundGroup = ::flixel::_system::FlxSoundGroup_obj::__new(null());
	HX_STACK_LINE(58)
	this->defaultMusicGroup = ::flixel::_system::FlxSoundGroup_obj::__new(null());
	HX_STACK_LINE(53)
	this->soundTrayEnabled = true;
	HX_STACK_LINE(46)
	this->muteKeys = Array_obj< int >::__new().Add((int)48).Add((int)96);
	HX_STACK_LINE(41)
	this->volumeDownKeys = Array_obj< int >::__new().Add((int)189).Add((int)109);
	HX_STACK_LINE(36)
	this->volumeUpKeys = Array_obj< int >::__new().Add((int)187).Add((int)107);
	HX_STACK_LINE(24)
	this->muted = false;
	HX_STACK_LINE(312)
	this->loadSavedPrefs();
}
;
	return null();
}

//SoundFrontEnd_obj::~SoundFrontEnd_obj() { }

Dynamic SoundFrontEnd_obj::__CreateEmpty() { return  new SoundFrontEnd_obj; }
hx::ObjectPtr< SoundFrontEnd_obj > SoundFrontEnd_obj::__new()
{  hx::ObjectPtr< SoundFrontEnd_obj > _result_ = new SoundFrontEnd_obj();
	_result_->__construct();
	return _result_;}

Dynamic SoundFrontEnd_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SoundFrontEnd_obj > _result_ = new SoundFrontEnd_obj();
	_result_->__construct();
	return _result_;}

Void SoundFrontEnd_obj::playMusic( Dynamic Music,hx::Null< Float >  __o_Volume,hx::Null< bool >  __o_Looped,::flixel::_system::FlxSoundGroup Group){
Float Volume = __o_Volume.Default(1);
bool Looped = __o_Looped.Default(true);
	HX_STACK_FRAME("flixel.system.frontEnds.SoundFrontEnd","playMusic",0x3360250a,"flixel.system.frontEnds.SoundFrontEnd.playMusic","flixel/system/frontEnds/SoundFrontEnd.hx",82,0x9ba4fb18)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Music,"Music")
	HX_STACK_ARG(Volume,"Volume")
	HX_STACK_ARG(Looped,"Looped")
	HX_STACK_ARG(Group,"Group")
{
		HX_STACK_LINE(83)
		::flixel::_system::FlxSound tmp = this->music;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(83)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(83)
		if ((tmp1)){
			HX_STACK_LINE(85)
			::flixel::_system::FlxSound tmp2 = ::flixel::_system::FlxSound_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(85)
			this->music = tmp2;
		}
		else{
			HX_STACK_LINE(87)
			::flixel::_system::FlxSound tmp2 = this->music;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(87)
			bool tmp3 = tmp2->__Field(HX_HCSTRING("active","\xc6","\x41","\x46","\x16"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(87)
			if ((tmp3)){
				HX_STACK_LINE(89)
				::flixel::_system::FlxSound tmp4 = this->music;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(89)
				::flixel::_system::FlxSound _this = tmp4;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(89)
				bool tmp5 = _this->__Field(HX_HCSTRING("autoDestroy","\x4b","\xd1","\x69","\x0a"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(89)
				_this->__Field(HX_HCSTRING("cleanup","\x24","\x0c","\x42","\xab"), hx::paccDynamic )(tmp5,true);
				HX_STACK_LINE(89)
				_this;
			}
		}
		HX_STACK_LINE(92)
		::flixel::_system::FlxSound tmp2 = this->music;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(92)
		Dynamic tmp3 = Music;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(92)
		bool tmp4 = Looped;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(92)
		tmp2->__Field(HX_HCSTRING("loadEmbedded","\xd0","\x05","\xcb","\x97"), hx::paccDynamic )(tmp3,tmp4,null(),null());
		HX_STACK_LINE(93)
		::flixel::_system::FlxSound tmp5 = this->music;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(93)
		Float tmp6 = Volume;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(93)
		tmp5->__Field(HX_HCSTRING("set_volume","\x17","\x38","\x58","\x53"), hx::paccDynamic )(tmp6);
		HX_STACK_LINE(94)
		::flixel::_system::FlxSound tmp7 = this->music;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(94)
		tmp7->__FieldRef(HX_HCSTRING("persist","\x14","\x22","\x71","\x83")) = true;
		HX_STACK_LINE(95)
		::flixel::_system::FlxSound tmp8 = this->music;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(95)
		bool tmp9 = (Group == null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(95)
		::flixel::_system::FlxSoundGroup tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(95)
		if ((tmp9)){
			HX_STACK_LINE(95)
			tmp10 = this->defaultMusicGroup;
		}
		else{
			HX_STACK_LINE(95)
			tmp10 = Group;
		}
		HX_STACK_LINE(95)
		tmp8->__Field(HX_HCSTRING("set_group","\xa2","\xfb","\xee","\xc0"), hx::paccDynamic )(tmp10);
		HX_STACK_LINE(96)
		::flixel::_system::FlxSound tmp11 = this->music;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(96)
		tmp11->__Field(HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"), hx::paccDynamic )(null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(SoundFrontEnd_obj,playMusic,(void))

::flixel::_system::FlxSound SoundFrontEnd_obj::load( Dynamic EmbeddedSound,hx::Null< Float >  __o_Volume,hx::Null< bool >  __o_Looped,::flixel::_system::FlxSoundGroup Group,hx::Null< bool >  __o_AutoDestroy,hx::Null< bool >  __o_AutoPlay,::String URL,Dynamic OnComplete){
Float Volume = __o_Volume.Default(1);
bool Looped = __o_Looped.Default(false);
bool AutoDestroy = __o_AutoDestroy.Default(false);
bool AutoPlay = __o_AutoPlay.Default(false);
	HX_STACK_FRAME("flixel.system.frontEnds.SoundFrontEnd","load",0xc239d5cd,"flixel.system.frontEnds.SoundFrontEnd.load","flixel/system/frontEnds/SoundFrontEnd.hx",113,0x9ba4fb18)
	HX_STACK_THIS(this)
	HX_STACK_ARG(EmbeddedSound,"EmbeddedSound")
	HX_STACK_ARG(Volume,"Volume")
	HX_STACK_ARG(Looped,"Looped")
	HX_STACK_ARG(Group,"Group")
	HX_STACK_ARG(AutoDestroy,"AutoDestroy")
	HX_STACK_ARG(AutoPlay,"AutoPlay")
	HX_STACK_ARG(URL,"URL")
	HX_STACK_ARG(OnComplete,"OnComplete")
{
		HX_STACK_LINE(114)
		bool tmp = (EmbeddedSound == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(114)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(114)
		if ((tmp)){
			HX_STACK_LINE(114)
			tmp1 = (URL == null());
		}
		else{
			HX_STACK_LINE(114)
			tmp1 = false;
		}
		HX_STACK_LINE(114)
		if ((tmp1)){
			HX_STACK_LINE(117)
			return null();
		}
		HX_STACK_LINE(120)
		::flixel::group::FlxTypedGroup tmp2 = this->list;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(120)
		::flixel::_system::FlxSound tmp3 = tmp2->recycle(hx::ClassOf< ::flixel::_system::FlxSound >(),null(),null(),null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(120)
		::flixel::_system::FlxSound sound = tmp3;		HX_STACK_VAR(sound,"sound");
		HX_STACK_LINE(122)
		bool tmp4 = (EmbeddedSound != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(122)
		if ((tmp4)){
			HX_STACK_LINE(124)
			Dynamic tmp5 = EmbeddedSound;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(124)
			bool tmp6 = Looped;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(124)
			bool tmp7 = AutoDestroy;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(124)
			Dynamic tmp8 = OnComplete;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(124)
			sound->__Field(HX_HCSTRING("loadEmbedded","\xd0","\x05","\xcb","\x97"), hx::paccDynamic )(tmp5,tmp6,tmp7,tmp8);
		}
		else{
			HX_STACK_LINE(128)
			::String tmp5 = URL;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(128)
			bool tmp6 = Looped;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(128)
			bool tmp7 = AutoDestroy;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(128)
			Dynamic tmp8 = OnComplete;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(128)
			sound->__Field(HX_HCSTRING("loadStream","\x46","\x43","\x58","\xc6"), hx::paccDynamic )(tmp5,tmp6,tmp7,tmp8);
		}
		HX_STACK_LINE(131)
		Float tmp5 = Volume;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(131)
		sound->__Field(HX_HCSTRING("set_volume","\x17","\x38","\x58","\x53"), hx::paccDynamic )(tmp5);
		HX_STACK_LINE(133)
		bool tmp6 = AutoPlay;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(133)
		if ((tmp6)){
			HX_STACK_LINE(135)
			sound->__Field(HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"), hx::paccDynamic )(null(),null(),null());
		}
		HX_STACK_LINE(138)
		bool tmp7 = (Group == null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(138)
		::flixel::_system::FlxSoundGroup tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(138)
		if ((tmp7)){
			HX_STACK_LINE(138)
			tmp8 = this->defaultSoundGroup;
		}
		else{
			HX_STACK_LINE(138)
			tmp8 = Group;
		}
		HX_STACK_LINE(138)
		sound->__Field(HX_HCSTRING("set_group","\xa2","\xfb","\xee","\xc0"), hx::paccDynamic )(tmp8);
		HX_STACK_LINE(139)
		::flixel::_system::FlxSound tmp9 = sound;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(139)
		return tmp9;
	}
}


HX_DEFINE_DYNAMIC_FUNC8(SoundFrontEnd_obj,load,return )

::openfl::_legacy::media::Sound SoundFrontEnd_obj::cache( ::String EmbeddedSound){
	HX_STACK_FRAME("flixel.system.frontEnds.SoundFrontEnd","cache",0xf88690bb,"flixel.system.frontEnds.SoundFrontEnd.cache","flixel/system/frontEnds/SoundFrontEnd.hx",150,0x9ba4fb18)
	HX_STACK_THIS(this)
	HX_STACK_ARG(EmbeddedSound,"EmbeddedSound")
	HX_STACK_LINE(152)
	::String tmp = EmbeddedSound;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(152)
	::String tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(152)
	bool tmp2 = ::openfl::_legacy::Assets_obj::exists(tmp1,::openfl::_legacy::AssetType_obj::SOUND);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(152)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(152)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(152)
	if ((tmp3)){
		HX_STACK_LINE(153)
		::String tmp5 = EmbeddedSound;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(153)
		::String tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(153)
		tmp4 = ::openfl::_legacy::Assets_obj::exists(tmp6,::openfl::_legacy::AssetType_obj::MUSIC);
	}
	else{
		HX_STACK_LINE(152)
		tmp4 = true;
	}
	HX_STACK_LINE(152)
	if ((tmp4)){
		HX_STACK_LINE(154)
		::String tmp5 = EmbeddedSound;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(154)
		::openfl::_legacy::media::Sound tmp6 = ::openfl::_legacy::Assets_obj::getSound(tmp5,true);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(154)
		return tmp6;
	}
	HX_STACK_LINE(156)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SoundFrontEnd_obj,cache,return )

Void SoundFrontEnd_obj::cacheAll( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.SoundFrontEnd","cacheAll",0x49c00726,"flixel.system.frontEnds.SoundFrontEnd.cacheAll","flixel/system/frontEnds/SoundFrontEnd.hx",166,0x9ba4fb18)
		HX_STACK_THIS(this)
		HX_STACK_LINE(166)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(166)
		Array< ::String > _g1 = ::openfl::_legacy::Assets_obj::list(::openfl::_legacy::AssetType_obj::SOUND);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(166)
		while((true)){
			HX_STACK_LINE(166)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(166)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(166)
			if ((tmp1)){
				HX_STACK_LINE(166)
				break;
			}
			HX_STACK_LINE(166)
			::String tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(166)
			::String id = tmp2;		HX_STACK_VAR(id,"id");
			HX_STACK_LINE(166)
			++(_g);
			HX_STACK_LINE(168)
			::String tmp3 = id;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(168)
			::String tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(168)
			bool tmp5 = ::openfl::_legacy::Assets_obj::exists(tmp4,::openfl::_legacy::AssetType_obj::SOUND);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(168)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(168)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(168)
			if ((tmp6)){
				HX_STACK_LINE(168)
				::String tmp8 = id;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(168)
				::String tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(168)
				tmp7 = ::openfl::_legacy::Assets_obj::exists(tmp9,::openfl::_legacy::AssetType_obj::MUSIC);
			}
			else{
				HX_STACK_LINE(168)
				tmp7 = true;
			}
			HX_STACK_LINE(168)
			if ((tmp7)){
				HX_STACK_LINE(168)
				::String tmp8 = id;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(168)
				::openfl::_legacy::Assets_obj::getSound(tmp8,true);
			}
			else{
				HX_STACK_LINE(168)
				Dynamic();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SoundFrontEnd_obj,cacheAll,(void))

::flixel::_system::FlxSound SoundFrontEnd_obj::play( Dynamic EmbeddedSound,hx::Null< Float >  __o_Volume,hx::Null< bool >  __o_Looped,::flixel::_system::FlxSoundGroup Group,hx::Null< bool >  __o_AutoDestroy,Dynamic OnComplete){
Float Volume = __o_Volume.Default(1);
bool Looped = __o_Looped.Default(false);
bool AutoDestroy = __o_AutoDestroy.Default(true);
	HX_STACK_FRAME("flixel.system.frontEnds.SoundFrontEnd","play",0xc4dc699b,"flixel.system.frontEnds.SoundFrontEnd.play","flixel/system/frontEnds/SoundFrontEnd.hx",184,0x9ba4fb18)
	HX_STACK_THIS(this)
	HX_STACK_ARG(EmbeddedSound,"EmbeddedSound")
	HX_STACK_ARG(Volume,"Volume")
	HX_STACK_ARG(Looped,"Looped")
	HX_STACK_ARG(Group,"Group")
	HX_STACK_ARG(AutoDestroy,"AutoDestroy")
	HX_STACK_ARG(OnComplete,"OnComplete")
{
		HX_STACK_LINE(185)
		Dynamic tmp = EmbeddedSound;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(185)
		bool tmp1 = ::Std_obj::is(tmp,hx::ClassOf< ::String >());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(185)
		if ((tmp1)){
			HX_STACK_LINE(187)
			Dynamic tmp2 = EmbeddedSound;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(187)
			Dynamic tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(187)
			bool tmp4 = ::openfl::_legacy::Assets_obj::exists(tmp3,::openfl::_legacy::AssetType_obj::SOUND);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(187)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(187)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(187)
			if ((tmp5)){
				HX_STACK_LINE(187)
				Dynamic tmp7 = EmbeddedSound;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(187)
				Dynamic tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(187)
				tmp6 = ::openfl::_legacy::Assets_obj::exists(tmp8,::openfl::_legacy::AssetType_obj::MUSIC);
			}
			else{
				HX_STACK_LINE(187)
				tmp6 = true;
			}
			HX_STACK_LINE(187)
			::openfl::_legacy::media::Sound tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(187)
			if ((tmp6)){
				HX_STACK_LINE(187)
				Dynamic tmp8 = EmbeddedSound;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(187)
				tmp7 = ::openfl::_legacy::Assets_obj::getSound(tmp8,true);
			}
			else{
				HX_STACK_LINE(187)
				tmp7 = null();
			}
			HX_STACK_LINE(187)
			EmbeddedSound = tmp7;
		}
		HX_STACK_LINE(189)
		::flixel::group::FlxTypedGroup tmp2 = this->list;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(189)
		::flixel::_system::FlxSound tmp3 = tmp2->recycle(hx::ClassOf< ::flixel::_system::FlxSound >(),null(),null(),null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(189)
		Dynamic tmp4 = EmbeddedSound;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(189)
		bool tmp5 = Looped;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(189)
		bool tmp6 = AutoDestroy;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(189)
		Dynamic tmp7 = OnComplete;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(189)
		::flixel::_system::FlxSound tmp8 = tmp3->__Field(HX_HCSTRING("loadEmbedded","\xd0","\x05","\xcb","\x97"), hx::paccDynamic )(tmp4,tmp5,tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(189)
		::flixel::_system::FlxSound sound = tmp8;		HX_STACK_VAR(sound,"sound");
		HX_STACK_LINE(190)
		Float tmp9 = Volume;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(190)
		sound->__Field(HX_HCSTRING("set_volume","\x17","\x38","\x58","\x53"), hx::paccDynamic )(tmp9);
		HX_STACK_LINE(191)
		bool tmp10 = (Group == null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(191)
		::flixel::_system::FlxSoundGroup tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(191)
		if ((tmp10)){
			HX_STACK_LINE(191)
			tmp11 = this->defaultSoundGroup;
		}
		else{
			HX_STACK_LINE(191)
			tmp11 = Group;
		}
		HX_STACK_LINE(191)
		sound->__Field(HX_HCSTRING("set_group","\xa2","\xfb","\xee","\xc0"), hx::paccDynamic )(tmp11);
		HX_STACK_LINE(192)
		::flixel::_system::FlxSound tmp12 = sound->__Field(HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"), hx::paccDynamic )(null(),null(),null());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(192)
		return tmp12;
	}
}


HX_DEFINE_DYNAMIC_FUNC6(SoundFrontEnd_obj,play,return )

::flixel::_system::FlxSound SoundFrontEnd_obj::stream( ::String URL,hx::Null< Float >  __o_Volume,hx::Null< bool >  __o_Looped,::flixel::_system::FlxSoundGroup Group,hx::Null< bool >  __o_AutoDestroy,Dynamic OnComplete){
Float Volume = __o_Volume.Default(1);
bool Looped = __o_Looped.Default(false);
bool AutoDestroy = __o_AutoDestroy.Default(true);
	HX_STACK_FRAME("flixel.system.frontEnds.SoundFrontEnd","stream",0xdd72c7e7,"flixel.system.frontEnds.SoundFrontEnd.stream","flixel/system/frontEnds/SoundFrontEnd.hx",208,0x9ba4fb18)
	HX_STACK_THIS(this)
	HX_STACK_ARG(URL,"URL")
	HX_STACK_ARG(Volume,"Volume")
	HX_STACK_ARG(Looped,"Looped")
	HX_STACK_ARG(Group,"Group")
	HX_STACK_ARG(AutoDestroy,"AutoDestroy")
	HX_STACK_ARG(OnComplete,"OnComplete")
{
		HX_STACK_LINE(209)
		Float tmp = Volume;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(209)
		bool tmp1 = Looped;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(209)
		bool tmp2 = AutoDestroy;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(209)
		::String tmp3 = URL;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(209)
		Dynamic tmp4 = OnComplete;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(209)
		::flixel::_system::FlxSound tmp5 = this->load(null(),tmp,tmp1,null(),tmp2,true,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(209)
		return tmp5;
	}
}


HX_DEFINE_DYNAMIC_FUNC6(SoundFrontEnd_obj,stream,return )

Void SoundFrontEnd_obj::pause( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.SoundFrontEnd","pause",0x74c9cd6f,"flixel.system.frontEnds.SoundFrontEnd.pause","flixel/system/frontEnds/SoundFrontEnd.hx",216,0x9ba4fb18)
		HX_STACK_THIS(this)
		HX_STACK_LINE(217)
		::flixel::_system::FlxSound tmp = this->music;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(217)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(217)
		bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(217)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(217)
		if ((tmp2)){
			HX_STACK_LINE(217)
			::flixel::_system::FlxSound tmp4 = this->music;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(217)
			::flixel::_system::FlxSound tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(217)
			::flixel::_system::FlxSound tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(217)
			tmp3 = tmp6->__Field(HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf"), hx::paccDynamic );
		}
		else{
			HX_STACK_LINE(217)
			tmp3 = false;
		}
		HX_STACK_LINE(217)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(217)
		if ((tmp3)){
			HX_STACK_LINE(217)
			::flixel::_system::FlxSound tmp5 = this->music;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(217)
			::flixel::_system::FlxSound tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(217)
			tmp4 = tmp6->__Field(HX_HCSTRING("active","\xc6","\x41","\x46","\x16"), hx::paccDynamic );
		}
		else{
			HX_STACK_LINE(217)
			tmp4 = false;
		}
		HX_STACK_LINE(217)
		if ((tmp4)){
			HX_STACK_LINE(219)
			::flixel::_system::FlxSound tmp5 = this->music;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(219)
			tmp5->__Field(HX_HCSTRING("pause","\xf6","\xd6","\x57","\xbd"), hx::paccDynamic )();
		}
		HX_STACK_LINE(222)
		{
			HX_STACK_LINE(222)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(222)
			::flixel::group::FlxTypedGroup tmp5 = this->list;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(222)
			Array< ::Dynamic > _g1 = tmp5->members;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(222)
			while((true)){
				HX_STACK_LINE(222)
				bool tmp6 = (_g < _g1->length);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(222)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(222)
				if ((tmp7)){
					HX_STACK_LINE(222)
					break;
				}
				HX_STACK_LINE(222)
				::flixel::_system::FlxSound tmp8 = _g1->__get(_g).StaticCast< ::flixel::_system::FlxSound >();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(222)
				::flixel::_system::FlxSound sound = tmp8;		HX_STACK_VAR(sound,"sound");
				HX_STACK_LINE(222)
				++(_g);
				HX_STACK_LINE(224)
				bool tmp9 = (sound != null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(224)
				bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(224)
				bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(224)
				if ((tmp10)){
					HX_STACK_LINE(224)
					tmp11 = sound->__Field(HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf"), hx::paccDynamic );
				}
				else{
					HX_STACK_LINE(224)
					tmp11 = false;
				}
				HX_STACK_LINE(224)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(224)
				if ((tmp11)){
					HX_STACK_LINE(224)
					tmp12 = sound->__Field(HX_HCSTRING("active","\xc6","\x41","\x46","\x16"), hx::paccDynamic );
				}
				else{
					HX_STACK_LINE(224)
					tmp12 = false;
				}
				HX_STACK_LINE(224)
				if ((tmp12)){
					HX_STACK_LINE(226)
					sound->__Field(HX_HCSTRING("pause","\xf6","\xd6","\x57","\xbd"), hx::paccDynamic )();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SoundFrontEnd_obj,pause,(void))

Void SoundFrontEnd_obj::resume( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.SoundFrontEnd","resume",0xd4ca1d14,"flixel.system.frontEnds.SoundFrontEnd.resume","flixel/system/frontEnds/SoundFrontEnd.hx",235,0x9ba4fb18)
		HX_STACK_THIS(this)
		HX_STACK_LINE(236)
		::flixel::_system::FlxSound tmp = this->music;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(236)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(236)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(236)
		if ((tmp1)){
			HX_STACK_LINE(236)
			::flixel::_system::FlxSound tmp3 = this->music;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(236)
			::flixel::_system::FlxSound tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(236)
			tmp2 = tmp4->__Field(HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf"), hx::paccDynamic );
		}
		else{
			HX_STACK_LINE(236)
			tmp2 = false;
		}
		HX_STACK_LINE(236)
		if ((tmp2)){
			HX_STACK_LINE(238)
			::flixel::_system::FlxSound tmp3 = this->music;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(238)
			tmp3->__Field(HX_HCSTRING("resume","\xad","\x69","\x84","\x08"), hx::paccDynamic )();
		}
		HX_STACK_LINE(241)
		{
			HX_STACK_LINE(241)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(241)
			::flixel::group::FlxTypedGroup tmp3 = this->list;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(241)
			Array< ::Dynamic > _g1 = tmp3->members;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(241)
			while((true)){
				HX_STACK_LINE(241)
				bool tmp4 = (_g < _g1->length);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(241)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(241)
				if ((tmp5)){
					HX_STACK_LINE(241)
					break;
				}
				HX_STACK_LINE(241)
				::flixel::_system::FlxSound tmp6 = _g1->__get(_g).StaticCast< ::flixel::_system::FlxSound >();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(241)
				::flixel::_system::FlxSound sound = tmp6;		HX_STACK_VAR(sound,"sound");
				HX_STACK_LINE(241)
				++(_g);
				HX_STACK_LINE(243)
				bool tmp7 = (sound != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(243)
				bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(243)
				if ((tmp7)){
					HX_STACK_LINE(243)
					tmp8 = sound->__Field(HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf"), hx::paccDynamic );
				}
				else{
					HX_STACK_LINE(243)
					tmp8 = false;
				}
				HX_STACK_LINE(243)
				if ((tmp8)){
					HX_STACK_LINE(245)
					sound->__Field(HX_HCSTRING("resume","\xad","\x69","\x84","\x08"), hx::paccDynamic )();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SoundFrontEnd_obj,resume,(void))

Void SoundFrontEnd_obj::destroy( hx::Null< bool >  __o_ForceDestroy){
bool ForceDestroy = __o_ForceDestroy.Default(false);
	HX_STACK_FRAME("flixel.system.frontEnds.SoundFrontEnd","destroy",0x153d73b3,"flixel.system.frontEnds.SoundFrontEnd.destroy","flixel/system/frontEnds/SoundFrontEnd.hx",256,0x9ba4fb18)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ForceDestroy,"ForceDestroy")
{
		HX_STACK_LINE(257)
		::flixel::_system::FlxSound tmp = this->music;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(257)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(257)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(257)
		if ((tmp1)){
			HX_STACK_LINE(257)
			bool tmp3 = ForceDestroy;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(257)
			bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(257)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(257)
			bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(257)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(257)
			if ((tmp7)){
				HX_STACK_LINE(257)
				::flixel::_system::FlxSound tmp8 = this->music;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(257)
				::flixel::_system::FlxSound tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(257)
				::flixel::_system::FlxSound tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(257)
				bool tmp11 = tmp10->__Field(HX_HCSTRING("persist","\x14","\x22","\x71","\x83"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(257)
				bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(257)
				bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(257)
				tmp2 = !(tmp13);
			}
			else{
				HX_STACK_LINE(257)
				tmp2 = true;
			}
		}
		else{
			HX_STACK_LINE(257)
			tmp2 = false;
		}
		HX_STACK_LINE(257)
		if ((tmp2)){
			HX_STACK_LINE(259)
			::flixel::_system::FlxSound tmp3 = this->music;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(259)
			tmp3->__Field(HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"), hx::paccDynamic )();
			HX_STACK_LINE(260)
			this->music = null();
		}
		HX_STACK_LINE(263)
		{
			HX_STACK_LINE(263)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(263)
			::flixel::group::FlxTypedGroup tmp3 = this->list;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(263)
			Array< ::Dynamic > _g1 = tmp3->members;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(263)
			while((true)){
				HX_STACK_LINE(263)
				bool tmp4 = (_g < _g1->length);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(263)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(263)
				if ((tmp5)){
					HX_STACK_LINE(263)
					break;
				}
				HX_STACK_LINE(263)
				::flixel::_system::FlxSound tmp6 = _g1->__get(_g).StaticCast< ::flixel::_system::FlxSound >();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(263)
				::flixel::_system::FlxSound sound = tmp6;		HX_STACK_VAR(sound,"sound");
				HX_STACK_LINE(263)
				++(_g);
				HX_STACK_LINE(265)
				bool tmp7 = (sound != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(265)
				bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(265)
				if ((tmp7)){
					HX_STACK_LINE(265)
					bool tmp9 = ForceDestroy;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(265)
					bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(265)
					bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(265)
					bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(265)
					bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(265)
					if ((tmp13)){
						HX_STACK_LINE(265)
						bool tmp14 = sound->__Field(HX_HCSTRING("persist","\x14","\x22","\x71","\x83"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(265)
						bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(265)
						bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(265)
						tmp8 = !(tmp16);
					}
					else{
						HX_STACK_LINE(265)
						tmp8 = true;
					}
				}
				else{
					HX_STACK_LINE(265)
					tmp8 = false;
				}
				HX_STACK_LINE(265)
				if ((tmp8)){
					HX_STACK_LINE(267)
					sound->__Field(HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"), hx::paccDynamic )();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SoundFrontEnd_obj,destroy,(void))

Void SoundFrontEnd_obj::toggleMuted( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.SoundFrontEnd","toggleMuted",0xe215de70,"flixel.system.frontEnds.SoundFrontEnd.toggleMuted","flixel/system/frontEnds/SoundFrontEnd.hx",276,0x9ba4fb18)
		HX_STACK_THIS(this)
		HX_STACK_LINE(277)
		bool tmp = this->muted;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(277)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(277)
		this->muted = tmp1;
		HX_STACK_LINE(279)
		Dynamic tmp2 = this->volumeHandler_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(279)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(279)
		if ((tmp3)){
			HX_STACK_LINE(281)
			bool tmp4 = this->muted;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(281)
			Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(281)
			if ((tmp4)){
				HX_STACK_LINE(281)
				tmp5 = (int)0;
			}
			else{
				HX_STACK_LINE(281)
				tmp5 = this->volume;
			}
			HX_STACK_LINE(281)
			this->volumeHandler(tmp5);
		}
		HX_STACK_LINE(284)
		this->showSoundTray();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SoundFrontEnd_obj,toggleMuted,(void))

Void SoundFrontEnd_obj::changeVolume( Float Amount){
{
		HX_STACK_FRAME("flixel.system.frontEnds.SoundFrontEnd","changeVolume",0x51b19e11,"flixel.system.frontEnds.SoundFrontEnd.changeVolume","flixel/system/frontEnds/SoundFrontEnd.hx",291,0x9ba4fb18)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Amount,"Amount")
		HX_STACK_LINE(292)
		this->muted = false;
		HX_STACK_LINE(293)
		{
			HX_STACK_LINE(293)
			::flixel::_system::frontEnds::SoundFrontEnd _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(293)
			Float tmp = (_g->__Field(HX_HCSTRING("volume","\xda","\x29","\x53","\x5f"), hx::paccDynamic ) + Amount);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(293)
			_g->__Field(HX_HCSTRING("set_volume","\x17","\x38","\x58","\x53"), hx::paccDynamic )(tmp);
		}
		HX_STACK_LINE(294)
		this->showSoundTray();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SoundFrontEnd_obj,changeVolume,(void))

Void SoundFrontEnd_obj::showSoundTray( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.SoundFrontEnd","showSoundTray",0x0761fd21,"flixel.system.frontEnds.SoundFrontEnd.showSoundTray","flixel/system/frontEnds/SoundFrontEnd.hx",301,0x9ba4fb18)
		HX_STACK_THIS(this)
		HX_STACK_LINE(303)
		::flixel::FlxGame tmp = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(303)
		::flixel::_system::ui::FlxSoundTray tmp1 = tmp->soundTray;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(303)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(303)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(303)
		if ((tmp2)){
			HX_STACK_LINE(303)
			tmp3 = this->soundTrayEnabled;
		}
		else{
			HX_STACK_LINE(303)
			tmp3 = false;
		}
		HX_STACK_LINE(303)
		if ((tmp3)){
			HX_STACK_LINE(305)
			::flixel::FlxGame tmp4 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(305)
			tmp4->soundTray->__Field(HX_HCSTRING("show","\xfd","\xd4","\x52","\x4c"), hx::paccDynamic )(null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SoundFrontEnd_obj,showSoundTray,(void))

Void SoundFrontEnd_obj::update( Float elapsed){
{
		HX_STACK_FRAME("flixel.system.frontEnds.SoundFrontEnd","update",0x534b3970,"flixel.system.frontEnds.SoundFrontEnd.update","flixel/system/frontEnds/SoundFrontEnd.hx",320,0x9ba4fb18)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(321)
		::flixel::_system::FlxSound tmp = this->music;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(321)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(321)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(321)
		if ((tmp1)){
			HX_STACK_LINE(321)
			::flixel::_system::FlxSound tmp3 = this->music;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(321)
			::flixel::_system::FlxSound tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(321)
			tmp2 = tmp4->__Field(HX_HCSTRING("active","\xc6","\x41","\x46","\x16"), hx::paccDynamic );
		}
		else{
			HX_STACK_LINE(321)
			tmp2 = false;
		}
		HX_STACK_LINE(321)
		if ((tmp2)){
			HX_STACK_LINE(322)
			::flixel::_system::FlxSound tmp3 = this->music;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(322)
			Float tmp4 = elapsed;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(322)
			tmp3->__Field(HX_HCSTRING("update","\x09","\x86","\x05","\x87"), hx::paccDynamic )(tmp4);
		}
		HX_STACK_LINE(324)
		::flixel::group::FlxTypedGroup tmp3 = this->list;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(324)
		bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(324)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(324)
		if ((tmp4)){
			HX_STACK_LINE(324)
			::flixel::group::FlxTypedGroup tmp6 = this->list;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(324)
			::flixel::group::FlxTypedGroup tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(324)
			tmp5 = tmp7->active;
		}
		else{
			HX_STACK_LINE(324)
			tmp5 = false;
		}
		HX_STACK_LINE(324)
		if ((tmp5)){
			HX_STACK_LINE(325)
			::flixel::group::FlxTypedGroup tmp6 = this->list;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(325)
			Float tmp7 = elapsed;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(325)
			tmp6->update(tmp7);
		}
		HX_STACK_LINE(328)
		::flixel::input::keyboard::FlxKeyboard tmp6 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(328)
		bool tmp7 = tmp6->checkKeyArrayState(this->muteKeys,(int)-1);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(328)
		if ((tmp7)){
			HX_STACK_LINE(329)
			this->toggleMuted();
		}
		else{
			HX_STACK_LINE(330)
			::flixel::input::keyboard::FlxKeyboard tmp8 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(330)
			bool tmp9 = tmp8->checkKeyArrayState(this->volumeUpKeys,(int)-1);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(330)
			if ((tmp9)){
				HX_STACK_LINE(331)
				this->changeVolume(((Float)0.1));
			}
			else{
				HX_STACK_LINE(332)
				::flixel::input::keyboard::FlxKeyboard tmp10 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(332)
				bool tmp11 = tmp10->checkKeyArrayState(this->volumeDownKeys,(int)-1);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(332)
				if ((tmp11)){
					HX_STACK_LINE(333)
					this->changeVolume(((Float)-0.1));
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SoundFrontEnd_obj,update,(void))

Void SoundFrontEnd_obj::onFocusLost( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.SoundFrontEnd","onFocusLost",0xeb797bf6,"flixel.system.frontEnds.SoundFrontEnd.onFocusLost","flixel/system/frontEnds/SoundFrontEnd.hx",339,0x9ba4fb18)
		HX_STACK_THIS(this)
		HX_STACK_LINE(340)
		::flixel::_system::FlxSound tmp = this->music;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(340)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(340)
		if ((tmp1)){
			HX_STACK_LINE(342)
			::flixel::_system::FlxSound tmp2 = this->music;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(342)
			tmp2->__Field(HX_HCSTRING("onFocusLost","\xbd","\xe4","\x85","\x41"), hx::paccDynamic )();
		}
		HX_STACK_LINE(345)
		{
			HX_STACK_LINE(345)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(345)
			::flixel::group::FlxTypedGroup tmp2 = this->list;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(345)
			Array< ::Dynamic > _g1 = tmp2->members;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(345)
			while((true)){
				HX_STACK_LINE(345)
				bool tmp3 = (_g < _g1->length);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(345)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(345)
				if ((tmp4)){
					HX_STACK_LINE(345)
					break;
				}
				HX_STACK_LINE(345)
				::flixel::_system::FlxSound tmp5 = _g1->__get(_g).StaticCast< ::flixel::_system::FlxSound >();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(345)
				::flixel::_system::FlxSound sound = tmp5;		HX_STACK_VAR(sound,"sound");
				HX_STACK_LINE(345)
				++(_g);
				HX_STACK_LINE(347)
				bool tmp6 = (sound != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(347)
				if ((tmp6)){
					HX_STACK_LINE(349)
					sound->__Field(HX_HCSTRING("onFocusLost","\xbd","\xe4","\x85","\x41"), hx::paccDynamic )();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SoundFrontEnd_obj,onFocusLost,(void))

Void SoundFrontEnd_obj::onFocus( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.SoundFrontEnd","onFocus",0x8b7e44f2,"flixel.system.frontEnds.SoundFrontEnd.onFocus","flixel/system/frontEnds/SoundFrontEnd.hx",356,0x9ba4fb18)
		HX_STACK_THIS(this)
		HX_STACK_LINE(357)
		::flixel::_system::FlxSound tmp = this->music;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(357)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(357)
		if ((tmp1)){
			HX_STACK_LINE(359)
			::flixel::_system::FlxSound tmp2 = this->music;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(359)
			tmp2->__Field(HX_HCSTRING("onFocus","\x39","\xfe","\xc6","\x9a"), hx::paccDynamic )();
		}
		HX_STACK_LINE(362)
		{
			HX_STACK_LINE(362)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(362)
			::flixel::group::FlxTypedGroup tmp2 = this->list;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(362)
			Array< ::Dynamic > _g1 = tmp2->members;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(362)
			while((true)){
				HX_STACK_LINE(362)
				bool tmp3 = (_g < _g1->length);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(362)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(362)
				if ((tmp4)){
					HX_STACK_LINE(362)
					break;
				}
				HX_STACK_LINE(362)
				::flixel::_system::FlxSound tmp5 = _g1->__get(_g).StaticCast< ::flixel::_system::FlxSound >();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(362)
				::flixel::_system::FlxSound sound = tmp5;		HX_STACK_VAR(sound,"sound");
				HX_STACK_LINE(362)
				++(_g);
				HX_STACK_LINE(364)
				bool tmp6 = (sound != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(364)
				if ((tmp6)){
					HX_STACK_LINE(366)
					sound->__Field(HX_HCSTRING("onFocus","\x39","\xfe","\xc6","\x9a"), hx::paccDynamic )();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SoundFrontEnd_obj,onFocus,(void))

Void SoundFrontEnd_obj::loadSavedPrefs( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.SoundFrontEnd","loadSavedPrefs",0xc70de056,"flixel.system.frontEnds.SoundFrontEnd.loadSavedPrefs","flixel/system/frontEnds/SoundFrontEnd.hx",375,0x9ba4fb18)
		HX_STACK_THIS(this)
		HX_STACK_LINE(376)
		::flixel::util::FlxSave tmp = ::flixel::FlxG_obj::save;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(376)
		bool tmp1 = (tmp->data->__Field(HX_HCSTRING("volume","\xda","\x29","\x53","\x5f"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(376)
		if ((tmp1)){
			HX_STACK_LINE(378)
			::flixel::util::FlxSave tmp2 = ::flixel::FlxG_obj::save;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(378)
			this->set_volume(tmp2->data->__Field(HX_HCSTRING("volume","\xda","\x29","\x53","\x5f"), hx::paccDynamic ));
		}
		HX_STACK_LINE(381)
		::flixel::util::FlxSave tmp2 = ::flixel::FlxG_obj::save;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(381)
		bool tmp3 = (tmp2->data->__Field(HX_HCSTRING("mute","\xd9","\x6e","\x65","\x48"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(381)
		if ((tmp3)){
			HX_STACK_LINE(383)
			::flixel::util::FlxSave tmp4 = ::flixel::FlxG_obj::save;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(383)
			this->muted = tmp4->data->__Field(HX_HCSTRING("mute","\xd9","\x6e","\x65","\x48"), hx::paccDynamic );
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SoundFrontEnd_obj,loadSavedPrefs,(void))

Float SoundFrontEnd_obj::set_volume( Float Volume){
	HX_STACK_FRAME("flixel.system.frontEnds.SoundFrontEnd","set_volume",0x2e392afe,"flixel.system.frontEnds.SoundFrontEnd.set_volume","flixel/system/frontEnds/SoundFrontEnd.hx",388,0x9ba4fb18)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Volume,"Volume")
	HX_STACK_LINE(389)
	Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(389)
	{
		HX_STACK_LINE(389)
		bool tmp1 = true;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(389)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(389)
		if ((tmp1)){
			HX_STACK_LINE(389)
			tmp2 = (Volume < (int)0);
		}
		else{
			HX_STACK_LINE(389)
			tmp2 = false;
		}
		HX_STACK_LINE(389)
		Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(389)
		if ((tmp2)){
			HX_STACK_LINE(389)
			tmp3 = (int)0;
		}
		else{
			HX_STACK_LINE(389)
			tmp3 = Volume;
		}
		HX_STACK_LINE(389)
		Float lowerBound = tmp3;		HX_STACK_VAR(lowerBound,"lowerBound");
		HX_STACK_LINE(389)
		bool tmp4 = true;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(389)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(389)
		if ((tmp4)){
			HX_STACK_LINE(389)
			tmp5 = (lowerBound > (int)1);
		}
		else{
			HX_STACK_LINE(389)
			tmp5 = false;
		}
		HX_STACK_LINE(389)
		if ((tmp5)){
			HX_STACK_LINE(389)
			tmp = (int)1;
		}
		else{
			HX_STACK_LINE(389)
			tmp = lowerBound;
		}
	}
	HX_STACK_LINE(389)
	Volume = ((Float)(tmp));
	HX_STACK_LINE(391)
	Dynamic tmp1 = this->volumeHandler_dyn();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(391)
	bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(391)
	if ((tmp2)){
		HX_STACK_LINE(393)
		bool tmp3 = this->muted;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(393)
		Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(393)
		if ((tmp3)){
			HX_STACK_LINE(393)
			tmp4 = (int)0;
		}
		else{
			HX_STACK_LINE(393)
			tmp4 = Volume;
		}
		HX_STACK_LINE(393)
		Float param = tmp4;		HX_STACK_VAR(param,"param");
		HX_STACK_LINE(394)
		Float tmp5 = param;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(394)
		this->volumeHandler(tmp5);
	}
	HX_STACK_LINE(396)
	Float tmp3 = this->volume = Volume;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(396)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(SoundFrontEnd_obj,set_volume,return )


SoundFrontEnd_obj::SoundFrontEnd_obj()
{
}

void SoundFrontEnd_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SoundFrontEnd);
	HX_MARK_MEMBER_NAME(music,"music");
	HX_MARK_MEMBER_NAME(muted,"muted");
	HX_MARK_MEMBER_NAME(volumeHandler,"volumeHandler");
	HX_MARK_MEMBER_NAME(volumeUpKeys,"volumeUpKeys");
	HX_MARK_MEMBER_NAME(volumeDownKeys,"volumeDownKeys");
	HX_MARK_MEMBER_NAME(muteKeys,"muteKeys");
	HX_MARK_MEMBER_NAME(soundTrayEnabled,"soundTrayEnabled");
	HX_MARK_MEMBER_NAME(defaultMusicGroup,"defaultMusicGroup");
	HX_MARK_MEMBER_NAME(defaultSoundGroup,"defaultSoundGroup");
	HX_MARK_MEMBER_NAME(list,"list");
	HX_MARK_MEMBER_NAME(volume,"volume");
	HX_MARK_END_CLASS();
}

void SoundFrontEnd_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(music,"music");
	HX_VISIT_MEMBER_NAME(muted,"muted");
	HX_VISIT_MEMBER_NAME(volumeHandler,"volumeHandler");
	HX_VISIT_MEMBER_NAME(volumeUpKeys,"volumeUpKeys");
	HX_VISIT_MEMBER_NAME(volumeDownKeys,"volumeDownKeys");
	HX_VISIT_MEMBER_NAME(muteKeys,"muteKeys");
	HX_VISIT_MEMBER_NAME(soundTrayEnabled,"soundTrayEnabled");
	HX_VISIT_MEMBER_NAME(defaultMusicGroup,"defaultMusicGroup");
	HX_VISIT_MEMBER_NAME(defaultSoundGroup,"defaultSoundGroup");
	HX_VISIT_MEMBER_NAME(list,"list");
	HX_VISIT_MEMBER_NAME(volume,"volume");
}

Dynamic SoundFrontEnd_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { return list; }
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		if (HX_FIELD_EQ(inName,"play") ) { return play_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"music") ) { return music; }
		if (HX_FIELD_EQ(inName,"muted") ) { return muted; }
		if (HX_FIELD_EQ(inName,"cache") ) { return cache_dyn(); }
		if (HX_FIELD_EQ(inName,"pause") ) { return pause_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"volume") ) { return volume; }
		if (HX_FIELD_EQ(inName,"stream") ) { return stream_dyn(); }
		if (HX_FIELD_EQ(inName,"resume") ) { return resume_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"onFocus") ) { return onFocus_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"muteKeys") ) { return muteKeys; }
		if (HX_FIELD_EQ(inName,"cacheAll") ) { return cacheAll_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"playMusic") ) { return playMusic_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"set_volume") ) { return set_volume_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"toggleMuted") ) { return toggleMuted_dyn(); }
		if (HX_FIELD_EQ(inName,"onFocusLost") ) { return onFocusLost_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"volumeUpKeys") ) { return volumeUpKeys; }
		if (HX_FIELD_EQ(inName,"changeVolume") ) { return changeVolume_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"volumeHandler") ) { return volumeHandler; }
		if (HX_FIELD_EQ(inName,"showSoundTray") ) { return showSoundTray_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"volumeDownKeys") ) { return volumeDownKeys; }
		if (HX_FIELD_EQ(inName,"loadSavedPrefs") ) { return loadSavedPrefs_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"soundTrayEnabled") ) { return soundTrayEnabled; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"defaultMusicGroup") ) { return defaultMusicGroup; }
		if (HX_FIELD_EQ(inName,"defaultSoundGroup") ) { return defaultSoundGroup; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SoundFrontEnd_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { list=inValue.Cast< ::flixel::group::FlxTypedGroup >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"music") ) { music=inValue.Cast< ::flixel::_system::FlxSound >(); return inValue; }
		if (HX_FIELD_EQ(inName,"muted") ) { muted=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"volume") ) { if (inCallProp == hx::paccAlways) return set_volume(inValue);volume=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"muteKeys") ) { muteKeys=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"volumeUpKeys") ) { volumeUpKeys=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"volumeHandler") ) { volumeHandler=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"volumeDownKeys") ) { volumeDownKeys=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"soundTrayEnabled") ) { soundTrayEnabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"defaultMusicGroup") ) { defaultMusicGroup=inValue.Cast< ::flixel::_system::FlxSoundGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"defaultSoundGroup") ) { defaultSoundGroup=inValue.Cast< ::flixel::_system::FlxSoundGroup >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SoundFrontEnd_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("music","\xa5","\xd0","\x5a","\x10"));
	outFields->push(HX_HCSTRING("muted","\x6b","\x8f","\x5b","\x10"));
	outFields->push(HX_HCSTRING("volumeUpKeys","\x69","\xbb","\xf5","\x23"));
	outFields->push(HX_HCSTRING("volumeDownKeys","\x70","\x2f","\x58","\x0b"));
	outFields->push(HX_HCSTRING("muteKeys","\x6d","\x5d","\x88","\x16"));
	outFields->push(HX_HCSTRING("soundTrayEnabled","\x9c","\x10","\x68","\xe0"));
	outFields->push(HX_HCSTRING("defaultMusicGroup","\x7b","\x94","\xd9","\xa0"));
	outFields->push(HX_HCSTRING("defaultSoundGroup","\x11","\x80","\x9b","\xd9"));
	outFields->push(HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"));
	outFields->push(HX_HCSTRING("volume","\xda","\x29","\x53","\x5f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::_system::FlxSound*/ ,(int)offsetof(SoundFrontEnd_obj,music),HX_HCSTRING("music","\xa5","\xd0","\x5a","\x10")},
	{hx::fsBool,(int)offsetof(SoundFrontEnd_obj,muted),HX_HCSTRING("muted","\x6b","\x8f","\x5b","\x10")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(SoundFrontEnd_obj,volumeHandler),HX_HCSTRING("volumeHandler","\x10","\xfd","\x6f","\x5d")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(SoundFrontEnd_obj,volumeUpKeys),HX_HCSTRING("volumeUpKeys","\x69","\xbb","\xf5","\x23")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(SoundFrontEnd_obj,volumeDownKeys),HX_HCSTRING("volumeDownKeys","\x70","\x2f","\x58","\x0b")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(SoundFrontEnd_obj,muteKeys),HX_HCSTRING("muteKeys","\x6d","\x5d","\x88","\x16")},
	{hx::fsBool,(int)offsetof(SoundFrontEnd_obj,soundTrayEnabled),HX_HCSTRING("soundTrayEnabled","\x9c","\x10","\x68","\xe0")},
	{hx::fsObject /*::flixel::_system::FlxSoundGroup*/ ,(int)offsetof(SoundFrontEnd_obj,defaultMusicGroup),HX_HCSTRING("defaultMusicGroup","\x7b","\x94","\xd9","\xa0")},
	{hx::fsObject /*::flixel::_system::FlxSoundGroup*/ ,(int)offsetof(SoundFrontEnd_obj,defaultSoundGroup),HX_HCSTRING("defaultSoundGroup","\x11","\x80","\x9b","\xd9")},
	{hx::fsObject /*::flixel::group::FlxTypedGroup*/ ,(int)offsetof(SoundFrontEnd_obj,list),HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47")},
	{hx::fsFloat,(int)offsetof(SoundFrontEnd_obj,volume),HX_HCSTRING("volume","\xda","\x29","\x53","\x5f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("music","\xa5","\xd0","\x5a","\x10"),
	HX_HCSTRING("muted","\x6b","\x8f","\x5b","\x10"),
	HX_HCSTRING("volumeHandler","\x10","\xfd","\x6f","\x5d"),
	HX_HCSTRING("volumeUpKeys","\x69","\xbb","\xf5","\x23"),
	HX_HCSTRING("volumeDownKeys","\x70","\x2f","\x58","\x0b"),
	HX_HCSTRING("muteKeys","\x6d","\x5d","\x88","\x16"),
	HX_HCSTRING("soundTrayEnabled","\x9c","\x10","\x68","\xe0"),
	HX_HCSTRING("defaultMusicGroup","\x7b","\x94","\xd9","\xa0"),
	HX_HCSTRING("defaultSoundGroup","\x11","\x80","\x9b","\xd9"),
	HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"),
	HX_HCSTRING("volume","\xda","\x29","\x53","\x5f"),
	HX_HCSTRING("playMusic","\x11","\xfe","\x3e","\x31"),
	HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"),
	HX_HCSTRING("cache","\x42","\x9a","\x14","\x41"),
	HX_HCSTRING("cacheAll","\xff","\x6b","\x19","\x9a"),
	HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"),
	HX_HCSTRING("stream","\x80","\x14","\x2d","\x11"),
	HX_HCSTRING("pause","\xf6","\xd6","\x57","\xbd"),
	HX_HCSTRING("resume","\xad","\x69","\x84","\x08"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("toggleMuted","\x37","\x47","\x22","\x38"),
	HX_HCSTRING("changeVolume","\x6a","\xe3","\x80","\x46"),
	HX_HCSTRING("showSoundTray","\xa8","\x65","\xef","\x47"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("onFocusLost","\xbd","\xe4","\x85","\x41"),
	HX_HCSTRING("onFocus","\x39","\xfe","\xc6","\x9a"),
	HX_HCSTRING("loadSavedPrefs","\xef","\xed","\x3b","\x02"),
	HX_HCSTRING("set_volume","\x17","\x38","\x58","\x53"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SoundFrontEnd_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SoundFrontEnd_obj::__mClass,"__mClass");
};

#endif

hx::Class SoundFrontEnd_obj::__mClass;

void SoundFrontEnd_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.frontEnds.SoundFrontEnd","\x27","\xc6","\xa9","\x7e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SoundFrontEnd_obj >;
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
