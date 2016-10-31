#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SignalFrontEnd
#include <flixel/system/frontEnds/SignalFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTweenManager
#include <flixel/tweens/FlxTweenManager.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_AngleTween
#include <flixel/tweens/misc/AngleTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_ColorTween
#include <flixel/tweens/misc/ColorTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_NumTween
#include <flixel/tweens/misc/NumTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_VarTween
#include <flixel/tweens/misc/VarTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_CircularMotion
#include <flixel/tweens/motion/CircularMotion.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_CubicMotion
#include <flixel/tweens/motion/CubicMotion.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_LinearMotion
#include <flixel/tweens/motion/LinearMotion.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_LinearPath
#include <flixel/tweens/motion/LinearPath.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_Motion
#include <flixel/tweens/motion/Motion.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_QuadMotion
#include <flixel/tweens/motion/QuadMotion.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_QuadPath
#include <flixel/tweens/motion/QuadPath.h>
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
namespace flixel{
namespace tweens{

Void FlxTweenManager_obj::__construct()
{
HX_STACK_FRAME("flixel.tweens.FlxTweenManager","new",0x3916c2b2,"flixel.tweens.FlxTweenManager.new","flixel/tweens/FlxTween.hx",704,0x5d58d691)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(709)
	this->_tweens = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(713)
	super::__construct();
	HX_STACK_LINE(714)
	this->set_visible(false);
	HX_STACK_LINE(715)
	{
		HX_STACK_LINE(715)
		::flixel::_system::frontEnds::SignalFrontEnd tmp = ::flixel::FlxG_obj::signals;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(715)
		Dynamic tmp1 = this->clear_dyn();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(715)
		tmp->__Field(HX_HCSTRING("stateSwitched","\x84","\x32","\x02","\x37"), hx::paccDynamic )->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )(tmp1);
	}
}
;
	return null();
}

//FlxTweenManager_obj::~FlxTweenManager_obj() { }

Dynamic FlxTweenManager_obj::__CreateEmpty() { return  new FlxTweenManager_obj; }
hx::ObjectPtr< FlxTweenManager_obj > FlxTweenManager_obj::__new()
{  hx::ObjectPtr< FlxTweenManager_obj > _result_ = new FlxTweenManager_obj();
	_result_->__construct();
	return _result_;}

Dynamic FlxTweenManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxTweenManager_obj > _result_ = new FlxTweenManager_obj();
	_result_->__construct();
	return _result_;}

::flixel::tweens::motion::QuadPath FlxTweenManager_obj::add_flixel_tweens_motion_QuadPath( ::flixel::tweens::motion::QuadPath Tween,hx::Null< bool >  __o_Start){
bool Start = __o_Start.Default(false);
	HX_STACK_FRAME("flixel.tweens.FlxTweenManager","add_flixel_tweens_motion_QuadPath",0xa68abf75,"flixel.tweens.FlxTweenManager.add_flixel_tweens_motion_QuadPath","flixel/tweens/FlxTween.hx",1097,0x5d58d691)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Tween,"Tween")
	HX_STACK_ARG(Start,"Start")
{
		HX_STACK_LINE(1099)
		bool tmp = (Tween == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1099)
		if ((tmp)){
			HX_STACK_LINE(1100)
			return null();
		}
		HX_STACK_LINE(1102)
		::flixel::tweens::motion::QuadPath tmp1 = Tween;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1102)
		this->_tweens->push(tmp1);
		HX_STACK_LINE(1104)
		bool tmp2 = Start;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1104)
		if ((tmp2)){
			HX_STACK_LINE(1105)
			Tween->start();
		}
		HX_STACK_LINE(1106)
		::flixel::tweens::motion::QuadPath tmp3 = Tween;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1106)
		return tmp3;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTweenManager_obj,add_flixel_tweens_motion_QuadPath,return )

::flixel::tweens::motion::LinearPath FlxTweenManager_obj::add_flixel_tweens_motion_LinearPath( ::flixel::tweens::motion::LinearPath Tween,hx::Null< bool >  __o_Start){
bool Start = __o_Start.Default(false);
	HX_STACK_FRAME("flixel.tweens.FlxTweenManager","add_flixel_tweens_motion_LinearPath",0x58c1abd3,"flixel.tweens.FlxTweenManager.add_flixel_tweens_motion_LinearPath","flixel/tweens/FlxTween.hx",1097,0x5d58d691)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Tween,"Tween")
	HX_STACK_ARG(Start,"Start")
{
		HX_STACK_LINE(1099)
		bool tmp = (Tween == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1099)
		if ((tmp)){
			HX_STACK_LINE(1100)
			return null();
		}
		HX_STACK_LINE(1102)
		::flixel::tweens::motion::LinearPath tmp1 = Tween;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1102)
		this->_tweens->push(tmp1);
		HX_STACK_LINE(1104)
		bool tmp2 = Start;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1104)
		if ((tmp2)){
			HX_STACK_LINE(1105)
			Tween->start();
		}
		HX_STACK_LINE(1106)
		::flixel::tweens::motion::LinearPath tmp3 = Tween;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1106)
		return tmp3;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTweenManager_obj,add_flixel_tweens_motion_LinearPath,return )

::flixel::tweens::motion::CircularMotion FlxTweenManager_obj::add_flixel_tweens_motion_CircularMotion( ::flixel::tweens::motion::CircularMotion Tween,hx::Null< bool >  __o_Start){
bool Start = __o_Start.Default(false);
	HX_STACK_FRAME("flixel.tweens.FlxTweenManager","add_flixel_tweens_motion_CircularMotion",0xdd77ac1e,"flixel.tweens.FlxTweenManager.add_flixel_tweens_motion_CircularMotion","flixel/tweens/FlxTween.hx",1097,0x5d58d691)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Tween,"Tween")
	HX_STACK_ARG(Start,"Start")
{
		HX_STACK_LINE(1099)
		bool tmp = (Tween == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1099)
		if ((tmp)){
			HX_STACK_LINE(1100)
			return null();
		}
		HX_STACK_LINE(1102)
		::flixel::tweens::motion::CircularMotion tmp1 = Tween;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1102)
		this->_tweens->push(tmp1);
		HX_STACK_LINE(1104)
		bool tmp2 = Start;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1104)
		if ((tmp2)){
			HX_STACK_LINE(1105)
			Tween->start();
		}
		HX_STACK_LINE(1106)
		::flixel::tweens::motion::CircularMotion tmp3 = Tween;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1106)
		return tmp3;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTweenManager_obj,add_flixel_tweens_motion_CircularMotion,return )

