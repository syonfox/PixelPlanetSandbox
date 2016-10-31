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
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimation
#include <flixel/animation/FlxAnimation.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxBaseAnimation
#include <flixel/animation/FlxBaseAnimation.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFrame
#include <flixel/graphics/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxImageFrame
#include <flixel/graphics/frames/FlxImageFrame.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxTileFrames
#include <flixel/graphics/frames/FlxTileFrames.h>
#endif
#ifndef INCLUDED_flixel_math_FlxMatrix
#include <flixel/math/FlxMatrix.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxBitmapDataUtil
#include <flixel/util/FlxBitmapDataUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxColorTransformUtil
#include <flixel/util/FlxColorTransformUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
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
#ifndef INCLUDED_flixel_util__FlxColor_FlxColor_Impl_
#include <flixel/util/_FlxColor/FlxColor_Impl_.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BlendMode
#include <openfl/_legacy/display/BlendMode.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_ColorTransform
#include <openfl/_legacy/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Matrix
#include <openfl/_legacy/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Point
#include <openfl/_legacy/geom/Point.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif
namespace flixel{

Void FlxSprite_obj::__construct(Dynamic __o_X,Dynamic __o_Y,Dynamic SimpleGraphic)
{
HX_STACK_FRAME("flixel.FlxSprite","new",0x4dfa64d7,"flixel.FlxSprite.new","flixel/FlxSprite.hx",39,0x0384bffa)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
HX_STACK_ARG(SimpleGraphic,"SimpleGraphic")
Dynamic X = __o_X.Default(0);
Dynamic Y = __o_Y.Default(0);
{
	struct _Function_1_1{
		inline static ::haxe::ds::IntMap Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/FlxSprite.hx",230,0x0384bffa)
			{
				HX_STACK_LINE(230)
				::haxe::ds::IntMap tmp = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(230)
				::haxe::ds::IntMap tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(230)
				return tmp1;
			}
			return null();
		}
	};
	HX_STACK_LINE(230)
	this->_facingFlip = _Function_1_1::Block();
	HX_STACK_LINE(225)
	this->_angleChanged = true;
	HX_STACK_LINE(223)
	this->_cosAngle = ((Float)1);
	HX_STACK_LINE(221)
	this->_sinAngle = ((Float)0);
	HX_STACK_LINE(182)
	this->_facingVerticalMult = (int)1;
	HX_STACK_LINE(180)
	this->_facingHorizontalMult = (int)1;
	HX_STACK_LINE(149)
	this->useColorTransform = false;
	HX_STACK_LINE(142)
	this->color = (int)16777215;
	HX_STACK_LINE(116)
	this->flipY = false;
	HX_STACK_LINE(112)
	this->flipX = false;
	HX_STACK_LINE(108)
	this->facing = (int)16;
	HX_STACK_LINE(103)
	this->alpha = ((Float)1.0);
	HX_STACK_LINE(99)
	this->bakedRotationAngle = ((Float)0);
	HX_STACK_LINE(89)
	this->numFrames = (int)0;
	HX_STACK_LINE(85)
	this->frameHeight = (int)0;
	HX_STACK_LINE(81)
	this->frameWidth = (int)0;
	HX_STACK_LINE(67)
	this->dirty = true;
	HX_STACK_LINE(62)
	this->antialiasing = false;
	HX_STACK_LINE(57)
	this->useFramePixels = true;
	HX_STACK_LINE(242)
	Dynamic tmp = X;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(242)
	Dynamic tmp1 = Y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(242)
	super::__construct(tmp,tmp1,null(),null());
	HX_STACK_LINE(244)
	bool tmp2 = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(244)
	this->set_useFramePixels(tmp2);
	HX_STACK_LINE(245)
	bool tmp3 = (SimpleGraphic != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(245)
	if ((tmp3)){
		HX_STACK_LINE(246)
		Dynamic tmp4 = SimpleGraphic;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(246)
		this->loadGraphic(tmp4,null(),null(),null(),null(),null());
	}
}
;
	return null();
}

//FlxSprite_obj::~FlxSprite_obj() { }

Dynamic FlxSprite_obj::__CreateEmpty() { return  new FlxSprite_obj; }
hx::ObjectPtr< FlxSprite_obj > FlxSprite_obj::__new(Dynamic __o_X,Dynamic __o_Y,Dynamic SimpleGraphic)
{  hx::ObjectPtr< FlxSprite_obj > _result_ = new FlxSprite_obj();
	_result_->__construct(__o_X,__o_Y,SimpleGraphic);
	return _result_;}

Dynamic FlxSprite_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxSprite_obj > _result_ = new FlxSprite_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

Void FlxSprite_obj::initVars( ){
{
		HX_STACK_FRAME("flixel.FlxSprite","initVars",0x31793705,"flixel.FlxSprite.initVars","flixel/FlxSprite.hx",251,0x0384bffa)
		HX_STACK_THIS(this)
		HX_STACK_LINE(252)
		this->super::initVars();
		HX_STACK_LINE(254)
		::flixel::animation::FlxAnimationController tmp = ::flixel::animation::FlxAnimationController_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(254)
		this->animation = tmp;
		HX_STACK_LINE(256)
		::openfl::_legacy::geom::Point tmp1 = ::openfl::_legacy::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(256)
		this->_flashPoint = tmp1;
		HX_STACK_LINE(257)
		::openfl::_legacy::geom::Rectangle tmp2 = ::openfl::_legacy::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(257)
		this->_flashRect = tmp2;
		HX_STACK_LINE(258)
		::openfl::_legacy::geom::Rectangle tmp3 = ::openfl::_legacy::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(258)
		this->_flashRect2 = tmp3;
		HX_STACK_LINE(259)
		::openfl::_legacy::geom::Point tmp4 = ::openfl::_legacy::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(259)
		this->_flashPointZero = tmp4;
		HX_STACK_LINE(260)
		::flixel::math::FlxPoint tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(260)
		{
			HX_STACK_LINE(260)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(260)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(260)
			::flixel::util::FlxPool_flixel_math_FlxPoint tmp6 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(260)
			::flixel::math::FlxPoint tmp7 = tmp6->get();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(260)
			Float tmp8 = X;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(260)
			Float tmp9 = Y;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(260)
			::flixel::math::FlxPoint tmp10 = tmp7->set(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(260)
			::flixel::math::FlxPoint point = tmp10;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(260)
			point->_inPool = false;
			HX_STACK_LINE(260)
			tmp5 = point;
		}
		HX_STACK_LINE(260)
		this->offset = tmp5;
		HX_STACK_LINE(261)
		::flixel::math::FlxPoint tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(261)
		{
			HX_STACK_LINE(261)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(261)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(261)
			::flixel::util::FlxPool_flixel_math_FlxPoint tmp7 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(261)
			::flixel::math::FlxPoint tmp8 = tmp7->get();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(261)
			Float tmp9 = X;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(261)
			Float tmp10 = Y;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(261)
			::flixel::math::FlxPoint tmp11 = tmp8->set(tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(261)
			::flixel::math::FlxPoint point = tmp11;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(261)
			point->_inPool = false;
			HX_STACK_LINE(261)
			tmp6 = point;
		}
		HX_STACK_LINE(261)
		this->origin = tmp6;
		HX_STACK_LINE(262)
		::flixel::math::FlxPoint tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(262)
		{
			HX_STACK_LINE(262)
			::flixel::util::FlxPool_flixel_math_FlxPoint tmp8 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(262)
			::flixel::math::FlxPoint tmp9 = tmp8->get();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(262)
			::flixel::math::FlxPoint tmp10 = tmp9->set((int)1,(int)1);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(262)
			::flixel::math::FlxPoint point = tmp10;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(262)
			point->_inPool = false;
			HX_STACK_LINE(262)
			tmp7 = point;
		}
		HX_STACK_LINE(262)
		this->scale = tmp7;
		HX_STACK_LINE(263)
		::flixel::math::FlxPoint tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(263)
		{
			HX_STACK_LINE(263)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(263)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(263)
			::flixel::util::FlxPool_flixel_math_FlxPoint tmp9 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(263)
			::flixel::math::FlxPoint tmp10 = tmp9->get();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(263)
			Float tmp11 = X;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(263)
			Float tmp12 = Y;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(263)
			::flixel::math::FlxPoint tmp13 = tmp10->set(tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(263)
			::flixel::math::FlxPoint point = tmp13;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(263)
			point->_inPool = false;
			HX_STACK_LINE(263)
			tmp8 = point;
		}
		HX_STACK_LINE(263)
		this->_halfSize = tmp8;
		HX_STACK_LINE(264)
		::flixel::math::FlxMatrix tmp9 = ::flixel::math::FlxMatrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(264)
		this->_matrix = tmp9;
		HX_STACK_LINE(265)
		::openfl::_legacy::geom::ColorTransform tmp10 = ::openfl::_legacy::geom::ColorTransform_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(265)
		this->colorTransform = tmp10;
	}
return null();
}


Void FlxSprite_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.FlxSprite","destroy",0x0fb5c8f1,"flixel.FlxSprite.destroy","flixel/FlxSprite.hx",273,0x0384bffa)
		HX_STACK_THIS(this)
		HX_STACK_LINE(274)
		this->super::destroy();
		HX_STACK_LINE(276)
		::flixel::animation::FlxAnimationController tmp = this->animation;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(276)
		::flixel::animation::FlxAnimationController tmp1 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(276)
		this->animation = tmp1;
		HX_STACK_LINE(278)
		::flixel::math::FlxPoint tmp2 = this->offset;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(278)
		::flixel::math::FlxPoint tmp3 = ::flixel::util::FlxDestroyUtil_obj::put(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(278)
		this->offset = tmp3;
		HX_STACK_LINE(279)
		::flixel::math::FlxPoint tmp4 = this->origin;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(279)
		::flixel::math::FlxPoint tmp5 = ::flixel::util::FlxDestroyUtil_obj::put(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(279)
		this->origin = tmp5;
		HX_STACK_LINE(280)
		::flixel::math::FlxPoint tmp6 = this->scale;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(280)
		::flixel::math::FlxPoint tmp7 = ::flixel::util::FlxDestroyUtil_obj::put(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(280)
		this->scale = tmp7;
		HX_STACK_LINE(281)
		::flixel::math::FlxPoint tmp8 = this->_halfSize;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(281)
		::flixel::math::FlxPoint tmp9 = ::flixel::util::FlxDestroyUtil_obj::put(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(281)
		this->_halfSize = tmp9;
		HX_STACK_LINE(283)
		::openfl::_legacy::display::BitmapData tmp10 = this->framePixels;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(283)
		::openfl::_legacy::display::BitmapData tmp11 = ::flixel::util::FlxDestroyUtil_obj::dispose(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(283)
		this->framePixels = tmp11;
		HX_STACK_LINE(285)
		this->_flashPoint = null();
		HX_STACK_LINE(286)
		this->_flashRect = null();
		HX_STACK_LINE(287)
		this->_flashRect2 = null();
		HX_STACK_LINE(288)
		this->_flashPointZero = null();
		HX_STACK_LINE(289)
		this->_matrix = null();
		HX_STACK_LINE(290)
		this->colorTransform = null();
		HX_STACK_LINE(291)
		this->set_blend(null());
		HX_STACK_LINE(293)
		this->set_frames(null());
		HX_STACK_LINE(294)
		this->set_graphic(null());
		HX_STACK_LINE(295)
		::flixel::graphics::frames::FlxFrame tmp12 = this->_frame;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(295)
		::flixel::graphics::frames::FlxFrame tmp13 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(295)
		this->_frame = tmp13;
		HX_STACK_LINE(296)
		::flixel::graphics::FlxGraphic tmp14 = this->_frameGraphic;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(296)
		::flixel::graphics::FlxGraphic tmp15 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(296)
		this->_frameGraphic = tmp15;
		HX_STACK_LINE(298)
		this->shader = null();
	}
return null();
}


::flixel::FlxSprite FlxSprite_obj::clone( ){
	HX_STACK_FRAME("flixel.FlxSprite","clone",0x3c30f394,"flixel.FlxSprite.clone","flixel/FlxSprite.hx",302,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_LINE(303)
	::flixel::FlxSprite tmp = ::flixel::FlxSprite_obj::__new(null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(303)
	::flixel::FlxSprite tmp1 = tmp->loadGraphicFromSprite(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(303)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,clone,return )

::flixel::FlxSprite FlxSprite_obj::loadGraphicFromSprite( ::flixel::FlxSprite Sprite){
	HX_STACK_FRAME("flixel.FlxSprite","loadGraphicFromSprite",0xd0637b08,"flixel.FlxSprite.loadGraphicFromSprite","flixel/FlxSprite.hx",314,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Sprite,"Sprite")
	HX_STACK_LINE(315)
	::flixel::graphics::frames::FlxFramesCollection tmp = Sprite->frames;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(315)
	this->set_frames(tmp);
	HX_STACK_LINE(316)
	this->bakedRotationAngle = Sprite->bakedRotationAngle;
	HX_STACK_LINE(317)
	Float tmp1 = this->bakedRotationAngle;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(317)
	bool tmp2 = (tmp1 > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(317)
	if ((tmp2)){
		HX_STACK_LINE(319)
		Float tmp3 = Sprite->get_width();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(319)
		this->set_width(tmp3);
		HX_STACK_LINE(320)
		Float tmp4 = Sprite->get_height();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(320)
		this->set_height(tmp4);
		HX_STACK_LINE(321)
		this->centerOffsets(null());
	}
	HX_STACK_LINE(323)
	bool tmp3 = Sprite->antialiasing;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(323)
	this->set_antialiasing(tmp3);
	HX_STACK_LINE(324)
	::flixel::animation::FlxAnimationController tmp4 = this->animation;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(324)
	::flixel::animation::FlxAnimationController tmp5 = Sprite->animation;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(324)
	tmp4->copyFrom(tmp5);
	HX_STACK_LINE(325)
	this->graphicLoaded();
	HX_STACK_LINE(326)
	::flixel::math::FlxRect tmp6 = Sprite->clipRect;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(326)
	this->set_clipRect(tmp6);
	HX_STACK_LINE(327)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,loadGraphicFromSprite,return )

::flixel::FlxSprite FlxSprite_obj::loadGraphic( Dynamic Graphic,hx::Null< bool >  __o_Animated,hx::Null< int >  __o_Width,hx::Null< int >  __o_Height,hx::Null< bool >  __o_Unique,::String Key){
bool Animated = __o_Animated.Default(false);
int Width = __o_Width.Default(0);
int Height = __o_Height.Default(0);
bool Unique = __o_Unique.Default(false);
	HX_STACK_FRAME("flixel.FlxSprite","loadGraphic",0x47377c99,"flixel.FlxSprite.loadGraphic","flixel/FlxSprite.hx",348,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Graphic,"Graphic")
	HX_STACK_ARG(Animated,"Animated")
	HX_STACK_ARG(Width,"Width")
	HX_STACK_ARG(Height,"Height")
	HX_STACK_ARG(Unique,"Unique")
	HX_STACK_ARG(Key,"Key")
{
		HX_STACK_LINE(349)
		::flixel::_system::frontEnds::BitmapFrontEnd tmp = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(349)
		Dynamic tmp1 = Graphic;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(349)
		bool tmp2 = Unique;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(349)
		::String tmp3 = Key;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(349)
		::flixel::graphics::FlxGraphic tmp4 = tmp->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )(tmp1,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(349)
		::flixel::graphics::FlxGraphic graph = tmp4;		HX_STACK_VAR(graph,"graph");
		HX_STACK_LINE(350)
		bool tmp5 = (graph == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(350)
		if ((tmp5)){
			HX_STACK_LINE(351)
			return hx::ObjectPtr<OBJ_>(this);
		}
		HX_STACK_LINE(353)
		bool tmp6 = (Width == (int)0);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(353)
		if ((tmp6)){
			HX_STACK_LINE(355)
			bool tmp7 = Animated;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(355)
			int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(355)
			if ((tmp7)){
				HX_STACK_LINE(355)
				tmp8 = graph->height;
			}
			else{
				HX_STACK_LINE(355)
				tmp8 = graph->width;
			}
			HX_STACK_LINE(355)
			Width = tmp8;
			HX_STACK_LINE(356)
			bool tmp9 = (Width > graph->width);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(356)
			int tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(356)
			if ((tmp9)){
				HX_STACK_LINE(356)
				tmp10 = graph->width;
			}
			else{
				HX_STACK_LINE(356)
				tmp10 = Width;
			}
			HX_STACK_LINE(356)
			Width = tmp10;
		}
		HX_STACK_LINE(359)
		bool tmp7 = (Height == (int)0);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(359)
		if ((tmp7)){
			HX_STACK_LINE(361)
			bool tmp8 = Animated;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(361)
			int tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(361)
			if ((tmp8)){
				HX_STACK_LINE(361)
				tmp9 = Width;
			}
			else{
				HX_STACK_LINE(361)
				tmp9 = graph->height;
			}
			HX_STACK_LINE(361)
			Height = tmp9;
			HX_STACK_LINE(362)
			bool tmp10 = (Height > graph->height);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(362)
			int tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(362)
			if ((tmp10)){
				HX_STACK_LINE(362)
				tmp11 = graph->height;
			}
			else{
				HX_STACK_LINE(362)
				tmp11 = Height;
			}
			HX_STACK_LINE(362)
			Height = tmp11;
		}
		HX_STACK_LINE(365)
		bool tmp8 = Animated;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(365)
		if ((tmp8)){
			HX_STACK_LINE(367)
			::flixel::graphics::FlxGraphic tmp9 = graph;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(367)
			::flixel::math::FlxPoint tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(367)
			{
				HX_STACK_LINE(367)
				::flixel::util::FlxPool_flixel_math_FlxPoint tmp11 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(367)
				::flixel::math::FlxPoint tmp12 = tmp11->get();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(367)
				int tmp13 = Width;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(367)
				int tmp14 = Height;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(367)
				::flixel::math::FlxPoint tmp15 = tmp12->set(tmp13,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(367)
				::flixel::math::FlxPoint point = tmp15;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(367)
				point->_inPool = false;
				HX_STACK_LINE(367)
				tmp10 = point;
			}
			HX_STACK_LINE(367)
			::flixel::graphics::frames::FlxTileFrames tmp11 = ::flixel::graphics::frames::FlxTileFrames_obj::fromGraphic(tmp9,tmp10,null(),null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(367)
			this->set_frames(tmp11);
		}
		else{
			HX_STACK_LINE(371)
			::flixel::graphics::frames::FlxImageFrame tmp9 = graph->get_imageFrame();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(371)
			this->set_frames(tmp9);
		}
		HX_STACK_LINE(374)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC6(FlxSprite_obj,loadGraphic,return )

::flixel::FlxSprite FlxSprite_obj::loadRotatedGraphic( Dynamic Graphic,hx::Null< int >  __o_Rotations,hx::Null< int >  __o_Frame,hx::Null< bool >  __o_AntiAliasing,hx::Null< bool >  __o_AutoBuffer,::String Key){
int Rotations = __o_Rotations.Default(16);
int Frame = __o_Frame.Default(-1);
bool AntiAliasing = __o_AntiAliasing.Default(false);
bool AutoBuffer = __o_AutoBuffer.Default(false);
	HX_STACK_FRAME("flixel.FlxSprite","loadRotatedGraphic",0xceb71e2e,"flixel.FlxSprite.loadRotatedGraphic","flixel/FlxSprite.hx",390,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Graphic,"Graphic")
	HX_STACK_ARG(Rotations,"Rotations")
	HX_STACK_ARG(Frame,"Frame")
	HX_STACK_ARG(AntiAliasing,"AntiAliasing")
	HX_STACK_ARG(AutoBuffer,"AutoBuffer")
	HX_STACK_ARG(Key,"Key")
{
		HX_STACK_LINE(391)
		::flixel::_system::frontEnds::BitmapFrontEnd tmp = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(391)
		Dynamic tmp1 = Graphic;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(391)
		::String tmp2 = Key;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(391)
		::flixel::graphics::FlxGraphic tmp3 = tmp->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )(tmp1,false,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(391)
		::flixel::graphics::FlxGraphic brushGraphic = tmp3;		HX_STACK_VAR(brushGraphic,"brushGraphic");
		HX_STACK_LINE(392)
		bool tmp4 = (brushGraphic == null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(392)
		if ((tmp4)){
			HX_STACK_LINE(393)
			return hx::ObjectPtr<OBJ_>(this);
		}
		HX_STACK_LINE(395)
		::openfl::_legacy::display::BitmapData brush = brushGraphic->bitmap;		HX_STACK_VAR(brush,"brush");
		HX_STACK_LINE(396)
		::String key = brushGraphic->key;		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(398)
		bool tmp5 = (Frame >= (int)0);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(398)
		if ((tmp5)){
			HX_STACK_LINE(401)
			int tmp6 = brush->get_height();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(401)
			int brushSize = tmp6;		HX_STACK_VAR(brushSize,"brushSize");
			HX_STACK_LINE(402)
			int tmp7 = brush->get_width();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(402)
			int tmp8 = brushSize;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(402)
			Float tmp9 = (Float(tmp7) / Float(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(402)
			int tmp10 = ::Std_obj::_int(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(402)
			int framesNum = tmp10;		HX_STACK_VAR(framesNum,"framesNum");
			HX_STACK_LINE(403)
			bool tmp11 = (framesNum > Frame);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(403)
			int tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(403)
			if ((tmp11)){
				HX_STACK_LINE(403)
				tmp12 = Frame;
			}
			else{
				HX_STACK_LINE(403)
				tmp12 = hx::Mod(Frame,framesNum);
			}
			HX_STACK_LINE(403)
			Frame = tmp12;
			HX_STACK_LINE(404)
			::String tmp13 = (HX_HCSTRING(":","\x3a","\x00","\x00","\x00") + Frame);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(404)
			hx::AddEq(key,tmp13);
			HX_STACK_LINE(406)
			::openfl::_legacy::display::BitmapData full = brush;		HX_STACK_VAR(full,"full");
			HX_STACK_LINE(407)
			::openfl::_legacy::display::BitmapData tmp14 = ::openfl::_legacy::display::BitmapData_obj::__new(brushSize,brushSize,true,(int)0,null());		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(407)
			brush = tmp14;
			HX_STACK_LINE(408)
			::openfl::_legacy::geom::Rectangle tmp15 = this->_flashRect;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(408)
			int tmp16 = (Frame * brushSize);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(408)
			int tmp17 = brushSize;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(408)
			int tmp18 = brushSize;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(408)
			tmp15->setTo(tmp16,(int)0,tmp17,tmp18);
			HX_STACK_LINE(409)
			::openfl::_legacy::display::BitmapData tmp19 = full;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(409)
			::openfl::_legacy::geom::Rectangle tmp20 = this->_flashRect;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(409)
			::openfl::_legacy::geom::Point tmp21 = this->_flashPointZero;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(409)
			brush->copyPixels(tmp19,tmp20,tmp21,null(),null(),null());
		}
		HX_STACK_LINE(412)
		::String tmp6 = (HX_HCSTRING(":","\x3a","\x00","\x00","\x00") + Rotations);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(412)
		::String tmp7 = (tmp6 + HX_HCSTRING(":","\x3a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(412)
		bool tmp8 = AutoBuffer;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(412)
		::String tmp9 = ::Std_obj::string(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(412)
		::String tmp10 = (tmp7 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(412)
		hx::AddEq(key,tmp10);
		HX_STACK_LINE(415)
		::flixel::_system::frontEnds::BitmapFrontEnd tmp11 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(415)
		::String tmp12 = key;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(415)
		::flixel::graphics::FlxGraphic tmp13 = tmp11->__Field(HX_HCSTRING("_cache","\x83","\xe1","\xfb","\x3c"), hx::paccDynamic )->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic )(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(415)
		::flixel::graphics::FlxGraphic tempGraph = tmp13;		HX_STACK_VAR(tempGraph,"tempGraph");
		HX_STACK_LINE(416)
		bool tmp14 = (tempGraph == null());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(416)
		if ((tmp14)){
			HX_STACK_LINE(418)
			::openfl::_legacy::display::BitmapData tmp15 = brush;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(418)
			int tmp16 = Rotations;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(418)
			bool tmp17 = AntiAliasing;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(418)
			bool tmp18 = AutoBuffer;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(418)
			::openfl::_legacy::display::BitmapData tmp19 = ::flixel::util::FlxBitmapDataUtil_obj::generateRotations(tmp15,tmp16,tmp17,tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(418)
			::openfl::_legacy::display::BitmapData bitmap = tmp19;		HX_STACK_VAR(bitmap,"bitmap");
			HX_STACK_LINE(419)
			::openfl::_legacy::display::BitmapData tmp20 = bitmap;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(419)
			::String tmp21 = key;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(419)
			::flixel::graphics::FlxGraphic tmp22 = ::flixel::graphics::FlxGraphic_obj::fromBitmapData(tmp20,false,tmp21,null());		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(419)
			tempGraph = tmp22;
		}
		HX_STACK_LINE(422)
		int tmp15 = brush->get_height();		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(422)
		int tmp16 = brush->get_width();		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(422)
		bool tmp17 = (tmp15 > tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(422)
		int tmp18;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(422)
		if ((tmp17)){
			HX_STACK_LINE(422)
			tmp18 = brush->get_height();
		}
		else{
			HX_STACK_LINE(422)
			tmp18 = brush->get_width();
		}
		HX_STACK_LINE(422)
		int max = tmp18;		HX_STACK_VAR(max,"max");
		HX_STACK_LINE(423)
		bool tmp19 = AutoBuffer;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(423)
		int tmp20;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(423)
		if ((tmp19)){
			HX_STACK_LINE(423)
			Float tmp21 = (max * ((Float)1.5));		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(423)
			tmp20 = ::Std_obj::_int(tmp21);
		}
		else{
			HX_STACK_LINE(423)
			tmp20 = max;
		}
		HX_STACK_LINE(423)
		max = tmp20;
		HX_STACK_LINE(425)
		::flixel::graphics::FlxGraphic tmp21 = tempGraph;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(425)
		::flixel::math::FlxPoint tmp22;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(425)
		{
			HX_STACK_LINE(425)
			::flixel::util::FlxPool_flixel_math_FlxPoint tmp23 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(425)
			::flixel::math::FlxPoint tmp24 = tmp23->get();		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(425)
			int tmp25 = max;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(425)
			int tmp26 = max;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(425)
			::flixel::math::FlxPoint tmp27 = tmp24->set(tmp25,tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(425)
			::flixel::math::FlxPoint point = tmp27;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(425)
			point->_inPool = false;
			HX_STACK_LINE(425)
			tmp22 = point;
		}
		HX_STACK_LINE(425)
		::flixel::graphics::frames::FlxTileFrames tmp23 = ::flixel::graphics::frames::FlxTileFrames_obj::fromGraphic(tmp21,tmp22,null(),null());		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(425)
		this->set_frames(tmp23);
		HX_STACK_LINE(427)
		bool tmp24 = AutoBuffer;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(427)
		if ((tmp24)){
			HX_STACK_LINE(429)
			int tmp25 = brush->get_width();		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(429)
			this->set_width(tmp25);
			HX_STACK_LINE(430)
			int tmp26 = brush->get_height();		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(430)
			this->set_height(tmp26);
			HX_STACK_LINE(431)
			this->centerOffsets(null());
		}
		HX_STACK_LINE(434)
		Float tmp25 = (Float((int)360) / Float(Rotations));		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(434)
		this->bakedRotationAngle = tmp25;
		HX_STACK_LINE(435)
		::flixel::animation::FlxAnimationController tmp26 = this->animation;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(435)
		tmp26->createPrerotated(null());
		HX_STACK_LINE(436)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC6(FlxSprite_obj,loadRotatedGraphic,return )

::flixel::FlxSprite FlxSprite_obj::loadRotatedFrame( ::flixel::graphics::frames::FlxFrame Frame,hx::Null< int >  __o_Rotations,hx::Null< bool >  __o_AntiAliasing,hx::Null< bool >  __o_AutoBuffer){
int Rotations = __o_Rotations.Default(16);
bool AntiAliasing = __o_AntiAliasing.Default(false);
bool AutoBuffer = __o_AutoBuffer.Default(false);
	HX_STACK_FRAME("flixel.FlxSprite","loadRotatedFrame",0xe0d52e33,"flixel.FlxSprite.loadRotatedFrame","flixel/FlxSprite.hx",450,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Frame,"Frame")
	HX_STACK_ARG(Rotations,"Rotations")
	HX_STACK_ARG(AntiAliasing,"AntiAliasing")
	HX_STACK_ARG(AutoBuffer,"AutoBuffer")
{
		HX_STACK_LINE(451)
		::String tmp = Frame->parent->key;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(451)
		::String key = tmp;		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(452)
		bool tmp1 = (Frame->name != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(452)
		if ((tmp1)){
			HX_STACK_LINE(454)
			::String tmp2 = (HX_HCSTRING(":","\x3a","\x00","\x00","\x00") + Frame->name);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(454)
			hx::AddEq(key,tmp2);
		}
		else{
			HX_STACK_LINE(458)
			::String tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(458)
			{
				HX_STACK_LINE(458)
				::flixel::math::FlxRect _this = Frame->frame;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(458)
				::flixel::util::LabelValuePair tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(458)
				{
					HX_STACK_LINE(458)
					::flixel::util::FlxPool_flixel_util_LabelValuePair tmp4 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(458)
					::flixel::util::LabelValuePair tmp5 = tmp4->get();		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(458)
					::flixel::util::LabelValuePair _this1 = tmp5;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(458)
					_this1->label = HX_HCSTRING("x","\x78","\x00","\x00","\x00");
					HX_STACK_LINE(458)
					_this1->value = _this->x;
					HX_STACK_LINE(458)
					tmp3 = _this1;
				}
				HX_STACK_LINE(458)
				::flixel::util::LabelValuePair tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(458)
				{
					HX_STACK_LINE(458)
					::flixel::util::FlxPool_flixel_util_LabelValuePair tmp5 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(458)
					::flixel::util::LabelValuePair tmp6 = tmp5->get();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(458)
					::flixel::util::LabelValuePair _this1 = tmp6;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(458)
					_this1->label = HX_HCSTRING("y","\x79","\x00","\x00","\x00");
					HX_STACK_LINE(458)
					_this1->value = _this->y;
					HX_STACK_LINE(458)
					tmp4 = _this1;
				}
				HX_STACK_LINE(458)
				::flixel::util::LabelValuePair tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(458)
				{
					HX_STACK_LINE(458)
					::flixel::util::FlxPool_flixel_util_LabelValuePair tmp6 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(458)
					::flixel::util::LabelValuePair tmp7 = tmp6->get();		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(458)
					::flixel::util::LabelValuePair _this1 = tmp7;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(458)
					_this1->label = HX_HCSTRING("w","\x77","\x00","\x00","\x00");
					HX_STACK_LINE(458)
					_this1->value = _this->width;
					HX_STACK_LINE(458)
					tmp5 = _this1;
				}
				HX_STACK_LINE(458)
				::flixel::util::LabelValuePair tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(458)
				{
					HX_STACK_LINE(458)
					::flixel::util::FlxPool_flixel_util_LabelValuePair tmp7 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(458)
					::flixel::util::LabelValuePair tmp8 = tmp7->get();		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(458)
					::flixel::util::LabelValuePair _this1 = tmp8;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(458)
					_this1->label = HX_HCSTRING("h","\x68","\x00","\x00","\x00");
					HX_STACK_LINE(458)
					_this1->value = _this->height;
					HX_STACK_LINE(458)
					tmp6 = _this1;
				}
				HX_STACK_LINE(458)
				tmp2 = ::flixel::util::FlxStringUtil_obj::getDebugString(Array_obj< ::Dynamic >::__new().Add(tmp3).Add(tmp4).Add(tmp5).Add(tmp6));
			}
			HX_STACK_LINE(458)
			::String tmp3 = (HX_HCSTRING(":","\x3a","\x00","\x00","\x00") + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(458)
			hx::AddEq(key,tmp3);
		}
		HX_STACK_LINE(461)
		::flixel::_system::frontEnds::BitmapFrontEnd tmp2 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(461)
		::String tmp3 = key;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(461)
		::flixel::graphics::FlxGraphic tmp4 = tmp2->__Field(HX_HCSTRING("_cache","\x83","\xe1","\xfb","\x3c"), hx::paccDynamic )->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic )(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(461)
		::flixel::graphics::FlxGraphic graphic = tmp4;		HX_STACK_VAR(graphic,"graphic");
		HX_STACK_LINE(462)
		bool tmp5 = (graphic == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(462)
		if ((tmp5)){
			HX_STACK_LINE(464)
			::openfl::_legacy::display::BitmapData tmp6 = Frame->paint(null(),null(),null(),null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(464)
			::String tmp7 = key;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(464)
			::flixel::graphics::FlxGraphic tmp8 = ::flixel::graphics::FlxGraphic_obj::fromBitmapData(tmp6,false,tmp7,null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(464)
			graphic = tmp8;
		}
		HX_STACK_LINE(467)
		::flixel::graphics::FlxGraphic tmp6 = graphic;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(467)
		int tmp7 = Rotations;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(467)
		bool tmp8 = AntiAliasing;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(467)
		bool tmp9 = AutoBuffer;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(467)
		::flixel::FlxSprite tmp10 = this->loadRotatedGraphic(tmp6,tmp7,(int)-1,tmp8,tmp9,null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(467)
		return tmp10;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxSprite_obj,loadRotatedFrame,return )

::flixel::FlxSprite FlxSprite_obj::makeGraphic( int Width,int Height,hx::Null< int >  __o_Color,hx::Null< bool >  __o_Unique,::String Key){
int Color = __o_Color.Default(-1);
bool Unique = __o_Unique.Default(false);
	HX_STACK_FRAME("flixel.FlxSprite","makeGraphic",0xbaa3e5d1,"flixel.FlxSprite.makeGraphic","flixel/FlxSprite.hx",491,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Width,"Width")
	HX_STACK_ARG(Height,"Height")
	HX_STACK_ARG(Color,"Color")
	HX_STACK_ARG(Unique,"Unique")
	HX_STACK_ARG(Key,"Key")
{
		HX_STACK_LINE(492)
		::flixel::_system::frontEnds::BitmapFrontEnd tmp = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(492)
		int tmp1 = Width;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(492)
		int tmp2 = Height;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(492)
		int tmp3 = Color;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(492)
		bool tmp4 = Unique;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(492)
		::String tmp5 = Key;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(492)
		::flixel::graphics::FlxGraphic tmp6 = tmp->__Field(HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"), hx::paccDynamic )(tmp1,tmp2,tmp3,tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(492)
		::flixel::graphics::FlxGraphic graph = tmp6;		HX_STACK_VAR(graph,"graph");
		HX_STACK_LINE(493)
		::flixel::graphics::frames::FlxImageFrame tmp7 = graph->get_imageFrame();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(493)
		this->set_frames(tmp7);
		HX_STACK_LINE(494)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC5(FlxSprite_obj,makeGraphic,return )

Void FlxSprite_obj::graphicLoaded( ){
{
		HX_STACK_FRAME("flixel.FlxSprite","graphicLoaded",0xacabf404,"flixel.FlxSprite.graphicLoaded","flixel/FlxSprite.hx",501,0x0384bffa)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,graphicLoaded,(void))

Void FlxSprite_obj::resetSize( ){
{
		HX_STACK_FRAME("flixel.FlxSprite","resetSize",0x5d8771e7,"flixel.FlxSprite.resetSize","flixel/FlxSprite.hx",507,0x0384bffa)
		HX_STACK_THIS(this)
		HX_STACK_LINE(508)
		::openfl::_legacy::geom::Rectangle tmp = this->_flashRect;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(508)
		tmp->x = (int)0;
		HX_STACK_LINE(509)
		::openfl::_legacy::geom::Rectangle tmp1 = this->_flashRect;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(509)
		tmp1->y = (int)0;
		HX_STACK_LINE(510)
		int tmp2 = this->frameWidth;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(510)
		::openfl::_legacy::geom::Rectangle tmp3 = this->_flashRect;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(510)
		tmp3->width = tmp2;
		HX_STACK_LINE(511)
		int tmp4 = this->frameHeight;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(511)
		::openfl::_legacy::geom::Rectangle tmp5 = this->_flashRect;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(511)
		tmp5->height = tmp4;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,resetSize,(void))

Void FlxSprite_obj::resetFrameSize( ){
{
		HX_STACK_FRAME("flixel.FlxSprite","resetFrameSize",0xb7baa4a8,"flixel.FlxSprite.resetFrameSize","flixel/FlxSprite.hx",518,0x0384bffa)
		HX_STACK_THIS(this)
		HX_STACK_LINE(519)
		::flixel::graphics::frames::FlxFrame tmp = this->frame;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(519)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(519)
		if ((tmp1)){
			HX_STACK_LINE(521)
			::flixel::graphics::frames::FlxFrame tmp2 = this->frame;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(521)
			Float tmp3 = tmp2->sourceSize->x;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(521)
			int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(521)
			this->frameWidth = tmp4;
			HX_STACK_LINE(522)
			::flixel::graphics::frames::FlxFrame tmp5 = this->frame;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(522)
			Float tmp6 = tmp5->sourceSize->y;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(522)
			int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(522)
			this->frameHeight = tmp7;
		}
		HX_STACK_LINE(524)
		::flixel::math::FlxPoint tmp2 = this->_halfSize;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(524)
		int tmp3 = this->frameWidth;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(524)
		Float tmp4 = (((Float)0.5) * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(524)
		int tmp5 = this->frameHeight;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(524)
		Float tmp6 = (((Float)0.5) * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(524)
		tmp2->set(tmp4,tmp6);
		HX_STACK_LINE(525)
		{
			HX_STACK_LINE(525)
			::openfl::_legacy::geom::Rectangle tmp7 = this->_flashRect;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(525)
			tmp7->x = (int)0;
			HX_STACK_LINE(525)
			::openfl::_legacy::geom::Rectangle tmp8 = this->_flashRect;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(525)
			tmp8->y = (int)0;
			HX_STACK_LINE(525)
			int tmp9 = this->frameWidth;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(525)
			::openfl::_legacy::geom::Rectangle tmp10 = this->_flashRect;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(525)
			tmp10->width = tmp9;
			HX_STACK_LINE(525)
			int tmp11 = this->frameHeight;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(525)
			::openfl::_legacy::geom::Rectangle tmp12 = this->_flashRect;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(525)
			tmp12->height = tmp11;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,resetFrameSize,(void))

Void FlxSprite_obj::resetSizeFromFrame( ){
{
		HX_STACK_FRAME("flixel.FlxSprite","resetSizeFromFrame",0xf893db7c,"flixel.FlxSprite.resetSizeFromFrame","flixel/FlxSprite.hx",532,0x0384bffa)
		HX_STACK_THIS(this)
		HX_STACK_LINE(533)
		int tmp = this->frameWidth;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(533)
		this->set_width(tmp);
		HX_STACK_LINE(534)
		int tmp1 = this->frameHeight;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(534)
		this->set_height(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,resetSizeFromFrame,(void))

Void FlxSprite_obj::resetFrame( ){
{
		HX_STACK_FRAME("flixel.FlxSprite","resetFrame",0x02a6a847,"flixel.FlxSprite.resetFrame","flixel/FlxSprite.hx",544,0x0384bffa)
		HX_STACK_THIS(this)
		HX_STACK_LINE(545)
		::flixel::graphics::frames::FlxFrame tmp = this->frame;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(545)
		this->set_frame(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,resetFrame,(void))

Void FlxSprite_obj::setGraphicSize( hx::Null< int >  __o_Width,hx::Null< int >  __o_Height){
int Width = __o_Width.Default(0);
int Height = __o_Height.Default(0);
	HX_STACK_FRAME("flixel.FlxSprite","setGraphicSize",0x516eb7f0,"flixel.FlxSprite.setGraphicSize","flixel/FlxSprite.hx",556,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Width,"Width")
	HX_STACK_ARG(Height,"Height")
{
		HX_STACK_LINE(557)
		bool tmp = (Width <= (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(557)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(557)
		if ((tmp)){
			HX_STACK_LINE(557)
			tmp1 = (Height <= (int)0);
		}
		else{
			HX_STACK_LINE(557)
			tmp1 = false;
		}
		HX_STACK_LINE(557)
		if ((tmp1)){
			HX_STACK_LINE(558)
			return null();
		}
		HX_STACK_LINE(560)
		int tmp2 = Width;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(560)
		int tmp3 = this->frameWidth;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(560)
		Float tmp4 = (Float(tmp2) / Float(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(560)
		Float newScaleX = tmp4;		HX_STACK_VAR(newScaleX,"newScaleX");
		HX_STACK_LINE(561)
		int tmp5 = Height;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(561)
		int tmp6 = this->frameHeight;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(561)
		Float tmp7 = (Float(tmp5) / Float(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(561)
		Float newScaleY = tmp7;		HX_STACK_VAR(newScaleY,"newScaleY");
		HX_STACK_LINE(562)
		::flixel::math::FlxPoint tmp8 = this->scale;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(562)
		Float tmp9 = newScaleX;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(562)
		Float tmp10 = newScaleY;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(562)
		tmp8->set(tmp9,tmp10);
		HX_STACK_LINE(564)
		bool tmp11 = (Width <= (int)0);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(564)
		if ((tmp11)){
			HX_STACK_LINE(566)
			::flixel::math::FlxPoint tmp12 = this->scale;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(566)
			Float tmp13 = newScaleY;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(566)
			tmp12->set_x(tmp13);
		}
		else{
			HX_STACK_LINE(568)
			bool tmp12 = (Height <= (int)0);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(568)
			if ((tmp12)){
				HX_STACK_LINE(570)
				::flixel::math::FlxPoint tmp13 = this->scale;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(570)
				Float tmp14 = newScaleX;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(570)
				tmp13->set_y(tmp14);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxSprite_obj,setGraphicSize,(void))

Void FlxSprite_obj::updateHitbox( ){
{
		HX_STACK_FRAME("flixel.FlxSprite","updateHitbox",0x9470392a,"flixel.FlxSprite.updateHitbox","flixel/FlxSprite.hx",579,0x0384bffa)
		HX_STACK_THIS(this)
		HX_STACK_LINE(580)
		::flixel::math::FlxPoint tmp = this->scale;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(580)
		Float tmp1 = tmp->x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(580)
		Float tmp2 = ::Math_obj::abs(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(580)
		int tmp3 = this->frameWidth;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(580)
		Float tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(580)
		this->set_width(tmp4);
		HX_STACK_LINE(581)
		::flixel::math::FlxPoint tmp5 = this->scale;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(581)
		Float tmp6 = tmp5->y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(581)
		Float tmp7 = ::Math_obj::abs(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(581)
		int tmp8 = this->frameHeight;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(581)
		Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(581)
		this->set_height(tmp9);
		HX_STACK_LINE(582)
		::flixel::math::FlxPoint tmp10 = this->offset;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(582)
		Float tmp11 = ((Float)-0.5);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(582)
		Float tmp12 = this->get_width();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(582)
		int tmp13 = this->frameWidth;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(582)
		Float tmp14 = (tmp12 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(582)
		Float tmp15 = (tmp11 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(582)
		Float tmp16 = ((Float)-0.5);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(582)
		Float tmp17 = this->get_height();		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(582)
		int tmp18 = this->frameHeight;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(582)
		Float tmp19 = (tmp17 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(582)
		Float tmp20 = (tmp16 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(582)
		tmp10->set(tmp15,tmp20);
		HX_STACK_LINE(583)
		{
			HX_STACK_LINE(583)
			::flixel::math::FlxPoint tmp21 = this->origin;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(583)
			int tmp22 = this->frameWidth;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(583)
			Float tmp23 = (tmp22 * ((Float)0.5));		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(583)
			int tmp24 = this->frameHeight;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(583)
			Float tmp25 = (tmp24 * ((Float)0.5));		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(583)
			tmp21->set(tmp23,tmp25);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,updateHitbox,(void))

Void FlxSprite_obj::resetHelpers( ){
{
		HX_STACK_FRAME("flixel.FlxSprite","resetHelpers",0x6fc22ddf,"flixel.FlxSprite.resetHelpers","flixel/FlxSprite.hx",591,0x0384bffa)
		HX_STACK_THIS(this)
		HX_STACK_LINE(592)
		{
			HX_STACK_LINE(592)
			::flixel::graphics::frames::FlxFrame tmp = this->frame;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(592)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(592)
			if ((tmp1)){
				HX_STACK_LINE(592)
				::flixel::graphics::frames::FlxFrame tmp2 = this->frame;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(592)
				Float tmp3 = tmp2->sourceSize->x;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(592)
				int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(592)
				this->frameWidth = tmp4;
				HX_STACK_LINE(592)
				::flixel::graphics::frames::FlxFrame tmp5 = this->frame;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(592)
				Float tmp6 = tmp5->sourceSize->y;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(592)
				int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(592)
				this->frameHeight = tmp7;
			}
			HX_STACK_LINE(592)
			::flixel::math::FlxPoint tmp2 = this->_halfSize;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(592)
			int tmp3 = this->frameWidth;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(592)
			Float tmp4 = (((Float)0.5) * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(592)
			int tmp5 = this->frameHeight;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(592)
			Float tmp6 = (((Float)0.5) * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(592)
			tmp2->set(tmp4,tmp6);
			HX_STACK_LINE(592)
			{
				HX_STACK_LINE(592)
				::openfl::_legacy::geom::Rectangle tmp7 = this->_flashRect;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(592)
				tmp7->x = (int)0;
				HX_STACK_LINE(592)
				::openfl::_legacy::geom::Rectangle tmp8 = this->_flashRect;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(592)
				tmp8->y = (int)0;
				HX_STACK_LINE(592)
				int tmp9 = this->frameWidth;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(592)
				::openfl::_legacy::geom::Rectangle tmp10 = this->_flashRect;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(592)
				tmp10->width = tmp9;
				HX_STACK_LINE(592)
				int tmp11 = this->frameHeight;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(592)
				::openfl::_legacy::geom::Rectangle tmp12 = this->_flashRect;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(592)
				tmp12->height = tmp11;
			}
		}
		HX_STACK_LINE(593)
		{
			HX_STACK_LINE(593)
			int tmp = this->frameWidth;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(593)
			this->set_width(tmp);
			HX_STACK_LINE(593)
			int tmp1 = this->frameHeight;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(593)
			this->set_height(tmp1);
		}
		HX_STACK_LINE(594)
		::openfl::_legacy::geom::Rectangle tmp = this->_flashRect2;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(594)
		tmp->x = (int)0;
		HX_STACK_LINE(595)
		::openfl::_legacy::geom::Rectangle tmp1 = this->_flashRect2;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(595)
		tmp1->y = (int)0;
		HX_STACK_LINE(597)
		::flixel::graphics::FlxGraphic tmp2 = this->graphic;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(597)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(597)
		if ((tmp3)){
			HX_STACK_LINE(599)
			::flixel::graphics::FlxGraphic tmp4 = this->graphic;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(599)
			::openfl::_legacy::geom::Rectangle tmp5 = this->_flashRect2;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(599)
			tmp5->width = tmp4->width;
			HX_STACK_LINE(600)
			::flixel::graphics::FlxGraphic tmp6 = this->graphic;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(600)
			::openfl::_legacy::geom::Rectangle tmp7 = this->_flashRect2;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(600)
			tmp7->height = tmp6->height;
		}
		HX_STACK_LINE(603)
		{
			HX_STACK_LINE(603)
			::flixel::math::FlxPoint tmp4 = this->origin;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(603)
			int tmp5 = this->frameWidth;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(603)
			Float tmp6 = (tmp5 * ((Float)0.5));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(603)
			int tmp7 = this->frameHeight;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(603)
			Float tmp8 = (tmp7 * ((Float)0.5));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(603)
			tmp4->set(tmp6,tmp8);
		}
		HX_STACK_LINE(605)
		bool tmp4 = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(605)
		if ((tmp4)){
			HX_STACK_LINE(607)
			this->dirty = true;
			HX_STACK_LINE(608)
			this->updateFramePixels();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,resetHelpers,(void))

Void FlxSprite_obj::update( Float elapsed){
{
		HX_STACK_FRAME("flixel.FlxSprite","update",0xe75bd5f2,"flixel.FlxSprite.update","flixel/FlxSprite.hx",613,0x0384bffa)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(614)
		Float tmp = elapsed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(614)
		this->super::update(tmp);
		HX_STACK_LINE(615)
		Float tmp1 = elapsed;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(615)
		this->updateAnimation(tmp1);
	}
return null();
}


Void FlxSprite_obj::updateAnimation( Float elapsed){
{
		HX_STACK_FRAME("flixel.FlxSprite","updateAnimation",0x7e6eaab2,"flixel.FlxSprite.updateAnimation","flixel/FlxSprite.hx",622,0x0384bffa)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(623)
		::flixel::animation::FlxAnimationController tmp = this->animation;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(623)
		Float tmp1 = elapsed;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(623)
		tmp->update(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,updateAnimation,(void))

Void FlxSprite_obj::checkEmptyFrame( ){
{
		HX_STACK_FRAME("flixel.FlxSprite","checkEmptyFrame",0xe3dea03f,"flixel.FlxSprite.checkEmptyFrame","flixel/FlxSprite.hx",628,0x0384bffa)
		HX_STACK_THIS(this)
		HX_STACK_LINE(629)
		::flixel::graphics::frames::FlxFrame tmp = this->_frame;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(629)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(629)
		if ((tmp1)){
			HX_STACK_LINE(630)
			this->loadGraphic(HX_HCSTRING("flixel/images/logo/default.png","\x1c","\x39","\x3e","\x0e"),null(),null(),null(),null(),null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,checkEmptyFrame,(void))

Void FlxSprite_obj::draw( ){
{
		HX_STACK_FRAME("flixel.FlxSprite","draw",0xe68b7fad,"flixel.FlxSprite.draw","flixel/FlxSprite.hx",637,0x0384bffa)
		HX_STACK_THIS(this)
		HX_STACK_LINE(638)
		this->checkEmptyFrame();
		HX_STACK_LINE(640)
		Float tmp = this->alpha;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(640)
		bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(640)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(640)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(640)
		if ((tmp2)){
			HX_STACK_LINE(640)
			::flixel::graphics::frames::FlxFrame tmp4 = this->_frame;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(640)
			::flixel::graphics::frames::FlxFrame tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(640)
			int tmp6 = tmp5->type;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(640)
			tmp3 = (tmp6 == (int)2);
		}
		else{
			HX_STACK_LINE(640)
			tmp3 = true;
		}
		HX_STACK_LINE(640)
		if ((tmp3)){
			HX_STACK_LINE(641)
			return null();
		}
		HX_STACK_LINE(643)
		bool tmp4 = this->dirty;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(643)
		if ((tmp4)){
			HX_STACK_LINE(644)
			bool tmp5 = this->useFramePixels;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(644)
			this->calcFrame(tmp5);
		}
		HX_STACK_LINE(646)
		{
			HX_STACK_LINE(646)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(646)
			Array< ::Dynamic > _g1 = this->get_cameras();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(646)
			while((true)){
				HX_STACK_LINE(646)
				bool tmp5 = (_g < _g1->length);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(646)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(646)
				if ((tmp6)){
					HX_STACK_LINE(646)
					break;
				}
				HX_STACK_LINE(646)
				::flixel::FlxCamera tmp7 = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(646)
				::flixel::FlxCamera camera = tmp7;		HX_STACK_VAR(camera,"camera");
				HX_STACK_LINE(646)
				++(_g);
				HX_STACK_LINE(648)
				bool tmp8 = camera->visible;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(648)
				bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(648)
				bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(648)
				bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(648)
				bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(648)
				bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(648)
				if ((tmp12)){
					HX_STACK_LINE(648)
					bool tmp14 = camera->exists;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(648)
					bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(648)
					bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(648)
					tmp13 = !(tmp16);
				}
				else{
					HX_STACK_LINE(648)
					tmp13 = true;
				}
				HX_STACK_LINE(648)
				bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(648)
				bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(648)
				if ((tmp14)){
					HX_STACK_LINE(648)
					::flixel::FlxCamera tmp16 = camera;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(648)
					::flixel::FlxCamera tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(648)
					bool tmp18 = this->isOnScreen(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(648)
					bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(648)
					bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(648)
					tmp15 = !(tmp20);
				}
				else{
					HX_STACK_LINE(648)
					tmp15 = true;
				}
				HX_STACK_LINE(648)
				if ((tmp15)){
					HX_STACK_LINE(649)
					continue;
				}
				HX_STACK_LINE(651)
				::flixel::math::FlxPoint tmp16 = this->_point;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(651)
				::flixel::FlxCamera tmp17 = camera;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(651)
				::flixel::math::FlxPoint tmp18 = this->getScreenPosition(tmp16,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(651)
				::flixel::math::FlxPoint tmp19 = this->offset;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(651)
				tmp18->subtractPoint(tmp19);
				HX_STACK_LINE(653)
				::flixel::FlxCamera tmp20 = camera;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(653)
				bool tmp21 = this->isSimpleRender(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(653)
				if ((tmp21)){
					HX_STACK_LINE(654)
					::flixel::FlxCamera tmp22 = camera;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(654)
					this->drawSimple(tmp22);
				}
				else{
					HX_STACK_LINE(656)
					::flixel::FlxCamera tmp22 = camera;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(656)
					this->drawComplex(tmp22);
				}
			}
		}
	}
return null();
}


Void FlxSprite_obj::drawSimple( ::flixel::FlxCamera camera){
{
		HX_STACK_FRAME("flixel.FlxSprite","drawSimple",0x0dc977bf,"flixel.FlxSprite.drawSimple","flixel/FlxSprite.hx",671,0x0384bffa)
		HX_STACK_THIS(this)
		HX_STACK_ARG(camera,"camera")
		HX_STACK_LINE(672)
		::flixel::FlxCamera tmp = camera;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(672)
		bool tmp1 = this->isPixelPerfectRender(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(672)
		if ((tmp1)){
			HX_STACK_LINE(673)
			::flixel::math::FlxPoint tmp2 = this->_point;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(673)
			::flixel::math::FlxPoint _this = tmp2;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(673)
			Float tmp3 = _this->x;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(673)
			int tmp4 = ::Math_obj::floor(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(673)
			_this->set_x(tmp4);
			HX_STACK_LINE(673)
			Float tmp5 = _this->y;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(673)
			int tmp6 = ::Math_obj::floor(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(673)
			_this->set_y(tmp6);
			HX_STACK_LINE(673)
			_this;
		}
		HX_STACK_LINE(675)
		{
			HX_STACK_LINE(675)
			::flixel::math::FlxPoint tmp2 = this->_point;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(675)
			::flixel::math::FlxPoint _this = tmp2;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(675)
			::openfl::_legacy::geom::Point tmp3 = this->_flashPoint;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(675)
			::openfl::_legacy::geom::Point FlashPoint = tmp3;		HX_STACK_VAR(FlashPoint,"FlashPoint");
			HX_STACK_LINE(675)
			bool tmp4 = (FlashPoint == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(675)
			if ((tmp4)){
				HX_STACK_LINE(675)
				::openfl::_legacy::geom::Point tmp5 = ::openfl::_legacy::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(675)
				FlashPoint = tmp5;
			}
			HX_STACK_LINE(675)
			FlashPoint->x = _this->x;
			HX_STACK_LINE(675)
			FlashPoint->y = _this->y;
			HX_STACK_LINE(675)
			FlashPoint;
		}
		HX_STACK_LINE(676)
		::flixel::graphics::frames::FlxFrame tmp2 = this->_frame;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(676)
		::openfl::_legacy::display::BitmapData tmp3 = this->framePixels;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(676)
		::openfl::_legacy::geom::Rectangle tmp4 = this->_flashRect;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(677)
		::openfl::_legacy::geom::Point tmp5 = this->_flashPoint;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(677)
		::openfl::_legacy::geom::ColorTransform tmp6 = this->colorTransform;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(677)
		::openfl::_legacy::display::BlendMode tmp7 = this->blend;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(677)
		bool tmp8 = this->antialiasing;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(676)
		camera->copyPixels(tmp2,tmp3,tmp4,tmp5,tmp6,tmp7,tmp8,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,drawSimple,(void))

Void FlxSprite_obj::drawComplex( ::flixel::FlxCamera camera){
{
		HX_STACK_FRAME("flixel.FlxSprite","drawComplex",0xcf4c0e03,"flixel.FlxSprite.drawComplex","flixel/FlxSprite.hx",682,0x0384bffa)
		HX_STACK_THIS(this)
		HX_STACK_ARG(camera,"camera")
		HX_STACK_LINE(683)
		::flixel::graphics::frames::FlxFrame tmp = this->_frame;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(683)
		::flixel::math::FlxMatrix tmp1 = this->_matrix;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(683)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(683)
		{
			HX_STACK_LINE(683)
			bool tmp3 = this->flipX;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(683)
			::flixel::graphics::frames::FlxFrame tmp4 = this->_frame;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(683)
			bool tmp5 = tmp4->flipX;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(683)
			bool tmp6 = (tmp3 != tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(683)
			bool doFlipX = tmp6;		HX_STACK_VAR(doFlipX,"doFlipX");
			HX_STACK_LINE(683)
			::flixel::animation::FlxAnimationController tmp7 = this->animation;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(683)
			::flixel::animation::FlxAnimation tmp8 = tmp7->_curAnim;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(683)
			bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(683)
			if ((tmp9)){
				HX_STACK_LINE(683)
				bool tmp10 = doFlipX;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(683)
				::flixel::animation::FlxAnimationController tmp11 = this->animation;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(683)
				bool tmp12 = tmp11->_curAnim->flipX;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(683)
				tmp2 = (tmp10 != tmp12);
			}
			else{
				HX_STACK_LINE(683)
				tmp2 = doFlipX;
			}
		}
		HX_STACK_LINE(683)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(683)
		{
			HX_STACK_LINE(683)
			bool tmp4 = this->flipY;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(683)
			::flixel::graphics::frames::FlxFrame tmp5 = this->_frame;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(683)
			bool tmp6 = tmp5->flipY;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(683)
			bool tmp7 = (tmp4 != tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(683)
			bool doFlipY = tmp7;		HX_STACK_VAR(doFlipY,"doFlipY");
			HX_STACK_LINE(683)
			::flixel::animation::FlxAnimationController tmp8 = this->animation;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(683)
			::flixel::animation::FlxAnimation tmp9 = tmp8->_curAnim;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(683)
			bool tmp10 = (tmp9 != null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(683)
			if ((tmp10)){
				HX_STACK_LINE(683)
				bool tmp11 = doFlipY;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(683)
				::flixel::animation::FlxAnimationController tmp12 = this->animation;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(683)
				bool tmp13 = tmp12->_curAnim->flipY;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(683)
				tmp3 = (tmp11 != tmp13);
			}
			else{
				HX_STACK_LINE(683)
				tmp3 = doFlipY;
			}
		}
		HX_STACK_LINE(683)
		tmp->prepareMatrix(tmp1,(int)0,tmp2,tmp3);
		HX_STACK_LINE(684)
		::flixel::math::FlxMatrix tmp4 = this->_matrix;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(684)
		::flixel::math::FlxPoint tmp5 = this->origin;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(684)
		Float tmp6 = tmp5->x;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(684)
		Float tmp7 = -(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(684)
		::flixel::math::FlxPoint tmp8 = this->origin;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(684)
		Float tmp9 = tmp8->y;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(684)
		Float tmp10 = -(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(684)
		tmp4->translate(tmp7,tmp10);
		HX_STACK_LINE(685)
		::flixel::math::FlxMatrix tmp11 = this->_matrix;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(685)
		::flixel::math::FlxPoint tmp12 = this->scale;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(685)
		Float tmp13 = tmp12->x;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(685)
		::flixel::math::FlxPoint tmp14 = this->scale;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(685)
		Float tmp15 = tmp14->y;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(685)
		tmp11->scale(tmp13,tmp15);
		HX_STACK_LINE(687)
		Float tmp16 = this->bakedRotationAngle;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(687)
		bool tmp17 = (tmp16 <= (int)0);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(687)
		if ((tmp17)){
			HX_STACK_LINE(689)
			{
				HX_STACK_LINE(689)
				bool tmp18 = this->_angleChanged;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(689)
				if ((tmp18)){
					HX_STACK_LINE(689)
					Float tmp19 = this->angle;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(689)
					Float tmp20 = ::Math_obj::PI;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(689)
					Float tmp21 = (Float(tmp20) / Float((int)180));		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(689)
					Float tmp22 = (tmp19 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(689)
					Float radians = tmp22;		HX_STACK_VAR(radians,"radians");
					HX_STACK_LINE(689)
					Float tmp23 = radians;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(689)
					Float tmp24 = ::Math_obj::sin(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(689)
					this->_sinAngle = tmp24;
					HX_STACK_LINE(689)
					Float tmp25 = radians;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(689)
					Float tmp26 = ::Math_obj::cos(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(689)
					this->_cosAngle = tmp26;
					HX_STACK_LINE(689)
					this->_angleChanged = false;
				}
			}
			HX_STACK_LINE(691)
			Float tmp18 = this->angle;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(691)
			bool tmp19 = (tmp18 != (int)0);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(691)
			if ((tmp19)){
				HX_STACK_LINE(692)
				::flixel::math::FlxMatrix tmp20 = this->_matrix;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(692)
				::flixel::math::FlxMatrix _this = tmp20;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(692)
				Float tmp21 = this->_cosAngle;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(692)
				Float cos = tmp21;		HX_STACK_VAR(cos,"cos");
				HX_STACK_LINE(692)
				Float tmp22 = this->_sinAngle;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(692)
				Float sin = tmp22;		HX_STACK_VAR(sin,"sin");
				HX_STACK_LINE(692)
				Float tmp23 = (_this->a * cos);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(692)
				Float tmp24 = (_this->b * sin);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(692)
				Float tmp25 = (tmp23 - tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(692)
				Float a1 = tmp25;		HX_STACK_VAR(a1,"a1");
				HX_STACK_LINE(692)
				Float tmp26 = (_this->a * sin);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(692)
				Float tmp27 = (_this->b * cos);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(692)
				Float tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(692)
				_this->b = tmp28;
				HX_STACK_LINE(692)
				_this->a = a1;
				HX_STACK_LINE(692)
				Float tmp29 = (_this->c * cos);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(692)
				Float tmp30 = (_this->d * sin);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(692)
				Float tmp31 = (tmp29 - tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(692)
				Float c1 = tmp31;		HX_STACK_VAR(c1,"c1");
				HX_STACK_LINE(692)
				Float tmp32 = (_this->c * sin);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(692)
				Float tmp33 = (_this->d * cos);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(692)
				Float tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(692)
				_this->d = tmp34;
				HX_STACK_LINE(692)
				_this->c = c1;
				HX_STACK_LINE(692)
				Float tmp35 = (_this->tx * cos);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(692)
				Float tmp36 = (_this->ty * sin);		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(692)
				Float tmp37 = (tmp35 - tmp36);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(692)
				Float tx1 = tmp37;		HX_STACK_VAR(tx1,"tx1");
				HX_STACK_LINE(692)
				Float tmp38 = (_this->tx * sin);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(692)
				Float tmp39 = (_this->ty * cos);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(692)
				Float tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(692)
				_this->ty = tmp40;
				HX_STACK_LINE(692)
				_this->tx = tx1;
				HX_STACK_LINE(692)
				_this;
			}
		}
		HX_STACK_LINE(695)
		{
			HX_STACK_LINE(695)
			::flixel::math::FlxPoint tmp18 = this->_point;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(695)
			::flixel::math::FlxPoint _this = tmp18;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(695)
			{
				HX_STACK_LINE(695)
				::flixel::math::FlxPoint _g = _this;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(695)
				Float tmp19 = _g->x;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(695)
				::flixel::math::FlxPoint tmp20 = this->origin;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(695)
				Float tmp21 = tmp20->x;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(695)
				Float tmp22 = (tmp19 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(695)
				_g->set_x(tmp22);
			}
			HX_STACK_LINE(695)
			{
				HX_STACK_LINE(695)
				::flixel::math::FlxPoint _g = _this;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(695)
				Float tmp19 = _g->y;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(695)
				::flixel::math::FlxPoint tmp20 = this->origin;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(695)
				Float tmp21 = tmp20->y;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(695)
				Float tmp22 = (tmp19 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(695)
				_g->set_y(tmp22);
			}
			HX_STACK_LINE(695)
			_this;
		}
		HX_STACK_LINE(696)
		::flixel::math::FlxMatrix tmp18 = this->_matrix;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(696)
		::flixel::math::FlxPoint tmp19 = this->_point;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(696)
		Float tmp20 = tmp19->x;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(696)
		::flixel::math::FlxPoint tmp21 = this->_point;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(696)
		Float tmp22 = tmp21->y;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(696)
		tmp18->translate(tmp20,tmp22);
		HX_STACK_LINE(698)
		::flixel::FlxCamera tmp23 = camera;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(698)
		bool tmp24 = this->isPixelPerfectRender(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(698)
		if ((tmp24)){
			HX_STACK_LINE(700)
			::flixel::math::FlxMatrix tmp25 = this->_matrix;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(700)
			Float tmp26 = tmp25->tx;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(700)
			int tmp27 = ::Math_obj::floor(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(700)
			::flixel::math::FlxMatrix tmp28 = this->_matrix;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(700)
			tmp28->tx = tmp27;
			HX_STACK_LINE(701)
			::flixel::math::FlxMatrix tmp29 = this->_matrix;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(701)
			Float tmp30 = tmp29->ty;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(701)
			int tmp31 = ::Math_obj::floor(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(701)
			::flixel::math::FlxMatrix tmp32 = this->_matrix;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(701)
			tmp32->ty = tmp31;
		}
		HX_STACK_LINE(704)
		::flixel::graphics::frames::FlxFrame tmp25 = this->_frame;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(704)
		::openfl::_legacy::display::BitmapData tmp26 = this->framePixels;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(704)
		::flixel::math::FlxMatrix tmp27 = this->_matrix;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(704)
		::openfl::_legacy::geom::ColorTransform tmp28 = this->colorTransform;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(704)
		::openfl::_legacy::display::BlendMode tmp29 = this->blend;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(704)
		bool tmp30 = this->antialiasing;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(704)
		Dynamic tmp31 = this->shader;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(704)
		camera->drawPixels(tmp25,tmp26,tmp27,tmp28,tmp29,tmp30,tmp31);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,drawComplex,(void))

Void FlxSprite_obj::stamp( ::flixel::FlxSprite Brush,hx::Null< int >  __o_X,hx::Null< int >  __o_Y){
int X = __o_X.Default(0);
int Y = __o_Y.Default(0);
	HX_STACK_FRAME("flixel.FlxSprite","stamp",0x77d9503a,"flixel.FlxSprite.stamp","flixel/FlxSprite.hx",716,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Brush,"Brush")
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
{
		HX_STACK_LINE(717)
		Brush->drawFrame(null());
		HX_STACK_LINE(719)
		::flixel::graphics::FlxGraphic tmp = this->graphic;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(719)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(719)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(719)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(719)
		if ((tmp2)){
			HX_STACK_LINE(719)
			tmp3 = (Brush->graphic == null());
		}
		else{
			HX_STACK_LINE(719)
			tmp3 = true;
		}
		HX_STACK_LINE(719)
		if ((tmp3)){
			HX_STACK_LINE(720)
			HX_STACK_DO_THROW(HX_HCSTRING("Cannot stamp to or from a FlxSprite with no graphics.","\x72","\x0b","\xd4","\xaa"));
		}
		HX_STACK_LINE(722)
		::openfl::_legacy::display::BitmapData bitmapData = Brush->framePixels;		HX_STACK_VAR(bitmapData,"bitmapData");
		HX_STACK_LINE(724)
		bool tmp4 = this->isSimpleRenderBlit(null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(724)
		if ((tmp4)){
			HX_STACK_LINE(726)
			int tmp5 = X;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(726)
			::flixel::graphics::frames::FlxFrame tmp6 = this->frame;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(726)
			Float tmp7 = tmp6->frame->x;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(726)
			Float tmp8 = (tmp5 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(726)
			::openfl::_legacy::geom::Point tmp9 = this->_flashPoint;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(726)
			tmp9->x = tmp8;
			HX_STACK_LINE(727)
			int tmp10 = Y;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(727)
			::flixel::graphics::frames::FlxFrame tmp11 = this->frame;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(727)
			Float tmp12 = tmp11->frame->y;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(727)
			Float tmp13 = (tmp10 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(727)
			::openfl::_legacy::geom::Point tmp14 = this->_flashPoint;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(727)
			tmp14->y = tmp13;
			HX_STACK_LINE(728)
			int tmp15 = bitmapData->get_width();		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(728)
			::openfl::_legacy::geom::Rectangle tmp16 = this->_flashRect2;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(728)
			tmp16->width = tmp15;
			HX_STACK_LINE(729)
			int tmp17 = bitmapData->get_height();		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(729)
			::openfl::_legacy::geom::Rectangle tmp18 = this->_flashRect2;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(729)
			tmp18->height = tmp17;
			HX_STACK_LINE(730)
			::flixel::graphics::FlxGraphic tmp19 = this->graphic;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(730)
			::openfl::_legacy::display::BitmapData tmp20 = bitmapData;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(730)
			::openfl::_legacy::geom::Rectangle tmp21 = this->_flashRect2;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(730)
			::openfl::_legacy::geom::Point tmp22 = this->_flashPoint;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(730)
			tmp19->bitmap->copyPixels(tmp20,tmp21,tmp22,null(),null(),true);
			HX_STACK_LINE(731)
			::flixel::graphics::FlxGraphic tmp23 = this->graphic;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(731)
			int tmp24 = tmp23->bitmap->get_width();		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(731)
			::openfl::_legacy::geom::Rectangle tmp25 = this->_flashRect2;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(731)
			tmp25->width = tmp24;
			HX_STACK_LINE(732)
			::flixel::graphics::FlxGraphic tmp26 = this->graphic;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(732)
			int tmp27 = tmp26->bitmap->get_height();		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(732)
			::openfl::_legacy::geom::Rectangle tmp28 = this->_flashRect2;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(732)
			tmp28->height = tmp27;
		}
		else{
			HX_STACK_LINE(736)
			::flixel::math::FlxMatrix tmp5 = this->_matrix;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(736)
			tmp5->identity();
			HX_STACK_LINE(737)
			::flixel::math::FlxMatrix tmp6 = this->_matrix;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(737)
			Float tmp7 = Brush->origin->x;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(737)
			Float tmp8 = -(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(737)
			Float tmp9 = Brush->origin->y;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(737)
			Float tmp10 = -(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(737)
			tmp6->translate(tmp8,tmp10);
			HX_STACK_LINE(738)
			::flixel::math::FlxMatrix tmp11 = this->_matrix;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(738)
			Float tmp12 = Brush->scale->x;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(738)
			Float tmp13 = Brush->scale->y;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(738)
			tmp11->scale(tmp12,tmp13);
			HX_STACK_LINE(739)
			bool tmp14 = (Brush->angle != (int)0);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(739)
			if ((tmp14)){
				HX_STACK_LINE(741)
				::flixel::math::FlxMatrix tmp15 = this->_matrix;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(741)
				Float tmp16 = Brush->angle;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(741)
				Float tmp17 = ::Math_obj::PI;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(741)
				Float tmp18 = (Float(tmp17) / Float((int)180));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(741)
				Float tmp19 = (tmp16 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(741)
				tmp15->rotate(tmp19);
			}
			HX_STACK_LINE(743)
			::flixel::math::FlxMatrix tmp15 = this->_matrix;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(743)
			int tmp16 = X;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(743)
			::flixel::graphics::frames::FlxFrame tmp17 = this->frame;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(743)
			Float tmp18 = tmp17->frame->x;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(743)
			Float tmp19 = (tmp16 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(743)
			Float tmp20 = Brush->origin->x;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(743)
			Float tmp21 = (tmp19 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(743)
			int tmp22 = Y;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(743)
			::flixel::graphics::frames::FlxFrame tmp23 = this->frame;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(743)
			Float tmp24 = tmp23->frame->y;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(743)
			Float tmp25 = (tmp22 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(743)
			Float tmp26 = Brush->origin->y;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(743)
			Float tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(743)
			tmp15->translate(tmp21,tmp27);
			HX_STACK_LINE(744)
			::openfl::_legacy::display::BlendMode brushBlend = Brush->blend;		HX_STACK_VAR(brushBlend,"brushBlend");
			HX_STACK_LINE(745)
			::flixel::graphics::FlxGraphic tmp28 = this->graphic;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(745)
			::openfl::_legacy::display::BitmapData tmp29 = bitmapData;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(745)
			::flixel::math::FlxMatrix tmp30 = this->_matrix;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(745)
			::openfl::_legacy::display::BlendMode tmp31 = brushBlend;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(745)
			bool tmp32 = Brush->antialiasing;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(745)
			tmp28->bitmap->draw(tmp29,tmp30,null(),tmp31,null(),tmp32);
		}
		HX_STACK_LINE(748)
		bool tmp5 = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(748)
		if ((tmp5)){
			HX_STACK_LINE(750)
			this->dirty = true;
			HX_STACK_LINE(751)
			this->calcFrame(null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxSprite_obj,stamp,(void))

Void FlxSprite_obj::drawFrame( hx::Null< bool >  __o_Force){
bool Force = __o_Force.Default(false);
	HX_STACK_FRAME("flixel.FlxSprite","drawFrame",0x99d67540,"flixel.FlxSprite.drawFrame","flixel/FlxSprite.hx",762,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Force,"Force")
{
		HX_STACK_LINE(763)
		bool tmp = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(763)
		if ((tmp)){
			HX_STACK_LINE(765)
			bool tmp1 = Force;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(765)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(765)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(765)
			if ((tmp2)){
				HX_STACK_LINE(765)
				tmp3 = this->dirty;
			}
			else{
				HX_STACK_LINE(765)
				tmp3 = true;
			}
			HX_STACK_LINE(765)
			if ((tmp3)){
				HX_STACK_LINE(767)
				this->dirty = true;
				HX_STACK_LINE(768)
				this->calcFrame(null());
			}
		}
		else{
			HX_STACK_LINE(773)
			this->dirty = true;
			HX_STACK_LINE(774)
			this->calcFrame(true);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,drawFrame,(void))

Void FlxSprite_obj::centerOffsets( hx::Null< bool >  __o_AdjustPosition){
bool AdjustPosition = __o_AdjustPosition.Default(false);
	HX_STACK_FRAME("flixel.FlxSprite","centerOffsets",0x583e0f62,"flixel.FlxSprite.centerOffsets","flixel/FlxSprite.hx",784,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(AdjustPosition,"AdjustPosition")
{
		HX_STACK_LINE(785)
		::flixel::math::FlxPoint tmp = this->offset;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(785)
		int tmp1 = this->frameWidth;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(785)
		Float tmp2 = this->get_width();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(785)
		Float tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(785)
		Float tmp4 = (tmp3 * ((Float)0.5));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(785)
		tmp->set_x(tmp4);
		HX_STACK_LINE(786)
		::flixel::math::FlxPoint tmp5 = this->offset;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(786)
		int tmp6 = this->frameHeight;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(786)
		Float tmp7 = this->get_height();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(786)
		Float tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(786)
		Float tmp9 = (tmp8 * ((Float)0.5));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(786)
		tmp5->set_y(tmp9);
		HX_STACK_LINE(787)
		bool tmp10 = AdjustPosition;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(787)
		if ((tmp10)){
			HX_STACK_LINE(789)
			{
				HX_STACK_LINE(789)
				::flixel::FlxSprite _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(789)
				Float tmp11 = _g->x;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(789)
				::flixel::math::FlxPoint tmp12 = this->offset;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(789)
				Float tmp13 = tmp12->x;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(789)
				Float tmp14 = (tmp11 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(789)
				_g->set_x(tmp14);
			}
			HX_STACK_LINE(790)
			{
				HX_STACK_LINE(790)
				::flixel::FlxSprite _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(790)
				Float tmp11 = _g->y;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(790)
				::flixel::math::FlxPoint tmp12 = this->offset;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(790)
				Float tmp13 = tmp12->y;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(790)
				Float tmp14 = (tmp11 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(790)
				_g->set_y(tmp14);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,centerOffsets,(void))

Void FlxSprite_obj::centerOrigin( ){
{
		HX_STACK_FRAME("flixel.FlxSprite","centerOrigin",0x4cbae644,"flixel.FlxSprite.centerOrigin","flixel/FlxSprite.hx",799,0x0384bffa)
		HX_STACK_THIS(this)
		HX_STACK_LINE(800)
		::flixel::math::FlxPoint tmp = this->origin;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(800)
		int tmp1 = this->frameWidth;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(800)
		Float tmp2 = (tmp1 * ((Float)0.5));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(800)
		int tmp3 = this->frameHeight;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(800)
		Float tmp4 = (tmp3 * ((Float)0.5));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(800)
		tmp->set(tmp2,tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,centerOrigin,(void))

Array< ::Dynamic > FlxSprite_obj::replaceColor( int Color,int NewColor,hx::Null< bool >  __o_FetchPositions){
bool FetchPositions = __o_FetchPositions.Default(false);
	HX_STACK_FRAME("flixel.FlxSprite","replaceColor",0x7b700138,"flixel.FlxSprite.replaceColor","flixel/FlxSprite.hx",813,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Color,"Color")
	HX_STACK_ARG(NewColor,"NewColor")
	HX_STACK_ARG(FetchPositions,"FetchPositions")
{
		HX_STACK_LINE(814)
		::flixel::graphics::FlxGraphic tmp = this->graphic;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(814)
		::openfl::_legacy::display::BitmapData tmp1 = tmp->bitmap;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(814)
		int tmp2 = Color;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(814)
		int tmp3 = NewColor;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(814)
		bool tmp4 = FetchPositions;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(814)
		Array< ::Dynamic > positions = ::flixel::util::FlxBitmapDataUtil_obj::replaceColor(tmp1,tmp2,tmp3,tmp4,null());		HX_STACK_VAR(positions,"positions");
		HX_STACK_LINE(815)
		bool tmp5 = (positions != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(815)
		if ((tmp5)){
			HX_STACK_LINE(816)
			this->dirty = true;
		}
		HX_STACK_LINE(817)
		return positions;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(FlxSprite_obj,replaceColor,return )

Void FlxSprite_obj::setColorTransform( hx::Null< Float >  __o_redMultiplier,hx::Null< Float >  __o_greenMultiplier,hx::Null< Float >  __o_blueMultiplier,hx::Null< Float >  __o_alphaMultiplier,hx::Null< int >  __o_redOffset,hx::Null< int >  __o_greenOffset,hx::Null< int >  __o_blueOffset,hx::Null< int >  __o_alphaOffset){
Float redMultiplier = __o_redMultiplier.Default(((Float)1.0));
Float greenMultiplier = __o_greenMultiplier.Default(((Float)1.0));
Float blueMultiplier = __o_blueMultiplier.Default(((Float)1.0));
Float alphaMultiplier = __o_alphaMultiplier.Default(((Float)1.0));
int redOffset = __o_redOffset.Default(0);
int greenOffset = __o_greenOffset.Default(0);
int blueOffset = __o_blueOffset.Default(0);
int alphaOffset = __o_alphaOffset.Default(0);
	HX_STACK_FRAME("flixel.FlxSprite","setColorTransform",0xa09a3582,"flixel.FlxSprite.setColorTransform","flixel/FlxSprite.hx",835,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(redMultiplier,"redMultiplier")
	HX_STACK_ARG(greenMultiplier,"greenMultiplier")
	HX_STACK_ARG(blueMultiplier,"blueMultiplier")
	HX_STACK_ARG(alphaMultiplier,"alphaMultiplier")
	HX_STACK_ARG(redOffset,"redOffset")
	HX_STACK_ARG(greenOffset,"greenOffset")
	HX_STACK_ARG(blueOffset,"blueOffset")
	HX_STACK_ARG(alphaOffset,"alphaOffset")
{
		HX_STACK_LINE(836)
		int tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(836)
		{
			HX_STACK_LINE(836)
			int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(836)
			{
				HX_STACK_LINE(836)
				Float Alpha = (int)1;		HX_STACK_VAR(Alpha,"Alpha");
				HX_STACK_LINE(836)
				int tmp2 = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(836)
				int color = tmp2;		HX_STACK_VAR(color,"color");
				HX_STACK_LINE(836)
				int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(836)
				{
					HX_STACK_LINE(836)
					{
						HX_STACK_LINE(836)
						{
							HX_STACK_LINE(836)
							Float tmp4 = (redMultiplier * (int)255);		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(836)
							int tmp5 = ::Math_obj::round(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(836)
							int Value = tmp5;		HX_STACK_VAR(Value,"Value");
							HX_STACK_LINE(836)
							hx::AndEq(color,(int)-16711681);
							HX_STACK_LINE(836)
							bool tmp6 = (Value > (int)255);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(836)
							int tmp7;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(836)
							if ((tmp6)){
								HX_STACK_LINE(836)
								tmp7 = (int)255;
							}
							else{
								HX_STACK_LINE(836)
								bool tmp8 = (Value < (int)0);		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(836)
								if ((tmp8)){
									HX_STACK_LINE(836)
									tmp7 = (int)0;
								}
								else{
									HX_STACK_LINE(836)
									tmp7 = Value;
								}
							}
							HX_STACK_LINE(836)
							int tmp8 = (int(tmp7) << int((int)16));		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(836)
							hx::OrEq(color,tmp8);
							HX_STACK_LINE(836)
							Value;
						}
						HX_STACK_LINE(836)
						redMultiplier;
					}
					HX_STACK_LINE(836)
					{
						HX_STACK_LINE(836)
						{
							HX_STACK_LINE(836)
							Float tmp4 = (greenMultiplier * (int)255);		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(836)
							int tmp5 = ::Math_obj::round(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(836)
							int Value = tmp5;		HX_STACK_VAR(Value,"Value");
							HX_STACK_LINE(836)
							hx::AndEq(color,(int)-65281);
							HX_STACK_LINE(836)
							bool tmp6 = (Value > (int)255);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(836)
							int tmp7;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(836)
							if ((tmp6)){
								HX_STACK_LINE(836)
								tmp7 = (int)255;
							}
							else{
								HX_STACK_LINE(836)
								bool tmp8 = (Value < (int)0);		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(836)
								if ((tmp8)){
									HX_STACK_LINE(836)
									tmp7 = (int)0;
								}
								else{
									HX_STACK_LINE(836)
									tmp7 = Value;
								}
							}
							HX_STACK_LINE(836)
							int tmp8 = (int(tmp7) << int((int)8));		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(836)
							hx::OrEq(color,tmp8);
							HX_STACK_LINE(836)
							Value;
						}
						HX_STACK_LINE(836)
						greenMultiplier;
					}
					HX_STACK_LINE(836)
					{
						HX_STACK_LINE(836)
						{
							HX_STACK_LINE(836)
							Float tmp4 = (blueMultiplier * (int)255);		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(836)
							int tmp5 = ::Math_obj::round(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(836)
							int Value = tmp5;		HX_STACK_VAR(Value,"Value");
							HX_STACK_LINE(836)
							hx::AndEq(color,(int)-256);
							HX_STACK_LINE(836)
							bool tmp6 = (Value > (int)255);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(836)
							int tmp7;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(836)
							if ((tmp6)){
								HX_STACK_LINE(836)
								tmp7 = (int)255;
							}
							else{
								HX_STACK_LINE(836)
								bool tmp8 = (Value < (int)0);		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(836)
								if ((tmp8)){
									HX_STACK_LINE(836)
									tmp7 = (int)0;
								}
								else{
									HX_STACK_LINE(836)
									tmp7 = Value;
								}
							}
							HX_STACK_LINE(836)
							hx::OrEq(color,tmp7);
							HX_STACK_LINE(836)
							Value;
						}
						HX_STACK_LINE(836)
						blueMultiplier;
					}
					HX_STACK_LINE(836)
					{
						HX_STACK_LINE(836)
						{
							HX_STACK_LINE(836)
							Float tmp4 = (Alpha * (int)255);		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(836)
							int tmp5 = ::Math_obj::round(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(836)
							int Value = tmp5;		HX_STACK_VAR(Value,"Value");
							HX_STACK_LINE(836)
							hx::AndEq(color,(int)16777215);
							HX_STACK_LINE(836)
							bool tmp6 = (Value > (int)255);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(836)
							int tmp7;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(836)
							if ((tmp6)){
								HX_STACK_LINE(836)
								tmp7 = (int)255;
							}
							else{
								HX_STACK_LINE(836)
								bool tmp8 = (Value < (int)0);		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(836)
								if ((tmp8)){
									HX_STACK_LINE(836)
									tmp7 = (int)0;
								}
								else{
									HX_STACK_LINE(836)
									tmp7 = Value;
								}
							}
							HX_STACK_LINE(836)
							int tmp8 = (int(tmp7) << int((int)24));		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(836)
							hx::OrEq(color,tmp8);
							HX_STACK_LINE(836)
							Value;
						}
						HX_STACK_LINE(836)
						Alpha;
					}
					HX_STACK_LINE(836)
					tmp3 = color;
				}
				HX_STACK_LINE(836)
				tmp1 = tmp3;
			}
			HX_STACK_LINE(836)
			int this1 = tmp1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(836)
			tmp = (int(this1) & int((int)16777215));
		}
		HX_STACK_LINE(836)
		this->set_color(tmp);
		HX_STACK_LINE(837)
		Float tmp1 = alphaMultiplier;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(837)
		this->set_alpha(tmp1);
		HX_STACK_LINE(839)
		::openfl::_legacy::geom::ColorTransform tmp2 = this->colorTransform;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(839)
		Float tmp3 = redMultiplier;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(839)
		Float tmp4 = greenMultiplier;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(839)
		Float tmp5 = blueMultiplier;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(839)
		Float tmp6 = alphaMultiplier;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(839)
		::flixel::util::FlxColorTransformUtil_obj::setMultipliers(tmp2,tmp3,tmp4,tmp5,tmp6);
		HX_STACK_LINE(840)
		::openfl::_legacy::geom::ColorTransform tmp7 = this->colorTransform;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(840)
		int tmp8 = redOffset;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(840)
		int tmp9 = greenOffset;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(840)
		int tmp10 = blueOffset;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(840)
		int tmp11 = alphaOffset;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(840)
		::flixel::util::FlxColorTransformUtil_obj::setOffsets(tmp7,tmp8,tmp9,tmp10,tmp11);
		HX_STACK_LINE(842)
		Float tmp12 = this->alpha;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(842)
		bool tmp13 = (tmp12 != (int)1);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(842)
		bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(842)
		bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(842)
		bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(842)
		if ((tmp15)){
			HX_STACK_LINE(842)
			int tmp17 = this->color;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(842)
			int tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(842)
			int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(842)
			tmp16 = (tmp19 != (int)16777215);
		}
		else{
			HX_STACK_LINE(842)
			tmp16 = true;
		}
		HX_STACK_LINE(842)
		bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(842)
		bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(842)
		if ((tmp17)){
			HX_STACK_LINE(842)
			::openfl::_legacy::geom::ColorTransform tmp19 = this->colorTransform;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(842)
			::openfl::_legacy::geom::ColorTransform tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(842)
			::openfl::_legacy::geom::ColorTransform tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(842)
			tmp18 = ::flixel::util::FlxColorTransformUtil_obj::hasRGBOffsets(tmp21);
		}
		else{
			HX_STACK_LINE(842)
			tmp18 = true;
		}
		HX_STACK_LINE(842)
		this->useColorTransform = tmp18;
		HX_STACK_LINE(843)
		this->dirty = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC8(FlxSprite_obj,setColorTransform,(void))

Void FlxSprite_obj::updateColorTransform( ){
{
		HX_STACK_FRAME("flixel.FlxSprite","updateColorTransform",0x79f9051b,"flixel.FlxSprite.updateColorTransform","flixel/FlxSprite.hx",847,0x0384bffa)
		HX_STACK_THIS(this)
		HX_STACK_LINE(848)
		::openfl::_legacy::geom::ColorTransform tmp = this->colorTransform;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(848)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(848)
		if ((tmp1)){
			HX_STACK_LINE(849)
			::openfl::_legacy::geom::ColorTransform tmp2 = ::openfl::_legacy::geom::ColorTransform_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(849)
			this->colorTransform = tmp2;
		}
		HX_STACK_LINE(851)
		Float tmp2 = this->alpha;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(851)
		bool tmp3 = (tmp2 != (int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(851)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(851)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(851)
		if ((tmp4)){
			HX_STACK_LINE(851)
			int tmp6 = this->color;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(851)
			int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(851)
			tmp5 = (tmp7 != (int)16777215);
		}
		else{
			HX_STACK_LINE(851)
			tmp5 = true;
		}
		HX_STACK_LINE(851)
		this->useColorTransform = tmp5;
		HX_STACK_LINE(852)
		bool tmp6 = this->useColorTransform;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(852)
		if ((tmp6)){
			HX_STACK_LINE(853)
			::openfl::_legacy::geom::ColorTransform tmp7 = this->colorTransform;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(853)
			int tmp8 = this->color;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(853)
			int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(853)
			int tmp10 = (int(tmp9) >> int((int)16));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(853)
			int tmp11 = (int(tmp10) & int((int)255));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(853)
			Float tmp12 = (Float(tmp11) / Float((int)255));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(853)
			int tmp13 = this->color;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(853)
			int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(853)
			int tmp15 = (int(tmp14) >> int((int)8));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(853)
			int tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(853)
			Float tmp17 = (Float(tmp16) / Float((int)255));		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(853)
			int tmp18 = this->color;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(853)
			int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(853)
			int tmp20 = (int(tmp19) & int((int)255));		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(853)
			Float tmp21 = (Float(tmp20) / Float((int)255));		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(853)
			Float tmp22 = this->alpha;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(853)
			::flixel::util::FlxColorTransformUtil_obj::setMultipliers(tmp7,tmp12,tmp17,tmp21,tmp22);
		}
		else{
			HX_STACK_LINE(855)
			::openfl::_legacy::geom::ColorTransform tmp7 = this->colorTransform;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(855)
			::flixel::util::FlxColorTransformUtil_obj::setMultipliers(tmp7,(int)1,(int)1,(int)1,(int)1);
		}
		HX_STACK_LINE(857)
		this->dirty = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,updateColorTransform,(void))

bool FlxSprite_obj::pixelsOverlapPoint( ::flixel::math::FlxPoint point,hx::Null< int >  __o_Mask,::flixel::FlxCamera Camera){
int Mask = __o_Mask.Default(255);
	HX_STACK_FRAME("flixel.FlxSprite","pixelsOverlapPoint",0x4c878b7f,"flixel.FlxSprite.pixelsOverlapPoint","flixel/FlxSprite.hx",870,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_ARG(Mask,"Mask")
	HX_STACK_ARG(Camera,"Camera")
{
		HX_STACK_LINE(871)
		bool tmp = (Camera == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(871)
		if ((tmp)){
			HX_STACK_LINE(872)
			::flixel::FlxCamera tmp1 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(872)
			Camera = tmp1;
		}
		HX_STACK_LINE(874)
		::flixel::math::FlxPoint tmp1 = this->_point;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(874)
		::flixel::FlxCamera tmp2 = Camera;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(874)
		this->getScreenPosition(tmp1,tmp2);
		HX_STACK_LINE(875)
		::flixel::math::FlxPoint tmp3 = this->_point;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(875)
		::flixel::math::FlxPoint tmp4 = this->offset;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(875)
		tmp3->subtractPoint(tmp4);
		HX_STACK_LINE(876)
		Float tmp5 = point->x;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(876)
		Float tmp6 = Camera->scroll->x;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(876)
		Float tmp7 = (tmp5 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(876)
		::flixel::math::FlxPoint tmp8 = this->_point;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(876)
		Float tmp9 = tmp8->x;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(876)
		Float tmp10 = (tmp7 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(876)
		::openfl::_legacy::geom::Point tmp11 = this->_flashPoint;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(876)
		tmp11->x = tmp10;
		HX_STACK_LINE(877)
		Float tmp12 = point->y;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(877)
		Float tmp13 = Camera->scroll->y;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(877)
		Float tmp14 = (tmp12 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(877)
		::flixel::math::FlxPoint tmp15 = this->_point;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(877)
		Float tmp16 = tmp15->y;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(877)
		Float tmp17 = (tmp14 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(877)
		::openfl::_legacy::geom::Point tmp18 = this->_flashPoint;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(877)
		tmp18->y = tmp17;
		HX_STACK_LINE(879)
		{
			HX_STACK_LINE(879)
			bool tmp19 = point->_weak;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(879)
			if ((tmp19)){
				HX_STACK_LINE(879)
				point->put();
			}
		}
		HX_STACK_LINE(882)
		::openfl::_legacy::geom::Point tmp19 = this->_flashPoint;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(882)
		Float tmp20 = tmp19->x;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(882)
		bool tmp21 = (tmp20 < (int)0);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(882)
		bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(882)
		bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(882)
		bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(882)
		if ((tmp23)){
			HX_STACK_LINE(882)
			::openfl::_legacy::geom::Point tmp25 = this->_flashPoint;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(882)
			::openfl::_legacy::geom::Point tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(882)
			::openfl::_legacy::geom::Point tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(882)
			Float tmp28 = tmp27->x;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(882)
			int tmp29 = this->frameWidth;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(882)
			int tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(882)
			int tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(882)
			tmp24 = (tmp28 > tmp31);
		}
		else{
			HX_STACK_LINE(882)
			tmp24 = true;
		}
		HX_STACK_LINE(882)
		bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(882)
		bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(882)
		bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(882)
		if ((tmp26)){
			HX_STACK_LINE(882)
			::openfl::_legacy::geom::Point tmp28 = this->_flashPoint;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(882)
			::openfl::_legacy::geom::Point tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(882)
			::openfl::_legacy::geom::Point tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(882)
			Float tmp31 = tmp30->y;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(882)
			tmp27 = (tmp31 < (int)0);
		}
		else{
			HX_STACK_LINE(882)
			tmp27 = true;
		}
		HX_STACK_LINE(882)
		bool tmp28 = !(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(882)
		bool tmp29;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(882)
		if ((tmp28)){
			HX_STACK_LINE(882)
			::openfl::_legacy::geom::Point tmp30 = this->_flashPoint;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(882)
			::openfl::_legacy::geom::Point tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(882)
			Float tmp32 = tmp31->y;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(882)
			int tmp33 = this->frameHeight;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(882)
			int tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(882)
			tmp29 = (tmp32 > tmp34);
		}
		else{
			HX_STACK_LINE(882)
			tmp29 = true;
		}
		HX_STACK_LINE(882)
		if ((tmp29)){
			HX_STACK_LINE(884)
			return false;
		}
		else{
			HX_STACK_LINE(888)
			::openfl::_legacy::display::BitmapData tmp30 = this->updateFramePixels();		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(888)
			::openfl::_legacy::display::BitmapData frameData = tmp30;		HX_STACK_VAR(frameData,"frameData");
			HX_STACK_LINE(889)
			::openfl::_legacy::geom::Point tmp31 = this->_flashPoint;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(889)
			Float tmp32 = tmp31->x;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(889)
			int tmp33 = ::Std_obj::_int(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(889)
			::openfl::_legacy::geom::Point tmp34 = this->_flashPoint;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(889)
			Float tmp35 = tmp34->y;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(889)
			int tmp36 = ::Std_obj::_int(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(889)
			int tmp37 = frameData->getPixel32(tmp33,tmp36);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(889)
			int pixelColor = tmp37;		HX_STACK_VAR(pixelColor,"pixelColor");
			HX_STACK_LINE(890)
			int tmp38 = (int(pixelColor) >> int((int)24));		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(890)
			int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(890)
			Float tmp40 = this->alpha;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(890)
			Float tmp41 = (tmp39 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(890)
			int tmp42 = Mask;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(890)
			bool tmp43 = (tmp41 >= tmp42);		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(890)
			return tmp43;
		}
		HX_STACK_LINE(882)
		return false;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(FlxSprite_obj,pixelsOverlapPoint,return )

Void FlxSprite_obj::calcFrame( hx::Null< bool >  __o_RunOnCpp){
bool RunOnCpp = __o_RunOnCpp.Default(false);
	HX_STACK_FRAME("flixel.FlxSprite","calcFrame",0xc4d45b0f,"flixel.FlxSprite.calcFrame","flixel/FlxSprite.hx",901,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(RunOnCpp,"RunOnCpp")
{
		HX_STACK_LINE(902)
		this->checkEmptyFrame();
		HX_STACK_LINE(904)
		bool tmp = ::flixel::FlxG_obj::renderTile;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(904)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(904)
		if ((tmp)){
			HX_STACK_LINE(904)
			bool tmp2 = RunOnCpp;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(904)
			bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(904)
			tmp1 = !(tmp3);
		}
		else{
			HX_STACK_LINE(904)
			tmp1 = false;
		}
		HX_STACK_LINE(904)
		if ((tmp1)){
			HX_STACK_LINE(905)
			return null();
		}
		HX_STACK_LINE(907)
		this->updateFramePixels();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,calcFrame,(void))

::openfl::_legacy::display::BitmapData FlxSprite_obj::updateFramePixels( ){
	HX_STACK_FRAME("flixel.FlxSprite","updateFramePixels",0x2cd43e68,"flixel.FlxSprite.updateFramePixels","flixel/FlxSprite.hx",914,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_LINE(915)
	::flixel::graphics::frames::FlxFrame tmp = this->_frame;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(915)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(915)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(915)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(915)
	if ((tmp2)){
		HX_STACK_LINE(915)
		bool tmp4 = this->dirty;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(915)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(915)
		bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(915)
		tmp3 = !(tmp6);
	}
	else{
		HX_STACK_LINE(915)
		tmp3 = true;
	}
	HX_STACK_LINE(915)
	if ((tmp3)){
		HX_STACK_LINE(916)
		::openfl::_legacy::display::BitmapData tmp4 = this->framePixels;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(916)
		return tmp4;
	}
	HX_STACK_LINE(920)
	bool tmp4 = ::flixel::FlxG_obj::renderTile;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(920)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(920)
	if ((tmp4)){
		HX_STACK_LINE(920)
		::flixel::graphics::FlxGraphic tmp6 = this->_frameGraphic;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(920)
		::flixel::graphics::FlxGraphic tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(920)
		tmp5 = (tmp7 != null());
	}
	else{
		HX_STACK_LINE(920)
		tmp5 = false;
	}
	HX_STACK_LINE(920)
	if ((tmp5)){
		HX_STACK_LINE(922)
		this->dirty = false;
		HX_STACK_LINE(923)
		::openfl::_legacy::display::BitmapData tmp6 = this->framePixels;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(923)
		return tmp6;
	}
	HX_STACK_LINE(926)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(926)
	{
		HX_STACK_LINE(926)
		bool tmp7 = this->flipX;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(926)
		::flixel::graphics::frames::FlxFrame tmp8 = this->_frame;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(926)
		bool tmp9 = tmp8->flipX;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(926)
		bool tmp10 = (tmp7 != tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(926)
		bool doFlipX = tmp10;		HX_STACK_VAR(doFlipX,"doFlipX");
		HX_STACK_LINE(926)
		::flixel::animation::FlxAnimationController tmp11 = this->animation;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(926)
		::flixel::animation::FlxAnimation tmp12 = tmp11->_curAnim;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(926)
		bool tmp13 = (tmp12 != null());		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(926)
		if ((tmp13)){
			HX_STACK_LINE(926)
			bool tmp14 = doFlipX;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(926)
			::flixel::animation::FlxAnimationController tmp15 = this->animation;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(926)
			bool tmp16 = tmp15->_curAnim->flipX;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(926)
			tmp6 = (tmp14 != tmp16);
		}
		else{
			HX_STACK_LINE(926)
			tmp6 = doFlipX;
		}
	}
	HX_STACK_LINE(926)
	bool doFlipX = tmp6;		HX_STACK_VAR(doFlipX,"doFlipX");
	HX_STACK_LINE(927)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(927)
	{
		HX_STACK_LINE(927)
		bool tmp8 = this->flipY;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(927)
		::flixel::graphics::frames::FlxFrame tmp9 = this->_frame;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(927)
		bool tmp10 = tmp9->flipY;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(927)
		bool tmp11 = (tmp8 != tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(927)
		bool doFlipY = tmp11;		HX_STACK_VAR(doFlipY,"doFlipY");
		HX_STACK_LINE(927)
		::flixel::animation::FlxAnimationController tmp12 = this->animation;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(927)
		::flixel::animation::FlxAnimation tmp13 = tmp12->_curAnim;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(927)
		bool tmp14 = (tmp13 != null());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(927)
		if ((tmp14)){
			HX_STACK_LINE(927)
			bool tmp15 = doFlipY;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(927)
			::flixel::animation::FlxAnimationController tmp16 = this->animation;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(927)
			bool tmp17 = tmp16->_curAnim->flipY;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(927)
			tmp7 = (tmp15 != tmp17);
		}
		else{
			HX_STACK_LINE(927)
			tmp7 = doFlipY;
		}
	}
	HX_STACK_LINE(927)
	bool doFlipY = tmp7;		HX_STACK_VAR(doFlipY,"doFlipY");
	HX_STACK_LINE(929)
	bool tmp8 = doFlipX;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(929)
	bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(929)
	bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(929)
	bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(929)
	bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(929)
	if ((tmp11)){
		HX_STACK_LINE(929)
		bool tmp13 = doFlipY;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(929)
		bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(929)
		bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(929)
		tmp12 = !(tmp15);
	}
	else{
		HX_STACK_LINE(929)
		tmp12 = false;
	}
	HX_STACK_LINE(929)
	bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(929)
	if ((tmp12)){
		HX_STACK_LINE(929)
		::flixel::graphics::frames::FlxFrame tmp14 = this->_frame;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(929)
		::flixel::graphics::frames::FlxFrame tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(929)
		int tmp16 = tmp15->type;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(929)
		tmp13 = (tmp16 == (int)0);
	}
	else{
		HX_STACK_LINE(929)
		tmp13 = false;
	}
	HX_STACK_LINE(929)
	if ((tmp13)){
		HX_STACK_LINE(931)
		::flixel::graphics::frames::FlxFrame tmp14 = this->_frame;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(931)
		::openfl::_legacy::display::BitmapData tmp15 = this->framePixels;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(931)
		::openfl::_legacy::geom::Point tmp16 = this->_flashPointZero;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(931)
		::openfl::_legacy::display::BitmapData tmp17 = tmp14->paint(tmp15,tmp16,false,true);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(931)
		this->framePixels = tmp17;
	}
	else{
		HX_STACK_LINE(935)
		::flixel::graphics::frames::FlxFrame tmp14 = this->_frame;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(935)
		::openfl::_legacy::display::BitmapData tmp15 = this->framePixels;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(935)
		::openfl::_legacy::geom::Point tmp16 = this->_flashPointZero;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(936)
		bool tmp17 = doFlipX;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(936)
		bool tmp18 = doFlipY;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(935)
		::openfl::_legacy::display::BitmapData tmp19 = tmp14->paintRotatedAndFlipped(tmp15,tmp16,(int)0,tmp17,tmp18,false,true);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(935)
		this->framePixels = tmp19;
	}
	HX_STACK_LINE(939)
	bool tmp14 = this->useColorTransform;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(939)
	if ((tmp14)){
		HX_STACK_LINE(941)
		::openfl::_legacy::display::BitmapData tmp15 = this->framePixels;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(941)
		::openfl::_legacy::geom::Rectangle tmp16 = this->_flashRect;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(941)
		::openfl::_legacy::geom::ColorTransform tmp17 = this->colorTransform;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(941)
		tmp15->colorTransform(tmp16,tmp17);
	}
	HX_STACK_LINE(944)
	bool tmp15 = ::flixel::FlxG_obj::renderTile;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(944)
	bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(944)
	if ((tmp15)){
		HX_STACK_LINE(944)
		tmp16 = this->useFramePixels;
	}
	else{
		HX_STACK_LINE(944)
		tmp16 = false;
	}
	HX_STACK_LINE(944)
	if ((tmp16)){
		HX_STACK_LINE(947)
		::flixel::graphics::FlxGraphic tmp17 = this->_frameGraphic;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(947)
		::flixel::graphics::FlxGraphic tmp18 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(947)
		this->_frameGraphic = tmp18;
		HX_STACK_LINE(948)
		::openfl::_legacy::display::BitmapData tmp19 = this->framePixels;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(948)
		::flixel::graphics::FlxGraphic tmp20 = ::flixel::graphics::FlxGraphic_obj::fromBitmapData(tmp19,false,null(),false);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(948)
		this->_frameGraphic = tmp20;
		HX_STACK_LINE(949)
		::flixel::graphics::FlxGraphic tmp21 = this->_frameGraphic;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(949)
		::flixel::graphics::frames::FlxImageFrame tmp22 = tmp21->get_imageFrame();		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(949)
		::flixel::graphics::frames::FlxFrame tmp23 = tmp22->get_frame();		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(949)
		::flixel::graphics::frames::FlxFrame tmp24 = this->_frame;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(949)
		::flixel::graphics::frames::FlxFrame tmp25 = tmp23->copyTo(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(949)
		this->_frame = tmp25;
	}
	HX_STACK_LINE(952)
	this->dirty = false;
	HX_STACK_LINE(953)
	::openfl::_legacy::display::BitmapData tmp17 = this->framePixels;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(953)
	return tmp17;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,updateFramePixels,return )

::flixel::math::FlxPoint FlxSprite_obj::getGraphicMidpoint( ::flixel::math::FlxPoint point){
	HX_STACK_FRAME("flixel.FlxSprite","getGraphicMidpoint",0xc420be03,"flixel.FlxSprite.getGraphicMidpoint","flixel/FlxSprite.hx",963,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(964)
	bool tmp = (point == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(964)
	if ((tmp)){
		HX_STACK_LINE(966)
		::flixel::math::FlxPoint tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(966)
		{
			HX_STACK_LINE(966)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(966)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(966)
			::flixel::util::FlxPool_flixel_math_FlxPoint tmp2 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(966)
			::flixel::math::FlxPoint tmp3 = tmp2->get();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(966)
			Float tmp4 = X;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(966)
			Float tmp5 = Y;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(966)
			::flixel::math::FlxPoint tmp6 = tmp3->set(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(966)
			::flixel::math::FlxPoint point1 = tmp6;		HX_STACK_VAR(point1,"point1");
			HX_STACK_LINE(966)
			point1->_inPool = false;
			HX_STACK_LINE(966)
			tmp1 = point1;
		}
		HX_STACK_LINE(966)
		point = tmp1;
	}
	HX_STACK_LINE(968)
	Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(968)
	int tmp2 = this->frameWidth;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(968)
	Float tmp3 = (tmp2 * ((Float)0.5));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(968)
	Float tmp4 = (tmp1 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(968)
	Float tmp5 = this->y;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(968)
	int tmp6 = this->frameHeight;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(968)
	Float tmp7 = (tmp6 * ((Float)0.5));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(968)
	Float tmp8 = (tmp5 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(968)
	::flixel::math::FlxPoint tmp9 = point->set(tmp4,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(968)
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,getGraphicMidpoint,return )

bool FlxSprite_obj::isOnScreen( ::flixel::FlxCamera Camera){
	HX_STACK_FRAME("flixel.FlxSprite","isOnScreen",0xb5403c5e,"flixel.FlxSprite.isOnScreen","flixel/FlxSprite.hx",979,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Camera,"Camera")
	HX_STACK_LINE(980)
	bool tmp = (Camera == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(980)
	if ((tmp)){
		HX_STACK_LINE(981)
		::flixel::FlxCamera tmp1 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(981)
		Camera = tmp1;
	}
	HX_STACK_LINE(983)
	Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(983)
	::flixel::math::FlxPoint tmp2 = this->offset;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(983)
	Float tmp3 = tmp2->x;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(983)
	Float tmp4 = (tmp1 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(983)
	Float tmp5 = Camera->scroll->x;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(983)
	::flixel::math::FlxPoint tmp6 = this->scrollFactor;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(983)
	Float tmp7 = tmp6->x;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(983)
	Float tmp8 = (tmp5 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(983)
	Float tmp9 = (tmp4 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(983)
	Float minX = tmp9;		HX_STACK_VAR(minX,"minX");
	HX_STACK_LINE(984)
	Float tmp10 = this->y;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(984)
	::flixel::math::FlxPoint tmp11 = this->offset;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(984)
	Float tmp12 = tmp11->y;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(984)
	Float tmp13 = (tmp10 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(984)
	Float tmp14 = Camera->scroll->y;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(984)
	::flixel::math::FlxPoint tmp15 = this->scrollFactor;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(984)
	Float tmp16 = tmp15->y;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(984)
	Float tmp17 = (tmp14 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(984)
	Float tmp18 = (tmp13 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(984)
	Float minY = tmp18;		HX_STACK_VAR(minY,"minY");
	HX_STACK_LINE(986)
	Float tmp19 = this->angle;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(986)
	bool tmp20 = (tmp19 == (int)0);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(986)
	bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(986)
	bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(986)
	bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(986)
	if ((tmp22)){
		HX_STACK_LINE(986)
		Float tmp24 = this->bakedRotationAngle;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(986)
		Float tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(986)
		Float tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(986)
		tmp23 = (tmp26 > (int)0);
	}
	else{
		HX_STACK_LINE(986)
		tmp23 = true;
	}
	HX_STACK_LINE(986)
	bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(986)
	bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(986)
	if ((tmp24)){
		HX_STACK_LINE(986)
		::flixel::math::FlxPoint tmp26 = this->scale;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(986)
		::flixel::math::FlxPoint tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(986)
		::flixel::math::FlxPoint tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(986)
		Float tmp29 = tmp28->x;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(986)
		tmp25 = (tmp29 == (int)1);
	}
	else{
		HX_STACK_LINE(986)
		tmp25 = false;
	}
	HX_STACK_LINE(986)
	bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(986)
	if ((tmp25)){
		HX_STACK_LINE(986)
		::flixel::math::FlxPoint tmp27 = this->scale;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(986)
		::flixel::math::FlxPoint tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(986)
		Float tmp29 = tmp28->y;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(986)
		tmp26 = (tmp29 == (int)1);
	}
	else{
		HX_STACK_LINE(986)
		tmp26 = false;
	}
	HX_STACK_LINE(986)
	if ((tmp26)){
		HX_STACK_LINE(988)
		bool tmp27 = (minX > Camera->width);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(988)
		bool tmp28 = !(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(988)
		bool tmp29;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(988)
		if ((tmp28)){
			HX_STACK_LINE(988)
			Float tmp30 = minX;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(988)
			int tmp31 = this->frameWidth;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(988)
			int tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(988)
			Float tmp33 = (tmp30 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(988)
			Float tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(988)
			tmp29 = (tmp34 < (int)0);
		}
		else{
			HX_STACK_LINE(988)
			tmp29 = true;
		}
		HX_STACK_LINE(988)
		if ((tmp29)){
			HX_STACK_LINE(989)
			return false;
		}
		HX_STACK_LINE(991)
		bool tmp30 = (minY > Camera->height);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(991)
		bool tmp31 = !(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(991)
		bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(991)
		if ((tmp31)){
			HX_STACK_LINE(991)
			Float tmp33 = minY;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(991)
			int tmp34 = this->frameHeight;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(991)
			int tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(991)
			Float tmp36 = (tmp33 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(991)
			Float tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(991)
			tmp32 = (tmp37 < (int)0);
		}
		else{
			HX_STACK_LINE(991)
			tmp32 = true;
		}
		HX_STACK_LINE(991)
		if ((tmp32)){
			HX_STACK_LINE(992)
			return false;
		}
	}
	else{
		HX_STACK_LINE(996)
		::flixel::math::FlxPoint tmp27 = this->_halfSize;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(996)
		Float radiusX = tmp27->x;		HX_STACK_VAR(radiusX,"radiusX");
		HX_STACK_LINE(997)
		::flixel::math::FlxPoint tmp28 = this->_halfSize;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(997)
		Float radiusY = tmp28->y;		HX_STACK_VAR(radiusY,"radiusY");
		HX_STACK_LINE(999)
		::flixel::math::FlxPoint tmp29 = this->origin;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(999)
		Float ox = tmp29->x;		HX_STACK_VAR(ox,"ox");
		HX_STACK_LINE(1000)
		bool tmp30 = (ox != radiusX);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(1000)
		if ((tmp30)){
			HX_STACK_LINE(1002)
			Float tmp31 = ox;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(1002)
			Float tmp32 = ::Math_obj::abs(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(1002)
			Float x1 = tmp32;		HX_STACK_VAR(x1,"x1");
			HX_STACK_LINE(1003)
			int tmp33 = this->frameWidth;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(1003)
			Float tmp34 = ox;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(1003)
			Float tmp35 = (tmp33 - tmp34);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(1003)
			Float tmp36 = ::Math_obj::abs(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(1003)
			Float x2 = tmp36;		HX_STACK_VAR(x2,"x2");
			HX_STACK_LINE(1004)
			Float tmp37 = x2;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(1004)
			Float tmp38 = x1;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(1004)
			Float tmp39 = ::Math_obj::max(tmp37,tmp38);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(1004)
			radiusX = tmp39;
		}
		HX_STACK_LINE(1007)
		::flixel::math::FlxPoint tmp31 = this->origin;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(1007)
		Float oy = tmp31->y;		HX_STACK_VAR(oy,"oy");
		HX_STACK_LINE(1008)
		bool tmp32 = (oy != radiusY);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(1008)
		if ((tmp32)){
			HX_STACK_LINE(1010)
			Float tmp33 = oy;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(1010)
			Float tmp34 = ::Math_obj::abs(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(1010)
			Float y1 = tmp34;		HX_STACK_VAR(y1,"y1");
			HX_STACK_LINE(1011)
			int tmp35 = this->frameHeight;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(1011)
			Float tmp36 = oy;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(1011)
			Float tmp37 = (tmp35 - tmp36);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(1011)
			Float tmp38 = ::Math_obj::abs(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(1011)
			Float y2 = tmp38;		HX_STACK_VAR(y2,"y2");
			HX_STACK_LINE(1012)
			Float tmp39 = y2;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(1012)
			Float tmp40 = y1;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(1012)
			Float tmp41 = ::Math_obj::max(tmp39,tmp40);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(1012)
			radiusY = tmp41;
		}
		HX_STACK_LINE(1015)
		::flixel::math::FlxPoint tmp33 = this->scale;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(1015)
		Float tmp34 = tmp33->x;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(1015)
		Float tmp35 = ::Math_obj::abs(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(1015)
		hx::MultEq(radiusX,tmp35);
		HX_STACK_LINE(1016)
		::flixel::math::FlxPoint tmp36 = this->scale;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(1016)
		Float tmp37 = tmp36->y;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(1016)
		Float tmp38 = ::Math_obj::abs(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(1016)
		hx::MultEq(radiusY,tmp38);
		HX_STACK_LINE(1017)
		Float tmp39 = radiusX;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(1017)
		Float tmp40 = radiusY;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(1017)
		Float tmp41 = ::Math_obj::max(tmp39,tmp40);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(1017)
		Float radius = tmp41;		HX_STACK_VAR(radius,"radius");
		HX_STACK_LINE(1018)
		hx::MultEq(radius,((Float)1.41421356237));
		HX_STACK_LINE(1020)
		hx::AddEq(minX,ox);
		HX_STACK_LINE(1021)
		Float tmp42 = (minX + radius);		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(1021)
		Float maxX = tmp42;		HX_STACK_VAR(maxX,"maxX");
		HX_STACK_LINE(1022)
		hx::SubEq(minX,radius);
		HX_STACK_LINE(1024)
		bool tmp43 = (maxX < (int)0);		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(1024)
		bool tmp44 = !(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(1024)
		bool tmp45;		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(1024)
		if ((tmp44)){
			HX_STACK_LINE(1024)
			tmp45 = (minX > Camera->width);
		}
		else{
			HX_STACK_LINE(1024)
			tmp45 = true;
		}
		HX_STACK_LINE(1024)
		if ((tmp45)){
			HX_STACK_LINE(1025)
			return false;
		}
		HX_STACK_LINE(1027)
		hx::AddEq(minY,oy);
		HX_STACK_LINE(1028)
		Float tmp46 = (minY + radius);		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(1028)
		Float maxY = tmp46;		HX_STACK_VAR(maxY,"maxY");
		HX_STACK_LINE(1029)
		hx::SubEq(minY,radius);
		HX_STACK_LINE(1031)
		bool tmp47 = (maxY < (int)0);		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(1031)
		bool tmp48 = !(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(1031)
		bool tmp49;		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(1031)
		if ((tmp48)){
			HX_STACK_LINE(1031)
			tmp49 = (minY > Camera->height);
		}
		else{
			HX_STACK_LINE(1031)
			tmp49 = true;
		}
		HX_STACK_LINE(1031)
		if ((tmp49)){
			HX_STACK_LINE(1032)
			return false;
		}
	}
	HX_STACK_LINE(1035)
	return true;
}


bool FlxSprite_obj::isSimpleRender( ::flixel::FlxCamera camera){
	HX_STACK_FRAME("flixel.FlxSprite","isSimpleRender",0x6aa0d51b,"flixel.FlxSprite.isSimpleRender","flixel/FlxSprite.hx",1043,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(camera,"camera")
	HX_STACK_LINE(1044)
	bool tmp = ::flixel::FlxG_obj::renderTile;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1044)
	if ((tmp)){
		HX_STACK_LINE(1045)
		return false;
	}
	HX_STACK_LINE(1047)
	::flixel::FlxCamera tmp1 = camera;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1047)
	bool tmp2 = this->isSimpleRenderBlit(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1047)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,isSimpleRender,return )

bool FlxSprite_obj::isSimpleRenderBlit( ::flixel::FlxCamera camera){
	HX_STACK_FRAME("flixel.FlxSprite","isSimpleRenderBlit",0x4bf362f0,"flixel.FlxSprite.isSimpleRenderBlit","flixel/FlxSprite.hx",1057,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(camera,"camera")
	HX_STACK_LINE(1058)
	Float tmp = this->angle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1058)
	bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1058)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1058)
	bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1058)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1058)
	if ((tmp3)){
		HX_STACK_LINE(1058)
		Float tmp5 = this->bakedRotationAngle;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1058)
		Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1058)
		Float tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1058)
		tmp4 = (tmp7 > (int)0);
	}
	else{
		HX_STACK_LINE(1058)
		tmp4 = true;
	}
	HX_STACK_LINE(1058)
	bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1058)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1058)
	if ((tmp5)){
		HX_STACK_LINE(1059)
		::flixel::math::FlxPoint tmp7 = this->scale;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1059)
		::flixel::math::FlxPoint tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1059)
		::flixel::math::FlxPoint tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1059)
		Float tmp10 = tmp9->x;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1059)
		tmp6 = (tmp10 == (int)1);
	}
	else{
		HX_STACK_LINE(1058)
		tmp6 = false;
	}
	HX_STACK_LINE(1058)
	bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(1058)
	bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(1058)
	if ((tmp7)){
		HX_STACK_LINE(1059)
		::flixel::math::FlxPoint tmp9 = this->scale;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1059)
		::flixel::math::FlxPoint tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1059)
		::flixel::math::FlxPoint tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1059)
		Float tmp12 = tmp11->y;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1059)
		tmp8 = (tmp12 == (int)1);
	}
	else{
		HX_STACK_LINE(1058)
		tmp8 = false;
	}
	HX_STACK_LINE(1058)
	bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(1058)
	if ((tmp8)){
		HX_STACK_LINE(1059)
		::openfl::_legacy::display::BlendMode tmp10 = this->blend;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1059)
		::openfl::_legacy::display::BlendMode tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1059)
		tmp9 = (tmp11 == null());
	}
	else{
		HX_STACK_LINE(1058)
		tmp9 = false;
	}
	HX_STACK_LINE(1058)
	bool result = tmp9;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(1060)
	bool tmp10 = result;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(1060)
	bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(1060)
	if ((tmp10)){
		HX_STACK_LINE(1060)
		bool tmp12 = (camera != null());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1060)
		bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1060)
		bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1060)
		if ((tmp14)){
			HX_STACK_LINE(1060)
			::flixel::FlxCamera tmp15 = camera;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1060)
			::flixel::FlxCamera tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1060)
			tmp11 = this->isPixelPerfectRender(tmp16);
		}
		else{
			HX_STACK_LINE(1060)
			tmp11 = this->pixelPerfectRender;
		}
	}
	else{
		HX_STACK_LINE(1060)
		tmp11 = false;
	}
	HX_STACK_LINE(1060)
	result = tmp11;
	HX_STACK_LINE(1061)
	bool tmp12 = result;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(1061)
	return tmp12;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,isSimpleRenderBlit,return )

Void FlxSprite_obj::setFacingFlip( int Direction,bool FlipX,bool FlipY){
{
		HX_STACK_FRAME("flixel.FlxSprite","setFacingFlip",0x6816c060,"flixel.FlxSprite.setFacingFlip","flixel/FlxSprite.hx",1075,0x0384bffa)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Direction,"Direction")
		HX_STACK_ARG(FlipX,"FlipX")
		HX_STACK_ARG(FlipY,"FlipY")
		HX_STACK_LINE(1076)
		::haxe::ds::IntMap tmp = this->_facingFlip;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1076)
		int tmp1 = Direction;		HX_STACK_VAR(tmp1,"tmp1");
		struct _Function_1_1{
			inline static Dynamic Block( bool &FlipY,bool &FlipX){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/FlxSprite.hx",1076,0x0384bffa)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , FlipX,false);
					__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , FlipY,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1076)
		Dynamic tmp2 = _Function_1_1::Block(FlipY,FlipX);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1076)
		tmp->set(tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxSprite_obj,setFacingFlip,(void))

::flixel::FlxSprite FlxSprite_obj::setFrames( ::flixel::graphics::frames::FlxFramesCollection Frames,hx::Null< bool >  __o_saveAnimations){
bool saveAnimations = __o_saveAnimations.Default(true);
	HX_STACK_FRAME("flixel.FlxSprite","setFrames",0xd774ec9f,"flixel.FlxSprite.setFrames","flixel/FlxSprite.hx",1088,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Frames,"Frames")
	HX_STACK_ARG(saveAnimations,"saveAnimations")
{
		HX_STACK_LINE(1089)
		bool tmp = saveAnimations;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1089)
		if ((tmp)){
			HX_STACK_LINE(1091)
			::flixel::animation::FlxAnimationController tmp1 = this->animation;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1091)
			::haxe::ds::StringMap animations = tmp1->_animations;		HX_STACK_VAR(animations,"animations");
			HX_STACK_LINE(1092)
			bool reverse = false;		HX_STACK_VAR(reverse,"reverse");
			HX_STACK_LINE(1093)
			int index = (int)0;		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(1094)
			::flixel::animation::FlxAnimationController tmp2 = this->animation;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1094)
			int frameIndex = tmp2->frameIndex;		HX_STACK_VAR(frameIndex,"frameIndex");
			HX_STACK_LINE(1095)
			::String currName = null();		HX_STACK_VAR(currName,"currName");
			HX_STACK_LINE(1097)
			::flixel::animation::FlxAnimationController tmp3 = this->animation;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1097)
			::flixel::animation::FlxAnimation tmp4 = tmp3->_curAnim;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1097)
			bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1097)
			if ((tmp5)){
				HX_STACK_LINE(1099)
				::flixel::animation::FlxAnimationController tmp6 = this->animation;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1099)
				bool tmp7 = tmp6->_curAnim->reversed;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1099)
				reverse = tmp7;
				HX_STACK_LINE(1100)
				::flixel::animation::FlxAnimationController tmp8 = this->animation;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1100)
				int tmp9 = tmp8->_curAnim->curFrame;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1100)
				index = tmp9;
				HX_STACK_LINE(1101)
				::flixel::animation::FlxAnimationController tmp10 = this->animation;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1101)
				::String tmp11 = tmp10->_curAnim->name;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1101)
				currName = tmp11;
			}
			HX_STACK_LINE(1104)
			::flixel::animation::FlxAnimationController tmp6 = this->animation;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1104)
			tmp6->_animations = null();
			HX_STACK_LINE(1105)
			::flixel::graphics::frames::FlxFramesCollection tmp7 = Frames;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1105)
			this->set_frames(tmp7);
			HX_STACK_LINE(1106)
			::flixel::graphics::frames::FlxFramesCollection tmp8 = this->frames;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1106)
			::flixel::graphics::frames::FlxFrame tmp9 = tmp8->frames->__get(frameIndex).StaticCast< ::flixel::graphics::frames::FlxFrame >();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1106)
			this->set_frame(tmp9);
			HX_STACK_LINE(1107)
			::flixel::animation::FlxAnimationController tmp10 = this->animation;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1107)
			tmp10->_animations = animations;
			HX_STACK_LINE(1109)
			bool tmp11 = (currName != null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1109)
			if ((tmp11)){
				HX_STACK_LINE(1111)
				::flixel::animation::FlxAnimationController tmp12 = this->animation;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1111)
				::String tmp13 = currName;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1111)
				bool tmp14 = reverse;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1111)
				int tmp15 = index;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1111)
				tmp12->play(tmp13,false,tmp14,tmp15);
			}
		}
		else{
			HX_STACK_LINE(1116)
			::flixel::graphics::frames::FlxFramesCollection tmp1 = Frames;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1116)
			this->set_frames(tmp1);
		}
		HX_STACK_LINE(1119)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxSprite_obj,setFrames,return )

::openfl::_legacy::display::BitmapData FlxSprite_obj::get_pixels( ){
	HX_STACK_FRAME("flixel.FlxSprite","get_pixels",0x90b8575f,"flixel.FlxSprite.get_pixels","flixel/FlxSprite.hx",1124,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1125)
	::flixel::graphics::FlxGraphic tmp = this->graphic;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1125)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1125)
	::openfl::_legacy::display::BitmapData tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1125)
	if ((tmp1)){
		HX_STACK_LINE(1125)
		tmp2 = null();
	}
	else{
		HX_STACK_LINE(1125)
		::flixel::graphics::FlxGraphic tmp3 = this->graphic;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1125)
		tmp2 = tmp3->bitmap;
	}
	HX_STACK_LINE(1125)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,get_pixels,return )

::openfl::_legacy::display::BitmapData FlxSprite_obj::set_pixels( ::openfl::_legacy::display::BitmapData Pixels){
	HX_STACK_FRAME("flixel.FlxSprite","set_pixels",0x9435f5d3,"flixel.FlxSprite.set_pixels","flixel/FlxSprite.hx",1130,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Pixels,"Pixels")
	HX_STACK_LINE(1131)
	::flixel::_system::frontEnds::BitmapFrontEnd tmp = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1131)
	::openfl::_legacy::display::BitmapData tmp1 = Pixels;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1131)
	::String tmp2 = tmp->__Field(HX_HCSTRING("findKeyForBitmap","\x12","\x70","\x29","\x81"), hx::paccDynamic )(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1131)
	::String key = tmp2;		HX_STACK_VAR(key,"key");
	HX_STACK_LINE(1133)
	bool tmp3 = (key == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1133)
	if ((tmp3)){
		HX_STACK_LINE(1135)
		::flixel::_system::frontEnds::BitmapFrontEnd tmp4 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1135)
		::String tmp5 = tmp4->__Field(HX_HCSTRING("getUniqueKey","\x98","\xcb","\xd7","\xe8"), hx::paccDynamic )(null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1135)
		key = tmp5;
		HX_STACK_LINE(1136)
		::flixel::_system::frontEnds::BitmapFrontEnd tmp6 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1136)
		::openfl::_legacy::display::BitmapData tmp7 = Pixels;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1136)
		::String tmp8 = key;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1136)
		::flixel::graphics::FlxGraphic tmp9 = tmp6->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )(tmp7,false,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1136)
		this->set_graphic(tmp9);
	}
	else{
		HX_STACK_LINE(1140)
		::flixel::_system::frontEnds::BitmapFrontEnd tmp4 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1140)
		::String tmp5 = key;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1140)
		::flixel::graphics::FlxGraphic tmp6 = tmp4->__Field(HX_HCSTRING("_cache","\x83","\xe1","\xfb","\x3c"), hx::paccDynamic )->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic )(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1140)
		::flixel::graphics::FlxGraphic tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1140)
		this->set_graphic(tmp7);
	}
	HX_STACK_LINE(1143)
	::flixel::graphics::FlxGraphic tmp4 = this->graphic;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1143)
	::flixel::graphics::frames::FlxImageFrame tmp5 = tmp4->get_imageFrame();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1143)
	this->set_frames(tmp5);
	HX_STACK_LINE(1144)
	::openfl::_legacy::display::BitmapData tmp6 = Pixels;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1144)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_pixels,return )

::flixel::graphics::frames::FlxFrame FlxSprite_obj::set_frame( ::flixel::graphics::frames::FlxFrame Value){
	HX_STACK_FRAME("flixel.FlxSprite","set_frame",0xf8c58847,"flixel.FlxSprite.set_frame","flixel/FlxSprite.hx",1149,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(1150)
	this->frame = Value;
	HX_STACK_LINE(1151)
	::flixel::graphics::frames::FlxFrame tmp = this->frame;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1151)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1151)
	if ((tmp1)){
		HX_STACK_LINE(1153)
		{
			HX_STACK_LINE(1153)
			::flixel::graphics::frames::FlxFrame tmp2 = this->frame;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1153)
			bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1153)
			if ((tmp3)){
				HX_STACK_LINE(1153)
				::flixel::graphics::frames::FlxFrame tmp4 = this->frame;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1153)
				Float tmp5 = tmp4->sourceSize->x;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1153)
				int tmp6 = ::Std_obj::_int(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1153)
				this->frameWidth = tmp6;
				HX_STACK_LINE(1153)
				::flixel::graphics::frames::FlxFrame tmp7 = this->frame;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1153)
				Float tmp8 = tmp7->sourceSize->y;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1153)
				int tmp9 = ::Std_obj::_int(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1153)
				this->frameHeight = tmp9;
			}
			HX_STACK_LINE(1153)
			::flixel::math::FlxPoint tmp4 = this->_halfSize;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1153)
			int tmp5 = this->frameWidth;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1153)
			Float tmp6 = (((Float)0.5) * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1153)
			int tmp7 = this->frameHeight;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1153)
			Float tmp8 = (((Float)0.5) * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1153)
			tmp4->set(tmp6,tmp8);
			HX_STACK_LINE(1153)
			{
				HX_STACK_LINE(1153)
				::openfl::_legacy::geom::Rectangle tmp9 = this->_flashRect;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1153)
				tmp9->x = (int)0;
				HX_STACK_LINE(1153)
				::openfl::_legacy::geom::Rectangle tmp10 = this->_flashRect;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1153)
				tmp10->y = (int)0;
				HX_STACK_LINE(1153)
				int tmp11 = this->frameWidth;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1153)
				::openfl::_legacy::geom::Rectangle tmp12 = this->_flashRect;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1153)
				tmp12->width = tmp11;
				HX_STACK_LINE(1153)
				int tmp13 = this->frameHeight;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1153)
				::openfl::_legacy::geom::Rectangle tmp14 = this->_flashRect;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1153)
				tmp14->height = tmp13;
			}
		}
		HX_STACK_LINE(1154)
		this->dirty = true;
	}
	else{
		HX_STACK_LINE(1156)
		::flixel::graphics::frames::FlxFramesCollection tmp2 = this->frames;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1156)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1156)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1156)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1156)
		if ((tmp4)){
			HX_STACK_LINE(1156)
			::flixel::graphics::frames::FlxFramesCollection tmp6 = this->frames;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1156)
			::flixel::graphics::frames::FlxFramesCollection tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1156)
			::flixel::graphics::frames::FlxFramesCollection tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1156)
			tmp5 = (tmp8->frames != null());
		}
		else{
			HX_STACK_LINE(1156)
			tmp5 = false;
		}
		HX_STACK_LINE(1156)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1156)
		if ((tmp5)){
			HX_STACK_LINE(1156)
			int tmp7 = this->numFrames;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1156)
			int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1156)
			tmp6 = (tmp8 > (int)0);
		}
		else{
			HX_STACK_LINE(1156)
			tmp6 = false;
		}
		HX_STACK_LINE(1156)
		if ((tmp6)){
			HX_STACK_LINE(1158)
			::flixel::graphics::frames::FlxFramesCollection tmp7 = this->frames;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1158)
			::flixel::graphics::frames::FlxFrame tmp8 = tmp7->frames->__get((int)0).StaticCast< ::flixel::graphics::frames::FlxFrame >();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1158)
			this->frame = tmp8;
			HX_STACK_LINE(1159)
			this->dirty = true;
		}
		else{
			HX_STACK_LINE(1163)
			return null();
		}
	}
	HX_STACK_LINE(1166)
	bool tmp2 = ::flixel::FlxG_obj::renderTile;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1166)
	if ((tmp2)){
		HX_STACK_LINE(1168)
		::flixel::graphics::FlxGraphic tmp3 = this->_frameGraphic;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1168)
		::flixel::graphics::FlxGraphic tmp4 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1168)
		this->_frameGraphic = tmp4;
	}
	HX_STACK_LINE(1171)
	::flixel::math::FlxRect tmp3 = this->clipRect;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1171)
	bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1171)
	if ((tmp4)){
		HX_STACK_LINE(1173)
		::flixel::graphics::frames::FlxFrame tmp5 = this->frame;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1173)
		::flixel::math::FlxRect tmp6 = this->clipRect;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1173)
		::flixel::graphics::frames::FlxFrame tmp7 = this->_frame;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1173)
		::flixel::graphics::frames::FlxFrame tmp8 = tmp5->clipTo(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1173)
		this->_frame = tmp8;
	}
	else{
		HX_STACK_LINE(1177)
		::flixel::graphics::frames::FlxFrame tmp5 = this->frame;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1177)
		::flixel::graphics::frames::FlxFrame tmp6 = this->_frame;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1177)
		::flixel::graphics::frames::FlxFrame tmp7 = tmp5->copyTo(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1177)
		this->_frame = tmp7;
	}
	HX_STACK_LINE(1180)
	::flixel::graphics::frames::FlxFrame tmp5 = this->frame;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1180)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_frame,return )

int FlxSprite_obj::set_facing( int Direction){
	HX_STACK_FRAME("flixel.FlxSprite","set_facing",0xeb9145c0,"flixel.FlxSprite.set_facing","flixel/FlxSprite.hx",1185,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Direction,"Direction")
	HX_STACK_LINE(1186)
	::haxe::ds::IntMap tmp = this->_facingFlip;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1186)
	int tmp1 = Direction;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1186)
	Dynamic tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1186)
	Dynamic flip = tmp2;		HX_STACK_VAR(flip,"flip");
	HX_STACK_LINE(1187)
	bool tmp3 = (flip != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1187)
	if ((tmp3)){
		HX_STACK_LINE(1189)
		bool tmp4 = flip->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1189)
		this->set_flipX(tmp4);
		HX_STACK_LINE(1190)
		bool tmp5 = flip->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1190)
		this->set_flipY(tmp5);
	}
	HX_STACK_LINE(1193)
	int tmp4 = this->facing = Direction;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1193)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_facing,return )

Float FlxSprite_obj::set_alpha( Float Alpha){
	HX_STACK_FRAME("flixel.FlxSprite","set_alpha",0x13d8b778,"flixel.FlxSprite.set_alpha","flixel/FlxSprite.hx",1198,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Alpha,"Alpha")
	HX_STACK_LINE(1199)
	Float tmp = this->alpha;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1199)
	Float tmp1 = Alpha;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1199)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1199)
	if ((tmp2)){
		HX_STACK_LINE(1201)
		Float tmp3 = Alpha;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1201)
		return tmp3;
	}
	HX_STACK_LINE(1203)
	Dynamic tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1203)
	{
		HX_STACK_LINE(1203)
		bool tmp4 = true;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1203)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1203)
		if ((tmp4)){
			HX_STACK_LINE(1203)
			tmp5 = (Alpha < (int)0);
		}
		else{
			HX_STACK_LINE(1203)
			tmp5 = false;
		}
		HX_STACK_LINE(1203)
		Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1203)
		if ((tmp5)){
			HX_STACK_LINE(1203)
			tmp6 = (int)0;
		}
		else{
			HX_STACK_LINE(1203)
			tmp6 = Alpha;
		}
		HX_STACK_LINE(1203)
		Float lowerBound = tmp6;		HX_STACK_VAR(lowerBound,"lowerBound");
		HX_STACK_LINE(1203)
		bool tmp7 = true;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1203)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1203)
		if ((tmp7)){
			HX_STACK_LINE(1203)
			tmp8 = (lowerBound > (int)1);
		}
		else{
			HX_STACK_LINE(1203)
			tmp8 = false;
		}
		HX_STACK_LINE(1203)
		if ((tmp8)){
			HX_STACK_LINE(1203)
			tmp3 = (int)1;
		}
		else{
			HX_STACK_LINE(1203)
			tmp3 = lowerBound;
		}
	}
	HX_STACK_LINE(1203)
	this->alpha = ((Float)(tmp3));
	HX_STACK_LINE(1204)
	this->updateColorTransform();
	HX_STACK_LINE(1205)
	Float tmp4 = this->alpha;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1205)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_alpha,return )

int FlxSprite_obj::set_color( int Color){
	HX_STACK_FRAME("flixel.FlxSprite","set_color",0x3c9e817d,"flixel.FlxSprite.set_color","flixel/FlxSprite.hx",1210,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Color,"Color")
	HX_STACK_LINE(1211)
	int tmp = this->color;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1211)
	int tmp1 = Color;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1211)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1211)
	if ((tmp2)){
		HX_STACK_LINE(1213)
		int tmp3 = Color;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1213)
		return tmp3;
	}
	HX_STACK_LINE(1215)
	this->color = Color;
	HX_STACK_LINE(1216)
	this->updateColorTransform();
	HX_STACK_LINE(1217)
	int tmp3 = this->color;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1217)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_color,return )

Float FlxSprite_obj::set_angle( Float Value){
	HX_STACK_FRAME("flixel.FlxSprite","set_angle",0x152453ed,"flixel.FlxSprite.set_angle","flixel/FlxSprite.hx",1222,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(1223)
	Float tmp = this->angle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1223)
	Float tmp1 = Value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1223)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1223)
	bool newAngle = tmp2;		HX_STACK_VAR(newAngle,"newAngle");
	HX_STACK_LINE(1224)
	Float tmp3 = Value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1224)
	Float tmp4 = this->super::set_angle(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1224)
	Float ret = tmp4;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1225)
	bool tmp5 = newAngle;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1225)
	if ((tmp5)){
		HX_STACK_LINE(1227)
		this->_angleChanged = true;
		HX_STACK_LINE(1228)
		::flixel::animation::FlxAnimationController tmp6 = this->animation;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1228)
		tmp6->update((int)0);
	}
	HX_STACK_LINE(1230)
	Float tmp6 = ret;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1230)
	return tmp6;
}


Void FlxSprite_obj::updateTrig( ){
{
		HX_STACK_FRAME("flixel.FlxSprite","updateTrig",0x193f7fee,"flixel.FlxSprite.updateTrig","flixel/FlxSprite.hx",1235,0x0384bffa)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1236)
		bool tmp = this->_angleChanged;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1236)
		if ((tmp)){
			HX_STACK_LINE(1238)
			Float tmp1 = this->angle;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1238)
			Float tmp2 = ::Math_obj::PI;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1238)
			Float tmp3 = (Float(tmp2) / Float((int)180));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1238)
			Float tmp4 = (tmp1 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1238)
			Float radians = tmp4;		HX_STACK_VAR(radians,"radians");
			HX_STACK_LINE(1239)
			Float tmp5 = radians;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1239)
			Float tmp6 = ::Math_obj::sin(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1239)
			this->_sinAngle = tmp6;
			HX_STACK_LINE(1240)
			Float tmp7 = radians;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1240)
			Float tmp8 = ::Math_obj::cos(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1240)
			this->_cosAngle = tmp8;
			HX_STACK_LINE(1241)
			this->_angleChanged = false;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,updateTrig,(void))

::openfl::_legacy::display::BlendMode FlxSprite_obj::set_blend( ::openfl::_legacy::display::BlendMode Value){
	HX_STACK_FRAME("flixel.FlxSprite","set_blend",0xa736f86b,"flixel.FlxSprite.set_blend","flixel/FlxSprite.hx",1247,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(1248)
	::openfl::_legacy::display::BlendMode tmp = this->blend = Value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1248)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_blend,return )

::flixel::graphics::FlxGraphic FlxSprite_obj::set_graphic( ::flixel::graphics::FlxGraphic Value){
	HX_STACK_FRAME("flixel.FlxSprite","set_graphic",0x07012542,"flixel.FlxSprite.set_graphic","flixel/FlxSprite.hx",1257,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(1258)
	::flixel::graphics::FlxGraphic tmp = this->graphic;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1258)
	::flixel::graphics::FlxGraphic oldGraphic = tmp;		HX_STACK_VAR(oldGraphic,"oldGraphic");
	HX_STACK_LINE(1260)
	::flixel::graphics::FlxGraphic tmp1 = this->graphic;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1260)
	::flixel::graphics::FlxGraphic tmp2 = Value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1260)
	bool tmp3 = (tmp1 != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1260)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1260)
	if ((tmp3)){
		HX_STACK_LINE(1260)
		tmp4 = (Value != null());
	}
	else{
		HX_STACK_LINE(1260)
		tmp4 = false;
	}
	HX_STACK_LINE(1260)
	if ((tmp4)){
		HX_STACK_LINE(1262)
		::flixel::graphics::FlxGraphic _g = Value;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1262)
		int tmp5 = _g->get_useCount();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1262)
		int _g1 = tmp5;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1262)
		int tmp6 = (_g1 + (int)1);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1262)
		_g->set_useCount(tmp6);
		HX_STACK_LINE(1262)
		_g1;
	}
	HX_STACK_LINE(1265)
	bool tmp5 = (oldGraphic != null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1265)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1265)
	if ((tmp5)){
		HX_STACK_LINE(1265)
		tmp6 = (oldGraphic != Value);
	}
	else{
		HX_STACK_LINE(1265)
		tmp6 = false;
	}
	HX_STACK_LINE(1265)
	if ((tmp6)){
		HX_STACK_LINE(1267)
		::flixel::graphics::FlxGraphic _g = oldGraphic;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1267)
		int tmp7 = _g->get_useCount();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1267)
		int _g1 = tmp7;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1267)
		int tmp8 = (_g1 - (int)1);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1267)
		_g->set_useCount(tmp8);
		HX_STACK_LINE(1267)
		_g1;
	}
	HX_STACK_LINE(1270)
	::flixel::graphics::FlxGraphic tmp7 = this->graphic = Value;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(1270)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_graphic,return )

::flixel::math::FlxRect FlxSprite_obj::set_clipRect( ::flixel::math::FlxRect rect){
	HX_STACK_FRAME("flixel.FlxSprite","set_clipRect",0x60020c3a,"flixel.FlxSprite.set_clipRect","flixel/FlxSprite.hx",1275,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rect,"rect")
	HX_STACK_LINE(1276)
	bool tmp = (rect != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1276)
	if ((tmp)){
		HX_STACK_LINE(1278)
		::flixel::math::FlxRect tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1278)
		{
			HX_STACK_LINE(1278)
			Float tmp2 = rect->x;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1278)
			int tmp3 = ::Math_obj::round(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1278)
			rect->x = tmp3;
			HX_STACK_LINE(1278)
			Float tmp4 = rect->y;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1278)
			int tmp5 = ::Math_obj::round(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1278)
			rect->y = tmp5;
			HX_STACK_LINE(1278)
			Float tmp6 = rect->width;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1278)
			int tmp7 = ::Math_obj::round(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1278)
			rect->width = tmp7;
			HX_STACK_LINE(1278)
			Float tmp8 = rect->height;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1278)
			int tmp9 = ::Math_obj::round(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1278)
			rect->height = tmp9;
			HX_STACK_LINE(1278)
			tmp1 = rect;
		}
		HX_STACK_LINE(1278)
		this->clipRect = tmp1;
	}
	else{
		HX_STACK_LINE(1282)
		this->clipRect = null();
	}
	HX_STACK_LINE(1285)
	::flixel::graphics::frames::FlxFramesCollection tmp1 = this->frames;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1285)
	bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1285)
	if ((tmp2)){
		HX_STACK_LINE(1287)
		::flixel::graphics::frames::FlxFramesCollection tmp3 = this->frames;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1287)
		::flixel::animation::FlxAnimationController tmp4 = this->animation;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1287)
		int tmp5 = tmp4->frameIndex;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1287)
		::flixel::graphics::frames::FlxFrame tmp6 = tmp3->frames->__get(tmp5).StaticCast< ::flixel::graphics::frames::FlxFrame >();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1287)
		this->set_frame(tmp6);
	}
	HX_STACK_LINE(1290)
	::flixel::math::FlxRect tmp3 = rect;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1290)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_clipRect,return )

::flixel::graphics::frames::FlxFramesCollection FlxSprite_obj::set_frames( ::flixel::graphics::frames::FlxFramesCollection Frames){
	HX_STACK_FRAME("flixel.FlxSprite","set_frames",0xb411b64c,"flixel.FlxSprite.set_frames","flixel/FlxSprite.hx",1302,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Frames,"Frames")
	HX_STACK_LINE(1303)
	::flixel::animation::FlxAnimationController tmp = this->animation;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1303)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1303)
	if ((tmp1)){
		HX_STACK_LINE(1305)
		::flixel::animation::FlxAnimationController tmp2 = this->animation;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1305)
		tmp2->destroyAnimations();
	}
	HX_STACK_LINE(1308)
	bool tmp2 = (Frames != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1308)
	if ((tmp2)){
		HX_STACK_LINE(1310)
		::flixel::graphics::FlxGraphic tmp3 = Frames->parent;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1310)
		this->set_graphic(tmp3);
		HX_STACK_LINE(1311)
		this->frames = Frames;
		HX_STACK_LINE(1312)
		::flixel::graphics::frames::FlxFramesCollection tmp4 = this->frames;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1312)
		::flixel::graphics::frames::FlxFrame tmp5 = tmp4->frames->__get((int)0).StaticCast< ::flixel::graphics::frames::FlxFrame >();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1312)
		this->set_frame(tmp5);
		HX_STACK_LINE(1313)
		::flixel::graphics::frames::FlxFramesCollection tmp6 = this->frames;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1313)
		int tmp7 = tmp6->frames->length;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1313)
		this->numFrames = tmp7;
		HX_STACK_LINE(1314)
		this->resetHelpers();
		HX_STACK_LINE(1315)
		this->bakedRotationAngle = (int)0;
		HX_STACK_LINE(1316)
		::flixel::animation::FlxAnimationController tmp8 = this->animation;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1316)
		tmp8->set_frameIndex((int)0);
		HX_STACK_LINE(1317)
		this->graphicLoaded();
	}
	else{
		HX_STACK_LINE(1321)
		this->frames = null();
		HX_STACK_LINE(1322)
		this->set_frame(null());
		HX_STACK_LINE(1323)
		this->set_graphic(null());
	}
	HX_STACK_LINE(1326)
	this->set_clipRect(null());
	HX_STACK_LINE(1327)
	::flixel::graphics::frames::FlxFramesCollection tmp3 = Frames;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1327)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_frames,return )

bool FlxSprite_obj::set_flipX( bool Value){
	HX_STACK_FRAME("flixel.FlxSprite","set_flipX",0xf4d45525,"flixel.FlxSprite.set_flipX","flixel/FlxSprite.hx",1332,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(1333)
	bool tmp = ::flixel::FlxG_obj::renderTile;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1333)
	if ((tmp)){
		HX_STACK_LINE(1335)
		bool tmp1 = Value;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1335)
		int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1335)
		if ((tmp1)){
			HX_STACK_LINE(1335)
			tmp2 = (int)-1;
		}
		else{
			HX_STACK_LINE(1335)
			tmp2 = (int)1;
		}
		HX_STACK_LINE(1335)
		this->_facingHorizontalMult = tmp2;
	}
	HX_STACK_LINE(1337)
	bool tmp1 = this->flipX;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1337)
	bool tmp2 = Value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1337)
	bool tmp3 = (tmp1 != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1337)
	bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1337)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1337)
	if ((tmp4)){
		HX_STACK_LINE(1337)
		tmp5 = this->dirty;
	}
	else{
		HX_STACK_LINE(1337)
		tmp5 = true;
	}
	HX_STACK_LINE(1337)
	this->dirty = tmp5;
	HX_STACK_LINE(1338)
	bool tmp6 = this->flipX = Value;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1338)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_flipX,return )

