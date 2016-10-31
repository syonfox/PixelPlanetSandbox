#include <hxcpp.h>

#include "hxMath.h"
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
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_math_FlxVelocity
#include <flixel/math/FlxVelocity.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxBaseTilemap
#include <flixel/tile/FlxBaseTilemap.h>
#endif
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPath
#include <flixel/util/FlxPath.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxRect
#include <flixel/util/FlxPool_flixel_math_FlxRect.h>
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
namespace flixel{

Void FlxObject_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_Width,hx::Null< Float >  __o_Height)
{
HX_STACK_FRAME("flixel.FlxObject","new",0x2aa4ec91,"flixel.FlxObject.new","flixel/FlxObject.hx",20,0xf0fe0d80)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
HX_STACK_ARG(__o_Width,"Width")
HX_STACK_ARG(__o_Height,"Height")
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
Float Width = __o_Width.Default(0);
Float Height = __o_Height.Default(0);
{
	struct _Function_1_1{
		inline static ::flixel::math::FlxRect Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/FlxObject.hx",583,0xf0fe0d80)
			{
				HX_STACK_LINE(583)
				Float X = (int)0;		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(583)
				Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(583)
				Float Width = (int)0;		HX_STACK_VAR(Width,"Width");
				HX_STACK_LINE(583)
				Float Height = (int)0;		HX_STACK_VAR(Height,"Height");
				HX_STACK_LINE(583)
				::flixel::math::FlxRect tmp;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(583)
				{
					HX_STACK_LINE(583)
					::flixel::util::FlxPool_flixel_math_FlxRect tmp1 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(583)
					::flixel::math::FlxRect tmp2 = tmp1->get();		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(583)
					::flixel::math::FlxRect _this = tmp2;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(583)
					_this->x = X;
					HX_STACK_LINE(583)
					_this->y = Y;
					HX_STACK_LINE(583)
					_this->width = Width;
					HX_STACK_LINE(583)
					_this->height = Height;
					HX_STACK_LINE(583)
					tmp = _this;
				}
				HX_STACK_LINE(583)
				::flixel::math::FlxRect rect = tmp;		HX_STACK_VAR(rect,"rect");
				HX_STACK_LINE(583)
				rect->_inPool = false;
				HX_STACK_LINE(583)
				return rect;
			}
			return null();
		}
	};
	HX_STACK_LINE(583)
	this->_rect = _Function_1_1::Block();
	struct _Function_1_2{
		inline static ::flixel::math::FlxPoint Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/FlxObject.hx",581,0xf0fe0d80)
			{
				HX_STACK_LINE(581)
				Float X = (int)0;		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(581)
				Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(581)
				::flixel::util::FlxPool_flixel_math_FlxPoint tmp = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(581)
				::flixel::math::FlxPoint tmp1 = tmp->get();		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(581)
				Float tmp2 = X;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(581)
				Float tmp3 = Y;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(581)
				::flixel::math::FlxPoint tmp4 = tmp1->set(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(581)
				::flixel::math::FlxPoint point = tmp4;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(581)
				point->_inPool = false;
				HX_STACK_LINE(581)
				return point;
			}
			return null();
		}
	};
	HX_STACK_LINE(581)
	this->_point = _Function_1_2::Block();
	HX_STACK_LINE(578)
	this->path = null();
	HX_STACK_LINE(536)
	this->collisonXDrag = true;
	HX_STACK_LINE(531)
	this->allowCollisions = (int)4369;
	HX_STACK_LINE(526)
	this->wasTouching = (int)0;
	HX_STACK_LINE(521)
	this->touching = (int)0;
	HX_STACK_LINE(516)
	this->health = ((Float)1);
	HX_STACK_LINE(512)
	this->maxAngular = ((Float)10000);
	HX_STACK_LINE(508)
	this->angularDrag = ((Float)0);
	HX_STACK_LINE(504)
	this->angularAcceleration = ((Float)0);
	HX_STACK_LINE(500)
	this->angularVelocity = ((Float)0);
	HX_STACK_LINE(496)
	this->elasticity = ((Float)0);
	HX_STACK_LINE(492)
	this->mass = ((Float)1);
	HX_STACK_LINE(453)
	this->immovable = false;
	HX_STACK_LINE(449)
	this->moves = true;
	HX_STACK_LINE(444)
	this->angle = ((Float)0);
	HX_STACK_LINE(439)
	this->pixelPerfectPosition = true;
	HX_STACK_LINE(418)
	this->y = ((Float)0);
	HX_STACK_LINE(414)
	this->x = ((Float)0);
	HX_STACK_LINE(593)
	super::__construct();
	HX_STACK_LINE(595)
	Float tmp = X;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(595)
	this->set_x(tmp);
	HX_STACK_LINE(596)
	Float tmp1 = Y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(596)
	this->set_y(tmp1);
	HX_STACK_LINE(597)
	Float tmp2 = Width;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(597)
	this->set_width(tmp2);
	HX_STACK_LINE(598)
	Float tmp3 = Height;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(598)
	this->set_height(tmp3);
	HX_STACK_LINE(600)
	this->initVars();
}
;
	return null();
}

//FlxObject_obj::~FlxObject_obj() { }

Dynamic FlxObject_obj::__CreateEmpty() { return  new FlxObject_obj; }
hx::ObjectPtr< FlxObject_obj > FlxObject_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_Width,hx::Null< Float >  __o_Height)
{  hx::ObjectPtr< FlxObject_obj > _result_ = new FlxObject_obj();
	_result_->__construct(__o_X,__o_Y,__o_Width,__o_Height);
	return _result_;}

Dynamic FlxObject_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxObject_obj > _result_ = new FlxObject_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