::flixel::tweens::motion::CubicMotion FlxTweenManager_obj::add_flixel_tweens_motion_CubicMotion( ::flixel::tweens::motion::CubicMotion Tween,hx::Null< bool >  __o_Start){
bool Start = __o_Start.Default(false);
	HX_STACK_FRAME("flixel.tweens.FlxTweenManager","add_flixel_tweens_motion_CubicMotion",0x3bc2ad57,"flixel.tweens.FlxTweenManager.add_flixel_tweens_motion_CubicMotion","flixel/tweens/FlxTween.hx",1097,0x5d58d691)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Tween,"Tween")
	HX_STACK_ARG(Start,"Start")
{
		HX_STACK_LINE(1099)
		bool tmp = (Tween == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1099)
		if ((tmp)){
			HX_STACK_LINE(1100)
			return null();
		}
		HX_STACK_LINE(1102)
		::flixel::tweens::motion::CubicMotion tmp1 = Tween;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1102)
		this->_tweens->push(tmp1);
		HX_STACK_LINE(1104)
		bool tmp2 = Start;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1104)
		if ((tmp2)){
			HX_STACK_LINE(1105)
			Tween->start();
		}
		HX_STACK_LINE(1106)
		::flixel::tweens::motion::CubicMotion tmp3 = Tween;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1106)
		return tmp3;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTweenManager_obj,add_flixel_tweens_motion_CubicMotion,return )

::flixel::tweens::motion::QuadMotion FlxTweenManager_obj::add_flixel_tweens_motion_QuadMotion( ::flixel::tweens::motion::QuadMotion Tween,hx::Null< bool >  __o_Start){
bool Start = __o_Start.Default(false);
	HX_STACK_FRAME("flixel.tweens.FlxTweenManager","add_flixel_tweens_motion_QuadMotion",0x4adc7406,"flixel.tweens.FlxTweenManager.add_flixel_tweens_motion_QuadMotion","flixel/tweens/FlxTween.hx",1097,0x5d58d691)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Tween,"Tween")
	HX_STACK_ARG(Start,"Start")
{
		HX_STACK_LINE(1099)
		bool tmp = (Tween == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1099)
		if ((tmp)){
			HX_STACK_LINE(1100)
			return null();
		}
		HX_STACK_LINE(1102)
		::flixel::tweens::motion::QuadMotion tmp1 = Tween;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1102)
		this->_tweens->push(tmp1);
		HX_STACK_LINE(1104)
		bool tmp2 = Start;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1104)
		if ((tmp2)){
			HX_STACK_LINE(1105)
			Tween->start();
		}
		HX_STACK_LINE(1106)
		::flixel::tweens::motion::QuadMotion tmp3 = Tween;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1106)
		return tmp3;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTweenManager_obj,add_flixel_tweens_motion_QuadMotion,return )

::flixel::tweens::motion::LinearMotion FlxTweenManager_obj::add_flixel_tweens_motion_LinearMotion( ::flixel::tweens::motion::LinearMotion Tween,hx::Null< bool >  __o_Start){
bool Start = __o_Start.Default(false);
	HX_STACK_FRAME("flixel.tweens.FlxTweenManager","add_flixel_tweens_motion_LinearMotion",0x29edb3e4,"flixel.tweens.FlxTweenManager.add_flixel_tweens_motion_LinearMotion","flixel/tweens/FlxTween.hx",1097,0x5d58d691)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Tween,"Tween")
	HX_STACK_ARG(Start,"Start")
{
		HX_STACK_LINE(1099)
		bool tmp = (Tween == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1099)
		if ((tmp)){
			HX_STACK_LINE(1100)
			return null();
		}
		HX_STACK_LINE(1102)
		::flixel::tweens::motion::LinearMotion tmp1 = Tween;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1102)
		this->_tweens->push(tmp1);
		HX_STACK_LINE(1104)
		bool tmp2 = Start;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1104)
		if ((tmp2)){
			HX_STACK_LINE(1105)
			Tween->start();
		}
		HX_STACK_LINE(1106)
		::flixel::tweens::motion::LinearMotion tmp3 = Tween;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1106)
		return tmp3;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTweenManager_obj,add_flixel_tweens_motion_LinearMotion,return )

::flixel::tweens::misc::ColorTween FlxTweenManager_obj::add_flixel_tweens_misc_ColorTween( ::flixel::tweens::misc::ColorTween Tween,hx::Null< bool >  __o_Start){
bool Start = __o_Start.Default(false);
	HX_STACK_FRAME("flixel.tweens.FlxTweenManager","add_flixel_tweens_misc_ColorTween",0xd92edebb,"flixel.tweens.FlxTweenManager.add_flixel_tweens_misc_ColorTween","flixel/tweens/FlxTween.hx",1097,0x5d58d691)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Tween,"Tween")
	HX_STACK_ARG(Start,"Start")
{
		HX_STACK_LINE(1099)
		bool tmp = (Tween == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1099)
		if ((tmp)){
			HX_STACK_LINE(1100)
			return null();
		}
		HX_STACK_LINE(1102)
		::flixel::tweens::misc::ColorTween tmp1 = Tween;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1102)
		this->_tweens->push(tmp1);
		HX_STACK_LINE(1104)
		bool tmp2 = Start;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1104)
		if ((tmp2)){
			HX_STACK_LINE(1105)
			Tween->start();
		}
		HX_STACK_LINE(1106)
		::flixel::tweens::misc::ColorTween tmp3 = Tween;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1106)
		return tmp3;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTweenManager_obj,add_flixel_tweens_misc_ColorTween,return )

::flixel::tweens::misc::AngleTween FlxTweenManager_obj::add_flixel_tweens_misc_AngleTween( ::flixel::tweens::misc::AngleTween Tween,hx::Null< bool >  __o_Start){
bool Start = __o_Start.Default(false);
	HX_STACK_FRAME("flixel.tweens.FlxTweenManager","add_flixel_tweens_misc_AngleTween",0xb848364b,"flixel.tweens.FlxTweenManager.add_flixel_tweens_misc_AngleTween","flixel/tweens/FlxTween.hx",1097,0x5d58d691)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Tween,"Tween")
	HX_STACK_ARG(Start,"Start")
{
		HX_STACK_LINE(1099)
		bool tmp = (Tween == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1099)
		if ((tmp)){
			HX_STACK_LINE(1100)
			return null();
		}
		HX_STACK_LINE(1102)
		::flixel::tweens::misc::AngleTween tmp1 = Tween;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1102)
		this->_tweens->push(tmp1);
		HX_STACK_LINE(1104)
		bool tmp2 = Start;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1104)
		if ((tmp2)){
			HX_STACK_LINE(1105)
			Tween->start();
		}
		HX_STACK_LINE(1106)
		::flixel::tweens::misc::AngleTween tmp3 = Tween;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1106)
		return tmp3;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTweenManager_obj,add_flixel_tweens_misc_AngleTween,return )