bool FlxSprite_obj::set_flipY( bool Value){
	HX_STACK_FRAME("flixel.FlxSprite","set_flipY",0xf4d45526,"flixel.FlxSprite.set_flipY","flixel/FlxSprite.hx",1343,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(1344)
	bool tmp = ::flixel::FlxG_obj::renderTile;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1344)
	if ((tmp)){
		HX_STACK_LINE(1346)
		bool tmp1 = Value;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1346)
		int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1346)
		if ((tmp1)){
			HX_STACK_LINE(1346)
			tmp2 = (int)-1;
		}
		else{
			HX_STACK_LINE(1346)
			tmp2 = (int)1;
		}
		HX_STACK_LINE(1346)
		this->_facingVerticalMult = tmp2;
	}
	HX_STACK_LINE(1348)
	bool tmp1 = this->flipY;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1348)
	bool tmp2 = Value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1348)
	bool tmp3 = (tmp1 != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1348)
	bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1348)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1348)
	if ((tmp4)){
		HX_STACK_LINE(1348)
		tmp5 = this->dirty;
	}
	else{
		HX_STACK_LINE(1348)
		tmp5 = true;
	}
	HX_STACK_LINE(1348)
	this->dirty = tmp5;
	HX_STACK_LINE(1349)
	bool tmp6 = this->flipY = Value;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1349)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_flipY,return )

