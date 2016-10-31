#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFrame
#include <flixel/graphics/frames/FlxFrame.h>
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
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
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
#ifndef INCLUDED_haxe_ds_ArraySort
#include <haxe/ds/ArraySort.h>
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
namespace graphics{
namespace frames{

Void FlxFrame_obj::__construct(::flixel::graphics::FlxGraphic parent,hx::Null< int >  __o_angle,hx::Null< bool >  __o_flipX,hx::Null< bool >  __o_flipY)
{
HX_STACK_FRAME("flixel.graphics.frames.FlxFrame","new",0x06ad24e4,"flixel.graphics.frames.FlxFrame.new","flixel/graphics/frames/FlxFrame.hx",19,0x6c7f608b)
HX_STACK_THIS(this)
HX_STACK_ARG(parent,"parent")
HX_STACK_ARG(__o_angle,"angle")
HX_STACK_ARG(__o_flipX,"flipX")
HX_STACK_ARG(__o_flipY,"flipY")
int angle = __o_angle.Default(0);
bool flipX = __o_flipX.Default(false);
bool flipY = __o_flipY.Default(false);
{
	HX_STACK_LINE(24)
	this->matrix = ::flixel::math::FlxMatrix_obj::__new(null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(23)
	this->rect = ::openfl::_legacy::geom::Rectangle_obj::__new(null(),null(),null(),null());
	HX_STACK_LINE(22)
	this->point2 = ::openfl::_legacy::geom::Point_obj::__new(null(),null());
	HX_STACK_LINE(21)
	this->point1 = ::openfl::_legacy::geom::Point_obj::__new(null(),null());
	HX_STACK_LINE(95)
	this->parent = parent;
	HX_STACK_LINE(96)
	this->angle = angle;
	HX_STACK_LINE(97)
	this->flipX = flipX;
	HX_STACK_LINE(98)
	this->flipY = flipY;
	HX_STACK_LINE(100)
	this->type = (int)0;
	HX_STACK_LINE(102)
	::flixel::math::FlxPoint tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(102)
	{
		HX_STACK_LINE(102)
		Float X = (int)0;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(102)
		Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(102)
		::flixel::util::FlxPool_flixel_math_FlxPoint tmp1 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(102)
		::flixel::math::FlxPoint tmp2 = tmp1->get();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(102)
		Float tmp3 = X;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(102)
		Float tmp4 = Y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(102)
		::flixel::math::FlxPoint tmp5 = tmp2->set(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(102)
		::flixel::math::FlxPoint point = tmp5;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(102)
		point->_inPool = false;
		HX_STACK_LINE(102)
		tmp = point;
	}
	HX_STACK_LINE(102)
	this->sourceSize = tmp;
	HX_STACK_LINE(103)
	::flixel::math::FlxPoint tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(103)
	{
		HX_STACK_LINE(103)
		Float X = (int)0;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(103)
		Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(103)
		::flixel::util::FlxPool_flixel_math_FlxPoint tmp2 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(103)
		::flixel::math::FlxPoint tmp3 = tmp2->get();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(103)
		Float tmp4 = X;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(103)
		Float tmp5 = Y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(103)
		::flixel::math::FlxPoint tmp6 = tmp3->set(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(103)
		::flixel::math::FlxPoint point = tmp6;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(103)
		point->_inPool = false;
		HX_STACK_LINE(103)
		tmp1 = point;
	}
	HX_STACK_LINE(103)
	this->offset = tmp1;
	HX_STACK_LINE(105)
	Array< Float > tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(105)
	{
		HX_STACK_LINE(105)
		Array< Float > this1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(105)
		this1 = Array_obj< Float >::__new();
		HX_STACK_LINE(105)
		this1->__SetSizeExact((int)6);
		HX_STACK_LINE(105)
		tmp2 = this1;
	}
	HX_STACK_LINE(105)
	this->blitMatrix = tmp2;
	HX_STACK_LINE(106)
	bool tmp3 = ::flixel::FlxG_obj::renderTile;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(106)
	if ((tmp3)){
		HX_STACK_LINE(108)
		Array< Float > tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(108)
		{
			HX_STACK_LINE(108)
			Array< Float > this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(108)
			this1 = Array_obj< Float >::__new();
			HX_STACK_LINE(108)
			this1->__SetSizeExact((int)6);
			HX_STACK_LINE(108)
			tmp4 = this1;
		}
		HX_STACK_LINE(108)
		this->tileMatrix = tmp4;
	}
}
;
	return null();
}

//FlxFrame_obj::~FlxFrame_obj() { }

Dynamic FlxFrame_obj::__CreateEmpty() { return  new FlxFrame_obj; }
hx::ObjectPtr< FlxFrame_obj > FlxFrame_obj::__new(::flixel::graphics::FlxGraphic parent,hx::Null< int >  __o_angle,hx::Null< bool >  __o_flipX,hx::Null< bool >  __o_flipY)
{  hx::ObjectPtr< FlxFrame_obj > _result_ = new FlxFrame_obj();
	_result_->__construct(parent,__o_angle,__o_flipX,__o_flipY);
	return _result_;}

Dynamic FlxFrame_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxFrame_obj > _result_ = new FlxFrame_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

hx::Object *FlxFrame_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::util::IFlxDestroyable_obj)) return operator ::flixel::util::IFlxDestroyable_obj *();
	return super::__ToInterface(inType);
}

FlxFrame_obj::operator ::flixel::util::IFlxDestroyable_obj *()
	{ return new ::flixel::util::IFlxDestroyable_delegate_< FlxFrame_obj >(this); }
Void FlxFrame_obj::cacheFrameMatrix( ){
{
		HX_STACK_FRAME("flixel.graphics.frames.FlxFrame","cacheFrameMatrix",0xffbbac28,"flixel.graphics.frames.FlxFrame.cacheFrameMatrix","flixel/graphics/frames/FlxFrame.hx",115,0x6c7f608b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(116)
		{
			HX_STACK_LINE(116)
			::flixel::math::FlxMatrix tmp = this->matrix;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(116)
			::flixel::math::FlxMatrix mat = tmp;		HX_STACK_VAR(mat,"mat");
			HX_STACK_LINE(116)
			mat->identity();
			HX_STACK_LINE(116)
			{
				HX_STACK_LINE(116)
				::flixel::math::FlxRect tmp1 = this->frame;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(116)
				Float tmp2 = tmp1->x;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(116)
				Float tmp3 = -(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(116)
				::flixel::math::FlxRect tmp4 = this->frame;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(116)
				Float tmp5 = tmp4->y;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(116)
				Float tmp6 = -(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(116)
				mat->translate(tmp3,tmp6);
			}
			HX_STACK_LINE(116)
			int tmp1 = this->angle;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(116)
			bool tmp2 = (tmp1 == (int)90);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(116)
			if ((tmp2)){
				HX_STACK_LINE(116)
				{
					HX_STACK_LINE(116)
					Float tmp3 = mat->b;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(116)
					Float tmp4 = -(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(116)
					Float tmp5 = mat->a;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(116)
					Float tmp6 = mat->d;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(116)
					Float tmp7 = -(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(116)
					Float tmp8 = mat->c;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(116)
					Float tmp9 = mat->ty;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(116)
					Float tmp10 = -(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(116)
					Float tmp11 = mat->tx;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(116)
					mat->setTo(tmp4,tmp5,tmp7,tmp8,tmp10,tmp11);
					HX_STACK_LINE(116)
					mat;
				}
				HX_STACK_LINE(116)
				::flixel::math::FlxRect tmp3 = this->frame;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(116)
				Float tmp4 = tmp3->height;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(116)
				mat->translate(tmp4,(int)0);
			}
			else{
				HX_STACK_LINE(116)
				int tmp3 = this->angle;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(116)
				bool tmp4 = (tmp3 == (int)-90);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(116)
				if ((tmp4)){
					HX_STACK_LINE(116)
					{
						HX_STACK_LINE(116)
						Float tmp5 = mat->b;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(116)
						Float tmp6 = mat->a;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(116)
						Float tmp7 = -(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(116)
						Float tmp8 = mat->d;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(116)
						Float tmp9 = mat->c;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(116)
						Float tmp10 = -(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(116)
						Float tmp11 = mat->ty;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(116)
						Float tmp12 = mat->tx;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(116)
						Float tmp13 = -(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(116)
						mat->setTo(tmp5,tmp7,tmp8,tmp10,tmp11,tmp13);
						HX_STACK_LINE(116)
						mat;
					}
					HX_STACK_LINE(116)
					::flixel::math::FlxRect tmp5 = this->frame;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(116)
					Float tmp6 = tmp5->width;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(116)
					mat->translate((int)0,tmp6);
				}
			}
			HX_STACK_LINE(116)
			::flixel::math::FlxPoint tmp3 = this->offset;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(116)
			Float tmp4 = tmp3->x;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(116)
			::flixel::math::FlxPoint tmp5 = this->offset;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(116)
			Float tmp6 = tmp5->y;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(116)
			mat->translate(tmp4,tmp6);
			HX_STACK_LINE(116)
			mat;
		}
		HX_STACK_LINE(117)
		Array< Float > tmp = this->blitMatrix;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(117)
		::flixel::math::FlxMatrix tmp1 = this->matrix;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(117)
		Float tmp2 = tmp1->a;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(117)
		Float tmp3 = tmp->__unsafe_set((int)0,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(117)
		tmp3;
		HX_STACK_LINE(118)
		Array< Float > tmp4 = this->blitMatrix;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(118)
		::flixel::math::FlxMatrix tmp5 = this->matrix;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(118)
		Float tmp6 = tmp5->b;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(118)
		Float tmp7 = tmp4->__unsafe_set((int)1,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(118)
		tmp7;
		HX_STACK_LINE(119)
		Array< Float > tmp8 = this->blitMatrix;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(119)
		::flixel::math::FlxMatrix tmp9 = this->matrix;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(119)
		Float tmp10 = tmp9->c;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(119)
		Float tmp11 = tmp8->__unsafe_set((int)2,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(119)
		tmp11;
		HX_STACK_LINE(120)
		Array< Float > tmp12 = this->blitMatrix;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(120)
		::flixel::math::FlxMatrix tmp13 = this->matrix;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(120)
		Float tmp14 = tmp13->d;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(120)
		Float tmp15 = tmp12->__unsafe_set((int)3,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(120)
		tmp15;
		HX_STACK_LINE(121)
		Array< Float > tmp16 = this->blitMatrix;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(121)
		::flixel::math::FlxMatrix tmp17 = this->matrix;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(121)
		Float tmp18 = tmp17->tx;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(121)
		Float tmp19 = tmp16->__unsafe_set((int)4,tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(121)
		tmp19;
		HX_STACK_LINE(122)
		Array< Float > tmp20 = this->blitMatrix;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(122)
		::flixel::math::FlxMatrix tmp21 = this->matrix;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(122)
		Float tmp22 = tmp21->ty;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(122)
		Float tmp23 = tmp20->__unsafe_set((int)5,tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(122)
		tmp23;
		HX_STACK_LINE(124)
		bool tmp24 = ::flixel::FlxG_obj::renderTile;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(124)
		if ((tmp24)){
			HX_STACK_LINE(126)
			{
				HX_STACK_LINE(126)
				::flixel::math::FlxMatrix tmp25 = this->matrix;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(126)
				::flixel::math::FlxMatrix mat = tmp25;		HX_STACK_VAR(mat,"mat");
				HX_STACK_LINE(126)
				mat->identity();
				HX_STACK_LINE(126)
				int tmp26 = this->angle;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(126)
				bool tmp27 = (tmp26 == (int)90);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(126)
				if ((tmp27)){
					HX_STACK_LINE(126)
					{
						HX_STACK_LINE(126)
						Float tmp28 = mat->b;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(126)
						Float tmp29 = -(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(126)
						Float tmp30 = mat->a;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(126)
						Float tmp31 = mat->d;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(126)
						Float tmp32 = -(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(126)
						Float tmp33 = mat->c;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(126)
						Float tmp34 = mat->ty;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(126)
						Float tmp35 = -(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(126)
						Float tmp36 = mat->tx;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(126)
						mat->setTo(tmp29,tmp30,tmp32,tmp33,tmp35,tmp36);
						HX_STACK_LINE(126)
						mat;
					}
					HX_STACK_LINE(126)
					::flixel::math::FlxRect tmp28 = this->frame;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(126)
					Float tmp29 = tmp28->height;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(126)
					mat->translate(tmp29,(int)0);
				}
				else{
					HX_STACK_LINE(126)
					int tmp28 = this->angle;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(126)
					bool tmp29 = (tmp28 == (int)-90);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(126)
					if ((tmp29)){
						HX_STACK_LINE(126)
						{
							HX_STACK_LINE(126)
							Float tmp30 = mat->b;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(126)
							Float tmp31 = mat->a;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(126)
							Float tmp32 = -(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(126)
							Float tmp33 = mat->d;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(126)
							Float tmp34 = mat->c;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(126)
							Float tmp35 = -(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(126)
							Float tmp36 = mat->ty;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(126)
							Float tmp37 = mat->tx;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(126)
							Float tmp38 = -(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(126)
							mat->setTo(tmp30,tmp32,tmp33,tmp35,tmp36,tmp38);
							HX_STACK_LINE(126)
							mat;
						}
						HX_STACK_LINE(126)
						::flixel::math::FlxRect tmp30 = this->frame;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(126)
						Float tmp31 = tmp30->width;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(126)
						mat->translate((int)0,tmp31);
					}
				}
				HX_STACK_LINE(126)
				::flixel::math::FlxPoint tmp28 = this->offset;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(126)
				Float tmp29 = tmp28->x;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(126)
				::flixel::math::FlxPoint tmp30 = this->offset;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(126)
				Float tmp31 = tmp30->y;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(126)
				mat->translate(tmp29,tmp31);
				HX_STACK_LINE(126)
				mat;
			}
			HX_STACK_LINE(127)
			Array< Float > tmp25 = this->tileMatrix;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(127)
			::flixel::math::FlxMatrix tmp26 = this->matrix;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(127)
			Float tmp27 = tmp26->a;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(127)
			Float tmp28 = tmp25->__unsafe_set((int)0,tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(127)
			tmp28;
			HX_STACK_LINE(128)
			Array< Float > tmp29 = this->tileMatrix;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(128)
			::flixel::math::FlxMatrix tmp30 = this->matrix;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(128)
			Float tmp31 = tmp30->b;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(128)
			Float tmp32 = tmp29->__unsafe_set((int)1,tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(128)
			tmp32;
			HX_STACK_LINE(129)
			Array< Float > tmp33 = this->tileMatrix;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(129)
			::flixel::math::FlxMatrix tmp34 = this->matrix;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(129)
			Float tmp35 = tmp34->c;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(129)
			Float tmp36 = tmp33->__unsafe_set((int)2,tmp35);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(129)
			tmp36;
			HX_STACK_LINE(130)
			Array< Float > tmp37 = this->tileMatrix;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(130)
			::flixel::math::FlxMatrix tmp38 = this->matrix;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(130)
			Float tmp39 = tmp38->d;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(130)
			Float tmp40 = tmp37->__unsafe_set((int)3,tmp39);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(130)
			tmp40;
			HX_STACK_LINE(131)
			Array< Float > tmp41 = this->tileMatrix;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(131)
			::flixel::math::FlxMatrix tmp42 = this->matrix;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(131)
			Float tmp43 = tmp42->tx;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(131)
			Float tmp44 = tmp41->__unsafe_set((int)4,tmp43);		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(131)
			tmp44;
			HX_STACK_LINE(132)
			Array< Float > tmp45 = this->tileMatrix;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(132)
			::flixel::math::FlxMatrix tmp46 = this->matrix;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(132)
			Float tmp47 = tmp46->ty;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(132)
			Float tmp48 = tmp45->__unsafe_set((int)5,tmp47);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(132)
			tmp48;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxFrame_obj,cacheFrameMatrix,(void))

::flixel::math::FlxMatrix FlxFrame_obj::prepareBlitMatrix( ::flixel::math::FlxMatrix mat,hx::Null< bool >  __o_blit){
bool blit = __o_blit.Default(true);
	HX_STACK_FRAME("flixel.graphics.frames.FlxFrame","prepareBlitMatrix",0xbf3c9041,"flixel.graphics.frames.FlxFrame.prepareBlitMatrix","flixel/graphics/frames/FlxFrame.hx",145,0x6c7f608b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(mat,"mat")
	HX_STACK_ARG(blit,"blit")
{
		HX_STACK_LINE(146)
		mat->identity();
		HX_STACK_LINE(148)
		bool tmp = blit;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(148)
		if ((tmp)){
			HX_STACK_LINE(149)
			::flixel::math::FlxRect tmp1 = this->frame;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(149)
			Float tmp2 = tmp1->x;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(149)
			Float tmp3 = -(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(149)
			::flixel::math::FlxRect tmp4 = this->frame;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(149)
			Float tmp5 = tmp4->y;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(149)
			Float tmp6 = -(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(149)
			mat->translate(tmp3,tmp6);
		}
		HX_STACK_LINE(151)
		int tmp1 = this->angle;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(151)
		bool tmp2 = (tmp1 == (int)90);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(151)
		if ((tmp2)){
			HX_STACK_LINE(153)
			{
				HX_STACK_LINE(153)
				Float tmp3 = mat->b;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(153)
				Float tmp4 = -(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(153)
				Float tmp5 = mat->a;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(153)
				Float tmp6 = mat->d;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(153)
				Float tmp7 = -(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(153)
				Float tmp8 = mat->c;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(153)
				Float tmp9 = mat->ty;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(153)
				Float tmp10 = -(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(153)
				Float tmp11 = mat->tx;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(153)
				mat->setTo(tmp4,tmp5,tmp7,tmp8,tmp10,tmp11);
				HX_STACK_LINE(153)
				mat;
			}
			HX_STACK_LINE(154)
			::flixel::math::FlxRect tmp3 = this->frame;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(154)
			Float tmp4 = tmp3->height;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(154)
			mat->translate(tmp4,(int)0);
		}
		else{
			HX_STACK_LINE(156)
			int tmp3 = this->angle;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(156)
			bool tmp4 = (tmp3 == (int)-90);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(156)
			if ((tmp4)){
				HX_STACK_LINE(158)
				{
					HX_STACK_LINE(158)
					Float tmp5 = mat->b;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(158)
					Float tmp6 = mat->a;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(158)
					Float tmp7 = -(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(158)
					Float tmp8 = mat->d;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(158)
					Float tmp9 = mat->c;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(158)
					Float tmp10 = -(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(158)
					Float tmp11 = mat->ty;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(158)
					Float tmp12 = mat->tx;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(158)
					Float tmp13 = -(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(158)
					mat->setTo(tmp5,tmp7,tmp8,tmp10,tmp11,tmp13);
					HX_STACK_LINE(158)
					mat;
				}
				HX_STACK_LINE(159)
				::flixel::math::FlxRect tmp5 = this->frame;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(159)
				Float tmp6 = tmp5->width;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(159)
				mat->translate((int)0,tmp6);
			}
		}
		HX_STACK_LINE(162)
		::flixel::math::FlxPoint tmp3 = this->offset;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(162)
		Float tmp4 = tmp3->x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(162)
		::flixel::math::FlxPoint tmp5 = this->offset;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(162)
		Float tmp6 = tmp5->y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(162)
		mat->translate(tmp4,tmp6);
		HX_STACK_LINE(163)
		::flixel::math::FlxMatrix tmp7 = mat;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(163)
		return tmp7;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxFrame_obj,prepareBlitMatrix,return )

::flixel::math::FlxMatrix FlxFrame_obj::rotateAndFlip( ::flixel::math::FlxMatrix mat,hx::Null< int >  __o_rotation,hx::Null< bool >  __o_flipX,hx::Null< bool >  __o_flipY){
int rotation = __o_rotation.Default(0);
bool flipX = __o_flipX.Default(false);
bool flipY = __o_flipY.Default(false);
	HX_STACK_FRAME("flixel.graphics.frames.FlxFrame","rotateAndFlip",0x835ac58d,"flixel.graphics.frames.FlxFrame.rotateAndFlip","flixel/graphics/frames/FlxFrame.hx",177,0x6c7f608b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(mat,"mat")
	HX_STACK_ARG(rotation,"rotation")
	HX_STACK_ARG(flipX,"flipX")
	HX_STACK_ARG(flipY,"flipY")
{
		HX_STACK_LINE(178)
		::flixel::math::FlxPoint tmp = this->sourceSize;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(178)
		Float tmp1 = tmp->x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(178)
		int tmp2 = ::Std_obj::_int(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(178)
		int w = tmp2;		HX_STACK_VAR(w,"w");
		HX_STACK_LINE(179)
		::flixel::math::FlxPoint tmp3 = this->sourceSize;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(179)
		Float tmp4 = tmp3->y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(179)
		int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(179)
		int h = tmp5;		HX_STACK_VAR(h,"h");
		HX_STACK_LINE(182)
		bool tmp6 = (rotation != (int)0);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(182)
		if ((tmp6)){
			HX_STACK_LINE(184)
			int t = w;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(185)
			w = h;
			HX_STACK_LINE(186)
			h = t;
			HX_STACK_LINE(188)
			bool tmp7 = (rotation == (int)90);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(188)
			if ((tmp7)){
				HX_STACK_LINE(190)
				{
					HX_STACK_LINE(190)
					Float tmp8 = mat->b;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(190)
					Float tmp9 = -(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(190)
					Float tmp10 = mat->a;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(190)
					Float tmp11 = mat->d;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(190)
					Float tmp12 = -(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(190)
					Float tmp13 = mat->c;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(190)
					Float tmp14 = mat->ty;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(190)
					Float tmp15 = -(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(190)
					Float tmp16 = mat->tx;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(190)
					mat->setTo(tmp9,tmp10,tmp12,tmp13,tmp15,tmp16);
					HX_STACK_LINE(190)
					mat;
				}
				HX_STACK_LINE(191)
				::flixel::math::FlxPoint tmp8 = this->sourceSize;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(191)
				Float tmp9 = tmp8->y;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(191)
				mat->translate(tmp9,(int)0);
			}
			else{
				HX_STACK_LINE(193)
				bool tmp8 = (rotation == (int)-90);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(193)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(193)
				bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(193)
				if ((tmp9)){
					HX_STACK_LINE(193)
					tmp10 = (rotation == (int)-90);
				}
				else{
					HX_STACK_LINE(193)
					tmp10 = true;
				}
				HX_STACK_LINE(193)
				if ((tmp10)){
					HX_STACK_LINE(195)
					{
						HX_STACK_LINE(195)
						Float tmp11 = mat->b;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(195)
						Float tmp12 = mat->a;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(195)
						Float tmp13 = -(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(195)
						Float tmp14 = mat->d;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(195)
						Float tmp15 = mat->c;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(195)
						Float tmp16 = -(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(195)
						Float tmp17 = mat->ty;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(195)
						Float tmp18 = mat->tx;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(195)
						Float tmp19 = -(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(195)
						mat->setTo(tmp11,tmp13,tmp14,tmp16,tmp17,tmp19);
						HX_STACK_LINE(195)
						mat;
					}
					HX_STACK_LINE(196)
					::flixel::math::FlxPoint tmp11 = this->sourceSize;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(196)
					Float tmp12 = tmp11->x;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(196)
					mat->translate((int)0,tmp12);
				}
			}
		}
		HX_STACK_LINE(201)
		bool tmp7 = flipX;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(201)
		if ((tmp7)){
			HX_STACK_LINE(203)
			mat->scale((int)-1,(int)1);
			HX_STACK_LINE(204)
			int tmp8 = w;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(204)
			mat->translate(tmp8,(int)0);
		}
		HX_STACK_LINE(207)
		bool tmp8 = flipY;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(207)
		if ((tmp8)){
			HX_STACK_LINE(209)
			mat->scale((int)1,(int)-1);
			HX_STACK_LINE(210)
			int tmp9 = h;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(210)
			mat->translate((int)0,tmp9);
		}
		HX_STACK_LINE(213)
		::flixel::math::FlxMatrix tmp9 = mat;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(213)
		return tmp9;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxFrame_obj,rotateAndFlip,return )

::flixel::math::FlxMatrix FlxFrame_obj::prepareTransformedBlitMatrix( ::flixel::math::FlxMatrix mat,hx::Null< int >  __o_rotation,hx::Null< bool >  __o_flipX,hx::Null< bool >  __o_flipY){
int rotation = __o_rotation.Default(0);
bool flipX = __o_flipX.Default(false);
bool flipY = __o_flipY.Default(false);
	HX_STACK_FRAME("flixel.graphics.frames.FlxFrame","prepareTransformedBlitMatrix",0xc5ea2af6,"flixel.graphics.frames.FlxFrame.prepareTransformedBlitMatrix","flixel/graphics/frames/FlxFrame.hx",226,0x6c7f608b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(mat,"mat")
	HX_STACK_ARG(rotation,"rotation")
	HX_STACK_ARG(flipX,"flipX")
	HX_STACK_ARG(flipY,"flipY")
{
		HX_STACK_LINE(227)
		::flixel::math::FlxMatrix tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(227)
		{
			HX_STACK_LINE(227)
			Array< Float > tmp1 = this->blitMatrix;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(227)
			Float tmp2 = tmp1->__unsafe_get((int)0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(227)
			mat->a = tmp2;
			HX_STACK_LINE(227)
			Array< Float > tmp3 = this->blitMatrix;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(227)
			Float tmp4 = tmp3->__unsafe_get((int)1);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(227)
			mat->b = tmp4;
			HX_STACK_LINE(227)
			Array< Float > tmp5 = this->blitMatrix;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(227)
			Float tmp6 = tmp5->__unsafe_get((int)2);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(227)
			mat->c = tmp6;
			HX_STACK_LINE(227)
			Array< Float > tmp7 = this->blitMatrix;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(227)
			Float tmp8 = tmp7->__unsafe_get((int)3);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(227)
			mat->d = tmp8;
			HX_STACK_LINE(227)
			Array< Float > tmp9 = this->blitMatrix;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(227)
			Float tmp10 = tmp9->__unsafe_get((int)4);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(227)
			mat->tx = tmp10;
			HX_STACK_LINE(227)
			Array< Float > tmp11 = this->blitMatrix;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(227)
			Float tmp12 = tmp11->__unsafe_get((int)5);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(227)
			mat->ty = tmp12;
			HX_STACK_LINE(227)
			tmp = mat;
		}
		HX_STACK_LINE(227)
		mat = tmp;
		HX_STACK_LINE(228)
		::flixel::math::FlxMatrix tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(228)
		{
			HX_STACK_LINE(228)
			::flixel::math::FlxPoint tmp2 = this->sourceSize;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(228)
			Float tmp3 = tmp2->x;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(228)
			int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(228)
			int w = tmp4;		HX_STACK_VAR(w,"w");
			HX_STACK_LINE(228)
			::flixel::math::FlxPoint tmp5 = this->sourceSize;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(228)
			Float tmp6 = tmp5->y;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(228)
			int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(228)
			int h = tmp7;		HX_STACK_VAR(h,"h");
			HX_STACK_LINE(228)
			bool tmp8 = (rotation != (int)0);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(228)
			if ((tmp8)){
				HX_STACK_LINE(228)
				int t = w;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(228)
				w = h;
				HX_STACK_LINE(228)
				h = t;
				HX_STACK_LINE(228)
				bool tmp9 = (rotation == (int)90);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(228)
				if ((tmp9)){
					HX_STACK_LINE(228)
					{
						HX_STACK_LINE(228)
						Float tmp10 = mat->b;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(228)
						Float tmp11 = -(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(228)
						Float tmp12 = mat->a;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(228)
						Float tmp13 = mat->d;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(228)
						Float tmp14 = -(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(228)
						Float tmp15 = mat->c;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(228)
						Float tmp16 = mat->ty;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(228)
						Float tmp17 = -(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(228)
						Float tmp18 = mat->tx;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(228)
						mat->setTo(tmp11,tmp12,tmp14,tmp15,tmp17,tmp18);
						HX_STACK_LINE(228)
						mat;
					}
					HX_STACK_LINE(228)
					::flixel::math::FlxPoint tmp10 = this->sourceSize;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(228)
					Float tmp11 = tmp10->y;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(228)
					mat->translate(tmp11,(int)0);
				}
				else{
					HX_STACK_LINE(228)
					bool tmp10 = (rotation == (int)-90);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(228)
					bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(228)
					bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(228)
					if ((tmp11)){
						HX_STACK_LINE(228)
						tmp12 = (rotation == (int)-90);
					}
					else{
						HX_STACK_LINE(228)
						tmp12 = true;
					}
					HX_STACK_LINE(228)
					if ((tmp12)){
						HX_STACK_LINE(228)
						{
							HX_STACK_LINE(228)
							Float tmp13 = mat->b;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(228)
							Float tmp14 = mat->a;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(228)
							Float tmp15 = -(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(228)
							Float tmp16 = mat->d;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(228)
							Float tmp17 = mat->c;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(228)
							Float tmp18 = -(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(228)
							Float tmp19 = mat->ty;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(228)
							Float tmp20 = mat->tx;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(228)
							Float tmp21 = -(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(228)
							mat->setTo(tmp13,tmp15,tmp16,tmp18,tmp19,tmp21);
							HX_STACK_LINE(228)
							mat;
						}
						HX_STACK_LINE(228)
						::flixel::math::FlxPoint tmp13 = this->sourceSize;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(228)
						Float tmp14 = tmp13->x;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(228)
						mat->translate((int)0,tmp14);
					}
				}
			}
			HX_STACK_LINE(228)
			bool tmp9 = flipX;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(228)
			if ((tmp9)){
				HX_STACK_LINE(228)
				mat->scale((int)-1,(int)1);
				HX_STACK_LINE(228)
				int tmp10 = w;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(228)
				mat->translate(tmp10,(int)0);
			}
			HX_STACK_LINE(228)
			bool tmp10 = flipY;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(228)
			if ((tmp10)){
				HX_STACK_LINE(228)
				mat->scale((int)1,(int)-1);
				HX_STACK_LINE(228)
				int tmp11 = h;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(228)
				mat->translate((int)0,tmp11);
			}
			HX_STACK_LINE(228)
			tmp1 = mat;
		}
		HX_STACK_LINE(228)
		return tmp1;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxFrame_obj,prepareTransformedBlitMatrix,return )

::flixel::math::FlxMatrix FlxFrame_obj::prepareMatrix( ::flixel::math::FlxMatrix mat,hx::Null< int >  __o_rotation,hx::Null< bool >  __o_flipX,hx::Null< bool >  __o_flipY){
int rotation = __o_rotation.Default(0);
bool flipX = __o_flipX.Default(false);
bool flipY = __o_flipY.Default(false);
	HX_STACK_FRAME("flixel.graphics.frames.FlxFrame","prepareMatrix",0xbf883cac,"flixel.graphics.frames.FlxFrame.prepareMatrix","flixel/graphics/frames/FlxFrame.hx",241,0x6c7f608b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(mat,"mat")
	HX_STACK_ARG(rotation,"rotation")
	HX_STACK_ARG(flipX,"flipX")
	HX_STACK_ARG(flipY,"flipY")
{
		HX_STACK_LINE(242)
		bool tmp = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(242)
		if ((tmp)){
			HX_STACK_LINE(244)
			mat->identity();
			HX_STACK_LINE(245)
			::flixel::math::FlxMatrix tmp1 = mat;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(245)
			return tmp1;
		}
		HX_STACK_LINE(248)
		Array< Float > tmp1 = this->tileMatrix;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(248)
		Float tmp2 = tmp1->__unsafe_get((int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(248)
		mat->a = tmp2;
		HX_STACK_LINE(249)
		Array< Float > tmp3 = this->tileMatrix;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(249)
		Float tmp4 = tmp3->__unsafe_get((int)1);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(249)
		mat->b = tmp4;
		HX_STACK_LINE(250)
		Array< Float > tmp5 = this->tileMatrix;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(250)
		Float tmp6 = tmp5->__unsafe_get((int)2);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(250)
		mat->c = tmp6;
		HX_STACK_LINE(251)
		Array< Float > tmp7 = this->tileMatrix;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(251)
		Float tmp8 = tmp7->__unsafe_get((int)3);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(251)
		mat->d = tmp8;
		HX_STACK_LINE(252)
		Array< Float > tmp9 = this->tileMatrix;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(252)
		Float tmp10 = tmp9->__unsafe_get((int)4);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(252)
		mat->tx = tmp10;
		HX_STACK_LINE(253)
		Array< Float > tmp11 = this->tileMatrix;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(253)
		Float tmp12 = tmp11->__unsafe_get((int)5);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(253)
		mat->ty = tmp12;
		HX_STACK_LINE(255)
		bool tmp13 = flipX;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(255)
		bool tmp14 = this->flipX;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(255)
		bool tmp15 = (tmp13 != tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(255)
		bool doFlipX = tmp15;		HX_STACK_VAR(doFlipX,"doFlipX");
		HX_STACK_LINE(256)
		bool tmp16 = flipY;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(256)
		bool tmp17 = this->flipY;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(256)
		bool tmp18 = (tmp16 != tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(256)
		bool doFlipY = tmp18;		HX_STACK_VAR(doFlipY,"doFlipY");
		HX_STACK_LINE(258)
		bool tmp19 = (rotation == (int)0);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(258)
		bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(258)
		bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(258)
		if ((tmp20)){
			HX_STACK_LINE(258)
			bool tmp22 = doFlipX;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(258)
			bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(258)
			bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(258)
			tmp21 = !(tmp24);
		}
		else{
			HX_STACK_LINE(258)
			tmp21 = false;
		}
		HX_STACK_LINE(258)
		bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(258)
		if ((tmp21)){
			HX_STACK_LINE(258)
			bool tmp23 = doFlipY;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(258)
			bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(258)
			tmp22 = !(tmp24);
		}
		else{
			HX_STACK_LINE(258)
			tmp22 = false;
		}
		HX_STACK_LINE(258)
		if ((tmp22)){
			HX_STACK_LINE(260)
			::flixel::math::FlxMatrix tmp23 = mat;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(260)
			return tmp23;
		}
		HX_STACK_LINE(263)
		::flixel::math::FlxMatrix tmp23;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(263)
		{
			HX_STACK_LINE(263)
			::flixel::math::FlxPoint tmp24 = this->sourceSize;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(263)
			Float tmp25 = tmp24->x;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(263)
			int tmp26 = ::Std_obj::_int(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(263)
			int w = tmp26;		HX_STACK_VAR(w,"w");
			HX_STACK_LINE(263)
			::flixel::math::FlxPoint tmp27 = this->sourceSize;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(263)
			Float tmp28 = tmp27->y;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(263)
			int tmp29 = ::Std_obj::_int(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(263)
			int h = tmp29;		HX_STACK_VAR(h,"h");
			HX_STACK_LINE(263)
			bool tmp30 = (rotation != (int)0);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(263)
			if ((tmp30)){
				HX_STACK_LINE(263)
				int t = w;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(263)
				w = h;
				HX_STACK_LINE(263)
				h = t;
				HX_STACK_LINE(263)
				bool tmp31 = (rotation == (int)90);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(263)
				if ((tmp31)){
					HX_STACK_LINE(263)
					{
						HX_STACK_LINE(263)
						Float tmp32 = mat->b;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(263)
						Float tmp33 = -(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(263)
						Float tmp34 = mat->a;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(263)
						Float tmp35 = mat->d;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(263)
						Float tmp36 = -(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(263)
						Float tmp37 = mat->c;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(263)
						Float tmp38 = mat->ty;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(263)
						Float tmp39 = -(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(263)
						Float tmp40 = mat->tx;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(263)
						mat->setTo(tmp33,tmp34,tmp36,tmp37,tmp39,tmp40);
						HX_STACK_LINE(263)
						mat;
					}
					HX_STACK_LINE(263)
					::flixel::math::FlxPoint tmp32 = this->sourceSize;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(263)
					Float tmp33 = tmp32->y;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(263)
					mat->translate(tmp33,(int)0);
				}
				else{
					HX_STACK_LINE(263)
					bool tmp32 = (rotation == (int)-90);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(263)
					bool tmp33 = !(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(263)
					bool tmp34;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(263)
					if ((tmp33)){
						HX_STACK_LINE(263)
						tmp34 = (rotation == (int)-90);
					}
					else{
						HX_STACK_LINE(263)
						tmp34 = true;
					}
					HX_STACK_LINE(263)
					if ((tmp34)){
						HX_STACK_LINE(263)
						{
							HX_STACK_LINE(263)
							Float tmp35 = mat->b;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(263)
							Float tmp36 = mat->a;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(263)
							Float tmp37 = -(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(263)
							Float tmp38 = mat->d;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(263)
							Float tmp39 = mat->c;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(263)
							Float tmp40 = -(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(263)
							Float tmp41 = mat->ty;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(263)
							Float tmp42 = mat->tx;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(263)
							Float tmp43 = -(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(263)
							mat->setTo(tmp35,tmp37,tmp38,tmp40,tmp41,tmp43);
							HX_STACK_LINE(263)
							mat;
						}
						HX_STACK_LINE(263)
						::flixel::math::FlxPoint tmp35 = this->sourceSize;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(263)
						Float tmp36 = tmp35->x;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(263)
						mat->translate((int)0,tmp36);
					}
				}
			}
			HX_STACK_LINE(263)
			bool tmp31 = doFlipX;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(263)
			if ((tmp31)){
				HX_STACK_LINE(263)
				mat->scale((int)-1,(int)1);
				HX_STACK_LINE(263)
				int tmp32 = w;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(263)
				mat->translate(tmp32,(int)0);
			}
			HX_STACK_LINE(263)
			bool tmp32 = doFlipY;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(263)
			if ((tmp32)){
				HX_STACK_LINE(263)
				mat->scale((int)1,(int)-1);
				HX_STACK_LINE(263)
				int tmp33 = h;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(263)
				mat->translate((int)0,tmp33);
			}
			HX_STACK_LINE(263)
			tmp23 = mat;
		}
		HX_STACK_LINE(263)
		return tmp23;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxFrame_obj,prepareMatrix,return )

::flixel::math::FlxMatrix FlxFrame_obj::fillBlitMatrix( ::flixel::math::FlxMatrix mat){
	HX_STACK_FRAME("flixel.graphics.frames.FlxFrame","fillBlitMatrix",0xa3605eb5,"flixel.graphics.frames.FlxFrame.fillBlitMatrix","flixel/graphics/frames/FlxFrame.hx",267,0x6c7f608b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(mat,"mat")
	HX_STACK_LINE(268)
	Array< Float > tmp = this->blitMatrix;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(268)
	Float tmp1 = tmp->__unsafe_get((int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(268)
	mat->a = tmp1;
	HX_STACK_LINE(269)
	Array< Float > tmp2 = this->blitMatrix;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(269)
	Float tmp3 = tmp2->__unsafe_get((int)1);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(269)
	mat->b = tmp3;
	HX_STACK_LINE(270)
	Array< Float > tmp4 = this->blitMatrix;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(270)
	Float tmp5 = tmp4->__unsafe_get((int)2);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(270)
	mat->c = tmp5;
	HX_STACK_LINE(271)
	Array< Float > tmp6 = this->blitMatrix;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(271)
	Float tmp7 = tmp6->__unsafe_get((int)3);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(271)
	mat->d = tmp7;
	HX_STACK_LINE(272)
	Array< Float > tmp8 = this->blitMatrix;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(272)
	Float tmp9 = tmp8->__unsafe_get((int)4);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(272)
	mat->tx = tmp9;
	HX_STACK_LINE(273)
	Array< Float > tmp10 = this->blitMatrix;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(273)
	Float tmp11 = tmp10->__unsafe_get((int)5);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(273)
	mat->ty = tmp11;
	HX_STACK_LINE(274)
	::flixel::math::FlxMatrix tmp12 = mat;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(274)
	return tmp12;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxFrame_obj,fillBlitMatrix,return )

::openfl::_legacy::display::BitmapData FlxFrame_obj::paint( ::openfl::_legacy::display::BitmapData bmd,::openfl::_legacy::geom::Point point,hx::Null< bool >  __o_mergeAlpha,hx::Null< bool >  __o_disposeIfNotEqual){
bool mergeAlpha = __o_mergeAlpha.Default(false);
bool disposeIfNotEqual = __o_disposeIfNotEqual.Default(false);
	HX_STACK_FRAME("flixel.graphics.frames.FlxFrame","paint",0x0c093522,"flixel.graphics.frames.FlxFrame.paint","flixel/graphics/frames/FlxFrame.hx",287,0x6c7f608b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bmd,"bmd")
	HX_STACK_ARG(point,"point")
	HX_STACK_ARG(mergeAlpha,"mergeAlpha")
	HX_STACK_ARG(disposeIfNotEqual,"disposeIfNotEqual")
{
		HX_STACK_LINE(288)
		bool tmp = (point == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(288)
		if ((tmp)){
			HX_STACK_LINE(290)
			::openfl::_legacy::geom::Point tmp1 = this->point1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(290)
			point = tmp1;
			HX_STACK_LINE(291)
			point->setTo((int)0,(int)0);
		}
		HX_STACK_LINE(294)
		::openfl::_legacy::display::BitmapData tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(294)
		{
			HX_STACK_LINE(294)
			::openfl::_legacy::display::BitmapData bmd1 = bmd;		HX_STACK_VAR(bmd1,"bmd1");
			HX_STACK_LINE(294)
			::flixel::math::FlxPoint tmp2 = this->sourceSize;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(294)
			Float tmp3 = tmp2->x;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(294)
			int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(294)
			int w = tmp4;		HX_STACK_VAR(w,"w");
			HX_STACK_LINE(294)
			::flixel::math::FlxPoint tmp5 = this->sourceSize;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(294)
			Float tmp6 = tmp5->y;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(294)
			int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(294)
			int h = tmp7;		HX_STACK_VAR(h,"h");
			HX_STACK_LINE(294)
			bool tmp8 = ((int)0 != (int)0);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(294)
			if ((tmp8)){
				HX_STACK_LINE(294)
				int t = w;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(294)
				w = h;
				HX_STACK_LINE(294)
				h = t;
			}
			HX_STACK_LINE(294)
			bool tmp9 = (bmd1 != null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(294)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(294)
			if ((tmp9)){
				HX_STACK_LINE(294)
				tmp10 = disposeIfNotEqual;
			}
			else{
				HX_STACK_LINE(294)
				tmp10 = false;
			}
			HX_STACK_LINE(294)
			if ((tmp10)){
				HX_STACK_LINE(294)
				::openfl::_legacy::display::BitmapData tmp11 = bmd1;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(294)
				int tmp12 = w;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(294)
				int tmp13 = h;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(294)
				::openfl::_legacy::display::BitmapData tmp14 = ::flixel::util::FlxDestroyUtil_obj::disposeIfNotEqual(tmp11,tmp12,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(294)
				bmd1 = tmp14;
			}
			HX_STACK_LINE(294)
			bool tmp11 = (bmd1 != null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(294)
			bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(294)
			if ((tmp11)){
				HX_STACK_LINE(294)
				bool tmp13 = mergeAlpha;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(294)
				bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(294)
				tmp12 = !(tmp14);
			}
			else{
				HX_STACK_LINE(294)
				tmp12 = false;
			}
			HX_STACK_LINE(294)
			if ((tmp12)){
				HX_STACK_LINE(294)
				::openfl::_legacy::geom::Rectangle tmp13 = this->rect;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(294)
				Float tmp14 = point->x;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(294)
				Float tmp15 = point->y;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(294)
				int tmp16 = w;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(294)
				int tmp17 = h;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(294)
				tmp13->setTo(tmp14,tmp15,tmp16,tmp17);
				HX_STACK_LINE(294)
				::openfl::_legacy::geom::Rectangle tmp18 = this->rect;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(294)
				bmd1->fillRect(tmp18,(int)0);
			}
			else{
				HX_STACK_LINE(294)
				bool tmp13 = (bmd1 == null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(294)
				if ((tmp13)){
					HX_STACK_LINE(294)
					::openfl::_legacy::display::BitmapData tmp14 = ::openfl::_legacy::display::BitmapData_obj::__new(w,h,true,(int)0,null());		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(294)
					bmd1 = tmp14;
				}
			}
			HX_STACK_LINE(294)
			tmp1 = bmd1;
		}
		HX_STACK_LINE(294)
		bmd = tmp1;
		HX_STACK_LINE(296)
		int tmp2 = this->type;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(296)
		bool tmp3 = (tmp2 == (int)2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(296)
		if ((tmp3)){
			HX_STACK_LINE(298)
			::openfl::_legacy::display::BitmapData tmp4 = bmd;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(298)
			return tmp4;
		}
		HX_STACK_LINE(301)
		int tmp4 = this->angle;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(301)
		bool tmp5 = (tmp4 == (int)0);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(301)
		if ((tmp5)){
			HX_STACK_LINE(303)
			{
				HX_STACK_LINE(303)
				::flixel::math::FlxPoint tmp6 = this->offset;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(303)
				::flixel::math::FlxPoint _this = tmp6;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(303)
				::openfl::_legacy::geom::Point tmp7 = this->point2;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(303)
				::openfl::_legacy::geom::Point FlashPoint = tmp7;		HX_STACK_VAR(FlashPoint,"FlashPoint");
				HX_STACK_LINE(303)
				bool tmp8 = (FlashPoint == null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(303)
				if ((tmp8)){
					HX_STACK_LINE(303)
					::openfl::_legacy::geom::Point tmp9 = ::openfl::_legacy::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(303)
					FlashPoint = tmp9;
				}
				HX_STACK_LINE(303)
				FlashPoint->x = _this->x;
				HX_STACK_LINE(303)
				FlashPoint->y = _this->y;
				HX_STACK_LINE(303)
				FlashPoint;
			}
			HX_STACK_LINE(304)
			::openfl::_legacy::geom::Point tmp6 = this->point2;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(304)
			hx::AddEq(tmp6->x,point->x);
			HX_STACK_LINE(305)
			::openfl::_legacy::geom::Point tmp7 = this->point2;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(305)
			hx::AddEq(tmp7->y,point->y);
			HX_STACK_LINE(306)
			::flixel::graphics::FlxGraphic tmp8 = this->parent;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(306)
			::openfl::_legacy::display::BitmapData tmp9 = tmp8->bitmap;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(306)
			::openfl::_legacy::geom::Rectangle tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(306)
			{
				HX_STACK_LINE(306)
				::flixel::math::FlxRect tmp11 = this->frame;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(306)
				::flixel::math::FlxRect _this = tmp11;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(306)
				::openfl::_legacy::geom::Rectangle tmp12 = this->rect;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(306)
				::openfl::_legacy::geom::Rectangle FlashRect = tmp12;		HX_STACK_VAR(FlashRect,"FlashRect");
				HX_STACK_LINE(306)
				bool tmp13 = (FlashRect == null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(306)
				if ((tmp13)){
					HX_STACK_LINE(306)
					::openfl::_legacy::geom::Rectangle tmp14 = ::openfl::_legacy::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(306)
					FlashRect = tmp14;
				}
				HX_STACK_LINE(306)
				FlashRect->x = _this->x;
				HX_STACK_LINE(306)
				FlashRect->y = _this->y;
				HX_STACK_LINE(306)
				FlashRect->width = _this->width;
				HX_STACK_LINE(306)
				FlashRect->height = _this->height;
				HX_STACK_LINE(306)
				tmp10 = FlashRect;
			}
			HX_STACK_LINE(306)
			::openfl::_legacy::geom::Point tmp11 = this->point2;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(306)
			bool tmp12 = mergeAlpha;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(306)
			bmd->copyPixels(tmp9,tmp10,tmp11,null(),null(),tmp12);
		}
		else{
			HX_STACK_LINE(310)
			{
				HX_STACK_LINE(310)
				::flixel::math::FlxMatrix tmp6 = this->matrix;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(310)
				::flixel::math::FlxMatrix mat = tmp6;		HX_STACK_VAR(mat,"mat");
				HX_STACK_LINE(310)
				Array< Float > tmp7 = this->blitMatrix;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(310)
				Float tmp8 = tmp7->__unsafe_get((int)0);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(310)
				mat->a = tmp8;
				HX_STACK_LINE(310)
				Array< Float > tmp9 = this->blitMatrix;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(310)
				Float tmp10 = tmp9->__unsafe_get((int)1);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(310)
				mat->b = tmp10;
				HX_STACK_LINE(310)
				Array< Float > tmp11 = this->blitMatrix;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(310)
				Float tmp12 = tmp11->__unsafe_get((int)2);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(310)
				mat->c = tmp12;
				HX_STACK_LINE(310)
				Array< Float > tmp13 = this->blitMatrix;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(310)
				Float tmp14 = tmp13->__unsafe_get((int)3);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(310)
				mat->d = tmp14;
				HX_STACK_LINE(310)
				Array< Float > tmp15 = this->blitMatrix;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(310)
				Float tmp16 = tmp15->__unsafe_get((int)4);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(310)
				mat->tx = tmp16;
				HX_STACK_LINE(310)
				Array< Float > tmp17 = this->blitMatrix;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(310)
				Float tmp18 = tmp17->__unsafe_get((int)5);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(310)
				mat->ty = tmp18;
				HX_STACK_LINE(310)
				mat;
			}
			HX_STACK_LINE(311)
			::flixel::math::FlxMatrix tmp6 = this->matrix;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(311)
			Float tmp7 = point->x;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(311)
			Float tmp8 = point->y;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(311)
			tmp6->translate(tmp7,tmp8);
			HX_STACK_LINE(312)
			::openfl::_legacy::geom::Rectangle tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(312)
			{
				HX_STACK_LINE(312)
				::flixel::math::FlxMatrix tmp10 = this->matrix;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(312)
				::flixel::math::FlxMatrix mat = tmp10;		HX_STACK_VAR(mat,"mat");
				HX_STACK_LINE(312)
				::flixel::math::FlxPoint tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(312)
				{
					HX_STACK_LINE(312)
					::flixel::math::FlxPoint tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(312)
					{
						HX_STACK_LINE(312)
						::flixel::util::FlxPool_flixel_math_FlxPoint tmp13 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(312)
						::flixel::math::FlxPoint tmp14 = tmp13->get();		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(312)
						::flixel::math::FlxRect tmp15 = this->frame;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(312)
						Float tmp16 = tmp15->x;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(312)
						::flixel::math::FlxRect tmp17 = this->frame;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(312)
						Float tmp18 = tmp17->y;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(312)
						::flixel::math::FlxPoint tmp19 = tmp14->set(tmp16,tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(312)
						::flixel::math::FlxPoint point1 = tmp19;		HX_STACK_VAR(point1,"point1");
						HX_STACK_LINE(312)
						point1->_inPool = false;
						HX_STACK_LINE(312)
						tmp12 = point1;
					}
					HX_STACK_LINE(312)
					::flixel::math::FlxPoint point1 = tmp12;		HX_STACK_VAR(point1,"point1");
					HX_STACK_LINE(312)
					point1->_weak = true;
					HX_STACK_LINE(312)
					tmp11 = point1;
				}
				HX_STACK_LINE(312)
				::flixel::math::FlxPoint p1 = tmp11;		HX_STACK_VAR(p1,"p1");
				HX_STACK_LINE(312)
				::flixel::math::FlxPoint tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(312)
				{
					HX_STACK_LINE(312)
					::flixel::math::FlxPoint tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(312)
					{
						HX_STACK_LINE(312)
						::flixel::util::FlxPool_flixel_math_FlxPoint tmp14 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(312)
						::flixel::math::FlxPoint tmp15 = tmp14->get();		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(312)
						Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(312)
						{
							HX_STACK_LINE(312)
							::flixel::math::FlxRect tmp17 = this->frame;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(312)
							::flixel::math::FlxRect _this = tmp17;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(312)
							tmp16 = (_this->x + _this->width);
						}
						HX_STACK_LINE(312)
						Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(312)
						{
							HX_STACK_LINE(312)
							::flixel::math::FlxRect tmp18 = this->frame;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(312)
							::flixel::math::FlxRect _this = tmp18;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(312)
							tmp17 = (_this->y + _this->height);
						}
						HX_STACK_LINE(312)
						::flixel::math::FlxPoint tmp18 = tmp15->set(tmp16,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(312)
						::flixel::math::FlxPoint point1 = tmp18;		HX_STACK_VAR(point1,"point1");
						HX_STACK_LINE(312)
						point1->_inPool = false;
						HX_STACK_LINE(312)
						tmp13 = point1;
					}
					HX_STACK_LINE(312)
					::flixel::math::FlxPoint point1 = tmp13;		HX_STACK_VAR(point1,"point1");
					HX_STACK_LINE(312)
					point1->_weak = true;
					HX_STACK_LINE(312)
					tmp12 = point1;
				}
				HX_STACK_LINE(312)
				::flixel::math::FlxPoint p2 = tmp12;		HX_STACK_VAR(p2,"p2");
				HX_STACK_LINE(312)
				{
					HX_STACK_LINE(312)
					Float tmp13 = (p1->x * mat->a);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(312)
					Float tmp14 = (p1->y * mat->c);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(312)
					Float tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(312)
					Float tmp16 = mat->tx;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(312)
					Float tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(312)
					Float x1 = tmp17;		HX_STACK_VAR(x1,"x1");
					HX_STACK_LINE(312)
					Float tmp18 = (p1->x * mat->b);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(312)
					Float tmp19 = (p1->y * mat->d);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(312)
					Float tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(312)
					Float tmp21 = mat->ty;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(312)
					Float tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(312)
					Float y1 = tmp22;		HX_STACK_VAR(y1,"y1");
					HX_STACK_LINE(312)
					Float tmp23 = x1;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(312)
					Float tmp24 = y1;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(312)
					p1->set(tmp23,tmp24);
				}
				HX_STACK_LINE(312)
				{
					HX_STACK_LINE(312)
					Float tmp13 = (p2->x * mat->a);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(312)
					Float tmp14 = (p2->y * mat->c);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(312)
					Float tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(312)
					Float tmp16 = mat->tx;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(312)
					Float tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(312)
					Float x1 = tmp17;		HX_STACK_VAR(x1,"x1");
					HX_STACK_LINE(312)
					Float tmp18 = (p2->x * mat->b);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(312)
					Float tmp19 = (p2->y * mat->d);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(312)
					Float tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(312)
					Float tmp21 = mat->ty;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(312)
					Float tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(312)
					Float y1 = tmp22;		HX_STACK_VAR(y1,"y1");
					HX_STACK_LINE(312)
					Float tmp23 = x1;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(312)
					Float tmp24 = y1;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(312)
					p2->set(tmp23,tmp24);
				}
				HX_STACK_LINE(312)
				::flixel::math::FlxRect tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(312)
				{
					HX_STACK_LINE(312)
					::flixel::math::FlxRect tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(312)
					{
						HX_STACK_LINE(312)
						Float X = (int)0;		HX_STACK_VAR(X,"X");
						HX_STACK_LINE(312)
						Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
						HX_STACK_LINE(312)
						Float Width = (int)0;		HX_STACK_VAR(Width,"Width");
						HX_STACK_LINE(312)
						Float Height = (int)0;		HX_STACK_VAR(Height,"Height");
						HX_STACK_LINE(312)
						::flixel::math::FlxRect tmp15;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(312)
						{
							HX_STACK_LINE(312)
							::flixel::util::FlxPool_flixel_math_FlxRect tmp16 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(312)
							::flixel::math::FlxRect tmp17 = tmp16->get();		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(312)
							::flixel::math::FlxRect _this = tmp17;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(312)
							_this->x = X;
							HX_STACK_LINE(312)
							_this->y = Y;
							HX_STACK_LINE(312)
							_this->width = Width;
							HX_STACK_LINE(312)
							_this->height = Height;
							HX_STACK_LINE(312)
							tmp15 = _this;
						}
						HX_STACK_LINE(312)
						::flixel::math::FlxRect rect = tmp15;		HX_STACK_VAR(rect,"rect");
						HX_STACK_LINE(312)
						rect->_inPool = false;
						HX_STACK_LINE(312)
						tmp14 = rect;
					}
					HX_STACK_LINE(312)
					::flixel::math::FlxRect _this = tmp14;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(312)
					Float tmp15 = p1->x;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(312)
					Float tmp16 = p2->x;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(312)
					Float tmp17 = ::Math_obj::min(tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(312)
					Float minX = tmp17;		HX_STACK_VAR(minX,"minX");
					HX_STACK_LINE(312)
					Float tmp18 = p1->y;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(312)
					Float tmp19 = p2->y;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(312)
					Float tmp20 = ::Math_obj::min(tmp18,tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(312)
					Float minY = tmp20;		HX_STACK_VAR(minY,"minY");
					HX_STACK_LINE(312)
					Float tmp21 = p1->x;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(312)
					Float tmp22 = p2->x;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(312)
					Float tmp23 = ::Math_obj::max(tmp21,tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(312)
					Float maxX = tmp23;		HX_STACK_VAR(maxX,"maxX");
					HX_STACK_LINE(312)
					Float tmp24 = p1->y;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(312)
					Float tmp25 = p2->y;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(312)
					Float tmp26 = ::Math_obj::max(tmp24,tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(312)
					Float maxY = tmp26;		HX_STACK_VAR(maxY,"maxY");
					HX_STACK_LINE(312)
					{
						HX_STACK_LINE(312)
						bool tmp27 = p1->_weak;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(312)
						if ((tmp27)){
							HX_STACK_LINE(312)
							p1->put();
						}
					}
					HX_STACK_LINE(312)
					{
						HX_STACK_LINE(312)
						bool tmp27 = p2->_weak;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(312)
						if ((tmp27)){
							HX_STACK_LINE(312)
							p2->put();
						}
					}
					HX_STACK_LINE(312)
					{
						HX_STACK_LINE(312)
						_this->x = minX;
						HX_STACK_LINE(312)
						_this->y = minY;
						HX_STACK_LINE(312)
						Float tmp27 = (maxX - minX);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(312)
						_this->width = tmp27;
						HX_STACK_LINE(312)
						Float tmp28 = (maxY - minY);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(312)
						_this->height = tmp28;
						HX_STACK_LINE(312)
						tmp13 = _this;
					}
				}
				HX_STACK_LINE(312)
				::flixel::math::FlxRect flxRect = tmp13;		HX_STACK_VAR(flxRect,"flxRect");
				HX_STACK_LINE(312)
				{
					HX_STACK_LINE(312)
					::openfl::_legacy::geom::Rectangle tmp14 = this->rect;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(312)
					::openfl::_legacy::geom::Rectangle FlashRect = tmp14;		HX_STACK_VAR(FlashRect,"FlashRect");
					HX_STACK_LINE(312)
					bool tmp15 = (FlashRect == null());		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(312)
					if ((tmp15)){
						HX_STACK_LINE(312)
						::openfl::_legacy::geom::Rectangle tmp16 = ::openfl::_legacy::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(312)
						FlashRect = tmp16;
					}
					HX_STACK_LINE(312)
					FlashRect->x = flxRect->x;
					HX_STACK_LINE(312)
					FlashRect->y = flxRect->y;
					HX_STACK_LINE(312)
					FlashRect->width = flxRect->width;
					HX_STACK_LINE(312)
					FlashRect->height = flxRect->height;
					HX_STACK_LINE(312)
					FlashRect;
				}
				HX_STACK_LINE(312)
				{
					HX_STACK_LINE(312)
					bool tmp14 = flxRect->_inPool;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(312)
					bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(312)
					if ((tmp15)){
						HX_STACK_LINE(312)
						flxRect->_inPool = true;
						HX_STACK_LINE(312)
						flxRect->_weak = false;
						HX_STACK_LINE(312)
						::flixel::util::FlxPool_flixel_math_FlxRect tmp16 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(312)
						::flixel::math::FlxRect tmp17 = flxRect;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(312)
						tmp16->putUnsafe(tmp17);
					}
				}
				HX_STACK_LINE(312)
				tmp9 = this->rect;
			}
			HX_STACK_LINE(312)
			::openfl::_legacy::geom::Rectangle rect = tmp9;		HX_STACK_VAR(rect,"rect");
			HX_STACK_LINE(313)
			::flixel::graphics::FlxGraphic tmp10 = this->parent;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(313)
			::openfl::_legacy::display::BitmapData tmp11 = tmp10->bitmap;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(313)
			::flixel::math::FlxMatrix tmp12 = this->matrix;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(313)
			::openfl::_legacy::geom::Rectangle tmp13 = rect;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(313)
			bmd->draw(tmp11,tmp12,null(),null(),tmp13,null());
		}
		HX_STACK_LINE(316)
		::openfl::_legacy::display::BitmapData tmp6 = bmd;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(316)
		return tmp6;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxFrame_obj,paint,return )

::openfl::_legacy::display::BitmapData FlxFrame_obj::paintRotatedAndFlipped( ::openfl::_legacy::display::BitmapData bmd,::openfl::_legacy::geom::Point point,hx::Null< int >  __o_rotation,hx::Null< bool >  __o_flipX,hx::Null< bool >  __o_flipY,hx::Null< bool >  __o_mergeAlpha,hx::Null< bool >  __o_disposeIfNotEqual){
int rotation = __o_rotation.Default(0);
bool flipX = __o_flipX.Default(false);
bool flipY = __o_flipY.Default(false);
bool mergeAlpha = __o_mergeAlpha.Default(false);
bool disposeIfNotEqual = __o_disposeIfNotEqual.Default(false);
	HX_STACK_FRAME("flixel.graphics.frames.FlxFrame","paintRotatedAndFlipped",0x8f0fb1b2,"flixel.graphics.frames.FlxFrame.paintRotatedAndFlipped","flixel/graphics/frames/FlxFrame.hx",332,0x6c7f608b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bmd,"bmd")
	HX_STACK_ARG(point,"point")
	HX_STACK_ARG(rotation,"rotation")
	HX_STACK_ARG(flipX,"flipX")
	HX_STACK_ARG(flipY,"flipY")
	HX_STACK_ARG(mergeAlpha,"mergeAlpha")
	HX_STACK_ARG(disposeIfNotEqual,"disposeIfNotEqual")
{
		HX_STACK_LINE(333)
		int tmp = this->type;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(333)
		bool tmp1 = (tmp == (int)2);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(333)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(333)
		if ((tmp1)){
			HX_STACK_LINE(333)
			tmp2 = (rotation == (int)0);
		}
		else{
			HX_STACK_LINE(333)
			tmp2 = false;
		}
		HX_STACK_LINE(333)
		if ((tmp2)){
			HX_STACK_LINE(335)
			::openfl::_legacy::display::BitmapData tmp3 = bmd;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(335)
			::openfl::_legacy::geom::Point tmp4 = point;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(335)
			bool tmp5 = mergeAlpha;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(335)
			bool tmp6 = disposeIfNotEqual;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(335)
			::openfl::_legacy::display::BitmapData tmp7 = this->paint(tmp3,tmp4,tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(335)
			return tmp7;
		}
		HX_STACK_LINE(338)
		bool tmp3 = (point == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(338)
		if ((tmp3)){
			HX_STACK_LINE(340)
			::openfl::_legacy::geom::Point tmp4 = this->point2;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(340)
			point = tmp4;
			HX_STACK_LINE(341)
			point->setTo((int)0,(int)0);
		}
		HX_STACK_LINE(344)
		::openfl::_legacy::display::BitmapData tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(344)
		{
			HX_STACK_LINE(344)
			::openfl::_legacy::display::BitmapData bmd1 = bmd;		HX_STACK_VAR(bmd1,"bmd1");
			HX_STACK_LINE(344)
			::flixel::math::FlxPoint tmp5 = this->sourceSize;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(344)
			Float tmp6 = tmp5->x;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(344)
			int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(344)
			int w = tmp7;		HX_STACK_VAR(w,"w");
			HX_STACK_LINE(344)
			::flixel::math::FlxPoint tmp8 = this->sourceSize;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(344)
			Float tmp9 = tmp8->y;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(344)
			int tmp10 = ::Std_obj::_int(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(344)
			int h = tmp10;		HX_STACK_VAR(h,"h");
			HX_STACK_LINE(344)
			bool tmp11 = (rotation != (int)0);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(344)
			if ((tmp11)){
				HX_STACK_LINE(344)
				int t = w;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(344)
				w = h;
				HX_STACK_LINE(344)
				h = t;
			}
			HX_STACK_LINE(344)
			bool tmp12 = (bmd1 != null());		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(344)
			bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(344)
			if ((tmp12)){
				HX_STACK_LINE(344)
				tmp13 = disposeIfNotEqual;
			}
			else{
				HX_STACK_LINE(344)
				tmp13 = false;
			}
			HX_STACK_LINE(344)
			if ((tmp13)){
				HX_STACK_LINE(344)
				::openfl::_legacy::display::BitmapData tmp14 = bmd1;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(344)
				int tmp15 = w;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(344)
				int tmp16 = h;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(344)
				::openfl::_legacy::display::BitmapData tmp17 = ::flixel::util::FlxDestroyUtil_obj::disposeIfNotEqual(tmp14,tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(344)
				bmd1 = tmp17;
			}
			HX_STACK_LINE(344)
			bool tmp14 = (bmd1 != null());		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(344)
			bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(344)
			if ((tmp14)){
				HX_STACK_LINE(344)
				bool tmp16 = mergeAlpha;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(344)
				bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(344)
				tmp15 = !(tmp17);
			}
			else{
				HX_STACK_LINE(344)
				tmp15 = false;
			}
			HX_STACK_LINE(344)
			if ((tmp15)){
				HX_STACK_LINE(344)
				::openfl::_legacy::geom::Rectangle tmp16 = this->rect;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(344)
				Float tmp17 = point->x;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(344)
				Float tmp18 = point->y;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(344)
				int tmp19 = w;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(344)
				int tmp20 = h;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(344)
				tmp16->setTo(tmp17,tmp18,tmp19,tmp20);
				HX_STACK_LINE(344)
				::openfl::_legacy::geom::Rectangle tmp21 = this->rect;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(344)
				bmd1->fillRect(tmp21,(int)0);
			}
			else{
				HX_STACK_LINE(344)
				bool tmp16 = (bmd1 == null());		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(344)
				if ((tmp16)){
					HX_STACK_LINE(344)
					::openfl::_legacy::display::BitmapData tmp17 = ::openfl::_legacy::display::BitmapData_obj::__new(w,h,true,(int)0,null());		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(344)
					bmd1 = tmp17;
				}
			}
			HX_STACK_LINE(344)
			tmp4 = bmd1;
		}
		HX_STACK_LINE(344)
		bmd = tmp4;
		HX_STACK_LINE(346)
		int tmp5 = this->type;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(346)
		bool tmp6 = (tmp5 == (int)2);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(346)
		if ((tmp6)){
			HX_STACK_LINE(348)
			::openfl::_legacy::display::BitmapData tmp7 = bmd;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(348)
			return tmp7;
		}
		HX_STACK_LINE(351)
		bool tmp7 = flipX;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(351)
		bool tmp8 = this->flipX;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(351)
		bool tmp9 = (tmp7 != tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(351)
		bool doFlipX = tmp9;		HX_STACK_VAR(doFlipX,"doFlipX");
		HX_STACK_LINE(352)
		bool tmp10 = flipY;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(352)
		bool tmp11 = this->flipY;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(352)
		bool tmp12 = (tmp10 != tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(352)
		bool doFlipY = tmp12;		HX_STACK_VAR(doFlipY,"doFlipY");
		HX_STACK_LINE(354)
		::flixel::math::FlxMatrix tmp13 = this->matrix;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(354)
		int tmp14 = rotation;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(354)
		bool tmp15 = doFlipX;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(354)
		bool tmp16 = doFlipY;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(354)
		this->prepareTransformedBlitMatrix(tmp13,tmp14,tmp15,tmp16);
		HX_STACK_LINE(355)
		::flixel::math::FlxMatrix tmp17 = this->matrix;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(355)
		Float tmp18 = point->x;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(355)
		Float tmp19 = point->y;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(355)
		tmp17->translate(tmp18,tmp19);
		HX_STACK_LINE(356)
		::openfl::_legacy::geom::Rectangle tmp20;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(356)
		{
			HX_STACK_LINE(356)
			::flixel::math::FlxMatrix tmp21 = this->matrix;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(356)
			::flixel::math::FlxMatrix mat = tmp21;		HX_STACK_VAR(mat,"mat");
			HX_STACK_LINE(356)
			::flixel::math::FlxPoint tmp22;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(356)
			{
				HX_STACK_LINE(356)
				::flixel::math::FlxPoint tmp23;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(356)
				{
					HX_STACK_LINE(356)
					::flixel::util::FlxPool_flixel_math_FlxPoint tmp24 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(356)
					::flixel::math::FlxPoint tmp25 = tmp24->get();		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(356)
					::flixel::math::FlxRect tmp26 = this->frame;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(356)
					Float tmp27 = tmp26->x;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(356)
					::flixel::math::FlxRect tmp28 = this->frame;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(356)
					Float tmp29 = tmp28->y;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(356)
					::flixel::math::FlxPoint tmp30 = tmp25->set(tmp27,tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(356)
					::flixel::math::FlxPoint point1 = tmp30;		HX_STACK_VAR(point1,"point1");
					HX_STACK_LINE(356)
					point1->_inPool = false;
					HX_STACK_LINE(356)
					tmp23 = point1;
				}
				HX_STACK_LINE(356)
				::flixel::math::FlxPoint point1 = tmp23;		HX_STACK_VAR(point1,"point1");
				HX_STACK_LINE(356)
				point1->_weak = true;
				HX_STACK_LINE(356)
				tmp22 = point1;
			}
			HX_STACK_LINE(356)
			::flixel::math::FlxPoint p1 = tmp22;		HX_STACK_VAR(p1,"p1");
			HX_STACK_LINE(356)
			::flixel::math::FlxPoint tmp23;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(356)
			{
				HX_STACK_LINE(356)
				::flixel::math::FlxPoint tmp24;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(356)
				{
					HX_STACK_LINE(356)
					::flixel::util::FlxPool_flixel_math_FlxPoint tmp25 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(356)
					::flixel::math::FlxPoint tmp26 = tmp25->get();		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(356)
					Float tmp27;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(356)
					{
						HX_STACK_LINE(356)
						::flixel::math::FlxRect tmp28 = this->frame;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(356)
						::flixel::math::FlxRect _this = tmp28;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(356)
						tmp27 = (_this->x + _this->width);
					}
					HX_STACK_LINE(356)
					Float tmp28;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(356)
					{
						HX_STACK_LINE(356)
						::flixel::math::FlxRect tmp29 = this->frame;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(356)
						::flixel::math::FlxRect _this = tmp29;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(356)
						tmp28 = (_this->y + _this->height);
					}
					HX_STACK_LINE(356)
					::flixel::math::FlxPoint tmp29 = tmp26->set(tmp27,tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(356)
					::flixel::math::FlxPoint point1 = tmp29;		HX_STACK_VAR(point1,"point1");
					HX_STACK_LINE(356)
					point1->_inPool = false;
					HX_STACK_LINE(356)
					tmp24 = point1;
				}
				HX_STACK_LINE(356)
				::flixel::math::FlxPoint point1 = tmp24;		HX_STACK_VAR(point1,"point1");
				HX_STACK_LINE(356)
				point1->_weak = true;
				HX_STACK_LINE(356)
				tmp23 = point1;
			}
			HX_STACK_LINE(356)
			::flixel::math::FlxPoint p2 = tmp23;		HX_STACK_VAR(p2,"p2");
			HX_STACK_LINE(356)
			{
				HX_STACK_LINE(356)
				Float tmp24 = (p1->x * mat->a);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(356)
				Float tmp25 = (p1->y * mat->c);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(356)
				Float tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(356)
				Float tmp27 = mat->tx;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(356)
				Float tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(356)
				Float x1 = tmp28;		HX_STACK_VAR(x1,"x1");
				HX_STACK_LINE(356)
				Float tmp29 = (p1->x * mat->b);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(356)
				Float tmp30 = (p1->y * mat->d);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(356)
				Float tmp31 = (tmp29 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(356)
				Float tmp32 = mat->ty;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(356)
				Float tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(356)
				Float y1 = tmp33;		HX_STACK_VAR(y1,"y1");
				HX_STACK_LINE(356)
				Float tmp34 = x1;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(356)
				Float tmp35 = y1;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(356)
				p1->set(tmp34,tmp35);
			}
			HX_STACK_LINE(356)
			{
				HX_STACK_LINE(356)
				Float tmp24 = (p2->x * mat->a);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(356)
				Float tmp25 = (p2->y * mat->c);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(356)
				Float tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(356)
				Float tmp27 = mat->tx;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(356)
				Float tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(356)
				Float x1 = tmp28;		HX_STACK_VAR(x1,"x1");
				HX_STACK_LINE(356)
				Float tmp29 = (p2->x * mat->b);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(356)
				Float tmp30 = (p2->y * mat->d);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(356)
				Float tmp31 = (tmp29 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(356)
				Float tmp32 = mat->ty;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(356)
				Float tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(356)
				Float y1 = tmp33;		HX_STACK_VAR(y1,"y1");
				HX_STACK_LINE(356)
				Float tmp34 = x1;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(356)
				Float tmp35 = y1;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(356)
				p2->set(tmp34,tmp35);
			}
			HX_STACK_LINE(356)
			::flixel::math::FlxRect tmp24;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(356)
			{
				HX_STACK_LINE(356)
				::flixel::math::FlxRect tmp25;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(356)
				{
					HX_STACK_LINE(356)
					Float X = (int)0;		HX_STACK_VAR(X,"X");
					HX_STACK_LINE(356)
					Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
					HX_STACK_LINE(356)
					Float Width = (int)0;		HX_STACK_VAR(Width,"Width");
					HX_STACK_LINE(356)
					Float Height = (int)0;		HX_STACK_VAR(Height,"Height");
					HX_STACK_LINE(356)
					::flixel::math::FlxRect tmp26;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(356)
					{
						HX_STACK_LINE(356)
						::flixel::util::FlxPool_flixel_math_FlxRect tmp27 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(356)
						::flixel::math::FlxRect tmp28 = tmp27->get();		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(356)
						::flixel::math::FlxRect _this = tmp28;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(356)
						_this->x = X;
						HX_STACK_LINE(356)
						_this->y = Y;
						HX_STACK_LINE(356)
						_this->width = Width;
						HX_STACK_LINE(356)
						_this->height = Height;
						HX_STACK_LINE(356)
						tmp26 = _this;
					}
					HX_STACK_LINE(356)
					::flixel::math::FlxRect rect = tmp26;		HX_STACK_VAR(rect,"rect");
					HX_STACK_LINE(356)
					rect->_inPool = false;
					HX_STACK_LINE(356)
					tmp25 = rect;
				}
				HX_STACK_LINE(356)
				::flixel::math::FlxRect _this = tmp25;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(356)
				Float tmp26 = p1->x;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(356)
				Float tmp27 = p2->x;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(356)
				Float tmp28 = ::Math_obj::min(tmp26,tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(356)
				Float minX = tmp28;		HX_STACK_VAR(minX,"minX");
				HX_STACK_LINE(356)
				Float tmp29 = p1->y;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(356)
				Float tmp30 = p2->y;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(356)
				Float tmp31 = ::Math_obj::min(tmp29,tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(356)
				Float minY = tmp31;		HX_STACK_VAR(minY,"minY");
				HX_STACK_LINE(356)
				Float tmp32 = p1->x;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(356)
				Float tmp33 = p2->x;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(356)
				Float tmp34 = ::Math_obj::max(tmp32,tmp33);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(356)
				Float maxX = tmp34;		HX_STACK_VAR(maxX,"maxX");
				HX_STACK_LINE(356)
				Float tmp35 = p1->y;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(356)
				Float tmp36 = p2->y;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(356)
				Float tmp37 = ::Math_obj::max(tmp35,tmp36);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(356)
				Float maxY = tmp37;		HX_STACK_VAR(maxY,"maxY");
				HX_STACK_LINE(356)
				{
					HX_STACK_LINE(356)
					bool tmp38 = p1->_weak;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(356)
					if ((tmp38)){
						HX_STACK_LINE(356)
						p1->put();
					}
				}
				HX_STACK_LINE(356)
				{
					HX_STACK_LINE(356)
					bool tmp38 = p2->_weak;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(356)
					if ((tmp38)){
						HX_STACK_LINE(356)
						p2->put();
					}
				}
				HX_STACK_LINE(356)
				{
					HX_STACK_LINE(356)
					_this->x = minX;
					HX_STACK_LINE(356)
					_this->y = minY;
					HX_STACK_LINE(356)
					Float tmp38 = (maxX - minX);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(356)
					_this->width = tmp38;
					HX_STACK_LINE(356)
					Float tmp39 = (maxY - minY);		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(356)
					_this->height = tmp39;
					HX_STACK_LINE(356)
					tmp24 = _this;
				}
			}
			HX_STACK_LINE(356)
			::flixel::math::FlxRect flxRect = tmp24;		HX_STACK_VAR(flxRect,"flxRect");
			HX_STACK_LINE(356)
			{
				HX_STACK_LINE(356)
				::openfl::_legacy::geom::Rectangle tmp25 = this->rect;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(356)
				::openfl::_legacy::geom::Rectangle FlashRect = tmp25;		HX_STACK_VAR(FlashRect,"FlashRect");
				HX_STACK_LINE(356)
				bool tmp26 = (FlashRect == null());		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(356)
				if ((tmp26)){
					HX_STACK_LINE(356)
					::openfl::_legacy::geom::Rectangle tmp27 = ::openfl::_legacy::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(356)
					FlashRect = tmp27;
				}
				HX_STACK_LINE(356)
				FlashRect->x = flxRect->x;
				HX_STACK_LINE(356)
				FlashRect->y = flxRect->y;
				HX_STACK_LINE(356)
				FlashRect->width = flxRect->width;
				HX_STACK_LINE(356)
				FlashRect->height = flxRect->height;
				HX_STACK_LINE(356)
				FlashRect;
			}
			HX_STACK_LINE(356)
			{
				HX_STACK_LINE(356)
				bool tmp25 = flxRect->_inPool;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(356)
				bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(356)
				if ((tmp26)){
					HX_STACK_LINE(356)
					flxRect->_inPool = true;
					HX_STACK_LINE(356)
					flxRect->_weak = false;
					HX_STACK_LINE(356)
					::flixel::util::FlxPool_flixel_math_FlxRect tmp27 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(356)
					::flixel::math::FlxRect tmp28 = flxRect;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(356)
					tmp27->putUnsafe(tmp28);
				}
			}
			HX_STACK_LINE(356)
			tmp20 = this->rect;
		}
		HX_STACK_LINE(356)
		::openfl::_legacy::geom::Rectangle rect = tmp20;		HX_STACK_VAR(rect,"rect");
		HX_STACK_LINE(357)
		::flixel::graphics::FlxGraphic tmp21 = this->parent;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(357)
		::openfl::_legacy::display::BitmapData tmp22 = tmp21->bitmap;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(357)
		::flixel::math::FlxMatrix tmp23 = this->matrix;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(357)
		::openfl::_legacy::geom::Rectangle tmp24 = rect;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(357)
		bmd->draw(tmp22,tmp23,null(),null(),tmp24,null());
		HX_STACK_LINE(358)
		::openfl::_legacy::display::BitmapData tmp25 = bmd;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(358)
		return tmp25;
	}
}


HX_DEFINE_DYNAMIC_FUNC7(FlxFrame_obj,paintRotatedAndFlipped,return )

::openfl::_legacy::display::BitmapData FlxFrame_obj::checkInputBitmap( ::openfl::_legacy::display::BitmapData bmd,::openfl::_legacy::geom::Point point,hx::Null< int >  __o_rotation,hx::Null< bool >  __o_mergeAlpha,hx::Null< bool >  __o_disposeIfNotEqual){
int rotation = __o_rotation.Default(0);
bool mergeAlpha = __o_mergeAlpha.Default(false);
bool disposeIfNotEqual = __o_disposeIfNotEqual.Default(false);
	HX_STACK_FRAME("flixel.graphics.frames.FlxFrame","checkInputBitmap",0x11e1b8ad,"flixel.graphics.frames.FlxFrame.checkInputBitmap","flixel/graphics/frames/FlxFrame.hx",372,0x6c7f608b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bmd,"bmd")
	HX_STACK_ARG(point,"point")
	HX_STACK_ARG(rotation,"rotation")
	HX_STACK_ARG(mergeAlpha,"mergeAlpha")
	HX_STACK_ARG(disposeIfNotEqual,"disposeIfNotEqual")
{
		HX_STACK_LINE(373)
		::flixel::math::FlxPoint tmp = this->sourceSize;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(373)
		Float tmp1 = tmp->x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(373)
		int tmp2 = ::Std_obj::_int(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(373)
		int w = tmp2;		HX_STACK_VAR(w,"w");
		HX_STACK_LINE(374)
		::flixel::math::FlxPoint tmp3 = this->sourceSize;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(374)
		Float tmp4 = tmp3->y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(374)
		int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(374)
		int h = tmp5;		HX_STACK_VAR(h,"h");
		HX_STACK_LINE(376)
		bool tmp6 = (rotation != (int)0);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(376)
		if ((tmp6)){
			HX_STACK_LINE(378)
			int t = w;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(379)
			w = h;
			HX_STACK_LINE(380)
			h = t;
		}
		HX_STACK_LINE(383)
		bool tmp7 = (bmd != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(383)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(383)
		if ((tmp7)){
			HX_STACK_LINE(383)
			tmp8 = disposeIfNotEqual;
		}
		else{
			HX_STACK_LINE(383)
			tmp8 = false;
		}
		HX_STACK_LINE(383)
		if ((tmp8)){
			HX_STACK_LINE(385)
			::openfl::_legacy::display::BitmapData tmp9 = bmd;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(385)
			int tmp10 = w;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(385)
			int tmp11 = h;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(385)
			::openfl::_legacy::display::BitmapData tmp12 = ::flixel::util::FlxDestroyUtil_obj::disposeIfNotEqual(tmp9,tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(385)
			bmd = tmp12;
		}
		HX_STACK_LINE(388)
		bool tmp9 = (bmd != null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(388)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(388)
		if ((tmp9)){
			HX_STACK_LINE(388)
			bool tmp11 = mergeAlpha;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(388)
			bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(388)
			tmp10 = !(tmp12);
		}
		else{
			HX_STACK_LINE(388)
			tmp10 = false;
		}
		HX_STACK_LINE(388)
		if ((tmp10)){
			HX_STACK_LINE(390)
			::openfl::_legacy::geom::Rectangle tmp11 = this->rect;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(390)
			Float tmp12 = point->x;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(390)
			Float tmp13 = point->y;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(390)
			int tmp14 = w;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(390)
			int tmp15 = h;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(390)
			tmp11->setTo(tmp12,tmp13,tmp14,tmp15);
			HX_STACK_LINE(391)
			::openfl::_legacy::geom::Rectangle tmp16 = this->rect;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(391)
			bmd->fillRect(tmp16,(int)0);
		}
		else{
			HX_STACK_LINE(393)
			bool tmp11 = (bmd == null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(393)
			if ((tmp11)){
				HX_STACK_LINE(395)
				::openfl::_legacy::display::BitmapData tmp12 = ::openfl::_legacy::display::BitmapData_obj::__new(w,h,true,(int)0,null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(395)
				bmd = tmp12;
			}
		}
		HX_STACK_LINE(398)
		::openfl::_legacy::display::BitmapData tmp11 = bmd;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(398)
		return tmp11;
	}
}


HX_DEFINE_DYNAMIC_FUNC5(FlxFrame_obj,checkInputBitmap,return )

::openfl::_legacy::geom::Rectangle FlxFrame_obj::getDrawFrameRect( ::flixel::math::FlxMatrix mat){
	HX_STACK_FRAME("flixel.graphics.frames.FlxFrame","getDrawFrameRect",0x7930f1d3,"flixel.graphics.frames.FlxFrame.getDrawFrameRect","flixel/graphics/frames/FlxFrame.hx",409,0x6c7f608b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(mat,"mat")
	HX_STACK_LINE(410)
	::flixel::math::FlxPoint tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(410)
	{
		HX_STACK_LINE(410)
		::flixel::math::FlxPoint tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(410)
		{
			HX_STACK_LINE(410)
			::flixel::util::FlxPool_flixel_math_FlxPoint tmp2 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(410)
			::flixel::math::FlxPoint tmp3 = tmp2->get();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(410)
			::flixel::math::FlxRect tmp4 = this->frame;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(410)
			Float tmp5 = tmp4->x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(410)
			::flixel::math::FlxRect tmp6 = this->frame;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(410)
			Float tmp7 = tmp6->y;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(410)
			::flixel::math::FlxPoint tmp8 = tmp3->set(tmp5,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(410)
			::flixel::math::FlxPoint point = tmp8;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(410)
			point->_inPool = false;
			HX_STACK_LINE(410)
			tmp1 = point;
		}
		HX_STACK_LINE(410)
		::flixel::math::FlxPoint point = tmp1;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(410)
		point->_weak = true;
		HX_STACK_LINE(410)
		tmp = point;
	}
	HX_STACK_LINE(410)
	::flixel::math::FlxPoint p1 = tmp;		HX_STACK_VAR(p1,"p1");
	HX_STACK_LINE(411)
	::flixel::math::FlxPoint tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(411)
	{
		HX_STACK_LINE(411)
		::flixel::math::FlxPoint tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(411)
		{
			HX_STACK_LINE(411)
			::flixel::util::FlxPool_flixel_math_FlxPoint tmp3 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(411)
			::flixel::math::FlxPoint tmp4 = tmp3->get();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(411)
			Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(411)
			{
				HX_STACK_LINE(411)
				::flixel::math::FlxRect tmp6 = this->frame;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(411)
				::flixel::math::FlxRect _this = tmp6;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(411)
				tmp5 = (_this->x + _this->width);
			}
			HX_STACK_LINE(411)
			Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(411)
			{
				HX_STACK_LINE(411)
				::flixel::math::FlxRect tmp7 = this->frame;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(411)
				::flixel::math::FlxRect _this = tmp7;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(411)
				tmp6 = (_this->y + _this->height);
			}
			HX_STACK_LINE(411)
			::flixel::math::FlxPoint tmp7 = tmp4->set(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(411)
			::flixel::math::FlxPoint point = tmp7;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(411)
			point->_inPool = false;
			HX_STACK_LINE(411)
			tmp2 = point;
		}
		HX_STACK_LINE(411)
		::flixel::math::FlxPoint point = tmp2;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(411)
		point->_weak = true;
		HX_STACK_LINE(411)
		tmp1 = point;
	}
	HX_STACK_LINE(411)
	::flixel::math::FlxPoint p2 = tmp1;		HX_STACK_VAR(p2,"p2");
	HX_STACK_LINE(413)
	{
		HX_STACK_LINE(413)
		Float tmp2 = (p1->x * mat->a);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(413)
		Float tmp3 = (p1->y * mat->c);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(413)
		Float tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(413)
		Float tmp5 = mat->tx;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(413)
		Float tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(413)
		Float x1 = tmp6;		HX_STACK_VAR(x1,"x1");
		HX_STACK_LINE(413)
		Float tmp7 = (p1->x * mat->b);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(413)
		Float tmp8 = (p1->y * mat->d);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(413)
		Float tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(413)
		Float tmp10 = mat->ty;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(413)
		Float tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(413)
		Float y1 = tmp11;		HX_STACK_VAR(y1,"y1");
		HX_STACK_LINE(413)
		Float tmp12 = x1;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(413)
		Float tmp13 = y1;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(413)
		p1->set(tmp12,tmp13);
	}
	HX_STACK_LINE(414)
	{
		HX_STACK_LINE(414)
		Float tmp2 = (p2->x * mat->a);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(414)
		Float tmp3 = (p2->y * mat->c);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(414)
		Float tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(414)
		Float tmp5 = mat->tx;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(414)
		Float tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(414)
		Float x1 = tmp6;		HX_STACK_VAR(x1,"x1");
		HX_STACK_LINE(414)
		Float tmp7 = (p2->x * mat->b);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(414)
		Float tmp8 = (p2->y * mat->d);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(414)
		Float tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(414)
		Float tmp10 = mat->ty;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(414)
		Float tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(414)
		Float y1 = tmp11;		HX_STACK_VAR(y1,"y1");
		HX_STACK_LINE(414)
		Float tmp12 = x1;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(414)
		Float tmp13 = y1;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(414)
		p2->set(tmp12,tmp13);
	}
	HX_STACK_LINE(416)
	::flixel::math::FlxRect tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(416)
	{
		HX_STACK_LINE(416)
		::flixel::math::FlxRect tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(416)
		{
			HX_STACK_LINE(416)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(416)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(416)
			Float Width = (int)0;		HX_STACK_VAR(Width,"Width");
			HX_STACK_LINE(416)
			Float Height = (int)0;		HX_STACK_VAR(Height,"Height");
			HX_STACK_LINE(416)
			::flixel::math::FlxRect tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(416)
			{
				HX_STACK_LINE(416)
				::flixel::util::FlxPool_flixel_math_FlxRect tmp5 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(416)
				::flixel::math::FlxRect tmp6 = tmp5->get();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(416)
				::flixel::math::FlxRect _this = tmp6;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(416)
				_this->x = X;
				HX_STACK_LINE(416)
				_this->y = Y;
				HX_STACK_LINE(416)
				_this->width = Width;
				HX_STACK_LINE(416)
				_this->height = Height;
				HX_STACK_LINE(416)
				tmp4 = _this;
			}
			HX_STACK_LINE(416)
			::flixel::math::FlxRect rect = tmp4;		HX_STACK_VAR(rect,"rect");
			HX_STACK_LINE(416)
			rect->_inPool = false;
			HX_STACK_LINE(416)
			tmp3 = rect;
		}
		HX_STACK_LINE(416)
		::flixel::math::FlxRect _this = tmp3;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(416)
		Float tmp4 = p1->x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(416)
		Float tmp5 = p2->x;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(416)
		Float tmp6 = ::Math_obj::min(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(416)
		Float minX = tmp6;		HX_STACK_VAR(minX,"minX");
		HX_STACK_LINE(416)
		Float tmp7 = p1->y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(416)
		Float tmp8 = p2->y;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(416)
		Float tmp9 = ::Math_obj::min(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(416)
		Float minY = tmp9;		HX_STACK_VAR(minY,"minY");
		HX_STACK_LINE(416)
		Float tmp10 = p1->x;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(416)
		Float tmp11 = p2->x;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(416)
		Float tmp12 = ::Math_obj::max(tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(416)
		Float maxX = tmp12;		HX_STACK_VAR(maxX,"maxX");
		HX_STACK_LINE(416)
		Float tmp13 = p1->y;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(416)
		Float tmp14 = p2->y;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(416)
		Float tmp15 = ::Math_obj::max(tmp13,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(416)
		Float maxY = tmp15;		HX_STACK_VAR(maxY,"maxY");
		HX_STACK_LINE(416)
		{
			HX_STACK_LINE(416)
			bool tmp16 = p1->_weak;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(416)
			if ((tmp16)){
				HX_STACK_LINE(416)
				p1->put();
			}
		}
		HX_STACK_LINE(416)
		{
			HX_STACK_LINE(416)
			bool tmp16 = p2->_weak;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(416)
			if ((tmp16)){
				HX_STACK_LINE(416)
				p2->put();
			}
		}
		HX_STACK_LINE(416)
		{
			HX_STACK_LINE(416)
			_this->x = minX;
			HX_STACK_LINE(416)
			_this->y = minY;
			HX_STACK_LINE(416)
			Float tmp16 = (maxX - minX);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(416)
			_this->width = tmp16;
			HX_STACK_LINE(416)
			Float tmp17 = (maxY - minY);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(416)
			_this->height = tmp17;
			HX_STACK_LINE(416)
			tmp2 = _this;
		}
	}
	HX_STACK_LINE(416)
	::flixel::math::FlxRect flxRect = tmp2;		HX_STACK_VAR(flxRect,"flxRect");
	HX_STACK_LINE(417)
	{
		HX_STACK_LINE(417)
		::openfl::_legacy::geom::Rectangle tmp3 = this->rect;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(417)
		::openfl::_legacy::geom::Rectangle FlashRect = tmp3;		HX_STACK_VAR(FlashRect,"FlashRect");
		HX_STACK_LINE(417)
		bool tmp4 = (FlashRect == null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(417)
		if ((tmp4)){
			HX_STACK_LINE(417)
			::openfl::_legacy::geom::Rectangle tmp5 = ::openfl::_legacy::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(417)
			FlashRect = tmp5;
		}
		HX_STACK_LINE(417)
		FlashRect->x = flxRect->x;
		HX_STACK_LINE(417)
		FlashRect->y = flxRect->y;
		HX_STACK_LINE(417)
		FlashRect->width = flxRect->width;
		HX_STACK_LINE(417)
		FlashRect->height = flxRect->height;
		HX_STACK_LINE(417)
		FlashRect;
	}
	HX_STACK_LINE(418)
	{
		HX_STACK_LINE(418)
		bool tmp3 = flxRect->_inPool;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(418)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(418)
		if ((tmp4)){
			HX_STACK_LINE(418)
			flxRect->_inPool = true;
			HX_STACK_LINE(418)
			flxRect->_weak = false;
			HX_STACK_LINE(418)
			::flixel::util::FlxPool_flixel_math_FlxRect tmp5 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(418)
			::flixel::math::FlxRect tmp6 = flxRect;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(418)
			tmp5->putUnsafe(tmp6);
		}
	}
	HX_STACK_LINE(419)
	::openfl::_legacy::geom::Rectangle tmp3 = this->rect;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(419)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxFrame_obj,getDrawFrameRect,return )

::flixel::graphics::frames::FlxFrame FlxFrame_obj::subFrameTo( ::flixel::math::FlxRect rect,::flixel::graphics::frames::FlxFrame frameToFill){
	HX_STACK_FRAME("flixel.graphics.frames.FlxFrame","subFrameTo",0x37199964,"flixel.graphics.frames.FlxFrame.subFrameTo","flixel/graphics/frames/FlxFrame.hx",430,0x6c7f608b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rect,"rect")
	HX_STACK_ARG(frameToFill,"frameToFill")
	HX_STACK_LINE(431)
	bool tmp = (frameToFill == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(431)
	if ((tmp)){
		HX_STACK_LINE(433)
		::flixel::graphics::FlxGraphic tmp1 = this->parent;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(433)
		int tmp2 = this->angle;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(433)
		::flixel::graphics::frames::FlxFrame tmp3 = ::flixel::graphics::frames::FlxFrame_obj::__new(tmp1,tmp2,null(),null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(433)
		frameToFill = tmp3;
	}
	else{
		HX_STACK_LINE(437)
		::flixel::graphics::FlxGraphic tmp1 = this->parent;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(437)
		frameToFill->parent = tmp1;
		HX_STACK_LINE(438)
		int tmp2 = this->angle;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(438)
		frameToFill->angle = tmp2;
		HX_STACK_LINE(439)
		::flixel::math::FlxRect tmp3 = frameToFill->frame;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(439)
		::flixel::math::FlxRect tmp4 = ::flixel::util::FlxDestroyUtil_obj::put(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(439)
		frameToFill->set_frame(tmp4);
	}
	HX_STACK_LINE(442)
	Float tmp1 = rect->width;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(442)
	Float tmp2 = rect->height;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(442)
	frameToFill->sourceSize->set(tmp1,tmp2);
	HX_STACK_LINE(445)
	int tmp3 = this->type;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(445)
	bool tmp4 = (tmp3 == (int)2);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(445)
	if ((tmp4)){
		HX_STACK_LINE(447)
		frameToFill->type = (int)2;
		HX_STACK_LINE(448)
		frameToFill->offset->set((int)0,(int)0);
		HX_STACK_LINE(449)
		::flixel::graphics::frames::FlxFrame tmp5 = frameToFill;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(449)
		return tmp5;
	}
	HX_STACK_LINE(452)
	::flixel::math::FlxRect tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(452)
	{
		HX_STACK_LINE(452)
		::flixel::math::FlxRect tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(452)
		{
			HX_STACK_LINE(452)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(452)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(452)
			Float Width = (int)0;		HX_STACK_VAR(Width,"Width");
			HX_STACK_LINE(452)
			Float Height = (int)0;		HX_STACK_VAR(Height,"Height");
			HX_STACK_LINE(452)
			::flixel::math::FlxRect tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(452)
			{
				HX_STACK_LINE(452)
				::flixel::util::FlxPool_flixel_math_FlxRect tmp8 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(452)
				::flixel::math::FlxRect tmp9 = tmp8->get();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(452)
				::flixel::math::FlxRect _this = tmp9;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(452)
				_this->x = X;
				HX_STACK_LINE(452)
				_this->y = Y;
				HX_STACK_LINE(452)
				_this->width = Width;
				HX_STACK_LINE(452)
				_this->height = Height;
				HX_STACK_LINE(452)
				tmp7 = _this;
			}
			HX_STACK_LINE(452)
			::flixel::math::FlxRect rect1 = tmp7;		HX_STACK_VAR(rect1,"rect1");
			HX_STACK_LINE(452)
			rect1->_inPool = false;
			HX_STACK_LINE(452)
			tmp6 = rect1;
		}
		HX_STACK_LINE(452)
		::flixel::math::FlxRect _this = tmp6;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(452)
		::flixel::math::FlxRect tmp7 = this->frame;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(452)
		_this->width = tmp7->width;
		HX_STACK_LINE(452)
		::flixel::math::FlxRect tmp8 = this->frame;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(452)
		_this->height = tmp8->height;
		HX_STACK_LINE(452)
		tmp5 = _this;
	}
	HX_STACK_LINE(452)
	::flixel::math::FlxRect clippedRect = tmp5;		HX_STACK_VAR(clippedRect,"clippedRect");
	HX_STACK_LINE(453)
	int tmp6 = this->angle;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(453)
	bool tmp7 = (tmp6 != (int)0);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(453)
	if ((tmp7)){
		HX_STACK_LINE(455)
		::flixel::math::FlxRect tmp8 = this->frame;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(455)
		clippedRect->width = tmp8->height;
		HX_STACK_LINE(456)
		::flixel::math::FlxRect tmp9 = this->frame;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(456)
		clippedRect->height = tmp9->width;
	}
	HX_STACK_LINE(459)
	::flixel::math::FlxPoint tmp8 = this->offset;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(459)
	Float tmp9 = tmp8->x;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(459)
	Float tmp10 = ::Math_obj::max(tmp9,(int)0);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(459)
	Float ox = tmp10;		HX_STACK_VAR(ox,"ox");
	HX_STACK_LINE(460)
	::flixel::math::FlxPoint tmp11 = this->offset;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(460)
	Float tmp12 = tmp11->y;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(460)
	Float tmp13 = ::Math_obj::max(tmp12,(int)0);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(460)
	Float oy = tmp13;		HX_STACK_VAR(oy,"oy");
	HX_STACK_LINE(462)
	{
		HX_STACK_LINE(462)
		Float tmp14 = ox;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(462)
		Float tmp15 = -(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(462)
		hx::AddEq(rect->x,tmp15);
		HX_STACK_LINE(462)
		Float tmp16 = oy;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(462)
		Float tmp17 = -(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(462)
		hx::AddEq(rect->y,tmp17);
		HX_STACK_LINE(462)
		rect;
	}
	HX_STACK_LINE(463)
	::flixel::math::FlxRect tmp14 = rect;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(463)
	::flixel::math::FlxRect tmp15 = clippedRect->intersection(tmp14,null());		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(463)
	::flixel::math::FlxRect frameRect = tmp15;		HX_STACK_VAR(frameRect,"frameRect");
	HX_STACK_LINE(464)
	::flixel::math::FlxRect tmp16 = clippedRect;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(464)
	::flixel::math::FlxRect tmp17 = ::flixel::util::FlxDestroyUtil_obj::put(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(464)
	clippedRect = tmp17;
	HX_STACK_LINE(465)
	{
		HX_STACK_LINE(465)
		hx::AddEq(rect->x,ox);
		HX_STACK_LINE(465)
		hx::AddEq(rect->y,oy);
		HX_STACK_LINE(465)
		rect;
	}
	HX_STACK_LINE(467)
	bool tmp18 = (frameRect->width == (int)0);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(467)
	bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(467)
	bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(467)
	if ((tmp19)){
		HX_STACK_LINE(467)
		tmp20 = (frameRect->height == (int)0);
	}
	else{
		HX_STACK_LINE(467)
		tmp20 = true;
	}
	HX_STACK_LINE(467)
	if ((tmp20)){
		HX_STACK_LINE(469)
		frameToFill->type = (int)2;
		HX_STACK_LINE(470)
		{
			HX_STACK_LINE(470)
			frameRect->x = (int)0;
			HX_STACK_LINE(470)
			frameRect->y = (int)0;
			HX_STACK_LINE(470)
			frameRect->width = (int)0;
			HX_STACK_LINE(470)
			frameRect->height = (int)0;
			HX_STACK_LINE(470)
			frameRect;
		}
		HX_STACK_LINE(471)
		::flixel::math::FlxRect tmp21 = frameRect;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(471)
		frameToFill->set_frame(tmp21);
		HX_STACK_LINE(472)
		frameToFill->offset->set((int)0,(int)0);
	}
	else{
		HX_STACK_LINE(476)
		frameToFill->type = (int)0;
		HX_STACK_LINE(477)
		::flixel::math::FlxPoint tmp21;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(477)
		{
			HX_STACK_LINE(477)
			Float tmp22 = frameRect->x;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(477)
			Float tmp23 = frameRect->y;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(477)
			::flixel::math::FlxPoint tmp24 = frameToFill->offset->set(tmp22,tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(477)
			::flixel::math::FlxPoint _this = tmp24;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(477)
			{
				HX_STACK_LINE(477)
				::flixel::math::FlxPoint _g = _this;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(477)
				Float tmp25 = (_g->x - rect->x);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(477)
				_g->set_x(tmp25);
			}
			HX_STACK_LINE(477)
			{
				HX_STACK_LINE(477)
				::flixel::math::FlxPoint _g = _this;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(477)
				Float tmp25 = (_g->y - rect->y);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(477)
				_g->set_y(tmp25);
			}
			HX_STACK_LINE(477)
			tmp21 = _this;
		}
		HX_STACK_LINE(477)
		::flixel::math::FlxPoint tmp22 = this->offset;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(477)
		tmp21->addPoint(tmp22);
		HX_STACK_LINE(479)
		::flixel::math::FlxPoint tmp23;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(479)
		{
			HX_STACK_LINE(479)
			::flixel::math::FlxPoint tmp24;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(479)
			{
				HX_STACK_LINE(479)
				::flixel::util::FlxPool_flixel_math_FlxPoint tmp25 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(479)
				::flixel::math::FlxPoint tmp26 = tmp25->get();		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(479)
				Float tmp27 = frameRect->x;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(479)
				Float tmp28 = frameRect->y;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(479)
				::flixel::math::FlxPoint tmp29 = tmp26->set(tmp27,tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(479)
				::flixel::math::FlxPoint point = tmp29;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(479)
				point->_inPool = false;
				HX_STACK_LINE(479)
				tmp24 = point;
			}
			HX_STACK_LINE(479)
			::flixel::math::FlxPoint point = tmp24;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(479)
			point->_weak = true;
			HX_STACK_LINE(479)
			tmp23 = point;
		}
		HX_STACK_LINE(479)
		::flixel::math::FlxPoint p1 = tmp23;		HX_STACK_VAR(p1,"p1");
		HX_STACK_LINE(480)
		::flixel::math::FlxPoint tmp24;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(480)
		{
			HX_STACK_LINE(480)
			::flixel::math::FlxPoint tmp25;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(480)
			{
				HX_STACK_LINE(480)
				::flixel::util::FlxPool_flixel_math_FlxPoint tmp26 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(480)
				::flixel::math::FlxPoint tmp27 = tmp26->get();		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(480)
				Float tmp28 = (frameRect->x + frameRect->width);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(480)
				Float tmp29 = (frameRect->y + frameRect->height);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(480)
				::flixel::math::FlxPoint tmp30 = tmp27->set(tmp28,tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(480)
				::flixel::math::FlxPoint point = tmp30;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(480)
				point->_inPool = false;
				HX_STACK_LINE(480)
				tmp25 = point;
			}
			HX_STACK_LINE(480)
			::flixel::math::FlxPoint point = tmp25;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(480)
			point->_weak = true;
			HX_STACK_LINE(480)
			tmp24 = point;
		}
		HX_STACK_LINE(480)
		::flixel::math::FlxPoint p2 = tmp24;		HX_STACK_VAR(p2,"p2");
		HX_STACK_LINE(482)
		::flixel::math::FlxMatrix tmp25 = this->matrix;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(482)
		tmp25->identity();
		HX_STACK_LINE(484)
		int tmp26 = this->angle;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(484)
		bool tmp27 = (tmp26 == (int)-90);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(484)
		if ((tmp27)){
			HX_STACK_LINE(486)
			{
				HX_STACK_LINE(486)
				::flixel::math::FlxMatrix tmp28 = this->matrix;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(486)
				::flixel::math::FlxMatrix _this = tmp28;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(486)
				Float tmp29 = _this->b;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(486)
				Float tmp30 = -(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(486)
				Float tmp31 = _this->a;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(486)
				Float tmp32 = _this->d;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(486)
				Float tmp33 = -(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(486)
				Float tmp34 = _this->c;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(486)
				Float tmp35 = _this->ty;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(486)
				Float tmp36 = -(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(486)
				Float tmp37 = _this->tx;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(486)
				_this->setTo(tmp30,tmp31,tmp33,tmp34,tmp36,tmp37);
				HX_STACK_LINE(486)
				_this;
			}
			HX_STACK_LINE(487)
			::flixel::math::FlxMatrix tmp28 = this->matrix;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(487)
			::flixel::math::FlxRect tmp29 = this->frame;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(487)
			Float tmp30 = tmp29->width;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(487)
			tmp28->translate(tmp30,(int)0);
		}
		else{
			HX_STACK_LINE(489)
			int tmp28 = this->angle;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(489)
			bool tmp29 = (tmp28 == (int)90);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(489)
			if ((tmp29)){
				HX_STACK_LINE(491)
				{
					HX_STACK_LINE(491)
					::flixel::math::FlxMatrix tmp30 = this->matrix;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(491)
					::flixel::math::FlxMatrix _this = tmp30;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(491)
					Float tmp31 = _this->b;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(491)
					Float tmp32 = _this->a;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(491)
					Float tmp33 = -(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(491)
					Float tmp34 = _this->d;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(491)
					Float tmp35 = _this->c;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(491)
					Float tmp36 = -(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(491)
					Float tmp37 = _this->ty;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(491)
					Float tmp38 = _this->tx;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(491)
					Float tmp39 = -(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(491)
					_this->setTo(tmp31,tmp33,tmp34,tmp36,tmp37,tmp39);
					HX_STACK_LINE(491)
					_this;
				}
				HX_STACK_LINE(492)
				::flixel::math::FlxMatrix tmp30 = this->matrix;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(492)
				::flixel::math::FlxRect tmp31 = this->frame;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(492)
				Float tmp32 = tmp31->height;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(492)
				tmp30->translate((int)0,tmp32);
			}
		}
		HX_STACK_LINE(495)
		int tmp28 = this->angle;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(495)
		bool tmp29 = (tmp28 != (int)0);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(495)
		if ((tmp29)){
			HX_STACK_LINE(497)
			{
				HX_STACK_LINE(497)
				::flixel::math::FlxMatrix tmp30 = this->matrix;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(497)
				::openfl::_legacy::geom::Matrix matrix = tmp30;		HX_STACK_VAR(matrix,"matrix");
				HX_STACK_LINE(497)
				Float tmp31 = (p1->x * matrix->a);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(497)
				Float tmp32 = (p1->y * matrix->c);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(497)
				Float tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(497)
				Float tmp34 = matrix->tx;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(497)
				Float tmp35 = (tmp33 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(497)
				Float x1 = tmp35;		HX_STACK_VAR(x1,"x1");
				HX_STACK_LINE(497)
				Float tmp36 = (p1->x * matrix->b);		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(497)
				Float tmp37 = (p1->y * matrix->d);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(497)
				Float tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(497)
				Float tmp39 = matrix->ty;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(497)
				Float tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(497)
				Float y1 = tmp40;		HX_STACK_VAR(y1,"y1");
				HX_STACK_LINE(497)
				Float tmp41 = x1;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(497)
				Float tmp42 = y1;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(497)
				p1->set(tmp41,tmp42);
			}
			HX_STACK_LINE(498)
			{
				HX_STACK_LINE(498)
				::flixel::math::FlxMatrix tmp30 = this->matrix;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(498)
				::openfl::_legacy::geom::Matrix matrix = tmp30;		HX_STACK_VAR(matrix,"matrix");
				HX_STACK_LINE(498)
				Float tmp31 = (p2->x * matrix->a);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(498)
				Float tmp32 = (p2->y * matrix->c);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(498)
				Float tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(498)
				Float tmp34 = matrix->tx;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(498)
				Float tmp35 = (tmp33 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(498)
				Float x1 = tmp35;		HX_STACK_VAR(x1,"x1");
				HX_STACK_LINE(498)
				Float tmp36 = (p2->x * matrix->b);		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(498)
				Float tmp37 = (p2->y * matrix->d);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(498)
				Float tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(498)
				Float tmp39 = matrix->ty;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(498)
				Float tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(498)
				Float y1 = tmp40;		HX_STACK_VAR(y1,"y1");
				HX_STACK_LINE(498)
				Float tmp41 = x1;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(498)
				Float tmp42 = y1;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(498)
				p2->set(tmp41,tmp42);
			}
		}
		HX_STACK_LINE(501)
		{
			HX_STACK_LINE(501)
			Float tmp30 = p1->x;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(501)
			Float tmp31 = p2->x;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(501)
			Float tmp32 = ::Math_obj::min(tmp30,tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(501)
			Float minX = tmp32;		HX_STACK_VAR(minX,"minX");
			HX_STACK_LINE(501)
			Float tmp33 = p1->y;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(501)
			Float tmp34 = p2->y;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(501)
			Float tmp35 = ::Math_obj::min(tmp33,tmp34);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(501)
			Float minY = tmp35;		HX_STACK_VAR(minY,"minY");
			HX_STACK_LINE(501)
			Float tmp36 = p1->x;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(501)
			Float tmp37 = p2->x;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(501)
			Float tmp38 = ::Math_obj::max(tmp36,tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(501)
			Float maxX = tmp38;		HX_STACK_VAR(maxX,"maxX");
			HX_STACK_LINE(501)
			Float tmp39 = p1->y;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(501)
			Float tmp40 = p2->y;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(501)
			Float tmp41 = ::Math_obj::max(tmp39,tmp40);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(501)
			Float maxY = tmp41;		HX_STACK_VAR(maxY,"maxY");
			HX_STACK_LINE(501)
			{
				HX_STACK_LINE(501)
				bool tmp42 = p1->_weak;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(501)
				if ((tmp42)){
					HX_STACK_LINE(501)
					p1->put();
				}
			}
			HX_STACK_LINE(501)
			{
				HX_STACK_LINE(501)
				bool tmp42 = p2->_weak;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(501)
				if ((tmp42)){
					HX_STACK_LINE(501)
					p2->put();
				}
			}
			HX_STACK_LINE(501)
			{
				HX_STACK_LINE(501)
				frameRect->x = minX;
				HX_STACK_LINE(501)
				frameRect->y = minY;
				HX_STACK_LINE(501)
				Float tmp42 = (maxX - minX);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(501)
				frameRect->width = tmp42;
				HX_STACK_LINE(501)
				Float tmp43 = (maxY - minY);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(501)
				frameRect->height = tmp43;
				HX_STACK_LINE(501)
				frameRect;
			}
		}
		HX_STACK_LINE(502)
		{
			HX_STACK_LINE(502)
			::flixel::math::FlxRect tmp30 = this->frame;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(502)
			hx::AddEq(frameRect->x,tmp30->x);
			HX_STACK_LINE(502)
			::flixel::math::FlxRect tmp31 = this->frame;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(502)
			hx::AddEq(frameRect->y,tmp31->y);
			HX_STACK_LINE(502)
			frameRect;
		}
		HX_STACK_LINE(503)
		::flixel::math::FlxRect tmp30 = frameRect;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(503)
		frameToFill->set_frame(tmp30);
		HX_STACK_LINE(504)
		frameToFill->cacheFrameMatrix();
	}
	HX_STACK_LINE(507)
	::flixel::graphics::frames::FlxFrame tmp21 = frameToFill;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(507)
	return tmp21;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxFrame_obj,subFrameTo,return )

::flixel::graphics::frames::FlxFrame FlxFrame_obj::setBorderTo( ::flixel::math::FlxPoint border,::flixel::graphics::frames::FlxFrame frameToFill){
	HX_STACK_FRAME("flixel.graphics.frames.FlxFrame","setBorderTo",0x0ba0ebcd,"flixel.graphics.frames.FlxFrame.setBorderTo","flixel/graphics/frames/FlxFrame.hx",518,0x6c7f608b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(border,"border")
	HX_STACK_ARG(frameToFill,"frameToFill")
	HX_STACK_LINE(519)
	::flixel::math::FlxRect tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(519)
	{
		HX_STACK_LINE(519)
		::flixel::math::FlxRect tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(519)
		{
			HX_STACK_LINE(519)
			::flixel::util::FlxPool_flixel_math_FlxRect tmp2 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(519)
			::flixel::math::FlxRect tmp3 = tmp2->get();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(519)
			::flixel::math::FlxRect _this = tmp3;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(519)
			_this->x = border->x;
			HX_STACK_LINE(519)
			_this->y = border->y;
			HX_STACK_LINE(519)
			::flixel::math::FlxPoint tmp4 = this->sourceSize;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(519)
			Float tmp5 = tmp4->x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(519)
			Float tmp6 = ((int)2 * border->x);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(519)
			Float tmp7 = (tmp5 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(519)
			_this->width = tmp7;
			HX_STACK_LINE(519)
			::flixel::math::FlxPoint tmp8 = this->sourceSize;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(519)
			Float tmp9 = tmp8->y;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(519)
			Float tmp10 = ((int)2 * border->y);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(519)
			Float tmp11 = (tmp9 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(519)
			_this->height = tmp11;
			HX_STACK_LINE(519)
			tmp1 = _this;
		}
		HX_STACK_LINE(519)
		::flixel::math::FlxRect rect = tmp1;		HX_STACK_VAR(rect,"rect");
		HX_STACK_LINE(519)
		rect->_inPool = false;
		HX_STACK_LINE(519)
		tmp = rect;
	}
	HX_STACK_LINE(519)
	::flixel::math::FlxRect rect = tmp;		HX_STACK_VAR(rect,"rect");
	HX_STACK_LINE(520)
	::flixel::math::FlxRect tmp1 = rect;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(520)
	::flixel::graphics::frames::FlxFrame tmp2 = frameToFill;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(520)
	::flixel::graphics::frames::FlxFrame tmp3 = this->subFrameTo(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(520)
	frameToFill = tmp3;
	HX_STACK_LINE(521)
	::String tmp4 = this->name;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(521)
	frameToFill->name = tmp4;
	HX_STACK_LINE(522)
	::flixel::math::FlxRect tmp5 = rect;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(522)
	::flixel::math::FlxRect tmp6 = ::flixel::util::FlxDestroyUtil_obj::put(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(522)
	rect = tmp6;
	HX_STACK_LINE(523)
	::flixel::graphics::frames::FlxFrame tmp7 = frameToFill;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(523)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxFrame_obj,setBorderTo,return )

::flixel::graphics::frames::FlxFrame FlxFrame_obj::clipTo( ::flixel::math::FlxRect clip,::flixel::graphics::frames::FlxFrame clippedFrame){
	HX_STACK_FRAME("flixel.graphics.frames.FlxFrame","clipTo",0x9ecb6267,"flixel.graphics.frames.FlxFrame.clipTo","flixel/graphics/frames/FlxFrame.hx",533,0x6c7f608b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(clip,"clip")
	HX_STACK_ARG(clippedFrame,"clippedFrame")
	HX_STACK_LINE(534)
	bool tmp = (clippedFrame == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(534)
	if ((tmp)){
		HX_STACK_LINE(536)
		::flixel::graphics::FlxGraphic tmp1 = this->parent;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(536)
		int tmp2 = this->angle;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(536)
		::flixel::graphics::frames::FlxFrame tmp3 = ::flixel::graphics::frames::FlxFrame_obj::__new(tmp1,tmp2,null(),null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(536)
		clippedFrame = tmp3;
	}
	else{
		HX_STACK_LINE(540)
		::flixel::graphics::FlxGraphic tmp1 = this->parent;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(540)
		clippedFrame->parent = tmp1;
		HX_STACK_LINE(541)
		int tmp2 = this->angle;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(541)
		clippedFrame->angle = tmp2;
		HX_STACK_LINE(542)
		::flixel::math::FlxRect tmp3 = clippedFrame->frame;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(542)
		::flixel::math::FlxRect tmp4 = ::flixel::util::FlxDestroyUtil_obj::put(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(542)
		clippedFrame->set_frame(tmp4);
	}
	HX_STACK_LINE(545)
	{
		HX_STACK_LINE(545)
		::flixel::math::FlxPoint _this = clippedFrame->sourceSize;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(545)
		::flixel::math::FlxPoint tmp1 = this->sourceSize;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(545)
		::flixel::math::FlxPoint point = tmp1;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(545)
		Float tmp2 = point->x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(545)
		_this->set_x(tmp2);
		HX_STACK_LINE(545)
		Float tmp3 = point->y;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(545)
		_this->set_y(tmp3);
		HX_STACK_LINE(545)
		{
			HX_STACK_LINE(545)
			bool tmp4 = point->_weak;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(545)
			if ((tmp4)){
				HX_STACK_LINE(545)
				point->put();
			}
		}
		HX_STACK_LINE(545)
		_this;
	}
	HX_STACK_LINE(546)
	::String tmp1 = this->name;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(546)
	clippedFrame->name = tmp1;
	HX_STACK_LINE(549)
	int tmp2 = this->type;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(549)
	bool tmp3 = (tmp2 == (int)2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(549)
	if ((tmp3)){
		HX_STACK_LINE(551)
		clippedFrame->type = (int)2;
		HX_STACK_LINE(552)
		clippedFrame->offset->set((int)0,(int)0);
		HX_STACK_LINE(553)
		::flixel::graphics::frames::FlxFrame tmp4 = clippedFrame;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(553)
		return tmp4;
	}
	HX_STACK_LINE(556)
	::flixel::math::FlxRect tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(556)
	{
		HX_STACK_LINE(556)
		::flixel::math::FlxRect tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(556)
		{
			HX_STACK_LINE(556)
			Float Width = (int)0;		HX_STACK_VAR(Width,"Width");
			HX_STACK_LINE(556)
			Float Height = (int)0;		HX_STACK_VAR(Height,"Height");
			HX_STACK_LINE(556)
			::flixel::math::FlxRect tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(556)
			{
				HX_STACK_LINE(556)
				::flixel::util::FlxPool_flixel_math_FlxRect tmp7 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(556)
				::flixel::math::FlxRect tmp8 = tmp7->get();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(556)
				::flixel::math::FlxRect _this = tmp8;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(556)
				_this->x = (int)0;
				HX_STACK_LINE(556)
				_this->y = (int)0;
				HX_STACK_LINE(556)
				_this->width = Width;
				HX_STACK_LINE(556)
				_this->height = Height;
				HX_STACK_LINE(556)
				tmp6 = _this;
			}
			HX_STACK_LINE(556)
			::flixel::math::FlxRect rect = tmp6;		HX_STACK_VAR(rect,"rect");
			HX_STACK_LINE(556)
			rect->_inPool = false;
			HX_STACK_LINE(556)
			tmp5 = rect;
		}
		HX_STACK_LINE(556)
		::flixel::math::FlxRect _this = tmp5;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(556)
		::flixel::math::FlxRect tmp6 = this->frame;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(556)
		_this->width = tmp6->width;
		HX_STACK_LINE(556)
		::flixel::math::FlxRect tmp7 = this->frame;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(556)
		_this->height = tmp7->height;
		HX_STACK_LINE(556)
		tmp4 = _this;
	}
	HX_STACK_LINE(556)
	::flixel::math::FlxRect clippedRect = tmp4;		HX_STACK_VAR(clippedRect,"clippedRect");
	HX_STACK_LINE(557)
	int tmp5 = this->angle;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(557)
	bool tmp6 = (tmp5 != (int)0);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(557)
	if ((tmp6)){
		HX_STACK_LINE(559)
		::flixel::math::FlxRect tmp7 = this->frame;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(559)
		clippedRect->width = tmp7->height;
		HX_STACK_LINE(560)
		::flixel::math::FlxRect tmp8 = this->frame;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(560)
		clippedRect->height = tmp8->width;
	}
	HX_STACK_LINE(563)
	{
		HX_STACK_LINE(563)
		::flixel::math::FlxPoint tmp7 = this->offset;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(563)
		Float tmp8 = tmp7->x;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(563)
		Float tmp9 = -(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(563)
		hx::AddEq(clip->x,tmp9);
		HX_STACK_LINE(563)
		::flixel::math::FlxPoint tmp10 = this->offset;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(563)
		Float tmp11 = tmp10->y;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(563)
		Float tmp12 = -(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(563)
		hx::AddEq(clip->y,tmp12);
		HX_STACK_LINE(563)
		clip;
	}
	HX_STACK_LINE(564)
	::flixel::math::FlxRect tmp7 = clip;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(564)
	::flixel::math::FlxRect tmp8 = clippedRect->intersection(tmp7,null());		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(564)
	::flixel::math::FlxRect frameRect = tmp8;		HX_STACK_VAR(frameRect,"frameRect");
	HX_STACK_LINE(565)
	::flixel::math::FlxRect tmp9 = clippedRect;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(565)
	::flixel::math::FlxRect tmp10 = ::flixel::util::FlxDestroyUtil_obj::put(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(565)
	clippedRect = tmp10;
	HX_STACK_LINE(567)
	bool tmp11 = (frameRect->width == (int)0);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(567)
	bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(567)
	bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(567)
	if ((tmp12)){
		HX_STACK_LINE(567)
		tmp13 = (frameRect->height == (int)0);
	}
	else{
		HX_STACK_LINE(567)
		tmp13 = true;
	}
	HX_STACK_LINE(567)
	if ((tmp13)){
		HX_STACK_LINE(569)
		clippedFrame->type = (int)2;
		HX_STACK_LINE(570)
		{
			HX_STACK_LINE(570)
			frameRect->x = (int)0;
			HX_STACK_LINE(570)
			frameRect->y = (int)0;
			HX_STACK_LINE(570)
			frameRect->width = (int)0;
			HX_STACK_LINE(570)
			frameRect->height = (int)0;
			HX_STACK_LINE(570)
			frameRect;
		}
		HX_STACK_LINE(571)
		::flixel::math::FlxRect tmp14 = frameRect;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(571)
		clippedFrame->set_frame(tmp14);
		HX_STACK_LINE(572)
		clippedFrame->offset->set((int)0,(int)0);
	}
	else{
		HX_STACK_LINE(576)
		clippedFrame->type = (int)0;
		HX_STACK_LINE(577)
		Float tmp14 = frameRect->x;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(577)
		Float tmp15 = frameRect->y;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(577)
		::flixel::math::FlxPoint tmp16 = clippedFrame->offset->set(tmp14,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(577)
		::flixel::math::FlxPoint tmp17 = this->offset;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(577)
		tmp16->addPoint(tmp17);
		HX_STACK_LINE(579)
		::flixel::math::FlxPoint tmp18;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(579)
		{
			HX_STACK_LINE(579)
			::flixel::math::FlxPoint tmp19;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(579)
			{
				HX_STACK_LINE(579)
				::flixel::util::FlxPool_flixel_math_FlxPoint tmp20 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(579)
				::flixel::math::FlxPoint tmp21 = tmp20->get();		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(579)
				Float tmp22 = frameRect->x;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(579)
				Float tmp23 = frameRect->y;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(579)
				::flixel::math::FlxPoint tmp24 = tmp21->set(tmp22,tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(579)
				::flixel::math::FlxPoint point = tmp24;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(579)
				point->_inPool = false;
				HX_STACK_LINE(579)
				tmp19 = point;
			}
			HX_STACK_LINE(579)
			::flixel::math::FlxPoint point = tmp19;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(579)
			point->_weak = true;
			HX_STACK_LINE(579)
			tmp18 = point;
		}
		HX_STACK_LINE(579)
		::flixel::math::FlxPoint p1 = tmp18;		HX_STACK_VAR(p1,"p1");
		HX_STACK_LINE(580)
		::flixel::math::FlxPoint tmp19;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(580)
		{
			HX_STACK_LINE(580)
			::flixel::math::FlxPoint tmp20;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(580)
			{
				HX_STACK_LINE(580)
				::flixel::util::FlxPool_flixel_math_FlxPoint tmp21 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(580)
				::flixel::math::FlxPoint tmp22 = tmp21->get();		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(580)
				Float tmp23 = (frameRect->x + frameRect->width);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(580)
				Float tmp24 = (frameRect->y + frameRect->height);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(580)
				::flixel::math::FlxPoint tmp25 = tmp22->set(tmp23,tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(580)
				::flixel::math::FlxPoint point = tmp25;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(580)
				point->_inPool = false;
				HX_STACK_LINE(580)
				tmp20 = point;
			}
			HX_STACK_LINE(580)
			::flixel::math::FlxPoint point = tmp20;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(580)
			point->_weak = true;
			HX_STACK_LINE(580)
			tmp19 = point;
		}
		HX_STACK_LINE(580)
		::flixel::math::FlxPoint p2 = tmp19;		HX_STACK_VAR(p2,"p2");
		HX_STACK_LINE(582)
		::flixel::math::FlxMatrix tmp20 = this->matrix;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(582)
		tmp20->identity();
		HX_STACK_LINE(584)
		int tmp21 = this->angle;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(584)
		bool tmp22 = (tmp21 == (int)-90);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(584)
		if ((tmp22)){
			HX_STACK_LINE(586)
			{
				HX_STACK_LINE(586)
				::flixel::math::FlxMatrix tmp23 = this->matrix;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(586)
				::flixel::math::FlxMatrix _this = tmp23;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(586)
				Float tmp24 = _this->b;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(586)
				Float tmp25 = -(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(586)
				Float tmp26 = _this->a;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(586)
				Float tmp27 = _this->d;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(586)
				Float tmp28 = -(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(586)
				Float tmp29 = _this->c;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(586)
				Float tmp30 = _this->ty;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(586)
				Float tmp31 = -(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(586)
				Float tmp32 = _this->tx;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(586)
				_this->setTo(tmp25,tmp26,tmp28,tmp29,tmp31,tmp32);
				HX_STACK_LINE(586)
				_this;
			}
			HX_STACK_LINE(587)
			::flixel::math::FlxMatrix tmp23 = this->matrix;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(587)
			::flixel::math::FlxRect tmp24 = this->frame;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(587)
			Float tmp25 = tmp24->width;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(587)
			tmp23->translate(tmp25,(int)0);
		}
		else{
			HX_STACK_LINE(589)
			int tmp23 = this->angle;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(589)
			bool tmp24 = (tmp23 == (int)90);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(589)
			if ((tmp24)){
				HX_STACK_LINE(591)
				{
					HX_STACK_LINE(591)
					::flixel::math::FlxMatrix tmp25 = this->matrix;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(591)
					::flixel::math::FlxMatrix _this = tmp25;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(591)
					Float tmp26 = _this->b;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(591)
					Float tmp27 = _this->a;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(591)
					Float tmp28 = -(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(591)
					Float tmp29 = _this->d;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(591)
					Float tmp30 = _this->c;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(591)
					Float tmp31 = -(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(591)
					Float tmp32 = _this->ty;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(591)
					Float tmp33 = _this->tx;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(591)
					Float tmp34 = -(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(591)
					_this->setTo(tmp26,tmp28,tmp29,tmp31,tmp32,tmp34);
					HX_STACK_LINE(591)
					_this;
				}
				HX_STACK_LINE(592)
				::flixel::math::FlxMatrix tmp25 = this->matrix;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(592)
				::flixel::math::FlxRect tmp26 = this->frame;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(592)
				Float tmp27 = tmp26->height;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(592)
				tmp25->translate((int)0,tmp27);
			}
		}
		HX_STACK_LINE(595)
		int tmp23 = this->angle;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(595)
		bool tmp24 = (tmp23 != (int)0);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(595)
		if ((tmp24)){
			HX_STACK_LINE(597)
			{
				HX_STACK_LINE(597)
				::flixel::math::FlxMatrix tmp25 = this->matrix;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(597)
				::openfl::_legacy::geom::Matrix matrix = tmp25;		HX_STACK_VAR(matrix,"matrix");
				HX_STACK_LINE(597)
				Float tmp26 = (p1->x * matrix->a);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(597)
				Float tmp27 = (p1->y * matrix->c);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(597)
				Float tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(597)
				Float tmp29 = matrix->tx;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(597)
				Float tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(597)
				Float x1 = tmp30;		HX_STACK_VAR(x1,"x1");
				HX_STACK_LINE(597)
				Float tmp31 = (p1->x * matrix->b);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(597)
				Float tmp32 = (p1->y * matrix->d);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(597)
				Float tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(597)
				Float tmp34 = matrix->ty;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(597)
				Float tmp35 = (tmp33 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(597)
				Float y1 = tmp35;		HX_STACK_VAR(y1,"y1");
				HX_STACK_LINE(597)
				Float tmp36 = x1;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(597)
				Float tmp37 = y1;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(597)
				p1->set(tmp36,tmp37);
			}
			HX_STACK_LINE(598)
			{
				HX_STACK_LINE(598)
				::flixel::math::FlxMatrix tmp25 = this->matrix;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(598)
				::openfl::_legacy::geom::Matrix matrix = tmp25;		HX_STACK_VAR(matrix,"matrix");
				HX_STACK_LINE(598)
				Float tmp26 = (p2->x * matrix->a);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(598)
				Float tmp27 = (p2->y * matrix->c);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(598)
				Float tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(598)
				Float tmp29 = matrix->tx;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(598)
				Float tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(598)
				Float x1 = tmp30;		HX_STACK_VAR(x1,"x1");
				HX_STACK_LINE(598)
				Float tmp31 = (p2->x * matrix->b);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(598)
				Float tmp32 = (p2->y * matrix->d);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(598)
				Float tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(598)
				Float tmp34 = matrix->ty;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(598)
				Float tmp35 = (tmp33 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(598)
				Float y1 = tmp35;		HX_STACK_VAR(y1,"y1");
				HX_STACK_LINE(598)
				Float tmp36 = x1;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(598)
				Float tmp37 = y1;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(598)
				p2->set(tmp36,tmp37);
			}
		}
		HX_STACK_LINE(601)
		{
			HX_STACK_LINE(601)
			Float tmp25 = p1->x;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(601)
			Float tmp26 = p2->x;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(601)
			Float tmp27 = ::Math_obj::min(tmp25,tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(601)
			Float minX = tmp27;		HX_STACK_VAR(minX,"minX");
			HX_STACK_LINE(601)
			Float tmp28 = p1->y;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(601)
			Float tmp29 = p2->y;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(601)
			Float tmp30 = ::Math_obj::min(tmp28,tmp29);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(601)
			Float minY = tmp30;		HX_STACK_VAR(minY,"minY");
			HX_STACK_LINE(601)
			Float tmp31 = p1->x;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(601)
			Float tmp32 = p2->x;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(601)
			Float tmp33 = ::Math_obj::max(tmp31,tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(601)
			Float maxX = tmp33;		HX_STACK_VAR(maxX,"maxX");
			HX_STACK_LINE(601)
			Float tmp34 = p1->y;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(601)
			Float tmp35 = p2->y;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(601)
			Float tmp36 = ::Math_obj::max(tmp34,tmp35);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(601)
			Float maxY = tmp36;		HX_STACK_VAR(maxY,"maxY");
			HX_STACK_LINE(601)
			{
				HX_STACK_LINE(601)
				bool tmp37 = p1->_weak;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(601)
				if ((tmp37)){
					HX_STACK_LINE(601)
					p1->put();
				}
			}
			HX_STACK_LINE(601)
			{
				HX_STACK_LINE(601)
				bool tmp37 = p2->_weak;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(601)
				if ((tmp37)){
					HX_STACK_LINE(601)
					p2->put();
				}
			}
			HX_STACK_LINE(601)
			{
				HX_STACK_LINE(601)
				frameRect->x = minX;
				HX_STACK_LINE(601)
				frameRect->y = minY;
				HX_STACK_LINE(601)
				Float tmp37 = (maxX - minX);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(601)
				frameRect->width = tmp37;
				HX_STACK_LINE(601)
				Float tmp38 = (maxY - minY);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(601)
				frameRect->height = tmp38;
				HX_STACK_LINE(601)
				frameRect;
			}
		}
		HX_STACK_LINE(602)
		{
			HX_STACK_LINE(602)
			::flixel::math::FlxRect tmp25 = this->frame;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(602)
			hx::AddEq(frameRect->x,tmp25->x);
			HX_STACK_LINE(602)
			::flixel::math::FlxRect tmp26 = this->frame;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(602)
			hx::AddEq(frameRect->y,tmp26->y);
			HX_STACK_LINE(602)
			frameRect;
		}
		HX_STACK_LINE(603)
		::flixel::math::FlxRect tmp25 = frameRect;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(603)
		clippedFrame->set_frame(tmp25);
		HX_STACK_LINE(604)
		clippedFrame->cacheFrameMatrix();
	}
	HX_STACK_LINE(607)
	{
		HX_STACK_LINE(607)
		::flixel::math::FlxPoint tmp14 = this->offset;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(607)
		hx::AddEq(clip->x,tmp14->x);
		HX_STACK_LINE(607)
		::flixel::math::FlxPoint tmp15 = this->offset;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(607)
		hx::AddEq(clip->y,tmp15->y);
		HX_STACK_LINE(607)
		clip;
	}
	HX_STACK_LINE(608)
	::flixel::graphics::frames::FlxFrame tmp14 = clippedFrame;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(608)
	return tmp14;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxFrame_obj,clipTo,return )

::flixel::graphics::frames::FlxFrame FlxFrame_obj::copyTo( ::flixel::graphics::frames::FlxFrame clone){
	HX_STACK_FRAME("flixel.graphics.frames.FlxFrame","copyTo",0x5da6728c,"flixel.graphics.frames.FlxFrame.copyTo","flixel/graphics/frames/FlxFrame.hx",618,0x6c7f608b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(clone,"clone")
	HX_STACK_LINE(619)
	bool tmp = (clone == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(619)
	if ((tmp)){
		HX_STACK_LINE(621)
		::flixel::graphics::FlxGraphic tmp1 = this->parent;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(621)
		int tmp2 = this->angle;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(621)
		::flixel::graphics::frames::FlxFrame tmp3 = ::flixel::graphics::frames::FlxFrame_obj::__new(tmp1,tmp2,null(),null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(621)
		clone = tmp3;
	}
	else{
		HX_STACK_LINE(625)
		::flixel::graphics::FlxGraphic tmp1 = this->parent;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(625)
		clone->parent = tmp1;
		HX_STACK_LINE(626)
		int tmp2 = this->angle;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(626)
		clone->angle = tmp2;
		HX_STACK_LINE(627)
		::flixel::math::FlxRect tmp3 = clone->frame;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(627)
		::flixel::math::FlxRect tmp4 = ::flixel::util::FlxDestroyUtil_obj::put(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(627)
		clone->set_frame(tmp4);
	}
	HX_STACK_LINE(630)
	{
		HX_STACK_LINE(630)
		::flixel::math::FlxPoint _this = clone->offset;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(630)
		::flixel::math::FlxPoint tmp1 = this->offset;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(630)
		::flixel::math::FlxPoint point = tmp1;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(630)
		Float tmp2 = point->x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(630)
		_this->set_x(tmp2);
		HX_STACK_LINE(630)
		Float tmp3 = point->y;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(630)
		_this->set_y(tmp3);
		HX_STACK_LINE(630)
		{
			HX_STACK_LINE(630)
			bool tmp4 = point->_weak;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(630)
			if ((tmp4)){
				HX_STACK_LINE(630)
				point->put();
			}
		}
		HX_STACK_LINE(630)
		_this;
	}
	HX_STACK_LINE(631)
	bool tmp1 = this->flipX;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(631)
	clone->flipX = tmp1;
	HX_STACK_LINE(632)
	bool tmp2 = this->flipY;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(632)
	clone->flipY = tmp2;
	HX_STACK_LINE(633)
	{
		HX_STACK_LINE(633)
		::flixel::math::FlxPoint _this = clone->sourceSize;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(633)
		::flixel::math::FlxPoint tmp3 = this->sourceSize;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(633)
		::flixel::math::FlxPoint point = tmp3;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(633)
		Float tmp4 = point->x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(633)
		_this->set_x(tmp4);
		HX_STACK_LINE(633)
		Float tmp5 = point->y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(633)
		_this->set_y(tmp5);
		HX_STACK_LINE(633)
		{
			HX_STACK_LINE(633)
			bool tmp6 = point->_weak;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(633)
			if ((tmp6)){
				HX_STACK_LINE(633)
				point->put();
			}
		}
		HX_STACK_LINE(633)
		_this;
	}
	HX_STACK_LINE(634)
	::flixel::math::FlxRect tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(634)
	{
		HX_STACK_LINE(634)
		::flixel::math::FlxRect tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(634)
		{
			HX_STACK_LINE(634)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(634)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(634)
			Float Width = (int)0;		HX_STACK_VAR(Width,"Width");
			HX_STACK_LINE(634)
			Float Height = (int)0;		HX_STACK_VAR(Height,"Height");
			HX_STACK_LINE(634)
			::flixel::math::FlxRect tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(634)
			{
				HX_STACK_LINE(634)
				::flixel::util::FlxPool_flixel_math_FlxRect tmp6 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(634)
				::flixel::math::FlxRect tmp7 = tmp6->get();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(634)
				::flixel::math::FlxRect _this = tmp7;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(634)
				_this->x = X;
				HX_STACK_LINE(634)
				_this->y = Y;
				HX_STACK_LINE(634)
				_this->width = Width;
				HX_STACK_LINE(634)
				_this->height = Height;
				HX_STACK_LINE(634)
				tmp5 = _this;
			}
			HX_STACK_LINE(634)
			::flixel::math::FlxRect rect = tmp5;		HX_STACK_VAR(rect,"rect");
			HX_STACK_LINE(634)
			rect->_inPool = false;
			HX_STACK_LINE(634)
			tmp4 = rect;
		}
		HX_STACK_LINE(634)
		::flixel::math::FlxRect _this = tmp4;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(634)
		::flixel::math::FlxRect tmp5 = this->frame;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(634)
		::flixel::math::FlxRect Rect = tmp5;		HX_STACK_VAR(Rect,"Rect");
		HX_STACK_LINE(634)
		_this->x = Rect->x;
		HX_STACK_LINE(634)
		_this->y = Rect->y;
		HX_STACK_LINE(634)
		_this->width = Rect->width;
		HX_STACK_LINE(634)
		_this->height = Rect->height;
		HX_STACK_LINE(634)
		{
			HX_STACK_LINE(634)
			bool tmp6 = Rect->_weak;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(634)
			if ((tmp6)){
				HX_STACK_LINE(634)
				bool tmp7 = Rect->_inPool;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(634)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(634)
				if ((tmp8)){
					HX_STACK_LINE(634)
					Rect->_inPool = true;
					HX_STACK_LINE(634)
					Rect->_weak = false;
					HX_STACK_LINE(634)
					::flixel::util::FlxPool_flixel_math_FlxRect tmp9 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(634)
					::flixel::math::FlxRect tmp10 = Rect;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(634)
					tmp9->putUnsafe(tmp10);
				}
			}
		}
		HX_STACK_LINE(634)
		tmp3 = _this;
	}
	HX_STACK_LINE(634)
	clone->set_frame(tmp3);
	HX_STACK_LINE(635)
	int tmp4 = this->type;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(635)
	clone->type = tmp4;
	HX_STACK_LINE(636)
	::String tmp5 = this->name;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(636)
	clone->name = tmp5;
	HX_STACK_LINE(637)
	clone->cacheFrameMatrix();
	HX_STACK_LINE(638)
	::flixel::graphics::frames::FlxFrame tmp6 = clone;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(638)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxFrame_obj,copyTo,return )

Void FlxFrame_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.graphics.frames.FlxFrame","destroy",0x74fe137e,"flixel.graphics.frames.FlxFrame.destroy","flixel/graphics/frames/FlxFrame.hx",642,0x6c7f608b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(643)
		this->name = null();
		HX_STACK_LINE(644)
		this->parent = null();
		HX_STACK_LINE(645)
		::flixel::math::FlxPoint tmp = this->sourceSize;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(645)
		::flixel::math::FlxPoint tmp1 = ::flixel::util::FlxDestroyUtil_obj::put(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(645)
		this->sourceSize = tmp1;
		HX_STACK_LINE(646)
		::flixel::math::FlxPoint tmp2 = this->offset;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(646)
		::flixel::math::FlxPoint tmp3 = ::flixel::util::FlxDestroyUtil_obj::put(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(646)
		this->offset = tmp3;
		HX_STACK_LINE(647)
		::flixel::math::FlxRect tmp4 = this->frame;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(647)
		::flixel::math::FlxRect tmp5 = ::flixel::util::FlxDestroyUtil_obj::put(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(647)
		this->set_frame(tmp5);
		HX_STACK_LINE(648)
		::flixel::math::FlxRect tmp6 = this->uv;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(648)
		::flixel::math::FlxRect tmp7 = ::flixel::util::FlxDestroyUtil_obj::put(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(648)
		this->uv = tmp7;
		HX_STACK_LINE(649)
		this->blitMatrix = null();
		HX_STACK_LINE(650)
		bool tmp8 = ::flixel::FlxG_obj::renderTile;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(650)
		if ((tmp8)){
			HX_STACK_LINE(652)
			this->tileMatrix = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxFrame_obj,destroy,(void))

::String FlxFrame_obj::toString( ){
	HX_STACK_FRAME("flixel.graphics.frames.FlxFrame","toString",0x50e09da8,"flixel.graphics.frames.FlxFrame.toString","flixel/graphics/frames/FlxFrame.hx",657,0x6c7f608b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(659)
	::flixel::util::LabelValuePair tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(659)
	{
		HX_STACK_LINE(659)
		::flixel::util::FlxPool_flixel_util_LabelValuePair tmp1 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(659)
		::flixel::util::LabelValuePair tmp2 = tmp1->get();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(659)
		::flixel::util::LabelValuePair _this = tmp2;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(659)
		_this->label = HX_HCSTRING("name","\x4b","\x72","\xff","\x48");
		HX_STACK_LINE(659)
		::String tmp3 = this->name;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(659)
		_this->value = tmp3;
		HX_STACK_LINE(659)
		tmp = _this;
	}
	HX_STACK_LINE(658)
	::String tmp1 = ::flixel::util::FlxStringUtil_obj::getDebugString(Array_obj< ::Dynamic >::__new().Add(tmp));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(658)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxFrame_obj,toString,return )

::flixel::math::FlxRect FlxFrame_obj::set_frame( ::flixel::math::FlxRect value){
	HX_STACK_FRAME("flixel.graphics.frames.FlxFrame","set_frame",0x789f5014,"flixel.graphics.frames.FlxFrame.set_frame","flixel/graphics/frames/FlxFrame.hx",663,0x6c7f608b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(664)
	bool tmp = (value != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(664)
	if ((tmp)){
		HX_STACK_LINE(666)
		::flixel::math::FlxRect tmp1 = this->uv;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(666)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(666)
		if ((tmp2)){
			HX_STACK_LINE(667)
			::flixel::math::FlxRect tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(667)
			{
				HX_STACK_LINE(667)
				Float X = (int)0;		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(667)
				Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(667)
				Float Width = (int)0;		HX_STACK_VAR(Width,"Width");
				HX_STACK_LINE(667)
				Float Height = (int)0;		HX_STACK_VAR(Height,"Height");
				HX_STACK_LINE(667)
				::flixel::math::FlxRect tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(667)
				{
					HX_STACK_LINE(667)
					::flixel::util::FlxPool_flixel_math_FlxRect tmp5 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(667)
					::flixel::math::FlxRect tmp6 = tmp5->get();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(667)
					::flixel::math::FlxRect _this = tmp6;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(667)
					_this->x = X;
					HX_STACK_LINE(667)
					_this->y = Y;
					HX_STACK_LINE(667)
					_this->width = Width;
					HX_STACK_LINE(667)
					_this->height = Height;
					HX_STACK_LINE(667)
					tmp4 = _this;
				}
				HX_STACK_LINE(667)
				::flixel::math::FlxRect rect = tmp4;		HX_STACK_VAR(rect,"rect");
				HX_STACK_LINE(667)
				rect->_inPool = false;
				HX_STACK_LINE(667)
				tmp3 = rect;
			}
			HX_STACK_LINE(667)
			this->uv = tmp3;
		}
		HX_STACK_LINE(669)
		{
			HX_STACK_LINE(669)
			::flixel::math::FlxRect tmp3 = this->uv;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(669)
			::flixel::math::FlxRect _this = tmp3;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(669)
			Float tmp4 = value->x;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(669)
			::flixel::graphics::FlxGraphic tmp5 = this->parent;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(669)
			int tmp6 = tmp5->width;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(669)
			Float tmp7 = (Float(tmp4) / Float(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(669)
			_this->x = tmp7;
			HX_STACK_LINE(669)
			Float tmp8 = value->y;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(669)
			::flixel::graphics::FlxGraphic tmp9 = this->parent;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(669)
			int tmp10 = tmp9->height;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(669)
			Float tmp11 = (Float(tmp8) / Float(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(669)
			_this->y = tmp11;
			HX_STACK_LINE(669)
			Float tmp12 = (value->x + value->width);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(669)
			::flixel::graphics::FlxGraphic tmp13 = this->parent;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(669)
			int tmp14 = tmp13->width;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(669)
			Float tmp15 = (Float(tmp12) / Float(tmp14));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(669)
			_this->width = tmp15;
			HX_STACK_LINE(669)
			Float tmp16 = (value->y + value->height);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(669)
			::flixel::graphics::FlxGraphic tmp17 = this->parent;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(669)
			int tmp18 = tmp17->height;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(669)
			Float tmp19 = (Float(tmp16) / Float(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(669)
			_this->height = tmp19;
			HX_STACK_LINE(669)
			_this;
		}
	}
	HX_STACK_LINE(672)
	::flixel::math::FlxRect tmp1 = this->frame = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(672)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxFrame_obj,set_frame,return )

Void FlxFrame_obj::sort( Array< ::Dynamic > frames,int prefixLength,int postfixLength){
{
		HX_STACK_FRAME("flixel.graphics.frames.FlxFrame","sort",0xd428c65a,"flixel.graphics.frames.FlxFrame.sort","flixel/graphics/frames/FlxFrame.hx",32,0x6c7f608b)
		HX_STACK_ARG(frames,"frames")
		HX_STACK_ARG(prefixLength,"prefixLength")
		HX_STACK_ARG(postfixLength,"postfixLength")
		HX_STACK_LINE(33)
		Dynamic tmp = ::flixel::graphics::frames::FlxFrame_obj::sortByName_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(33)
		int tmp1 = prefixLength;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(33)
		int tmp2 = postfixLength;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(33)
		Dynamic tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(33)
		{
			HX_STACK_LINE(33)
			Dynamic f = tmp;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(33)
			int a3 = tmp1;		HX_STACK_VAR(a3,"a3");
			HX_STACK_LINE(33)
			int a4 = tmp2;		HX_STACK_VAR(a4,"a4");

			HX_BEGIN_LOCAL_FUNC_S3(hx::LocalFunc,_Function_2_1,int,a3,int,a4,Dynamic,f)
			int __ArgCount() const { return 2; }
			int run(::flixel::graphics::frames::FlxFrame a1,::flixel::graphics::frames::FlxFrame a2){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","flixel/graphics/frames/FlxFrame.hx",33,0x6c7f608b)
				HX_STACK_ARG(a1,"a1")
				HX_STACK_ARG(a2,"a2")
				{
					HX_STACK_LINE(33)
					::flixel::graphics::frames::FlxFrame tmp4 = a1;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(33)
					::flixel::graphics::frames::FlxFrame tmp5 = a2;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(33)
					int tmp6 = a3;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(33)
					int tmp7 = a4;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(33)
					int tmp8 = f(tmp4,tmp5,tmp6,tmp7).Cast< int >();		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(33)
					return tmp8;
				}
				return null();
			}
			HX_END_LOCAL_FUNC2(return)

			HX_STACK_LINE(33)
			tmp3 =  Dynamic(new _Function_2_1(a3,a4,f));
		}
		HX_STACK_LINE(33)
		::haxe::ds::ArraySort_obj::sort(frames,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxFrame_obj,sort,(void))

int FlxFrame_obj::sortByName( ::flixel::graphics::frames::FlxFrame frame1,::flixel::graphics::frames::FlxFrame frame2,int prefixLength,int postfixLength){
	HX_STACK_FRAME("flixel.graphics.frames.FlxFrame","sortByName",0xdd6fa5bc,"flixel.graphics.frames.FlxFrame.sortByName","flixel/graphics/frames/FlxFrame.hx",37,0x6c7f608b)
	HX_STACK_ARG(frame1,"frame1")
	HX_STACK_ARG(frame2,"frame2")
	HX_STACK_ARG(prefixLength,"prefixLength")
	HX_STACK_ARG(postfixLength,"postfixLength")
	HX_STACK_LINE(38)
	::String name1 = frame1->name;		HX_STACK_VAR(name1,"name1");
	HX_STACK_LINE(39)
	::String name2 = frame2->name;		HX_STACK_VAR(name2,"name2");
	HX_STACK_LINE(40)
	int tmp = prefixLength;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(40)
	int tmp1 = (name1.length - postfixLength);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(40)
	::String tmp2 = name1.substring(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(40)
	Dynamic tmp3 = ::Std_obj::parseInt(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(40)
	Dynamic num1 = tmp3;		HX_STACK_VAR(num1,"num1");
	HX_STACK_LINE(41)
	int tmp4 = prefixLength;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(41)
	int tmp5 = (name2.length - postfixLength);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(41)
	::String tmp6 = name2.substring(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(41)
	Dynamic tmp7 = ::Std_obj::parseInt(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(41)
	Dynamic num2 = tmp7;		HX_STACK_VAR(num2,"num2");
	HX_STACK_LINE(42)
	bool tmp8 = (num1 == null());		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(42)
	if ((tmp8)){
		HX_STACK_LINE(43)
		num1 = (int)0;
	}
	HX_STACK_LINE(44)
	bool tmp9 = (num2 == null());		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(44)
	if ((tmp9)){
		HX_STACK_LINE(45)
		num2 = (int)0;
	}
	HX_STACK_LINE(47)
	int tmp10 = (num1 - num2);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(47)
	return tmp10;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxFrame_obj,sortByName,return )


FlxFrame_obj::FlxFrame_obj()
{
}

void FlxFrame_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxFrame);
	HX_MARK_MEMBER_NAME(point1,"point1");
	HX_MARK_MEMBER_NAME(point2,"point2");
	HX_MARK_MEMBER_NAME(rect,"rect");
	HX_MARK_MEMBER_NAME(matrix,"matrix");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(frame,"frame");
	HX_MARK_MEMBER_NAME(uv,"uv");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(angle,"angle");
	HX_MARK_MEMBER_NAME(flipX,"flipX");
	HX_MARK_MEMBER_NAME(flipY,"flipY");
	HX_MARK_MEMBER_NAME(sourceSize,"sourceSize");
	HX_MARK_MEMBER_NAME(offset,"offset");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(tileMatrix,"tileMatrix");
	HX_MARK_MEMBER_NAME(blitMatrix,"blitMatrix");
	HX_MARK_END_CLASS();
}

void FlxFrame_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(point1,"point1");
	HX_VISIT_MEMBER_NAME(point2,"point2");
	HX_VISIT_MEMBER_NAME(rect,"rect");
	HX_VISIT_MEMBER_NAME(matrix,"matrix");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(frame,"frame");
	HX_VISIT_MEMBER_NAME(uv,"uv");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(angle,"angle");
	HX_VISIT_MEMBER_NAME(flipX,"flipX");
	HX_VISIT_MEMBER_NAME(flipY,"flipY");
	HX_VISIT_MEMBER_NAME(sourceSize,"sourceSize");
	HX_VISIT_MEMBER_NAME(offset,"offset");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(tileMatrix,"tileMatrix");
	HX_VISIT_MEMBER_NAME(blitMatrix,"blitMatrix");
}

Dynamic FlxFrame_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"uv") ) { return uv; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"rect") ) { return rect; }
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"frame") ) { return frame; }
		if (HX_FIELD_EQ(inName,"angle") ) { return angle; }
		if (HX_FIELD_EQ(inName,"flipX") ) { return flipX; }
		if (HX_FIELD_EQ(inName,"flipY") ) { return flipY; }
		if (HX_FIELD_EQ(inName,"paint") ) { return paint_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"point1") ) { return point1; }
		if (HX_FIELD_EQ(inName,"point2") ) { return point2; }
		if (HX_FIELD_EQ(inName,"matrix") ) { return matrix; }
		if (HX_FIELD_EQ(inName,"parent") ) { return parent; }
		if (HX_FIELD_EQ(inName,"offset") ) { return offset; }
		if (HX_FIELD_EQ(inName,"clipTo") ) { return clipTo_dyn(); }
		if (HX_FIELD_EQ(inName,"copyTo") ) { return copyTo_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_frame") ) { return set_frame_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sourceSize") ) { return sourceSize; }
		if (HX_FIELD_EQ(inName,"tileMatrix") ) { return tileMatrix; }
		if (HX_FIELD_EQ(inName,"blitMatrix") ) { return blitMatrix; }
		if (HX_FIELD_EQ(inName,"subFrameTo") ) { return subFrameTo_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"setBorderTo") ) { return setBorderTo_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"rotateAndFlip") ) { return rotateAndFlip_dyn(); }
		if (HX_FIELD_EQ(inName,"prepareMatrix") ) { return prepareMatrix_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"fillBlitMatrix") ) { return fillBlitMatrix_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"cacheFrameMatrix") ) { return cacheFrameMatrix_dyn(); }
		if (HX_FIELD_EQ(inName,"checkInputBitmap") ) { return checkInputBitmap_dyn(); }
		if (HX_FIELD_EQ(inName,"getDrawFrameRect") ) { return getDrawFrameRect_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"prepareBlitMatrix") ) { return prepareBlitMatrix_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"paintRotatedAndFlipped") ) { return paintRotatedAndFlipped_dyn(); }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"prepareTransformedBlitMatrix") ) { return prepareTransformedBlitMatrix_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxFrame_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"sort") ) { outValue = sort_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sortByName") ) { outValue = sortByName_dyn(); return true;  }
	}
	return false;
}

Dynamic FlxFrame_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"uv") ) { uv=inValue.Cast< ::flixel::math::FlxRect >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"rect") ) { rect=inValue.Cast< ::openfl::_legacy::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"frame") ) { if (inCallProp == hx::paccAlways) return set_frame(inValue);frame=inValue.Cast< ::flixel::math::FlxRect >(); return inValue; }
		if (HX_FIELD_EQ(inName,"angle") ) { angle=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"flipX") ) { flipX=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"flipY") ) { flipY=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"point1") ) { point1=inValue.Cast< ::openfl::_legacy::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"point2") ) { point2=inValue.Cast< ::openfl::_legacy::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"matrix") ) { matrix=inValue.Cast< ::flixel::math::FlxMatrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast< ::flixel::graphics::FlxGraphic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offset") ) { offset=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sourceSize") ) { sourceSize=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tileMatrix") ) { tileMatrix=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"blitMatrix") ) { blitMatrix=inValue.Cast< Array< Float > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxFrame_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("point1","\xe1","\x11","\x2e","\xf7"));
	outFields->push(HX_HCSTRING("point2","\xe2","\x11","\x2e","\xf7"));
	outFields->push(HX_HCSTRING("rect","\x24","\x4d","\xa7","\x4b"));
	outFields->push(HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb"));
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("frame","\x2d","\x78","\x83","\x06"));
	outFields->push(HX_HCSTRING("uv","\x61","\x66","\x00","\x00"));
	outFields->push(HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"));
	outFields->push(HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22"));
	outFields->push(HX_HCSTRING("flipX","\x0b","\x45","\x92","\x02"));
	outFields->push(HX_HCSTRING("flipY","\x0c","\x45","\x92","\x02"));
	outFields->push(HX_HCSTRING("sourceSize","\x3c","\x87","\xb7","\x74"));
	outFields->push(HX_HCSTRING("offset","\x93","\x97","\x3f","\x60"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("tileMatrix","\x0f","\x0c","\x5f","\x20"));
	outFields->push(HX_HCSTRING("blitMatrix","\x56","\x78","\x21","\xd8"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_legacy::geom::Point*/ ,(int)offsetof(FlxFrame_obj,point1),HX_HCSTRING("point1","\xe1","\x11","\x2e","\xf7")},
	{hx::fsObject /*::openfl::_legacy::geom::Point*/ ,(int)offsetof(FlxFrame_obj,point2),HX_HCSTRING("point2","\xe2","\x11","\x2e","\xf7")},
	{hx::fsObject /*::openfl::_legacy::geom::Rectangle*/ ,(int)offsetof(FlxFrame_obj,rect),HX_HCSTRING("rect","\x24","\x4d","\xa7","\x4b")},
	{hx::fsObject /*::flixel::math::FlxMatrix*/ ,(int)offsetof(FlxFrame_obj,matrix),HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb")},
	{hx::fsString,(int)offsetof(FlxFrame_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsObject /*::flixel::math::FlxRect*/ ,(int)offsetof(FlxFrame_obj,frame),HX_HCSTRING("frame","\x2d","\x78","\x83","\x06")},
	{hx::fsObject /*::flixel::math::FlxRect*/ ,(int)offsetof(FlxFrame_obj,uv),HX_HCSTRING("uv","\x61","\x66","\x00","\x00")},
	{hx::fsObject /*::flixel::graphics::FlxGraphic*/ ,(int)offsetof(FlxFrame_obj,parent),HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed")},
	{hx::fsInt,(int)offsetof(FlxFrame_obj,angle),HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22")},
	{hx::fsBool,(int)offsetof(FlxFrame_obj,flipX),HX_HCSTRING("flipX","\x0b","\x45","\x92","\x02")},
	{hx::fsBool,(int)offsetof(FlxFrame_obj,flipY),HX_HCSTRING("flipY","\x0c","\x45","\x92","\x02")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxFrame_obj,sourceSize),HX_HCSTRING("sourceSize","\x3c","\x87","\xb7","\x74")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxFrame_obj,offset),HX_HCSTRING("offset","\x93","\x97","\x3f","\x60")},
	{hx::fsInt,(int)offsetof(FlxFrame_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(FlxFrame_obj,tileMatrix),HX_HCSTRING("tileMatrix","\x0f","\x0c","\x5f","\x20")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(FlxFrame_obj,blitMatrix),HX_HCSTRING("blitMatrix","\x56","\x78","\x21","\xd8")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("point1","\xe1","\x11","\x2e","\xf7"),
	HX_HCSTRING("point2","\xe2","\x11","\x2e","\xf7"),
	HX_HCSTRING("rect","\x24","\x4d","\xa7","\x4b"),
	HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb"),
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("frame","\x2d","\x78","\x83","\x06"),
	HX_HCSTRING("uv","\x61","\x66","\x00","\x00"),
	HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"),
	HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22"),
	HX_HCSTRING("flipX","\x0b","\x45","\x92","\x02"),
	HX_HCSTRING("flipY","\x0c","\x45","\x92","\x02"),
	HX_HCSTRING("sourceSize","\x3c","\x87","\xb7","\x74"),
	HX_HCSTRING("offset","\x93","\x97","\x3f","\x60"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("tileMatrix","\x0f","\x0c","\x5f","\x20"),
	HX_HCSTRING("blitMatrix","\x56","\x78","\x21","\xd8"),
	HX_HCSTRING("cacheFrameMatrix","\x2c","\x83","\xfa","\x88"),
	HX_HCSTRING("prepareBlitMatrix","\xbd","\xdc","\xf9","\x4c"),
	HX_HCSTRING("rotateAndFlip","\x09","\x24","\xe1","\x45"),
	HX_HCSTRING("prepareTransformedBlitMatrix","\xfa","\x77","\x91","\xf4"),
	HX_HCSTRING("prepareMatrix","\x28","\x9b","\x0e","\x82"),
	HX_HCSTRING("fillBlitMatrix","\xb9","\xac","\x6c","\x16"),
	HX_HCSTRING("paint","\x9e","\xb7","\x4e","\xbd"),
	HX_HCSTRING("paintRotatedAndFlipped","\xb6","\xa3","\xdf","\xc7"),
	HX_HCSTRING("checkInputBitmap","\xb1","\x8f","\x20","\x9b"),
	HX_HCSTRING("getDrawFrameRect","\xd7","\xc8","\x6f","\x02"),
	HX_HCSTRING("subFrameTo","\x68","\x95","\xdd","\xc4"),
	HX_HCSTRING("setBorderTo","\x49","\x73","\x59","\x89"),
	HX_HCSTRING("clipTo","\x6b","\x0c","\x58","\x0a"),
	HX_HCSTRING("copyTo","\x90","\x1c","\x33","\xc9"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("set_frame","\x90","\xc0","\x7d","\x2d"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxFrame_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxFrame_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxFrame_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("sort","\x5e","\x27","\x58","\x4c"),
	HX_HCSTRING("sortByName","\xc0","\xa1","\x33","\x6b"),
	::String(null()) };

void FlxFrame_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.graphics.frames.FlxFrame","\xf2","\x22","\x40","\x51");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxFrame_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxFrame_obj >;
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
} // end namespace graphics
} // end namespace frames