::flixel::tweens::misc::NumTween FlxTweenManager_obj::add_flixel_tweens_misc_NumTween( ::flixel::tweens::misc::NumTween Tween,hx::Null< bool >  __o_Start){
bool Start = __o_Start.Default(false);
	HX_STACK_FRAME("flixel.tweens.FlxTweenManager","add_flixel_tweens_misc_NumTween",0xa10a3838,"flixel.tweens.FlxTweenManager.add_flixel_tweens_misc_NumTween","flixel/tweens/FlxTween.hx",1097,0x5d58d691)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Tween,"Tween")
	HX_STACK_ARG(Start,"Start")
{
		HX_STACK_LINE(1099)
		bool tmp = (Tween == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1099)
		if ((tmp)){
			HX_STACK_LINE(1100)
			return null();
		}
		HX_STACK_LINE(1102)
		::flixel::tweens::misc::NumTween tmp1 = Tween;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1102)
		this->_tweens->push(tmp1);
		HX_STACK_LINE(1104)
		bool tmp2 = Start;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1104)
		if ((tmp2)){
			HX_STACK_LINE(1105)
			Tween->start();
		}
		HX_STACK_LINE(1106)
		::flixel::tweens::misc::NumTween tmp3 = Tween;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1106)
		return tmp3;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTweenManager_obj,add_flixel_tweens_misc_NumTween,return )

::flixel::tweens::misc::VarTween FlxTweenManager_obj::add_flixel_tweens_misc_VarTween( ::flixel::tweens::misc::VarTween Tween,hx::Null< bool >  __o_Start){
bool Start = __o_Start.Default(false);
	HX_STACK_FRAME("flixel.tweens.FlxTweenManager","add_flixel_tweens_misc_VarTween",0x2ab94ff7,"flixel.tweens.FlxTweenManager.add_flixel_tweens_misc_VarTween","flixel/tweens/FlxTween.hx",1097,0x5d58d691)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Tween,"Tween")
	HX_STACK_ARG(Start,"Start")
{
		HX_STACK_LINE(1099)
		bool tmp = (Tween == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1099)
		if ((tmp)){
			HX_STACK_LINE(1100)
			return null();
		}
		HX_STACK_LINE(1102)
		::flixel::tweens::misc::VarTween tmp1 = Tween;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1102)
		this->_tweens->push(tmp1);
		HX_STACK_LINE(1104)
		bool tmp2 = Start;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1104)
		if ((tmp2)){
			HX_STACK_LINE(1105)
			Tween->start();
		}
		HX_STACK_LINE(1106)
		::flixel::tweens::misc::VarTween tmp3 = Tween;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1106)
		return tmp3;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTweenManager_obj,add_flixel_tweens_misc_VarTween,return )

::flixel::tweens::FlxTween FlxTweenManager_obj::add_flixel_tweens_FlxTween( ::flixel::tweens::FlxTween Tween,hx::Null< bool >  __o_Start){
bool Start = __o_Start.Default(false);
	HX_STACK_FRAME("flixel.tweens.FlxTweenManager","add_flixel_tweens_FlxTween",0xdb4849d9,"flixel.tweens.FlxTweenManager.add_flixel_tweens_FlxTween","flixel/tweens/FlxTween.hx",1097,0x5d58d691)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Tween,"Tween")
	HX_STACK_ARG(Start,"Start")
{
		HX_STACK_LINE(1099)
		bool tmp = (Tween == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1099)
		if ((tmp)){
			HX_STACK_LINE(1100)
			return null();
		}
		HX_STACK_LINE(1102)
		::flixel::tweens::FlxTween tmp1 = Tween;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1102)
		this->_tweens->push(tmp1);
		HX_STACK_LINE(1104)
		bool tmp2 = Start;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1104)
		if ((tmp2)){
			HX_STACK_LINE(1105)
			Tween->start();
		}
		HX_STACK_LINE(1106)
		::flixel::tweens::FlxTween tmp3 = Tween;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1106)
		return tmp3;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTweenManager_obj,add_flixel_tweens_FlxTween,return )