bool FlxSprite_obj::set_antialiasing( bool value){
	HX_STACK_FRAME("flixel.FlxSprite","set_antialiasing",0xf8f29e1a,"flixel.FlxSprite.set_antialiasing","flixel/FlxSprite.hx",1354,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1355)
	bool tmp = this->antialiasing = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1355)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_antialiasing,return )

bool FlxSprite_obj::set_useFramePixels( bool value){
	HX_STACK_FRAME("flixel.FlxSprite","set_useFramePixels",0x72e62ad9,"flixel.FlxSprite.set_useFramePixels","flixel/FlxSprite.hx",1360,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1361)
	bool tmp = ::flixel::FlxG_obj::renderTile;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1361)
	if ((tmp)){
		HX_STACK_LINE(1363)
		bool tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1363)
		bool tmp2 = this->useFramePixels;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1363)
		bool tmp3 = (tmp1 != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1363)
		if ((tmp3)){
			HX_STACK_LINE(1365)
			this->useFramePixels = value;
			HX_STACK_LINE(1366)
			{
				HX_STACK_LINE(1366)
				::flixel::graphics::frames::FlxFrame tmp4 = this->frame;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1366)
				this->set_frame(tmp4);
			}
			HX_STACK_LINE(1368)
			bool tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1368)
			if ((tmp4)){
				HX_STACK_LINE(1370)
				this->updateFramePixels();
			}
		}
		HX_STACK_LINE(1374)
		bool tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1374)
		return tmp4;
	}
	else{
		HX_STACK_LINE(1378)
		this->useFramePixels = true;
		HX_STACK_LINE(1379)
		return true;
	}
	HX_STACK_LINE(1361)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_useFramePixels,return )

