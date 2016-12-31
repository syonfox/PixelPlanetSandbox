#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
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
#ifndef INCLUDED_flixel_math_FlxAngle
#include <flixel/math/FlxAngle.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxVelocity
#include <flixel/math/FlxVelocity.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
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
namespace flixel{
namespace math{

Void FlxVelocity_obj::__construct()
{
	return null();
}

//FlxVelocity_obj::~FlxVelocity_obj() { }

Dynamic FlxVelocity_obj::__CreateEmpty() { return  new FlxVelocity_obj; }
hx::ObjectPtr< FlxVelocity_obj > FlxVelocity_obj::__new()
{  hx::ObjectPtr< FlxVelocity_obj > _result_ = new FlxVelocity_obj();
	_result_->__construct();
	return _result_;}

Dynamic FlxVelocity_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxVelocity_obj > _result_ = new FlxVelocity_obj();
	_result_->__construct();
	return _result_;}

Void FlxVelocity_obj::moveTowardsObject( ::flixel::FlxSprite Source,::flixel::FlxSprite Dest,hx::Null< Float >  __o_Speed,hx::Null< int >  __o_MaxTime){
Float Speed = __o_Speed.Default(60);
int MaxTime = __o_MaxTime.Default(0);
	HX_STACK_FRAME("flixel.math.FlxVelocity","moveTowardsObject",0xaf722b77,"flixel.math.FlxVelocity.moveTowardsObject","flixel/math/FlxVelocity.hx",24,0xbea30ec3)
	HX_STACK_ARG(Source,"Source")
	HX_STACK_ARG(Dest,"Dest")
	HX_STACK_ARG(Speed,"Speed")
	HX_STACK_ARG(MaxTime,"MaxTime")
{
		HX_STACK_LINE(25)
		Float tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(25)
		{
			HX_STACK_LINE(25)
			bool AsDegrees = false;		HX_STACK_VAR(AsDegrees,"AsDegrees");
			HX_STACK_LINE(25)
			Float tmp1 = Dest->x;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(25)
			Float tmp2 = Dest->origin->x;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(25)
			Float tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(25)
			Float tmp4 = Source->x;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(25)
			Float tmp5 = Source->origin->x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(25)
			Float tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(25)
			Float tmp7 = (tmp3 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(25)
			Float dx = tmp7;		HX_STACK_VAR(dx,"dx");
			HX_STACK_LINE(25)
			Float tmp8 = Dest->y;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(25)
			Float tmp9 = Dest->origin->y;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(25)
			Float tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(25)
			Float tmp11 = Source->y;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(25)
			Float tmp12 = Source->origin->y;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(25)
			Float tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(25)
			Float tmp14 = (tmp10 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(25)
			Float dy = tmp14;		HX_STACK_VAR(dy,"dy");
			HX_STACK_LINE(25)
			bool tmp15 = AsDegrees;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(25)
			if ((tmp15)){
				HX_STACK_LINE(25)
				Float tmp16 = dy;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(25)
				Float tmp17 = dx;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(25)
				Float tmp18 = ::Math_obj::atan2(tmp16,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(25)
				Float radians = tmp18;		HX_STACK_VAR(radians,"radians");
				HX_STACK_LINE(25)
				Float tmp19 = radians;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(25)
				Float tmp20 = ::Math_obj::PI;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(25)
				Float tmp21 = (Float((int)180) / Float(tmp20));		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(25)
				tmp = (tmp19 * tmp21);
			}
			else{
				HX_STACK_LINE(25)
				Float tmp16 = dy;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(25)
				Float tmp17 = dx;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(25)
				tmp = ::Math_obj::atan2(tmp16,tmp17);
			}
		}
		HX_STACK_LINE(25)
		Float a = tmp;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(27)
		bool tmp1 = (MaxTime > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(27)
		if ((tmp1)){
			HX_STACK_LINE(29)
			int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(29)
			{
				HX_STACK_LINE(29)
				Float tmp3 = Source->x;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(29)
				Float tmp4 = Source->origin->x;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(29)
				Float tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(29)
				Float tmp6 = Dest->x;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(29)
				Float tmp7 = Dest->origin->x;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(29)
				Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(29)
				Float tmp9 = (tmp5 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(29)
				Float dx = tmp9;		HX_STACK_VAR(dx,"dx");
				HX_STACK_LINE(29)
				Float tmp10 = Source->y;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(29)
				Float tmp11 = Source->origin->y;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(29)
				Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(29)
				Float tmp13 = Dest->y;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(29)
				Float tmp14 = Dest->origin->y;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(29)
				Float tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(29)
				Float tmp16 = (tmp12 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(29)
				Float dy = tmp16;		HX_STACK_VAR(dy,"dy");
				HX_STACK_LINE(29)
				Float tmp17 = (dx * dx);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(29)
				Float tmp18 = (dy * dy);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(29)
				Float tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(29)
				Float tmp20 = ::Math_obj::sqrt(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(29)
				tmp2 = ::Std_obj::_int(tmp20);
			}
			HX_STACK_LINE(29)
			int d = tmp2;		HX_STACK_VAR(d,"d");
			HX_STACK_LINE(32)
			int tmp3 = d;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(32)
			Float tmp4 = (Float(MaxTime) / Float((int)1000));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(32)
			Float tmp5 = (Float(tmp3) / Float(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(32)
			int tmp6 = ::Std_obj::_int(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(32)
			Speed = tmp6;
		}
		HX_STACK_LINE(35)
		Float tmp2 = a;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(35)
		Float tmp3 = ::Math_obj::cos(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(35)
		Float tmp4 = Speed;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(35)
		Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(35)
		Source->velocity->set_x(tmp5);
		HX_STACK_LINE(36)
		Float tmp6 = a;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(36)
		Float tmp7 = ::Math_obj::sin(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(36)
		Float tmp8 = Speed;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(36)
		Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(36)
		Source->velocity->set_y(tmp9);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxVelocity_obj,moveTowardsObject,(void))

Void FlxVelocity_obj::accelerateTowardsObject( ::flixel::FlxSprite Source,::flixel::FlxSprite Dest,Float Acceleration,Float MaxSpeed){
{
		HX_STACK_FRAME("flixel.math.FlxVelocity","accelerateTowardsObject",0x1ebf81eb,"flixel.math.FlxVelocity.accelerateTowardsObject","flixel/math/FlxVelocity.hx",50,0xbea30ec3)
		HX_STACK_ARG(Source,"Source")
		HX_STACK_ARG(Dest,"Dest")
		HX_STACK_ARG(Acceleration,"Acceleration")
		HX_STACK_ARG(MaxSpeed,"MaxSpeed")
		HX_STACK_LINE(51)
		Float tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(51)
		{
			HX_STACK_LINE(51)
			bool AsDegrees = false;		HX_STACK_VAR(AsDegrees,"AsDegrees");
			HX_STACK_LINE(51)
			Float tmp1 = Dest->x;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(51)
			Float tmp2 = Dest->origin->x;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(51)
			Float tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(51)
			Float tmp4 = Source->x;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(51)
			Float tmp5 = Source->origin->x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(51)
			Float tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(51)
			Float tmp7 = (tmp3 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(51)
			Float dx = tmp7;		HX_STACK_VAR(dx,"dx");
			HX_STACK_LINE(51)
			Float tmp8 = Dest->y;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(51)
			Float tmp9 = Dest->origin->y;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(51)
			Float tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(51)
			Float tmp11 = Source->y;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(51)
			Float tmp12 = Source->origin->y;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(51)
			Float tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(51)
			Float tmp14 = (tmp10 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(51)
			Float dy = tmp14;		HX_STACK_VAR(dy,"dy");
			HX_STACK_LINE(51)
			bool tmp15 = AsDegrees;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(51)
			if ((tmp15)){
				HX_STACK_LINE(51)
				Float tmp16 = dy;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(51)
				Float tmp17 = dx;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(51)
				Float tmp18 = ::Math_obj::atan2(tmp16,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(51)
				Float radians = tmp18;		HX_STACK_VAR(radians,"radians");
				HX_STACK_LINE(51)
				Float tmp19 = radians;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(51)
				Float tmp20 = ::Math_obj::PI;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(51)
				Float tmp21 = (Float((int)180) / Float(tmp20));		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(51)
				tmp = (tmp19 * tmp21);
			}
			else{
				HX_STACK_LINE(51)
				Float tmp16 = dy;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(51)
				Float tmp17 = dx;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(51)
				tmp = ::Math_obj::atan2(tmp16,tmp17);
			}
		}
		HX_STACK_LINE(51)
		Float a = tmp;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(52)
		{
			HX_STACK_LINE(52)
			bool resetVelocity = true;		HX_STACK_VAR(resetVelocity,"resetVelocity");
			HX_STACK_LINE(52)
			Float tmp1 = a;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(52)
			Float tmp2 = ::Math_obj::sin(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(52)
			Float sinA = tmp2;		HX_STACK_VAR(sinA,"sinA");
			HX_STACK_LINE(52)
			Float tmp3 = a;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(52)
			Float tmp4 = ::Math_obj::cos(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(52)
			Float cosA = tmp4;		HX_STACK_VAR(cosA,"cosA");
			HX_STACK_LINE(52)
			bool tmp5 = resetVelocity;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(52)
			if ((tmp5)){
				HX_STACK_LINE(52)
				Source->velocity->set((int)0,(int)0);
			}
			HX_STACK_LINE(52)
			Float tmp6 = (cosA * Acceleration);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(52)
			Float tmp7 = (sinA * Acceleration);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(52)
			Source->acceleration->set(tmp6,tmp7);
			HX_STACK_LINE(52)
			Float tmp8 = (cosA * MaxSpeed);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(52)
			Float tmp9 = ::Math_obj::abs(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(52)
			Float tmp10 = (sinA * MaxSpeed);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(52)
			Float tmp11 = ::Math_obj::abs(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(52)
			Source->maxVelocity->set(tmp9,tmp11);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxVelocity_obj,accelerateTowardsObject,(void))

Void FlxVelocity_obj::moveTowardsMouse( ::flixel::FlxSprite Source,hx::Null< Float >  __o_Speed,hx::Null< int >  __o_MaxTime){
Float Speed = __o_Speed.Default(60);
int MaxTime = __o_MaxTime.Default(0);
	HX_STACK_FRAME("flixel.math.FlxVelocity","moveTowardsMouse",0x58da686d,"flixel.math.FlxVelocity.moveTowardsMouse","flixel/math/FlxVelocity.hx",67,0xbea30ec3)
	HX_STACK_ARG(Source,"Source")
	HX_STACK_ARG(Speed,"Speed")
	HX_STACK_ARG(MaxTime,"MaxTime")
{
		HX_STACK_LINE(68)
		::flixel::FlxSprite tmp = Source;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(68)
		Float tmp1 = ::flixel::math::FlxAngle_obj::angleBetweenMouse(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(68)
		Float a = tmp1;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(70)
		bool tmp2 = (MaxTime > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(70)
		if ((tmp2)){
			HX_STACK_LINE(72)
			int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(72)
			{
				HX_STACK_LINE(72)
				Float tmp4 = Source->x;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(72)
				Float tmp5 = Source->origin->x;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(72)
				Float tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(72)
				::flixel::input::mouse::FlxMouse tmp7 = ::flixel::FlxG_obj::mouse;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(72)
				int tmp8 = tmp7->screenX;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(72)
				Float tmp9 = (tmp6 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(72)
				Float dx = tmp9;		HX_STACK_VAR(dx,"dx");
				HX_STACK_LINE(72)
				Float tmp10 = Source->y;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(72)
				Float tmp11 = Source->origin->y;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(72)
				Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(72)
				::flixel::input::mouse::FlxMouse tmp13 = ::flixel::FlxG_obj::mouse;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(72)
				int tmp14 = tmp13->screenY;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(72)
				Float tmp15 = (tmp12 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(72)
				Float dy = tmp15;		HX_STACK_VAR(dy,"dy");
				HX_STACK_LINE(72)
				Float tmp16 = (dx * dx);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(72)
				Float tmp17 = (dy * dy);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(72)
				Float tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(72)
				Float tmp19 = ::Math_obj::sqrt(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(72)
				tmp3 = ::Std_obj::_int(tmp19);
			}
			HX_STACK_LINE(72)
			int d = tmp3;		HX_STACK_VAR(d,"d");
			HX_STACK_LINE(75)
			int tmp4 = d;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(75)
			Float tmp5 = (Float(MaxTime) / Float((int)1000));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(75)
			Float tmp6 = (Float(tmp4) / Float(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(75)
			int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(75)
			Speed = tmp7;
		}
		HX_STACK_LINE(78)
		Float tmp3 = a;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(78)
		Float tmp4 = ::Math_obj::cos(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(78)
		Float tmp5 = Speed;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(78)
		Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(78)
		Source->velocity->set_x(tmp6);
		HX_STACK_LINE(79)
		Float tmp7 = a;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(79)
		Float tmp8 = ::Math_obj::sin(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(79)
		Float tmp9 = Speed;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(79)
		Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(79)
		Source->velocity->set_y(tmp10);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxVelocity_obj,moveTowardsMouse,(void))

Void FlxVelocity_obj::accelerateTowardsMouse( ::flixel::FlxSprite Source,Float Acceleration,Float MaxSpeed){
{
		HX_STACK_FRAME("flixel.math.FlxVelocity","accelerateTowardsMouse",0x2dba9c79,"flixel.math.FlxVelocity.accelerateTowardsMouse","flixel/math/FlxVelocity.hx",122,0xbea30ec3)
		HX_STACK_ARG(Source,"Source")
		HX_STACK_ARG(Acceleration,"Acceleration")
		HX_STACK_ARG(MaxSpeed,"MaxSpeed")
		HX_STACK_LINE(123)
		::flixel::FlxSprite tmp = Source;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(123)
		Float tmp1 = ::flixel::math::FlxAngle_obj::angleBetweenMouse(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(123)
		Float a = tmp1;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(125)
		{
			HX_STACK_LINE(125)
			bool resetVelocity = true;		HX_STACK_VAR(resetVelocity,"resetVelocity");
			HX_STACK_LINE(125)
			Float tmp2 = a;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(125)
			Float tmp3 = ::Math_obj::sin(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(125)
			Float sinA = tmp3;		HX_STACK_VAR(sinA,"sinA");
			HX_STACK_LINE(125)
			Float tmp4 = a;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(125)
			Float tmp5 = ::Math_obj::cos(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(125)
			Float cosA = tmp5;		HX_STACK_VAR(cosA,"cosA");
			HX_STACK_LINE(125)
			bool tmp6 = resetVelocity;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(125)
			if ((tmp6)){
				HX_STACK_LINE(125)
				Source->velocity->set((int)0,(int)0);
			}
			HX_STACK_LINE(125)
			Float tmp7 = (cosA * Acceleration);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(125)
			Float tmp8 = (sinA * Acceleration);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(125)
			Source->acceleration->set(tmp7,tmp8);
			HX_STACK_LINE(125)
			Float tmp9 = (cosA * MaxSpeed);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(125)
			Float tmp10 = ::Math_obj::abs(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(125)
			Float tmp11 = (sinA * MaxSpeed);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(125)
			Float tmp12 = ::Math_obj::abs(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(125)
			Source->maxVelocity->set(tmp10,tmp12);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxVelocity_obj,accelerateTowardsMouse,(void))

Void FlxVelocity_obj::moveTowardsPoint( ::flixel::FlxSprite Source,::flixel::math::FlxPoint Target,hx::Null< Float >  __o_Speed,hx::Null< int >  __o_MaxTime){
Float Speed = __o_Speed.Default(60);
int MaxTime = __o_MaxTime.Default(0);
	HX_STACK_FRAME("flixel.math.FlxVelocity","moveTowardsPoint",0x13050698,"flixel.math.FlxVelocity.moveTowardsPoint","flixel/math/FlxVelocity.hx",160,0xbea30ec3)
	HX_STACK_ARG(Source,"Source")
	HX_STACK_ARG(Target,"Target")
	HX_STACK_ARG(Speed,"Speed")
	HX_STACK_ARG(MaxTime,"MaxTime")
{
		HX_STACK_LINE(161)
		::flixel::FlxSprite tmp = Source;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(161)
		::flixel::math::FlxPoint tmp1 = Target;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(161)
		Float tmp2 = ::flixel::math::FlxAngle_obj::angleBetweenPoint(tmp,tmp1,null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(161)
		Float a = tmp2;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(163)
		bool tmp3 = (MaxTime > (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(163)
		if ((tmp3)){
			HX_STACK_LINE(165)
			int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(165)
			{
				HX_STACK_LINE(165)
				Float tmp5 = Source->x;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(165)
				Float tmp6 = Source->origin->x;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(165)
				Float tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(165)
				Float tmp8 = Target->x;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(165)
				Float tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(165)
				Float dx = tmp9;		HX_STACK_VAR(dx,"dx");
				HX_STACK_LINE(165)
				Float tmp10 = Source->y;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(165)
				Float tmp11 = Source->origin->y;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(165)
				Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(165)
				Float tmp13 = Target->y;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(165)
				Float tmp14 = (tmp12 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(165)
				Float dy = tmp14;		HX_STACK_VAR(dy,"dy");
				HX_STACK_LINE(165)
				{
					HX_STACK_LINE(165)
					bool tmp15 = Target->_weak;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(165)
					if ((tmp15)){
						HX_STACK_LINE(165)
						Target->put();
					}
				}
				HX_STACK_LINE(165)
				Float tmp15 = (dx * dx);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(165)
				Float tmp16 = (dy * dy);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(165)
				Float tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(165)
				Float tmp18 = ::Math_obj::sqrt(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(165)
				tmp4 = ::Std_obj::_int(tmp18);
			}
			HX_STACK_LINE(165)
			int d = tmp4;		HX_STACK_VAR(d,"d");
			HX_STACK_LINE(168)
			int tmp5 = d;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(168)
			Float tmp6 = (Float(MaxTime) / Float((int)1000));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(168)
			Float tmp7 = (Float(tmp5) / Float(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(168)
			int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(168)
			Speed = tmp8;
		}
		HX_STACK_LINE(171)
		Float tmp4 = a;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(171)
		Float tmp5 = ::Math_obj::cos(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(171)
		Float tmp6 = Speed;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(171)
		Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(171)
		Source->velocity->set_x(tmp7);
		HX_STACK_LINE(172)
		Float tmp8 = a;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(172)
		Float tmp9 = ::Math_obj::sin(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(172)
		Float tmp10 = Speed;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(172)
		Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(172)
		Source->velocity->set_y(tmp11);
		HX_STACK_LINE(174)
		{
			HX_STACK_LINE(174)
			bool tmp12 = Target->_weak;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(174)
			if ((tmp12)){
				HX_STACK_LINE(174)
				Target->put();
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxVelocity_obj,moveTowardsPoint,(void))

Void FlxVelocity_obj::accelerateTowardsPoint( ::flixel::FlxSprite Source,::flixel::math::FlxPoint Target,Float Acceleration,Float MaxSpeed){
{
		HX_STACK_FRAME("flixel.math.FlxVelocity","accelerateTowardsPoint",0xe7e53aa4,"flixel.math.FlxVelocity.accelerateTowardsPoint","flixel/math/FlxVelocity.hx",188,0xbea30ec3)
		HX_STACK_ARG(Source,"Source")
		HX_STACK_ARG(Target,"Target")
		HX_STACK_ARG(Acceleration,"Acceleration")
		HX_STACK_ARG(MaxSpeed,"MaxSpeed")
		HX_STACK_LINE(189)
		::flixel::FlxSprite tmp = Source;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(189)
		::flixel::math::FlxPoint tmp1 = Target;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(189)
		Float tmp2 = ::flixel::math::FlxAngle_obj::angleBetweenPoint(tmp,tmp1,null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(189)
		Float a = tmp2;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(191)
		{
			HX_STACK_LINE(191)
			bool resetVelocity = true;		HX_STACK_VAR(resetVelocity,"resetVelocity");
			HX_STACK_LINE(191)
			Float tmp3 = a;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(191)
			Float tmp4 = ::Math_obj::sin(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(191)
			Float sinA = tmp4;		HX_STACK_VAR(sinA,"sinA");
			HX_STACK_LINE(191)
			Float tmp5 = a;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(191)
			Float tmp6 = ::Math_obj::cos(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(191)
			Float cosA = tmp6;		HX_STACK_VAR(cosA,"cosA");
			HX_STACK_LINE(191)
			bool tmp7 = resetVelocity;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(191)
			if ((tmp7)){
				HX_STACK_LINE(191)
				Source->velocity->set((int)0,(int)0);
			}
			HX_STACK_LINE(191)
			Float tmp8 = (cosA * Acceleration);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(191)
			Float tmp9 = (sinA * Acceleration);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(191)
			Source->acceleration->set(tmp8,tmp9);
			HX_STACK_LINE(191)
			Float tmp10 = (cosA * MaxSpeed);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(191)
			Float tmp11 = ::Math_obj::abs(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(191)
			Float tmp12 = (sinA * MaxSpeed);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(191)
			Float tmp13 = ::Math_obj::abs(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(191)
			Source->maxVelocity->set(tmp11,tmp13);
		}
		HX_STACK_LINE(193)
		{
			HX_STACK_LINE(193)
			bool tmp3 = Target->_weak;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(193)
			if ((tmp3)){
				HX_STACK_LINE(193)
				Target->put();
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxVelocity_obj,accelerateTowardsPoint,(void))

::flixel::math::FlxPoint FlxVelocity_obj::velocityFromAngle( Float Angle,Float Speed){
	HX_STACK_FRAME("flixel.math.FlxVelocity","velocityFromAngle",0x954f2639,"flixel.math.FlxVelocity.velocityFromAngle","flixel/math/FlxVelocity.hx",204,0xbea30ec3)
	HX_STACK_ARG(Angle,"Angle")
	HX_STACK_ARG(Speed,"Speed")
	HX_STACK_LINE(205)
	Float tmp = Angle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(205)
	Float tmp1 = ::Math_obj::PI;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(205)
	Float tmp2 = (Float(tmp1) / Float((int)180));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(205)
	Float tmp3 = (tmp * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(205)
	Float a = tmp3;		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(207)
	::flixel::math::FlxPoint tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(207)
	{
		HX_STACK_LINE(207)
		Float tmp5 = a;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(207)
		Float tmp6 = ::Math_obj::cos(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(207)
		Float tmp7 = Speed;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(207)
		Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(207)
		Float X = tmp8;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(207)
		Float tmp9 = a;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(207)
		Float tmp10 = ::Math_obj::sin(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(207)
		Float tmp11 = Speed;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(207)
		Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(207)
		Float Y = tmp12;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(207)
		::flixel::util::FlxPool_flixel_math_FlxPoint tmp13 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(207)
		::flixel::math::FlxPoint tmp14 = tmp13->get();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(207)
		Float tmp15 = X;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(207)
		Float tmp16 = Y;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(207)
		::flixel::math::FlxPoint tmp17 = tmp14->set(tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(207)
		::flixel::math::FlxPoint point = tmp17;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(207)
		point->_inPool = false;
		HX_STACK_LINE(207)
		tmp4 = point;
	}
	HX_STACK_LINE(207)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxVelocity_obj,velocityFromAngle,return )

::flixel::math::FlxPoint FlxVelocity_obj::velocityFromFacing( ::flixel::FlxSprite Parent,Float Speed){
	HX_STACK_FRAME("flixel.math.FlxVelocity","velocityFromFacing",0x90de75f4,"flixel.math.FlxVelocity.velocityFromFacing","flixel/math/FlxVelocity.hx",218,0xbea30ec3)
	HX_STACK_ARG(Parent,"Parent")
	HX_STACK_ARG(Speed,"Speed")
	HX_STACK_LINE(219)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(219)
	{
		HX_STACK_LINE(219)
		int FacingBitmask = Parent->facing;		HX_STACK_VAR(FacingBitmask,"FacingBitmask");
		HX_STACK_LINE(219)
		bool AsDegrees = false;		HX_STACK_VAR(AsDegrees,"AsDegrees");
		HX_STACK_LINE(219)
		int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(219)
		{
			HX_STACK_LINE(219)
			int f = FacingBitmask;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(219)
			int f1 = FacingBitmask;		HX_STACK_VAR(f1,"f1");
			HX_STACK_LINE(219)
			int f2 = FacingBitmask;		HX_STACK_VAR(f2,"f2");
			HX_STACK_LINE(219)
			int f3 = FacingBitmask;		HX_STACK_VAR(f3,"f3");
			HX_STACK_LINE(219)
			int tmp2 = FacingBitmask;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(219)
			switch( (int)(tmp2)){
				case (int)1: {
					HX_STACK_LINE(219)
					tmp1 = (int)180;
				}
				;break;
				case (int)16: {
					HX_STACK_LINE(219)
					tmp1 = (int)0;
				}
				;break;
				case (int)256: {
					HX_STACK_LINE(219)
					tmp1 = (int)-90;
				}
				;break;
				case (int)4096: {
					HX_STACK_LINE(219)
					tmp1 = (int)90;
				}
				;break;
				default: {
					HX_STACK_LINE(219)
					int tmp3 = f;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(219)
					int tmp4 = (int)257;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(219)
					bool tmp5 = (tmp3 == tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(219)
					if ((tmp5)){
						HX_STACK_LINE(219)
						tmp1 = (int)-135;
					}
					else{
						HX_STACK_LINE(219)
						int tmp6 = f1;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(219)
						int tmp7 = (int)272;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(219)
						bool tmp8 = (tmp6 == tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(219)
						if ((tmp8)){
							HX_STACK_LINE(219)
							tmp1 = (int)-45;
						}
						else{
							HX_STACK_LINE(219)
							int tmp9 = f2;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(219)
							int tmp10 = (int)4097;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(219)
							bool tmp11 = (tmp9 == tmp10);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(219)
							if ((tmp11)){
								HX_STACK_LINE(219)
								tmp1 = (int)135;
							}
							else{
								HX_STACK_LINE(219)
								int tmp12 = f3;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(219)
								int tmp13 = (int)4112;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(219)
								bool tmp14 = (tmp12 == tmp13);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(219)
								if ((tmp14)){
									HX_STACK_LINE(219)
									tmp1 = (int)45;
								}
								else{
									HX_STACK_LINE(219)
									tmp1 = (int)0;
								}
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(219)
		int degrees = tmp1;		HX_STACK_VAR(degrees,"degrees");
		HX_STACK_LINE(219)
		bool tmp2 = AsDegrees;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(219)
		if ((tmp2)){
			HX_STACK_LINE(219)
			tmp = degrees;
		}
		else{
			HX_STACK_LINE(219)
			int tmp3 = degrees;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(219)
			Float tmp4 = ::Math_obj::PI;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(219)
			Float tmp5 = (Float(tmp4) / Float((int)180));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(219)
			tmp = (tmp3 * tmp5);
		}
	}
	HX_STACK_LINE(219)
	Float a = tmp;		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(220)
	::flixel::math::FlxPoint tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(220)
	{
		HX_STACK_LINE(220)
		Float tmp2 = a;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(220)
		Float tmp3 = ::Math_obj::cos(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(220)
		Float tmp4 = Speed;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(220)
		Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(220)
		Float X = tmp5;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(220)
		Float tmp6 = a;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(220)
		Float tmp7 = ::Math_obj::sin(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(220)
		Float tmp8 = Speed;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(220)
		Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(220)
		Float Y = tmp9;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(220)
		::flixel::util::FlxPool_flixel_math_FlxPoint tmp10 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(220)
		::flixel::math::FlxPoint tmp11 = tmp10->get();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(220)
		Float tmp12 = X;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(220)
		Float tmp13 = Y;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(220)
		::flixel::math::FlxPoint tmp14 = tmp11->set(tmp12,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(220)
		::flixel::math::FlxPoint point = tmp14;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(220)
		point->_inPool = false;
		HX_STACK_LINE(220)
		tmp1 = point;
	}
	HX_STACK_LINE(220)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxVelocity_obj,velocityFromFacing,return )

Float FlxVelocity_obj::computeVelocity( Float Velocity,Float Acceleration,Float Drag,Float Max,Float Elapsed){
	HX_STACK_FRAME("flixel.math.FlxVelocity","computeVelocity",0xd7550d81,"flixel.math.FlxVelocity.computeVelocity","flixel/math/FlxVelocity.hx",234,0xbea30ec3)
	HX_STACK_ARG(Velocity,"Velocity")
	HX_STACK_ARG(Acceleration,"Acceleration")
	HX_STACK_ARG(Drag,"Drag")
	HX_STACK_ARG(Max,"Max")
	HX_STACK_ARG(Elapsed,"Elapsed")
	HX_STACK_LINE(235)
	bool tmp = (Acceleration != (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(235)
	if ((tmp)){
		HX_STACK_LINE(237)
		Float tmp1 = (Acceleration * Elapsed);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(237)
		hx::AddEq(Velocity,tmp1);
	}
	else{
		HX_STACK_LINE(239)
		bool tmp1 = (Drag != (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(239)
		if ((tmp1)){
			HX_STACK_LINE(241)
			Float tmp2 = (Drag * Elapsed);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(241)
			Float drag = tmp2;		HX_STACK_VAR(drag,"drag");
			HX_STACK_LINE(242)
			Float tmp3 = (Velocity - drag);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(242)
			bool tmp4 = (tmp3 > (int)0);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(242)
			if ((tmp4)){
				HX_STACK_LINE(244)
				hx::SubEq(Velocity,drag);
			}
			else{
				HX_STACK_LINE(246)
				Float tmp5 = (Velocity + drag);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(246)
				bool tmp6 = (tmp5 < (int)0);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(246)
				if ((tmp6)){
					HX_STACK_LINE(248)
					hx::AddEq(Velocity,drag);
				}
				else{
					HX_STACK_LINE(252)
					Velocity = (int)0;
				}
			}
		}
	}
	HX_STACK_LINE(255)
	bool tmp1 = (Velocity != (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(255)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(255)
	if ((tmp1)){
		HX_STACK_LINE(255)
		tmp2 = (Max != (int)0);
	}
	else{
		HX_STACK_LINE(255)
		tmp2 = false;
	}
	HX_STACK_LINE(255)
	if ((tmp2)){
		HX_STACK_LINE(257)
		bool tmp3 = (Velocity > Max);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(257)
		if ((tmp3)){
			HX_STACK_LINE(259)
			Velocity = Max;
		}
		else{
			HX_STACK_LINE(261)
			Float tmp4 = Velocity;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(261)
			Float tmp5 = Max;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(261)
			Float tmp6 = -(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(261)
			bool tmp7 = (tmp4 < tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(261)
			if ((tmp7)){
				HX_STACK_LINE(263)
				Float tmp8 = Max;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(263)
				Float tmp9 = -(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(263)
				Velocity = tmp9;
			}
		}
	}
	HX_STACK_LINE(266)
	Float tmp3 = Velocity;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(266)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxVelocity_obj,computeVelocity,return )

Void FlxVelocity_obj::accelerateFromAngle( ::flixel::FlxSprite source,Float radians,Float acceleration,Float maxSpeed,hx::Null< bool >  __o_resetVelocity){
bool resetVelocity = __o_resetVelocity.Default(true);
	HX_STACK_FRAME("flixel.math.FlxVelocity","accelerateFromAngle",0x5b8d48b9,"flixel.math.FlxVelocity.accelerateFromAngle","flixel/math/FlxVelocity.hx",280,0xbea30ec3)
	HX_STACK_ARG(source,"source")
	HX_STACK_ARG(radians,"radians")
	HX_STACK_ARG(acceleration,"acceleration")
	HX_STACK_ARG(maxSpeed,"maxSpeed")
	HX_STACK_ARG(resetVelocity,"resetVelocity")
{
		HX_STACK_LINE(281)
		Float tmp = radians;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(281)
		Float tmp1 = ::Math_obj::sin(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(281)
		Float sinA = tmp1;		HX_STACK_VAR(sinA,"sinA");
		HX_STACK_LINE(282)
		Float tmp2 = radians;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(282)
		Float tmp3 = ::Math_obj::cos(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(282)
		Float cosA = tmp3;		HX_STACK_VAR(cosA,"cosA");
		HX_STACK_LINE(284)
		bool tmp4 = resetVelocity;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(284)
		if ((tmp4)){
			HX_STACK_LINE(285)
			source->velocity->set((int)0,(int)0);
		}
		HX_STACK_LINE(287)
		Float tmp5 = (cosA * acceleration);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(287)
		Float tmp6 = (sinA * acceleration);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(287)
		source->acceleration->set(tmp5,tmp6);
		HX_STACK_LINE(288)
		Float tmp7 = (cosA * maxSpeed);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(288)
		Float tmp8 = ::Math_obj::abs(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(288)
		Float tmp9 = (sinA * maxSpeed);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(288)
		Float tmp10 = ::Math_obj::abs(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(288)
		source->maxVelocity->set(tmp8,tmp10);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxVelocity_obj,accelerateFromAngle,(void))


FlxVelocity_obj::FlxVelocity_obj()
{
}

bool FlxVelocity_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"computeVelocity") ) { outValue = computeVelocity_dyn(); return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"moveTowardsMouse") ) { outValue = moveTowardsMouse_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"moveTowardsPoint") ) { outValue = moveTowardsPoint_dyn(); return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"moveTowardsObject") ) { outValue = moveTowardsObject_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"velocityFromAngle") ) { outValue = velocityFromAngle_dyn(); return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"velocityFromFacing") ) { outValue = velocityFromFacing_dyn(); return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"accelerateFromAngle") ) { outValue = accelerateFromAngle_dyn(); return true;  }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"accelerateTowardsMouse") ) { outValue = accelerateTowardsMouse_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"accelerateTowardsPoint") ) { outValue = accelerateTowardsPoint_dyn(); return true;  }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"accelerateTowardsObject") ) { outValue = accelerateTowardsObject_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxVelocity_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxVelocity_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxVelocity_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("moveTowardsObject","\x6a","\x65","\x02","\x02"),
	HX_HCSTRING("accelerateTowardsObject","\x1e","\x34","\xa0","\x7d"),
	HX_HCSTRING("moveTowardsMouse","\xda","\xed","\x3e","\xbe"),
	HX_HCSTRING("accelerateTowardsMouse","\xa6","\x71","\x74","\x11"),
	HX_HCSTRING("moveTowardsPoint","\x05","\x8c","\x69","\x78"),
	HX_HCSTRING("accelerateTowardsPoint","\xd1","\x0f","\x9f","\xcb"),
	HX_HCSTRING("velocityFromAngle","\x2c","\x60","\xdf","\xe7"),
	HX_HCSTRING("velocityFromFacing","\xa1","\xf0","\x80","\x7c"),
	HX_HCSTRING("computeVelocity","\xb4","\xd4","\x7e","\xb6"),
	HX_HCSTRING("accelerateFromAngle","\x6c","\x25","\x16","\x9e"),
	::String(null()) };

void FlxVelocity_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.math.FlxVelocity","\x3b","\x6f","\xef","\x61");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxVelocity_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< FlxVelocity_obj >;
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
} // end namespace math