::flixel::tweens::misc::VarTween FlxTweenManager_obj::tween( Dynamic Object,Dynamic Values,hx::Null< Float >  __o_Duration,Dynamic Options){
Float Duration = __o_Duration.Default(1);
	HX_STACK_FRAME("flixel.tweens.FlxTweenManager","tween",0x3e92553d,"flixel.tweens.FlxTweenManager.tween","flixel/tweens/FlxTween.hx",740,0x5d58d691)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Object,"Object")
	HX_STACK_ARG(Values,"Values")
	HX_STACK_ARG(Duration,"Duration")
	HX_STACK_ARG(Options,"Options")
{
		HX_STACK_LINE(741)
		::flixel::tweens::misc::VarTween tmp = ::flixel::tweens::misc::VarTween_obj::__new(Options,hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(741)
		::flixel::tweens::misc::VarTween tween = tmp;		HX_STACK_VAR(tween,"tween");
		HX_STACK_LINE(742)
		Dynamic tmp1 = Object;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(742)
		Dynamic tmp2 = Values;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(742)
		Float tmp3 = Duration;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(742)
		tween->tween(tmp1,tmp2,tmp3);
		HX_STACK_LINE(743)
		::flixel::tweens::misc::VarTween tmp4 = tween;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(743)
		::flixel::tweens::misc::VarTween tmp5 = this->add_flixel_tweens_misc_VarTween(tmp4,null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(743)
		return tmp5;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxTweenManager_obj,tween,return )

::flixel::tweens::misc::NumTween FlxTweenManager_obj::num( Float FromValue,Float ToValue,hx::Null< Float >  __o_Duration,Dynamic Options,Dynamic TweenFunction){
Float Duration = __o_Duration.Default(1);
	HX_STACK_FRAME("flixel.tweens.FlxTweenManager","num",0x3916d098,"flixel.tweens.FlxTweenManager.num","flixel/tweens/FlxTween.hx",775,0x5d58d691)
	HX_STACK_THIS(this)
	HX_STACK_ARG(FromValue,"FromValue")
	HX_STACK_ARG(ToValue,"ToValue")
	HX_STACK_ARG(Duration,"Duration")
	HX_STACK_ARG(Options,"Options")
	HX_STACK_ARG(TweenFunction,"TweenFunction")
{
		HX_STACK_LINE(776)
		::flixel::tweens::misc::NumTween tmp = ::flixel::tweens::misc::NumTween_obj::__new(Options,hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(776)
		::flixel::tweens::misc::NumTween tween = tmp;		HX_STACK_VAR(tween,"tween");
		HX_STACK_LINE(777)
		Float tmp1 = FromValue;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(777)
		Float tmp2 = ToValue;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(777)
		Float tmp3 = Duration;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(777)
		Dynamic tmp4 = TweenFunction;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(777)
		tween->tween(tmp1,tmp2,tmp3,tmp4);
		HX_STACK_LINE(778)
		::flixel::tweens::misc::NumTween tmp5 = tween;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(778)
		::flixel::tweens::misc::NumTween tmp6 = this->add_flixel_tweens_misc_NumTween(tmp5,null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(778)
		return tmp6;
	}
}


HX_DEFINE_DYNAMIC_FUNC5(FlxTweenManager_obj,num,return )

::flixel::tweens::misc::AngleTween FlxTweenManager_obj::angle( ::flixel::FlxSprite Sprite,Float FromAngle,Float ToAngle,hx::Null< Float >  __o_Duration,Dynamic Options){
Float Duration = __o_Duration.Default(1);
	HX_STACK_FRAME("flixel.tweens.FlxTweenManager","angle",0x4803eea5,"flixel.tweens.FlxTweenManager.angle","flixel/tweens/FlxTween.hx",804,0x5d58d691)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Sprite,"Sprite")
	HX_STACK_ARG(FromAngle,"FromAngle")
	HX_STACK_ARG(ToAngle,"ToAngle")
	HX_STACK_ARG(Duration,"Duration")
	HX_STACK_ARG(Options,"Options")
{
		HX_STACK_LINE(805)
		::flixel::tweens::misc::AngleTween tmp = ::flixel::tweens::misc::AngleTween_obj::__new(Options,hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(805)
		::flixel::tweens::misc::AngleTween tween = tmp;		HX_STACK_VAR(tween,"tween");
		HX_STACK_LINE(806)
		Float tmp1 = FromAngle;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(806)
		Float tmp2 = ToAngle;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(806)
		Float tmp3 = Duration;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(806)
		::flixel::FlxSprite tmp4 = Sprite;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(806)
		tween->tween(tmp1,tmp2,tmp3,tmp4);
		HX_STACK_LINE(807)
		::flixel::tweens::misc::AngleTween tmp5 = tween;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(807)
		::flixel::tweens::misc::AngleTween tmp6 = this->add_flixel_tweens_misc_AngleTween(tmp5,null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(807)
		return tmp6;
	}
}


HX_DEFINE_DYNAMIC_FUNC5(FlxTweenManager_obj,angle,return )

::flixel::tweens::misc::ColorTween FlxTweenManager_obj::color( ::flixel::FlxSprite Sprite,hx::Null< Float >  __o_Duration,int FromColor,int ToColor,Dynamic Options){
Float Duration = __o_Duration.Default(1);
	HX_STACK_FRAME("flixel.tweens.FlxTweenManager","color",0x6f7e1c35,"flixel.tweens.FlxTweenManager.color","flixel/tweens/FlxTween.hx",833,0x5d58d691)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Sprite,"Sprite")
	HX_STACK_ARG(Duration,"Duration")
	HX_STACK_ARG(FromColor,"FromColor")
	HX_STACK_ARG(ToColor,"ToColor")
	HX_STACK_ARG(Options,"Options")
{
		HX_STACK_LINE(834)
		::flixel::tweens::misc::ColorTween tmp = ::flixel::tweens::misc::ColorTween_obj::__new(Options,hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(834)
		::flixel::tweens::misc::ColorTween tween = tmp;		HX_STACK_VAR(tween,"tween");
		HX_STACK_LINE(835)
		Float tmp1 = Duration;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(835)
		int tmp2 = FromColor;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(835)
		int tmp3 = ToColor;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(835)
		::flixel::FlxSprite tmp4 = Sprite;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(835)
		tween->tween(tmp1,tmp2,tmp3,tmp4);
		HX_STACK_LINE(836)
		::flixel::tweens::misc::ColorTween tmp5 = tween;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(836)
		::flixel::tweens::misc::ColorTween tmp6 = this->add_flixel_tweens_misc_ColorTween(tmp5,null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(836)
		return tmp6;
	}
}


HX_DEFINE_DYNAMIC_FUNC5(FlxTweenManager_obj,color,return )

::flixel::tweens::motion::LinearMotion FlxTweenManager_obj::linearMotion( ::flixel::FlxObject Object,Float FromX,Float FromY,Float ToX,Float ToY,hx::Null< Float >  __o_DurationOrSpeed,hx::Null< bool >  __o_UseDuration,Dynamic Options){
Float DurationOrSpeed = __o_DurationOrSpeed.Default(1);
bool UseDuration = __o_UseDuration.Default(true);
	HX_STACK_FRAME("flixel.tweens.FlxTweenManager","linearMotion",0x3e017969,"flixel.tweens.FlxTweenManager.linearMotion","flixel/tweens/FlxTween.hx",865,0x5d58d691)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Object,"Object")
	HX_STACK_ARG(FromX,"FromX")
	HX_STACK_ARG(FromY,"FromY")
	HX_STACK_ARG(ToX,"ToX")
	HX_STACK_ARG(ToY,"ToY")
	HX_STACK_ARG(DurationOrSpeed,"DurationOrSpeed")
	HX_STACK_ARG(UseDuration,"UseDuration")
	HX_STACK_ARG(Options,"Options")
{
		HX_STACK_LINE(866)
		::flixel::tweens::motion::LinearMotion tmp = ::flixel::tweens::motion::LinearMotion_obj::__new(Options,hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(866)
		::flixel::tweens::motion::LinearMotion tween = tmp;		HX_STACK_VAR(tween,"tween");
		HX_STACK_LINE(867)
		::flixel::FlxObject tmp1 = Object;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(867)
		tween->setObject(tmp1);
		HX_STACK_LINE(868)
		Float tmp2 = FromX;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(868)
		Float tmp3 = FromY;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(868)
		Float tmp4 = ToX;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(868)
		Float tmp5 = ToY;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(868)
		Float tmp6 = DurationOrSpeed;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(868)
		bool tmp7 = UseDuration;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(868)
		tween->setMotion(tmp2,tmp3,tmp4,tmp5,tmp6,tmp7);
		HX_STACK_LINE(869)
		::flixel::tweens::motion::LinearMotion tmp8 = tween;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(869)
		::flixel::tweens::motion::LinearMotion tmp9 = this->add_flixel_tweens_motion_LinearMotion(tmp8,null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(869)
		return tmp9;
	}
}


HX_DEFINE_DYNAMIC_FUNC8(FlxTweenManager_obj,linearMotion,return )

::flixel::tweens::motion::QuadMotion FlxTweenManager_obj::quadMotion( ::flixel::FlxObject Object,Float FromX,Float FromY,Float ControlX,Float ControlY,Float ToX,Float ToY,hx::Null< Float >  __o_DurationOrSpeed,hx::Null< bool >  __o_UseDuration,Dynamic Options){
Float DurationOrSpeed = __o_DurationOrSpeed.Default(1);
bool UseDuration = __o_UseDuration.Default(true);
	HX_STACK_FRAME("flixel.tweens.FlxTweenManager","quadMotion",0x792d5e4b,"flixel.tweens.FlxTweenManager.quadMotion","flixel/tweens/FlxTween.hx",900,0x5d58d691)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Object,"Object")
	HX_STACK_ARG(FromX,"FromX")
	HX_STACK_ARG(FromY,"FromY")
	HX_STACK_ARG(ControlX,"ControlX")
	HX_STACK_ARG(ControlY,"ControlY")
	HX_STACK_ARG(ToX,"ToX")
	HX_STACK_ARG(ToY,"ToY")
	HX_STACK_ARG(DurationOrSpeed,"DurationOrSpeed")
	HX_STACK_ARG(UseDuration,"UseDuration")
	HX_STACK_ARG(Options,"Options")
{
		HX_STACK_LINE(901)
		::flixel::tweens::motion::QuadMotion tmp = ::flixel::tweens::motion::QuadMotion_obj::__new(Options,hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(901)
		::flixel::tweens::motion::QuadMotion tween = tmp;		HX_STACK_VAR(tween,"tween");
		HX_STACK_LINE(902)
		::flixel::FlxObject tmp1 = Object;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(902)
		tween->setObject(tmp1);
		HX_STACK_LINE(903)
		Float tmp2 = FromX;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(903)
		Float tmp3 = FromY;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(903)
		Float tmp4 = ControlX;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(903)
		Float tmp5 = ControlY;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(903)
		Float tmp6 = ToX;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(903)
		Float tmp7 = ToY;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(903)
		Float tmp8 = DurationOrSpeed;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(903)
		bool tmp9 = UseDuration;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(903)
		tween->setMotion(tmp2,tmp3,tmp4,tmp5,tmp6,tmp7,tmp8,tmp9);
		HX_STACK_LINE(904)
		::flixel::tweens::motion::QuadMotion tmp10 = tween;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(904)
		::flixel::tweens::motion::QuadMotion tmp11 = this->add_flixel_tweens_motion_QuadMotion(tmp10,null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(904)
		return tmp11;
	}
}


HX_DEFINE_DYNAMIC_FUNC10(FlxTweenManager_obj,quadMotion,return )

::flixel::tweens::motion::CubicMotion FlxTweenManager_obj::cubicMotion( ::flixel::FlxObject Object,Float FromX,Float FromY,Float aX,Float aY,Float bX,Float bY,Float ToX,Float ToY,hx::Null< Float >  __o_Duration,Dynamic Options){
Float Duration = __o_Duration.Default(1);
	HX_STACK_FRAME("flixel.tweens.FlxTweenManager","cubicMotion",0x943ebf72,"flixel.tweens.FlxTweenManager.cubicMotion","flixel/tweens/FlxTween.hx",936,0x5d58d691)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Object,"Object")
	HX_STACK_ARG(FromX,"FromX")
	HX_STACK_ARG(FromY,"FromY")
	HX_STACK_ARG(aX,"aX")
	HX_STACK_ARG(aY,"aY")
	HX_STACK_ARG(bX,"bX")
	HX_STACK_ARG(bY,"bY")
	HX_STACK_ARG(ToX,"ToX")
	HX_STACK_ARG(ToY,"ToY")
	HX_STACK_ARG(Duration,"Duration")
	HX_STACK_ARG(Options,"Options")
{
		HX_STACK_LINE(937)
		::flixel::tweens::motion::CubicMotion tmp = ::flixel::tweens::motion::CubicMotion_obj::__new(Options,hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(937)
		::flixel::tweens::motion::CubicMotion tween = tmp;		HX_STACK_VAR(tween,"tween");
		HX_STACK_LINE(938)
		::flixel::FlxObject tmp1 = Object;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(938)
		tween->setObject(tmp1);
		HX_STACK_LINE(939)
		Float tmp2 = FromX;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(939)
		Float tmp3 = FromY;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(939)
		Float tmp4 = aX;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(939)
		Float tmp5 = aY;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(939)
		Float tmp6 = bX;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(939)
		Float tmp7 = bY;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(939)
		Float tmp8 = ToX;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(939)
		Float tmp9 = ToY;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(939)
		Float tmp10 = Duration;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(939)
		tween->setMotion(tmp2,tmp3,tmp4,tmp5,tmp6,tmp7,tmp8,tmp9,tmp10);
		HX_STACK_LINE(940)
		::flixel::tweens::motion::CubicMotion tmp11 = tween;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(940)
		::flixel::tweens::motion::CubicMotion tmp12 = this->add_flixel_tweens_motion_CubicMotion(tmp11,null());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(940)
		return tmp12;
	}
}


HX_DEFINE_DYNAMIC_FUNC11(FlxTweenManager_obj,cubicMotion,return )

::flixel::tweens::motion::CircularMotion FlxTweenManager_obj::circularMotion( ::flixel::FlxObject Object,Float CenterX,Float CenterY,Float Radius,Float Angle,bool Clockwise,hx::Null< Float >  __o_DurationOrSpeed,hx::Null< bool >  __o_UseDuration,Dynamic Options){
Float DurationOrSpeed = __o_DurationOrSpeed.Default(1);
bool UseDuration = __o_UseDuration.Default(true);
	HX_STACK_FRAME("flixel.tweens.FlxTweenManager","circularMotion",0xf22b9ce3,"flixel.tweens.FlxTweenManager.circularMotion","flixel/tweens/FlxTween.hx",970,0x5d58d691)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Object,"Object")
	HX_STACK_ARG(CenterX,"CenterX")
	HX_STACK_ARG(CenterY,"CenterY")
	HX_STACK_ARG(Radius,"Radius")
	HX_STACK_ARG(Angle,"Angle")
	HX_STACK_ARG(Clockwise,"Clockwise")
	HX_STACK_ARG(DurationOrSpeed,"DurationOrSpeed")
	HX_STACK_ARG(UseDuration,"UseDuration")
	HX_STACK_ARG(Options,"Options")
{
		HX_STACK_LINE(971)
		::flixel::tweens::motion::CircularMotion tmp = ::flixel::tweens::motion::CircularMotion_obj::__new(Options,hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(971)
		::flixel::tweens::motion::CircularMotion tween = tmp;		HX_STACK_VAR(tween,"tween");
		HX_STACK_LINE(972)
		::flixel::FlxObject tmp1 = Object;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(972)
		tween->setObject(tmp1);
		HX_STACK_LINE(973)
		Float tmp2 = CenterX;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(973)
		Float tmp3 = CenterY;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(973)
		Float tmp4 = Radius;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(973)
		Float tmp5 = Angle;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(973)
		bool tmp6 = Clockwise;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(973)
		Float tmp7 = DurationOrSpeed;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(973)
		bool tmp8 = UseDuration;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(973)
		tween->setMotion(tmp2,tmp3,tmp4,tmp5,tmp6,tmp7,tmp8);
		HX_STACK_LINE(974)
		::flixel::tweens::motion::CircularMotion tmp9 = tween;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(974)
		::flixel::tweens::motion::CircularMotion tmp10 = this->add_flixel_tweens_motion_CircularMotion(tmp9,null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(974)
		return tmp10;
	}
}


HX_DEFINE_DYNAMIC_FUNC9(FlxTweenManager_obj,circularMotion,return )

::flixel::tweens::motion::LinearPath FlxTweenManager_obj::linearPath( ::flixel::FlxObject Object,Array< ::Dynamic > Points,hx::Null< Float >  __o_DurationOrSpeed,hx::Null< bool >  __o_UseDuration,Dynamic Options){
Float DurationOrSpeed = __o_DurationOrSpeed.Default(1);
bool UseDuration = __o_UseDuration.Default(true);
	HX_STACK_FRAME("flixel.tweens.FlxTweenManager","linearPath",0x87129618,"flixel.tweens.FlxTweenManager.linearPath","flixel/tweens/FlxTween.hx",999,0x5d58d691)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Object,"Object")
	HX_STACK_ARG(Points,"Points")
	HX_STACK_ARG(DurationOrSpeed,"DurationOrSpeed")
	HX_STACK_ARG(UseDuration,"UseDuration")
	HX_STACK_ARG(Options,"Options")
{
		HX_STACK_LINE(1000)
		::flixel::tweens::motion::LinearPath tmp = ::flixel::tweens::motion::LinearPath_obj::__new(Options,hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1000)
		::flixel::tweens::motion::LinearPath tween = tmp;		HX_STACK_VAR(tween,"tween");
		HX_STACK_LINE(1002)
		bool tmp1 = (Points != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1002)
		if ((tmp1)){
			HX_STACK_LINE(1004)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1004)
			while((true)){
				HX_STACK_LINE(1004)
				bool tmp2 = (_g < Points->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1004)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1004)
				if ((tmp3)){
					HX_STACK_LINE(1004)
					break;
				}
				HX_STACK_LINE(1004)
				::flixel::math::FlxPoint tmp4 = Points->__get(_g).StaticCast< ::flixel::math::FlxPoint >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1004)
				::flixel::math::FlxPoint point = tmp4;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(1004)
				++(_g);
				HX_STACK_LINE(1006)
				Float tmp5 = point->x;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1006)
				Float tmp6 = point->y;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1006)
				tween->addPoint(tmp5,tmp6);
			}
		}
		HX_STACK_LINE(1010)
		::flixel::FlxObject tmp2 = Object;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1010)
		tween->setObject(tmp2);
		HX_STACK_LINE(1011)
		Float tmp3 = DurationOrSpeed;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1011)
		bool tmp4 = UseDuration;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1011)
		tween->setMotion(tmp3,tmp4);
		HX_STACK_LINE(1012)
		::flixel::tweens::motion::LinearPath tmp5 = tween;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1012)
		::flixel::tweens::motion::LinearPath tmp6 = this->add_flixel_tweens_motion_LinearPath(tmp5,null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1012)
		return tmp6;
	}
}