bool FlxSprite_obj::checkFlipX( ){
	HX_STACK_FRAME("flixel.FlxSprite","checkFlipX",0x26093f8c,"flixel.FlxSprite.checkFlipX","flixel/FlxSprite.hx",1385,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1386)
	bool tmp = this->flipX;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1386)
	::flixel::graphics::frames::FlxFrame tmp1 = this->_frame;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1386)
	bool tmp2 = tmp1->flipX;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1386)
	bool tmp3 = (tmp != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1386)
	bool doFlipX = tmp3;		HX_STACK_VAR(doFlipX,"doFlipX");
	HX_STACK_LINE(1387)
	::flixel::animation::FlxAnimationController tmp4 = this->animation;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1387)
	::flixel::animation::FlxAnimation tmp5 = tmp4->_curAnim;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1387)
	bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1387)
	if ((tmp6)){
		HX_STACK_LINE(1389)
		bool tmp7 = doFlipX;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1389)
		::flixel::animation::FlxAnimationController tmp8 = this->animation;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1389)
		bool tmp9 = tmp8->_curAnim->flipX;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1389)
		bool tmp10 = (tmp7 != tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1389)
		return tmp10;
	}
	HX_STACK_LINE(1391)
	bool tmp7 = doFlipX;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(1391)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,checkFlipX,return )

