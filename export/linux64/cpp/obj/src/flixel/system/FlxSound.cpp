#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
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
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_NumTween
#include <flixel/tweens/misc/NumTween.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_util_LabelValuePair
#include <flixel/util/FlxPool_flixel_util_LabelValuePair.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util_LabelValuePair
#include <flixel/util/LabelValuePair.h>
#endif
#ifndef INCLUDED_openfl__legacy_AssetType
#include <openfl/_legacy/AssetType.h>
#endif
#ifndef INCLUDED_openfl__legacy_Assets
#include <openfl/_legacy/Assets.h>
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
#ifndef INCLUDED_openfl__legacy_media_Sound
#include <openfl/_legacy/media/Sound.h>
#endif
#ifndef INCLUDED_openfl__legacy_media_SoundChannel
#include <openfl/_legacy/media/SoundChannel.h>
#endif
#ifndef INCLUDED_openfl__legacy_net_URLRequest
#include <openfl/_legacy/net/URLRequest.h>
#endif
#ifndef INCLUDED_openfl_media_ID3Info
#include <openfl/media/ID3Info.h>
#endif
#ifndef INCLUDED_openfl_media_SoundLoaderContext
#include <openfl/media/SoundLoaderContext.h>
#endif
#ifndef INCLUDED_openfl_media_SoundTransform
#include <openfl/media/SoundTransform.h>
#endif
namespace flixel{
namespace _system{

Void FlxSound_obj::__construct()
{
HX_STACK_FRAME("flixel.system.FlxSound","new",0xa043445c,"flixel.system.FlxSound.new","flixel/system/FlxSound.hx",24,0x7d78fc74)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(174)
	this->_alreadyPaused = false;
	HX_STACK_LINE(158)
	this->_volumeAdjust = ((Float)1.0);
	HX_STACK_LINE(153)
	this->_pitch = ((Float)1.0);
	HX_STACK_LINE(148)
	this->_length = ((Float)0);
	HX_STACK_LINE(144)
	this->_time = ((Float)0);
	HX_STACK_LINE(109)
	this->loopTime = ((Float)0);
	HX_STACK_LINE(181)
	super::__construct();
	HX_STACK_LINE(182)
	this->reset();
}
;
	return null();
}

//FlxSound_obj::~FlxSound_obj() { }

Dynamic FlxSound_obj::__CreateEmpty() { return  new FlxSound_obj; }
hx::ObjectPtr< FlxSound_obj > FlxSound_obj::__new()
{  hx::ObjectPtr< FlxSound_obj > _result_ = new FlxSound_obj();
	_result_->__construct();
	return _result_;}

Dynamic FlxSound_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxSound_obj > _result_ = new FlxSound_obj();
	_result_->__construct();
	return _result_;}

Void FlxSound_obj::reset( ){
{
		HX_STACK_FRAME("flixel.system.FlxSound","reset",0xf879b4cb,"flixel.system.FlxSound.reset","flixel/system/FlxSound.hx",189,0x7d78fc74)
		HX_STACK_THIS(this)
		HX_STACK_LINE(190)
		this->destroy();
		HX_STACK_LINE(192)
		this->x = (int)0;
		HX_STACK_LINE(193)
		this->y = (int)0;
		HX_STACK_LINE(195)
		this->_time = (int)0;
		HX_STACK_LINE(196)
		this->_paused = false;
		HX_STACK_LINE(197)
		this->_volume = ((Float)1.0);
		HX_STACK_LINE(198)
		this->_volumeAdjust = ((Float)1.0);
		HX_STACK_LINE(199)
		this->looped = false;
		HX_STACK_LINE(200)
		this->loopTime = ((Float)0.0);
		HX_STACK_LINE(201)
		this->endTime = ((Float)0.0);
		HX_STACK_LINE(202)
		this->_target = null();
		HX_STACK_LINE(203)
		this->_radius = (int)0;
		HX_STACK_LINE(204)
		this->_proximityPan = false;
		HX_STACK_LINE(205)
		this->set_visible(false);
		HX_STACK_LINE(206)
		this->amplitude = (int)0;
		HX_STACK_LINE(207)
		this->amplitudeLeft = (int)0;
		HX_STACK_LINE(208)
		this->amplitudeRight = (int)0;
		HX_STACK_LINE(209)
		this->autoDestroy = false;
		HX_STACK_LINE(211)
		::openfl::media::SoundTransform tmp = this->_transform;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(211)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(211)
		if ((tmp1)){
			HX_STACK_LINE(212)
			::openfl::media::SoundTransform tmp2 = ::openfl::media::SoundTransform_obj::__new(null(),null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(212)
			this->_transform = tmp2;
		}
		HX_STACK_LINE(213)
		::openfl::media::SoundTransform tmp2 = this->_transform;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(213)
		tmp2->pan = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSound_obj,reset,(void))

Void FlxSound_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.system.FlxSound","destroy",0x15a54ef6,"flixel.system.FlxSound.destroy","flixel/system/FlxSound.hx",217,0x7d78fc74)
		HX_STACK_THIS(this)
		HX_STACK_LINE(218)
		this->_transform = null();
		HX_STACK_LINE(219)
		this->set_exists(false);
		HX_STACK_LINE(220)
		this->set_active(false);
		HX_STACK_LINE(221)
		this->_target = null();
		HX_STACK_LINE(222)
		this->name = null();
		HX_STACK_LINE(223)
		this->artist = null();
		HX_STACK_LINE(225)
		::openfl::_legacy::media::SoundChannel tmp = this->_channel;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(225)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(225)
		if ((tmp1)){
			HX_STACK_LINE(227)
			::openfl::_legacy::media::SoundChannel tmp2 = this->_channel;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(227)
			::String tmp3 = ::openfl::_legacy::events::Event_obj::SOUND_COMPLETE;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(227)
			Dynamic tmp4 = this->stopped_dyn();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(227)
			tmp2->removeEventListener(tmp3,tmp4,null());
			HX_STACK_LINE(228)
			::openfl::_legacy::media::SoundChannel tmp5 = this->_channel;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(228)
			tmp5->stop();
			HX_STACK_LINE(229)
			this->_channel = null();
		}
		HX_STACK_LINE(232)
		::openfl::_legacy::media::Sound tmp2 = this->_sound;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(232)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(232)
		if ((tmp3)){
			HX_STACK_LINE(234)
			::openfl::_legacy::media::Sound tmp4 = this->_sound;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(234)
			::String tmp5 = ::openfl::_legacy::events::Event_obj::ID3;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(234)
			Dynamic tmp6 = this->gotID3_dyn();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(234)
			tmp4->removeEventListener(tmp5,tmp6,null());
			HX_STACK_LINE(235)
			this->_sound = null();
		}
		HX_STACK_LINE(238)
		this->onComplete = null();
		HX_STACK_LINE(240)
		this->super::destroy();
	}
return null();
}