HX_DEFINE_DYNAMIC_FUNC5(FlxTweenManager_obj,linearPath,return )

::flixel::tweens::motion::QuadPath FlxTweenManager_obj::quadPath( ::flixel::FlxObject Object,Array< ::Dynamic > Points,hx::Null< Float >  __o_DurationOrSpeed,hx::Null< bool >  __o_UseDuration,Dynamic Options){
Float DurationOrSpeed = __o_DurationOrSpeed.Default(1);
bool UseDuration = __o_UseDuration.Default(true);
	HX_STACK_FRAME("flixel.tweens.FlxTweenManager","quadPath",0xc1021e7a,"flixel.tweens.FlxTweenManager.quadPath","flixel/tweens/FlxTween.hx",1037,0x5d58d691)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Object,"Object")
	HX_STACK_ARG(Points,"Points")
	HX_STACK_ARG(DurationOrSpeed,"DurationOrSpeed")
	HX_STACK_ARG(UseDuration,"UseDuration")
	HX_STACK_ARG(Options,"Options")
{
		HX_STACK_LINE(1038)
		::flixel::tweens::motion::QuadPath tmp = ::flixel::tweens::motion::QuadPath_obj::__new(Options,hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1038)
		::flixel::tweens::motion::QuadPath tween = tmp;		HX_STACK_VAR(tween,"tween");
		HX_STACK_LINE(1040)
		bool tmp1 = (Points != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1040)
		if ((tmp1)){
			HX_STACK_LINE(1042)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1042)
			while((true)){
				HX_STACK_LINE(1042)
				bool tmp2 = (_g < Points->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1042)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1042)
				if ((tmp3)){
					HX_STACK_LINE(1042)
					break;
				}
				HX_STACK_LINE(1042)
				::flixel::math::FlxPoint tmp4 = Points->__get(_g).StaticCast< ::flixel::math::FlxPoint >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1042)
				::flixel::math::FlxPoint point = tmp4;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(1042)
				++(_g);
				HX_STACK_LINE(1044)
				Float tmp5 = point->x;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1044)
				Float tmp6 = point->y;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1044)
				tween->addPoint(tmp5,tmp6);
			}
		}
		HX_STACK_LINE(1048)
		::flixel::FlxObject tmp2 = Object;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1048)
		tween->setObject(tmp2);
		HX_STACK_LINE(1049)
		Float tmp3 = DurationOrSpeed;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1049)
		bool tmp4 = UseDuration;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1049)
		tween->setMotion(tmp3,tmp4);
		HX_STACK_LINE(1050)
		::flixel::tweens::motion::QuadPath tmp5 = tween;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1050)
		::flixel::tweens::motion::QuadPath tmp6 = this->add_flixel_tweens_motion_QuadPath(tmp5,null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1050)
		return tmp6;
	}
}