bool FlxSprite_obj::checkFlipY( ){
	HX_STACK_FRAME("flixel.FlxSprite","checkFlipY",0x26093f8d,"flixel.FlxSprite.checkFlipY","flixel/FlxSprite.hx",1396,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1397)
	bool tmp = this->flipY;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1397)
	::flixel::graphics::frames::FlxFrame tmp1 = this->_frame;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1397)
	bool tmp2 = tmp1->flipY;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1397)
	bool tmp3 = (tmp != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1397)
	bool doFlipY = tmp3;		HX_STACK_VAR(doFlipY,"doFlipY");
	HX_STACK_LINE(1398)
	::flixel::animation::FlxAnimationController tmp4 = this->animation;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1398)
	::flixel::animation::FlxAnimation tmp5 = tmp4->_curAnim;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1398)
	bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1398)
	if ((tmp6)){
		HX_STACK_LINE(1400)
		bool tmp7 = doFlipY;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1400)
		::flixel::animation::FlxAnimationController tmp8 = this->animation;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1400)
		bool tmp9 = tmp8->_curAnim->flipY;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1400)
		bool tmp10 = (tmp7 != tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1400)
		return tmp10;
	}
	HX_STACK_LINE(1402)
	bool tmp7 = doFlipY;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(1402)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,checkFlipY,return )