Void FlxObject_obj::initVars( ){
{
		HX_STACK_FRAME("flixel.FlxObject","initVars",0xb8a66d0b,"flixel.FlxObject.initVars","flixel/FlxObject.hx",608,0xf0fe0d80)
		HX_STACK_THIS(this)
		HX_STACK_LINE(609)
		this->flixelType = (int)1;
		HX_STACK_LINE(610)
		::flixel::math::FlxPoint tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(610)
		{
			HX_STACK_LINE(610)
			::flixel::util::FlxPool_flixel_math_FlxPoint tmp1 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(610)
			::flixel::math::FlxPoint tmp2 = tmp1->get();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(610)
			Float tmp3 = this->x;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(610)
			Float tmp4 = this->y;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(610)
			::flixel::math::FlxPoint tmp5 = tmp2->set(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(610)
			::flixel::math::FlxPoint point = tmp5;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(610)
			point->_inPool = false;
			HX_STACK_LINE(610)
			tmp = point;
		}
		HX_STACK_LINE(610)
		this->last = tmp;
		HX_STACK_LINE(611)
		::flixel::math::FlxPoint tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(611)
		{
			HX_STACK_LINE(611)
			::flixel::util::FlxPool_flixel_math_FlxPoint tmp2 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(611)
			::flixel::math::FlxPoint tmp3 = tmp2->get();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(611)
			::flixel::math::FlxPoint tmp4 = tmp3->set((int)1,(int)1);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(611)
			::flixel::math::FlxPoint point = tmp4;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(611)
			point->_inPool = false;
			HX_STACK_LINE(611)
			tmp1 = point;
		}
		HX_STACK_LINE(611)
		this->scrollFactor = tmp1;
		HX_STACK_LINE(612)
		bool tmp2 = ::flixel::FlxObject_obj::defaultPixelPerfectPosition;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(612)
		this->pixelPerfectPosition = tmp2;
		HX_STACK_LINE(614)
		{
			HX_STACK_LINE(614)
			::flixel::math::FlxPoint tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(614)
			{
				HX_STACK_LINE(614)
				Float X = (int)0;		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(614)
				Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(614)
				::flixel::util::FlxPool_flixel_math_FlxPoint tmp4 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(614)
				::flixel::math::FlxPoint tmp5 = tmp4->get();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(614)
				Float tmp6 = X;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(614)
				Float tmp7 = Y;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(614)
				::flixel::math::FlxPoint tmp8 = tmp5->set(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(614)
				::flixel::math::FlxPoint point = tmp8;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(614)
				point->_inPool = false;
				HX_STACK_LINE(614)
				tmp3 = point;
			}
			HX_STACK_LINE(614)
			this->velocity = tmp3;
			HX_STACK_LINE(614)
			::flixel::math::FlxPoint tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(614)
			{
				HX_STACK_LINE(614)
				Float X = (int)0;		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(614)
				Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(614)
				::flixel::util::FlxPool_flixel_math_FlxPoint tmp5 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(614)
				::flixel::math::FlxPoint tmp6 = tmp5->get();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(614)
				Float tmp7 = X;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(614)
				Float tmp8 = Y;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(614)
				::flixel::math::FlxPoint tmp9 = tmp6->set(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(614)
				::flixel::math::FlxPoint point = tmp9;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(614)
				point->_inPool = false;
				HX_STACK_LINE(614)
				tmp4 = point;
			}
			HX_STACK_LINE(614)
			this->acceleration = tmp4;
			HX_STACK_LINE(614)
			::flixel::math::FlxPoint tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(614)
			{
				HX_STACK_LINE(614)
				Float X = (int)0;		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(614)
				Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(614)
				::flixel::util::FlxPool_flixel_math_FlxPoint tmp6 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(614)
				::flixel::math::FlxPoint tmp7 = tmp6->get();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(614)
				Float tmp8 = X;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(614)
				Float tmp9 = Y;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(614)
				::flixel::math::FlxPoint tmp10 = tmp7->set(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(614)
				::flixel::math::FlxPoint point = tmp10;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(614)
				point->_inPool = false;
				HX_STACK_LINE(614)
				tmp5 = point;
			}
			HX_STACK_LINE(614)
			this->drag = tmp5;
			HX_STACK_LINE(614)
			::flixel::math::FlxPoint tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(614)
			{
				HX_STACK_LINE(614)
				::flixel::util::FlxPool_flixel_math_FlxPoint tmp7 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(614)
				::flixel::math::FlxPoint tmp8 = tmp7->get();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(614)
				::flixel::math::FlxPoint tmp9 = tmp8->set((int)10000,(int)10000);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(614)
				::flixel::math::FlxPoint point = tmp9;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(614)
				point->_inPool = false;
				HX_STACK_LINE(614)
				tmp6 = point;
			}
			HX_STACK_LINE(614)
			this->maxVelocity = tmp6;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxObject_obj,initVars,(void))

Void FlxObject_obj::initMotionVars( ){
{
		HX_STACK_FRAME("flixel.FlxObject","initMotionVars",0xb01943a1,"flixel.FlxObject.initMotionVars","flixel/FlxObject.hx",622,0xf0fe0d80)
		HX_STACK_THIS(this)
		HX_STACK_LINE(623)
		::flixel::math::FlxPoint tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(623)
		{
			HX_STACK_LINE(623)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(623)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(623)
			::flixel::util::FlxPool_flixel_math_FlxPoint tmp1 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(623)
			::flixel::math::FlxPoint tmp2 = tmp1->get();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(623)
			Float tmp3 = X;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(623)
			Float tmp4 = Y;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(623)
			::flixel::math::FlxPoint tmp5 = tmp2->set(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(623)
			::flixel::math::FlxPoint point = tmp5;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(623)
			point->_inPool = false;
			HX_STACK_LINE(623)
			tmp = point;
		}
		HX_STACK_LINE(623)
		this->velocity = tmp;
		HX_STACK_LINE(624)
		::flixel::math::FlxPoint tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(624)
		{
			HX_STACK_LINE(624)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(624)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(624)
			::flixel::util::FlxPool_flixel_math_FlxPoint tmp2 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(624)
			::flixel::math::FlxPoint tmp3 = tmp2->get();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(624)
			Float tmp4 = X;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(624)
			Float tmp5 = Y;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(624)
			::flixel::math::FlxPoint tmp6 = tmp3->set(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(624)
			::flixel::math::FlxPoint point = tmp6;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(624)
			point->_inPool = false;
			HX_STACK_LINE(624)
			tmp1 = point;
		}
		HX_STACK_LINE(624)
		this->acceleration = tmp1;
		HX_STACK_LINE(625)
		::flixel::math::FlxPoint tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(625)
		{
			HX_STACK_LINE(625)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(625)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(625)
			::flixel::util::FlxPool_flixel_math_FlxPoint tmp3 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(625)
			::flixel::math::FlxPoint tmp4 = tmp3->get();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(625)
			Float tmp5 = X;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(625)
			Float tmp6 = Y;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(625)
			::flixel::math::FlxPoint tmp7 = tmp4->set(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(625)
			::flixel::math::FlxPoint point = tmp7;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(625)
			point->_inPool = false;
			HX_STACK_LINE(625)
			tmp2 = point;
		}
		HX_STACK_LINE(625)
		this->drag = tmp2;
		HX_STACK_LINE(626)
		::flixel::math::FlxPoint tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(626)
		{
			HX_STACK_LINE(626)
			::flixel::util::FlxPool_flixel_math_FlxPoint tmp4 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(626)
			::flixel::math::FlxPoint tmp5 = tmp4->get();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(626)
			::flixel::math::FlxPoint tmp6 = tmp5->set((int)10000,(int)10000);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(626)
			::flixel::math::FlxPoint point = tmp6;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(626)
			point->_inPool = false;
			HX_STACK_LINE(626)
			tmp3 = point;
		}
		HX_STACK_LINE(626)
		this->maxVelocity = tmp3;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxObject_obj,initMotionVars,(void))

Void FlxObject_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.FlxObject","destroy",0xba37b5ab,"flixel.FlxObject.destroy","flixel/FlxObject.hx",634,0xf0fe0d80)
		HX_STACK_THIS(this)
		HX_STACK_LINE(635)
		this->super::destroy();
		HX_STACK_LINE(637)
		::flixel::math::FlxPoint tmp = this->velocity;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(637)
		::flixel::math::FlxPoint tmp1 = ::flixel::util::FlxDestroyUtil_obj::put(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(637)
		this->velocity = tmp1;
		HX_STACK_LINE(638)
		::flixel::math::FlxPoint tmp2 = this->acceleration;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(638)
		::flixel::math::FlxPoint tmp3 = ::flixel::util::FlxDestroyUtil_obj::put(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(638)
		this->acceleration = tmp3;
		HX_STACK_LINE(639)
		::flixel::math::FlxPoint tmp4 = this->drag;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(639)
		::flixel::math::FlxPoint tmp5 = ::flixel::util::FlxDestroyUtil_obj::put(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(639)
		this->drag = tmp5;
		HX_STACK_LINE(640)
		::flixel::math::FlxPoint tmp6 = this->maxVelocity;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(640)
		::flixel::math::FlxPoint tmp7 = ::flixel::util::FlxDestroyUtil_obj::put(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(640)
		this->maxVelocity = tmp7;
		HX_STACK_LINE(641)
		::flixel::math::FlxPoint tmp8 = this->scrollFactor;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(641)
		::flixel::math::FlxPoint tmp9 = ::flixel::util::FlxDestroyUtil_obj::put(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(641)
		this->scrollFactor = tmp9;
		HX_STACK_LINE(642)
		::flixel::math::FlxPoint tmp10 = this->last;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(642)
		::flixel::math::FlxPoint tmp11 = ::flixel::util::FlxDestroyUtil_obj::put(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(642)
		this->last = tmp11;
		HX_STACK_LINE(643)
		::flixel::math::FlxPoint tmp12 = this->_point;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(643)
		::flixel::math::FlxPoint tmp13 = ::flixel::util::FlxDestroyUtil_obj::put(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(643)
		this->_point = tmp13;
		HX_STACK_LINE(644)
		::flixel::math::FlxRect tmp14 = this->_rect;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(644)
		::flixel::math::FlxRect tmp15 = ::flixel::util::FlxDestroyUtil_obj::put(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(644)
		this->_rect = tmp15;
	}
return null();
}


Void FlxObject_obj::update( Float elapsed){
{
		HX_STACK_FRAME("flixel.FlxObject","update",0x87b15e78,"flixel.FlxObject.update","flixel/FlxObject.hx",652,0xf0fe0d80)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(658)
		::flixel::math::FlxPoint tmp = this->last;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(658)
		Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(658)
		tmp->set_x(tmp1);
		HX_STACK_LINE(659)
		::flixel::math::FlxPoint tmp2 = this->last;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(659)
		Float tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(659)
		tmp2->set_y(tmp3);
		HX_STACK_LINE(661)
		::flixel::util::FlxPath tmp4 = this->path;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(661)
		bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(661)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(661)
		if ((tmp5)){
			HX_STACK_LINE(661)
			::flixel::util::FlxPath tmp7 = this->path;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(661)
			::flixel::util::FlxPath tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(661)
			tmp6 = tmp8->active;
		}
		else{
			HX_STACK_LINE(661)
			tmp6 = false;
		}
		HX_STACK_LINE(661)
		if ((tmp6)){
			HX_STACK_LINE(662)
			::flixel::util::FlxPath tmp7 = this->path;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(662)
			Float tmp8 = elapsed;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(662)
			tmp7->update(tmp8);
		}
		HX_STACK_LINE(664)
		bool tmp7 = this->moves;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(664)
		if ((tmp7)){
			HX_STACK_LINE(665)
			Float tmp8 = elapsed;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(665)
			this->updateMotion(tmp8);
		}
		HX_STACK_LINE(667)
		int tmp8 = this->touching;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(667)
		this->wasTouching = tmp8;
		HX_STACK_LINE(668)
		this->touching = (int)0;
	}
return null();
}


Void FlxObject_obj::updateMotion( Float elapsed){
{
		HX_STACK_FRAME("flixel.FlxObject","updateMotion",0x420d82ce,"flixel.FlxObject.updateMotion","flixel/FlxObject.hx",677,0xf0fe0d80)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(678)
		Float tmp = this->angularVelocity;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(678)
		Float tmp1 = this->angularAcceleration;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(678)
		Float tmp2 = this->angularDrag;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(678)
		Float tmp3 = this->maxAngular;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(678)
		Float tmp4 = elapsed;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(678)
		Float tmp5 = ::flixel::math::FlxVelocity_obj::computeVelocity(tmp,tmp1,tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(678)
		Float tmp6 = this->angularVelocity;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(678)
		Float tmp7 = (tmp5 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(678)
		Float tmp8 = (((Float)0.5) * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(678)
		Float velocityDelta = tmp8;		HX_STACK_VAR(velocityDelta,"velocityDelta");
		HX_STACK_LINE(679)
		hx::AddEq(this->angularVelocity,velocityDelta);
		HX_STACK_LINE(680)
		{
			HX_STACK_LINE(680)
			::flixel::FlxObject _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(680)
			Float tmp9 = _g->angle;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(680)
			Float tmp10 = this->angularVelocity;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(680)
			Float tmp11 = elapsed;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(680)
			Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(680)
			Float tmp13 = (tmp9 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(680)
			_g->set_angle(tmp13);
		}
		HX_STACK_LINE(681)
		hx::AddEq(this->angularVelocity,velocityDelta);
		HX_STACK_LINE(683)
		::flixel::math::FlxPoint tmp9 = this->velocity;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(683)
		Float tmp10 = tmp9->x;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(683)
		::flixel::math::FlxPoint tmp11 = this->acceleration;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(683)
		Float tmp12 = tmp11->x;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(683)
		::flixel::math::FlxPoint tmp13 = this->drag;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(683)
		Float tmp14 = tmp13->x;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(683)
		::flixel::math::FlxPoint tmp15 = this->maxVelocity;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(683)
		Float tmp16 = tmp15->x;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(683)
		Float tmp17 = elapsed;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(683)
		Float tmp18 = ::flixel::math::FlxVelocity_obj::computeVelocity(tmp10,tmp12,tmp14,tmp16,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(683)
		::flixel::math::FlxPoint tmp19 = this->velocity;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(683)
		Float tmp20 = tmp19->x;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(683)
		Float tmp21 = (tmp18 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(683)
		Float tmp22 = (((Float)0.5) * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(683)
		velocityDelta = tmp22;
		HX_STACK_LINE(684)
		{
			HX_STACK_LINE(684)
			::flixel::math::FlxPoint tmp23 = this->velocity;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(684)
			::flixel::math::FlxPoint _g = tmp23;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(684)
			Float tmp24 = (_g->x + velocityDelta);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(684)
			_g->set_x(tmp24);
		}
		HX_STACK_LINE(685)
		::flixel::math::FlxPoint tmp23 = this->velocity;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(685)
		Float tmp24 = tmp23->x;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(685)
		Float tmp25 = elapsed;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(685)
		Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(685)
		Float delta = tmp26;		HX_STACK_VAR(delta,"delta");
		HX_STACK_LINE(686)
		{
			HX_STACK_LINE(686)
			::flixel::math::FlxPoint tmp27 = this->velocity;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(686)
			::flixel::math::FlxPoint _g = tmp27;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(686)
			Float tmp28 = (_g->x + velocityDelta);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(686)
			_g->set_x(tmp28);
		}
		HX_STACK_LINE(687)
		{
			HX_STACK_LINE(687)
			::flixel::FlxObject _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(687)
			Float tmp27 = (_g->x + delta);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(687)
			_g->set_x(tmp27);
		}
		HX_STACK_LINE(689)
		::flixel::math::FlxPoint tmp27 = this->velocity;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(689)
		Float tmp28 = tmp27->y;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(689)
		::flixel::math::FlxPoint tmp29 = this->acceleration;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(689)
		Float tmp30 = tmp29->y;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(689)
		::flixel::math::FlxPoint tmp31 = this->drag;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(689)
		Float tmp32 = tmp31->y;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(689)
		::flixel::math::FlxPoint tmp33 = this->maxVelocity;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(689)
		Float tmp34 = tmp33->y;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(689)
		Float tmp35 = elapsed;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(689)
		Float tmp36 = ::flixel::math::FlxVelocity_obj::computeVelocity(tmp28,tmp30,tmp32,tmp34,tmp35);		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(689)
		::flixel::math::FlxPoint tmp37 = this->velocity;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(689)
		Float tmp38 = tmp37->y;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(689)
		Float tmp39 = (tmp36 - tmp38);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(689)
		Float tmp40 = (((Float)0.5) * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(689)
		velocityDelta = tmp40;
		HX_STACK_LINE(690)
		{
			HX_STACK_LINE(690)
			::flixel::math::FlxPoint tmp41 = this->velocity;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(690)
			::flixel::math::FlxPoint _g = tmp41;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(690)
			Float tmp42 = (_g->y + velocityDelta);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(690)
			_g->set_y(tmp42);
		}
		HX_STACK_LINE(691)
		::flixel::math::FlxPoint tmp41 = this->velocity;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(691)
		Float tmp42 = tmp41->y;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(691)
		Float tmp43 = elapsed;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(691)
		Float tmp44 = (tmp42 * tmp43);		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(691)
		delta = tmp44;
		HX_STACK_LINE(692)
		{
			HX_STACK_LINE(692)
			::flixel::math::FlxPoint tmp45 = this->velocity;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(692)
			::flixel::math::FlxPoint _g = tmp45;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(692)
			Float tmp46 = (_g->y + velocityDelta);		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(692)
			_g->set_y(tmp46);
		}
		HX_STACK_LINE(693)
		{
			HX_STACK_LINE(693)
			::flixel::FlxObject _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(693)
			Float tmp45 = (_g->y + delta);		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(693)
			_g->set_y(tmp45);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,updateMotion,(void))

Void FlxObject_obj::draw( ){
{
		HX_STACK_FRAME("flixel.FlxObject","draw",0x1f17bab3,"flixel.FlxObject.draw","flixel/FlxObject.hx",700,0xf0fe0d80)
		HX_STACK_THIS(this)
	}
return null();
}


bool FlxObject_obj::overlaps( ::flixel::FlxBasic ObjectOrGroup,hx::Null< bool >  __o_InScreenSpace,::flixel::FlxCamera Camera){
bool InScreenSpace = __o_InScreenSpace.Default(false);
	HX_STACK_FRAME("flixel.FlxObject","overlaps",0xaad0e53b,"flixel.FlxObject.overlaps","flixel/FlxObject.hx",719,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ObjectOrGroup,"ObjectOrGroup")
	HX_STACK_ARG(InScreenSpace,"InScreenSpace")
	HX_STACK_ARG(Camera,"Camera")
{
		HX_STACK_LINE(720)
		::flixel::FlxBasic tmp = ObjectOrGroup;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(720)
		::flixel::group::FlxTypedGroup tmp1 = ::flixel::group::FlxTypedGroup_obj::resolveGroup(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(720)
		::flixel::group::FlxTypedGroup group = tmp1;		HX_STACK_VAR(group,"group");
		HX_STACK_LINE(721)
		bool tmp2 = (group != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(721)
		if ((tmp2)){
			HX_STACK_LINE(723)
			Dynamic tmp3 = this->overlapsCallback_dyn();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(723)
			::flixel::group::FlxTypedGroup tmp4 = group;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(723)
			bool tmp5 = InScreenSpace;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(723)
			::flixel::FlxCamera tmp6 = Camera;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(723)
			bool tmp7 = ::flixel::group::FlxTypedGroup_obj::overlaps(tmp3,tmp4,(int)0,(int)0,tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(723)
			return tmp7;
		}
		HX_STACK_LINE(726)
		bool tmp3 = (ObjectOrGroup->flixelType == (int)3);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(726)
		if ((tmp3)){
			HX_STACK_LINE(730)
			::flixel::tile::FlxBaseTilemap tilemap = ((::flixel::tile::FlxBaseTilemap)(ObjectOrGroup));		HX_STACK_VAR(tilemap,"tilemap");
			HX_STACK_LINE(731)
			bool tmp4 = InScreenSpace;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(731)
			::flixel::FlxCamera tmp5 = Camera;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(731)
			bool tmp6 = tilemap->overlaps(hx::ObjectPtr<OBJ_>(this),tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(731)
			return tmp6;
		}
		HX_STACK_LINE(734)
		::flixel::FlxObject object = ((::flixel::FlxObject)(ObjectOrGroup));		HX_STACK_VAR(object,"object");
		HX_STACK_LINE(735)
		bool tmp4 = InScreenSpace;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(735)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(735)
		if ((tmp5)){
			HX_STACK_LINE(737)
			Float tmp6 = object->x;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(737)
			Float tmp7 = object->get_width();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(737)
			Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(737)
			Float tmp9 = this->x;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(737)
			bool tmp10 = (tmp8 > tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(737)
			bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(737)
			bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(737)
			if ((tmp11)){
				HX_STACK_LINE(737)
				Float tmp13 = object->x;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(737)
				Float tmp14 = this->x;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(737)
				Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(737)
				Float tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(737)
				Float tmp17 = this->get_width();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(737)
				Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(737)
				Float tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(737)
				Float tmp20 = (tmp16 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(737)
				Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(737)
				Float tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(737)
				tmp12 = (tmp13 < tmp22);
			}
			else{
				HX_STACK_LINE(737)
				tmp12 = false;
			}
			HX_STACK_LINE(737)
			bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(737)
			bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(737)
			if ((tmp13)){
				HX_STACK_LINE(738)
				Float tmp15 = object->y;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(738)
				Float tmp16 = object->get_height();		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(738)
				Float tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(738)
				Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(738)
				Float tmp19 = (tmp15 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(738)
				Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(738)
				Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(738)
				Float tmp22 = this->y;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(738)
				Float tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(738)
				Float tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(738)
				tmp14 = (tmp21 > tmp24);
			}
			else{
				HX_STACK_LINE(737)
				tmp14 = false;
			}
			HX_STACK_LINE(737)
			bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(737)
			if ((tmp14)){
				HX_STACK_LINE(738)
				Float tmp16 = object->y;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(738)
				Float tmp17 = this->y;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(738)
				Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(738)
				Float tmp19 = this->get_height();		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(738)
				Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(738)
				Float tmp21 = (tmp18 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(738)
				Float tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(738)
				tmp15 = (tmp16 < tmp22);
			}
			else{
				HX_STACK_LINE(737)
				tmp15 = false;
			}
			HX_STACK_LINE(737)
			return tmp15;
		}
		HX_STACK_LINE(741)
		bool tmp6 = (Camera == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(741)
		if ((tmp6)){
			HX_STACK_LINE(743)
			::flixel::FlxCamera tmp7 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(743)
			Camera = tmp7;
		}
		HX_STACK_LINE(745)
		::flixel::FlxCamera tmp7 = Camera;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(745)
		::flixel::math::FlxPoint tmp8 = object->getScreenPosition(null(),tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(745)
		::flixel::math::FlxPoint objectScreenPos = tmp8;		HX_STACK_VAR(objectScreenPos,"objectScreenPos");
		HX_STACK_LINE(746)
		::flixel::math::FlxPoint tmp9 = this->_point;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(746)
		::flixel::FlxCamera tmp10 = Camera;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(746)
		this->getScreenPosition(tmp9,tmp10);
		HX_STACK_LINE(747)
		Float tmp11 = objectScreenPos->x;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(747)
		Float tmp12 = object->get_width();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(747)
		Float tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(747)
		::flixel::math::FlxPoint tmp14 = this->_point;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(747)
		Float tmp15 = tmp14->x;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(747)
		bool tmp16 = (tmp13 > tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(747)
		bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(747)
		bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(747)
		if ((tmp17)){
			HX_STACK_LINE(747)
			Float tmp19 = objectScreenPos->x;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(747)
			::flixel::math::FlxPoint tmp20 = this->_point;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(747)
			::flixel::math::FlxPoint tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(747)
			::flixel::math::FlxPoint tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(747)
			Float tmp23 = tmp22->x;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(747)
			Float tmp24 = this->get_width();		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(747)
			Float tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(747)
			Float tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(747)
			Float tmp27 = (tmp23 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(747)
			Float tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(747)
			Float tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(747)
			tmp18 = (tmp19 < tmp29);
		}
		else{
			HX_STACK_LINE(747)
			tmp18 = false;
		}
		HX_STACK_LINE(747)
		bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(747)
		bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(747)
		if ((tmp19)){
			HX_STACK_LINE(748)
			Float tmp21 = objectScreenPos->y;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(748)
			Float tmp22 = object->get_height();		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(748)
			Float tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(748)
			Float tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(748)
			Float tmp25 = (tmp21 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(748)
			Float tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(748)
			Float tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(748)
			::flixel::math::FlxPoint tmp28 = this->_point;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(748)
			::flixel::math::FlxPoint tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(748)
			::flixel::math::FlxPoint tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(748)
			Float tmp31 = tmp30->y;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(748)
			tmp20 = (tmp27 > tmp31);
		}
		else{
			HX_STACK_LINE(747)
			tmp20 = false;
		}
		HX_STACK_LINE(747)
		bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(747)
		if ((tmp20)){
			HX_STACK_LINE(748)
			Float tmp22 = objectScreenPos->y;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(748)
			::flixel::math::FlxPoint tmp23 = this->_point;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(748)
			::flixel::math::FlxPoint tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(748)
			Float tmp25 = tmp24->y;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(748)
			Float tmp26 = this->get_height();		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(748)
			Float tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(748)
			Float tmp28 = (tmp25 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(748)
			Float tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(748)
			tmp21 = (tmp22 < tmp29);
		}
		else{
			HX_STACK_LINE(747)
			tmp21 = false;
		}
		HX_STACK_LINE(747)
		return tmp21;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(FlxObject_obj,overlaps,return )

bool FlxObject_obj::overlapsCallback( ::flixel::FlxBasic ObjectOrGroup,Float X,Float Y,bool InScreenSpace,::flixel::FlxCamera Camera){
	HX_STACK_FRAME("flixel.FlxObject","overlapsCallback",0xe4196e20,"flixel.FlxObject.overlapsCallback","flixel/FlxObject.hx",753,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ObjectOrGroup,"ObjectOrGroup")
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(InScreenSpace,"InScreenSpace")
	HX_STACK_ARG(Camera,"Camera")
	HX_STACK_LINE(754)
	::flixel::FlxBasic tmp = ObjectOrGroup;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(754)
	bool tmp1 = InScreenSpace;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(754)
	::flixel::FlxCamera tmp2 = Camera;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(754)
	bool tmp3 = this->overlaps(tmp,tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(754)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC5(FlxObject_obj,overlapsCallback,return )

bool FlxObject_obj::overlapsAt( Float X,Float Y,::flixel::FlxBasic ObjectOrGroup,hx::Null< bool >  __o_InScreenSpace,::flixel::FlxCamera Camera){
bool InScreenSpace = __o_InScreenSpace.Default(false);
	HX_STACK_FRAME("flixel.FlxObject","overlapsAt",0xacc1230e,"flixel.FlxObject.overlapsAt","flixel/FlxObject.hx",770,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(ObjectOrGroup,"ObjectOrGroup")
	HX_STACK_ARG(InScreenSpace,"InScreenSpace")
	HX_STACK_ARG(Camera,"Camera")
{
		HX_STACK_LINE(771)
		::flixel::FlxBasic tmp = ObjectOrGroup;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(771)
		::flixel::group::FlxTypedGroup tmp1 = ::flixel::group::FlxTypedGroup_obj::resolveGroup(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(771)
		::flixel::group::FlxTypedGroup group = tmp1;		HX_STACK_VAR(group,"group");
		HX_STACK_LINE(772)
		bool tmp2 = (group != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(772)
		if ((tmp2)){
			HX_STACK_LINE(774)
			Dynamic tmp3 = this->overlapsAtCallback_dyn();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(774)
			::flixel::group::FlxTypedGroup tmp4 = group;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(774)
			Float tmp5 = X;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(774)
			Float tmp6 = Y;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(774)
			bool tmp7 = InScreenSpace;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(774)
			::flixel::FlxCamera tmp8 = Camera;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(774)
			bool tmp9 = ::flixel::group::FlxTypedGroup_obj::overlaps(tmp3,tmp4,tmp5,tmp6,tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(774)
			return tmp9;
		}
		HX_STACK_LINE(777)
		bool tmp3 = (ObjectOrGroup->flixelType == (int)3);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(777)
		if ((tmp3)){
			HX_STACK_LINE(783)
			::flixel::tile::FlxBaseTilemap tilemap = ((::flixel::tile::FlxBaseTilemap)(ObjectOrGroup));		HX_STACK_VAR(tilemap,"tilemap");
			HX_STACK_LINE(784)
			Float tmp4 = tilemap->x;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(784)
			Float tmp5 = X;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(784)
			Float tmp6 = this->x;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(784)
			Float tmp7 = (tmp5 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(784)
			Float tmp8 = (tmp4 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(784)
			Float tmp9 = tilemap->y;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(784)
			Float tmp10 = Y;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(784)
			Float tmp11 = this->y;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(784)
			Float tmp12 = (tmp10 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(784)
			Float tmp13 = (tmp9 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(784)
			bool tmp14 = InScreenSpace;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(784)
			::flixel::FlxCamera tmp15 = Camera;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(784)
			bool tmp16 = tilemap->overlapsAt(tmp8,tmp13,hx::ObjectPtr<OBJ_>(this),tmp14,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(784)
			return tmp16;
		}
		HX_STACK_LINE(787)
		::flixel::FlxObject object = ((::flixel::FlxObject)(ObjectOrGroup));		HX_STACK_VAR(object,"object");
		HX_STACK_LINE(788)
		bool tmp4 = InScreenSpace;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(788)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(788)
		if ((tmp5)){
			HX_STACK_LINE(790)
			Float tmp6 = object->x;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(790)
			Float tmp7 = object->get_width();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(790)
			Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(790)
			Float tmp9 = X;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(790)
			bool tmp10 = (tmp8 > tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(790)
			bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(790)
			bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(790)
			if ((tmp11)){
				HX_STACK_LINE(790)
				Float tmp13 = object->x;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(790)
				Float tmp14 = X;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(790)
				Float tmp15 = this->get_width();		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(790)
				Float tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(790)
				Float tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(790)
				Float tmp18 = (tmp14 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(790)
				Float tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(790)
				Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(790)
				tmp12 = (tmp13 < tmp20);
			}
			else{
				HX_STACK_LINE(790)
				tmp12 = false;
			}
			HX_STACK_LINE(790)
			bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(790)
			bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(790)
			if ((tmp13)){
				HX_STACK_LINE(791)
				Float tmp15 = object->y;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(791)
				Float tmp16 = object->get_height();		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(791)
				Float tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(791)
				Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(791)
				Float tmp19 = (tmp15 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(791)
				Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(791)
				Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(791)
				Float tmp22 = Y;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(791)
				tmp14 = (tmp21 > tmp22);
			}
			else{
				HX_STACK_LINE(790)
				tmp14 = false;
			}
			HX_STACK_LINE(790)
			bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(790)
			if ((tmp14)){
				HX_STACK_LINE(791)
				Float tmp16 = object->y;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(791)
				Float tmp17 = Y;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(791)
				Float tmp18 = this->get_height();		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(791)
				Float tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(791)
				Float tmp20 = (tmp17 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(791)
				Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(791)
				tmp15 = (tmp16 < tmp21);
			}
			else{
				HX_STACK_LINE(790)
				tmp15 = false;
			}
			HX_STACK_LINE(790)
			return tmp15;
		}
		HX_STACK_LINE(794)
		bool tmp6 = (Camera == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(794)
		if ((tmp6)){
			HX_STACK_LINE(796)
			::flixel::FlxCamera tmp7 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(796)
			Camera = tmp7;
		}
		HX_STACK_LINE(798)
		::flixel::FlxCamera tmp7 = Camera;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(798)
		::flixel::math::FlxPoint tmp8 = object->getScreenPosition(null(),tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(798)
		::flixel::math::FlxPoint objectScreenPos = tmp8;		HX_STACK_VAR(objectScreenPos,"objectScreenPos");
		HX_STACK_LINE(799)
		::flixel::math::FlxPoint tmp9 = this->_point;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(799)
		::flixel::FlxCamera tmp10 = Camera;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(799)
		this->getScreenPosition(tmp9,tmp10);
		HX_STACK_LINE(800)
		Float tmp11 = objectScreenPos->x;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(800)
		Float tmp12 = object->get_width();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(800)
		Float tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(800)
		::flixel::math::FlxPoint tmp14 = this->_point;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(800)
		Float tmp15 = tmp14->x;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(800)
		bool tmp16 = (tmp13 > tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(800)
		bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(800)
		bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(800)
		if ((tmp17)){
			HX_STACK_LINE(800)
			Float tmp19 = objectScreenPos->x;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(800)
			::flixel::math::FlxPoint tmp20 = this->_point;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(800)
			::flixel::math::FlxPoint tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(800)
			::flixel::math::FlxPoint tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(800)
			Float tmp23 = tmp22->x;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(800)
			Float tmp24 = this->get_width();		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(800)
			Float tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(800)
			Float tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(800)
			Float tmp27 = (tmp23 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(800)
			Float tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(800)
			Float tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(800)
			tmp18 = (tmp19 < tmp29);
		}
		else{
			HX_STACK_LINE(800)
			tmp18 = false;
		}
		HX_STACK_LINE(800)
		bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(800)
		bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(800)
		if ((tmp19)){
			HX_STACK_LINE(801)
			Float tmp21 = objectScreenPos->y;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(801)
			Float tmp22 = object->get_height();		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(801)
			Float tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(801)
			Float tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(801)
			Float tmp25 = (tmp21 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(801)
			Float tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(801)
			Float tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(801)
			::flixel::math::FlxPoint tmp28 = this->_point;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(801)
			::flixel::math::FlxPoint tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(801)
			::flixel::math::FlxPoint tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(801)
			Float tmp31 = tmp30->y;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(801)
			tmp20 = (tmp27 > tmp31);
		}
		else{
			HX_STACK_LINE(800)
			tmp20 = false;
		}
		HX_STACK_LINE(800)
		bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(800)
		if ((tmp20)){
			HX_STACK_LINE(801)
			Float tmp22 = objectScreenPos->y;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(801)
			::flixel::math::FlxPoint tmp23 = this->_point;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(801)
			::flixel::math::FlxPoint tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(801)
			Float tmp25 = tmp24->y;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(801)
			Float tmp26 = this->get_height();		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(801)
			Float tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(801)
			Float tmp28 = (tmp25 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(801)
			Float tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(801)
			tmp21 = (tmp22 < tmp29);
		}
		else{
			HX_STACK_LINE(800)
			tmp21 = false;
		}
		HX_STACK_LINE(800)
		return tmp21;
	}
}


HX_DEFINE_DYNAMIC_FUNC5(FlxObject_obj,overlapsAt,return )

bool FlxObject_obj::overlapsAtCallback( ::flixel::FlxBasic ObjectOrGroup,Float X,Float Y,bool InScreenSpace,::flixel::FlxCamera Camera){
	HX_STACK_FRAME("flixel.FlxObject","overlapsAtCallback",0xb90836f3,"flixel.FlxObject.overlapsAtCallback","flixel/FlxObject.hx",806,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ObjectOrGroup,"ObjectOrGroup")
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(InScreenSpace,"InScreenSpace")
	HX_STACK_ARG(Camera,"Camera")
	HX_STACK_LINE(807)
	Float tmp = X;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(807)
	Float tmp1 = Y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(807)
	::flixel::FlxBasic tmp2 = ObjectOrGroup;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(807)
	bool tmp3 = InScreenSpace;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(807)
	::flixel::FlxCamera tmp4 = Camera;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(807)
	bool tmp5 = this->overlapsAt(tmp,tmp1,tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(807)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC5(FlxObject_obj,overlapsAtCallback,return )

bool FlxObject_obj::overlapsPoint( ::flixel::math::FlxPoint point,hx::Null< bool >  __o_InScreenSpace,::flixel::FlxCamera Camera){
bool InScreenSpace = __o_InScreenSpace.Default(false);
	HX_STACK_FRAME("flixel.FlxObject","overlapsPoint",0xcd9c6915,"flixel.FlxObject.overlapsPoint","flixel/FlxObject.hx",819,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_ARG(InScreenSpace,"InScreenSpace")
	HX_STACK_ARG(Camera,"Camera")
{
		HX_STACK_LINE(820)
		bool tmp = InScreenSpace;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(820)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(820)
		if ((tmp1)){
			HX_STACK_LINE(822)
			Float tmp2 = point->x;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(822)
			Float tmp3 = this->x;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(822)
			bool tmp4 = (tmp2 >= tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(822)
			bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(822)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(822)
			if ((tmp5)){
				HX_STACK_LINE(822)
				Float tmp7 = point->x;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(822)
				Float tmp8 = this->x;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(822)
				Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(822)
				Float tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(822)
				Float tmp11 = this->get_width();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(822)
				Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(822)
				Float tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(822)
				Float tmp14 = (tmp10 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(822)
				Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(822)
				Float tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(822)
				tmp6 = (tmp7 < tmp16);
			}
			else{
				HX_STACK_LINE(822)
				tmp6 = false;
			}
			HX_STACK_LINE(822)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(822)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(822)
			if ((tmp7)){
				HX_STACK_LINE(822)
				Float tmp9 = point->y;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(822)
				Float tmp10 = this->y;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(822)
				Float tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(822)
				Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(822)
				tmp8 = (tmp9 >= tmp12);
			}
			else{
				HX_STACK_LINE(822)
				tmp8 = false;
			}
			HX_STACK_LINE(822)
			bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(822)
			if ((tmp8)){
				HX_STACK_LINE(822)
				Float tmp10 = point->y;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(822)
				Float tmp11 = this->y;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(822)
				Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(822)
				Float tmp13 = this->get_height();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(822)
				Float tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(822)
				Float tmp15 = (tmp12 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(822)
				Float tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(822)
				tmp9 = (tmp10 < tmp16);
			}
			else{
				HX_STACK_LINE(822)
				tmp9 = false;
			}
			HX_STACK_LINE(822)
			return tmp9;
		}
		HX_STACK_LINE(825)
		bool tmp2 = (Camera == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(825)
		if ((tmp2)){
			HX_STACK_LINE(827)
			::flixel::FlxCamera tmp3 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(827)
			Camera = tmp3;
		}
		HX_STACK_LINE(829)
		Float tmp3 = point->x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(829)
		Float tmp4 = Camera->scroll->x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(829)
		Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(829)
		Float xPos = tmp5;		HX_STACK_VAR(xPos,"xPos");
		HX_STACK_LINE(830)
		Float tmp6 = point->y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(830)
		Float tmp7 = Camera->scroll->y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(830)
		Float tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(830)
		Float yPos = tmp8;		HX_STACK_VAR(yPos,"yPos");
		HX_STACK_LINE(831)
		::flixel::math::FlxPoint tmp9 = this->_point;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(831)
		::flixel::FlxCamera tmp10 = Camera;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(831)
		this->getScreenPosition(tmp9,tmp10);
		HX_STACK_LINE(832)
		{
			HX_STACK_LINE(832)
			bool tmp11 = point->_weak;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(832)
			if ((tmp11)){
				HX_STACK_LINE(832)
				point->put();
			}
		}
		HX_STACK_LINE(833)
		Float tmp11 = xPos;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(833)
		::flixel::math::FlxPoint tmp12 = this->_point;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(833)
		Float tmp13 = tmp12->x;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(833)
		bool tmp14 = (tmp11 >= tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(833)
		bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(833)
		bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(833)
		if ((tmp15)){
			HX_STACK_LINE(833)
			Float tmp17 = xPos;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(833)
			::flixel::math::FlxPoint tmp18 = this->_point;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(833)
			::flixel::math::FlxPoint tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(833)
			::flixel::math::FlxPoint tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(833)
			Float tmp21 = tmp20->x;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(833)
			Float tmp22 = this->get_width();		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(833)
			Float tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(833)
			Float tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(833)
			Float tmp25 = (tmp21 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(833)
			Float tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(833)
			Float tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(833)
			tmp16 = (tmp17 < tmp27);
		}
		else{
			HX_STACK_LINE(833)
			tmp16 = false;
		}
		HX_STACK_LINE(833)
		bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(833)
		bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(833)
		if ((tmp17)){
			HX_STACK_LINE(833)
			Float tmp19 = yPos;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(833)
			::flixel::math::FlxPoint tmp20 = this->_point;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(833)
			::flixel::math::FlxPoint tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(833)
			::flixel::math::FlxPoint tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(833)
			Float tmp23 = tmp22->y;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(833)
			tmp18 = (tmp19 >= tmp23);
		}
		else{
			HX_STACK_LINE(833)
			tmp18 = false;
		}
		HX_STACK_LINE(833)
		bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(833)
		if ((tmp18)){
			HX_STACK_LINE(833)
			Float tmp20 = yPos;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(833)
			::flixel::math::FlxPoint tmp21 = this->_point;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(833)
			::flixel::math::FlxPoint tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(833)
			Float tmp23 = tmp22->y;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(833)
			Float tmp24 = this->get_height();		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(833)
			Float tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(833)
			Float tmp26 = (tmp23 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(833)
			Float tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(833)
			tmp19 = (tmp20 < tmp27);
		}
		else{
			HX_STACK_LINE(833)
			tmp19 = false;
		}
		HX_STACK_LINE(833)
		return tmp19;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(FlxObject_obj,overlapsPoint,return )

bool FlxObject_obj::inWorldBounds( ){
	HX_STACK_FRAME("flixel.FlxObject","inWorldBounds",0x89d0e9f3,"flixel.FlxObject.inWorldBounds","flixel/FlxObject.hx",842,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_LINE(843)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(843)
	Float tmp1 = this->get_width();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(843)
	Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(843)
	::flixel::math::FlxRect tmp3 = ::flixel::FlxG_obj::worldBounds;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(843)
	Float tmp4 = tmp3->x;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(843)
	bool tmp5 = (tmp2 > tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(843)
	bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(843)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(843)
	if ((tmp6)){
		HX_STACK_LINE(843)
		Float tmp8 = this->x;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(843)
		Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(843)
		Float tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(843)
		Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(843)
		{
			HX_STACK_LINE(843)
			::flixel::math::FlxRect tmp12 = ::flixel::FlxG_obj::worldBounds;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(843)
			::flixel::math::FlxRect tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(843)
			::flixel::math::FlxRect tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(843)
			::flixel::math::FlxRect _this = tmp14;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(843)
			Float tmp15 = (_this->x + _this->width);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(843)
			Float tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(843)
			tmp11 = tmp16;
		}
		HX_STACK_LINE(843)
		tmp7 = (tmp10 < tmp11);
	}
	else{
		HX_STACK_LINE(843)
		tmp7 = false;
	}
	HX_STACK_LINE(843)
	bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(843)
	bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(843)
	if ((tmp8)){
		HX_STACK_LINE(843)
		Float tmp10 = this->y;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(843)
		Float tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(843)
		Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(843)
		Float tmp13 = this->get_height();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(843)
		Float tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(843)
		Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(843)
		Float tmp16 = (tmp12 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(843)
		Float tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(843)
		Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(843)
		::flixel::math::FlxRect tmp19 = ::flixel::FlxG_obj::worldBounds;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(843)
		::flixel::math::FlxRect tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(843)
		::flixel::math::FlxRect tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(843)
		Float tmp22 = tmp21->y;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(843)
		tmp9 = (tmp18 > tmp22);
	}
	else{
		HX_STACK_LINE(843)
		tmp9 = false;
	}
	HX_STACK_LINE(843)
	bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(843)
	if ((tmp9)){
		HX_STACK_LINE(843)
		Float tmp11 = this->y;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(843)
		Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(843)
		Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(843)
		{
			HX_STACK_LINE(843)
			::flixel::math::FlxRect tmp14 = ::flixel::FlxG_obj::worldBounds;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(843)
			::flixel::math::FlxRect tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(843)
			::flixel::math::FlxRect _this = tmp15;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(843)
			Float tmp16 = (_this->y + _this->height);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(843)
			tmp13 = tmp16;
		}
		HX_STACK_LINE(843)
		tmp10 = (tmp12 < tmp13);
	}
	else{
		HX_STACK_LINE(843)
		tmp10 = false;
	}
	HX_STACK_LINE(843)
	return tmp10;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxObject_obj,inWorldBounds,return )

::flixel::math::FlxPoint FlxObject_obj::getScreenPosition( ::flixel::math::FlxPoint point,::flixel::FlxCamera Camera){
	HX_STACK_FRAME("flixel.FlxObject","getScreenPosition",0x643c435c,"flixel.FlxObject.getScreenPosition","flixel/FlxObject.hx",854,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_ARG(Camera,"Camera")
	HX_STACK_LINE(855)
	bool tmp = (point == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(855)
	if ((tmp)){
		HX_STACK_LINE(857)
		::flixel::math::FlxPoint tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(857)
		{
			HX_STACK_LINE(857)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(857)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(857)
			::flixel::util::FlxPool_flixel_math_FlxPoint tmp2 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(857)
			::flixel::math::FlxPoint tmp3 = tmp2->get();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(857)
			Float tmp4 = X;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(857)
			Float tmp5 = Y;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(857)
			::flixel::math::FlxPoint tmp6 = tmp3->set(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(857)
			::flixel::math::FlxPoint point1 = tmp6;		HX_STACK_VAR(point1,"point1");
			HX_STACK_LINE(857)
			point1->_inPool = false;
			HX_STACK_LINE(857)
			tmp1 = point1;
		}
		HX_STACK_LINE(857)
		point = tmp1;
	}
	HX_STACK_LINE(859)
	bool tmp1 = (Camera == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(859)
	if ((tmp1)){
		HX_STACK_LINE(861)
		::flixel::FlxCamera tmp2 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(861)
		Camera = tmp2;
	}
	HX_STACK_LINE(864)
	Float tmp2 = this->x;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(864)
	Float tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(864)
	point->set(tmp2,tmp3);
	HX_STACK_LINE(865)
	bool tmp4 = this->pixelPerfectPosition;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(865)
	if ((tmp4)){
		HX_STACK_LINE(867)
		Float tmp5 = point->x;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(867)
		int tmp6 = ::Math_obj::floor(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(867)
		point->set_x(tmp6);
		HX_STACK_LINE(867)
		Float tmp7 = point->y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(867)
		int tmp8 = ::Math_obj::floor(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(867)
		point->set_y(tmp8);
		HX_STACK_LINE(867)
		point;
	}
	HX_STACK_LINE(870)
	::flixel::math::FlxPoint tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(870)
	{
		HX_STACK_LINE(870)
		{
			HX_STACK_LINE(870)
			::flixel::math::FlxPoint _g = point;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(870)
			Float tmp6 = _g->x;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(870)
			Float tmp7 = Camera->scroll->x;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(870)
			::flixel::math::FlxPoint tmp8 = this->scrollFactor;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(870)
			Float tmp9 = tmp8->x;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(870)
			Float tmp10 = (tmp7 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(870)
			Float tmp11 = (tmp6 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(870)
			_g->set_x(tmp11);
		}
		HX_STACK_LINE(870)
		{
			HX_STACK_LINE(870)
			::flixel::math::FlxPoint _g = point;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(870)
			Float tmp6 = _g->y;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(870)
			Float tmp7 = Camera->scroll->y;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(870)
			::flixel::math::FlxPoint tmp8 = this->scrollFactor;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(870)
			Float tmp9 = tmp8->y;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(870)
			Float tmp10 = (tmp7 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(870)
			Float tmp11 = (tmp6 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(870)
			_g->set_y(tmp11);
		}
		HX_STACK_LINE(870)
		tmp5 = point;
	}
	HX_STACK_LINE(870)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxObject_obj,getScreenPosition,return )

::flixel::math::FlxPoint FlxObject_obj::getPosition( ::flixel::math::FlxPoint point){
	HX_STACK_FRAME("flixel.FlxObject","getPosition",0x1bf09890,"flixel.FlxObject.getPosition","flixel/FlxObject.hx",874,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(875)
	bool tmp = (point == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(875)
	if ((tmp)){
		HX_STACK_LINE(876)
		::flixel::math::FlxPoint tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(876)
		{
			HX_STACK_LINE(876)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(876)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(876)
			::flixel::util::FlxPool_flixel_math_FlxPoint tmp2 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(876)
			::flixel::math::FlxPoint tmp3 = tmp2->get();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(876)
			Float tmp4 = X;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(876)
			Float tmp5 = Y;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(876)
			::flixel::math::FlxPoint tmp6 = tmp3->set(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(876)
			::flixel::math::FlxPoint point1 = tmp6;		HX_STACK_VAR(point1,"point1");
			HX_STACK_LINE(876)
			point1->_inPool = false;
			HX_STACK_LINE(876)
			tmp1 = point1;
		}
		HX_STACK_LINE(876)
		point = tmp1;
	}
	HX_STACK_LINE(877)
	Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(877)
	Float tmp2 = this->y;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(877)
	::flixel::math::FlxPoint tmp3 = point->set(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(877)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,getPosition,return )

::flixel::math::FlxPoint FlxObject_obj::getMidpoint( ::flixel::math::FlxPoint point){
	HX_STACK_FRAME("flixel.FlxObject","getMidpoint",0x7bfe0daf,"flixel.FlxObject.getMidpoint","flixel/FlxObject.hx",887,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(888)
	bool tmp = (point == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(888)
	if ((tmp)){
		HX_STACK_LINE(890)
		::flixel::math::FlxPoint tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(890)
		{
			HX_STACK_LINE(890)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(890)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(890)
			::flixel::util::FlxPool_flixel_math_FlxPoint tmp2 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(890)
			::flixel::math::FlxPoint tmp3 = tmp2->get();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(890)
			Float tmp4 = X;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(890)
			Float tmp5 = Y;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(890)
			::flixel::math::FlxPoint tmp6 = tmp3->set(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(890)
			::flixel::math::FlxPoint point1 = tmp6;		HX_STACK_VAR(point1,"point1");
			HX_STACK_LINE(890)
			point1->_inPool = false;
			HX_STACK_LINE(890)
			tmp1 = point1;
		}
		HX_STACK_LINE(890)
		point = tmp1;
	}
	HX_STACK_LINE(892)
	Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(892)
	Float tmp2 = this->get_width();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(892)
	Float tmp3 = (tmp2 * ((Float)0.5));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(892)
	Float tmp4 = (tmp1 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(892)
	Float tmp5 = this->y;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(892)
	Float tmp6 = this->get_height();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(892)
	Float tmp7 = (tmp6 * ((Float)0.5));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(892)
	Float tmp8 = (tmp5 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(892)
	::flixel::math::FlxPoint tmp9 = point->set(tmp4,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(892)
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,getMidpoint,return )

::flixel::math::FlxRect FlxObject_obj::getHitbox( ::flixel::math::FlxRect rect){
	HX_STACK_FRAME("flixel.FlxObject","getHitbox",0x5f284dbf,"flixel.FlxObject.getHitbox","flixel/FlxObject.hx",896,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rect,"rect")
	HX_STACK_LINE(897)
	bool tmp = (rect == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(897)
	if ((tmp)){
		HX_STACK_LINE(898)
		::flixel::math::FlxRect tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(898)
		{
			HX_STACK_LINE(898)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(898)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(898)
			Float Width = (int)0;		HX_STACK_VAR(Width,"Width");
			HX_STACK_LINE(898)
			Float Height = (int)0;		HX_STACK_VAR(Height,"Height");
			HX_STACK_LINE(898)
			::flixel::math::FlxRect tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(898)
			{
				HX_STACK_LINE(898)
				::flixel::util::FlxPool_flixel_math_FlxRect tmp3 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(898)
				::flixel::math::FlxRect tmp4 = tmp3->get();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(898)
				::flixel::math::FlxRect _this = tmp4;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(898)
				_this->x = X;
				HX_STACK_LINE(898)
				_this->y = Y;
				HX_STACK_LINE(898)
				_this->width = Width;
				HX_STACK_LINE(898)
				_this->height = Height;
				HX_STACK_LINE(898)
				tmp2 = _this;
			}
			HX_STACK_LINE(898)
			::flixel::math::FlxRect rect1 = tmp2;		HX_STACK_VAR(rect1,"rect1");
			HX_STACK_LINE(898)
			rect1->_inPool = false;
			HX_STACK_LINE(898)
			tmp1 = rect1;
		}
		HX_STACK_LINE(898)
		rect = tmp1;
	}
	HX_STACK_LINE(899)
	::flixel::math::FlxRect tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(899)
	{
		HX_STACK_LINE(899)
		Float tmp2 = this->get_width();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(899)
		Float Width = tmp2;		HX_STACK_VAR(Width,"Width");
		HX_STACK_LINE(899)
		Float tmp3 = this->get_height();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(899)
		Float Height = tmp3;		HX_STACK_VAR(Height,"Height");
		HX_STACK_LINE(899)
		Float tmp4 = this->x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(899)
		rect->x = tmp4;
		HX_STACK_LINE(899)
		Float tmp5 = this->y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(899)
		rect->y = tmp5;
		HX_STACK_LINE(899)
		rect->width = Width;
		HX_STACK_LINE(899)
		rect->height = Height;
		HX_STACK_LINE(899)
		tmp1 = rect;
	}
	HX_STACK_LINE(899)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,getHitbox,return )

Void FlxObject_obj::reset( Float X,Float Y){
{
		HX_STACK_FRAME("flixel.FlxObject","reset",0x1cbd9440,"flixel.FlxObject.reset","flixel/FlxObject.hx",910,0xf0fe0d80)
		HX_STACK_THIS(this)
		HX_STACK_ARG(X,"X")
		HX_STACK_ARG(Y,"Y")
		HX_STACK_LINE(911)
		this->touching = (int)0;
		HX_STACK_LINE(912)
		this->wasTouching = (int)0;
		HX_STACK_LINE(913)
		Float tmp = X;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(913)
		Float tmp1 = Y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(913)
		this->setPosition(tmp,tmp1);
		HX_STACK_LINE(914)
		::flixel::math::FlxPoint tmp2 = this->last;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(914)
		Float tmp3 = this->x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(914)
		Float tmp4 = this->y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(914)
		tmp2->set(tmp3,tmp4);
		HX_STACK_LINE(915)
		::flixel::math::FlxPoint tmp5 = this->velocity;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(915)
		tmp5->set(null(),null());
		HX_STACK_LINE(916)
		this->revive();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxObject_obj,reset,(void))

bool FlxObject_obj::isOnScreen( ::flixel::FlxCamera Camera){
	HX_STACK_FRAME("flixel.FlxObject","isOnScreen",0x4aab7fe4,"flixel.FlxObject.isOnScreen","flixel/FlxObject.hx",926,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Camera,"Camera")
	HX_STACK_LINE(927)
	bool tmp = (Camera == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(927)
	if ((tmp)){
		HX_STACK_LINE(929)
		::flixel::FlxCamera tmp1 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(929)
		Camera = tmp1;
	}
	HX_STACK_LINE(931)
	::flixel::math::FlxPoint tmp1 = this->_point;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(931)
	::flixel::FlxCamera tmp2 = Camera;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(931)
	this->getScreenPosition(tmp1,tmp2);
	HX_STACK_LINE(932)
	::flixel::math::FlxPoint tmp3 = this->_point;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(932)
	Float tmp4 = tmp3->x;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(932)
	Float tmp5 = this->get_width();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(932)
	Float tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(932)
	bool tmp7 = (tmp6 > (int)0);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(932)
	bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(932)
	bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(932)
	if ((tmp8)){
		HX_STACK_LINE(932)
		::flixel::math::FlxPoint tmp10 = this->_point;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(932)
		::flixel::math::FlxPoint tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(932)
		::flixel::math::FlxPoint tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(932)
		Float tmp13 = tmp12->x;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(932)
		int tmp14 = Camera->width;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(932)
		tmp9 = (tmp13 < tmp14);
	}
	else{
		HX_STACK_LINE(932)
		tmp9 = false;
	}
	HX_STACK_LINE(932)
	bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(932)
	bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(932)
	if ((tmp10)){
		HX_STACK_LINE(932)
		::flixel::math::FlxPoint tmp12 = this->_point;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(932)
		::flixel::math::FlxPoint tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(932)
		::flixel::math::FlxPoint tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(932)
		Float tmp15 = tmp14->y;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(932)
		Float tmp16 = this->get_height();		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(932)
		Float tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(932)
		Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(932)
		Float tmp19 = (tmp15 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(932)
		Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(932)
		Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(932)
		tmp11 = (tmp21 > (int)0);
	}
	else{
		HX_STACK_LINE(932)
		tmp11 = false;
	}
	HX_STACK_LINE(932)
	bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(932)
	if ((tmp11)){
		HX_STACK_LINE(932)
		::flixel::math::FlxPoint tmp13 = this->_point;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(932)
		::flixel::math::FlxPoint tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(932)
		Float tmp15 = tmp14->y;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(932)
		int tmp16 = Camera->height;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(932)
		tmp12 = (tmp15 < tmp16);
	}
	else{
		HX_STACK_LINE(932)
		tmp12 = false;
	}
	HX_STACK_LINE(932)
	return tmp12;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,isOnScreen,return )

bool FlxObject_obj::isPixelPerfectRender( ::flixel::FlxCamera Camera){
	HX_STACK_FRAME("flixel.FlxObject","isPixelPerfectRender",0xc4c93916,"flixel.FlxObject.isPixelPerfectRender","flixel/FlxObject.hx",939,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Camera,"Camera")
	HX_STACK_LINE(940)
	bool tmp = (Camera == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(940)
	if ((tmp)){
		HX_STACK_LINE(942)
		::flixel::FlxCamera tmp1 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(942)
		Camera = tmp1;
	}
	HX_STACK_LINE(945)
	Dynamic tmp1 = this->pixelPerfectRender;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(945)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(945)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(945)
	if ((tmp2)){
		HX_STACK_LINE(945)
		tmp3 = Camera->pixelPerfectRender;
	}
	else{
		HX_STACK_LINE(945)
		tmp3 = this->pixelPerfectRender;
	}
	HX_STACK_LINE(945)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,isPixelPerfectRender,return )

bool FlxObject_obj::isTouching( int Direction){
	HX_STACK_FRAME("flixel.FlxObject","isTouching",0x23c6647c,"flixel.FlxObject.isTouching","flixel/FlxObject.hx",956,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Direction,"Direction")
	HX_STACK_LINE(957)
	int tmp = this->touching;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(957)
	int tmp1 = Direction;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(957)
	int tmp2 = (int(tmp) & int(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(957)
	bool tmp3 = (tmp2 > (int)0);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(957)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,isTouching,return )

bool FlxObject_obj::justTouched( int Direction){
	HX_STACK_FRAME("flixel.FlxObject","justTouched",0xbcba8e43,"flixel.FlxObject.justTouched","flixel/FlxObject.hx",968,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Direction,"Direction")
	HX_STACK_LINE(969)
	int tmp = this->touching;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(969)
	int tmp1 = Direction;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(969)
	int tmp2 = (int(tmp) & int(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(969)
	bool tmp3 = (tmp2 > (int)0);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(969)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(969)
	if ((tmp3)){
		HX_STACK_LINE(969)
		int tmp5 = this->wasTouching;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(969)
		int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(969)
		int tmp7 = Direction;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(969)
		int tmp8 = (int(tmp6) & int(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(969)
		int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(969)
		tmp4 = (tmp9 <= (int)0);
	}
	else{
		HX_STACK_LINE(969)
		tmp4 = false;
	}
	HX_STACK_LINE(969)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,justTouched,return )

Void FlxObject_obj::hurt( Float Damage){
{
		HX_STACK_FRAME("flixel.FlxObject","hurt",0x21beeabe,"flixel.FlxObject.hurt","flixel/FlxObject.hx",979,0xf0fe0d80)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Damage,"Damage")
		HX_STACK_LINE(980)
		Float tmp = this->health;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(980)
		Float tmp1 = Damage;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(980)
		Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(980)
		this->health = tmp2;
		HX_STACK_LINE(981)
		Float tmp3 = this->health;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(981)
		bool tmp4 = (tmp3 <= (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(981)
		if ((tmp4)){
			HX_STACK_LINE(983)
			this->kill();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,hurt,(void))

::flixel::FlxObject FlxObject_obj::screenCenter( ::flixel::util::FlxAxes axes){
	HX_STACK_FRAME("flixel.FlxObject","screenCenter",0x59e58410,"flixel.FlxObject.screenCenter","flixel/FlxObject.hx",994,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(axes,"axes")
	HX_STACK_LINE(995)
	bool tmp = (axes == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(995)
	if ((tmp)){
		HX_STACK_LINE(996)
		axes = ::flixel::util::FlxAxes_obj::XY;
	}
	HX_STACK_LINE(998)
	bool tmp1 = (axes != ::flixel::util::FlxAxes_obj::Y);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(998)
	if ((tmp1)){
		HX_STACK_LINE(999)
		int tmp2 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(999)
		Float tmp3 = (Float(tmp2) / Float((int)2));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(999)
		Float tmp4 = this->get_width();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(999)
		Float tmp5 = (Float(tmp4) / Float((int)2));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(999)
		Float tmp6 = (tmp3 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(999)
		this->set_x(tmp6);
	}
	HX_STACK_LINE(1000)
	bool tmp2 = (axes != ::flixel::util::FlxAxes_obj::X);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1000)
	if ((tmp2)){
		HX_STACK_LINE(1001)
		int tmp3 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1001)
		Float tmp4 = (Float(tmp3) / Float((int)2));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1001)
		Float tmp5 = this->get_height();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1001)
		Float tmp6 = (Float(tmp5) / Float((int)2));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1001)
		Float tmp7 = (tmp4 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1001)
		this->set_y(tmp7);
	}
	HX_STACK_LINE(1003)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,screenCenter,return )

Void FlxObject_obj::setPosition( hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y){
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
	HX_STACK_FRAME("flixel.FlxObject","setPosition",0x265d9f9c,"flixel.FlxObject.setPosition","flixel/FlxObject.hx",1014,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
{
		HX_STACK_LINE(1015)
		Float tmp = X;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1015)
		this->set_x(tmp);
		HX_STACK_LINE(1016)
		Float tmp1 = Y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1016)
		this->set_y(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxObject_obj,setPosition,(void))

Void FlxObject_obj::setSize( Float Width,Float Height){
{
		HX_STACK_FRAME("flixel.FlxObject","setSize",0xa7896a34,"flixel.FlxObject.setSize","flixel/FlxObject.hx",1026,0xf0fe0d80)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Width,"Width")
		HX_STACK_ARG(Height,"Height")
		HX_STACK_LINE(1027)
		Float tmp = Width;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1027)
		this->set_width(tmp);
		HX_STACK_LINE(1028)
		Float tmp1 = Height;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1028)
		this->set_height(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxObject_obj,setSize,(void))

::flixel::math::FlxRect FlxObject_obj::getBoundingBox( ::flixel::FlxCamera camera){
	HX_STACK_FRAME("flixel.FlxObject","getBoundingBox",0x58364780,"flixel.FlxObject.getBoundingBox","flixel/FlxObject.hx",1111,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(camera,"camera")
	HX_STACK_LINE(1112)
	::flixel::math::FlxPoint tmp = this->_point;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1112)
	::flixel::FlxCamera tmp1 = camera;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1112)
	this->getScreenPosition(tmp,tmp1);
	HX_STACK_LINE(1113)
	{
		HX_STACK_LINE(1113)
		::flixel::math::FlxRect tmp2 = this->_rect;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1113)
		::flixel::math::FlxRect _this = tmp2;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(1113)
		Float tmp3 = this->get_width();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1113)
		Float Width = tmp3;		HX_STACK_VAR(Width,"Width");
		HX_STACK_LINE(1113)
		Float tmp4 = this->get_height();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1113)
		Float Height = tmp4;		HX_STACK_VAR(Height,"Height");
		HX_STACK_LINE(1113)
		::flixel::math::FlxPoint tmp5 = this->_point;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1113)
		_this->x = tmp5->x;
		HX_STACK_LINE(1113)
		::flixel::math::FlxPoint tmp6 = this->_point;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1113)
		_this->y = tmp6->y;
		HX_STACK_LINE(1113)
		_this->width = Width;
		HX_STACK_LINE(1113)
		_this->height = Height;
		HX_STACK_LINE(1113)
		_this;
	}
	HX_STACK_LINE(1115)
	::flixel::FlxCamera tmp2 = camera;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1115)
	bool tmp3 = this->isPixelPerfectRender(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1115)
	if ((tmp3)){
		HX_STACK_LINE(1117)
		::flixel::math::FlxRect tmp4 = this->_rect;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1117)
		::flixel::math::FlxRect _this = tmp4;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(1117)
		Float tmp5 = _this->x;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1117)
		int tmp6 = ::Math_obj::floor(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1117)
		_this->x = tmp6;
		HX_STACK_LINE(1117)
		Float tmp7 = _this->y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1117)
		int tmp8 = ::Math_obj::floor(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1117)
		_this->y = tmp8;
		HX_STACK_LINE(1117)
		Float tmp9 = _this->width;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1117)
		int tmp10 = ::Math_obj::floor(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1117)
		_this->width = tmp10;
		HX_STACK_LINE(1117)
		Float tmp11 = _this->height;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1117)
		int tmp12 = ::Math_obj::floor(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1117)
		_this->height = tmp12;
		HX_STACK_LINE(1117)
		_this;
	}
	HX_STACK_LINE(1120)
	::flixel::math::FlxRect tmp4 = this->_rect;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1120)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,getBoundingBox,return )

::String FlxObject_obj::toString( ){
	HX_STACK_FRAME("flixel.FlxObject","toString",0x9e14e2db,"flixel.FlxObject.toString","flixel/FlxObject.hx",1127,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1129)
	::flixel::util::LabelValuePair tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1129)
	{
		HX_STACK_LINE(1129)
		::flixel::util::FlxPool_flixel_util_LabelValuePair tmp1 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1129)
		::flixel::util::LabelValuePair tmp2 = tmp1->get();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1129)
		::flixel::util::LabelValuePair _this = tmp2;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(1129)
		_this->label = HX_HCSTRING("x","\x78","\x00","\x00","\x00");
		HX_STACK_LINE(1129)
		Float tmp3 = this->x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1129)
		_this->value = tmp3;
		HX_STACK_LINE(1129)
		tmp = _this;
	}
	HX_STACK_LINE(1130)
	::flixel::util::LabelValuePair tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1130)
	{
		HX_STACK_LINE(1130)
		::flixel::util::FlxPool_flixel_util_LabelValuePair tmp2 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1130)
		::flixel::util::LabelValuePair tmp3 = tmp2->get();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1130)
		::flixel::util::LabelValuePair _this = tmp3;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(1130)
		_this->label = HX_HCSTRING("y","\x79","\x00","\x00","\x00");
		HX_STACK_LINE(1130)
		Float tmp4 = this->y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1130)
		_this->value = tmp4;
		HX_STACK_LINE(1130)
		tmp1 = _this;
	}
	HX_STACK_LINE(1131)
	::flixel::util::LabelValuePair tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1131)
	{
		HX_STACK_LINE(1131)
		Float tmp3 = this->get_width();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1131)
		Dynamic value = tmp3;		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(1131)
		{
			HX_STACK_LINE(1131)
			::flixel::util::FlxPool_flixel_util_LabelValuePair tmp4 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1131)
			::flixel::util::LabelValuePair tmp5 = tmp4->get();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1131)
			::flixel::util::LabelValuePair _this = tmp5;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1131)
			_this->label = HX_HCSTRING("w","\x77","\x00","\x00","\x00");
			HX_STACK_LINE(1131)
			_this->value = value;
			HX_STACK_LINE(1131)
			tmp2 = _this;
		}
	}
	HX_STACK_LINE(1132)
	::flixel::util::LabelValuePair tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1132)
	{
		HX_STACK_LINE(1132)
		Float tmp4 = this->get_height();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1132)
		Dynamic value = tmp4;		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(1132)
		{
			HX_STACK_LINE(1132)
			::flixel::util::FlxPool_flixel_util_LabelValuePair tmp5 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1132)
			::flixel::util::LabelValuePair tmp6 = tmp5->get();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1132)
			::flixel::util::LabelValuePair _this = tmp6;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1132)
			_this->label = HX_HCSTRING("h","\x68","\x00","\x00","\x00");
			HX_STACK_LINE(1132)
			_this->value = value;
			HX_STACK_LINE(1132)
			tmp3 = _this;
		}
	}
	HX_STACK_LINE(1133)
	::flixel::util::LabelValuePair tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1133)
	{
		HX_STACK_LINE(1133)
		::flixel::util::FlxPool_flixel_util_LabelValuePair tmp5 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1133)
		::flixel::util::LabelValuePair tmp6 = tmp5->get();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1133)
		::flixel::util::LabelValuePair _this = tmp6;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(1133)
		_this->label = HX_HCSTRING("visible","\x72","\x78","\x24","\xa3");
		HX_STACK_LINE(1133)
		bool tmp7 = this->visible;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1133)
		_this->value = tmp7;
		HX_STACK_LINE(1133)
		tmp4 = _this;
	}
	HX_STACK_LINE(1134)
	::flixel::util::LabelValuePair tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1134)
	{
		HX_STACK_LINE(1134)
		::flixel::util::FlxPool_flixel_util_LabelValuePair tmp6 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1134)
		::flixel::util::LabelValuePair tmp7 = tmp6->get();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1134)
		::flixel::util::LabelValuePair _this = tmp7;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(1134)
		_this->label = HX_HCSTRING("velocity","\x1d","\x02","\xfe","\x1e");
		HX_STACK_LINE(1134)
		::flixel::math::FlxPoint tmp8 = this->velocity;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1134)
		_this->value = tmp8;
		HX_STACK_LINE(1134)
		tmp5 = _this;
	}
	HX_STACK_LINE(1128)
	::String tmp6 = ::flixel::util::FlxStringUtil_obj::getDebugString(Array_obj< ::Dynamic >::__new().Add(tmp).Add(tmp1).Add(tmp2).Add(tmp3).Add(tmp4).Add(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1128)
	return tmp6;
}


Float FlxObject_obj::set_x( Float NewX){
	HX_STACK_FRAME("flixel.FlxObject","set_x",0xb024e5cc,"flixel.FlxObject.set_x","flixel/FlxObject.hx",1139,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(NewX,"NewX")
	HX_STACK_LINE(1140)
	Float tmp = this->x = NewX;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1140)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_x,return )

Float FlxObject_obj::set_y( Float NewY){
	HX_STACK_FRAME("flixel.FlxObject","set_y",0xb024e5cd,"flixel.FlxObject.set_y","flixel/FlxObject.hx",1145,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(NewY,"NewY")
	HX_STACK_LINE(1146)
	Float tmp = this->y = NewY;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1146)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_y,return )

Float FlxObject_obj::set_width( Float Width){
	HX_STACK_FRAME("flixel.FlxObject","set_width",0x7d06d55a,"flixel.FlxObject.set_width","flixel/FlxObject.hx",1151,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Width,"Width")
	HX_STACK_LINE(1160)
	Float tmp = this->width = Width;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1160)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_width,return )

Float FlxObject_obj::set_height( Float Height){
	HX_STACK_FRAME("flixel.FlxObject","set_height",0x9f435213,"flixel.FlxObject.set_height","flixel/FlxObject.hx",1165,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Height,"Height")
	HX_STACK_LINE(1174)
	Float tmp = this->height = Height;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1174)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_height,return )

Float FlxObject_obj::get_width( ){
	HX_STACK_FRAME("flixel.FlxObject","get_width",0x99b5e94e,"flixel.FlxObject.get_width","flixel/FlxObject.hx",1179,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1180)
	Float tmp = this->width;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1180)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxObject_obj,get_width,return )

Float FlxObject_obj::get_height( ){
	HX_STACK_FRAME("flixel.FlxObject","get_height",0x9bc5b39f,"flixel.FlxObject.get_height","flixel/FlxObject.hx",1185,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1186)
	Float tmp = this->height;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1186)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxObject_obj,get_height,return )

bool FlxObject_obj::get_solid( ){
	HX_STACK_FRAME("flixel.FlxObject","get_solid",0x5018e773,"flixel.FlxObject.get_solid","flixel/FlxObject.hx",1191,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1192)
	int tmp = this->allowCollisions;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1192)
	int tmp1 = (int(tmp) & int((int)4369));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1192)
	bool tmp2 = (tmp1 > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1192)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxObject_obj,get_solid,return )

bool FlxObject_obj::set_solid( bool Solid){
	HX_STACK_FRAME("flixel.FlxObject","set_solid",0x3369d37f,"flixel.FlxObject.set_solid","flixel/FlxObject.hx",1197,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Solid,"Solid")
	HX_STACK_LINE(1198)
	bool tmp = Solid;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1198)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1198)
	if ((tmp)){
		HX_STACK_LINE(1198)
		tmp1 = (int)4369;
	}
	else{
		HX_STACK_LINE(1198)
		tmp1 = (int)0;
	}
	HX_STACK_LINE(1198)
	this->set_allowCollisions(tmp1);
	HX_STACK_LINE(1199)
	bool tmp2 = Solid;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1199)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_solid,return )

Float FlxObject_obj::set_angle( Float Value){
	HX_STACK_FRAME("flixel.FlxObject","set_angle",0xd5866327,"flixel.FlxObject.set_angle","flixel/FlxObject.hx",1204,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(1205)
	Float tmp = this->angle = Value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1205)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_angle,return )

bool FlxObject_obj::set_moves( bool Value){
	HX_STACK_FRAME("flixel.FlxObject","set_moves",0xbf09eb96,"flixel.FlxObject.set_moves","flixel/FlxObject.hx",1210,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(1211)
	bool tmp = this->moves = Value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1211)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_moves,return )

bool FlxObject_obj::set_immovable( bool Value){
	HX_STACK_FRAME("flixel.FlxObject","set_immovable",0xc5b8805e,"flixel.FlxObject.set_immovable","flixel/FlxObject.hx",1216,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(1217)
	bool tmp = this->immovable = Value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1217)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_immovable,return )

bool FlxObject_obj::set_pixelPerfectRender( bool Value){
	HX_STACK_FRAME("flixel.FlxObject","set_pixelPerfectRender",0x84233609,"flixel.FlxObject.set_pixelPerfectRender","flixel/FlxObject.hx",1222,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(1223)
	Dynamic tmp = this->pixelPerfectRender = Value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1223)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_pixelPerfectRender,return )

int FlxObject_obj::set_allowCollisions( int Value){
	HX_STACK_FRAME("flixel.FlxObject","set_allowCollisions",0x7975d9fe,"flixel.FlxObject.set_allowCollisions","flixel/FlxObject.hx",1228,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(1229)
	int tmp = this->allowCollisions = Value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1229)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_allowCollisions,return )

::flixel::util::FlxPath FlxObject_obj::set_path( ::flixel::util::FlxPath path){
	HX_STACK_FRAME("flixel.FlxObject","set_path",0xde100cd1,"flixel.FlxObject.set_path","flixel/FlxObject.hx",1251,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(path,"path")
	HX_STACK_LINE(1252)
	::flixel::util::FlxPath tmp = this->path;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1252)
	::flixel::util::FlxPath tmp1 = path;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1252)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1252)
	if ((tmp2)){
		HX_STACK_LINE(1253)
		::flixel::util::FlxPath tmp3 = path;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1253)
		return tmp3;
	}
	HX_STACK_LINE(1255)
	::flixel::util::FlxPath tmp3 = this->path;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1255)
	bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1255)
	if ((tmp4)){
		HX_STACK_LINE(1256)
		::flixel::util::FlxPath tmp5 = this->path;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1256)
		tmp5->object = null();
	}
	HX_STACK_LINE(1258)
	bool tmp5 = (path != null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1258)
	if ((tmp5)){
		HX_STACK_LINE(1259)
		path->object = hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(1260)
	::flixel::util::FlxPath tmp6 = this->path = path;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1260)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_path,return )

bool FlxObject_obj::defaultPixelPerfectPosition;

Float FlxObject_obj::SEPARATE_BIAS;

int FlxObject_obj::LEFT;

int FlxObject_obj::RIGHT;

int FlxObject_obj::UP;

int FlxObject_obj::DOWN;

int FlxObject_obj::NONE;

int FlxObject_obj::CEILING;

int FlxObject_obj::FLOOR;

int FlxObject_obj::WALL;

int FlxObject_obj::ANY;

::flixel::math::FlxRect FlxObject_obj::_firstSeparateFlxRect;

::flixel::math::FlxRect FlxObject_obj::_secondSeparateFlxRect;

bool FlxObject_obj::separate( ::flixel::FlxObject Object1,::flixel::FlxObject Object2){
	HX_STACK_FRAME("flixel.FlxObject","separate",0x6cc23192,"flixel.FlxObject.separate","flixel/FlxObject.hx",82,0xf0fe0d80)
	HX_STACK_ARG(Object1,"Object1")
	HX_STACK_ARG(Object2,"Object2")
	HX_STACK_LINE(83)
	::flixel::FlxObject tmp = Object1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(83)
	::flixel::FlxObject tmp1 = Object2;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(83)
	bool tmp2 = ::flixel::FlxObject_obj::separateX(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(83)
	bool separatedX = tmp2;		HX_STACK_VAR(separatedX,"separatedX");
	HX_STACK_LINE(84)
	::flixel::FlxObject tmp3 = Object1;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(84)
	::flixel::FlxObject tmp4 = Object2;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(84)
	bool tmp5 = ::flixel::FlxObject_obj::separateY(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(84)
	bool separatedY = tmp5;		HX_STACK_VAR(separatedY,"separatedY");
	HX_STACK_LINE(85)
	bool tmp6 = separatedX;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(85)
	bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(85)
	bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(85)
	if ((tmp7)){
		HX_STACK_LINE(85)
		tmp8 = separatedY;
	}
	else{
		HX_STACK_LINE(85)
		tmp8 = true;
	}
	HX_STACK_LINE(85)
	return tmp8;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxObject_obj,separate,return )

bool FlxObject_obj::updateTouchingFlags( ::flixel::FlxObject Object1,::flixel::FlxObject Object2){
	HX_STACK_FRAME("flixel.FlxObject","updateTouchingFlags",0x15a0502c,"flixel.FlxObject.updateTouchingFlags","flixel/FlxObject.hx",97,0xf0fe0d80)
	HX_STACK_ARG(Object1,"Object1")
	HX_STACK_ARG(Object2,"Object2")
	HX_STACK_LINE(98)
	::flixel::FlxObject tmp = Object1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(98)
	::flixel::FlxObject tmp1 = Object2;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(98)
	bool tmp2 = ::flixel::FlxObject_obj::updateTouchingFlagsX(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(98)
	bool touchingX = tmp2;		HX_STACK_VAR(touchingX,"touchingX");
	HX_STACK_LINE(99)
	::flixel::FlxObject tmp3 = Object1;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(99)
	::flixel::FlxObject tmp4 = Object2;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(99)
	bool tmp5 = ::flixel::FlxObject_obj::updateTouchingFlagsY(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(99)
	bool touchingY = tmp5;		HX_STACK_VAR(touchingY,"touchingY");
	HX_STACK_LINE(100)
	bool tmp6 = touchingX;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(100)
	bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(100)
	bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(100)
	if ((tmp7)){
		HX_STACK_LINE(100)
		tmp8 = touchingY;
	}
	else{
		HX_STACK_LINE(100)
		tmp8 = true;
	}
	HX_STACK_LINE(100)
	return tmp8;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxObject_obj,updateTouchingFlags,return )

Float FlxObject_obj::computeOverlapX( ::flixel::FlxObject Object1,::flixel::FlxObject Object2,hx::Null< bool >  __o_checkMaxOverlap){
bool checkMaxOverlap = __o_checkMaxOverlap.Default(true);
	HX_STACK_FRAME("flixel.FlxObject","computeOverlapX",0x240ec739,"flixel.FlxObject.computeOverlapX","flixel/FlxObject.hx",110,0xf0fe0d80)
	HX_STACK_ARG(Object1,"Object1")
	HX_STACK_ARG(Object2,"Object2")
	HX_STACK_ARG(checkMaxOverlap,"checkMaxOverlap")
{
		HX_STACK_LINE(111)
		Float overlap = (int)0;		HX_STACK_VAR(overlap,"overlap");
		HX_STACK_LINE(113)
		Float tmp = Object1->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(113)
		Float tmp1 = Object1->last->x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(113)
		Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(113)
		Float obj1delta = tmp2;		HX_STACK_VAR(obj1delta,"obj1delta");
		HX_STACK_LINE(114)
		Float tmp3 = Object2->x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(114)
		Float tmp4 = Object2->last->x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(114)
		Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(114)
		Float obj2delta = tmp5;		HX_STACK_VAR(obj2delta,"obj2delta");
		HX_STACK_LINE(116)
		bool tmp6 = (obj1delta != obj2delta);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(116)
		if ((tmp6)){
			HX_STACK_LINE(119)
			bool tmp7 = (obj1delta > (int)0);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(119)
			Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(119)
			if ((tmp7)){
				HX_STACK_LINE(119)
				tmp8 = obj1delta;
			}
			else{
				HX_STACK_LINE(119)
				Float tmp9 = obj1delta;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(119)
				tmp8 = -(tmp9);
			}
			HX_STACK_LINE(119)
			Float obj1deltaAbs = tmp8;		HX_STACK_VAR(obj1deltaAbs,"obj1deltaAbs");
			HX_STACK_LINE(120)
			bool tmp9 = (obj2delta > (int)0);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(120)
			Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(120)
			if ((tmp9)){
				HX_STACK_LINE(120)
				tmp10 = obj2delta;
			}
			else{
				HX_STACK_LINE(120)
				Float tmp11 = obj2delta;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(120)
				tmp10 = -(tmp11);
			}
			HX_STACK_LINE(120)
			Float obj2deltaAbs = tmp10;		HX_STACK_VAR(obj2deltaAbs,"obj2deltaAbs");
			HX_STACK_LINE(122)
			::flixel::math::FlxRect tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(122)
			{
				HX_STACK_LINE(122)
				::flixel::math::FlxRect tmp12 = ::flixel::FlxObject_obj::_firstSeparateFlxRect;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(122)
				::flixel::math::FlxRect _this = tmp12;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(122)
				Float tmp13 = Object1->get_width();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(122)
				Float tmp14 = obj1deltaAbs;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(122)
				Float tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(122)
				Float Width = tmp15;		HX_STACK_VAR(Width,"Width");
				HX_STACK_LINE(122)
				Float tmp16 = Object1->get_height();		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(122)
				Float Height = tmp16;		HX_STACK_VAR(Height,"Height");
				HX_STACK_LINE(122)
				Float tmp17 = Object1->x;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(122)
				bool tmp18 = (obj1delta > (int)0);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(122)
				Float tmp19;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(122)
				if ((tmp18)){
					HX_STACK_LINE(122)
					tmp19 = obj1delta;
				}
				else{
					HX_STACK_LINE(122)
					tmp19 = (int)0;
				}
				HX_STACK_LINE(122)
				Float tmp20 = (tmp17 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(122)
				_this->x = tmp20;
				HX_STACK_LINE(122)
				Float tmp21 = Object1->last->y;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(122)
				_this->y = tmp21;
				HX_STACK_LINE(122)
				_this->width = Width;
				HX_STACK_LINE(122)
				_this->height = Height;
				HX_STACK_LINE(122)
				tmp11 = _this;
			}
			HX_STACK_LINE(122)
			::flixel::math::FlxRect obj1rect = tmp11;		HX_STACK_VAR(obj1rect,"obj1rect");
			HX_STACK_LINE(123)
			::flixel::math::FlxRect tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(123)
			{
				HX_STACK_LINE(123)
				::flixel::math::FlxRect tmp13 = ::flixel::FlxObject_obj::_secondSeparateFlxRect;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(123)
				::flixel::math::FlxRect _this = tmp13;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(123)
				Float tmp14 = Object2->get_width();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(123)
				Float tmp15 = obj2deltaAbs;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(123)
				Float tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(123)
				Float Width = tmp16;		HX_STACK_VAR(Width,"Width");
				HX_STACK_LINE(123)
				Float tmp17 = Object2->get_height();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(123)
				Float Height = tmp17;		HX_STACK_VAR(Height,"Height");
				HX_STACK_LINE(123)
				Float tmp18 = Object2->x;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(123)
				bool tmp19 = (obj2delta > (int)0);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(123)
				Float tmp20;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(123)
				if ((tmp19)){
					HX_STACK_LINE(123)
					tmp20 = obj2delta;
				}
				else{
					HX_STACK_LINE(123)
					tmp20 = (int)0;
				}
				HX_STACK_LINE(123)
				Float tmp21 = (tmp18 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(123)
				_this->x = tmp21;
				HX_STACK_LINE(123)
				Float tmp22 = Object2->last->y;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(123)
				_this->y = tmp22;
				HX_STACK_LINE(123)
				_this->width = Width;
				HX_STACK_LINE(123)
				_this->height = Height;
				HX_STACK_LINE(123)
				tmp12 = _this;
			}
			HX_STACK_LINE(123)
			::flixel::math::FlxRect obj2rect = tmp12;		HX_STACK_VAR(obj2rect,"obj2rect");
			HX_STACK_LINE(125)
			Float tmp13 = (obj1rect->x + obj1rect->width);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(125)
			Float tmp14 = obj2rect->x;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(125)
			bool tmp15 = (tmp13 > tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(125)
			bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(125)
			bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(125)
			if ((tmp16)){
				HX_STACK_LINE(125)
				Float tmp18 = obj1rect->x;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(125)
				Float tmp19 = (obj2rect->x + obj2rect->width);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(125)
				Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(125)
				Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(125)
				tmp17 = (tmp18 < tmp21);
			}
			else{
				HX_STACK_LINE(125)
				tmp17 = false;
			}
			HX_STACK_LINE(125)
			bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(125)
			bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(125)
			if ((tmp18)){
				HX_STACK_LINE(125)
				Float tmp20 = (obj1rect->y + obj1rect->height);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(125)
				Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(125)
				Float tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(125)
				Float tmp23 = obj2rect->y;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(125)
				tmp19 = (tmp22 > tmp23);
			}
			else{
				HX_STACK_LINE(125)
				tmp19 = false;
			}
			HX_STACK_LINE(125)
			bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(125)
			if ((tmp19)){
				HX_STACK_LINE(125)
				Float tmp21 = obj1rect->y;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(125)
				Float tmp22 = (obj2rect->y + obj2rect->height);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(125)
				Float tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(125)
				tmp20 = (tmp21 < tmp23);
			}
			else{
				HX_STACK_LINE(125)
				tmp20 = false;
			}
			HX_STACK_LINE(125)
			if ((tmp20)){
				HX_STACK_LINE(127)
				bool tmp21 = checkMaxOverlap;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(127)
				Float tmp22;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(127)
				if ((tmp21)){
					HX_STACK_LINE(127)
					Float tmp23 = (obj1deltaAbs + obj2deltaAbs);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(127)
					Float tmp24 = ::flixel::FlxObject_obj::SEPARATE_BIAS;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(127)
					tmp22 = (tmp23 + tmp24);
				}
				else{
					HX_STACK_LINE(127)
					tmp22 = (int)0;
				}
				HX_STACK_LINE(127)
				Float maxOverlap = tmp22;		HX_STACK_VAR(maxOverlap,"maxOverlap");
				HX_STACK_LINE(130)
				bool tmp23 = (obj1delta > obj2delta);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(130)
				if ((tmp23)){
					HX_STACK_LINE(132)
					Float tmp24 = Object1->x;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(132)
					Float tmp25 = Object1->get_width();		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(132)
					Float tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(132)
					Float tmp27 = Object2->x;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(132)
					Float tmp28 = (tmp26 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(132)
					overlap = tmp28;
					HX_STACK_LINE(133)
					bool tmp29 = checkMaxOverlap;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(133)
					bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(133)
					bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(133)
					if ((tmp30)){
						HX_STACK_LINE(133)
						tmp31 = (overlap > maxOverlap);
					}
					else{
						HX_STACK_LINE(133)
						tmp31 = false;
					}
					HX_STACK_LINE(133)
					bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(133)
					bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(133)
					bool tmp34;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(133)
					if ((tmp33)){
						HX_STACK_LINE(133)
						int tmp35 = (int(Object1->allowCollisions) & int((int)16));		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(133)
						int tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(133)
						int tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(133)
						tmp34 = (tmp37 == (int)0);
					}
					else{
						HX_STACK_LINE(133)
						tmp34 = true;
					}
					HX_STACK_LINE(133)
					bool tmp35 = !(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(133)
					bool tmp36;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(133)
					if ((tmp35)){
						HX_STACK_LINE(133)
						int tmp37 = (int(Object2->allowCollisions) & int((int)1));		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(133)
						int tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(133)
						tmp36 = (tmp38 == (int)0);
					}
					else{
						HX_STACK_LINE(133)
						tmp36 = true;
					}
					HX_STACK_LINE(133)
					if ((tmp36)){
						HX_STACK_LINE(135)
						overlap = (int)0;
					}
					else{
						HX_STACK_LINE(139)
						hx::OrEq(Object1->touching,(int)16);
						HX_STACK_LINE(140)
						hx::OrEq(Object2->touching,(int)1);
					}
				}
				else{
					HX_STACK_LINE(143)
					bool tmp24 = (obj1delta < obj2delta);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(143)
					if ((tmp24)){
						HX_STACK_LINE(145)
						Float tmp25 = Object1->x;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(145)
						Float tmp26 = Object2->get_width();		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(145)
						Float tmp27 = (tmp25 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(145)
						Float tmp28 = Object2->x;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(145)
						Float tmp29 = (tmp27 - tmp28);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(145)
						overlap = tmp29;
						HX_STACK_LINE(146)
						bool tmp30 = checkMaxOverlap;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(146)
						bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(146)
						bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(146)
						if ((tmp31)){
							HX_STACK_LINE(146)
							Float tmp33 = overlap;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(146)
							Float tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(146)
							Float tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(146)
							Float tmp36 = -(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(146)
							Float tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(146)
							Float tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(146)
							Float tmp39 = maxOverlap;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(146)
							tmp32 = (tmp38 > tmp39);
						}
						else{
							HX_STACK_LINE(146)
							tmp32 = false;
						}
						HX_STACK_LINE(146)
						bool tmp33 = !(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(146)
						bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(146)
						bool tmp35;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(146)
						if ((tmp34)){
							HX_STACK_LINE(146)
							int tmp36 = (int(Object1->allowCollisions) & int((int)1));		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(146)
							int tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(146)
							int tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(146)
							tmp35 = (tmp38 == (int)0);
						}
						else{
							HX_STACK_LINE(146)
							tmp35 = true;
						}
						HX_STACK_LINE(146)
						bool tmp36 = !(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(146)
						bool tmp37;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(146)
						if ((tmp36)){
							HX_STACK_LINE(146)
							int tmp38 = (int(Object2->allowCollisions) & int((int)16));		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(146)
							int tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(146)
							tmp37 = (tmp39 == (int)0);
						}
						else{
							HX_STACK_LINE(146)
							tmp37 = true;
						}
						HX_STACK_LINE(146)
						if ((tmp37)){
							HX_STACK_LINE(148)
							overlap = (int)0;
						}
						else{
							HX_STACK_LINE(152)
							hx::OrEq(Object1->touching,(int)1);
							HX_STACK_LINE(153)
							hx::OrEq(Object2->touching,(int)16);
						}
					}
				}
			}
		}
		HX_STACK_LINE(158)
		Float tmp7 = overlap;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(158)
		return tmp7;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxObject_obj,computeOverlapX,return )

bool FlxObject_obj::separateX( ::flixel::FlxObject Object1,::flixel::FlxObject Object2){
	HX_STACK_FRAME("flixel.FlxObject","separateX",0xbd292e86,"flixel.FlxObject.separateX","flixel/FlxObject.hx",169,0xf0fe0d80)
	HX_STACK_ARG(Object1,"Object1")
	HX_STACK_ARG(Object2,"Object2")
	HX_STACK_LINE(171)
	bool obj1immovable = Object1->immovable;		HX_STACK_VAR(obj1immovable,"obj1immovable");
	HX_STACK_LINE(172)
	bool obj2immovable = Object2->immovable;		HX_STACK_VAR(obj2immovable,"obj2immovable");
	HX_STACK_LINE(173)
	bool tmp = obj1immovable;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(173)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(173)
	if ((tmp)){
		HX_STACK_LINE(173)
		tmp1 = obj2immovable;
	}
	else{
		HX_STACK_LINE(173)
		tmp1 = false;
	}
	HX_STACK_LINE(173)
	if ((tmp1)){
		HX_STACK_LINE(175)
		return false;
	}
	HX_STACK_LINE(179)
	bool tmp2 = (Object1->flixelType == (int)3);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(179)
	if ((tmp2)){
		HX_STACK_LINE(181)
		::flixel::tile::FlxBaseTilemap tilemap = ((::flixel::tile::FlxBaseTilemap)(Object1));		HX_STACK_VAR(tilemap,"tilemap");
		HX_STACK_LINE(182)
		::flixel::FlxObject tmp3 = Object2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(182)
		Dynamic tmp4 = ::flixel::FlxObject_obj::separateX_dyn();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(182)
		bool tmp5 = tilemap->overlapsWithCallback(tmp3,tmp4,null(),null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(182)
		return tmp5;
	}
	HX_STACK_LINE(184)
	bool tmp3 = (Object2->flixelType == (int)3);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(184)
	if ((tmp3)){
		HX_STACK_LINE(186)
		::flixel::tile::FlxBaseTilemap tilemap = ((::flixel::tile::FlxBaseTilemap)(Object2));		HX_STACK_VAR(tilemap,"tilemap");
		HX_STACK_LINE(187)
		::flixel::FlxObject tmp4 = Object1;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(187)
		Dynamic tmp5 = ::flixel::FlxObject_obj::separateX_dyn();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(187)
		bool tmp6 = tilemap->overlapsWithCallback(tmp4,tmp5,true,null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(187)
		return tmp6;
	}
	HX_STACK_LINE(190)
	::flixel::FlxObject tmp4 = Object1;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(190)
	::flixel::FlxObject tmp5 = Object2;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(190)
	Float tmp6 = ::flixel::FlxObject_obj::computeOverlapX(tmp4,tmp5,null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(190)
	Float overlap = tmp6;		HX_STACK_VAR(overlap,"overlap");
	HX_STACK_LINE(192)
	bool tmp7 = (overlap != (int)0);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(192)
	if ((tmp7)){
		HX_STACK_LINE(194)
		Float tmp8 = Object1->velocity->x;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(194)
		Float obj1v = tmp8;		HX_STACK_VAR(obj1v,"obj1v");
		HX_STACK_LINE(195)
		Float tmp9 = Object2->velocity->x;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(195)
		Float obj2v = tmp9;		HX_STACK_VAR(obj2v,"obj2v");
		HX_STACK_LINE(197)
		bool tmp10 = obj1immovable;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(197)
		bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(197)
		bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(197)
		bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(197)
		if ((tmp12)){
			HX_STACK_LINE(197)
			bool tmp14 = obj2immovable;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(197)
			bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(197)
			tmp13 = !(tmp15);
		}
		else{
			HX_STACK_LINE(197)
			tmp13 = false;
		}
		HX_STACK_LINE(197)
		if ((tmp13)){
			HX_STACK_LINE(199)
			hx::MultEq(overlap,((Float)0.5));
			HX_STACK_LINE(200)
			Float tmp14 = (Object1->x - overlap);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(200)
			Object1->set_x(tmp14);
			HX_STACK_LINE(201)
			{
				HX_STACK_LINE(201)
				::flixel::FlxObject _g = Object2;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(201)
				Float tmp15 = (_g->x + overlap);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(201)
				_g->set_x(tmp15);
			}
			HX_STACK_LINE(203)
			Float tmp15 = (obj2v * obj2v);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(203)
			Float tmp16 = Object2->mass;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(203)
			Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(203)
			Float tmp18 = Object1->mass;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(203)
			Float tmp19 = (Float(tmp17) / Float(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(203)
			Float tmp20 = ::Math_obj::sqrt(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(203)
			bool tmp21 = (obj2v > (int)0);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(203)
			int tmp22;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(203)
			if ((tmp21)){
				HX_STACK_LINE(203)
				tmp22 = (int)1;
			}
			else{
				HX_STACK_LINE(203)
				tmp22 = (int)-1;
			}
			HX_STACK_LINE(203)
			Float tmp23 = (tmp20 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(203)
			Float obj1velocity = tmp23;		HX_STACK_VAR(obj1velocity,"obj1velocity");
			HX_STACK_LINE(204)
			Float tmp24 = (obj1v * obj1v);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(204)
			Float tmp25 = Object1->mass;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(204)
			Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(204)
			Float tmp27 = Object2->mass;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(204)
			Float tmp28 = (Float(tmp26) / Float(tmp27));		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(204)
			Float tmp29 = ::Math_obj::sqrt(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(204)
			bool tmp30 = (obj1v > (int)0);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(204)
			int tmp31;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(204)
			if ((tmp30)){
				HX_STACK_LINE(204)
				tmp31 = (int)1;
			}
			else{
				HX_STACK_LINE(204)
				tmp31 = (int)-1;
			}
			HX_STACK_LINE(204)
			Float tmp32 = (tmp29 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(204)
			Float obj2velocity = tmp32;		HX_STACK_VAR(obj2velocity,"obj2velocity");
			HX_STACK_LINE(205)
			Float tmp33 = (obj1velocity + obj2velocity);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(205)
			Float tmp34 = (tmp33 * ((Float)0.5));		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(205)
			Float average = tmp34;		HX_STACK_VAR(average,"average");
			HX_STACK_LINE(206)
			hx::SubEq(obj1velocity,average);
			HX_STACK_LINE(207)
			hx::SubEq(obj2velocity,average);
			HX_STACK_LINE(208)
			Float tmp35 = average;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(208)
			Float tmp36 = (obj1velocity * Object1->elasticity);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(208)
			Float tmp37 = (tmp35 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(208)
			Object1->velocity->set_x(tmp37);
			HX_STACK_LINE(209)
			Float tmp38 = average;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(209)
			Float tmp39 = (obj2velocity * Object2->elasticity);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(209)
			Float tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(209)
			Object2->velocity->set_x(tmp40);
		}
		else{
			HX_STACK_LINE(211)
			bool tmp14 = obj1immovable;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(211)
			bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(211)
			if ((tmp15)){
				HX_STACK_LINE(213)
				Float tmp16 = (Object1->x - overlap);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(213)
				Object1->set_x(tmp16);
				HX_STACK_LINE(214)
				Float tmp17 = obj2v;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(214)
				Float tmp18 = (obj1v * Object1->elasticity);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(214)
				Float tmp19 = (tmp17 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(214)
				Object1->velocity->set_x(tmp19);
			}
			else{
				HX_STACK_LINE(216)
				bool tmp16 = obj2immovable;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(216)
				bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(216)
				if ((tmp17)){
					HX_STACK_LINE(218)
					{
						HX_STACK_LINE(218)
						::flixel::FlxObject _g = Object2;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(218)
						Float tmp18 = (_g->x + overlap);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(218)
						_g->set_x(tmp18);
					}
					HX_STACK_LINE(219)
					Float tmp18 = obj1v;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(219)
					Float tmp19 = (obj2v * Object2->elasticity);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(219)
					Float tmp20 = (tmp18 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(219)
					Object2->velocity->set_x(tmp20);
				}
			}
		}
		HX_STACK_LINE(221)
		return true;
	}
	HX_STACK_LINE(224)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxObject_obj,separateX,return )

bool FlxObject_obj::updateTouchingFlagsX( ::flixel::FlxObject Object1,::flixel::FlxObject Object2){
	HX_STACK_FRAME("flixel.FlxObject","updateTouchingFlagsX",0xd6a5d6ac,"flixel.FlxObject.updateTouchingFlagsX","flixel/FlxObject.hx",235,0xf0fe0d80)
	HX_STACK_ARG(Object1,"Object1")
	HX_STACK_ARG(Object2,"Object2")
	HX_STACK_LINE(237)
	bool tmp = (Object1->flixelType == (int)3);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(237)
	if ((tmp)){
		HX_STACK_LINE(239)
		::flixel::tile::FlxBaseTilemap tilemap = ((::flixel::tile::FlxBaseTilemap)(Object1));		HX_STACK_VAR(tilemap,"tilemap");
		HX_STACK_LINE(240)
		::flixel::FlxObject tmp1 = Object2;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(240)
		Dynamic tmp2 = ::flixel::FlxObject_obj::updateTouchingFlagsX_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(240)
		bool tmp3 = tilemap->overlapsWithCallback(tmp1,tmp2,null(),null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(240)
		return tmp3;
	}
	HX_STACK_LINE(242)
	bool tmp1 = (Object2->flixelType == (int)3);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(242)
	if ((tmp1)){
		HX_STACK_LINE(244)
		::flixel::tile::FlxBaseTilemap tilemap = ((::flixel::tile::FlxBaseTilemap)(Object2));		HX_STACK_VAR(tilemap,"tilemap");
		HX_STACK_LINE(245)
		::flixel::FlxObject tmp2 = Object1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(245)
		Dynamic tmp3 = ::flixel::FlxObject_obj::updateTouchingFlagsX_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(245)
		bool tmp4 = tilemap->overlapsWithCallback(tmp2,tmp3,true,null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(245)
		return tmp4;
	}
	HX_STACK_LINE(248)
	::flixel::FlxObject tmp2 = Object1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(248)
	::flixel::FlxObject tmp3 = Object2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(248)
	Float tmp4 = ::flixel::FlxObject_obj::computeOverlapX(tmp2,tmp3,false);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(248)
	bool tmp5 = (tmp4 != (int)0);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(248)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxObject_obj,updateTouchingFlagsX,return )

Float FlxObject_obj::computeOverlapY( ::flixel::FlxObject Object1,::flixel::FlxObject Object2,hx::Null< bool >  __o_checkMaxOverlap){
bool checkMaxOverlap = __o_checkMaxOverlap.Default(true);
	HX_STACK_FRAME("flixel.FlxObject","computeOverlapY",0x240ec73a,"flixel.FlxObject.computeOverlapY","flixel/FlxObject.hx",258,0xf0fe0d80)
	HX_STACK_ARG(Object1,"Object1")
	HX_STACK_ARG(Object2,"Object2")
	HX_STACK_ARG(checkMaxOverlap,"checkMaxOverlap")
{
		HX_STACK_LINE(259)
		Float overlap = (int)0;		HX_STACK_VAR(overlap,"overlap");
		HX_STACK_LINE(261)
		Float tmp = Object1->y;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(261)
		Float tmp1 = Object1->last->y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(261)
		Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(261)
		Float obj1delta = tmp2;		HX_STACK_VAR(obj1delta,"obj1delta");
		HX_STACK_LINE(262)
		Float tmp3 = Object2->y;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(262)
		Float tmp4 = Object2->last->y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(262)
		Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(262)
		Float obj2delta = tmp5;		HX_STACK_VAR(obj2delta,"obj2delta");
		HX_STACK_LINE(264)
		bool tmp6 = (obj1delta != obj2delta);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(264)
		if ((tmp6)){
			HX_STACK_LINE(267)
			bool tmp7 = (obj1delta > (int)0);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(267)
			Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(267)
			if ((tmp7)){
				HX_STACK_LINE(267)
				tmp8 = obj1delta;
			}
			else{
				HX_STACK_LINE(267)
				Float tmp9 = obj1delta;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(267)
				tmp8 = -(tmp9);
			}
			HX_STACK_LINE(267)
			Float obj1deltaAbs = tmp8;		HX_STACK_VAR(obj1deltaAbs,"obj1deltaAbs");
			HX_STACK_LINE(268)
			bool tmp9 = (obj2delta > (int)0);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(268)
			Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(268)
			if ((tmp9)){
				HX_STACK_LINE(268)
				tmp10 = obj2delta;
			}
			else{
				HX_STACK_LINE(268)
				Float tmp11 = obj2delta;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(268)
				tmp10 = -(tmp11);
			}
			HX_STACK_LINE(268)
			Float obj2deltaAbs = tmp10;		HX_STACK_VAR(obj2deltaAbs,"obj2deltaAbs");
			HX_STACK_LINE(270)
			::flixel::math::FlxRect tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(270)
			{
				HX_STACK_LINE(270)
				::flixel::math::FlxRect tmp12 = ::flixel::FlxObject_obj::_firstSeparateFlxRect;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(270)
				::flixel::math::FlxRect _this = tmp12;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(270)
				Float tmp13 = Object1->get_width();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(270)
				Float Width = tmp13;		HX_STACK_VAR(Width,"Width");
				HX_STACK_LINE(270)
				Float tmp14 = Object1->get_height();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(270)
				Float tmp15 = obj1deltaAbs;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(270)
				Float tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(270)
				Float Height = tmp16;		HX_STACK_VAR(Height,"Height");
				HX_STACK_LINE(270)
				_this->x = Object1->x;
				HX_STACK_LINE(270)
				Float tmp17 = Object1->y;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(270)
				bool tmp18 = (obj1delta > (int)0);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(270)
				Float tmp19;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(270)
				if ((tmp18)){
					HX_STACK_LINE(270)
					tmp19 = obj1delta;
				}
				else{
					HX_STACK_LINE(270)
					tmp19 = (int)0;
				}
				HX_STACK_LINE(270)
				Float tmp20 = (tmp17 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(270)
				_this->y = tmp20;
				HX_STACK_LINE(270)
				_this->width = Width;
				HX_STACK_LINE(270)
				_this->height = Height;
				HX_STACK_LINE(270)
				tmp11 = _this;
			}
			HX_STACK_LINE(270)
			::flixel::math::FlxRect obj1rect = tmp11;		HX_STACK_VAR(obj1rect,"obj1rect");
			HX_STACK_LINE(271)
			::flixel::math::FlxRect tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(271)
			{
				HX_STACK_LINE(271)
				::flixel::math::FlxRect tmp13 = ::flixel::FlxObject_obj::_secondSeparateFlxRect;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(271)
				::flixel::math::FlxRect _this = tmp13;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(271)
				Float tmp14 = Object2->get_width();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(271)
				Float Width = tmp14;		HX_STACK_VAR(Width,"Width");
				HX_STACK_LINE(271)
				Float tmp15 = Object2->get_height();		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(271)
				Float tmp16 = obj2deltaAbs;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(271)
				Float tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(271)
				Float Height = tmp17;		HX_STACK_VAR(Height,"Height");
				HX_STACK_LINE(271)
				_this->x = Object2->x;
				HX_STACK_LINE(271)
				Float tmp18 = Object2->y;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(271)
				bool tmp19 = (obj2delta > (int)0);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(271)
				Float tmp20;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(271)
				if ((tmp19)){
					HX_STACK_LINE(271)
					tmp20 = obj2delta;
				}
				else{
					HX_STACK_LINE(271)
					tmp20 = (int)0;
				}
				HX_STACK_LINE(271)
				Float tmp21 = (tmp18 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(271)
				_this->y = tmp21;
				HX_STACK_LINE(271)
				_this->width = Width;
				HX_STACK_LINE(271)
				_this->height = Height;
				HX_STACK_LINE(271)
				tmp12 = _this;
			}
			HX_STACK_LINE(271)
			::flixel::math::FlxRect obj2rect = tmp12;		HX_STACK_VAR(obj2rect,"obj2rect");
			HX_STACK_LINE(273)
			Float tmp13 = (obj1rect->x + obj1rect->width);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(273)
			Float tmp14 = obj2rect->x;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(273)
			bool tmp15 = (tmp13 > tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(273)
			bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(273)
			bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(273)
			if ((tmp16)){
				HX_STACK_LINE(273)
				Float tmp18 = obj1rect->x;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(273)
				Float tmp19 = (obj2rect->x + obj2rect->width);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(273)
				Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(273)
				Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(273)
				tmp17 = (tmp18 < tmp21);
			}
			else{
				HX_STACK_LINE(273)
				tmp17 = false;
			}
			HX_STACK_LINE(273)
			bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(273)
			bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(273)
			if ((tmp18)){
				HX_STACK_LINE(273)
				Float tmp20 = (obj1rect->y + obj1rect->height);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(273)
				Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(273)
				Float tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(273)
				Float tmp23 = obj2rect->y;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(273)
				tmp19 = (tmp22 > tmp23);
			}
			else{
				HX_STACK_LINE(273)
				tmp19 = false;
			}
			HX_STACK_LINE(273)
			bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(273)
			if ((tmp19)){
				HX_STACK_LINE(273)
				Float tmp21 = obj1rect->y;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(273)
				Float tmp22 = (obj2rect->y + obj2rect->height);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(273)
				Float tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(273)
				tmp20 = (tmp21 < tmp23);
			}
			else{
				HX_STACK_LINE(273)
				tmp20 = false;
			}
			HX_STACK_LINE(273)
			if ((tmp20)){
				HX_STACK_LINE(275)
				bool tmp21 = checkMaxOverlap;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(275)
				Float tmp22;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(275)
				if ((tmp21)){
					HX_STACK_LINE(275)
					Float tmp23 = (obj1deltaAbs + obj2deltaAbs);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(275)
					Float tmp24 = ::flixel::FlxObject_obj::SEPARATE_BIAS;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(275)
					tmp22 = (tmp23 + tmp24);
				}
				else{
					HX_STACK_LINE(275)
					tmp22 = (int)0;
				}
				HX_STACK_LINE(275)
				Float maxOverlap = tmp22;		HX_STACK_VAR(maxOverlap,"maxOverlap");
				HX_STACK_LINE(278)
				bool tmp23 = (obj1delta > obj2delta);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(278)
				if ((tmp23)){
					HX_STACK_LINE(280)
					Float tmp24 = Object1->y;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(280)
					Float tmp25 = Object1->get_height();		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(280)
					Float tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(280)
					Float tmp27 = Object2->y;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(280)
					Float tmp28 = (tmp26 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(280)
					overlap = tmp28;
					HX_STACK_LINE(281)
					bool tmp29 = checkMaxOverlap;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(281)
					bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(281)
					bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(281)
					if ((tmp30)){
						HX_STACK_LINE(281)
						tmp31 = (overlap > maxOverlap);
					}
					else{
						HX_STACK_LINE(281)
						tmp31 = false;
					}
					HX_STACK_LINE(281)
					bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(281)
					bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(281)
					bool tmp34;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(281)
					if ((tmp33)){
						HX_STACK_LINE(281)
						int tmp35 = (int(Object1->allowCollisions) & int((int)4096));		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(281)
						int tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(281)
						int tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(281)
						tmp34 = (tmp37 == (int)0);
					}
					else{
						HX_STACK_LINE(281)
						tmp34 = true;
					}
					HX_STACK_LINE(281)
					bool tmp35 = !(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(281)
					bool tmp36;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(281)
					if ((tmp35)){
						HX_STACK_LINE(281)
						int tmp37 = (int(Object2->allowCollisions) & int((int)256));		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(281)
						int tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(281)
						tmp36 = (tmp38 == (int)0);
					}
					else{
						HX_STACK_LINE(281)
						tmp36 = true;
					}
					HX_STACK_LINE(281)
					if ((tmp36)){
						HX_STACK_LINE(283)
						overlap = (int)0;
					}
					else{
						HX_STACK_LINE(287)
						hx::OrEq(Object1->touching,(int)4096);
						HX_STACK_LINE(288)
						hx::OrEq(Object2->touching,(int)256);
					}
				}
				else{
					HX_STACK_LINE(291)
					bool tmp24 = (obj1delta < obj2delta);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(291)
					if ((tmp24)){
						HX_STACK_LINE(293)
						Float tmp25 = Object1->y;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(293)
						Float tmp26 = Object2->get_height();		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(293)
						Float tmp27 = (tmp25 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(293)
						Float tmp28 = Object2->y;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(293)
						Float tmp29 = (tmp27 - tmp28);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(293)
						overlap = tmp29;
						HX_STACK_LINE(294)
						bool tmp30 = checkMaxOverlap;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(294)
						bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(294)
						bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(294)
						if ((tmp31)){
							HX_STACK_LINE(294)
							Float tmp33 = overlap;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(294)
							Float tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(294)
							Float tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(294)
							Float tmp36 = -(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(294)
							Float tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(294)
							Float tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(294)
							Float tmp39 = maxOverlap;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(294)
							tmp32 = (tmp38 > tmp39);
						}
						else{
							HX_STACK_LINE(294)
							tmp32 = false;
						}
						HX_STACK_LINE(294)
						bool tmp33 = !(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(294)
						bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(294)
						bool tmp35;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(294)
						if ((tmp34)){
							HX_STACK_LINE(294)
							int tmp36 = (int(Object1->allowCollisions) & int((int)256));		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(294)
							int tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(294)
							int tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(294)
							tmp35 = (tmp38 == (int)0);
						}
						else{
							HX_STACK_LINE(294)
							tmp35 = true;
						}
						HX_STACK_LINE(294)
						bool tmp36 = !(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(294)
						bool tmp37;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(294)
						if ((tmp36)){
							HX_STACK_LINE(294)
							int tmp38 = (int(Object2->allowCollisions) & int((int)4096));		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(294)
							int tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(294)
							tmp37 = (tmp39 == (int)0);
						}
						else{
							HX_STACK_LINE(294)
							tmp37 = true;
						}
						HX_STACK_LINE(294)
						if ((tmp37)){
							HX_STACK_LINE(296)
							overlap = (int)0;
						}
						else{
							HX_STACK_LINE(300)
							hx::OrEq(Object1->touching,(int)256);
							HX_STACK_LINE(301)
							hx::OrEq(Object2->touching,(int)4096);
						}
					}
				}
			}
		}
		HX_STACK_LINE(306)
		Float tmp7 = overlap;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(306)
		return tmp7;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxObject_obj,computeOverlapY,return )

bool FlxObject_obj::separateY( ::flixel::FlxObject Object1,::flixel::FlxObject Object2){
	HX_STACK_FRAME("flixel.FlxObject","separateY",0xbd292e87,"flixel.FlxObject.separateY","flixel/FlxObject.hx",317,0xf0fe0d80)
	HX_STACK_ARG(Object1,"Object1")
	HX_STACK_ARG(Object2,"Object2")
	HX_STACK_LINE(319)
	bool obj1immovable = Object1->immovable;		HX_STACK_VAR(obj1immovable,"obj1immovable");
	HX_STACK_LINE(320)
	bool obj2immovable = Object2->immovable;		HX_STACK_VAR(obj2immovable,"obj2immovable");
	HX_STACK_LINE(321)
	bool tmp = obj1immovable;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(321)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(321)
	if ((tmp)){
		HX_STACK_LINE(321)
		tmp1 = obj2immovable;
	}
	else{
		HX_STACK_LINE(321)
		tmp1 = false;
	}
	HX_STACK_LINE(321)
	if ((tmp1)){
		HX_STACK_LINE(323)
		return false;
	}
	HX_STACK_LINE(327)
	bool tmp2 = (Object1->flixelType == (int)3);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(327)
	if ((tmp2)){
		HX_STACK_LINE(329)
		::flixel::tile::FlxBaseTilemap tilemap = ((::flixel::tile::FlxBaseTilemap)(Object1));		HX_STACK_VAR(tilemap,"tilemap");
		HX_STACK_LINE(330)
		::flixel::FlxObject tmp3 = Object2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(330)
		Dynamic tmp4 = ::flixel::FlxObject_obj::separateY_dyn();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(330)
		bool tmp5 = tilemap->overlapsWithCallback(tmp3,tmp4,null(),null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(330)
		return tmp5;
	}
	HX_STACK_LINE(332)
	bool tmp3 = (Object2->flixelType == (int)3);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(332)
	if ((tmp3)){
		HX_STACK_LINE(334)
		::flixel::tile::FlxBaseTilemap tilemap = ((::flixel::tile::FlxBaseTilemap)(Object2));		HX_STACK_VAR(tilemap,"tilemap");
		HX_STACK_LINE(335)
		::flixel::FlxObject tmp4 = Object1;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(335)
		Dynamic tmp5 = ::flixel::FlxObject_obj::separateY_dyn();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(335)
		bool tmp6 = tilemap->overlapsWithCallback(tmp4,tmp5,true,null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(335)
		return tmp6;
	}
	HX_STACK_LINE(338)
	::flixel::FlxObject tmp4 = Object1;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(338)
	::flixel::FlxObject tmp5 = Object2;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(338)
	Float tmp6 = ::flixel::FlxObject_obj::computeOverlapY(tmp4,tmp5,null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(338)
	Float overlap = tmp6;		HX_STACK_VAR(overlap,"overlap");
	HX_STACK_LINE(340)
	bool tmp7 = (overlap != (int)0);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(340)
	if ((tmp7)){
		HX_STACK_LINE(342)
		Float tmp8 = Object1->y;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(342)
		Float tmp9 = Object1->last->y;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(342)
		Float tmp10 = (tmp8 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(342)
		Float obj1delta = tmp10;		HX_STACK_VAR(obj1delta,"obj1delta");
		HX_STACK_LINE(343)
		Float tmp11 = Object2->y;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(343)
		Float tmp12 = Object2->last->y;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(343)
		Float tmp13 = (tmp11 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(343)
		Float obj2delta = tmp13;		HX_STACK_VAR(obj2delta,"obj2delta");
		HX_STACK_LINE(344)
		Float tmp14 = Object1->velocity->y;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(344)
		Float obj1v = tmp14;		HX_STACK_VAR(obj1v,"obj1v");
		HX_STACK_LINE(345)
		Float tmp15 = Object2->velocity->y;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(345)
		Float obj2v = tmp15;		HX_STACK_VAR(obj2v,"obj2v");
		HX_STACK_LINE(347)
		bool tmp16 = obj1immovable;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(347)
		bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(347)
		bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(347)
		bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(347)
		if ((tmp18)){
			HX_STACK_LINE(347)
			bool tmp20 = obj2immovable;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(347)
			bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(347)
			tmp19 = !(tmp21);
		}
		else{
			HX_STACK_LINE(347)
			tmp19 = false;
		}
		HX_STACK_LINE(347)
		if ((tmp19)){
			HX_STACK_LINE(349)
			hx::MultEq(overlap,((Float)0.5));
			HX_STACK_LINE(350)
			Float tmp20 = (Object1->y - overlap);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(350)
			Object1->set_y(tmp20);
			HX_STACK_LINE(351)
			{
				HX_STACK_LINE(351)
				::flixel::FlxObject _g = Object2;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(351)
				Float tmp21 = (_g->y + overlap);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(351)
				_g->set_y(tmp21);
			}
			HX_STACK_LINE(353)
			Float tmp21 = (obj2v * obj2v);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(353)
			Float tmp22 = Object2->mass;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(353)
			Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(353)
			Float tmp24 = Object1->mass;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(353)
			Float tmp25 = (Float(tmp23) / Float(tmp24));		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(353)
			Float tmp26 = ::Math_obj::sqrt(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(353)
			bool tmp27 = (obj2v > (int)0);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(353)
			int tmp28;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(353)
			if ((tmp27)){
				HX_STACK_LINE(353)
				tmp28 = (int)1;
			}
			else{
				HX_STACK_LINE(353)
				tmp28 = (int)-1;
			}
			HX_STACK_LINE(353)
			Float tmp29 = (tmp26 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(353)
			Float obj1velocity = tmp29;		HX_STACK_VAR(obj1velocity,"obj1velocity");
			HX_STACK_LINE(354)
			Float tmp30 = (obj1v * obj1v);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(354)
			Float tmp31 = Object1->mass;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(354)
			Float tmp32 = (tmp30 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(354)
			Float tmp33 = Object2->mass;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(354)
			Float tmp34 = (Float(tmp32) / Float(tmp33));		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(354)
			Float tmp35 = ::Math_obj::sqrt(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(354)
			bool tmp36 = (obj1v > (int)0);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(354)
			int tmp37;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(354)
			if ((tmp36)){
				HX_STACK_LINE(354)
				tmp37 = (int)1;
			}
			else{
				HX_STACK_LINE(354)
				tmp37 = (int)-1;
			}
			HX_STACK_LINE(354)
			Float tmp38 = (tmp35 * tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(354)
			Float obj2velocity = tmp38;		HX_STACK_VAR(obj2velocity,"obj2velocity");
			HX_STACK_LINE(355)
			Float tmp39 = (obj1velocity + obj2velocity);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(355)
			Float tmp40 = (tmp39 * ((Float)0.5));		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(355)
			Float average = tmp40;		HX_STACK_VAR(average,"average");
			HX_STACK_LINE(356)
			hx::SubEq(obj1velocity,average);
			HX_STACK_LINE(357)
			hx::SubEq(obj2velocity,average);
			HX_STACK_LINE(358)
			Float tmp41 = average;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(358)
			Float tmp42 = (obj1velocity * Object1->elasticity);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(358)
			Float tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(358)
			Object1->velocity->set_y(tmp43);
			HX_STACK_LINE(359)
			Float tmp44 = average;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(359)
			Float tmp45 = (obj2velocity * Object2->elasticity);		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(359)
			Float tmp46 = (tmp44 + tmp45);		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(359)
			Object2->velocity->set_y(tmp46);
		}
		else{
			HX_STACK_LINE(361)
			bool tmp20 = obj1immovable;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(361)
			bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(361)
			if ((tmp21)){
				HX_STACK_LINE(363)
				Float tmp22 = (Object1->y - overlap);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(363)
				Object1->set_y(tmp22);
				HX_STACK_LINE(364)
				Float tmp23 = obj2v;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(364)
				Float tmp24 = (obj1v * Object1->elasticity);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(364)
				Float tmp25 = (tmp23 - tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(364)
				Object1->velocity->set_y(tmp25);
				HX_STACK_LINE(366)
				bool tmp26 = Object1->collisonXDrag;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(366)
				bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(366)
				bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(366)
				if ((tmp27)){
					HX_STACK_LINE(366)
					tmp28 = Object2->active;
				}
				else{
					HX_STACK_LINE(366)
					tmp28 = false;
				}
				HX_STACK_LINE(366)
				bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(366)
				bool tmp30;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(366)
				if ((tmp29)){
					HX_STACK_LINE(366)
					tmp30 = Object2->moves;
				}
				else{
					HX_STACK_LINE(366)
					tmp30 = false;
				}
				HX_STACK_LINE(366)
				bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(366)
				if ((tmp30)){
					HX_STACK_LINE(366)
					tmp31 = (obj1delta > obj2delta);
				}
				else{
					HX_STACK_LINE(366)
					tmp31 = false;
				}
				HX_STACK_LINE(366)
				if ((tmp31)){
					HX_STACK_LINE(368)
					::flixel::FlxObject _g = Object1;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(368)
					Float tmp32 = _g->x;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(368)
					Float tmp33 = Object2->x;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(368)
					Float tmp34 = Object2->last->x;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(368)
					Float tmp35 = (tmp33 - tmp34);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(368)
					Float tmp36 = (tmp32 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(368)
					_g->set_x(tmp36);
				}
			}
			else{
				HX_STACK_LINE(371)
				bool tmp22 = obj2immovable;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(371)
				bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(371)
				if ((tmp23)){
					HX_STACK_LINE(373)
					{
						HX_STACK_LINE(373)
						::flixel::FlxObject _g = Object2;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(373)
						Float tmp24 = (_g->y + overlap);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(373)
						_g->set_y(tmp24);
					}
					HX_STACK_LINE(374)
					Float tmp24 = obj1v;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(374)
					Float tmp25 = (obj2v * Object2->elasticity);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(374)
					Float tmp26 = (tmp24 - tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(374)
					Object2->velocity->set_y(tmp26);
					HX_STACK_LINE(376)
					bool tmp27 = Object2->collisonXDrag;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(376)
					bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(376)
					bool tmp29;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(376)
					if ((tmp28)){
						HX_STACK_LINE(376)
						tmp29 = Object1->active;
					}
					else{
						HX_STACK_LINE(376)
						tmp29 = false;
					}
					HX_STACK_LINE(376)
					bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(376)
					bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(376)
					if ((tmp30)){
						HX_STACK_LINE(376)
						tmp31 = Object1->moves;
					}
					else{
						HX_STACK_LINE(376)
						tmp31 = false;
					}
					HX_STACK_LINE(376)
					bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(376)
					if ((tmp31)){
						HX_STACK_LINE(376)
						tmp32 = (obj1delta < obj2delta);
					}
					else{
						HX_STACK_LINE(376)
						tmp32 = false;
					}
					HX_STACK_LINE(376)
					if ((tmp32)){
						HX_STACK_LINE(378)
						::flixel::FlxObject _g = Object2;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(378)
						Float tmp33 = _g->x;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(378)
						Float tmp34 = Object1->x;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(378)
						Float tmp35 = Object1->last->x;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(378)
						Float tmp36 = (tmp34 - tmp35);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(378)
						Float tmp37 = (tmp33 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(378)
						_g->set_x(tmp37);
					}
				}
			}
		}
		HX_STACK_LINE(381)
		return true;
	}
	HX_STACK_LINE(384)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxObject_obj,separateY,return )

bool FlxObject_obj::updateTouchingFlagsY( ::flixel::FlxObject Object1,::flixel::FlxObject Object2){
	HX_STACK_FRAME("flixel.FlxObject","updateTouchingFlagsY",0xd6a5d6ad,"flixel.FlxObject.updateTouchingFlagsY","flixel/FlxObject.hx",395,0xf0fe0d80)
	HX_STACK_ARG(Object1,"Object1")
	HX_STACK_ARG(Object2,"Object2")
	HX_STACK_LINE(397)
	bool tmp = (Object1->flixelType == (int)3);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(397)
	if ((tmp)){
		HX_STACK_LINE(399)
		::flixel::tile::FlxBaseTilemap tilemap = ((::flixel::tile::FlxBaseTilemap)(Object1));		HX_STACK_VAR(tilemap,"tilemap");
		HX_STACK_LINE(400)
		::flixel::FlxObject tmp1 = Object2;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(400)
		Dynamic tmp2 = ::flixel::FlxObject_obj::updateTouchingFlagsY_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(400)
		bool tmp3 = tilemap->overlapsWithCallback(tmp1,tmp2,null(),null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(400)
		return tmp3;
	}
	HX_STACK_LINE(402)
	bool tmp1 = (Object2->flixelType == (int)3);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(402)
	if ((tmp1)){
		HX_STACK_LINE(404)
		::flixel::tile::FlxBaseTilemap tilemap = ((::flixel::tile::FlxBaseTilemap)(Object2));		HX_STACK_VAR(tilemap,"tilemap");
		HX_STACK_LINE(405)
		::flixel::FlxObject tmp2 = Object1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(405)
		Dynamic tmp3 = ::flixel::FlxObject_obj::updateTouchingFlagsY_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(405)
		bool tmp4 = tilemap->overlapsWithCallback(tmp2,tmp3,true,null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(405)
		return tmp4;
	}
	HX_STACK_LINE(408)
	::flixel::FlxObject tmp2 = Object1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(408)
	::flixel::FlxObject tmp3 = Object2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(408)
	Float tmp4 = ::flixel::FlxObject_obj::computeOverlapY(tmp2,tmp3,false);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(408)
	bool tmp5 = (tmp4 != (int)0);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(408)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxObject_obj,updateTouchingFlagsY,return )


FlxObject_obj::FlxObject_obj()
{
}

void FlxObject_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxObject);
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(pixelPerfectRender,"pixelPerfectRender");
	HX_MARK_MEMBER_NAME(pixelPerfectPosition,"pixelPerfectPosition");
	HX_MARK_MEMBER_NAME(angle,"angle");
	HX_MARK_MEMBER_NAME(moves,"moves");
	HX_MARK_MEMBER_NAME(immovable,"immovable");
	HX_MARK_MEMBER_NAME(scrollFactor,"scrollFactor");
	HX_MARK_MEMBER_NAME(velocity,"velocity");
	HX_MARK_MEMBER_NAME(acceleration,"acceleration");
	HX_MARK_MEMBER_NAME(drag,"drag");
	HX_MARK_MEMBER_NAME(maxVelocity,"maxVelocity");
	HX_MARK_MEMBER_NAME(last,"last");
	HX_MARK_MEMBER_NAME(mass,"mass");
	HX_MARK_MEMBER_NAME(elasticity,"elasticity");
	HX_MARK_MEMBER_NAME(angularVelocity,"angularVelocity");
	HX_MARK_MEMBER_NAME(angularAcceleration,"angularAcceleration");
	HX_MARK_MEMBER_NAME(angularDrag,"angularDrag");
	HX_MARK_MEMBER_NAME(maxAngular,"maxAngular");
	HX_MARK_MEMBER_NAME(health,"health");
	HX_MARK_MEMBER_NAME(touching,"touching");
	HX_MARK_MEMBER_NAME(wasTouching,"wasTouching");
	HX_MARK_MEMBER_NAME(allowCollisions,"allowCollisions");
	HX_MARK_MEMBER_NAME(collisonXDrag,"collisonXDrag");
	HX_MARK_MEMBER_NAME(path,"path");
	HX_MARK_MEMBER_NAME(_point,"_point");
	HX_MARK_MEMBER_NAME(_rect,"_rect");
	::flixel::FlxBasic_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxObject_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(pixelPerfectRender,"pixelPerfectRender");
	HX_VISIT_MEMBER_NAME(pixelPerfectPosition,"pixelPerfectPosition");
	HX_VISIT_MEMBER_NAME(angle,"angle");
	HX_VISIT_MEMBER_NAME(moves,"moves");
	HX_VISIT_MEMBER_NAME(immovable,"immovable");
	HX_VISIT_MEMBER_NAME(scrollFactor,"scrollFactor");
	HX_VISIT_MEMBER_NAME(velocity,"velocity");
	HX_VISIT_MEMBER_NAME(acceleration,"acceleration");
	HX_VISIT_MEMBER_NAME(drag,"drag");
	HX_VISIT_MEMBER_NAME(maxVelocity,"maxVelocity");
	HX_VISIT_MEMBER_NAME(last,"last");
	HX_VISIT_MEMBER_NAME(mass,"mass");
	HX_VISIT_MEMBER_NAME(elasticity,"elasticity");
	HX_VISIT_MEMBER_NAME(angularVelocity,"angularVelocity");
	HX_VISIT_MEMBER_NAME(angularAcceleration,"angularAcceleration");
	HX_VISIT_MEMBER_NAME(angularDrag,"angularDrag");
	HX_VISIT_MEMBER_NAME(maxAngular,"maxAngular");
	HX_VISIT_MEMBER_NAME(health,"health");
	HX_VISIT_MEMBER_NAME(touching,"touching");
	HX_VISIT_MEMBER_NAME(wasTouching,"wasTouching");
	HX_VISIT_MEMBER_NAME(allowCollisions,"allowCollisions");
	HX_VISIT_MEMBER_NAME(collisonXDrag,"collisonXDrag");
	HX_VISIT_MEMBER_NAME(path,"path");
	HX_VISIT_MEMBER_NAME(_point,"_point");
	HX_VISIT_MEMBER_NAME(_rect,"_rect");
	::flixel::FlxBasic_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxObject_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"drag") ) { return drag; }
		if (HX_FIELD_EQ(inName,"last") ) { return last; }
		if (HX_FIELD_EQ(inName,"mass") ) { return mass; }
		if (HX_FIELD_EQ(inName,"path") ) { return path; }
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		if (HX_FIELD_EQ(inName,"hurt") ) { return hurt_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return inCallProp == hx::paccAlways ? get_width() : width; }
		if (HX_FIELD_EQ(inName,"angle") ) { return angle; }
		if (HX_FIELD_EQ(inName,"moves") ) { return moves; }
		if (HX_FIELD_EQ(inName,"solid") ) { if (inCallProp == hx::paccAlways) return get_solid(); }
		if (HX_FIELD_EQ(inName,"_rect") ) { return _rect; }
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return set_x_dyn(); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return set_y_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return inCallProp == hx::paccAlways ? get_height() : height; }
		if (HX_FIELD_EQ(inName,"health") ) { return health; }
		if (HX_FIELD_EQ(inName,"_point") ) { return _point; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"setSize") ) { return setSize_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"velocity") ) { return velocity; }
		if (HX_FIELD_EQ(inName,"touching") ) { return touching; }
		if (HX_FIELD_EQ(inName,"initVars") ) { return initVars_dyn(); }
		if (HX_FIELD_EQ(inName,"overlaps") ) { return overlaps_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"set_path") ) { return set_path_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"immovable") ) { return immovable; }
		if (HX_FIELD_EQ(inName,"getHitbox") ) { return getHitbox_dyn(); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return set_width_dyn(); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		if (HX_FIELD_EQ(inName,"get_solid") ) { return get_solid_dyn(); }
		if (HX_FIELD_EQ(inName,"set_solid") ) { return set_solid_dyn(); }
		if (HX_FIELD_EQ(inName,"set_angle") ) { return set_angle_dyn(); }
		if (HX_FIELD_EQ(inName,"set_moves") ) { return set_moves_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"elasticity") ) { return elasticity; }
		if (HX_FIELD_EQ(inName,"maxAngular") ) { return maxAngular; }
		if (HX_FIELD_EQ(inName,"overlapsAt") ) { return overlapsAt_dyn(); }
		if (HX_FIELD_EQ(inName,"isOnScreen") ) { return isOnScreen_dyn(); }
		if (HX_FIELD_EQ(inName,"isTouching") ) { return isTouching_dyn(); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return set_height_dyn(); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"maxVelocity") ) { return maxVelocity; }
		if (HX_FIELD_EQ(inName,"angularDrag") ) { return angularDrag; }
		if (HX_FIELD_EQ(inName,"wasTouching") ) { return wasTouching; }
		if (HX_FIELD_EQ(inName,"getPosition") ) { return getPosition_dyn(); }
		if (HX_FIELD_EQ(inName,"getMidpoint") ) { return getMidpoint_dyn(); }
		if (HX_FIELD_EQ(inName,"justTouched") ) { return justTouched_dyn(); }
		if (HX_FIELD_EQ(inName,"setPosition") ) { return setPosition_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"scrollFactor") ) { return scrollFactor; }
		if (HX_FIELD_EQ(inName,"acceleration") ) { return acceleration; }
		if (HX_FIELD_EQ(inName,"updateMotion") ) { return updateMotion_dyn(); }
		if (HX_FIELD_EQ(inName,"screenCenter") ) { return screenCenter_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"collisonXDrag") ) { return collisonXDrag; }
		if (HX_FIELD_EQ(inName,"overlapsPoint") ) { return overlapsPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"inWorldBounds") ) { return inWorldBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"set_immovable") ) { return set_immovable_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"initMotionVars") ) { return initMotionVars_dyn(); }
		if (HX_FIELD_EQ(inName,"getBoundingBox") ) { return getBoundingBox_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"angularVelocity") ) { return angularVelocity; }
		if (HX_FIELD_EQ(inName,"allowCollisions") ) { return allowCollisions; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"overlapsCallback") ) { return overlapsCallback_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getScreenPosition") ) { return getScreenPosition_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"pixelPerfectRender") ) { return pixelPerfectRender; }
		if (HX_FIELD_EQ(inName,"overlapsAtCallback") ) { return overlapsAtCallback_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"angularAcceleration") ) { return angularAcceleration; }
		if (HX_FIELD_EQ(inName,"set_allowCollisions") ) { return set_allowCollisions_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"pixelPerfectPosition") ) { return pixelPerfectPosition; }
		if (HX_FIELD_EQ(inName,"isPixelPerfectRender") ) { return isPixelPerfectRender_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"set_pixelPerfectRender") ) { return set_pixelPerfectRender_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxObject_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"separate") ) { outValue = separate_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"separateX") ) { outValue = separateX_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"separateY") ) { outValue = separateY_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"SEPARATE_BIAS") ) { outValue = SEPARATE_BIAS; return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"computeOverlapX") ) { outValue = computeOverlapX_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"computeOverlapY") ) { outValue = computeOverlapY_dyn(); return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"updateTouchingFlags") ) { outValue = updateTouchingFlags_dyn(); return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"updateTouchingFlagsX") ) { outValue = updateTouchingFlagsX_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"updateTouchingFlagsY") ) { outValue = updateTouchingFlagsY_dyn(); return true;  }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_firstSeparateFlxRect") ) { outValue = _firstSeparateFlxRect; return true;  }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_secondSeparateFlxRect") ) { outValue = _secondSeparateFlxRect; return true;  }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"defaultPixelPerfectPosition") ) { outValue = defaultPixelPerfectPosition; return true;  }
	}
	return false;
}

Dynamic FlxObject_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp == hx::paccAlways) return set_x(inValue);x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == hx::paccAlways) return set_y(inValue);y=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"drag") ) { drag=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"last") ) { last=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mass") ) { mass=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"path") ) { if (inCallProp == hx::paccAlways) return set_path(inValue);path=inValue.Cast< ::flixel::util::FlxPath >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == hx::paccAlways) return set_width(inValue);width=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"angle") ) { if (inCallProp == hx::paccAlways) return set_angle(inValue);angle=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"moves") ) { if (inCallProp == hx::paccAlways) return set_moves(inValue);moves=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"solid") ) { if (inCallProp == hx::paccAlways) return set_solid(inValue); }
		if (HX_FIELD_EQ(inName,"_rect") ) { _rect=inValue.Cast< ::flixel::math::FlxRect >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp == hx::paccAlways) return set_height(inValue);height=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"health") ) { health=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_point") ) { _point=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"velocity") ) { velocity=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"touching") ) { touching=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"immovable") ) { if (inCallProp == hx::paccAlways) return set_immovable(inValue);immovable=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"elasticity") ) { elasticity=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxAngular") ) { maxAngular=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"maxVelocity") ) { maxVelocity=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"angularDrag") ) { angularDrag=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wasTouching") ) { wasTouching=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"scrollFactor") ) { scrollFactor=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"acceleration") ) { acceleration=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"collisonXDrag") ) { collisonXDrag=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"angularVelocity") ) { angularVelocity=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"allowCollisions") ) { if (inCallProp == hx::paccAlways) return set_allowCollisions(inValue);allowCollisions=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"pixelPerfectRender") ) { if (inCallProp == hx::paccAlways) return set_pixelPerfectRender(inValue);pixelPerfectRender=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"angularAcceleration") ) { angularAcceleration=inValue.Cast< Float >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"pixelPerfectPosition") ) { pixelPerfectPosition=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxObject_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"SEPARATE_BIAS") ) { SEPARATE_BIAS=ioValue.Cast< Float >(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_firstSeparateFlxRect") ) { _firstSeparateFlxRect=ioValue.Cast< ::flixel::math::FlxRect >(); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_secondSeparateFlxRect") ) { _secondSeparateFlxRect=ioValue.Cast< ::flixel::math::FlxRect >(); return true; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"defaultPixelPerfectPosition") ) { defaultPixelPerfectPosition=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

void FlxObject_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("pixelPerfectRender","\xdd","\x59","\x4f","\x2f"));
	outFields->push(HX_HCSTRING("pixelPerfectPosition","\xf0","\x7e","\x5e","\x3d"));
	outFields->push(HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22"));
	outFields->push(HX_HCSTRING("moves","\x42","\xcc","\x65","\x0c"));
	outFields->push(HX_HCSTRING("immovable","\x0a","\x27","\x70","\x27"));
	outFields->push(HX_HCSTRING("solid","\x2b","\xb4","\xc5","\x80"));
	outFields->push(HX_HCSTRING("scrollFactor","\xbc","\xec","\xcf","\x3b"));
	outFields->push(HX_HCSTRING("velocity","\x1d","\x02","\xfe","\x1e"));
	outFields->push(HX_HCSTRING("acceleration","\x40","\x00","\x61","\x9a"));
	outFields->push(HX_HCSTRING("drag","\xf4","\x2b","\x70","\x42"));
	outFields->push(HX_HCSTRING("maxVelocity","\xe1","\x0c","\xc4","\x94"));
	outFields->push(HX_HCSTRING("last","\x56","\x0a","\xad","\x47"));
	outFields->push(HX_HCSTRING("mass","\xf4","\x40","\x56","\x48"));
	outFields->push(HX_HCSTRING("elasticity","\x79","\x23","\xb4","\x4d"));
	outFields->push(HX_HCSTRING("angularVelocity","\x1f","\x1f","\xfe","\x58"));
	outFields->push(HX_HCSTRING("angularAcceleration","\x42","\xc6","\x00","\x9a"));
	outFields->push(HX_HCSTRING("angularDrag","\xf6","\x1f","\x19","\x9c"));
	outFields->push(HX_HCSTRING("maxAngular","\x9e","\x28","\xf6","\xc2"));
	outFields->push(HX_HCSTRING("health","\x9c","\x28","\x06","\xfd"));
	outFields->push(HX_HCSTRING("touching","\x83","\x16","\x25","\x00"));
	outFields->push(HX_HCSTRING("wasTouching","\xcc","\x44","\xe4","\x5f"));
	outFields->push(HX_HCSTRING("allowCollisions","\xaa","\xc9","\xd9","\x59"));
	outFields->push(HX_HCSTRING("collisonXDrag","\x97","\xca","\xfa","\x0a"));
	outFields->push(HX_HCSTRING("path","\xa5","\xe5","\x51","\x4a"));
	outFields->push(HX_HCSTRING("_point","\x91","\xfb","\x76","\xc2"));
	outFields->push(HX_HCSTRING("_rect","\x03","\x69","\xb8","\xfe"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(FlxObject_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(FlxObject_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(FlxObject_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsFloat,(int)offsetof(FlxObject_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxObject_obj,pixelPerfectRender),HX_HCSTRING("pixelPerfectRender","\xdd","\x59","\x4f","\x2f")},
	{hx::fsBool,(int)offsetof(FlxObject_obj,pixelPerfectPosition),HX_HCSTRING("pixelPerfectPosition","\xf0","\x7e","\x5e","\x3d")},
	{hx::fsFloat,(int)offsetof(FlxObject_obj,angle),HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22")},
	{hx::fsBool,(int)offsetof(FlxObject_obj,moves),HX_HCSTRING("moves","\x42","\xcc","\x65","\x0c")},
	{hx::fsBool,(int)offsetof(FlxObject_obj,immovable),HX_HCSTRING("immovable","\x0a","\x27","\x70","\x27")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxObject_obj,scrollFactor),HX_HCSTRING("scrollFactor","\xbc","\xec","\xcf","\x3b")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxObject_obj,velocity),HX_HCSTRING("velocity","\x1d","\x02","\xfe","\x1e")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxObject_obj,acceleration),HX_HCSTRING("acceleration","\x40","\x00","\x61","\x9a")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxObject_obj,drag),HX_HCSTRING("drag","\xf4","\x2b","\x70","\x42")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxObject_obj,maxVelocity),HX_HCSTRING("maxVelocity","\xe1","\x0c","\xc4","\x94")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxObject_obj,last),HX_HCSTRING("last","\x56","\x0a","\xad","\x47")},
	{hx::fsFloat,(int)offsetof(FlxObject_obj,mass),HX_HCSTRING("mass","\xf4","\x40","\x56","\x48")},
	{hx::fsFloat,(int)offsetof(FlxObject_obj,elasticity),HX_HCSTRING("elasticity","\x79","\x23","\xb4","\x4d")},
	{hx::fsFloat,(int)offsetof(FlxObject_obj,angularVelocity),HX_HCSTRING("angularVelocity","\x1f","\x1f","\xfe","\x58")},
	{hx::fsFloat,(int)offsetof(FlxObject_obj,angularAcceleration),HX_HCSTRING("angularAcceleration","\x42","\xc6","\x00","\x9a")},
	{hx::fsFloat,(int)offsetof(FlxObject_obj,angularDrag),HX_HCSTRING("angularDrag","\xf6","\x1f","\x19","\x9c")},
	{hx::fsFloat,(int)offsetof(FlxObject_obj,maxAngular),HX_HCSTRING("maxAngular","\x9e","\x28","\xf6","\xc2")},
	{hx::fsFloat,(int)offsetof(FlxObject_obj,health),HX_HCSTRING("health","\x9c","\x28","\x06","\xfd")},
	{hx::fsInt,(int)offsetof(FlxObject_obj,touching),HX_HCSTRING("touching","\x83","\x16","\x25","\x00")},
	{hx::fsInt,(int)offsetof(FlxObject_obj,wasTouching),HX_HCSTRING("wasTouching","\xcc","\x44","\xe4","\x5f")},
	{hx::fsInt,(int)offsetof(FlxObject_obj,allowCollisions),HX_HCSTRING("allowCollisions","\xaa","\xc9","\xd9","\x59")},
	{hx::fsBool,(int)offsetof(FlxObject_obj,collisonXDrag),HX_HCSTRING("collisonXDrag","\x97","\xca","\xfa","\x0a")},
	{hx::fsObject /*::flixel::util::FlxPath*/ ,(int)offsetof(FlxObject_obj,path),HX_HCSTRING("path","\xa5","\xe5","\x51","\x4a")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxObject_obj,_point),HX_HCSTRING("_point","\x91","\xfb","\x76","\xc2")},
	{hx::fsObject /*::flixel::math::FlxRect*/ ,(int)offsetof(FlxObject_obj,_rect),HX_HCSTRING("_rect","\x03","\x69","\xb8","\xfe")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsBool,(void *) &FlxObject_obj::defaultPixelPerfectPosition,HX_HCSTRING("defaultPixelPerfectPosition","\x51","\x0a","\xc2","\xb0")},
	{hx::fsFloat,(void *) &FlxObject_obj::SEPARATE_BIAS,HX_HCSTRING("SEPARATE_BIAS","\x15","\x78","\x21","\xa0")},
	{hx::fsInt,(void *) &FlxObject_obj::LEFT,HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32")},
	{hx::fsInt,(void *) &FlxObject_obj::RIGHT,HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67")},
	{hx::fsInt,(void *) &FlxObject_obj::UP,HX_HCSTRING("UP","\x5b","\x4a","\x00","\x00")},
	{hx::fsInt,(void *) &FlxObject_obj::DOWN,HX_HCSTRING("DOWN","\x62","\xc0","\x2e","\x2d")},
	{hx::fsInt,(void *) &FlxObject_obj::NONE,HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33")},
	{hx::fsInt,(void *) &FlxObject_obj::CEILING,HX_HCSTRING("CEILING","\xdd","\x32","\x72","\xb3")},
	{hx::fsInt,(void *) &FlxObject_obj::FLOOR,HX_HCSTRING("FLOOR","\xac","\x09","\x85","\x80")},
	{hx::fsInt,(void *) &FlxObject_obj::WALL,HX_HCSTRING("WALL","\x0a","\x25","\xb3","\x39")},
	{hx::fsInt,(void *) &FlxObject_obj::ANY,HX_HCSTRING("ANY","\xcc","\x96","\x31","\x00")},
	{hx::fsObject /*::flixel::math::FlxRect*/ ,(void *) &FlxObject_obj::_firstSeparateFlxRect,HX_HCSTRING("_firstSeparateFlxRect","\x22","\xb9","\x2f","\x5e")},
	{hx::fsObject /*::flixel::math::FlxRect*/ ,(void *) &FlxObject_obj::_secondSeparateFlxRect,HX_HCSTRING("_secondSeparateFlxRect","\xc0","\xbd","\xfc","\xda")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("pixelPerfectRender","\xdd","\x59","\x4f","\x2f"),
	HX_HCSTRING("pixelPerfectPosition","\xf0","\x7e","\x5e","\x3d"),
	HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22"),
	HX_HCSTRING("moves","\x42","\xcc","\x65","\x0c"),
	HX_HCSTRING("immovable","\x0a","\x27","\x70","\x27"),
	HX_HCSTRING("scrollFactor","\xbc","\xec","\xcf","\x3b"),
	HX_HCSTRING("velocity","\x1d","\x02","\xfe","\x1e"),
	HX_HCSTRING("acceleration","\x40","\x00","\x61","\x9a"),
	HX_HCSTRING("drag","\xf4","\x2b","\x70","\x42"),
	HX_HCSTRING("maxVelocity","\xe1","\x0c","\xc4","\x94"),
	HX_HCSTRING("last","\x56","\x0a","\xad","\x47"),
	HX_HCSTRING("mass","\xf4","\x40","\x56","\x48"),
	HX_HCSTRING("elasticity","\x79","\x23","\xb4","\x4d"),
	HX_HCSTRING("angularVelocity","\x1f","\x1f","\xfe","\x58"),
	HX_HCSTRING("angularAcceleration","\x42","\xc6","\x00","\x9a"),
	HX_HCSTRING("angularDrag","\xf6","\x1f","\x19","\x9c"),
	HX_HCSTRING("maxAngular","\x9e","\x28","\xf6","\xc2"),
	HX_HCSTRING("health","\x9c","\x28","\x06","\xfd"),
	HX_HCSTRING("touching","\x83","\x16","\x25","\x00"),
	HX_HCSTRING("wasTouching","\xcc","\x44","\xe4","\x5f"),
	HX_HCSTRING("allowCollisions","\xaa","\xc9","\xd9","\x59"),
	HX_HCSTRING("collisonXDrag","\x97","\xca","\xfa","\x0a"),
	HX_HCSTRING("path","\xa5","\xe5","\x51","\x4a"),
	HX_HCSTRING("_point","\x91","\xfb","\x76","\xc2"),
	HX_HCSTRING("_rect","\x03","\x69","\xb8","\xfe"),
	HX_HCSTRING("initVars","\xdc","\x5a","\x00","\x53"),
	HX_HCSTRING("initMotionVars","\x32","\xe4","\x28","\x65"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("updateMotion","\x1f","\x2d","\x21","\xcb"),
	HX_HCSTRING("draw","\x04","\x2c","\x70","\x42"),
	HX_HCSTRING("overlaps","\x0c","\xd3","\x2a","\x45"),
	HX_HCSTRING("overlapsCallback","\xf1","\x14","\xbf","\xb4"),
	HX_HCSTRING("overlapsAt","\x1f","\xe7","\xce","\x03"),
	HX_HCSTRING("overlapsAtCallback","\x04","\xf4","\x81","\x3b"),
	HX_HCSTRING("overlapsPoint","\xa4","\xc5","\xbd","\x35"),
	HX_HCSTRING("inWorldBounds","\x82","\x46","\xf2","\xf1"),
	HX_HCSTRING("getScreenPosition","\x6b","\x93","\x88","\x24"),
	HX_HCSTRING("getPosition","\x5f","\x63","\xee","\xf0"),
	HX_HCSTRING("getMidpoint","\x7e","\xd8","\xfb","\x50"),
	HX_HCSTRING("getHitbox","\xce","\x76","\x7e","\xd3"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	HX_HCSTRING("isOnScreen","\xf5","\x43","\xb9","\xa1"),
	HX_HCSTRING("isPixelPerfectRender","\x67","\x1c","\xf9","\x26"),
	HX_HCSTRING("isTouching","\x8d","\x28","\xd4","\x7a"),
	HX_HCSTRING("justTouched","\x12","\x59","\xb8","\x91"),
	HX_HCSTRING("hurt","\x0f","\x5c","\x17","\x45"),
	HX_HCSTRING("screenCenter","\x61","\x2e","\xf9","\xe2"),
	HX_HCSTRING("setPosition","\x6b","\x6a","\x5b","\xfb"),
	HX_HCSTRING("setSize","\x83","\xe1","\xd7","\x11"),
	HX_HCSTRING("getBoundingBox","\x11","\xe8","\x45","\x0d"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("set_x","\x5b","\x9b","\x2f","\x7a"),
	HX_HCSTRING("set_y","\x5c","\x9b","\x2f","\x7a"),
	HX_HCSTRING("set_width","\x69","\xfe","\x5c","\xf1"),
	HX_HCSTRING("set_height","\x24","\x16","\x51","\xf6"),
	HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"),
	HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"),
	HX_HCSTRING("get_solid","\x82","\x10","\x6f","\xc4"),
	HX_HCSTRING("set_solid","\x8e","\xfc","\xbf","\xa7"),
	HX_HCSTRING("set_angle","\x36","\x8c","\xdc","\x49"),
	HX_HCSTRING("set_moves","\xa5","\x14","\x60","\x33"),
	HX_HCSTRING("set_immovable","\xed","\xdc","\xd9","\x2d"),
	HX_HCSTRING("set_pixelPerfectRender","\x9a","\x4f","\x8f","\xbc"),
	HX_HCSTRING("set_allowCollisions","\xcd","\x8b","\x81","\x21"),
	HX_HCSTRING("set_path","\xa2","\xfa","\x69","\x78"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxObject_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxObject_obj::defaultPixelPerfectPosition,"defaultPixelPerfectPosition");
	HX_MARK_MEMBER_NAME(FlxObject_obj::SEPARATE_BIAS,"SEPARATE_BIAS");
	HX_MARK_MEMBER_NAME(FlxObject_obj::LEFT,"LEFT");
	HX_MARK_MEMBER_NAME(FlxObject_obj::RIGHT,"RIGHT");
	HX_MARK_MEMBER_NAME(FlxObject_obj::UP,"UP");
	HX_MARK_MEMBER_NAME(FlxObject_obj::DOWN,"DOWN");
	HX_MARK_MEMBER_NAME(FlxObject_obj::NONE,"NONE");
	HX_MARK_MEMBER_NAME(FlxObject_obj::CEILING,"CEILING");
	HX_MARK_MEMBER_NAME(FlxObject_obj::FLOOR,"FLOOR");
	HX_MARK_MEMBER_NAME(FlxObject_obj::WALL,"WALL");
	HX_MARK_MEMBER_NAME(FlxObject_obj::ANY,"ANY");
	HX_MARK_MEMBER_NAME(FlxObject_obj::_firstSeparateFlxRect,"_firstSeparateFlxRect");
	HX_MARK_MEMBER_NAME(FlxObject_obj::_secondSeparateFlxRect,"_secondSeparateFlxRect");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxObject_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::defaultPixelPerfectPosition,"defaultPixelPerfectPosition");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::SEPARATE_BIAS,"SEPARATE_BIAS");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::LEFT,"LEFT");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::RIGHT,"RIGHT");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::UP,"UP");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::DOWN,"DOWN");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::NONE,"NONE");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::CEILING,"CEILING");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::FLOOR,"FLOOR");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::WALL,"WALL");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::ANY,"ANY");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::_firstSeparateFlxRect,"_firstSeparateFlxRect");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::_secondSeparateFlxRect,"_secondSeparateFlxRect");
};

#endif

hx::Class FlxObject_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("defaultPixelPerfectPosition","\x51","\x0a","\xc2","\xb0"),
	HX_HCSTRING("SEPARATE_BIAS","\x15","\x78","\x21","\xa0"),
	HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32"),
	HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67"),
	HX_HCSTRING("UP","\x5b","\x4a","\x00","\x00"),
	HX_HCSTRING("DOWN","\x62","\xc0","\x2e","\x2d"),
	HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33"),
	HX_HCSTRING("CEILING","\xdd","\x32","\x72","\xb3"),
	HX_HCSTRING("FLOOR","\xac","\x09","\x85","\x80"),
	HX_HCSTRING("WALL","\x0a","\x25","\xb3","\x39"),
	HX_HCSTRING("ANY","\xcc","\x96","\x31","\x00"),
	HX_HCSTRING("_firstSeparateFlxRect","\x22","\xb9","\x2f","\x5e"),
	HX_HCSTRING("_secondSeparateFlxRect","\xc0","\xbd","\xfc","\xda"),
	HX_HCSTRING("separate","\x63","\x1f","\x1c","\x07"),
	HX_HCSTRING("updateTouchingFlags","\xfb","\x01","\xac","\xbd"),
	HX_HCSTRING("computeOverlapX","\x88","\xa5","\xab","\xdc"),
	HX_HCSTRING("separateX","\x95","\x57","\x7f","\x31"),
	HX_HCSTRING("updateTouchingFlagsX","\xfd","\xb9","\xd5","\x38"),
	HX_HCSTRING("computeOverlapY","\x89","\xa5","\xab","\xdc"),
	HX_HCSTRING("separateY","\x96","\x57","\x7f","\x31"),
	HX_HCSTRING("updateTouchingFlagsY","\xfe","\xb9","\xd5","\x38"),
	::String(null()) };

void FlxObject_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.FlxObject","\x1f","\x50","\x95","\x35");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxObject_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxObject_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxObject_obj >;
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

void FlxObject_obj::__boot()
{
	defaultPixelPerfectPosition= false;
	SEPARATE_BIAS= ((Float)4);
	LEFT= (int)1;
	RIGHT= (int)16;
	UP= (int)256;
	DOWN= (int)4096;
	NONE= (int)0;
	CEILING= (int)256;
	FLOOR= (int)4096;
	WALL= (int)17;
	ANY= (int)4369;
struct _Function_0_1{
	inline static ::flixel::math::FlxRect Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/FlxObject.hx",70,0xf0fe0d80)
		{
			HX_STACK_LINE(70)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(70)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(70)
			Float Width = (int)0;		HX_STACK_VAR(Width,"Width");
			HX_STACK_LINE(70)
			Float Height = (int)0;		HX_STACK_VAR(Height,"Height");
			HX_STACK_LINE(70)
			::flixel::math::FlxRect tmp;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(70)
			{
				HX_STACK_LINE(70)
				::flixel::util::FlxPool_flixel_math_FlxRect tmp1 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(70)
				::flixel::math::FlxRect tmp2 = tmp1->get();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(70)
				::flixel::math::FlxRect _this = tmp2;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(70)
				_this->x = X;
				HX_STACK_LINE(70)
				_this->y = Y;
				HX_STACK_LINE(70)
				_this->width = Width;
				HX_STACK_LINE(70)
				_this->height = Height;
				HX_STACK_LINE(70)
				tmp = _this;
			}
			HX_STACK_LINE(70)
			::flixel::math::FlxRect rect = tmp;		HX_STACK_VAR(rect,"rect");
			HX_STACK_LINE(70)
			rect->_inPool = false;
			HX_STACK_LINE(70)
			return rect;
		}
		return null();
	}
};
	_firstSeparateFlxRect= _Function_0_1::Block();
struct _Function_0_2{
	inline static ::flixel::math::FlxRect Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/FlxObject.hx",72,0xf0fe0d80)
		{
			HX_STACK_LINE(72)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(72)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(72)
			Float Width = (int)0;		HX_STACK_VAR(Width,"Width");
			HX_STACK_LINE(72)
			Float Height = (int)0;		HX_STACK_VAR(Height,"Height");
			HX_STACK_LINE(72)
			::flixel::math::FlxRect tmp;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(72)
			{
				HX_STACK_LINE(72)
				::flixel::util::FlxPool_flixel_math_FlxRect tmp1 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(72)
				::flixel::math::FlxRect tmp2 = tmp1->get();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(72)
				::flixel::math::FlxRect _this = tmp2;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(72)
				_this->x = X;
				HX_STACK_LINE(72)
				_this->y = Y;
				HX_STACK_LINE(72)
				_this->width = Width;
				HX_STACK_LINE(72)
				_this->height = Height;
				HX_STACK_LINE(72)
				tmp = _this;
			}
			HX_STACK_LINE(72)
			::flixel::math::FlxRect rect = tmp;		HX_STACK_VAR(rect,"rect");
			HX_STACK_LINE(72)
			rect->_inPool = false;
			HX_STACK_LINE(72)
			return rect;
		}
		return null();
	}
};
	_secondSeparateFlxRect= _Function_0_2::Block();
}

} // end namespace flixel