HX_DEFINE_DYNAMIC_FUNC5(FlxTweenManager_obj,quadPath,return )

Void FlxTweenManager_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.tweens.FlxTweenManager","destroy",0x1585b04c,"flixel.tweens.FlxTweenManager.destroy","flixel/tweens/FlxTween.hx",1054,0x5d58d691)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1055)
		this->super::destroy();
		HX_STACK_LINE(1056)
		{
			HX_STACK_LINE(1056)
			::flixel::_system::frontEnds::SignalFrontEnd tmp = ::flixel::FlxG_obj::signals;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1056)
			Dynamic tmp1 = this->clear_dyn();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1056)
			tmp->__Field(HX_HCSTRING("stateSwitched","\x84","\x32","\x02","\x37"), hx::paccDynamic )->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(tmp1);
		}
	}
return null();
}


Void FlxTweenManager_obj::update( Float elapsed){
{
		HX_STACK_FRAME("flixel.tweens.FlxTweenManager","update",0xdf5952f7,"flixel.tweens.FlxTweenManager.update","flixel/tweens/FlxTween.hx",1060,0x5d58d691)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(1062)
		Array< ::Dynamic > finishedTweens = null();		HX_STACK_VAR(finishedTweens,"finishedTweens");
		HX_STACK_LINE(1064)
		{
			HX_STACK_LINE(1064)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1064)
			Array< ::Dynamic > _g1 = this->_tweens;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1064)
			while((true)){
				HX_STACK_LINE(1064)
				bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(1064)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(1064)
				if ((tmp1)){
					HX_STACK_LINE(1064)
					break;
				}
				HX_STACK_LINE(1064)
				::flixel::tweens::FlxTween tmp2 = _g1->__get(_g).StaticCast< ::flixel::tweens::FlxTween >();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1064)
				::flixel::tweens::FlxTween tween = tmp2;		HX_STACK_VAR(tween,"tween");
				HX_STACK_LINE(1064)
				++(_g);
				HX_STACK_LINE(1066)
				bool tmp3 = tween->active;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1066)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1066)
				if ((tmp4)){
					HX_STACK_LINE(1067)
					continue;
				}
				HX_STACK_LINE(1069)
				Float tmp5 = elapsed;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1069)
				tween->update(tmp5);
				HX_STACK_LINE(1070)
				bool tmp6 = tween->finished;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1070)
				if ((tmp6)){
					HX_STACK_LINE(1072)
					bool tmp7 = (finishedTweens == null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1072)
					if ((tmp7)){
						HX_STACK_LINE(1073)
						finishedTweens = Array_obj< ::Dynamic >::__new();
					}
					HX_STACK_LINE(1074)
					::flixel::tweens::FlxTween tmp8 = tween;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1074)
					finishedTweens->push(tmp8);
				}
			}
		}
		HX_STACK_LINE(1078)
		bool tmp = (finishedTweens != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1078)
		if ((tmp)){
			HX_STACK_LINE(1080)
			while((true)){
				HX_STACK_LINE(1080)
				bool tmp1 = (finishedTweens->length > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(1080)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1080)
				if ((tmp2)){
					HX_STACK_LINE(1080)
					break;
				}
				HX_STACK_LINE(1082)
				::flixel::tweens::FlxTween tmp3 = finishedTweens->shift().StaticCast< ::flixel::tweens::FlxTween >();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1082)
				tmp3->finish();
			}
		}
	}