FlxSprite_obj::FlxSprite_obj()
{
}

void FlxSprite_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxSprite);
	HX_MARK_MEMBER_NAME(animation,"animation");
	HX_MARK_MEMBER_NAME(framePixels,"framePixels");
	HX_MARK_MEMBER_NAME(useFramePixels,"useFramePixels");
	HX_MARK_MEMBER_NAME(antialiasing,"antialiasing");
	HX_MARK_MEMBER_NAME(dirty,"dirty");
	HX_MARK_MEMBER_NAME(frame,"frame");
	HX_MARK_MEMBER_NAME(frameWidth,"frameWidth");
	HX_MARK_MEMBER_NAME(frameHeight,"frameHeight");
	HX_MARK_MEMBER_NAME(numFrames,"numFrames");
	HX_MARK_MEMBER_NAME(frames,"frames");
	HX_MARK_MEMBER_NAME(graphic,"graphic");
	HX_MARK_MEMBER_NAME(bakedRotationAngle,"bakedRotationAngle");
	HX_MARK_MEMBER_NAME(alpha,"alpha");
	HX_MARK_MEMBER_NAME(facing,"facing");
	HX_MARK_MEMBER_NAME(flipX,"flipX");
	HX_MARK_MEMBER_NAME(flipY,"flipY");
	HX_MARK_MEMBER_NAME(origin,"origin");
	HX_MARK_MEMBER_NAME(offset,"offset");
	HX_MARK_MEMBER_NAME(scale,"scale");
	HX_MARK_MEMBER_NAME(blend,"blend");
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(colorTransform,"colorTransform");
	HX_MARK_MEMBER_NAME(useColorTransform,"useColorTransform");
	HX_MARK_MEMBER_NAME(clipRect,"clipRect");
	HX_MARK_MEMBER_NAME(shader,"shader");
	HX_MARK_MEMBER_NAME(_frame,"_frame");
	HX_MARK_MEMBER_NAME(_frameGraphic,"_frameGraphic");
	HX_MARK_MEMBER_NAME(_facingHorizontalMult,"_facingHorizontalMult");
	HX_MARK_MEMBER_NAME(_facingVerticalMult,"_facingVerticalMult");
	HX_MARK_MEMBER_NAME(_flashPoint,"_flashPoint");
	HX_MARK_MEMBER_NAME(_flashRect,"_flashRect");
	HX_MARK_MEMBER_NAME(_flashRect2,"_flashRect2");
	HX_MARK_MEMBER_NAME(_flashPointZero,"_flashPointZero");
	HX_MARK_MEMBER_NAME(_matrix,"_matrix");
	HX_MARK_MEMBER_NAME(_halfSize,"_halfSize");
	HX_MARK_MEMBER_NAME(_sinAngle,"_sinAngle");
	HX_MARK_MEMBER_NAME(_cosAngle,"_cosAngle");
	HX_MARK_MEMBER_NAME(_angleChanged,"_angleChanged");
	HX_MARK_MEMBER_NAME(_facingFlip,"_facingFlip");
	::flixel::FlxObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxSprite_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(animation,"animation");
	HX_VISIT_MEMBER_NAME(framePixels,"framePixels");
	HX_VISIT_MEMBER_NAME(useFramePixels,"useFramePixels");
	HX_VISIT_MEMBER_NAME(antialiasing,"antialiasing");
	HX_VISIT_MEMBER_NAME(dirty,"dirty");
	HX_VISIT_MEMBER_NAME(frame,"frame");
	HX_VISIT_MEMBER_NAME(frameWidth,"frameWidth");
	HX_VISIT_MEMBER_NAME(frameHeight,"frameHeight");
	HX_VISIT_MEMBER_NAME(numFrames,"numFrames");
	HX_VISIT_MEMBER_NAME(frames,"frames");
	HX_VISIT_MEMBER_NAME(graphic,"graphic");
	HX_VISIT_MEMBER_NAME(bakedRotationAngle,"bakedRotationAngle");
	HX_VISIT_MEMBER_NAME(alpha,"alpha");
	HX_VISIT_MEMBER_NAME(facing,"facing");
	HX_VISIT_MEMBER_NAME(flipX,"flipX");
	HX_VISIT_MEMBER_NAME(flipY,"flipY");
	HX_VISIT_MEMBER_NAME(origin,"origin");
	HX_VISIT_MEMBER_NAME(offset,"offset");
	HX_VISIT_MEMBER_NAME(scale,"scale");
	HX_VISIT_MEMBER_NAME(blend,"blend");
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(colorTransform,"colorTransform");
	HX_VISIT_MEMBER_NAME(useColorTransform,"useColorTransform");
	HX_VISIT_MEMBER_NAME(clipRect,"clipRect");
	HX_VISIT_MEMBER_NAME(shader,"shader");
	HX_VISIT_MEMBER_NAME(_frame,"_frame");
	HX_VISIT_MEMBER_NAME(_frameGraphic,"_frameGraphic");
	HX_VISIT_MEMBER_NAME(_facingHorizontalMult,"_facingHorizontalMult");
	HX_VISIT_MEMBER_NAME(_facingVerticalMult,"_facingVerticalMult");
	HX_VISIT_MEMBER_NAME(_flashPoint,"_flashPoint");
	HX_VISIT_MEMBER_NAME(_flashRect,"_flashRect");
	HX_VISIT_MEMBER_NAME(_flashRect2,"_flashRect2");
	HX_VISIT_MEMBER_NAME(_flashPointZero,"_flashPointZero");
	HX_VISIT_MEMBER_NAME(_matrix,"_matrix");
	HX_VISIT_MEMBER_NAME(_halfSize,"_halfSize");
	HX_VISIT_MEMBER_NAME(_sinAngle,"_sinAngle");
	HX_VISIT_MEMBER_NAME(_cosAngle,"_cosAngle");
	HX_VISIT_MEMBER_NAME(_angleChanged,"_angleChanged");
	HX_VISIT_MEMBER_NAME(_facingFlip,"_facingFlip");
	::flixel::FlxObject_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxSprite_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"dirty") ) { return dirty; }
		if (HX_FIELD_EQ(inName,"frame") ) { return frame; }
		if (HX_FIELD_EQ(inName,"alpha") ) { return alpha; }
		if (HX_FIELD_EQ(inName,"flipX") ) { return flipX; }
		if (HX_FIELD_EQ(inName,"flipY") ) { return flipY; }
		if (HX_FIELD_EQ(inName,"scale") ) { return scale; }
		if (HX_FIELD_EQ(inName,"blend") ) { return blend; }
		if (HX_FIELD_EQ(inName,"color") ) { return color; }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		if (HX_FIELD_EQ(inName,"stamp") ) { return stamp_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"pixels") ) { if (inCallProp == hx::paccAlways) return get_pixels(); }
		if (HX_FIELD_EQ(inName,"frames") ) { return frames; }
		if (HX_FIELD_EQ(inName,"facing") ) { return facing; }
		if (HX_FIELD_EQ(inName,"origin") ) { return origin; }
		if (HX_FIELD_EQ(inName,"offset") ) { return offset; }
		if (HX_FIELD_EQ(inName,"shader") ) { return shader; }
		if (HX_FIELD_EQ(inName,"_frame") ) { return _frame; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"graphic") ) { return graphic; }
		if (HX_FIELD_EQ(inName,"_matrix") ) { return _matrix; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"clipRect") ) { return clipRect; }
		if (HX_FIELD_EQ(inName,"initVars") ) { return initVars_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"animation") ) { return animation; }
		if (HX_FIELD_EQ(inName,"numFrames") ) { return numFrames; }
		if (HX_FIELD_EQ(inName,"_halfSize") ) { return _halfSize; }
		if (HX_FIELD_EQ(inName,"_sinAngle") ) { return _sinAngle; }
		if (HX_FIELD_EQ(inName,"_cosAngle") ) { return _cosAngle; }
		if (HX_FIELD_EQ(inName,"resetSize") ) { return resetSize_dyn(); }
		if (HX_FIELD_EQ(inName,"drawFrame") ) { return drawFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"calcFrame") ) { return calcFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"setFrames") ) { return setFrames_dyn(); }
		if (HX_FIELD_EQ(inName,"set_frame") ) { return set_frame_dyn(); }
		if (HX_FIELD_EQ(inName,"set_alpha") ) { return set_alpha_dyn(); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return set_color_dyn(); }
		if (HX_FIELD_EQ(inName,"set_angle") ) { return set_angle_dyn(); }
		if (HX_FIELD_EQ(inName,"set_blend") ) { return set_blend_dyn(); }
		if (HX_FIELD_EQ(inName,"set_flipX") ) { return set_flipX_dyn(); }
		if (HX_FIELD_EQ(inName,"set_flipY") ) { return set_flipY_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"frameWidth") ) { return frameWidth; }
		if (HX_FIELD_EQ(inName,"_flashRect") ) { return _flashRect; }
		if (HX_FIELD_EQ(inName,"resetFrame") ) { return resetFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"drawSimple") ) { return drawSimple_dyn(); }
		if (HX_FIELD_EQ(inName,"isOnScreen") ) { return isOnScreen_dyn(); }
		if (HX_FIELD_EQ(inName,"get_pixels") ) { return get_pixels_dyn(); }
		if (HX_FIELD_EQ(inName,"set_pixels") ) { return set_pixels_dyn(); }
		if (HX_FIELD_EQ(inName,"set_facing") ) { return set_facing_dyn(); }
		if (HX_FIELD_EQ(inName,"updateTrig") ) { return updateTrig_dyn(); }
		if (HX_FIELD_EQ(inName,"set_frames") ) { return set_frames_dyn(); }
		if (HX_FIELD_EQ(inName,"checkFlipX") ) { return checkFlipX_dyn(); }
		if (HX_FIELD_EQ(inName,"checkFlipY") ) { return checkFlipY_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"framePixels") ) { return framePixels; }
		if (HX_FIELD_EQ(inName,"frameHeight") ) { return frameHeight; }
		if (HX_FIELD_EQ(inName,"_flashPoint") ) { return _flashPoint; }
		if (HX_FIELD_EQ(inName,"_flashRect2") ) { return _flashRect2; }
		if (HX_FIELD_EQ(inName,"_facingFlip") ) { return _facingFlip; }
		if (HX_FIELD_EQ(inName,"loadGraphic") ) { return loadGraphic_dyn(); }
		if (HX_FIELD_EQ(inName,"makeGraphic") ) { return makeGraphic_dyn(); }
		if (HX_FIELD_EQ(inName,"drawComplex") ) { return drawComplex_dyn(); }
		if (HX_FIELD_EQ(inName,"set_graphic") ) { return set_graphic_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"antialiasing") ) { return antialiasing; }
		if (HX_FIELD_EQ(inName,"updateHitbox") ) { return updateHitbox_dyn(); }
		if (HX_FIELD_EQ(inName,"resetHelpers") ) { return resetHelpers_dyn(); }
		if (HX_FIELD_EQ(inName,"centerOrigin") ) { return centerOrigin_dyn(); }
		if (HX_FIELD_EQ(inName,"replaceColor") ) { return replaceColor_dyn(); }
		if (HX_FIELD_EQ(inName,"set_clipRect") ) { return set_clipRect_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_frameGraphic") ) { return _frameGraphic; }
		if (HX_FIELD_EQ(inName,"_angleChanged") ) { return _angleChanged; }
		if (HX_FIELD_EQ(inName,"graphicLoaded") ) { return graphicLoaded_dyn(); }
		if (HX_FIELD_EQ(inName,"centerOffsets") ) { return centerOffsets_dyn(); }
		if (HX_FIELD_EQ(inName,"setFacingFlip") ) { return setFacingFlip_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"useFramePixels") ) { return useFramePixels; }
		if (HX_FIELD_EQ(inName,"colorTransform") ) { return colorTransform; }
		if (HX_FIELD_EQ(inName,"resetFrameSize") ) { return resetFrameSize_dyn(); }
		if (HX_FIELD_EQ(inName,"setGraphicSize") ) { return setGraphicSize_dyn(); }
		if (HX_FIELD_EQ(inName,"isSimpleRender") ) { return isSimpleRender_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_flashPointZero") ) { return _flashPointZero; }
		if (HX_FIELD_EQ(inName,"updateAnimation") ) { return updateAnimation_dyn(); }
		if (HX_FIELD_EQ(inName,"checkEmptyFrame") ) { return checkEmptyFrame_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"loadRotatedFrame") ) { return loadRotatedFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"set_antialiasing") ) { return set_antialiasing_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"useColorTransform") ) { return useColorTransform; }
		if (HX_FIELD_EQ(inName,"setColorTransform") ) { return setColorTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"updateFramePixels") ) { return updateFramePixels_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"bakedRotationAngle") ) { return bakedRotationAngle; }
		if (HX_FIELD_EQ(inName,"loadRotatedGraphic") ) { return loadRotatedGraphic_dyn(); }
		if (HX_FIELD_EQ(inName,"resetSizeFromFrame") ) { return resetSizeFromFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"pixelsOverlapPoint") ) { return pixelsOverlapPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"getGraphicMidpoint") ) { return getGraphicMidpoint_dyn(); }
		if (HX_FIELD_EQ(inName,"isSimpleRenderBlit") ) { return isSimpleRenderBlit_dyn(); }
		if (HX_FIELD_EQ(inName,"set_useFramePixels") ) { return set_useFramePixels_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_facingVerticalMult") ) { return _facingVerticalMult; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"updateColorTransform") ) { return updateColorTransform_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_facingHorizontalMult") ) { return _facingHorizontalMult; }
		if (HX_FIELD_EQ(inName,"loadGraphicFromSprite") ) { return loadGraphicFromSprite_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxSprite_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"dirty") ) { dirty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frame") ) { if (inCallProp == hx::paccAlways) return set_frame(inValue);frame=inValue.Cast< ::flixel::graphics::frames::FlxFrame >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alpha") ) { if (inCallProp == hx::paccAlways) return set_alpha(inValue);alpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"flipX") ) { if (inCallProp == hx::paccAlways) return set_flipX(inValue);flipX=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"flipY") ) { if (inCallProp == hx::paccAlways) return set_flipY(inValue);flipY=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scale") ) { scale=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"blend") ) { if (inCallProp == hx::paccAlways) return set_blend(inValue);blend=inValue.Cast< ::openfl::_legacy::display::BlendMode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp == hx::paccAlways) return set_color(inValue);color=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"pixels") ) { if (inCallProp == hx::paccAlways) return set_pixels(inValue); }
		if (HX_FIELD_EQ(inName,"frames") ) { if (inCallProp == hx::paccAlways) return set_frames(inValue);frames=inValue.Cast< ::flixel::graphics::frames::FlxFramesCollection >(); return inValue; }
		if (HX_FIELD_EQ(inName,"facing") ) { if (inCallProp == hx::paccAlways) return set_facing(inValue);facing=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"origin") ) { origin=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offset") ) { offset=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shader") ) { shader=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_frame") ) { _frame=inValue.Cast< ::flixel::graphics::frames::FlxFrame >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"graphic") ) { if (inCallProp == hx::paccAlways) return set_graphic(inValue);graphic=inValue.Cast< ::flixel::graphics::FlxGraphic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_matrix") ) { _matrix=inValue.Cast< ::flixel::math::FlxMatrix >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"clipRect") ) { if (inCallProp == hx::paccAlways) return set_clipRect(inValue);clipRect=inValue.Cast< ::flixel::math::FlxRect >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"animation") ) { animation=inValue.Cast< ::flixel::animation::FlxAnimationController >(); return inValue; }
		if (HX_FIELD_EQ(inName,"numFrames") ) { numFrames=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_halfSize") ) { _halfSize=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_sinAngle") ) { _sinAngle=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_cosAngle") ) { _cosAngle=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"frameWidth") ) { frameWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flashRect") ) { _flashRect=inValue.Cast< ::openfl::_legacy::geom::Rectangle >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"framePixels") ) { framePixels=inValue.Cast< ::openfl::_legacy::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frameHeight") ) { frameHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flashPoint") ) { _flashPoint=inValue.Cast< ::openfl::_legacy::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flashRect2") ) { _flashRect2=inValue.Cast< ::openfl::_legacy::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_facingFlip") ) { _facingFlip=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"antialiasing") ) { if (inCallProp == hx::paccAlways) return set_antialiasing(inValue);antialiasing=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_frameGraphic") ) { _frameGraphic=inValue.Cast< ::flixel::graphics::FlxGraphic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_angleChanged") ) { _angleChanged=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"useFramePixels") ) { if (inCallProp == hx::paccAlways) return set_useFramePixels(inValue);useFramePixels=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"colorTransform") ) { colorTransform=inValue.Cast< ::openfl::_legacy::geom::ColorTransform >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_flashPointZero") ) { _flashPointZero=inValue.Cast< ::openfl::_legacy::geom::Point >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"useColorTransform") ) { useColorTransform=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"bakedRotationAngle") ) { bakedRotationAngle=inValue.Cast< Float >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_facingVerticalMult") ) { _facingVerticalMult=inValue.Cast< int >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_facingHorizontalMult") ) { _facingHorizontalMult=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxSprite_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("animation","\x04","\xef","\x34","\x4b"));
	outFields->push(HX_HCSTRING("framePixels","\x3a","\xbb","\xf1","\x6a"));
	outFields->push(HX_HCSTRING("useFramePixels","\x33","\x0e","\x5a","\x8e"));
	outFields->push(HX_HCSTRING("antialiasing","\xf4","\x16","\xb3","\x48"));
	outFields->push(HX_HCSTRING("dirty","\x12","\x50","\xd0","\xd9"));
	outFields->push(HX_HCSTRING("pixels","\x2d","\xef","\xa9","\x8c"));
	outFields->push(HX_HCSTRING("frame","\x2d","\x78","\x83","\x06"));
	outFields->push(HX_HCSTRING("frameWidth","\x99","\xea","\x88","\xad"));
	outFields->push(HX_HCSTRING("frameHeight","\xf4","\xd3","\x93","\xe0"));
	outFields->push(HX_HCSTRING("numFrames","\x8c","\xfa","\x86","\x5d"));
	outFields->push(HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac"));
	outFields->push(HX_HCSTRING("graphic","\xa8","\x5a","\x07","\x74"));
	outFields->push(HX_HCSTRING("bakedRotationAngle","\x8a","\xd1","\x9c","\x9b"));
	outFields->push(HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21"));
	outFields->push(HX_HCSTRING("facing","\x1a","\x3f","\x05","\xe4"));
	outFields->push(HX_HCSTRING("flipX","\x0b","\x45","\x92","\x02"));
	outFields->push(HX_HCSTRING("flipY","\x0c","\x45","\x92","\x02"));
	outFields->push(HX_HCSTRING("origin","\xe6","\x19","\x01","\x4b"));
	outFields->push(HX_HCSTRING("offset","\x93","\x97","\x3f","\x60"));
	outFields->push(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"));
	outFields->push(HX_HCSTRING("blend","\x51","\xe8","\xf4","\xb4"));
	outFields->push(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"));
	outFields->push(HX_HCSTRING("colorTransform","\x89","\xd7","\x3f","\xad"));
	outFields->push(HX_HCSTRING("useColorTransform","\x30","\xe6","\xec","\x72"));
	outFields->push(HX_HCSTRING("clipRect","\x14","\x90","\x6a","\x58"));
	outFields->push(HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d"));
	outFields->push(HX_HCSTRING("_frame","\x6e","\xbf","\x6a","\x02"));
	outFields->push(HX_HCSTRING("_frameGraphic","\xda","\xac","\x00","\xf7"));
	outFields->push(HX_HCSTRING("_facingHorizontalMult","\x8d","\x29","\xa1","\x51"));
	outFields->push(HX_HCSTRING("_facingVerticalMult","\xdf","\x11","\x0c","\x86"));
	outFields->push(HX_HCSTRING("_flashPoint","\x9f","\x1d","\x2a","\xb7"));
	outFields->push(HX_HCSTRING("_flashRect","\xb5","\xc2","\xf3","\x5d"));
	outFields->push(HX_HCSTRING("_flashRect2","\xdd","\x9b","\x56","\xd7"));
	outFields->push(HX_HCSTRING("_flashPointZero","\x67","\x14","\x7d","\xfb"));
	outFields->push(HX_HCSTRING("_matrix","\xe0","\x47","\x3f","\x2a"));
	outFields->push(HX_HCSTRING("_halfSize","\x73","\x43","\x4d","\x66"));
	outFields->push(HX_HCSTRING("_sinAngle","\xfa","\x54","\xde","\xb8"));
	outFields->push(HX_HCSTRING("_cosAngle","\x6b","\xc9","\x00","\x1f"));
	outFields->push(HX_HCSTRING("_angleChanged","\x40","\x98","\x5c","\xb2"));
	outFields->push(HX_HCSTRING("_facingFlip","\x06","\xe0","\x9c","\x02"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::animation::FlxAnimationController*/ ,(int)offsetof(FlxSprite_obj,animation),HX_HCSTRING("animation","\x04","\xef","\x34","\x4b")},
	{hx::fsObject /*::openfl::_legacy::display::BitmapData*/ ,(int)offsetof(FlxSprite_obj,framePixels),HX_HCSTRING("framePixels","\x3a","\xbb","\xf1","\x6a")},
	{hx::fsBool,(int)offsetof(FlxSprite_obj,useFramePixels),HX_HCSTRING("useFramePixels","\x33","\x0e","\x5a","\x8e")},
	{hx::fsBool,(int)offsetof(FlxSprite_obj,antialiasing),HX_HCSTRING("antialiasing","\xf4","\x16","\xb3","\x48")},
	{hx::fsBool,(int)offsetof(FlxSprite_obj,dirty),HX_HCSTRING("dirty","\x12","\x50","\xd0","\xd9")},
	{hx::fsObject /*::flixel::graphics::frames::FlxFrame*/ ,(int)offsetof(FlxSprite_obj,frame),HX_HCSTRING("frame","\x2d","\x78","\x83","\x06")},
	{hx::fsInt,(int)offsetof(FlxSprite_obj,frameWidth),HX_HCSTRING("frameWidth","\x99","\xea","\x88","\xad")},
	{hx::fsInt,(int)offsetof(FlxSprite_obj,frameHeight),HX_HCSTRING("frameHeight","\xf4","\xd3","\x93","\xe0")},
	{hx::fsInt,(int)offsetof(FlxSprite_obj,numFrames),HX_HCSTRING("numFrames","\x8c","\xfa","\x86","\x5d")},
	{hx::fsObject /*::flixel::graphics::frames::FlxFramesCollection*/ ,(int)offsetof(FlxSprite_obj,frames),HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac")},
	{hx::fsObject /*::flixel::graphics::FlxGraphic*/ ,(int)offsetof(FlxSprite_obj,graphic),HX_HCSTRING("graphic","\xa8","\x5a","\x07","\x74")},
	{hx::fsFloat,(int)offsetof(FlxSprite_obj,bakedRotationAngle),HX_HCSTRING("bakedRotationAngle","\x8a","\xd1","\x9c","\x9b")},
	{hx::fsFloat,(int)offsetof(FlxSprite_obj,alpha),HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21")},
	{hx::fsInt,(int)offsetof(FlxSprite_obj,facing),HX_HCSTRING("facing","\x1a","\x3f","\x05","\xe4")},
	{hx::fsBool,(int)offsetof(FlxSprite_obj,flipX),HX_HCSTRING("flipX","\x0b","\x45","\x92","\x02")},
	{hx::fsBool,(int)offsetof(FlxSprite_obj,flipY),HX_HCSTRING("flipY","\x0c","\x45","\x92","\x02")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxSprite_obj,origin),HX_HCSTRING("origin","\xe6","\x19","\x01","\x4b")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxSprite_obj,offset),HX_HCSTRING("offset","\x93","\x97","\x3f","\x60")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxSprite_obj,scale),HX_HCSTRING("scale","\x8a","\xce","\xce","\x78")},
	{hx::fsObject /*::openfl::_legacy::display::BlendMode*/ ,(int)offsetof(FlxSprite_obj,blend),HX_HCSTRING("blend","\x51","\xe8","\xf4","\xb4")},
	{hx::fsInt,(int)offsetof(FlxSprite_obj,color),HX_HCSTRING("color","\x63","\x71","\x5c","\x4a")},
	{hx::fsObject /*::openfl::_legacy::geom::ColorTransform*/ ,(int)offsetof(FlxSprite_obj,colorTransform),HX_HCSTRING("colorTransform","\x89","\xd7","\x3f","\xad")},
	{hx::fsBool,(int)offsetof(FlxSprite_obj,useColorTransform),HX_HCSTRING("useColorTransform","\x30","\xe6","\xec","\x72")},
	{hx::fsObject /*::flixel::math::FlxRect*/ ,(int)offsetof(FlxSprite_obj,clipRect),HX_HCSTRING("clipRect","\x14","\x90","\x6a","\x58")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxSprite_obj,shader),HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d")},
	{hx::fsObject /*::flixel::graphics::frames::FlxFrame*/ ,(int)offsetof(FlxSprite_obj,_frame),HX_HCSTRING("_frame","\x6e","\xbf","\x6a","\x02")},
	{hx::fsObject /*::flixel::graphics::FlxGraphic*/ ,(int)offsetof(FlxSprite_obj,_frameGraphic),HX_HCSTRING("_frameGraphic","\xda","\xac","\x00","\xf7")},
	{hx::fsInt,(int)offsetof(FlxSprite_obj,_facingHorizontalMult),HX_HCSTRING("_facingHorizontalMult","\x8d","\x29","\xa1","\x51")},
	{hx::fsInt,(int)offsetof(FlxSprite_obj,_facingVerticalMult),HX_HCSTRING("_facingVerticalMult","\xdf","\x11","\x0c","\x86")},
	{hx::fsObject /*::openfl::_legacy::geom::Point*/ ,(int)offsetof(FlxSprite_obj,_flashPoint),HX_HCSTRING("_flashPoint","\x9f","\x1d","\x2a","\xb7")},
	{hx::fsObject /*::openfl::_legacy::geom::Rectangle*/ ,(int)offsetof(FlxSprite_obj,_flashRect),HX_HCSTRING("_flashRect","\xb5","\xc2","\xf3","\x5d")},
	{hx::fsObject /*::openfl::_legacy::geom::Rectangle*/ ,(int)offsetof(FlxSprite_obj,_flashRect2),HX_HCSTRING("_flashRect2","\xdd","\x9b","\x56","\xd7")},
	{hx::fsObject /*::openfl::_legacy::geom::Point*/ ,(int)offsetof(FlxSprite_obj,_flashPointZero),HX_HCSTRING("_flashPointZero","\x67","\x14","\x7d","\xfb")},
	{hx::fsObject /*::flixel::math::FlxMatrix*/ ,(int)offsetof(FlxSprite_obj,_matrix),HX_HCSTRING("_matrix","\xe0","\x47","\x3f","\x2a")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxSprite_obj,_halfSize),HX_HCSTRING("_halfSize","\x73","\x43","\x4d","\x66")},
	{hx::fsFloat,(int)offsetof(FlxSprite_obj,_sinAngle),HX_HCSTRING("_sinAngle","\xfa","\x54","\xde","\xb8")},
	{hx::fsFloat,(int)offsetof(FlxSprite_obj,_cosAngle),HX_HCSTRING("_cosAngle","\x6b","\xc9","\x00","\x1f")},
	{hx::fsBool,(int)offsetof(FlxSprite_obj,_angleChanged),HX_HCSTRING("_angleChanged","\x40","\x98","\x5c","\xb2")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(FlxSprite_obj,_facingFlip),HX_HCSTRING("_facingFlip","\x06","\xe0","\x9c","\x02")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("animation","\x04","\xef","\x34","\x4b"),
	HX_HCSTRING("framePixels","\x3a","\xbb","\xf1","\x6a"),
	HX_HCSTRING("useFramePixels","\x33","\x0e","\x5a","\x8e"),
	HX_HCSTRING("antialiasing","\xf4","\x16","\xb3","\x48"),
	HX_HCSTRING("dirty","\x12","\x50","\xd0","\xd9"),
	HX_HCSTRING("frame","\x2d","\x78","\x83","\x06"),
	HX_HCSTRING("frameWidth","\x99","\xea","\x88","\xad"),
	HX_HCSTRING("frameHeight","\xf4","\xd3","\x93","\xe0"),
	HX_HCSTRING("numFrames","\x8c","\xfa","\x86","\x5d"),
	HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac"),
	HX_HCSTRING("graphic","\xa8","\x5a","\x07","\x74"),
	HX_HCSTRING("bakedRotationAngle","\x8a","\xd1","\x9c","\x9b"),
	HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21"),
	HX_HCSTRING("facing","\x1a","\x3f","\x05","\xe4"),
	HX_HCSTRING("flipX","\x0b","\x45","\x92","\x02"),
	HX_HCSTRING("flipY","\x0c","\x45","\x92","\x02"),
	HX_HCSTRING("origin","\xe6","\x19","\x01","\x4b"),
	HX_HCSTRING("offset","\x93","\x97","\x3f","\x60"),
	HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"),
	HX_HCSTRING("blend","\x51","\xe8","\xf4","\xb4"),
	HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"),
	HX_HCSTRING("colorTransform","\x89","\xd7","\x3f","\xad"),
	HX_HCSTRING("useColorTransform","\x30","\xe6","\xec","\x72"),
	HX_HCSTRING("clipRect","\x14","\x90","\x6a","\x58"),
	HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d"),
	HX_HCSTRING("_frame","\x6e","\xbf","\x6a","\x02"),
	HX_HCSTRING("_frameGraphic","\xda","\xac","\x00","\xf7"),
	HX_HCSTRING("_facingHorizontalMult","\x8d","\x29","\xa1","\x51"),
	HX_HCSTRING("_facingVerticalMult","\xdf","\x11","\x0c","\x86"),
	HX_HCSTRING("_flashPoint","\x9f","\x1d","\x2a","\xb7"),
	HX_HCSTRING("_flashRect","\xb5","\xc2","\xf3","\x5d"),
	HX_HCSTRING("_flashRect2","\xdd","\x9b","\x56","\xd7"),
	HX_HCSTRING("_flashPointZero","\x67","\x14","\x7d","\xfb"),
	HX_HCSTRING("_matrix","\xe0","\x47","\x3f","\x2a"),
	HX_HCSTRING("_halfSize","\x73","\x43","\x4d","\x66"),
	HX_HCSTRING("_sinAngle","\xfa","\x54","\xde","\xb8"),
	HX_HCSTRING("_cosAngle","\x6b","\xc9","\x00","\x1f"),
	HX_HCSTRING("_angleChanged","\x40","\x98","\x5c","\xb2"),
	HX_HCSTRING("_facingFlip","\x06","\xe0","\x9c","\x02"),
	HX_HCSTRING("initVars","\xdc","\x5a","\x00","\x53"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("loadGraphicFromSprite","\xd1","\x7c","\x73","\x38"),
	HX_HCSTRING("loadGraphic","\x22","\x19","\xa5","\x44"),
	HX_HCSTRING("loadRotatedGraphic","\xc5","\x14","\x74","\x62"),
	HX_HCSTRING("loadRotatedFrame","\x0a","\x81","\x76","\x8b"),
	HX_HCSTRING("makeGraphic","\x5a","\x82","\x11","\xb8"),
	HX_HCSTRING("graphicLoaded","\xcd","\x84","\x20","\x16"),
	HX_HCSTRING("resetSize","\x30","\xaa","\x3f","\x92"),
	HX_HCSTRING("resetFrameSize","\xbf","\xc3","\x44","\x94"),
	HX_HCSTRING("resetSizeFromFrame","\x13","\xd2","\x50","\x8c"),
	HX_HCSTRING("resetFrame","\xde","\xaf","\x1f","\xef"),
	HX_HCSTRING("setGraphicSize","\x07","\xd7","\xf8","\x2d"),
	HX_HCSTRING("updateHitbox","\x81","\x94","\xeb","\x56"),
	HX_HCSTRING("resetHelpers","\x36","\x89","\x3d","\x32"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("updateAnimation","\xbb","\xbf","\xbf","\x9a"),
	HX_HCSTRING("checkEmptyFrame","\x48","\xb5","\x2f","\x00"),
	HX_HCSTRING("draw","\x04","\x2c","\x70","\x42"),
	HX_HCSTRING("drawSimple","\x56","\x7f","\x42","\xfa"),
	HX_HCSTRING("drawComplex","\x8c","\xaa","\xb9","\xcc"),
	HX_HCSTRING("stamp","\x03","\x70","\x0b","\x84"),
	HX_HCSTRING("drawFrame","\x89","\xad","\x8e","\xce"),
	HX_HCSTRING("centerOffsets","\x2b","\xa0","\xb2","\xc1"),
	HX_HCSTRING("centerOrigin","\x9b","\x41","\x36","\x0f"),
	HX_HCSTRING("replaceColor","\x8f","\x5c","\xeb","\x3d"),
	HX_HCSTRING("setColorTransform","\xcb","\x5e","\x21","\x43"),
	HX_HCSTRING("updateColorTransform","\x72","\x0f","\xd2","\x2f"),
	HX_HCSTRING("pixelsOverlapPoint","\x16","\x82","\x44","\xe0"),
	HX_HCSTRING("calcFrame","\x58","\x93","\x8c","\xf9"),
	HX_HCSTRING("updateFramePixels","\xb1","\x67","\x5b","\xcf"),
	HX_HCSTRING("getGraphicMidpoint","\x9a","\xb4","\xdd","\x57"),
	HX_HCSTRING("isOnScreen","\xf5","\x43","\xb9","\xa1"),
	HX_HCSTRING("isSimpleRender","\x32","\xf4","\x2a","\x47"),
	HX_HCSTRING("isSimpleRenderBlit","\x87","\x59","\xb0","\xdf"),
	HX_HCSTRING("setFacingFlip","\x29","\x51","\x8b","\xd1"),
	HX_HCSTRING("setFrames","\xe8","\x24","\x2d","\x0c"),
	HX_HCSTRING("get_pixels","\xf6","\x5e","\x31","\x7d"),
	HX_HCSTRING("set_pixels","\x6a","\xfd","\xae","\x80"),
	HX_HCSTRING("set_frame","\x90","\xc0","\x7d","\x2d"),
	HX_HCSTRING("set_facing","\x57","\x4d","\x0a","\xd8"),
	HX_HCSTRING("set_alpha","\xc1","\xef","\x90","\x48"),
	HX_HCSTRING("set_color","\xc6","\xb9","\x56","\x71"),
	HX_HCSTRING("set_angle","\x36","\x8c","\xdc","\x49"),
	HX_HCSTRING("updateTrig","\x85","\x87","\xb8","\x05"),
	HX_HCSTRING("set_blend","\xb4","\x30","\xef","\xdb"),
	HX_HCSTRING("set_graphic","\xcb","\xc1","\x6e","\x04"),
	HX_HCSTRING("set_clipRect","\x91","\x67","\x7d","\x22"),
	HX_HCSTRING("set_frames","\xe3","\xbd","\x8a","\xa0"),
	HX_HCSTRING("set_flipX","\x6e","\x8d","\x8c","\x29"),
	HX_HCSTRING("set_flipY","\x6f","\x8d","\x8c","\x29"),
	HX_HCSTRING("set_antialiasing","\xf1","\xf0","\x93","\xa3"),
	HX_HCSTRING("set_useFramePixels","\x70","\x21","\xa3","\x06"),
	HX_HCSTRING("checkFlipX","\x23","\x47","\x82","\x12"),
	HX_HCSTRING("checkFlipY","\x24","\x47","\x82","\x12"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxSprite_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxSprite_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxSprite_obj::__mClass;

void FlxSprite_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.FlxSprite","\x65","\xad","\xeb","\xe3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxSprite_obj >;
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
