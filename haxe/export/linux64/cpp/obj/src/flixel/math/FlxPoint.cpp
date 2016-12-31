#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_flixel_math_FlxMath
#include <flixel/math/FlxMath.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
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
#ifndef INCLUDED_openfl__legacy_geom_Matrix
#include <openfl/_legacy/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Point
#include <openfl/_legacy/geom/Point.h>
#endif
namespace flixel{
namespace math{

Void FlxPoint_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y)
{
HX_STACK_FRAME("flixel.math.FlxPoint","new",0x5991ca64,"flixel.math.FlxPoint.new","flixel/math/FlxPoint.hx",12,0xb3e1cd2c)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
{
	HX_STACK_LINE(52)
	this->_inPool = false;
	HX_STACK_LINE(51)
	this->_weak = false;
	HX_STACK_LINE(49)
	this->y = ((Float)0);
	HX_STACK_LINE(48)
	this->x = ((Float)0);
	HX_STACK_LINE(57)
	Float tmp = X;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(57)
	Float tmp1 = Y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(57)
	this->set(tmp,tmp1);
}
;
	return null();
}

//FlxPoint_obj::~FlxPoint_obj() { }

Dynamic FlxPoint_obj::__CreateEmpty() { return  new FlxPoint_obj; }
hx::ObjectPtr< FlxPoint_obj > FlxPoint_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y)
{  hx::ObjectPtr< FlxPoint_obj > _result_ = new FlxPoint_obj();
	_result_->__construct(__o_X,__o_Y);
	return _result_;}

Dynamic FlxPoint_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxPoint_obj > _result_ = new FlxPoint_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

hx::Object *FlxPoint_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::util::IFlxPooled_obj)) return operator ::flixel::util::IFlxPooled_obj *();
	if (inType==typeid( ::flixel::util::IFlxDestroyable_obj)) return operator ::flixel::util::IFlxDestroyable_obj *();
	return super::__ToInterface(inType);
}

FlxPoint_obj::operator ::flixel::util::IFlxPooled_obj *()
	{ return new ::flixel::util::IFlxPooled_delegate_< FlxPoint_obj >(this); }
FlxPoint_obj::operator ::flixel::util::IFlxDestroyable_obj *()
	{ return new ::flixel::util::IFlxDestroyable_delegate_< FlxPoint_obj >(this); }