return null();
}


::flixel::tweens::FlxTween FlxTweenManager_obj::remove( ::flixel::tweens::FlxTween Tween,hx::Null< bool >  __o_Destroy){
bool Destroy = __o_Destroy.Default(true);
	HX_STACK_FRAME("flixel.tweens.FlxTweenManager","remove",0x5cdc6932,"flixel.tweens.FlxTweenManager.remove","flixel/tweens/FlxTween.hx",1118,0x5d58d691)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Tween,"Tween")
	HX_STACK_ARG(Destroy,"Destroy")
{
		HX_STACK_LINE(1119)
		bool tmp = (Tween == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1119)
		if ((tmp)){
			HX_STACK_LINE(1120)
			return null();
		}
		HX_STACK_LINE(1122)
		Tween->set_active(false);
		HX_STACK_LINE(1124)
		bool tmp1 = Destroy;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1124)
		if ((tmp1)){
			HX_STACK_LINE(1125)
			Tween->destroy();
		}
		HX_STACK_LINE(1127)
		{
			HX_STACK_LINE(1127)
			Array< ::Dynamic > array = this->_tweens;		HX_STACK_VAR(array,"array");
			HX_STACK_LINE(1127)
			::flixel::tweens::FlxTween tmp2 = Tween;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1127)
			int tmp3 = array->indexOf(tmp2,null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1127)
			int index = tmp3;		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(1127)
			bool tmp4 = (index != (int)-1);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1127)
			if ((tmp4)){
				HX_STACK_LINE(1127)
				int tmp5 = (array->length - (int)1);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1127)
				::flixel::tweens::FlxTween tmp6 = array->__get(tmp5).StaticCast< ::flixel::tweens::FlxTween >();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1127)
				array[index] = tmp6;
				HX_STACK_LINE(1127)
				array->pop().StaticCast< ::flixel::tweens::FlxTween >();
				HX_STACK_LINE(1127)
				array;
			}
			else{
				HX_STACK_LINE(1127)
				array;
			}
		}
		HX_STACK_LINE(1129)
		::flixel::tweens::FlxTween tmp2 = Tween;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1129)
		return tmp2;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTweenManager_obj,remove,return )

Void FlxTweenManager_obj::clear( ){
{
		HX_STACK_FRAME("flixel.tweens.FlxTweenManager","clear",0x6d7d1c5f,"flixel.tweens.FlxTweenManager.clear","flixel/tweens/FlxTween.hx",1137,0x5d58d691)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1137)
		while((true)){
			HX_STACK_LINE(1137)
			int tmp = this->_tweens->length;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1137)
			bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1137)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1137)
			if ((tmp2)){
				HX_STACK_LINE(1137)
				break;
			}
			HX_STACK_LINE(1138)
			::flixel::tweens::FlxTween tmp3 = this->_tweens->__get((int)0).StaticCast< ::flixel::tweens::FlxTween >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1138)
			this->remove(tmp3,null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTweenManager_obj,clear,(void))

Void FlxTweenManager_obj::completeAll( ){
{
		HX_STACK_FRAME("flixel.tweens.FlxTweenManager","completeAll",0x990abe3a,"flixel.tweens.FlxTweenManager.completeAll","flixel/tweens/FlxTween.hx",1156,0x5d58d691)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1156)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1156)
		Array< ::Dynamic > _g1 = this->_tweens;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1156)
		while((true)){
			HX_STACK_LINE(1156)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1156)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1156)
			if ((tmp1)){
				HX_STACK_LINE(1156)
				break;
			}
			HX_STACK_LINE(1156)
			::flixel::tweens::FlxTween tmp2 = _g1->__get(_g).StaticCast< ::flixel::tweens::FlxTween >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1156)
			::flixel::tweens::FlxTween tween = tmp2;		HX_STACK_VAR(tween,"tween");
			HX_STACK_LINE(1156)
			++(_g);
			HX_STACK_LINE(1157)
			int tmp3 = (int(tween->type) & int((int)2));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1157)
			bool tmp4 = (tmp3 == (int)0);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1157)
			bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1157)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1157)
			if ((tmp5)){
				HX_STACK_LINE(1157)
				int tmp7 = (int(tween->type) & int((int)4));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1157)
				int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1157)
				int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1157)
				tmp6 = (tmp9 == (int)0);
			}
			else{
				HX_STACK_LINE(1157)
				tmp6 = false;
			}
			HX_STACK_LINE(1157)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1157)
			if ((tmp6)){
				HX_STACK_LINE(1157)
				tmp7 = tween->active;
			}
			else{
				HX_STACK_LINE(1157)
				tmp7 = false;
			}
			HX_STACK_LINE(1157)
			if ((tmp7)){
				HX_STACK_LINE(1158)
				tween->update(((Float)1.79e+308));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTweenManager_obj,completeAll,(void))