Void FlxSound_obj::update( Float elapsed){
{
		HX_STACK_FRAME("flixel.system.FlxSound","update",0xf091b78d,"flixel.system.FlxSound.update","flixel/system/FlxSound.hx",247,0x7d78fc74)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(248)
		::openfl::_legacy::media::SoundChannel tmp = this->_channel;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(248)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(248)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(248)
		if ((tmp2)){
			HX_STACK_LINE(249)
			return null();
		}
		HX_STACK_LINE(251)
		::openfl::_legacy::media::SoundChannel tmp3 = this->_channel;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(251)
		Float tmp4 = tmp3->get_position();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(251)
		this->_time = tmp4;
		HX_STACK_LINE(253)
		Float radialMultiplier = ((Float)1.0);		HX_STACK_VAR(radialMultiplier,"radialMultiplier");
		HX_STACK_LINE(256)
		::flixel::FlxObject tmp5 = this->_target;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(256)
		bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(256)
		if ((tmp6)){
			HX_STACK_LINE(258)
			::flixel::FlxObject tmp7 = this->_target;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(258)
			::flixel::math::FlxPoint tmp8 = tmp7->getPosition(null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(258)
			::flixel::math::FlxPoint targetPosition = tmp8;		HX_STACK_VAR(targetPosition,"targetPosition");
			HX_STACK_LINE(259)
			::flixel::math::FlxPoint tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(259)
			{
				HX_STACK_LINE(259)
				::flixel::math::FlxPoint tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(259)
				{
					HX_STACK_LINE(259)
					::flixel::util::FlxPool_flixel_math_FlxPoint tmp11 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(259)
					::flixel::math::FlxPoint tmp12 = tmp11->get();		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(259)
					Float tmp13 = this->x;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(259)
					Float tmp14 = this->y;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(259)
					::flixel::math::FlxPoint tmp15 = tmp12->set(tmp13,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(259)
					::flixel::math::FlxPoint point = tmp15;		HX_STACK_VAR(point,"point");
					HX_STACK_LINE(259)
					point->_inPool = false;
					HX_STACK_LINE(259)
					tmp10 = point;
				}
				HX_STACK_LINE(259)
				::flixel::math::FlxPoint point = tmp10;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(259)
				point->_weak = true;
				HX_STACK_LINE(259)
				tmp9 = point;
			}
			HX_STACK_LINE(259)
			Float tmp10 = targetPosition->distanceTo(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(259)
			Float tmp11 = this->_radius;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(259)
			Float tmp12 = (Float(tmp10) / Float(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(259)
			radialMultiplier = tmp12;
			HX_STACK_LINE(260)
			targetPosition->put();
			HX_STACK_LINE(261)
			Dynamic tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(261)
			{
				HX_STACK_LINE(261)
				bool tmp14 = true;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(261)
				bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(261)
				if ((tmp14)){
					HX_STACK_LINE(261)
					tmp15 = (radialMultiplier < (int)0);
				}
				else{
					HX_STACK_LINE(261)
					tmp15 = false;
				}
				HX_STACK_LINE(261)
				Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(261)
				if ((tmp15)){
					HX_STACK_LINE(261)
					tmp16 = (int)0;
				}
				else{
					HX_STACK_LINE(261)
					tmp16 = radialMultiplier;
				}
				HX_STACK_LINE(261)
				Float lowerBound = tmp16;		HX_STACK_VAR(lowerBound,"lowerBound");
				HX_STACK_LINE(261)
				bool tmp17 = true;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(261)
				bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(261)
				if ((tmp17)){
					HX_STACK_LINE(261)
					tmp18 = (lowerBound > (int)1);
				}
				else{
					HX_STACK_LINE(261)
					tmp18 = false;
				}
				HX_STACK_LINE(261)
				if ((tmp18)){
					HX_STACK_LINE(261)
					tmp13 = (int)1;
				}
				else{
					HX_STACK_LINE(261)
					tmp13 = lowerBound;
				}
			}
			HX_STACK_LINE(261)
			Float tmp14 = ((Float)(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(261)
			Float tmp15 = ((int)1 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(261)
			radialMultiplier = tmp15;
			HX_STACK_LINE(263)
			bool tmp16 = this->_proximityPan;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(263)
			if ((tmp16)){
				HX_STACK_LINE(265)
				Float tmp17 = this->x;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(265)
				::flixel::FlxObject tmp18 = this->_target;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(265)
				Float tmp19 = tmp18->x;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(265)
				Float tmp20 = (tmp17 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(265)
				Float tmp21 = this->_radius;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(265)
				Float tmp22 = (Float(tmp20) / Float(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(265)
				Float d = tmp22;		HX_STACK_VAR(d,"d");
				HX_STACK_LINE(266)
				Dynamic tmp23;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(266)
				{
					HX_STACK_LINE(266)
					bool tmp24 = true;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(266)
					bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(266)
					if ((tmp24)){
						HX_STACK_LINE(266)
						tmp25 = (d < (int)-1);
					}
					else{
						HX_STACK_LINE(266)
						tmp25 = false;
					}
					HX_STACK_LINE(266)
					Float tmp26;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(266)
					if ((tmp25)){
						HX_STACK_LINE(266)
						tmp26 = (int)-1;
					}
					else{
						HX_STACK_LINE(266)
						tmp26 = d;
					}
					HX_STACK_LINE(266)
					Float lowerBound = tmp26;		HX_STACK_VAR(lowerBound,"lowerBound");
					HX_STACK_LINE(266)
					bool tmp27 = true;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(266)
					bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(266)
					if ((tmp27)){
						HX_STACK_LINE(266)
						tmp28 = (lowerBound > (int)1);
					}
					else{
						HX_STACK_LINE(266)
						tmp28 = false;
					}
					HX_STACK_LINE(266)
					if ((tmp28)){
						HX_STACK_LINE(266)
						tmp23 = (int)1;
					}
					else{
						HX_STACK_LINE(266)
						tmp23 = lowerBound;
					}
				}
				HX_STACK_LINE(266)
				::openfl::media::SoundTransform tmp24 = this->_transform;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(266)
				tmp24->pan = ((Float)(tmp23));
			}
		}
		HX_STACK_LINE(270)
		this->_volumeAdjust = radialMultiplier;
		HX_STACK_LINE(271)
		this->updateTransform();
		HX_STACK_LINE(273)
		::openfl::media::SoundTransform tmp7 = this->_transform;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(273)
		Float tmp8 = tmp7->volume;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(273)
		bool tmp9 = (tmp8 > (int)0);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(273)
		if ((tmp9)){
			HX_STACK_LINE(275)
			::openfl::_legacy::media::SoundChannel tmp10 = this->_channel;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(275)
			Float tmp11 = tmp10->get_leftPeak();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(275)
			::openfl::media::SoundTransform tmp12 = this->_transform;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(275)
			Float tmp13 = tmp12->volume;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(275)
			Float tmp14 = (Float(tmp11) / Float(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(275)
			this->amplitudeLeft = tmp14;
			HX_STACK_LINE(276)
			::openfl::_legacy::media::SoundChannel tmp15 = this->_channel;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(276)
			Float tmp16 = tmp15->get_rightPeak();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(276)
			::openfl::media::SoundTransform tmp17 = this->_transform;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(276)
			Float tmp18 = tmp17->volume;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(276)
			Float tmp19 = (Float(tmp16) / Float(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(276)
			this->amplitudeRight = tmp19;
			HX_STACK_LINE(277)
			Float tmp20 = this->amplitudeLeft;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(277)
			Float tmp21 = this->amplitudeRight;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(277)
			Float tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(277)
			Float tmp23 = (tmp22 * ((Float)0.5));		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(277)
			this->amplitude = tmp23;
		}
		else{
			HX_STACK_LINE(281)
			this->amplitudeLeft = (int)0;
			HX_STACK_LINE(282)
			this->amplitudeRight = (int)0;
			HX_STACK_LINE(283)
			this->amplitude = (int)0;
		}
		HX_STACK_LINE(286)
		Dynamic tmp10 = this->endTime;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(286)
		bool tmp11 = (tmp10 != null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(286)
		bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(286)
		if ((tmp11)){
			HX_STACK_LINE(286)
			Float tmp13 = this->_time;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(286)
			Float tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(286)
			Dynamic tmp15 = this->endTime;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(286)
			Dynamic tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(286)
			tmp12 = (tmp14 >= tmp16);
		}
		else{
			HX_STACK_LINE(286)
			tmp12 = false;
		}
		HX_STACK_LINE(286)
		if ((tmp12)){
			HX_STACK_LINE(287)
			this->stopped(null());
		}
	}
return null();
}


Void FlxSound_obj::kill( ){
{
		HX_STACK_FRAME("flixel.system.FlxSound","kill",0x989fe822,"flixel.system.FlxSound.kill","flixel/system/FlxSound.hx",291,0x7d78fc74)
		HX_STACK_THIS(this)
		HX_STACK_LINE(292)
		this->super::kill();
		HX_STACK_LINE(293)
		this->cleanup(false,null());
	}
return null();
}


::flixel::_system::FlxSound FlxSound_obj::loadEmbedded( Dynamic EmbeddedSound,hx::Null< bool >  __o_Looped,hx::Null< bool >  __o_AutoDestroy,Dynamic OnComplete){
bool Looped = __o_Looped.Default(false);
bool AutoDestroy = __o_AutoDestroy.Default(false);
	HX_STACK_FRAME("flixel.system.FlxSound","loadEmbedded",0xbf233254,"flixel.system.FlxSound.loadEmbedded","flixel/system/FlxSound.hx",306,0x7d78fc74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(EmbeddedSound,"EmbeddedSound")
	HX_STACK_ARG(Looped,"Looped")
	HX_STACK_ARG(AutoDestroy,"AutoDestroy")
	HX_STACK_ARG(OnComplete,"OnComplete")
{
		HX_STACK_LINE(307)
		bool tmp = (EmbeddedSound == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(307)
		if ((tmp)){
			HX_STACK_LINE(308)
			return hx::ObjectPtr<OBJ_>(this);
		}
		HX_STACK_LINE(310)
		this->cleanup(true,null());
		HX_STACK_LINE(312)
		Dynamic tmp1 = EmbeddedSound;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(312)
		bool tmp2 = ::Std_obj::is(tmp1,hx::ClassOf< ::openfl::_legacy::media::Sound >());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(312)
		if ((tmp2)){
			HX_STACK_LINE(314)
			this->_sound = EmbeddedSound;
		}
		else{
			HX_STACK_LINE(316)
			Dynamic tmp3 = EmbeddedSound;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(316)
			bool tmp4 = ::Std_obj::is(tmp3,hx::ClassOf< ::hx::Class >());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(316)
			if ((tmp4)){
				HX_STACK_LINE(318)
				Dynamic tmp5 = EmbeddedSound;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(318)
				::openfl::_legacy::media::Sound tmp6 = ::Type_obj::createInstance(tmp5,cpp::ArrayBase_obj::__new());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(318)
				this->_sound = tmp6;
			}
			else{
				HX_STACK_LINE(320)
				Dynamic tmp5 = EmbeddedSound;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(320)
				bool tmp6 = ::Std_obj::is(tmp5,hx::ClassOf< ::String >());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(320)
				if ((tmp6)){
					HX_STACK_LINE(322)
					Dynamic tmp7 = EmbeddedSound;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(322)
					Dynamic tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(322)
					bool tmp9 = ::openfl::_legacy::Assets_obj::exists(tmp8,::openfl::_legacy::AssetType_obj::SOUND);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(322)
					bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(322)
					bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(322)
					if ((tmp10)){
						HX_STACK_LINE(323)
						Dynamic tmp12 = EmbeddedSound;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(323)
						Dynamic tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(323)
						tmp11 = ::openfl::_legacy::Assets_obj::exists(tmp13,::openfl::_legacy::AssetType_obj::MUSIC);
					}
					else{
						HX_STACK_LINE(322)
						tmp11 = true;
					}
					HX_STACK_LINE(322)
					if ((tmp11)){
						HX_STACK_LINE(324)
						Dynamic tmp12 = EmbeddedSound;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(324)
						::openfl::_legacy::media::Sound tmp13 = ::openfl::_legacy::Assets_obj::getSound(tmp12,null());		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(324)
						this->_sound = tmp13;
					}
					else{
						HX_STACK_LINE(326)
						Dynamic();
					}
				}
			}
		}
		HX_STACK_LINE(330)
		bool tmp3 = Looped;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(330)
		bool tmp4 = AutoDestroy;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(330)
		Dynamic tmp5 = OnComplete;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(330)
		::flixel::_system::FlxSound tmp6 = this->init(tmp3,tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(330)
		return tmp6;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxSound_obj,loadEmbedded,return )

::flixel::_system::FlxSound FlxSound_obj::loadStream( ::String SoundURL,hx::Null< bool >  __o_Looped,hx::Null< bool >  __o_AutoDestroy,Dynamic OnComplete){
bool Looped = __o_Looped.Default(false);
bool AutoDestroy = __o_AutoDestroy.Default(false);
	HX_STACK_FRAME("flixel.system.FlxSound","loadStream",0x893586ca,"flixel.system.FlxSound.loadStream","flixel/system/FlxSound.hx",343,0x7d78fc74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(SoundURL,"SoundURL")
	HX_STACK_ARG(Looped,"Looped")
	HX_STACK_ARG(AutoDestroy,"AutoDestroy")
	HX_STACK_ARG(OnComplete,"OnComplete")
{
		HX_STACK_LINE(344)
		this->cleanup(true,null());
		HX_STACK_LINE(346)
		::openfl::_legacy::media::Sound tmp = ::openfl::_legacy::media::Sound_obj::__new(null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(346)
		this->_sound = tmp;
		HX_STACK_LINE(347)
		::openfl::_legacy::media::Sound tmp1 = this->_sound;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(347)
		::String tmp2 = ::openfl::_legacy::events::Event_obj::ID3;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(347)
		Dynamic tmp3 = this->gotID3_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(347)
		tmp1->addEventListener(tmp2,tmp3,null(),null(),null());
		HX_STACK_LINE(348)
		::openfl::_legacy::media::Sound tmp4 = this->_sound;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(348)
		::openfl::_legacy::net::URLRequest tmp5 = ::openfl::_legacy::net::URLRequest_obj::__new(SoundURL);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(348)
		tmp4->load(tmp5,null(),null());
		HX_STACK_LINE(350)
		bool tmp6 = Looped;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(350)
		bool tmp7 = AutoDestroy;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(350)
		Dynamic tmp8 = OnComplete;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(350)
		::flixel::_system::FlxSound tmp9 = this->init(tmp6,tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(350)
		return tmp9;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxSound_obj,loadStream,return )

::flixel::_system::FlxSound FlxSound_obj::init( hx::Null< bool >  __o_Looped,hx::Null< bool >  __o_AutoDestroy,Dynamic OnComplete){
bool Looped = __o_Looped.Default(false);
bool AutoDestroy = __o_AutoDestroy.Default(false);
	HX_STACK_FRAME("flixel.system.FlxSound","init",0x97514394,"flixel.system.FlxSound.init","flixel/system/FlxSound.hx",376,0x7d78fc74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Looped,"Looped")
	HX_STACK_ARG(AutoDestroy,"AutoDestroy")
	HX_STACK_ARG(OnComplete,"OnComplete")
{
		HX_STACK_LINE(377)
		this->looped = Looped;
		HX_STACK_LINE(378)
		this->autoDestroy = AutoDestroy;
		HX_STACK_LINE(379)
		this->updateTransform();
		HX_STACK_LINE(380)
		this->set_exists(true);
		HX_STACK_LINE(381)
		this->onComplete = OnComplete;
		HX_STACK_LINE(382)
		::openfl::_legacy::media::Sound tmp = this->_sound;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(382)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(382)
		Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(382)
		if ((tmp1)){
			HX_STACK_LINE(382)
			tmp2 = (int)0;
		}
		else{
			HX_STACK_LINE(382)
			::openfl::_legacy::media::Sound tmp3 = this->_sound;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(382)
			tmp2 = tmp3->get_length();
		}
		HX_STACK_LINE(382)
		this->_length = tmp2;
		HX_STACK_LINE(383)
		Float tmp3 = this->_length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(383)
		this->endTime = tmp3;
		HX_STACK_LINE(384)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC3(FlxSound_obj,init,return )

::flixel::_system::FlxSound FlxSound_obj::proximity( Float X,Float Y,::flixel::FlxObject TargetObject,Float Radius,hx::Null< bool >  __o_Pan){
bool Pan = __o_Pan.Default(true);
	HX_STACK_FRAME("flixel.system.FlxSound","proximity",0x52ce623b,"flixel.system.FlxSound.proximity","flixel/system/FlxSound.hx",399,0x7d78fc74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(TargetObject,"TargetObject")
	HX_STACK_ARG(Radius,"Radius")
	HX_STACK_ARG(Pan,"Pan")
{
		HX_STACK_LINE(400)
		this->x = X;
		HX_STACK_LINE(401)
		this->y = Y;
		HX_STACK_LINE(402)
		this->_target = TargetObject;
		HX_STACK_LINE(403)
		this->_radius = Radius;
		HX_STACK_LINE(404)
		this->_proximityPan = Pan;
		HX_STACK_LINE(405)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC5(FlxSound_obj,proximity,return )

::flixel::_system::FlxSound FlxSound_obj::play( hx::Null< bool >  __o_ForceRestart,hx::Null< Float >  __o_StartTime,Dynamic EndTime){
bool ForceRestart = __o_ForceRestart.Default(false);
Float StartTime = __o_StartTime.Default(((Float)0.0));
	HX_STACK_FRAME("flixel.system.FlxSound","play",0x9bf03678,"flixel.system.FlxSound.play","flixel/system/FlxSound.hx",420,0x7d78fc74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ForceRestart,"ForceRestart")
	HX_STACK_ARG(StartTime,"StartTime")
	HX_STACK_ARG(EndTime,"EndTime")
{
		HX_STACK_LINE(421)
		bool tmp = this->exists;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(421)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(421)
		if ((tmp1)){
			HX_STACK_LINE(422)
			return hx::ObjectPtr<OBJ_>(this);
		}
		HX_STACK_LINE(424)
		bool tmp2 = ForceRestart;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(424)
		if ((tmp2)){
			HX_STACK_LINE(425)
			this->cleanup(false,true);
		}
		else{
			HX_STACK_LINE(426)
			::openfl::_legacy::media::SoundChannel tmp3 = this->_channel;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(426)
			bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(426)
			if ((tmp4)){
				HX_STACK_LINE(427)
				return hx::ObjectPtr<OBJ_>(this);
			}
		}
		HX_STACK_LINE(429)
		bool tmp3 = this->_paused;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(429)
		if ((tmp3)){
			HX_STACK_LINE(430)
			this->resume();
		}
		else{
			HX_STACK_LINE(432)
			Float tmp4 = StartTime;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(432)
			this->startSound(tmp4);
		}
		HX_STACK_LINE(434)
		this->endTime = EndTime;
		HX_STACK_LINE(435)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC3(FlxSound_obj,play,return )

::flixel::_system::FlxSound FlxSound_obj::resume( ){
	HX_STACK_FRAME("flixel.system.FlxSound","resume",0x72109b31,"flixel.system.FlxSound.resume","flixel/system/FlxSound.hx",442,0x7d78fc74)
	HX_STACK_THIS(this)
	HX_STACK_LINE(443)
	bool tmp = this->_paused;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(443)
	if ((tmp)){
		HX_STACK_LINE(444)
		Float tmp1 = this->_time;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(444)
		this->startSound(tmp1);
	}
	HX_STACK_LINE(445)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSound_obj,resume,return )

::flixel::_system::FlxSound FlxSound_obj::pause( ){
	HX_STACK_FRAME("flixel.system.FlxSound","pause",0xcf0941f2,"flixel.system.FlxSound.pause","flixel/system/FlxSound.hx",452,0x7d78fc74)
	HX_STACK_THIS(this)
	HX_STACK_LINE(453)
	::openfl::_legacy::media::SoundChannel tmp = this->_channel;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(453)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(453)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(453)
	if ((tmp2)){
		HX_STACK_LINE(454)
		return hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(456)
	::openfl::_legacy::media::SoundChannel tmp3 = this->_channel;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(456)
	Float tmp4 = tmp3->get_position();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(456)
	this->_time = tmp4;
	HX_STACK_LINE(457)
	this->_paused = true;
	HX_STACK_LINE(458)
	this->cleanup(false,false);
	HX_STACK_LINE(459)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSound_obj,pause,return )

::flixel::_system::FlxSound FlxSound_obj::stop( ){
	HX_STACK_FRAME("flixel.system.FlxSound","stop",0x9df1f886,"flixel.system.FlxSound.stop","flixel/system/FlxSound.hx",466,0x7d78fc74)
	HX_STACK_THIS(this)
	HX_STACK_LINE(467)
	bool tmp = this->autoDestroy;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(467)
	this->cleanup(tmp,true);
	HX_STACK_LINE(468)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSound_obj,stop,return )

::flixel::_system::FlxSound FlxSound_obj::fadeOut( hx::Null< Float >  __o_Duration,Dynamic __o_To,Dynamic onComplete){
Float Duration = __o_Duration.Default(1);
Dynamic To = __o_To.Default(0);
	HX_STACK_FRAME("flixel.system.FlxSound","fadeOut",0x225b5a6e,"flixel.system.FlxSound.fadeOut","flixel/system/FlxSound.hx",478,0x7d78fc74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Duration,"Duration")
	HX_STACK_ARG(To,"To")
	HX_STACK_ARG(onComplete,"onComplete")
{
		HX_STACK_LINE(479)
		::flixel::tweens::FlxTween tmp = this->fadeTween;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(479)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(479)
		if ((tmp1)){
			HX_STACK_LINE(480)
			::flixel::tweens::FlxTween tmp2 = this->fadeTween;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(480)
			tmp2->cancel();
		}
		HX_STACK_LINE(481)
		Float tmp2 = this->_volume;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(481)
		Dynamic tmp3 = To;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(481)
		Float tmp4 = Duration;		HX_STACK_VAR(tmp4,"tmp4");
		struct _Function_1_1{
			inline static Dynamic Block( Dynamic &onComplete){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/system/FlxSound.hx",481,0x7d78fc74)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("onComplete","\xf8","\xd4","\x7e","\x5d") , onComplete,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(481)
		Dynamic tmp5 = _Function_1_1::Block(onComplete);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(481)
		Dynamic tmp6 = this->volumeTween_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(481)
		::flixel::tweens::misc::NumTween tmp7 = ::flixel::tweens::FlxTween_obj::num(tmp2,tmp3,tmp4,tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(481)
		this->fadeTween = tmp7;
		HX_STACK_LINE(483)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC3(FlxSound_obj,fadeOut,return )

::flixel::_system::FlxSound FlxSound_obj::fadeIn( hx::Null< Float >  __o_Duration,hx::Null< Float >  __o_From,hx::Null< Float >  __o_To,Dynamic onComplete){
Float Duration = __o_Duration.Default(1);
Float From = __o_From.Default(0);
Float To = __o_To.Default(1);
	HX_STACK_FRAME("flixel.system.FlxSound","fadeIn",0x4e377e05,"flixel.system.FlxSound.fadeIn","flixel/system/FlxSound.hx",494,0x7d78fc74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Duration,"Duration")
	HX_STACK_ARG(From,"From")
	HX_STACK_ARG(To,"To")
	HX_STACK_ARG(onComplete,"onComplete")
{
		HX_STACK_LINE(495)
		::openfl::_legacy::media::SoundChannel tmp = this->_channel;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(495)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(495)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(495)
		if ((tmp2)){
			HX_STACK_LINE(496)
			this->play(null(),null(),null());
		}
		HX_STACK_LINE(498)
		::flixel::tweens::FlxTween tmp3 = this->fadeTween;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(498)
		bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(498)
		if ((tmp4)){
			HX_STACK_LINE(499)
			::flixel::tweens::FlxTween tmp5 = this->fadeTween;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(499)
			tmp5->cancel();
		}
		HX_STACK_LINE(501)
		Float tmp5 = From;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(501)
		Float tmp6 = To;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(501)
		Float tmp7 = Duration;		HX_STACK_VAR(tmp7,"tmp7");
		struct _Function_1_1{
			inline static Dynamic Block( Dynamic &onComplete){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/system/FlxSound.hx",501,0x7d78fc74)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("onComplete","\xf8","\xd4","\x7e","\x5d") , onComplete,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(501)
		Dynamic tmp8 = _Function_1_1::Block(onComplete);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(501)
		Dynamic tmp9 = this->volumeTween_dyn();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(501)
		::flixel::tweens::misc::NumTween tmp10 = ::flixel::tweens::FlxTween_obj::num(tmp5,tmp6,tmp7,tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(501)
		this->fadeTween = tmp10;
		HX_STACK_LINE(502)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxSound_obj,fadeIn,return )

Void FlxSound_obj::volumeTween( Float f){
{
		HX_STACK_FRAME("flixel.system.FlxSound","volumeTween",0x6ac0ca2d,"flixel.system.FlxSound.volumeTween","flixel/system/FlxSound.hx",506,0x7d78fc74)
		HX_STACK_THIS(this)
		HX_STACK_ARG(f,"f")
		HX_STACK_LINE(507)
		Float tmp = f;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(507)
		this->set_volume(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSound_obj,volumeTween,(void))

Float FlxSound_obj::getActualVolume( ){
	HX_STACK_FRAME("flixel.system.FlxSound","getActualVolume",0xa3e81aba,"flixel.system.FlxSound.getActualVolume","flixel/system/FlxSound.hx",516,0x7d78fc74)
	HX_STACK_THIS(this)
	HX_STACK_LINE(517)
	Float tmp = this->_volume;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(517)
	Float tmp1 = this->_volumeAdjust;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(517)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(517)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSound_obj,getActualVolume,return )

Void FlxSound_obj::setPosition( hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y){
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
	HX_STACK_FRAME("flixel.system.FlxSound","setPosition",0xba193a67,"flixel.system.FlxSound.setPosition","flixel/system/FlxSound.hx",528,0x7d78fc74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
{
		HX_STACK_LINE(529)
		this->x = X;
		HX_STACK_LINE(530)
		this->y = Y;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxSound_obj,setPosition,(void))

Void FlxSound_obj::updateTransform( ){
{
		HX_STACK_FRAME("flixel.system.FlxSound","updateTransform",0x01697c1f,"flixel.system.FlxSound.updateTransform","flixel/system/FlxSound.hx",538,0x7d78fc74)
		HX_STACK_THIS(this)
		HX_STACK_LINE(541)
		::flixel::_system::frontEnds::SoundFrontEnd tmp = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(541)
		bool tmp1 = tmp->__Field(HX_HCSTRING("muted","\x6b","\x8f","\x5b","\x10"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(541)
		int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(541)
		if ((tmp1)){
			HX_STACK_LINE(541)
			tmp2 = (int)0;
		}
		else{
			HX_STACK_LINE(541)
			tmp2 = (int)1;
		}
		HX_STACK_LINE(541)
		::flixel::_system::frontEnds::SoundFrontEnd tmp3 = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(541)
		Float tmp4 = tmp3->__Field(HX_HCSTRING("volume","\xda","\x29","\x53","\x5f"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(541)
		Float tmp5 = (tmp2 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(543)
		::flixel::_system::FlxSoundGroup tmp6 = this->group;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(543)
		bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(543)
		Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(543)
		if ((tmp7)){
			HX_STACK_LINE(543)
			::flixel::_system::FlxSoundGroup tmp9 = this->group;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(543)
			tmp8 = tmp9->__Field(HX_HCSTRING("volume","\xda","\x29","\x53","\x5f"), hx::paccDynamic );
		}
		else{
			HX_STACK_LINE(543)
			tmp8 = (int)1;
		}
		HX_STACK_LINE(541)
		Float tmp9 = (tmp5 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(543)
		Float tmp10 = this->_volume;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(541)
		Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(543)
		Float tmp12 = this->_volumeAdjust;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(541)
		Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(539)
		::openfl::media::SoundTransform tmp14 = this->_transform;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(539)
		tmp14->volume = tmp13;
		HX_STACK_LINE(545)
		::openfl::_legacy::media::SoundChannel tmp15 = this->_channel;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(545)
		bool tmp16 = (tmp15 != null());		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(545)
		if ((tmp16)){
			HX_STACK_LINE(546)
			::openfl::_legacy::media::SoundChannel tmp17 = this->_channel;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(546)
			::openfl::media::SoundTransform tmp18 = this->_transform;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(546)
			tmp17->set_soundTransform(tmp18);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSound_obj,updateTransform,(void))

Void FlxSound_obj::startSound( Float StartTime){
{
		HX_STACK_FRAME("flixel.system.FlxSound","startSound",0x5fc0a891,"flixel.system.FlxSound.startSound","flixel/system/FlxSound.hx",554,0x7d78fc74)
		HX_STACK_THIS(this)
		HX_STACK_ARG(StartTime,"StartTime")
		HX_STACK_LINE(555)
		::openfl::_legacy::media::Sound tmp = this->_sound;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(555)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(555)
		if ((tmp1)){
			HX_STACK_LINE(556)
			return null();
		}
		HX_STACK_LINE(558)
		this->_time = StartTime;
		HX_STACK_LINE(559)
		this->_paused = false;
		HX_STACK_LINE(560)
		::openfl::_legacy::media::Sound tmp2 = this->_sound;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(560)
		Float tmp3 = this->_time;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(560)
		::openfl::media::SoundTransform tmp4 = this->_transform;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(560)
		::openfl::_legacy::media::SoundChannel tmp5 = tmp2->play(tmp3,(int)0,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(560)
		this->_channel = tmp5;
		HX_STACK_LINE(561)
		::openfl::_legacy::media::SoundChannel tmp6 = this->_channel;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(561)
		bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(561)
		if ((tmp7)){
			HX_STACK_LINE(564)
			Float tmp8 = this->_pitch;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(564)
			this->set_pitch(tmp8);
			HX_STACK_LINE(566)
			::openfl::_legacy::media::SoundChannel tmp9 = this->_channel;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(566)
			::String tmp10 = ::openfl::_legacy::events::Event_obj::SOUND_COMPLETE;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(566)
			Dynamic tmp11 = this->stopped_dyn();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(566)
			tmp9->addEventListener(tmp10,tmp11,null(),null(),null());
			HX_STACK_LINE(567)
			this->set_active(true);
		}
		else{
			HX_STACK_LINE(571)
			this->set_exists(false);
			HX_STACK_LINE(572)
			this->set_active(false);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSound_obj,startSound,(void))

Void FlxSound_obj::stopped( Dynamic _){
{
		HX_STACK_FRAME("flixel.system.FlxSound","stopped",0x3480f409,"flixel.system.FlxSound.stopped","flixel/system/FlxSound.hx",581,0x7d78fc74)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(582)
		Dynamic tmp = this->onComplete_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(582)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(582)
		if ((tmp1)){
			HX_STACK_LINE(583)
			this->onComplete();
		}
		HX_STACK_LINE(585)
		bool tmp2 = this->looped;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(585)
		if ((tmp2)){
			HX_STACK_LINE(587)
			this->cleanup(false,null());
			HX_STACK_LINE(588)
			Float tmp3 = this->loopTime;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(588)
			Dynamic tmp4 = this->endTime;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(588)
			this->play(false,tmp3,tmp4);
		}
		else{
			HX_STACK_LINE(591)
			bool tmp3 = this->autoDestroy;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(591)
			this->cleanup(tmp3,null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSound_obj,stopped,(void))

Void FlxSound_obj::cleanup( bool destroySound,hx::Null< bool >  __o_resetPosition){
bool resetPosition = __o_resetPosition.Default(true);
	HX_STACK_FRAME("flixel.system.FlxSound","cleanup",0x9c612e20,"flixel.system.FlxSound.cleanup","flixel/system/FlxSound.hx",604,0x7d78fc74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(destroySound,"destroySound")
	HX_STACK_ARG(resetPosition,"resetPosition")
{
		HX_STACK_LINE(605)
		bool tmp = destroySound;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(605)
		if ((tmp)){
			HX_STACK_LINE(607)
			this->reset();
			HX_STACK_LINE(608)
			return null();
		}
		HX_STACK_LINE(611)
		::openfl::_legacy::media::SoundChannel tmp1 = this->_channel;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(611)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(611)
		if ((tmp2)){
			HX_STACK_LINE(613)
			::openfl::_legacy::media::SoundChannel tmp3 = this->_channel;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(613)
			::String tmp4 = ::openfl::_legacy::events::Event_obj::SOUND_COMPLETE;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(613)
			Dynamic tmp5 = this->stopped_dyn();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(613)
			tmp3->removeEventListener(tmp4,tmp5,null());
			HX_STACK_LINE(614)
			::openfl::_legacy::media::SoundChannel tmp6 = this->_channel;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(614)
			tmp6->stop();
			HX_STACK_LINE(615)
			this->_channel = null();
		}
		HX_STACK_LINE(618)
		this->set_active(false);
		HX_STACK_LINE(620)
		bool tmp3 = resetPosition;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(620)
		if ((tmp3)){
			HX_STACK_LINE(622)
			this->_time = (int)0;
			HX_STACK_LINE(623)
			this->_paused = false;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxSound_obj,cleanup,(void))

Void FlxSound_obj::gotID3( Dynamic _){
{
		HX_STACK_FRAME("flixel.system.FlxSound","gotID3",0xcead1fb0,"flixel.system.FlxSound.gotID3","flixel/system/FlxSound.hx",631,0x7d78fc74)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(632)
		::openfl::_legacy::media::Sound tmp = this->_sound;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(632)
		::openfl::media::ID3Info tmp1 = tmp->get_id3();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(632)
		this->name = tmp1->songName;
		HX_STACK_LINE(633)
		::openfl::_legacy::media::Sound tmp2 = this->_sound;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(633)
		::openfl::media::ID3Info tmp3 = tmp2->get_id3();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(633)
		this->artist = tmp3->artist;
		HX_STACK_LINE(634)
		::openfl::_legacy::media::Sound tmp4 = this->_sound;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(634)
		::String tmp5 = ::openfl::_legacy::events::Event_obj::ID3;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(634)
		Dynamic tmp6 = this->gotID3_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(634)
		tmp4->removeEventListener(tmp5,tmp6,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSound_obj,gotID3,(void))

Void FlxSound_obj::onFocus( ){
{
		HX_STACK_FRAME("flixel.system.FlxSound","onFocus",0x8be62035,"flixel.system.FlxSound.onFocus","flixel/system/FlxSound.hx",640,0x7d78fc74)
		HX_STACK_THIS(this)
		HX_STACK_LINE(641)
		bool tmp = this->_alreadyPaused;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(641)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(641)
		if ((tmp1)){
			HX_STACK_LINE(642)
			this->resume();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSound_obj,onFocus,(void))

Void FlxSound_obj::onFocusLost( ){
{
		HX_STACK_FRAME("flixel.system.FlxSound","onFocusLost",0x0043b4b9,"flixel.system.FlxSound.onFocusLost","flixel/system/FlxSound.hx",647,0x7d78fc74)
		HX_STACK_THIS(this)
		HX_STACK_LINE(648)
		bool tmp = this->_paused;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(648)
		this->_alreadyPaused = tmp;
		HX_STACK_LINE(649)
		this->pause();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSound_obj,onFocusLost,(void))

::flixel::_system::FlxSoundGroup FlxSound_obj::set_group( ::flixel::_system::FlxSoundGroup group){
	HX_STACK_FRAME("flixel.system.FlxSound","set_group",0x9197949e,"flixel.system.FlxSound.set_group","flixel/system/FlxSound.hx",654,0x7d78fc74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(group,"group")
	HX_STACK_LINE(655)
	::flixel::_system::FlxSoundGroup tmp = this->group;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(655)
	::flixel::_system::FlxSoundGroup tmp1 = group;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(655)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(655)
	if ((tmp2)){
		HX_STACK_LINE(657)
		::flixel::_system::FlxSoundGroup tmp3 = this->group;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(657)
		::flixel::_system::FlxSoundGroup oldGroup = tmp3;		HX_STACK_VAR(oldGroup,"oldGroup");
		HX_STACK_LINE(660)
		this->group = group;
		HX_STACK_LINE(662)
		bool tmp4 = (oldGroup != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(662)
		if ((tmp4)){
			HX_STACK_LINE(663)
			oldGroup->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(665)
		bool tmp5 = (group != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(665)
		if ((tmp5)){
			HX_STACK_LINE(666)
			group->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )(hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(668)
		this->updateTransform();
	}
	HX_STACK_LINE(670)
	::flixel::_system::FlxSoundGroup tmp3 = group;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(670)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSound_obj,set_group,return )

bool FlxSound_obj::get_playing( ){
	HX_STACK_FRAME("flixel.system.FlxSound","get_playing",0xced03f81,"flixel.system.FlxSound.get_playing","flixel/system/FlxSound.hx",674,0x7d78fc74)
	HX_STACK_THIS(this)
	HX_STACK_LINE(675)
	::openfl::_legacy::media::SoundChannel tmp = this->_channel;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(675)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(675)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSound_obj,get_playing,return )

Float FlxSound_obj::get_volume( ){
	HX_STACK_FRAME("flixel.system.FlxSound","get_volume",0x12b7dd27,"flixel.system.FlxSound.get_volume","flixel/system/FlxSound.hx",679,0x7d78fc74)
	HX_STACK_THIS(this)
	HX_STACK_LINE(680)
	Float tmp = this->_volume;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(680)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSound_obj,get_volume,return )

Float FlxSound_obj::set_volume( Float Volume){
	HX_STACK_FRAME("flixel.system.FlxSound","set_volume",0x16357b9b,"flixel.system.FlxSound.set_volume","flixel/system/FlxSound.hx",684,0x7d78fc74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Volume,"Volume")
	HX_STACK_LINE(685)
	Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(685)
	{
		HX_STACK_LINE(685)
		bool tmp1 = true;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(685)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(685)
		if ((tmp1)){
			HX_STACK_LINE(685)
			tmp2 = (Volume < (int)0);
		}
		else{
			HX_STACK_LINE(685)
			tmp2 = false;
		}
		HX_STACK_LINE(685)
		Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(685)
		if ((tmp2)){
			HX_STACK_LINE(685)
			tmp3 = (int)0;
		}
		else{
			HX_STACK_LINE(685)
			tmp3 = Volume;
		}
		HX_STACK_LINE(685)
		Float lowerBound = tmp3;		HX_STACK_VAR(lowerBound,"lowerBound");
		HX_STACK_LINE(685)
		bool tmp4 = true;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(685)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(685)
		if ((tmp4)){
			HX_STACK_LINE(685)
			tmp5 = (lowerBound > (int)1);
		}
		else{
			HX_STACK_LINE(685)
			tmp5 = false;
		}
		HX_STACK_LINE(685)
		if ((tmp5)){
			HX_STACK_LINE(685)
			tmp = (int)1;
		}
		else{
			HX_STACK_LINE(685)
			tmp = lowerBound;
		}
	}
	HX_STACK_LINE(685)
	this->_volume = ((Float)(tmp));
	HX_STACK_LINE(686)
	this->updateTransform();
	HX_STACK_LINE(687)
	Float tmp1 = Volume;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(687)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSound_obj,set_volume,return )

Float FlxSound_obj::get_pitch( ){
	HX_STACK_FRAME("flixel.system.FlxSound","get_pitch",0xd6f2b113,"flixel.system.FlxSound.get_pitch","flixel/system/FlxSound.hx",692,0x7d78fc74)
	HX_STACK_THIS(this)
	HX_STACK_LINE(693)
	Float tmp = this->_pitch;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(693)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSound_obj,get_pitch,return )

Float FlxSound_obj::set_pitch( Float v){
	HX_STACK_FRAME("flixel.system.FlxSound","set_pitch",0xba439d1f,"flixel.system.FlxSound.set_pitch","flixel/system/FlxSound.hx",697,0x7d78fc74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(698)
	::openfl::_legacy::media::SoundChannel tmp = this->_channel;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(698)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(698)
	if ((tmp1)){
		HX_STACK_LINE(699)
		::openfl::_legacy::media::SoundChannel tmp2 = this->_channel;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(699)
		Float tmp3 = v;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(699)
		tmp2->set_pitch(tmp3);
	}
	HX_STACK_LINE(700)
	Float tmp2 = this->_pitch = v;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(700)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSound_obj,set_pitch,return )

Float FlxSound_obj::get_pan( ){
	HX_STACK_FRAME("flixel.system.FlxSound","get_pan",0x17e93bf0,"flixel.system.FlxSound.get_pan","flixel/system/FlxSound.hx",705,0x7d78fc74)
	HX_STACK_THIS(this)
	HX_STACK_LINE(706)
	::openfl::media::SoundTransform tmp = this->_transform;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(706)
	Float tmp1 = tmp->pan;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(706)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSound_obj,get_pan,return )

Float FlxSound_obj::set_pan( Float pan){
	HX_STACK_FRAME("flixel.system.FlxSound","set_pan",0x0aeaccfc,"flixel.system.FlxSound.set_pan","flixel/system/FlxSound.hx",710,0x7d78fc74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pan,"pan")
	HX_STACK_LINE(711)
	::openfl::media::SoundTransform tmp = this->_transform;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(711)
	Float tmp1 = tmp->pan = pan;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(711)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSound_obj,set_pan,return )

Float FlxSound_obj::get_time( ){
	HX_STACK_FRAME("flixel.system.FlxSound","get_time",0xd6d6221a,"flixel.system.FlxSound.get_time","flixel/system/FlxSound.hx",715,0x7d78fc74)
	HX_STACK_THIS(this)
	HX_STACK_LINE(716)
	Float tmp = this->_time;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(716)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSound_obj,get_time,return )

Float FlxSound_obj::set_time( Float time){
	HX_STACK_FRAME("flixel.system.FlxSound","set_time",0x85337b8e,"flixel.system.FlxSound.set_time","flixel/system/FlxSound.hx",720,0x7d78fc74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(time,"time")
	HX_STACK_LINE(721)
	::openfl::_legacy::media::SoundChannel tmp = this->_channel;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(721)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(721)
	if ((tmp1)){
		HX_STACK_LINE(723)
		this->cleanup(false,true);
		HX_STACK_LINE(724)
		Float tmp2 = time;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(724)
		this->startSound(tmp2);
	}
	HX_STACK_LINE(726)
	Float tmp2 = this->_time = time;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(726)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSound_obj,set_time,return )

Float FlxSound_obj::get_length( ){
	HX_STACK_FRAME("flixel.system.FlxSound","get_length",0x526c4833,"flixel.system.FlxSound.get_length","flixel/system/FlxSound.hx",730,0x7d78fc74)
	HX_STACK_THIS(this)
	HX_STACK_LINE(731)
	Float tmp = this->_length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(731)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSound_obj,get_length,return )

::String FlxSound_obj::toString( ){
	HX_STACK_FRAME("flixel.system.FlxSound","toString",0x428d6b30,"flixel.system.FlxSound.toString","flixel/system/FlxSound.hx",735,0x7d78fc74)
	HX_STACK_THIS(this)
	HX_STACK_LINE(737)
	::flixel::util::LabelValuePair tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(737)
	{
		HX_STACK_LINE(737)
		::flixel::util::FlxPool_flixel_util_LabelValuePair tmp1 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(737)
		::flixel::util::LabelValuePair tmp2 = tmp1->get();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(737)
		::flixel::util::LabelValuePair _this = tmp2;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(737)
		_this->label = HX_HCSTRING("playing","\x6e","\x0f","\x18","\x8a");
		HX_STACK_LINE(737)
		::openfl::_legacy::media::SoundChannel tmp3 = this->_channel;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(737)
		bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(737)
		_this->value = tmp4;
		HX_STACK_LINE(737)
		tmp = _this;
	}
	HX_STACK_LINE(738)
	::flixel::util::LabelValuePair tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(738)
	{
		HX_STACK_LINE(738)
		::flixel::util::FlxPool_flixel_util_LabelValuePair tmp2 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(738)
		::flixel::util::LabelValuePair tmp3 = tmp2->get();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(738)
		::flixel::util::LabelValuePair _this = tmp3;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(738)
		_this->label = HX_HCSTRING("time","\x0d","\xcc","\xfc","\x4c");
		HX_STACK_LINE(738)
		Float tmp4 = this->_time;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(738)
		_this->value = tmp4;
		HX_STACK_LINE(738)
		tmp1 = _this;
	}
	HX_STACK_LINE(739)
	::flixel::util::LabelValuePair tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(739)
	{
		HX_STACK_LINE(739)
		::flixel::util::FlxPool_flixel_util_LabelValuePair tmp3 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(739)
		::flixel::util::LabelValuePair tmp4 = tmp3->get();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(739)
		::flixel::util::LabelValuePair _this = tmp4;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(739)
		_this->label = HX_HCSTRING("length","\xe6","\x94","\x07","\x9f");
		HX_STACK_LINE(739)
		Float tmp5 = this->_length;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(739)
		_this->value = tmp5;
		HX_STACK_LINE(739)
		tmp2 = _this;
	}
	HX_STACK_LINE(740)
	::flixel::util::LabelValuePair tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(740)
	{
		HX_STACK_LINE(740)
		::flixel::util::FlxPool_flixel_util_LabelValuePair tmp4 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(740)
		::flixel::util::LabelValuePair tmp5 = tmp4->get();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(740)
		::flixel::util::LabelValuePair _this = tmp5;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(740)
		_this->label = HX_HCSTRING("volume","\xda","\x29","\x53","\x5f");
		HX_STACK_LINE(740)
		Float tmp6 = this->_volume;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(740)
		_this->value = tmp6;
		HX_STACK_LINE(740)
		tmp3 = _this;
	}
	HX_STACK_LINE(736)
	::String tmp4 = ::flixel::util::FlxStringUtil_obj::getDebugString(Array_obj< ::Dynamic >::__new().Add(tmp).Add(tmp1).Add(tmp2).Add(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(736)
	return tmp4;
}



FlxSound_obj::FlxSound_obj()
{
}

void FlxSound_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxSound);
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(persist,"persist");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(artist,"artist");
	HX_MARK_MEMBER_NAME(amplitude,"amplitude");
	HX_MARK_MEMBER_NAME(amplitudeLeft,"amplitudeLeft");
	HX_MARK_MEMBER_NAME(amplitudeRight,"amplitudeRight");
	HX_MARK_MEMBER_NAME(autoDestroy,"autoDestroy");
	HX_MARK_MEMBER_NAME(onComplete,"onComplete");
	HX_MARK_MEMBER_NAME(playing,"playing");
	HX_MARK_MEMBER_NAME(group,"group");
	HX_MARK_MEMBER_NAME(looped,"looped");
	HX_MARK_MEMBER_NAME(loopTime,"loopTime");
	HX_MARK_MEMBER_NAME(endTime,"endTime");
	HX_MARK_MEMBER_NAME(fadeTween,"fadeTween");
	HX_MARK_MEMBER_NAME(_sound,"_sound");
	HX_MARK_MEMBER_NAME(_channel,"_channel");
	HX_MARK_MEMBER_NAME(_transform,"_transform");
	HX_MARK_MEMBER_NAME(_paused,"_paused");
	HX_MARK_MEMBER_NAME(_volume,"_volume");
	HX_MARK_MEMBER_NAME(_time,"_time");
	HX_MARK_MEMBER_NAME(_length,"_length");
	HX_MARK_MEMBER_NAME(_pitch,"_pitch");
	HX_MARK_MEMBER_NAME(_volumeAdjust,"_volumeAdjust");
	HX_MARK_MEMBER_NAME(_target,"_target");
	HX_MARK_MEMBER_NAME(_radius,"_radius");
	HX_MARK_MEMBER_NAME(_proximityPan,"_proximityPan");
	HX_MARK_MEMBER_NAME(_alreadyPaused,"_alreadyPaused");
	::flixel::FlxBasic_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxSound_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(persist,"persist");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(artist,"artist");
	HX_VISIT_MEMBER_NAME(amplitude,"amplitude");
	HX_VISIT_MEMBER_NAME(amplitudeLeft,"amplitudeLeft");
	HX_VISIT_MEMBER_NAME(amplitudeRight,"amplitudeRight");
	HX_VISIT_MEMBER_NAME(autoDestroy,"autoDestroy");
	HX_VISIT_MEMBER_NAME(onComplete,"onComplete");
	HX_VISIT_MEMBER_NAME(playing,"playing");
	HX_VISIT_MEMBER_NAME(group,"group");
	HX_VISIT_MEMBER_NAME(looped,"looped");
	HX_VISIT_MEMBER_NAME(loopTime,"loopTime");
	HX_VISIT_MEMBER_NAME(endTime,"endTime");
	HX_VISIT_MEMBER_NAME(fadeTween,"fadeTween");
	HX_VISIT_MEMBER_NAME(_sound,"_sound");
	HX_VISIT_MEMBER_NAME(_channel,"_channel");
	HX_VISIT_MEMBER_NAME(_transform,"_transform");
	HX_VISIT_MEMBER_NAME(_paused,"_paused");
	HX_VISIT_MEMBER_NAME(_volume,"_volume");
	HX_VISIT_MEMBER_NAME(_time,"_time");
	HX_VISIT_MEMBER_NAME(_length,"_length");
	HX_VISIT_MEMBER_NAME(_pitch,"_pitch");
	HX_VISIT_MEMBER_NAME(_volumeAdjust,"_volumeAdjust");
	HX_VISIT_MEMBER_NAME(_target,"_target");
	HX_VISIT_MEMBER_NAME(_radius,"_radius");
	HX_VISIT_MEMBER_NAME(_proximityPan,"_proximityPan");
	HX_VISIT_MEMBER_NAME(_alreadyPaused,"_alreadyPaused");
	::flixel::FlxBasic_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxSound_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"pan") ) { if (inCallProp == hx::paccAlways) return get_pan(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		if (HX_FIELD_EQ(inName,"time") ) { if (inCallProp == hx::paccAlways) return get_time(); }
		if (HX_FIELD_EQ(inName,"kill") ) { return kill_dyn(); }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		if (HX_FIELD_EQ(inName,"play") ) { return play_dyn(); }
		if (HX_FIELD_EQ(inName,"stop") ) { return stop_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"pitch") ) { if (inCallProp == hx::paccAlways) return get_pitch(); }
		if (HX_FIELD_EQ(inName,"group") ) { return group; }
		if (HX_FIELD_EQ(inName,"_time") ) { return _time; }
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		if (HX_FIELD_EQ(inName,"pause") ) { return pause_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"artist") ) { return artist; }
		if (HX_FIELD_EQ(inName,"volume") ) { if (inCallProp == hx::paccAlways) return get_volume(); }
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == hx::paccAlways) return get_length(); }
		if (HX_FIELD_EQ(inName,"looped") ) { return looped; }
		if (HX_FIELD_EQ(inName,"_sound") ) { return _sound; }
		if (HX_FIELD_EQ(inName,"_pitch") ) { return _pitch; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"resume") ) { return resume_dyn(); }
		if (HX_FIELD_EQ(inName,"fadeIn") ) { return fadeIn_dyn(); }
		if (HX_FIELD_EQ(inName,"gotID3") ) { return gotID3_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"persist") ) { return persist; }
		if (HX_FIELD_EQ(inName,"playing") ) { return inCallProp == hx::paccAlways ? get_playing() : playing; }
		if (HX_FIELD_EQ(inName,"endTime") ) { return endTime; }
		if (HX_FIELD_EQ(inName,"_paused") ) { return _paused; }
		if (HX_FIELD_EQ(inName,"_volume") ) { return _volume; }
		if (HX_FIELD_EQ(inName,"_length") ) { return _length; }
		if (HX_FIELD_EQ(inName,"_target") ) { return _target; }
		if (HX_FIELD_EQ(inName,"_radius") ) { return _radius; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"fadeOut") ) { return fadeOut_dyn(); }
		if (HX_FIELD_EQ(inName,"stopped") ) { return stopped_dyn(); }
		if (HX_FIELD_EQ(inName,"cleanup") ) { return cleanup_dyn(); }
		if (HX_FIELD_EQ(inName,"onFocus") ) { return onFocus_dyn(); }
		if (HX_FIELD_EQ(inName,"get_pan") ) { return get_pan_dyn(); }
		if (HX_FIELD_EQ(inName,"set_pan") ) { return set_pan_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"loopTime") ) { return loopTime; }
		if (HX_FIELD_EQ(inName,"_channel") ) { return _channel; }
		if (HX_FIELD_EQ(inName,"get_time") ) { return get_time_dyn(); }
		if (HX_FIELD_EQ(inName,"set_time") ) { return set_time_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"amplitude") ) { return amplitude; }
		if (HX_FIELD_EQ(inName,"fadeTween") ) { return fadeTween; }
		if (HX_FIELD_EQ(inName,"proximity") ) { return proximity_dyn(); }
		if (HX_FIELD_EQ(inName,"set_group") ) { return set_group_dyn(); }
		if (HX_FIELD_EQ(inName,"get_pitch") ) { return get_pitch_dyn(); }
		if (HX_FIELD_EQ(inName,"set_pitch") ) { return set_pitch_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onComplete") ) { return onComplete; }
		if (HX_FIELD_EQ(inName,"_transform") ) { return _transform; }
		if (HX_FIELD_EQ(inName,"loadStream") ) { return loadStream_dyn(); }
		if (HX_FIELD_EQ(inName,"startSound") ) { return startSound_dyn(); }
		if (HX_FIELD_EQ(inName,"get_volume") ) { return get_volume_dyn(); }
		if (HX_FIELD_EQ(inName,"set_volume") ) { return set_volume_dyn(); }
		if (HX_FIELD_EQ(inName,"get_length") ) { return get_length_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"autoDestroy") ) { return autoDestroy; }
		if (HX_FIELD_EQ(inName,"volumeTween") ) { return volumeTween_dyn(); }
		if (HX_FIELD_EQ(inName,"setPosition") ) { return setPosition_dyn(); }
		if (HX_FIELD_EQ(inName,"onFocusLost") ) { return onFocusLost_dyn(); }
		if (HX_FIELD_EQ(inName,"get_playing") ) { return get_playing_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"loadEmbedded") ) { return loadEmbedded_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"amplitudeLeft") ) { return amplitudeLeft; }
		if (HX_FIELD_EQ(inName,"_volumeAdjust") ) { return _volumeAdjust; }
		if (HX_FIELD_EQ(inName,"_proximityPan") ) { return _proximityPan; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"amplitudeRight") ) { return amplitudeRight; }
		if (HX_FIELD_EQ(inName,"_alreadyPaused") ) { return _alreadyPaused; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getActualVolume") ) { return getActualVolume_dyn(); }
		if (HX_FIELD_EQ(inName,"updateTransform") ) { return updateTransform_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxSound_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"pan") ) { if (inCallProp == hx::paccAlways) return set_pan(inValue); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"time") ) { if (inCallProp == hx::paccAlways) return set_time(inValue); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"pitch") ) { if (inCallProp == hx::paccAlways) return set_pitch(inValue); }
		if (HX_FIELD_EQ(inName,"group") ) { if (inCallProp == hx::paccAlways) return set_group(inValue);group=inValue.Cast< ::flixel::_system::FlxSoundGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_time") ) { _time=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"artist") ) { artist=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"volume") ) { if (inCallProp == hx::paccAlways) return set_volume(inValue); }
		if (HX_FIELD_EQ(inName,"looped") ) { looped=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_sound") ) { _sound=inValue.Cast< ::openfl::_legacy::media::Sound >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_pitch") ) { _pitch=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"persist") ) { persist=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"playing") ) { playing=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"endTime") ) { endTime=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_paused") ) { _paused=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_volume") ) { _volume=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_length") ) { _length=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_target") ) { _target=inValue.Cast< ::flixel::FlxObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_radius") ) { _radius=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"loopTime") ) { loopTime=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_channel") ) { _channel=inValue.Cast< ::openfl::_legacy::media::SoundChannel >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"amplitude") ) { amplitude=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fadeTween") ) { fadeTween=inValue.Cast< ::flixel::tweens::FlxTween >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onComplete") ) { onComplete=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_transform") ) { _transform=inValue.Cast< ::openfl::media::SoundTransform >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"autoDestroy") ) { autoDestroy=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"amplitudeLeft") ) { amplitudeLeft=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_volumeAdjust") ) { _volumeAdjust=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_proximityPan") ) { _proximityPan=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"amplitudeRight") ) { amplitudeRight=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_alreadyPaused") ) { _alreadyPaused=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxSound_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("persist","\x14","\x22","\x71","\x83"));
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("artist","\xc7","\xf2","\x48","\xb9"));
	outFields->push(HX_HCSTRING("amplitude","\x43","\x15","\xfb","\x69"));
	outFields->push(HX_HCSTRING("amplitudeLeft","\xea","\xa6","\x0b","\xb4"));
	outFields->push(HX_HCSTRING("amplitudeRight","\x99","\x73","\x33","\x4d"));
	outFields->push(HX_HCSTRING("autoDestroy","\x4b","\xd1","\x69","\x0a"));
	outFields->push(HX_HCSTRING("pan","\x5d","\x51","\x55","\x00"));
	outFields->push(HX_HCSTRING("playing","\x6e","\x0f","\x18","\x8a"));
	outFields->push(HX_HCSTRING("volume","\xda","\x29","\x53","\x5f"));
	outFields->push(HX_HCSTRING("pitch","\xc0","\xbb","\xa0","\xc2"));
	outFields->push(HX_HCSTRING("time","\x0d","\xcc","\xfc","\x4c"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	outFields->push(HX_HCSTRING("group","\x3f","\xb3","\xf4","\x99"));
	outFields->push(HX_HCSTRING("looped","\xc3","\x5f","\xb9","\x61"));
	outFields->push(HX_HCSTRING("loopTime","\x91","\xa0","\x6a","\x3f"));
	outFields->push(HX_HCSTRING("endTime","\x88","\x85","\x21","\x2f"));
	outFields->push(HX_HCSTRING("fadeTween","\x4f","\x03","\x59","\x05"));
	outFields->push(HX_HCSTRING("_sound","\x10","\xd4","\xb3","\x7c"));
	outFields->push(HX_HCSTRING("_channel","\x44","\x5a","\x8a","\x06"));
	outFields->push(HX_HCSTRING("_transform","\x2d","\xa9","\x35","\xa1"));
	outFields->push(HX_HCSTRING("_paused","\x4d","\x52","\xfb","\x5d"));
	outFields->push(HX_HCSTRING("_volume","\x79","\x3b","\xca","\xcd"));
	outFields->push(HX_HCSTRING("_time","\xec","\xe7","\x0d","\x00"));
	outFields->push(HX_HCSTRING("_length","\x85","\xa6","\x7e","\x0d"));
	outFields->push(HX_HCSTRING("_pitch","\x01","\x03","\x88","\xbe"));
	outFields->push(HX_HCSTRING("_volumeAdjust","\xe8","\xdc","\xfb","\x32"));
	outFields->push(HX_HCSTRING("_target","\xf0","\x04","\x64","\xf5"));
	outFields->push(HX_HCSTRING("_radius","\xf1","\xe1","\x6d","\x1f"));
	outFields->push(HX_HCSTRING("_proximityPan","\x3d","\xe4","\x2d","\x8b"));
	outFields->push(HX_HCSTRING("_alreadyPaused","\xa7","\xfe","\x5b","\xba"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(FlxSound_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(FlxSound_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{hx::fsBool,(int)offsetof(FlxSound_obj,persist),HX_HCSTRING("persist","\x14","\x22","\x71","\x83")},
	{hx::fsString,(int)offsetof(FlxSound_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsString,(int)offsetof(FlxSound_obj,artist),HX_HCSTRING("artist","\xc7","\xf2","\x48","\xb9")},
	{hx::fsFloat,(int)offsetof(FlxSound_obj,amplitude),HX_HCSTRING("amplitude","\x43","\x15","\xfb","\x69")},
	{hx::fsFloat,(int)offsetof(FlxSound_obj,amplitudeLeft),HX_HCSTRING("amplitudeLeft","\xea","\xa6","\x0b","\xb4")},
	{hx::fsFloat,(int)offsetof(FlxSound_obj,amplitudeRight),HX_HCSTRING("amplitudeRight","\x99","\x73","\x33","\x4d")},
	{hx::fsBool,(int)offsetof(FlxSound_obj,autoDestroy),HX_HCSTRING("autoDestroy","\x4b","\xd1","\x69","\x0a")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxSound_obj,onComplete),HX_HCSTRING("onComplete","\xf8","\xd4","\x7e","\x5d")},
	{hx::fsBool,(int)offsetof(FlxSound_obj,playing),HX_HCSTRING("playing","\x6e","\x0f","\x18","\x8a")},
	{hx::fsObject /*::flixel::_system::FlxSoundGroup*/ ,(int)offsetof(FlxSound_obj,group),HX_HCSTRING("group","\x3f","\xb3","\xf4","\x99")},
	{hx::fsBool,(int)offsetof(FlxSound_obj,looped),HX_HCSTRING("looped","\xc3","\x5f","\xb9","\x61")},
	{hx::fsFloat,(int)offsetof(FlxSound_obj,loopTime),HX_HCSTRING("loopTime","\x91","\xa0","\x6a","\x3f")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxSound_obj,endTime),HX_HCSTRING("endTime","\x88","\x85","\x21","\x2f")},
	{hx::fsObject /*::flixel::tweens::FlxTween*/ ,(int)offsetof(FlxSound_obj,fadeTween),HX_HCSTRING("fadeTween","\x4f","\x03","\x59","\x05")},
	{hx::fsObject /*::openfl::_legacy::media::Sound*/ ,(int)offsetof(FlxSound_obj,_sound),HX_HCSTRING("_sound","\x10","\xd4","\xb3","\x7c")},
	{hx::fsObject /*::openfl::_legacy::media::SoundChannel*/ ,(int)offsetof(FlxSound_obj,_channel),HX_HCSTRING("_channel","\x44","\x5a","\x8a","\x06")},
	{hx::fsObject /*::openfl::media::SoundTransform*/ ,(int)offsetof(FlxSound_obj,_transform),HX_HCSTRING("_transform","\x2d","\xa9","\x35","\xa1")},
	{hx::fsBool,(int)offsetof(FlxSound_obj,_paused),HX_HCSTRING("_paused","\x4d","\x52","\xfb","\x5d")},
	{hx::fsFloat,(int)offsetof(FlxSound_obj,_volume),HX_HCSTRING("_volume","\x79","\x3b","\xca","\xcd")},
	{hx::fsFloat,(int)offsetof(FlxSound_obj,_time),HX_HCSTRING("_time","\xec","\xe7","\x0d","\x00")},
	{hx::fsFloat,(int)offsetof(FlxSound_obj,_length),HX_HCSTRING("_length","\x85","\xa6","\x7e","\x0d")},
	{hx::fsFloat,(int)offsetof(FlxSound_obj,_pitch),HX_HCSTRING("_pitch","\x01","\x03","\x88","\xbe")},
	{hx::fsFloat,(int)offsetof(FlxSound_obj,_volumeAdjust),HX_HCSTRING("_volumeAdjust","\xe8","\xdc","\xfb","\x32")},
	{hx::fsObject /*::flixel::FlxObject*/ ,(int)offsetof(FlxSound_obj,_target),HX_HCSTRING("_target","\xf0","\x04","\x64","\xf5")},
	{hx::fsFloat,(int)offsetof(FlxSound_obj,_radius),HX_HCSTRING("_radius","\xf1","\xe1","\x6d","\x1f")},
	{hx::fsBool,(int)offsetof(FlxSound_obj,_proximityPan),HX_HCSTRING("_proximityPan","\x3d","\xe4","\x2d","\x8b")},
	{hx::fsBool,(int)offsetof(FlxSound_obj,_alreadyPaused),HX_HCSTRING("_alreadyPaused","\xa7","\xfe","\x5b","\xba")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("persist","\x14","\x22","\x71","\x83"),
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("artist","\xc7","\xf2","\x48","\xb9"),
	HX_HCSTRING("amplitude","\x43","\x15","\xfb","\x69"),
	HX_HCSTRING("amplitudeLeft","\xea","\xa6","\x0b","\xb4"),
	HX_HCSTRING("amplitudeRight","\x99","\x73","\x33","\x4d"),
	HX_HCSTRING("autoDestroy","\x4b","\xd1","\x69","\x0a"),
	HX_HCSTRING("onComplete","\xf8","\xd4","\x7e","\x5d"),
	HX_HCSTRING("playing","\x6e","\x0f","\x18","\x8a"),
	HX_HCSTRING("group","\x3f","\xb3","\xf4","\x99"),
	HX_HCSTRING("looped","\xc3","\x5f","\xb9","\x61"),
	HX_HCSTRING("loopTime","\x91","\xa0","\x6a","\x3f"),
	HX_HCSTRING("endTime","\x88","\x85","\x21","\x2f"),
	HX_HCSTRING("fadeTween","\x4f","\x03","\x59","\x05"),
	HX_HCSTRING("_sound","\x10","\xd4","\xb3","\x7c"),
	HX_HCSTRING("_channel","\x44","\x5a","\x8a","\x06"),
	HX_HCSTRING("_transform","\x2d","\xa9","\x35","\xa1"),
	HX_HCSTRING("_paused","\x4d","\x52","\xfb","\x5d"),
	HX_HCSTRING("_volume","\x79","\x3b","\xca","\xcd"),
	HX_HCSTRING("_time","\xec","\xe7","\x0d","\x00"),
	HX_HCSTRING("_length","\x85","\xa6","\x7e","\x0d"),
	HX_HCSTRING("_pitch","\x01","\x03","\x88","\xbe"),
	HX_HCSTRING("_volumeAdjust","\xe8","\xdc","\xfb","\x32"),
	HX_HCSTRING("_target","\xf0","\x04","\x64","\xf5"),
	HX_HCSTRING("_radius","\xf1","\xe1","\x6d","\x1f"),
	HX_HCSTRING("_proximityPan","\x3d","\xe4","\x2d","\x8b"),
	HX_HCSTRING("_alreadyPaused","\xa7","\xfe","\x5b","\xba"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("kill","\x9e","\xdf","\x09","\x47"),
	HX_HCSTRING("loadEmbedded","\xd0","\x05","\xcb","\x97"),
	HX_HCSTRING("loadStream","\x46","\x43","\x58","\xc6"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("proximity","\x3f","\xc9","\x25","\x82"),
	HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"),
	HX_HCSTRING("resume","\xad","\x69","\x84","\x08"),
	HX_HCSTRING("pause","\xf6","\xd6","\x57","\xbd"),
	HX_HCSTRING("stop","\x02","\xf0","\x5b","\x4c"),
	HX_HCSTRING("fadeOut","\x72","\x38","\x3c","\x31"),
	HX_HCSTRING("fadeIn","\x81","\x4c","\xab","\xe4"),
	HX_HCSTRING("volumeTween","\x31","\xfa","\x02","\xac"),
	HX_HCSTRING("getActualVolume","\xbe","\x9c","\x9c","\x37"),
	HX_HCSTRING("setPosition","\x6b","\x6a","\x5b","\xfb"),
	HX_HCSTRING("updateTransform","\x23","\xfe","\x1d","\x95"),
	HX_HCSTRING("startSound","\x0d","\x65","\xe3","\x9c"),
	HX_HCSTRING("stopped","\x0d","\xd2","\x61","\x43"),
	HX_HCSTRING("cleanup","\x24","\x0c","\x42","\xab"),
	HX_HCSTRING("gotID3","\x2c","\xee","\x20","\x65"),
	HX_HCSTRING("onFocus","\x39","\xfe","\xc6","\x9a"),
	HX_HCSTRING("onFocusLost","\xbd","\xe4","\x85","\x41"),
	HX_HCSTRING("set_group","\xa2","\xfb","\xee","\xc0"),
	HX_HCSTRING("get_playing","\x85","\x6f","\x12","\x10"),
	HX_HCSTRING("get_volume","\xa3","\x99","\xda","\x4f"),
	HX_HCSTRING("set_volume","\x17","\x38","\x58","\x53"),
	HX_HCSTRING("get_pitch","\x17","\x18","\x4a","\x06"),
	HX_HCSTRING("set_pitch","\x23","\x04","\x9b","\xe9"),
	HX_HCSTRING("get_pan","\xf4","\x19","\xca","\x26"),
	HX_HCSTRING("set_pan","\x00","\xab","\xcb","\x19"),
	HX_HCSTRING("get_time","\x96","\x87","\xb7","\xcc"),
	HX_HCSTRING("set_time","\x0a","\xe1","\x14","\x7b"),
	HX_HCSTRING("get_length","\xaf","\x04","\x8f","\x8f"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxSound_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxSound_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxSound_obj::__mClass;

void FlxSound_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.FlxSound","\x6a","\x26","\x83","\xc1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxSound_obj >;
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