Void FlxPoint_obj::put( ){
{
		HX_STACK_FRAME("flixel.math.FlxPoint","put",0x59935cd3,"flixel.math.FlxPoint.put","flixel/math/FlxPoint.hx",64,0xb3e1cd2c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(65)
		bool tmp = this->_inPool;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(65)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(65)
		if ((tmp1)){
			HX_STACK_LINE(67)
			this->_inPool = true;
			HX_STACK_LINE(68)
			this->_weak = false;
			HX_STACK_LINE(69)
			::flixel::util::FlxPool_flixel_math_FlxPoint tmp2 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(69)
			tmp2->putUnsafe(hx::ObjectPtr<OBJ_>(this));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxPoint_obj,put,(void))

Void FlxPoint_obj::putWeak( ){
{
		HX_STACK_FRAME("flixel.math.FlxPoint","putWeak",0xb3cc4aeb,"flixel.math.FlxPoint.putWeak","flixel/math/FlxPoint.hx",77,0xb3e1cd2c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(78)
		bool tmp = this->_weak;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(78)
		if ((tmp)){
			HX_STACK_LINE(80)
			this->put();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxPoint_obj,putWeak,(void))

::flixel::math::FlxPoint FlxPoint_obj::set( hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y){
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
	HX_STACK_FRAME("flixel.math.FlxPoint","set",0x599595a6,"flixel.math.FlxPoint.set","flixel/math/FlxPoint.hx",92,0xb3e1cd2c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
{
		HX_STACK_LINE(93)
		Float tmp = X;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(93)
		this->set_x(tmp);
		HX_STACK_LINE(94)
		Float tmp1 = Y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(94)
		this->set_y(tmp1);
		HX_STACK_LINE(95)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxPoint_obj,set,return )

::flixel::math::FlxPoint FlxPoint_obj::add( hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y){
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
	HX_STACK_FRAME("flixel.math.FlxPoint","add",0x5987ec25,"flixel.math.FlxPoint.add","flixel/math/FlxPoint.hx",106,0xb3e1cd2c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
{
		HX_STACK_LINE(107)
		{
			HX_STACK_LINE(107)
			::flixel::math::FlxPoint _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(107)
			Float tmp = (_g->x + X);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(107)
			_g->set_x(tmp);
		}
		HX_STACK_LINE(108)
		{
			HX_STACK_LINE(108)
			::flixel::math::FlxPoint _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(108)
			Float tmp = (_g->y + Y);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(108)
			_g->set_y(tmp);
		}
		HX_STACK_LINE(109)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxPoint_obj,add,return )

::flixel::math::FlxPoint FlxPoint_obj::addPoint( ::flixel::math::FlxPoint point){
	HX_STACK_FRAME("flixel.math.FlxPoint","addPoint",0x1b3211eb,"flixel.math.FlxPoint.addPoint","flixel/math/FlxPoint.hx",119,0xb3e1cd2c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(120)
	{
		HX_STACK_LINE(120)
		::flixel::math::FlxPoint _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(120)
		Float tmp = (_g->x + point->x);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(120)
		_g->set_x(tmp);
	}
	HX_STACK_LINE(121)
	{
		HX_STACK_LINE(121)
		::flixel::math::FlxPoint _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(121)
		Float tmp = (_g->y + point->y);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(121)
		_g->set_y(tmp);
	}
	HX_STACK_LINE(122)
	{
		HX_STACK_LINE(122)
		bool tmp = point->_weak;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(122)
		if ((tmp)){
			HX_STACK_LINE(122)
			point->put();
		}
	}
	HX_STACK_LINE(123)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPoint_obj,addPoint,return )

::flixel::math::FlxPoint FlxPoint_obj::subtract( hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y){
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
	HX_STACK_FRAME("flixel.math.FlxPoint","subtract",0xd356ac90,"flixel.math.FlxPoint.subtract","flixel/math/FlxPoint.hx",134,0xb3e1cd2c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
{
		HX_STACK_LINE(135)
		{
			HX_STACK_LINE(135)
			::flixel::math::FlxPoint _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(135)
			Float tmp = (_g->x - X);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(135)
			_g->set_x(tmp);
		}
		HX_STACK_LINE(136)
		{
			HX_STACK_LINE(136)
			::flixel::math::FlxPoint _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(136)
			Float tmp = (_g->y - Y);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(136)
			_g->set_y(tmp);
		}
		HX_STACK_LINE(137)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxPoint_obj,subtract,return )

::flixel::math::FlxPoint FlxPoint_obj::subtractPoint( ::flixel::math::FlxPoint point){
	HX_STACK_FRAME("flixel.math.FlxPoint","subtractPoint",0xa41aeda0,"flixel.math.FlxPoint.subtractPoint","flixel/math/FlxPoint.hx",147,0xb3e1cd2c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(148)
	{
		HX_STACK_LINE(148)
		::flixel::math::FlxPoint _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(148)
		Float tmp = (_g->x - point->x);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(148)
		_g->set_x(tmp);
	}
	HX_STACK_LINE(149)
	{
		HX_STACK_LINE(149)
		::flixel::math::FlxPoint _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(149)
		Float tmp = (_g->y - point->y);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(149)
		_g->set_y(tmp);
	}
	HX_STACK_LINE(150)
	{
		HX_STACK_LINE(150)
		bool tmp = point->_weak;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(150)
		if ((tmp)){
			HX_STACK_LINE(150)
			point->put();
		}
	}
	HX_STACK_LINE(151)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPoint_obj,subtractPoint,return )

::flixel::math::FlxPoint FlxPoint_obj::scale( Float k){
	HX_STACK_FRAME("flixel.math.FlxPoint","scale",0x1902518e,"flixel.math.FlxPoint.scale","flixel/math/FlxPoint.hx",162,0xb3e1cd2c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(k,"k")
	HX_STACK_LINE(163)
	{
		HX_STACK_LINE(163)
		::flixel::math::FlxPoint _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(163)
		Float tmp = (_g->x * k);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(163)
		_g->set_x(tmp);
	}
	HX_STACK_LINE(164)
	{
		HX_STACK_LINE(164)
		::flixel::math::FlxPoint _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(164)
		Float tmp = (_g->y * k);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(164)
		_g->set_y(tmp);
	}
	HX_STACK_LINE(165)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPoint_obj,scale,return )

::flixel::math::FlxPoint FlxPoint_obj::copyFrom( ::flixel::math::FlxPoint point){
	HX_STACK_FRAME("flixel.math.FlxPoint","copyFrom",0xa3a6433b,"flixel.math.FlxPoint.copyFrom","flixel/math/FlxPoint.hx",175,0xb3e1cd2c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(176)
	Float tmp = point->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(176)
	this->set_x(tmp);
	HX_STACK_LINE(177)
	Float tmp1 = point->y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(177)
	this->set_y(tmp1);
	HX_STACK_LINE(178)
	{
		HX_STACK_LINE(178)
		bool tmp2 = point->_weak;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(178)
		if ((tmp2)){
			HX_STACK_LINE(178)
			point->put();
		}
	}
	HX_STACK_LINE(179)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPoint_obj,copyFrom,return )

::flixel::math::FlxPoint FlxPoint_obj::copyTo( ::flixel::math::FlxPoint point){
	HX_STACK_FRAME("flixel.math.FlxPoint","copyTo",0x56123d0c,"flixel.math.FlxPoint.copyTo","flixel/math/FlxPoint.hx",189,0xb3e1cd2c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(190)
	bool tmp = (point == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(190)
	if ((tmp)){
		HX_STACK_LINE(192)
		::flixel::math::FlxPoint tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(192)
		{
			HX_STACK_LINE(192)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(192)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(192)
			::flixel::util::FlxPool_flixel_math_FlxPoint tmp2 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(192)
			::flixel::math::FlxPoint tmp3 = tmp2->get();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(192)
			Float tmp4 = X;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(192)
			Float tmp5 = Y;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(192)
			::flixel::math::FlxPoint tmp6 = tmp3->set(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(192)
			::flixel::math::FlxPoint point1 = tmp6;		HX_STACK_VAR(point1,"point1");
			HX_STACK_LINE(192)
			point1->_inPool = false;
			HX_STACK_LINE(192)
			tmp1 = point1;
		}
		HX_STACK_LINE(192)
		point = tmp1;
	}
	HX_STACK_LINE(194)
	Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(194)
	point->set_x(tmp1);
	HX_STACK_LINE(195)
	Float tmp2 = this->y;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(195)
	point->set_y(tmp2);
	HX_STACK_LINE(196)
	::flixel::math::FlxPoint tmp3 = point;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(196)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPoint_obj,copyTo,return )

::flixel::math::FlxPoint FlxPoint_obj::copyFromFlash( ::openfl::_legacy::geom::Point FlashPoint){
	HX_STACK_FRAME("flixel.math.FlxPoint","copyFromFlash",0x788ecc75,"flixel.math.FlxPoint.copyFromFlash","flixel/math/FlxPoint.hx",206,0xb3e1cd2c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(FlashPoint,"FlashPoint")
	HX_STACK_LINE(207)
	Float tmp = FlashPoint->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(207)
	this->set_x(tmp);
	HX_STACK_LINE(208)
	Float tmp1 = FlashPoint->y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(208)
	this->set_y(tmp1);
	HX_STACK_LINE(209)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPoint_obj,copyFromFlash,return )

::openfl::_legacy::geom::Point FlxPoint_obj::copyToFlash( ::openfl::_legacy::geom::Point FlashPoint){
	HX_STACK_FRAME("flixel.math.FlxPoint","copyToFlash",0x8fb29d04,"flixel.math.FlxPoint.copyToFlash","flixel/math/FlxPoint.hx",219,0xb3e1cd2c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(FlashPoint,"FlashPoint")
	HX_STACK_LINE(220)
	bool tmp = (FlashPoint == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(220)
	if ((tmp)){
		HX_STACK_LINE(222)
		::openfl::_legacy::geom::Point tmp1 = ::openfl::_legacy::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(222)
		FlashPoint = tmp1;
	}
	HX_STACK_LINE(225)
	Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(225)
	FlashPoint->x = tmp1;
	HX_STACK_LINE(226)
	Float tmp2 = this->y;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(226)
	FlashPoint->y = tmp2;
	HX_STACK_LINE(227)
	::openfl::_legacy::geom::Point tmp3 = FlashPoint;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(227)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPoint_obj,copyToFlash,return )

::openfl::_legacy::geom::Point FlxPoint_obj::addToFlash( ::openfl::_legacy::geom::Point FlashPoint){
	HX_STACK_FRAME("flixel.math.FlxPoint","addToFlash",0x5739bc90,"flixel.math.FlxPoint.addToFlash","flixel/math/FlxPoint.hx",237,0xb3e1cd2c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(FlashPoint,"FlashPoint")
	HX_STACK_LINE(238)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(238)
	hx::AddEq(FlashPoint->x,tmp);
	HX_STACK_LINE(239)
	Float tmp1 = this->y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(239)
	hx::AddEq(FlashPoint->y,tmp1);
	HX_STACK_LINE(241)
	::openfl::_legacy::geom::Point tmp2 = FlashPoint;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(241)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPoint_obj,addToFlash,return )

::openfl::_legacy::geom::Point FlxPoint_obj::subtractFromFlash( ::openfl::_legacy::geom::Point FlashPoint){
	HX_STACK_FRAME("flixel.math.FlxPoint","subtractFromFlash",0x9d3f4136,"flixel.math.FlxPoint.subtractFromFlash","flixel/math/FlxPoint.hx",251,0xb3e1cd2c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(FlashPoint,"FlashPoint")
	HX_STACK_LINE(252)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(252)
	hx::SubEq(FlashPoint->x,tmp);
	HX_STACK_LINE(253)
	Float tmp1 = this->y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(253)
	hx::SubEq(FlashPoint->y,tmp1);
	HX_STACK_LINE(255)
	::openfl::_legacy::geom::Point tmp2 = FlashPoint;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(255)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPoint_obj,subtractFromFlash,return )

bool FlxPoint_obj::inCoords( Float RectX,Float RectY,Float RectWidth,Float RectHeight){
	HX_STACK_FRAME("flixel.math.FlxPoint","inCoords",0x2c48255f,"flixel.math.FlxPoint.inCoords","flixel/math/FlxPoint.hx",268,0xb3e1cd2c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(RectX,"RectX")
	HX_STACK_ARG(RectY,"RectY")
	HX_STACK_ARG(RectWidth,"RectWidth")
	HX_STACK_ARG(RectHeight,"RectHeight")
	HX_STACK_LINE(269)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(269)
	Float tmp1 = this->y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(269)
	Float tmp2 = RectX;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(269)
	Float tmp3 = RectY;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(269)
	Float tmp4 = RectWidth;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(269)
	Float tmp5 = RectHeight;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(269)
	bool tmp6 = ::flixel::math::FlxMath_obj::pointInCoordinates(tmp,tmp1,tmp2,tmp3,tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(269)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC4(FlxPoint_obj,inCoords,return )

bool FlxPoint_obj::inRect( ::flixel::math::FlxRect Rect){
	HX_STACK_FRAME("flixel.math.FlxPoint","inRect",0x14ec4c25,"flixel.math.FlxPoint.inRect","flixel/math/FlxPoint.hx",279,0xb3e1cd2c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Rect,"Rect")
	HX_STACK_LINE(280)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(280)
	Float tmp1 = this->y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(280)
	::flixel::math::FlxRect tmp2 = Rect;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(280)
	bool tmp3 = ::flixel::math::FlxMath_obj::pointInFlxRect(tmp,tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(280)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPoint_obj,inRect,return )

Float FlxPoint_obj::distanceTo( ::flixel::math::FlxPoint point){
	HX_STACK_FRAME("flixel.math.FlxPoint","distanceTo",0xac8be28c,"flixel.math.FlxPoint.distanceTo","flixel/math/FlxPoint.hx",290,0xb3e1cd2c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(291)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(291)
	Float tmp1 = point->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(291)
	Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(291)
	Float dx = tmp2;		HX_STACK_VAR(dx,"dx");
	HX_STACK_LINE(292)
	Float tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(292)
	Float tmp4 = point->y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(292)
	Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(292)
	Float dy = tmp5;		HX_STACK_VAR(dy,"dy");
	HX_STACK_LINE(293)
	{
		HX_STACK_LINE(293)
		bool tmp6 = point->_weak;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(293)
		if ((tmp6)){
			HX_STACK_LINE(293)
			point->put();
		}
	}
	HX_STACK_LINE(294)
	Float tmp6 = (dx * dx);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(294)
	Float tmp7 = (dy * dy);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(294)
	Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(294)
	Float tmp9 = ::Math_obj::sqrt(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(294)
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPoint_obj,distanceTo,return )

::flixel::math::FlxPoint FlxPoint_obj::floor( ){
	HX_STACK_FRAME("flixel.math.FlxPoint","floor",0xa2ca54d0,"flixel.math.FlxPoint.floor","flixel/math/FlxPoint.hx",301,0xb3e1cd2c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(302)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(302)
	int tmp1 = ::Math_obj::floor(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(302)
	this->set_x(tmp1);
	HX_STACK_LINE(303)
	Float tmp2 = this->y;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(303)
	int tmp3 = ::Math_obj::floor(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(303)
	this->set_y(tmp3);
	HX_STACK_LINE(304)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxPoint_obj,floor,return )

::flixel::math::FlxPoint FlxPoint_obj::ceil( ){
	HX_STACK_FRAME("flixel.math.FlxPoint","ceil",0xfeb9e881,"flixel.math.FlxPoint.ceil","flixel/math/FlxPoint.hx",311,0xb3e1cd2c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(312)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(312)
	int tmp1 = ::Math_obj::ceil(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(312)
	this->set_x(tmp1);
	HX_STACK_LINE(313)
	Float tmp2 = this->y;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(313)
	int tmp3 = ::Math_obj::ceil(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(313)
	this->set_y(tmp3);
	HX_STACK_LINE(314)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxPoint_obj,ceil,return )

::flixel::math::FlxPoint FlxPoint_obj::round( ){
	HX_STACK_FRAME("flixel.math.FlxPoint","round",0x8d997b52,"flixel.math.FlxPoint.round","flixel/math/FlxPoint.hx",321,0xb3e1cd2c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(322)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(322)
	int tmp1 = ::Math_obj::round(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(322)
	this->set_x(tmp1);
	HX_STACK_LINE(323)
	Float tmp2 = this->y;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(323)
	int tmp3 = ::Math_obj::round(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(323)
	this->set_y(tmp3);
	HX_STACK_LINE(324)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxPoint_obj,round,return )

::flixel::math::FlxPoint FlxPoint_obj::rotate( ::flixel::math::FlxPoint Pivot,Float Angle){
	HX_STACK_FRAME("flixel.math.FlxPoint","rotate",0x57ff66d7,"flixel.math.FlxPoint.rotate","flixel/math/FlxPoint.hx",335,0xb3e1cd2c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Pivot,"Pivot")
	HX_STACK_ARG(Angle,"Angle")
	HX_STACK_LINE(336)
	Float tmp = Angle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(336)
	Float tmp1 = ::Math_obj::PI;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(336)
	Float tmp2 = (Float(tmp1) / Float((int)180));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(336)
	Float tmp3 = (tmp * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(336)
	Float radians = tmp3;		HX_STACK_VAR(radians,"radians");
	HX_STACK_LINE(337)
	Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(337)
	{
		HX_STACK_LINE(337)
		Float n = radians;		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(337)
		hx::MultEq(n,((Float)0.3183098862));
		HX_STACK_LINE(337)
		bool tmp5 = (n > (int)1);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(337)
		if ((tmp5)){
			HX_STACK_LINE(337)
			Float tmp6 = n;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(337)
			int tmp7 = ::Math_obj::ceil(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(337)
			int tmp8 = (int(tmp7) >> int((int)1));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(337)
			int tmp9 = (int(tmp8) << int((int)1));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(337)
			hx::SubEq(n,tmp9);
		}
		else{
			HX_STACK_LINE(337)
			bool tmp6 = (n < (int)-1);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(337)
			if ((tmp6)){
				HX_STACK_LINE(337)
				Float tmp7 = n;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(337)
				Float tmp8 = -(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(337)
				int tmp9 = ::Math_obj::ceil(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(337)
				int tmp10 = (int(tmp9) >> int((int)1));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(337)
				int tmp11 = (int(tmp10) << int((int)1));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(337)
				hx::AddEq(n,tmp11);
			}
		}
		HX_STACK_LINE(337)
		bool tmp6 = (n > (int)0);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(337)
		if ((tmp6)){
			HX_STACK_LINE(337)
			Float tmp7 = n;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(337)
			Float tmp8 = n;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(337)
			Float tmp9 = n;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(337)
			Float tmp10 = ((Float)-7.2);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(337)
			Float tmp11 = (n * ((Float)3.6));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(337)
			Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(337)
			Float tmp13 = (tmp9 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(337)
			Float tmp14 = (((Float)0.5) + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(337)
			Float tmp15 = (tmp8 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(337)
			Float tmp16 = (((Float)3.1) + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(337)
			tmp4 = (tmp7 * tmp16);
		}
		else{
			HX_STACK_LINE(337)
			Float tmp7 = n;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(337)
			Float tmp8 = n;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(337)
			Float tmp9 = n;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(337)
			Float tmp10 = (n * ((Float)3.6));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(337)
			Float tmp11 = (((Float)7.2) + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(337)
			Float tmp12 = (tmp9 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(337)
			Float tmp13 = (((Float)0.5) + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(337)
			Float tmp14 = (tmp8 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(337)
			Float tmp15 = (((Float)3.1) - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(337)
			tmp4 = (tmp7 * tmp15);
		}
	}
	HX_STACK_LINE(337)
	Float sin = tmp4;		HX_STACK_VAR(sin,"sin");
	HX_STACK_LINE(338)
	Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(338)
	{
		HX_STACK_LINE(338)
		Float tmp6 = (radians + ((Float)1.570796327));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(338)
		Float n = tmp6;		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(338)
		hx::MultEq(n,((Float)0.3183098862));
		HX_STACK_LINE(338)
		bool tmp7 = (n > (int)1);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(338)
		if ((tmp7)){
			HX_STACK_LINE(338)
			Float tmp8 = n;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(338)
			int tmp9 = ::Math_obj::ceil(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(338)
			int tmp10 = (int(tmp9) >> int((int)1));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(338)
			int tmp11 = (int(tmp10) << int((int)1));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(338)
			hx::SubEq(n,tmp11);
		}
		else{
			HX_STACK_LINE(338)
			bool tmp8 = (n < (int)-1);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(338)
			if ((tmp8)){
				HX_STACK_LINE(338)
				Float tmp9 = n;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(338)
				Float tmp10 = -(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(338)
				int tmp11 = ::Math_obj::ceil(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(338)
				int tmp12 = (int(tmp11) >> int((int)1));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(338)
				int tmp13 = (int(tmp12) << int((int)1));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(338)
				hx::AddEq(n,tmp13);
			}
		}
		HX_STACK_LINE(338)
		bool tmp8 = (n > (int)0);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(338)
		if ((tmp8)){
			HX_STACK_LINE(338)
			Float tmp9 = n;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(338)
			Float tmp10 = n;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(338)
			Float tmp11 = n;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(338)
			Float tmp12 = ((Float)-7.2);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(338)
			Float tmp13 = (n * ((Float)3.6));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(338)
			Float tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(338)
			Float tmp15 = (tmp11 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(338)
			Float tmp16 = (((Float)0.5) + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(338)
			Float tmp17 = (tmp10 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(338)
			Float tmp18 = (((Float)3.1) + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(338)
			tmp5 = (tmp9 * tmp18);
		}
		else{
			HX_STACK_LINE(338)
			Float tmp9 = n;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(338)
			Float tmp10 = n;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(338)
			Float tmp11 = n;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(338)
			Float tmp12 = (n * ((Float)3.6));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(338)
			Float tmp13 = (((Float)7.2) + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(338)
			Float tmp14 = (tmp11 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(338)
			Float tmp15 = (((Float)0.5) + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(338)
			Float tmp16 = (tmp10 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(338)
			Float tmp17 = (((Float)3.1) - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(338)
			tmp5 = (tmp9 * tmp17);
		}
	}
	HX_STACK_LINE(338)
	Float cos = tmp5;		HX_STACK_VAR(cos,"cos");
	HX_STACK_LINE(340)
	Float tmp6 = this->x;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(340)
	Float tmp7 = Pivot->x;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(340)
	Float tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(340)
	Float dx = tmp8;		HX_STACK_VAR(dx,"dx");
	HX_STACK_LINE(341)
	Float tmp9 = this->y;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(341)
	Float tmp10 = Pivot->y;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(341)
	Float tmp11 = (tmp9 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(341)
	Float dy = tmp11;		HX_STACK_VAR(dy,"dy");
	HX_STACK_LINE(342)
	Float tmp12 = (cos * dx);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(342)
	Float tmp13 = (sin * dy);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(342)
	Float tmp14 = (tmp12 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(342)
	Float tmp15 = Pivot->x;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(342)
	Float tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(342)
	this->set_x(tmp16);
	HX_STACK_LINE(343)
	Float tmp17 = (sin * dx);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(343)
	Float tmp18 = (cos * dy);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(343)
	Float tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(343)
	Float tmp20 = Pivot->y;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(343)
	Float tmp21 = (tmp19 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(343)
	this->set_y(tmp21);
	HX_STACK_LINE(345)
	{
		HX_STACK_LINE(345)
		bool tmp22 = Pivot->_weak;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(345)
		if ((tmp22)){
			HX_STACK_LINE(345)
			Pivot->put();
		}
	}
	HX_STACK_LINE(346)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC2(FlxPoint_obj,rotate,return )

Float FlxPoint_obj::angleBetween( ::flixel::math::FlxPoint point){
	HX_STACK_FRAME("flixel.math.FlxPoint","angleBetween",0x3b318bb1,"flixel.math.FlxPoint.angleBetween","flixel/math/FlxPoint.hx",356,0xb3e1cd2c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(357)
	Float tmp = point->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(357)
	Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(357)
	Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(357)
	Float x = tmp2;		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(358)
	Float tmp3 = point->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(358)
	Float tmp4 = this->y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(358)
	Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(358)
	Float y = tmp5;		HX_STACK_VAR(y,"y");
	HX_STACK_LINE(359)
	Float angle = (int)0;		HX_STACK_VAR(angle,"angle");
	HX_STACK_LINE(361)
	bool tmp6 = (x != (int)0);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(361)
	bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(361)
	bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(361)
	if ((tmp7)){
		HX_STACK_LINE(361)
		tmp8 = (y != (int)0);
	}
	else{
		HX_STACK_LINE(361)
		tmp8 = true;
	}
	HX_STACK_LINE(361)
	if ((tmp8)){
		HX_STACK_LINE(363)
		Float tmp9 = ::Math_obj::PI;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(363)
		Float tmp10 = (tmp9 * ((Float)0.25));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(363)
		Float c1 = tmp10;		HX_STACK_VAR(c1,"c1");
		HX_STACK_LINE(364)
		Float tmp11 = ((int)3 * c1);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(364)
		Float c2 = tmp11;		HX_STACK_VAR(c2,"c2");
		HX_STACK_LINE(365)
		bool tmp12 = (y < (int)0);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(365)
		Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(365)
		if ((tmp12)){
			HX_STACK_LINE(365)
			Float tmp14 = y;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(365)
			tmp13 = -(tmp14);
		}
		else{
			HX_STACK_LINE(365)
			tmp13 = y;
		}
		HX_STACK_LINE(365)
		Float ay = tmp13;		HX_STACK_VAR(ay,"ay");
		HX_STACK_LINE(367)
		bool tmp14 = (x >= (int)0);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(367)
		if ((tmp14)){
			HX_STACK_LINE(369)
			Float tmp15 = c1;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(369)
			Float tmp16 = c1;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(369)
			Float tmp17 = (x - ay);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(369)
			Float tmp18 = (x + ay);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(369)
			Float tmp19 = (Float(tmp17) / Float(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(369)
			Float tmp20 = (tmp16 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(369)
			Float tmp21 = (tmp15 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(369)
			angle = tmp21;
		}
		else{
			HX_STACK_LINE(373)
			Float tmp15 = c2;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(373)
			Float tmp16 = c1;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(373)
			Float tmp17 = (x + ay);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(373)
			Float tmp18 = (ay - x);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(373)
			Float tmp19 = (Float(tmp17) / Float(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(373)
			Float tmp20 = (tmp16 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(373)
			Float tmp21 = (tmp15 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(373)
			angle = tmp21;
		}
		HX_STACK_LINE(375)
		bool tmp15 = (y < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(375)
		Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(375)
		if ((tmp15)){
			HX_STACK_LINE(375)
			Float tmp17 = angle;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(375)
			tmp16 = -(tmp17);
		}
		else{
			HX_STACK_LINE(375)
			tmp16 = angle;
		}
		HX_STACK_LINE(375)
		Float tmp17 = ::Math_obj::PI;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(375)
		Float tmp18 = (Float((int)180) / Float(tmp17));		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(375)
		Float tmp19 = (tmp16 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(375)
		angle = tmp19;
		HX_STACK_LINE(377)
		bool tmp20 = (angle > (int)90);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(377)
		if ((tmp20)){
			HX_STACK_LINE(379)
			Float tmp21 = (angle - (int)270);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(379)
			angle = tmp21;
		}
		else{
			HX_STACK_LINE(383)
			hx::AddEq(angle,(int)90);
		}
	}
	HX_STACK_LINE(387)
	{
		HX_STACK_LINE(387)
		bool tmp9 = point->_weak;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(387)
		if ((tmp9)){
			HX_STACK_LINE(387)
			point->put();
		}
	}
	HX_STACK_LINE(388)
	Float tmp9 = angle;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(388)
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPoint_obj,angleBetween,return )

bool FlxPoint_obj::equals( ::flixel::math::FlxPoint point){
	HX_STACK_FRAME("flixel.math.FlxPoint","equals",0x4cd20ebb,"flixel.math.FlxPoint.equals","flixel/math/FlxPoint.hx",398,0xb3e1cd2c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(399)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(399)
	{
		HX_STACK_LINE(399)
		Float aDiff = ((Float)0.0000001);		HX_STACK_VAR(aDiff,"aDiff");
		HX_STACK_LINE(399)
		Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(399)
		Float tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(399)
		Float tmp3 = point->x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(399)
		Float tmp4 = (tmp2 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(399)
		Float tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(399)
		Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(399)
		Float tmp7 = ::Math_obj::abs(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(399)
		Float tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(399)
		Float tmp9 = aDiff;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(399)
		tmp = (tmp8 <= tmp9);
	}
	HX_STACK_LINE(399)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(399)
	if ((tmp)){
		HX_STACK_LINE(399)
		Float aDiff = ((Float)0.0000001);		HX_STACK_VAR(aDiff,"aDiff");
		HX_STACK_LINE(399)
		Float tmp2 = this->y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(399)
		Float tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(399)
		Float tmp4 = point->y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(399)
		Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(399)
		Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(399)
		Float tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(399)
		Float tmp8 = ::Math_obj::abs(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(399)
		Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(399)
		Float tmp10 = aDiff;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(399)
		tmp1 = (tmp9 <= tmp10);
	}
	else{
		HX_STACK_LINE(399)
		tmp1 = false;
	}
	HX_STACK_LINE(399)
	bool result = tmp1;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(400)
	{
		HX_STACK_LINE(400)
		bool tmp2 = point->_weak;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(400)
		if ((tmp2)){
			HX_STACK_LINE(400)
			point->put();
		}
	}
	HX_STACK_LINE(401)
	bool tmp2 = result;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(401)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPoint_obj,equals,return )

Void FlxPoint_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.math.FlxPoint","destroy",0xdae378fe,"flixel.math.FlxPoint.destroy","flixel/math/FlxPoint.hx",407,0xb3e1cd2c)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxPoint_obj,destroy,(void))

::flixel::math::FlxPoint FlxPoint_obj::transform( ::openfl::_legacy::geom::Matrix matrix){
	HX_STACK_FRAME("flixel.math.FlxPoint","transform",0x46de8270,"flixel.math.FlxPoint.transform","flixel/math/FlxPoint.hx",415,0xb3e1cd2c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_LINE(416)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(416)
	Float tmp1 = matrix->a;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(416)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(416)
	Float tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(416)
	Float tmp4 = matrix->c;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(416)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(416)
	Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(416)
	Float tmp7 = matrix->tx;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(416)
	Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(416)
	Float x1 = tmp8;		HX_STACK_VAR(x1,"x1");
	HX_STACK_LINE(417)
	Float tmp9 = this->x;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(417)
	Float tmp10 = matrix->b;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(417)
	Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(417)
	Float tmp12 = this->y;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(417)
	Float tmp13 = matrix->d;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(417)
	Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(417)
	Float tmp15 = (tmp11 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(417)
	Float tmp16 = matrix->ty;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(417)
	Float tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(417)
	Float y1 = tmp17;		HX_STACK_VAR(y1,"y1");
	HX_STACK_LINE(419)
	Float tmp18 = x1;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(419)
	Float tmp19 = y1;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(419)
	::flixel::math::FlxPoint tmp20 = this->set(tmp18,tmp19);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(419)
	return tmp20;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPoint_obj,transform,return )

::String FlxPoint_obj::toString( ){
	HX_STACK_FRAME("flixel.math.FlxPoint","toString",0x13b40828,"flixel.math.FlxPoint.toString","flixel/math/FlxPoint.hx",426,0xb3e1cd2c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(428)
	::flixel::util::LabelValuePair tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(428)
	{
		HX_STACK_LINE(428)
		::flixel::util::FlxPool_flixel_util_LabelValuePair tmp1 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(428)
		::flixel::util::LabelValuePair tmp2 = tmp1->get();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(428)
		::flixel::util::LabelValuePair _this = tmp2;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(428)
		_this->label = HX_HCSTRING("x","\x78","\x00","\x00","\x00");
		HX_STACK_LINE(428)
		Float tmp3 = this->x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(428)
		_this->value = tmp3;
		HX_STACK_LINE(428)
		tmp = _this;
	}
	HX_STACK_LINE(429)
	::flixel::util::LabelValuePair tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(429)
	{
		HX_STACK_LINE(429)
		::flixel::util::FlxPool_flixel_util_LabelValuePair tmp2 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(429)
		::flixel::util::LabelValuePair tmp3 = tmp2->get();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(429)
		::flixel::util::LabelValuePair _this = tmp3;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(429)
		_this->label = HX_HCSTRING("y","\x79","\x00","\x00","\x00");
		HX_STACK_LINE(429)
		Float tmp4 = this->y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(429)
		_this->value = tmp4;
		HX_STACK_LINE(429)
		tmp1 = _this;
	}
	HX_STACK_LINE(427)
	::String tmp2 = ::flixel::util::FlxStringUtil_obj::getDebugString(Array_obj< ::Dynamic >::__new().Add(tmp).Add(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(427)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxPoint_obj,toString,return )

Float FlxPoint_obj::set_x( Float Value){
	HX_STACK_FRAME("flixel.math.FlxPoint","set_x",0x1a631e5f,"flixel.math.FlxPoint.set_x","flixel/math/FlxPoint.hx",436,0xb3e1cd2c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(437)
	Float tmp = this->x = Value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(437)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPoint_obj,set_x,return )

Float FlxPoint_obj::set_y( Float Value){
	HX_STACK_FRAME("flixel.math.FlxPoint","set_y",0x1a631e60,"flixel.math.FlxPoint.set_y","flixel/math/FlxPoint.hx",444,0xb3e1cd2c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(445)
	Float tmp = this->y = Value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(445)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPoint_obj,set_y,return )

::flixel::util::FlxPool_flixel_math_FlxPoint FlxPoint_obj::_pool;

::flixel::math::FlxPoint FlxPoint_obj::get( hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y){
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
	HX_STACK_FRAME("flixel.math.FlxPoint","get",0x598c7a9a,"flixel.math.FlxPoint.get","flixel/math/FlxPoint.hx",27,0xb3e1cd2c)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
{
		HX_STACK_LINE(28)
		::flixel::util::FlxPool_flixel_math_FlxPoint tmp = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(28)
		::flixel::math::FlxPoint tmp1 = tmp->get();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(28)
		Float tmp2 = X;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(28)
		Float tmp3 = Y;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(28)
		::flixel::math::FlxPoint tmp4 = tmp1->set(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(28)
		::flixel::math::FlxPoint point = tmp4;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(29)
		point->_inPool = false;
		HX_STACK_LINE(30)
		::flixel::math::FlxPoint tmp5 = point;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(30)
		return tmp5;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxPoint_obj,get,return )

::flixel::math::FlxPoint FlxPoint_obj::weak( hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y){
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
	HX_STACK_FRAME("flixel.math.FlxPoint","weak",0x0bf225f4,"flixel.math.FlxPoint.weak","flixel/math/FlxPoint.hx",42,0xb3e1cd2c)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
{
		HX_STACK_LINE(43)
		::flixel::math::FlxPoint tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(43)
		{
			HX_STACK_LINE(43)
			::flixel::util::FlxPool_flixel_math_FlxPoint tmp1 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(43)
			::flixel::math::FlxPoint tmp2 = tmp1->get();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(43)
			Float tmp3 = X;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(43)
			Float tmp4 = Y;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(43)
			::flixel::math::FlxPoint tmp5 = tmp2->set(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(43)
			::flixel::math::FlxPoint point = tmp5;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(43)
			point->_inPool = false;
			HX_STACK_LINE(43)
			tmp = point;
		}
		HX_STACK_LINE(43)
		::flixel::math::FlxPoint point = tmp;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(44)
		point->_weak = true;
		HX_STACK_LINE(45)
		::flixel::math::FlxPoint tmp1 = point;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(45)
		return tmp1;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxPoint_obj,weak,return )

::flixel::util::IFlxPool FlxPoint_obj::get_pool( ){
	HX_STACK_FRAME("flixel.math.FlxPoint","get_pool",0xa55c73e1,"flixel.math.FlxPoint.get_pool","flixel/math/FlxPoint.hx",449,0xb3e1cd2c)
	HX_STACK_LINE(450)
	::flixel::util::FlxPool_flixel_math_FlxPoint tmp = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(450)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxPoint_obj,get_pool,return )


FlxPoint_obj::FlxPoint_obj()
{
}

Dynamic FlxPoint_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"put") ) { return put_dyn(); }
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"ceil") ) { return ceil_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_weak") ) { return _weak; }
		if (HX_FIELD_EQ(inName,"scale") ) { return scale_dyn(); }
		if (HX_FIELD_EQ(inName,"floor") ) { return floor_dyn(); }
		if (HX_FIELD_EQ(inName,"round") ) { return round_dyn(); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return set_x_dyn(); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return set_y_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"copyTo") ) { return copyTo_dyn(); }
		if (HX_FIELD_EQ(inName,"inRect") ) { return inRect_dyn(); }
		if (HX_FIELD_EQ(inName,"rotate") ) { return rotate_dyn(); }
		if (HX_FIELD_EQ(inName,"equals") ) { return equals_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_inPool") ) { return _inPool; }
		if (HX_FIELD_EQ(inName,"putWeak") ) { return putWeak_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addPoint") ) { return addPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"subtract") ) { return subtract_dyn(); }
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return copyFrom_dyn(); }
		if (HX_FIELD_EQ(inName,"inCoords") ) { return inCoords_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"transform") ) { return transform_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"addToFlash") ) { return addToFlash_dyn(); }
		if (HX_FIELD_EQ(inName,"distanceTo") ) { return distanceTo_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"copyToFlash") ) { return copyToFlash_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"angleBetween") ) { return angleBetween_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"subtractPoint") ) { return subtractPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"copyFromFlash") ) { return copyFromFlash_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"subtractFromFlash") ) { return subtractFromFlash_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxPoint_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { outValue = get_dyn(); return true;  }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"pool") ) { if (inCallProp == hx::paccAlways) { outValue = get_pool(); return true; } }
		if (HX_FIELD_EQ(inName,"weak") ) { outValue = weak_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_pool") ) { outValue = _pool; return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_pool") ) { outValue = get_pool_dyn(); return true;  }
	}
	return false;
}

Dynamic FlxPoint_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp == hx::paccAlways) return set_x(inValue);x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == hx::paccAlways) return set_y(inValue);y=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_weak") ) { _weak=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_inPool") ) { _inPool=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxPoint_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_pool") ) { _pool=ioValue.Cast< ::flixel::util::FlxPool_flixel_math_FlxPoint >(); return true; }
	}
	return false;
}

void FlxPoint_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("_weak","\x57","\x78","\x06","\x02"));
	outFields->push(HX_HCSTRING("_inPool","\x00","\x71","\x39","\xf5"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(FlxPoint_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(FlxPoint_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{hx::fsBool,(int)offsetof(FlxPoint_obj,_weak),HX_HCSTRING("_weak","\x57","\x78","\x06","\x02")},
	{hx::fsBool,(int)offsetof(FlxPoint_obj,_inPool),HX_HCSTRING("_inPool","\x00","\x71","\x39","\xf5")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::flixel::util::FlxPool_flixel_math_FlxPoint*/ ,(void *) &FlxPoint_obj::_pool,HX_HCSTRING("_pool","\xbb","\x9c","\x6d","\xfd")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("_weak","\x57","\x78","\x06","\x02"),
	HX_HCSTRING("_inPool","\x00","\x71","\x39","\xf5"),
	HX_HCSTRING("put","\xcf","\x62","\x55","\x00"),
	HX_HCSTRING("putWeak","\xe7","\xfe","\x6e","\xfd"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("addPoint","\x6f","\xda","\xec","\x3f"),
	HX_HCSTRING("subtract","\x14","\x75","\x11","\xf8"),
	HX_HCSTRING("subtractPoint","\x9c","\xc6","\x66","\x44"),
	HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"),
	HX_HCSTRING("copyFrom","\xbf","\x0b","\x61","\xc8"),
	HX_HCSTRING("copyTo","\x90","\x1c","\x33","\xc9"),
	HX_HCSTRING("copyFromFlash","\x71","\xa5","\xda","\x18"),
	HX_HCSTRING("copyToFlash","\x00","\xff","\x24","\x25"),
	HX_HCSTRING("addToFlash","\x14","\xae","\x9a","\x36"),
	HX_HCSTRING("subtractFromFlash","\x32","\x48","\x51","\x65"),
	HX_HCSTRING("inCoords","\xe3","\xed","\x02","\x51"),
	HX_HCSTRING("inRect","\xa9","\x2b","\x0d","\x88"),
	HX_HCSTRING("distanceTo","\x10","\xd4","\xec","\x8b"),
	HX_HCSTRING("floor","\xcc","\xd1","\x96","\x02"),
	HX_HCSTRING("ceil","\x05","\x1f","\xbd","\x41"),
	HX_HCSTRING("round","\x4e","\xf8","\x65","\xed"),
	HX_HCSTRING("rotate","\x5b","\x46","\x20","\xcb"),
	HX_HCSTRING("angleBetween","\x35","\xe6","\xd4","\x69"),
	HX_HCSTRING("equals","\x3f","\xee","\xf2","\xbf"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("transform","\x6c","\x2d","\x93","\x45"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("set_x","\x5b","\x9b","\x2f","\x7a"),
	HX_HCSTRING("set_y","\x5c","\x9b","\x2f","\x7a"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxPoint_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxPoint_obj::_pool,"_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxPoint_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxPoint_obj::_pool,"_pool");
};

#endif

hx::Class FlxPoint_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_pool","\xbb","\x9c","\x6d","\xfd"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("weak","\x78","\x5c","\xf5","\x4e"),
	HX_HCSTRING("get_pool","\x65","\x3c","\x17","\xca"),
	::String(null()) };

void FlxPoint_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.math.FlxPoint","\x72","\x08","\x84","\xd0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxPoint_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxPoint_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxPoint_obj >;
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

void FlxPoint_obj::__boot()
{
	_pool= ::flixel::util::FlxPool_flixel_math_FlxPoint_obj::__new(hx::ClassOf< ::flixel::math::FlxPoint >());
}

} // end namespace flixel
} // end namespace math