Void FlxTweenManager_obj::forEach( Dynamic Function){
{
		HX_STACK_FRAME("flixel.tweens.FlxTweenManager","forEach",0xb5bdacfc,"flixel.tweens.FlxTweenManager.forEach","flixel/tweens/FlxTween.hx",1169,0x5d58d691)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Function,"Function")
		HX_STACK_LINE(1169)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1169)
		Array< ::Dynamic > _g1 = this->_tweens;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1169)
		while((true)){
			HX_STACK_LINE(1169)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1169)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1169)
			if ((tmp1)){
				HX_STACK_LINE(1169)
				break;
			}
			HX_STACK_LINE(1169)
			::flixel::tweens::FlxTween tmp2 = _g1->__get(_g).StaticCast< ::flixel::tweens::FlxTween >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1169)
			::flixel::tweens::FlxTween tween = tmp2;		HX_STACK_VAR(tween,"tween");
			HX_STACK_LINE(1169)
			++(_g);
			HX_STACK_LINE(1170)
			::flixel::tweens::FlxTween tmp3 = tween;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1170)
			Function(tmp3).Cast< Void >();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTweenManager_obj,forEach,(void))


FlxTweenManager_obj::FlxTweenManager_obj()
{
}

void FlxTweenManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTweenManager);
	HX_MARK_MEMBER_NAME(_tweens,"_tweens");
	::flixel::FlxBasic_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxTweenManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_tweens,"_tweens");
	::flixel::FlxBasic_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxTweenManager_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"num") ) { return num_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"tween") ) { return tween_dyn(); }
		if (HX_FIELD_EQ(inName,"angle") ) { return angle_dyn(); }
		if (HX_FIELD_EQ(inName,"color") ) { return color_dyn(); }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_tweens") ) { return _tweens; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"forEach") ) { return forEach_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"quadPath") ) { return quadPath_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"quadMotion") ) { return quadMotion_dyn(); }
		if (HX_FIELD_EQ(inName,"linearPath") ) { return linearPath_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"cubicMotion") ) { return cubicMotion_dyn(); }
		if (HX_FIELD_EQ(inName,"completeAll") ) { return completeAll_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"linearMotion") ) { return linearMotion_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"circularMotion") ) { return circularMotion_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"add_flixel_tweens_FlxTween") ) { return add_flixel_tweens_FlxTween_dyn(); }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"add_flixel_tweens_misc_NumTween") ) { return add_flixel_tweens_misc_NumTween_dyn(); }
		if (HX_FIELD_EQ(inName,"add_flixel_tweens_misc_VarTween") ) { return add_flixel_tweens_misc_VarTween_dyn(); }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"add_flixel_tweens_motion_QuadPath") ) { return add_flixel_tweens_motion_QuadPath_dyn(); }
		if (HX_FIELD_EQ(inName,"add_flixel_tweens_misc_ColorTween") ) { return add_flixel_tweens_misc_ColorTween_dyn(); }
		if (HX_FIELD_EQ(inName,"add_flixel_tweens_misc_AngleTween") ) { return add_flixel_tweens_misc_AngleTween_dyn(); }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"add_flixel_tweens_motion_LinearPath") ) { return add_flixel_tweens_motion_LinearPath_dyn(); }
		if (HX_FIELD_EQ(inName,"add_flixel_tweens_motion_QuadMotion") ) { return add_flixel_tweens_motion_QuadMotion_dyn(); }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"add_flixel_tweens_motion_CubicMotion") ) { return add_flixel_tweens_motion_CubicMotion_dyn(); }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"add_flixel_tweens_motion_LinearMotion") ) { return add_flixel_tweens_motion_LinearMotion_dyn(); }
		break;
	case 39:
		if (HX_FIELD_EQ(inName,"add_flixel_tweens_motion_CircularMotion") ) { return add_flixel_tweens_motion_CircularMotion_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxTweenManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_tweens") ) { _tweens=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTweenManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_tweens","\x47","\x85","\x9b","\x97"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxTweenManager_obj,_tweens),HX_HCSTRING("_tweens","\x47","\x85","\x9b","\x97")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("add_flixel_tweens_motion_QuadPath","\xa3","\xdd","\xde","\xe6"),
	HX_HCSTRING("add_flixel_tweens_motion_LinearPath","\x81","\x31","\xfc","\x6c"),
	HX_HCSTRING("add_flixel_tweens_motion_CircularMotion","\xcc","\xa0","\x91","\x11"),
	HX_HCSTRING("add_flixel_tweens_motion_CubicMotion","\xe9","\x1f","\xbd","\xda"),
	HX_HCSTRING("add_flixel_tweens_motion_QuadMotion","\xb4","\xf9","\x16","\x5f"),
	HX_HCSTRING("add_flixel_tweens_motion_LinearMotion","\x12","\x81","\x17","\xa6"),
	HX_HCSTRING("add_flixel_tweens_misc_ColorTween","\xe9","\xfc","\x82","\x19"),
	HX_HCSTRING("add_flixel_tweens_misc_AngleTween","\x79","\x54","\x9c","\xf8"),
	HX_HCSTRING("add_flixel_tweens_misc_NumTween","\xe6","\xce","\x88","\x53"),
	HX_HCSTRING("add_flixel_tweens_misc_VarTween","\xa5","\xe6","\x37","\xdd"),
	HX_HCSTRING("add_flixel_tweens_FlxTween","\xeb","\x31","\x6d","\x84"),
	HX_HCSTRING("_tweens","\x47","\x85","\x9b","\x97"),
	HX_HCSTRING("tween","\x6b","\xaa","\x70","\x19"),
	HX_HCSTRING("num","\x46","\xde","\x53","\x00"),
	HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22"),
	HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"),
	HX_HCSTRING("linearMotion","\xfb","\x45","\xd8","\xa1"),
	HX_HCSTRING("quadMotion","\x5d","\x82","\xa5","\x33"),
	HX_HCSTRING("cubicMotion","\x20","\x2b","\xe6","\x02"),
	HX_HCSTRING("circularMotion","\xf5","\x31","\xbc","\x12"),
	HX_HCSTRING("linearPath","\x2a","\xba","\x8a","\x41"),
	HX_HCSTRING("quadPath","\x0c","\xba","\x6e","\xd2"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("completeAll","\xe8","\x29","\xb2","\x07"),
	HX_HCSTRING("forEach","\xaa","\x29","\xbe","\xc4"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTweenManager_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTweenManager_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxTweenManager_obj::__mClass;

void FlxTweenManager_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.tweens.FlxTweenManager","\xc0","\x41","\x37","\x9a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxTweenManager_obj >;
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
} // end namespace tweens
