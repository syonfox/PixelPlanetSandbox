#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_flixel_util_FlxBitmapDataUtil
#include <flixel/util/FlxBitmapDataUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxRect
#include <flixel/util/FlxPool_flixel_math_FlxRect.h>
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
#ifndef INCLUDED_flixel_util__FlxColor_FlxColor_Impl_
#include <flixel/util/_FlxColor/FlxColor_Impl_.h>
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
namespace util{

Void FlxBitmapDataUtil_obj::__construct()
{
	return null();
}

//FlxBitmapDataUtil_obj::~FlxBitmapDataUtil_obj() { }

Dynamic FlxBitmapDataUtil_obj::__CreateEmpty() { return  new FlxBitmapDataUtil_obj; }
hx::ObjectPtr< FlxBitmapDataUtil_obj > FlxBitmapDataUtil_obj::__new()
{  hx::ObjectPtr< FlxBitmapDataUtil_obj > _result_ = new FlxBitmapDataUtil_obj();
	_result_->__construct();
	return _result_;}

Dynamic FlxBitmapDataUtil_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxBitmapDataUtil_obj > _result_ = new FlxBitmapDataUtil_obj();
	_result_->__construct();
	return _result_;}

::flixel::math::FlxMatrix FlxBitmapDataUtil_obj::matrix;

Void FlxBitmapDataUtil_obj::merge( ::openfl::_legacy::display::BitmapData sourceBitmapData,::openfl::_legacy::geom::Rectangle sourceRect,::openfl::_legacy::display::BitmapData destBitmapData,::openfl::_legacy::geom::Point destPoint,int redMultiplier,int greenMultiplier,int blueMultiplier,int alphaMultiplier){
{
		HX_STACK_FRAME("flixel.util.FlxBitmapDataUtil","merge",0x21db12bd,"flixel.util.FlxBitmapDataUtil.merge","flixel/util/FlxBitmapDataUtil.hx",32,0xf477b24b)
		HX_STACK_ARG(sourceBitmapData,"sourceBitmapData")
		HX_STACK_ARG(sourceRect,"sourceRect")
		HX_STACK_ARG(destBitmapData,"destBitmapData")
		HX_STACK_ARG(destPoint,"destPoint")
		HX_STACK_ARG(redMultiplier,"redMultiplier")
		HX_STACK_ARG(greenMultiplier,"greenMultiplier")
		HX_STACK_ARG(blueMultiplier,"blueMultiplier")
		HX_STACK_ARG(alphaMultiplier,"alphaMultiplier")
		HX_STACK_LINE(36)
		Float tmp = destPoint->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(36)
		int tmp1 = destBitmapData->get_width();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(36)
		bool tmp2 = (tmp >= tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(36)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(36)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(36)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(36)
		if ((tmp4)){
			HX_STACK_LINE(37)
			Float tmp6 = destPoint->y;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(37)
			int tmp7 = destBitmapData->get_height();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(37)
			int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(37)
			int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(37)
			tmp5 = (tmp6 >= tmp9);
		}
		else{
			HX_STACK_LINE(36)
			tmp5 = true;
		}
		HX_STACK_LINE(36)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(36)
		bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(36)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(36)
		if ((tmp7)){
			HX_STACK_LINE(38)
			Float tmp9 = sourceRect->x;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(38)
			int tmp10 = sourceBitmapData->get_width();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(38)
			int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(38)
			int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(38)
			tmp8 = (tmp9 >= tmp12);
		}
		else{
			HX_STACK_LINE(36)
			tmp8 = true;
		}
		HX_STACK_LINE(36)
		bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(36)
		bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(36)
		bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(36)
		if ((tmp10)){
			HX_STACK_LINE(39)
			Float tmp12 = sourceRect->y;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(39)
			int tmp13 = sourceBitmapData->get_height();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(39)
			int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(39)
			int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(39)
			tmp11 = (tmp12 >= tmp15);
		}
		else{
			HX_STACK_LINE(36)
			tmp11 = true;
		}
		HX_STACK_LINE(36)
		bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(36)
		bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(36)
		bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(36)
		if ((tmp13)){
			HX_STACK_LINE(40)
			Float tmp15 = (sourceRect->x + sourceRect->width);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(40)
			Float tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(40)
			Float tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(40)
			tmp14 = (tmp17 <= (int)0);
		}
		else{
			HX_STACK_LINE(36)
			tmp14 = true;
		}
		HX_STACK_LINE(36)
		bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(36)
		bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(36)
		if ((tmp15)){
			HX_STACK_LINE(41)
			Float tmp17 = (sourceRect->y + sourceRect->height);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(41)
			Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(41)
			tmp16 = (tmp18 <= (int)0);
		}
		else{
			HX_STACK_LINE(36)
			tmp16 = true;
		}
		HX_STACK_LINE(36)
		if ((tmp16)){
			HX_STACK_LINE(43)
			return null();
		}
		HX_STACK_LINE(47)
		while((true)){
			HX_STACK_LINE(47)
			Float tmp17 = (sourceRect->x + sourceRect->width);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(47)
			int tmp18 = sourceBitmapData->get_width();		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(47)
			bool tmp19 = (tmp17 > tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(47)
			bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(47)
			bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(47)
			bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(47)
			if ((tmp21)){
				HX_STACK_LINE(48)
				Float tmp23 = (sourceRect->y + sourceRect->height);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(48)
				Float tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(48)
				Float tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(48)
				int tmp26 = sourceBitmapData->get_height();		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(48)
				int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(48)
				int tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(48)
				tmp22 = (tmp25 > tmp28);
			}
			else{
				HX_STACK_LINE(47)
				tmp22 = true;
			}
			HX_STACK_LINE(47)
			bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(47)
			bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(47)
			bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(47)
			if ((tmp24)){
				HX_STACK_LINE(49)
				tmp25 = (sourceRect->x < (int)0);
			}
			else{
				HX_STACK_LINE(47)
				tmp25 = true;
			}
			HX_STACK_LINE(47)
			bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(47)
			bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(47)
			bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(47)
			if ((tmp27)){
				HX_STACK_LINE(50)
				tmp28 = (sourceRect->y < (int)0);
			}
			else{
				HX_STACK_LINE(47)
				tmp28 = true;
			}
			HX_STACK_LINE(47)
			bool tmp29 = !(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(47)
			bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(47)
			bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(47)
			if ((tmp30)){
				HX_STACK_LINE(51)
				tmp31 = (destPoint->x < (int)0);
			}
			else{
				HX_STACK_LINE(47)
				tmp31 = true;
			}
			HX_STACK_LINE(47)
			bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(47)
			bool tmp33;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(47)
			if ((tmp32)){
				HX_STACK_LINE(52)
				tmp33 = (destPoint->y < (int)0);
			}
			else{
				HX_STACK_LINE(47)
				tmp33 = true;
			}
			HX_STACK_LINE(47)
			bool tmp34 = !(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(47)
			if ((tmp34)){
				HX_STACK_LINE(47)
				break;
			}
			HX_STACK_LINE(54)
			Float tmp35 = (sourceRect->x + sourceRect->width);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(54)
			int tmp36 = sourceBitmapData->get_width();		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(54)
			bool tmp37 = (tmp35 > tmp36);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(54)
			if ((tmp37)){
				HX_STACK_LINE(54)
				int tmp38 = sourceBitmapData->get_width();		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(54)
				Float tmp39 = sourceRect->x;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(54)
				Float tmp40 = (tmp38 - tmp39);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(54)
				sourceRect->width = tmp40;
			}
			HX_STACK_LINE(55)
			Float tmp38 = (sourceRect->y + sourceRect->height);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(55)
			int tmp39 = sourceBitmapData->get_height();		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(55)
			bool tmp40 = (tmp38 > tmp39);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(55)
			if ((tmp40)){
				HX_STACK_LINE(55)
				int tmp41 = sourceBitmapData->get_height();		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(55)
				Float tmp42 = sourceRect->y;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(55)
				Float tmp43 = (tmp41 - tmp42);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(55)
				sourceRect->height = tmp43;
			}
			HX_STACK_LINE(57)
			bool tmp41 = (sourceRect->x < (int)0);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(57)
			if ((tmp41)){
				HX_STACK_LINE(59)
				Float tmp42 = (destPoint->x - sourceRect->x);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(59)
				destPoint->x = tmp42;
				HX_STACK_LINE(60)
				Float tmp43 = (sourceRect->width + sourceRect->x);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(60)
				sourceRect->width = tmp43;
				HX_STACK_LINE(61)
				sourceRect->x = (int)0;
			}
			HX_STACK_LINE(64)
			bool tmp42 = (sourceRect->y < (int)0);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(64)
			if ((tmp42)){
				HX_STACK_LINE(66)
				Float tmp43 = (destPoint->y - sourceRect->y);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(66)
				destPoint->y = tmp43;
				HX_STACK_LINE(67)
				Float tmp44 = (sourceRect->height + sourceRect->y);		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(67)
				sourceRect->height = tmp44;
				HX_STACK_LINE(68)
				sourceRect->y = (int)0;
			}
			HX_STACK_LINE(71)
			Float tmp43 = destPoint->x;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(71)
			int tmp44 = destBitmapData->get_width();		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(71)
			bool tmp45 = (tmp43 >= tmp44);		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(71)
			bool tmp46 = !(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(71)
			bool tmp47;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(71)
			if ((tmp46)){
				HX_STACK_LINE(71)
				Float tmp48 = destPoint->y;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(71)
				int tmp49 = destBitmapData->get_height();		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(71)
				int tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(71)
				tmp47 = (tmp48 >= tmp50);
			}
			else{
				HX_STACK_LINE(71)
				tmp47 = true;
			}
			HX_STACK_LINE(71)
			if ((tmp47)){
				HX_STACK_LINE(71)
				return null();
			}
			HX_STACK_LINE(73)
			bool tmp48 = (destPoint->x < (int)0);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(73)
			if ((tmp48)){
				HX_STACK_LINE(75)
				Float tmp49 = (sourceRect->x - destPoint->x);		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(75)
				sourceRect->x = tmp49;
				HX_STACK_LINE(76)
				Float tmp50 = (sourceRect->width + destPoint->x);		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(76)
				sourceRect->width = tmp50;
				HX_STACK_LINE(77)
				destPoint->x = (int)0;
			}
			HX_STACK_LINE(80)
			bool tmp49 = (destPoint->y < (int)0);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(80)
			if ((tmp49)){
				HX_STACK_LINE(82)
				Float tmp50 = (sourceRect->y - destPoint->y);		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(82)
				sourceRect->y = tmp50;
				HX_STACK_LINE(83)
				Float tmp51 = (sourceRect->height + destPoint->y);		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(83)
				sourceRect->height = tmp51;
				HX_STACK_LINE(84)
				destPoint->y = (int)0;
			}
		}
		HX_STACK_LINE(88)
		bool tmp17 = (sourceRect->width <= (int)0);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(88)
		bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(88)
		bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(88)
		if ((tmp18)){
			HX_STACK_LINE(88)
			tmp19 = (sourceRect->height <= (int)0);
		}
		else{
			HX_STACK_LINE(88)
			tmp19 = true;
		}
		HX_STACK_LINE(88)
		if ((tmp19)){
			HX_STACK_LINE(88)
			return null();
		}
		HX_STACK_LINE(90)
		Float tmp20 = sourceRect->x;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(90)
		int tmp21 = ::Math_obj::round(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(90)
		int startSourceX = tmp21;		HX_STACK_VAR(startSourceX,"startSourceX");
		HX_STACK_LINE(91)
		Float tmp22 = sourceRect->y;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(91)
		int tmp23 = ::Math_obj::round(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(91)
		int startSourceY = tmp23;		HX_STACK_VAR(startSourceY,"startSourceY");
		HX_STACK_LINE(93)
		Float tmp24 = sourceRect->width;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(93)
		int tmp25 = ::Math_obj::round(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(93)
		int width = tmp25;		HX_STACK_VAR(width,"width");
		HX_STACK_LINE(94)
		Float tmp26 = sourceRect->height;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(94)
		int tmp27 = ::Math_obj::round(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(94)
		int height = tmp27;		HX_STACK_VAR(height,"height");
		HX_STACK_LINE(96)
		int sourceX = startSourceX;		HX_STACK_VAR(sourceX,"sourceX");
		HX_STACK_LINE(97)
		int sourceY = startSourceY;		HX_STACK_VAR(sourceY,"sourceY");
		HX_STACK_LINE(99)
		Float tmp28 = destPoint->x;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(99)
		int tmp29 = ::Math_obj::round(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(99)
		int destX = tmp29;		HX_STACK_VAR(destX,"destX");
		HX_STACK_LINE(100)
		Float tmp30 = destPoint->y;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(100)
		int tmp31 = ::Math_obj::round(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(100)
		int destY = tmp31;		HX_STACK_VAR(destY,"destY");
		HX_STACK_LINE(102)
		int currX = destX;		HX_STACK_VAR(currX,"currX");
		HX_STACK_LINE(103)
		int currY = destY;		HX_STACK_VAR(currY,"currY");
		HX_STACK_LINE(105)
		int sourceColor;		HX_STACK_VAR(sourceColor,"sourceColor");
		HX_STACK_LINE(106)
		int destColor;		HX_STACK_VAR(destColor,"destColor");
		HX_STACK_LINE(108)
		int resultRed;		HX_STACK_VAR(resultRed,"resultRed");
		HX_STACK_LINE(109)
		int resultGreen;		HX_STACK_VAR(resultGreen,"resultGreen");
		HX_STACK_LINE(110)
		int resultBlue;		HX_STACK_VAR(resultBlue,"resultBlue");
		HX_STACK_LINE(111)
		int resultAlpha;		HX_STACK_VAR(resultAlpha,"resultAlpha");
		HX_STACK_LINE(113)
		int resultColor = (int)0;		HX_STACK_VAR(resultColor,"resultColor");
		HX_STACK_LINE(114)
		destBitmapData->lock();
		HX_STACK_LINE(117)
		{
			HX_STACK_LINE(117)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(117)
			while((true)){
				HX_STACK_LINE(117)
				bool tmp32 = (_g < width);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(117)
				bool tmp33 = !(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(117)
				if ((tmp33)){
					HX_STACK_LINE(117)
					break;
				}
				HX_STACK_LINE(117)
				int tmp34 = (_g)++;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(117)
				int i = tmp34;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(119)
				{
					HX_STACK_LINE(119)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(119)
					while((true)){
						HX_STACK_LINE(119)
						bool tmp35 = (_g1 < height);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(119)
						bool tmp36 = !(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(119)
						if ((tmp36)){
							HX_STACK_LINE(119)
							break;
						}
						HX_STACK_LINE(119)
						int tmp37 = (_g1)++;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(119)
						int j = tmp37;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(121)
						int tmp38 = (startSourceX + i);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(121)
						sourceX = tmp38;
						HX_STACK_LINE(122)
						int tmp39 = (startSourceY + j);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(122)
						sourceY = tmp39;
						HX_STACK_LINE(124)
						int tmp40 = (destX + i);		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(124)
						currX = tmp40;
						HX_STACK_LINE(125)
						int tmp41 = (destY + j);		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(125)
						currY = tmp41;
						HX_STACK_LINE(127)
						int tmp42 = sourceX;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(127)
						int tmp43 = sourceY;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(127)
						int tmp44 = sourceBitmapData->getPixel32(tmp42,tmp43);		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(127)
						sourceColor = tmp44;
						HX_STACK_LINE(128)
						int tmp45 = currX;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(128)
						int tmp46 = currY;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(128)
						int tmp47 = destBitmapData->getPixel32(tmp45,tmp46);		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(128)
						destColor = tmp47;
						HX_STACK_LINE(131)
						int tmp48 = (int(sourceColor) >> int((int)16));		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(131)
						int tmp49 = (int(tmp48) & int((int)255));		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(131)
						int tmp50 = redMultiplier;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(131)
						int tmp51 = (tmp49 * tmp50);		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(131)
						int tmp52 = (int(destColor) >> int((int)16));		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(131)
						int tmp53 = (int(tmp52) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(131)
						int tmp54 = ((int)256 - redMultiplier);		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(131)
						int tmp55 = (tmp53 * tmp54);		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(131)
						int tmp56 = (tmp51 + tmp55);		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(131)
						Float tmp57 = (Float(tmp56) / Float((int)256));		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(131)
						int tmp58 = ::Std_obj::_int(tmp57);		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(131)
						resultRed = tmp58;
						HX_STACK_LINE(132)
						int tmp59 = (int(sourceColor) >> int((int)8));		HX_STACK_VAR(tmp59,"tmp59");
						HX_STACK_LINE(132)
						int tmp60 = (int(tmp59) & int((int)255));		HX_STACK_VAR(tmp60,"tmp60");
						HX_STACK_LINE(132)
						int tmp61 = greenMultiplier;		HX_STACK_VAR(tmp61,"tmp61");
						HX_STACK_LINE(132)
						int tmp62 = (tmp60 * tmp61);		HX_STACK_VAR(tmp62,"tmp62");
						HX_STACK_LINE(132)
						int tmp63 = (int(destColor) >> int((int)8));		HX_STACK_VAR(tmp63,"tmp63");
						HX_STACK_LINE(132)
						int tmp64 = (int(tmp63) & int((int)255));		HX_STACK_VAR(tmp64,"tmp64");
						HX_STACK_LINE(132)
						int tmp65 = ((int)256 - greenMultiplier);		HX_STACK_VAR(tmp65,"tmp65");
						HX_STACK_LINE(132)
						int tmp66 = (tmp64 * tmp65);		HX_STACK_VAR(tmp66,"tmp66");
						HX_STACK_LINE(132)
						int tmp67 = (tmp62 + tmp66);		HX_STACK_VAR(tmp67,"tmp67");
						HX_STACK_LINE(132)
						Float tmp68 = (Float(tmp67) / Float((int)256));		HX_STACK_VAR(tmp68,"tmp68");
						HX_STACK_LINE(132)
						int tmp69 = ::Std_obj::_int(tmp68);		HX_STACK_VAR(tmp69,"tmp69");
						HX_STACK_LINE(132)
						resultGreen = tmp69;
						HX_STACK_LINE(133)
						int tmp70 = (int(sourceColor) & int((int)255));		HX_STACK_VAR(tmp70,"tmp70");
						HX_STACK_LINE(133)
						int tmp71 = blueMultiplier;		HX_STACK_VAR(tmp71,"tmp71");
						HX_STACK_LINE(133)
						int tmp72 = (tmp70 * tmp71);		HX_STACK_VAR(tmp72,"tmp72");
						HX_STACK_LINE(133)
						int tmp73 = (int(destColor) & int((int)255));		HX_STACK_VAR(tmp73,"tmp73");
						HX_STACK_LINE(133)
						int tmp74 = ((int)256 - blueMultiplier);		HX_STACK_VAR(tmp74,"tmp74");
						HX_STACK_LINE(133)
						int tmp75 = (tmp73 * tmp74);		HX_STACK_VAR(tmp75,"tmp75");
						HX_STACK_LINE(133)
						int tmp76 = (tmp72 + tmp75);		HX_STACK_VAR(tmp76,"tmp76");
						HX_STACK_LINE(133)
						Float tmp77 = (Float(tmp76) / Float((int)256));		HX_STACK_VAR(tmp77,"tmp77");
						HX_STACK_LINE(133)
						int tmp78 = ::Std_obj::_int(tmp77);		HX_STACK_VAR(tmp78,"tmp78");
						HX_STACK_LINE(133)
						resultBlue = tmp78;
						HX_STACK_LINE(134)
						int tmp79 = (int(sourceColor) >> int((int)24));		HX_STACK_VAR(tmp79,"tmp79");
						HX_STACK_LINE(134)
						int tmp80 = (int(tmp79) & int((int)255));		HX_STACK_VAR(tmp80,"tmp80");
						HX_STACK_LINE(134)
						int tmp81 = alphaMultiplier;		HX_STACK_VAR(tmp81,"tmp81");
						HX_STACK_LINE(134)
						int tmp82 = (tmp80 * tmp81);		HX_STACK_VAR(tmp82,"tmp82");
						HX_STACK_LINE(134)
						int tmp83 = (int(destColor) >> int((int)24));		HX_STACK_VAR(tmp83,"tmp83");
						HX_STACK_LINE(134)
						int tmp84 = (int(tmp83) & int((int)255));		HX_STACK_VAR(tmp84,"tmp84");
						HX_STACK_LINE(134)
						int tmp85 = ((int)256 - alphaMultiplier);		HX_STACK_VAR(tmp85,"tmp85");
						HX_STACK_LINE(134)
						int tmp86 = (tmp84 * tmp85);		HX_STACK_VAR(tmp86,"tmp86");
						HX_STACK_LINE(134)
						int tmp87 = (tmp82 + tmp86);		HX_STACK_VAR(tmp87,"tmp87");
						HX_STACK_LINE(134)
						Float tmp88 = (Float(tmp87) / Float((int)256));		HX_STACK_VAR(tmp88,"tmp88");
						HX_STACK_LINE(134)
						int tmp89 = ::Std_obj::_int(tmp88);		HX_STACK_VAR(tmp89,"tmp89");
						HX_STACK_LINE(134)
						resultAlpha = tmp89;
						HX_STACK_LINE(137)
						int tmp90;		HX_STACK_VAR(tmp90,"tmp90");
						HX_STACK_LINE(137)
						{
							HX_STACK_LINE(137)
							int tmp91 = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());		HX_STACK_VAR(tmp91,"tmp91");
							HX_STACK_LINE(137)
							int color = tmp91;		HX_STACK_VAR(color,"color");
							HX_STACK_LINE(137)
							int tmp92;		HX_STACK_VAR(tmp92,"tmp92");
							HX_STACK_LINE(137)
							{
								HX_STACK_LINE(137)
								{
									HX_STACK_LINE(137)
									hx::AndEq(color,(int)-16711681);
									HX_STACK_LINE(137)
									bool tmp93 = (resultRed > (int)255);		HX_STACK_VAR(tmp93,"tmp93");
									HX_STACK_LINE(137)
									int tmp94;		HX_STACK_VAR(tmp94,"tmp94");
									HX_STACK_LINE(137)
									if ((tmp93)){
										HX_STACK_LINE(137)
										tmp94 = (int)255;
									}
									else{
										HX_STACK_LINE(137)
										bool tmp95 = (resultRed < (int)0);		HX_STACK_VAR(tmp95,"tmp95");
										HX_STACK_LINE(137)
										if ((tmp95)){
											HX_STACK_LINE(137)
											tmp94 = (int)0;
										}
										else{
											HX_STACK_LINE(137)
											tmp94 = resultRed;
										}
									}
									HX_STACK_LINE(137)
									int tmp95 = (int(tmp94) << int((int)16));		HX_STACK_VAR(tmp95,"tmp95");
									HX_STACK_LINE(137)
									hx::OrEq(color,tmp95);
									HX_STACK_LINE(137)
									resultRed;
								}
								HX_STACK_LINE(137)
								{
									HX_STACK_LINE(137)
									hx::AndEq(color,(int)-65281);
									HX_STACK_LINE(137)
									bool tmp93 = (resultGreen > (int)255);		HX_STACK_VAR(tmp93,"tmp93");
									HX_STACK_LINE(137)
									int tmp94;		HX_STACK_VAR(tmp94,"tmp94");
									HX_STACK_LINE(137)
									if ((tmp93)){
										HX_STACK_LINE(137)
										tmp94 = (int)255;
									}
									else{
										HX_STACK_LINE(137)
										bool tmp95 = (resultGreen < (int)0);		HX_STACK_VAR(tmp95,"tmp95");
										HX_STACK_LINE(137)
										if ((tmp95)){
											HX_STACK_LINE(137)
											tmp94 = (int)0;
										}
										else{
											HX_STACK_LINE(137)
											tmp94 = resultGreen;
										}
									}
									HX_STACK_LINE(137)
									int tmp95 = (int(tmp94) << int((int)8));		HX_STACK_VAR(tmp95,"tmp95");
									HX_STACK_LINE(137)
									hx::OrEq(color,tmp95);
									HX_STACK_LINE(137)
									resultGreen;
								}
								HX_STACK_LINE(137)
								{
									HX_STACK_LINE(137)
									hx::AndEq(color,(int)-256);
									HX_STACK_LINE(137)
									bool tmp93 = (resultBlue > (int)255);		HX_STACK_VAR(tmp93,"tmp93");
									HX_STACK_LINE(137)
									int tmp94;		HX_STACK_VAR(tmp94,"tmp94");
									HX_STACK_LINE(137)
									if ((tmp93)){
										HX_STACK_LINE(137)
										tmp94 = (int)255;
									}
									else{
										HX_STACK_LINE(137)
										bool tmp95 = (resultBlue < (int)0);		HX_STACK_VAR(tmp95,"tmp95");
										HX_STACK_LINE(137)
										if ((tmp95)){
											HX_STACK_LINE(137)
											tmp94 = (int)0;
										}
										else{
											HX_STACK_LINE(137)
											tmp94 = resultBlue;
										}
									}
									HX_STACK_LINE(137)
									hx::OrEq(color,tmp94);
									HX_STACK_LINE(137)
									resultBlue;
								}
								HX_STACK_LINE(137)
								{
									HX_STACK_LINE(137)
									hx::AndEq(color,(int)16777215);
									HX_STACK_LINE(137)
									bool tmp93 = (resultAlpha > (int)255);		HX_STACK_VAR(tmp93,"tmp93");
									HX_STACK_LINE(137)
									int tmp94;		HX_STACK_VAR(tmp94,"tmp94");
									HX_STACK_LINE(137)
									if ((tmp93)){
										HX_STACK_LINE(137)
										tmp94 = (int)255;
									}
									else{
										HX_STACK_LINE(137)
										bool tmp95 = (resultAlpha < (int)0);		HX_STACK_VAR(tmp95,"tmp95");
										HX_STACK_LINE(137)
										if ((tmp95)){
											HX_STACK_LINE(137)
											tmp94 = (int)0;
										}
										else{
											HX_STACK_LINE(137)
											tmp94 = resultAlpha;
										}
									}
									HX_STACK_LINE(137)
									int tmp95 = (int(tmp94) << int((int)24));		HX_STACK_VAR(tmp95,"tmp95");
									HX_STACK_LINE(137)
									hx::OrEq(color,tmp95);
									HX_STACK_LINE(137)
									resultAlpha;
								}
								HX_STACK_LINE(137)
								tmp92 = color;
							}
							HX_STACK_LINE(137)
							tmp90 = tmp92;
						}
						HX_STACK_LINE(137)
						resultColor = tmp90;
						HX_STACK_LINE(140)
						int tmp91 = currX;		HX_STACK_VAR(tmp91,"tmp91");
						HX_STACK_LINE(140)
						int tmp92 = currY;		HX_STACK_VAR(tmp92,"tmp92");
						HX_STACK_LINE(140)
						int tmp93 = resultColor;		HX_STACK_VAR(tmp93,"tmp93");
						HX_STACK_LINE(140)
						destBitmapData->setPixel32(tmp91,tmp92,tmp93);
					}
				}
			}
		}
		HX_STACK_LINE(143)
		destBitmapData->unlock(null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(FlxBitmapDataUtil_obj,merge,(void))

int FlxBitmapDataUtil_obj::mergeColorComponent( int source,int dest,int multiplier){
	HX_STACK_FRAME("flixel.util.FlxBitmapDataUtil","mergeColorComponent",0x5b71b277,"flixel.util.FlxBitmapDataUtil.mergeColorComponent","flixel/util/FlxBitmapDataUtil.hx",148,0xf477b24b)
	HX_STACK_ARG(source,"source")
	HX_STACK_ARG(dest,"dest")
	HX_STACK_ARG(multiplier,"multiplier")
	HX_STACK_LINE(149)
	int tmp = (source * multiplier);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(149)
	int tmp1 = dest;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(149)
	int tmp2 = ((int)256 - multiplier);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(149)
	int tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(149)
	int tmp4 = (tmp + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(149)
	Float tmp5 = (Float(tmp4) / Float((int)256));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(149)
	int tmp6 = ::Std_obj::_int(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(149)
	return tmp6;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxBitmapDataUtil_obj,mergeColorComponent,return )

Dynamic FlxBitmapDataUtil_obj::compare( ::openfl::_legacy::display::BitmapData Bitmap1,::openfl::_legacy::display::BitmapData Bitmap2){
	HX_STACK_FRAME("flixel.util.FlxBitmapDataUtil","compare",0x217d53ea,"flixel.util.FlxBitmapDataUtil.compare","flixel/util/FlxBitmapDataUtil.hx",164,0xf477b24b)
	HX_STACK_ARG(Bitmap1,"Bitmap1")
	HX_STACK_ARG(Bitmap2,"Bitmap2")
	HX_STACK_LINE(168)
	bool tmp = (Bitmap1 == Bitmap2);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(168)
	if ((tmp)){
		HX_STACK_LINE(170)
		return (int)0;
	}
	HX_STACK_LINE(172)
	int tmp1 = Bitmap1->get_width();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(172)
	int tmp2 = Bitmap2->get_width();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(172)
	bool tmp3 = (tmp1 != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(172)
	if ((tmp3)){
		HX_STACK_LINE(174)
		return (int)-3;
	}
	else{
		HX_STACK_LINE(176)
		int tmp4 = Bitmap1->get_height();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(176)
		int tmp5 = Bitmap2->get_height();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(176)
		bool tmp6 = (tmp4 != tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(176)
		if ((tmp6)){
			HX_STACK_LINE(178)
			return (int)-4;
		}
		else{
			HX_STACK_LINE(182)
			int tmp7 = Bitmap1->get_width();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(182)
			int width = tmp7;		HX_STACK_VAR(width,"width");
			HX_STACK_LINE(183)
			int tmp8 = Bitmap1->get_height();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(183)
			int height = tmp8;		HX_STACK_VAR(height,"height");
			HX_STACK_LINE(184)
			::openfl::_legacy::display::BitmapData tmp9 = ::openfl::_legacy::display::BitmapData_obj::__new(width,height,true,(int)0,null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(184)
			::openfl::_legacy::display::BitmapData result = tmp9;		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(185)
			bool identical = true;		HX_STACK_VAR(identical,"identical");
			HX_STACK_LINE(187)
			{
				HX_STACK_LINE(187)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(187)
				while((true)){
					HX_STACK_LINE(187)
					bool tmp10 = (_g < width);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(187)
					bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(187)
					if ((tmp11)){
						HX_STACK_LINE(187)
						break;
					}
					HX_STACK_LINE(187)
					int tmp12 = (_g)++;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(187)
					int i = tmp12;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(189)
					{
						HX_STACK_LINE(189)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(189)
						while((true)){
							HX_STACK_LINE(189)
							bool tmp13 = (_g1 < height);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(189)
							bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(189)
							if ((tmp14)){
								HX_STACK_LINE(189)
								break;
							}
							HX_STACK_LINE(189)
							int tmp15 = (_g1)++;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(189)
							int j = tmp15;		HX_STACK_VAR(j,"j");
							HX_STACK_LINE(191)
							int tmp16 = i;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(191)
							int tmp17 = j;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(191)
							int tmp18 = Bitmap1->getPixel32(tmp16,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(191)
							int pixel1 = tmp18;		HX_STACK_VAR(pixel1,"pixel1");
							HX_STACK_LINE(192)
							int tmp19 = i;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(192)
							int tmp20 = j;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(192)
							int tmp21 = Bitmap2->getPixel32(tmp19,tmp20);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(192)
							int pixel2 = tmp21;		HX_STACK_VAR(pixel2,"pixel2");
							HX_STACK_LINE(194)
							bool tmp22 = (pixel1 != pixel2);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(194)
							if ((tmp22)){
								HX_STACK_LINE(196)
								identical = false;
								HX_STACK_LINE(198)
								int tmp23 = (int(pixel1) & int((int)16777215));		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(198)
								int tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(198)
								int tmp25 = (int(pixel2) & int((int)16777215));		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(198)
								int tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(198)
								bool tmp27 = (tmp24 != tmp26);		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(198)
								if ((tmp27)){
									HX_STACK_LINE(200)
									int tmp28 = i;		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(200)
									int tmp29 = j;		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(200)
									int tmp30;		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(200)
									{
										HX_STACK_LINE(201)
										int tmp31;		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(201)
										{
											HX_STACK_LINE(201)
											int tmp32 = (int(pixel1) >> int((int)16));		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(201)
											int tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(201)
											int tmp34 = (int(pixel2) >> int((int)16));		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(201)
											int tmp35 = (int(tmp34) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(201)
											int tmp36 = (tmp33 - tmp35);		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(201)
											int diff = tmp36;		HX_STACK_VAR(diff,"diff");
											HX_STACK_LINE(201)
											bool tmp37 = (diff >= (int)0);		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(201)
											if ((tmp37)){
												HX_STACK_LINE(201)
												tmp31 = diff;
											}
											else{
												HX_STACK_LINE(201)
												tmp31 = ((int)256 + diff);
											}
										}
										HX_STACK_LINE(201)
										int Red = tmp31;		HX_STACK_VAR(Red,"Red");
										HX_STACK_LINE(202)
										int tmp32;		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(202)
										{
											HX_STACK_LINE(202)
											int tmp33 = (int(pixel1) >> int((int)8));		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(202)
											int tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(202)
											int tmp35 = (int(pixel2) >> int((int)8));		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(202)
											int tmp36 = (int(tmp35) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(202)
											int tmp37 = (tmp34 - tmp36);		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(202)
											int diff = tmp37;		HX_STACK_VAR(diff,"diff");
											HX_STACK_LINE(202)
											bool tmp38 = (diff >= (int)0);		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(202)
											if ((tmp38)){
												HX_STACK_LINE(202)
												tmp32 = diff;
											}
											else{
												HX_STACK_LINE(202)
												tmp32 = ((int)256 + diff);
											}
										}
										HX_STACK_LINE(202)
										int Green = tmp32;		HX_STACK_VAR(Green,"Green");
										HX_STACK_LINE(203)
										int tmp33;		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(203)
										{
											HX_STACK_LINE(203)
											int tmp34 = (int(pixel1) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(203)
											int tmp35 = (int(pixel2) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(203)
											int tmp36 = (tmp34 - tmp35);		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(203)
											int diff = tmp36;		HX_STACK_VAR(diff,"diff");
											HX_STACK_LINE(203)
											bool tmp37 = (diff >= (int)0);		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(203)
											if ((tmp37)){
												HX_STACK_LINE(203)
												tmp33 = diff;
											}
											else{
												HX_STACK_LINE(203)
												tmp33 = ((int)256 + diff);
											}
										}
										HX_STACK_LINE(203)
										int Blue = tmp33;		HX_STACK_VAR(Blue,"Blue");
										HX_STACK_LINE(200)
										int Alpha = (int)255;		HX_STACK_VAR(Alpha,"Alpha");
										HX_STACK_LINE(200)
										int tmp34 = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(200)
										int color = tmp34;		HX_STACK_VAR(color,"color");
										HX_STACK_LINE(200)
										int tmp35;		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(200)
										{
											HX_STACK_LINE(200)
											{
												HX_STACK_LINE(200)
												hx::AndEq(color,(int)-16711681);
												HX_STACK_LINE(200)
												bool tmp36 = (Red > (int)255);		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(200)
												int tmp37;		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(200)
												if ((tmp36)){
													HX_STACK_LINE(200)
													tmp37 = (int)255;
												}
												else{
													HX_STACK_LINE(200)
													bool tmp38 = (Red < (int)0);		HX_STACK_VAR(tmp38,"tmp38");
													HX_STACK_LINE(200)
													if ((tmp38)){
														HX_STACK_LINE(200)
														tmp37 = (int)0;
													}
													else{
														HX_STACK_LINE(200)
														tmp37 = Red;
													}
												}
												HX_STACK_LINE(200)
												int tmp38 = (int(tmp37) << int((int)16));		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(200)
												hx::OrEq(color,tmp38);
												HX_STACK_LINE(200)
												Red;
											}
											HX_STACK_LINE(200)
											{
												HX_STACK_LINE(200)
												hx::AndEq(color,(int)-65281);
												HX_STACK_LINE(200)
												bool tmp36 = (Green > (int)255);		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(200)
												int tmp37;		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(200)
												if ((tmp36)){
													HX_STACK_LINE(200)
													tmp37 = (int)255;
												}
												else{
													HX_STACK_LINE(200)
													bool tmp38 = (Green < (int)0);		HX_STACK_VAR(tmp38,"tmp38");
													HX_STACK_LINE(200)
													if ((tmp38)){
														HX_STACK_LINE(200)
														tmp37 = (int)0;
													}
													else{
														HX_STACK_LINE(200)
														tmp37 = Green;
													}
												}
												HX_STACK_LINE(200)
												int tmp38 = (int(tmp37) << int((int)8));		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(200)
												hx::OrEq(color,tmp38);
												HX_STACK_LINE(200)
												Green;
											}
											HX_STACK_LINE(200)
											{
												HX_STACK_LINE(200)
												hx::AndEq(color,(int)-256);
												HX_STACK_LINE(200)
												bool tmp36 = (Blue > (int)255);		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(200)
												int tmp37;		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(200)
												if ((tmp36)){
													HX_STACK_LINE(200)
													tmp37 = (int)255;
												}
												else{
													HX_STACK_LINE(200)
													bool tmp38 = (Blue < (int)0);		HX_STACK_VAR(tmp38,"tmp38");
													HX_STACK_LINE(200)
													if ((tmp38)){
														HX_STACK_LINE(200)
														tmp37 = (int)0;
													}
													else{
														HX_STACK_LINE(200)
														tmp37 = Blue;
													}
												}
												HX_STACK_LINE(200)
												hx::OrEq(color,tmp37);
												HX_STACK_LINE(200)
												Blue;
											}
											HX_STACK_LINE(200)
											{
												HX_STACK_LINE(200)
												hx::AndEq(color,(int)16777215);
												HX_STACK_LINE(200)
												bool tmp36 = (Alpha > (int)255);		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(200)
												int tmp37;		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(200)
												if ((tmp36)){
													HX_STACK_LINE(200)
													tmp37 = (int)255;
												}
												else{
													HX_STACK_LINE(200)
													bool tmp38 = (Alpha < (int)0);		HX_STACK_VAR(tmp38,"tmp38");
													HX_STACK_LINE(200)
													if ((tmp38)){
														HX_STACK_LINE(200)
														tmp37 = (int)0;
													}
													else{
														HX_STACK_LINE(200)
														tmp37 = Alpha;
													}
												}
												HX_STACK_LINE(200)
												int tmp38 = (int(tmp37) << int((int)24));		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(200)
												hx::OrEq(color,tmp38);
												HX_STACK_LINE(200)
												Alpha;
											}
											HX_STACK_LINE(200)
											tmp35 = color;
										}
										HX_STACK_LINE(200)
										tmp30 = tmp35;
									}
									HX_STACK_LINE(200)
									result->setPixel32(tmp28,tmp29,tmp30);
								}
								else{
									HX_STACK_LINE(208)
									int tmp28 = (int(pixel1) >> int((int)24));		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(208)
									int tmp29 = (int(tmp28) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(208)
									int alpha1 = tmp29;		HX_STACK_VAR(alpha1,"alpha1");
									HX_STACK_LINE(209)
									int tmp30 = (int(pixel2) >> int((int)24));		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(209)
									int tmp31 = (int(tmp30) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(209)
									int alpha2 = tmp31;		HX_STACK_VAR(alpha2,"alpha2");
									HX_STACK_LINE(211)
									bool tmp32 = (alpha1 != alpha2);		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(211)
									if ((tmp32)){
										HX_STACK_LINE(213)
										int tmp33 = i;		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(213)
										int tmp34 = j;		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(213)
										int tmp35;		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(213)
										{
											HX_STACK_LINE(214)
											int tmp36;		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(214)
											{
												HX_STACK_LINE(214)
												int tmp37 = (alpha1 - alpha2);		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(214)
												int diff = tmp37;		HX_STACK_VAR(diff,"diff");
												HX_STACK_LINE(214)
												bool tmp38 = (diff >= (int)0);		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(214)
												if ((tmp38)){
													HX_STACK_LINE(214)
													tmp36 = diff;
												}
												else{
													HX_STACK_LINE(214)
													tmp36 = ((int)256 + diff);
												}
											}
											HX_STACK_LINE(214)
											int Alpha = tmp36;		HX_STACK_VAR(Alpha,"Alpha");
											HX_STACK_LINE(213)
											int tmp37 = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(213)
											int color = tmp37;		HX_STACK_VAR(color,"color");
											HX_STACK_LINE(213)
											int tmp38;		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(213)
											{
												HX_STACK_LINE(213)
												{
													HX_STACK_LINE(213)
													hx::AndEq(color,(int)-16711681);
													HX_STACK_LINE(213)
													bool tmp39 = false;		HX_STACK_VAR(tmp39,"tmp39");
													HX_STACK_LINE(213)
													int tmp40;		HX_STACK_VAR(tmp40,"tmp40");
													HX_STACK_LINE(213)
													if ((tmp39)){
														HX_STACK_LINE(213)
														tmp40 = (int)255;
													}
													else{
														HX_STACK_LINE(213)
														bool tmp41 = false;		HX_STACK_VAR(tmp41,"tmp41");
														HX_STACK_LINE(213)
														if ((tmp41)){
															HX_STACK_LINE(213)
															tmp40 = (int)0;
														}
														else{
															HX_STACK_LINE(213)
															tmp40 = (int)255;
														}
													}
													HX_STACK_LINE(213)
													int tmp41 = (int(tmp40) << int((int)16));		HX_STACK_VAR(tmp41,"tmp41");
													HX_STACK_LINE(213)
													hx::OrEq(color,tmp41);
													HX_STACK_LINE(213)
													(int)255;
												}
												HX_STACK_LINE(213)
												{
													HX_STACK_LINE(213)
													hx::AndEq(color,(int)-65281);
													HX_STACK_LINE(213)
													bool tmp39 = false;		HX_STACK_VAR(tmp39,"tmp39");
													HX_STACK_LINE(213)
													int tmp40;		HX_STACK_VAR(tmp40,"tmp40");
													HX_STACK_LINE(213)
													if ((tmp39)){
														HX_STACK_LINE(213)
														tmp40 = (int)255;
													}
													else{
														HX_STACK_LINE(213)
														bool tmp41 = false;		HX_STACK_VAR(tmp41,"tmp41");
														HX_STACK_LINE(213)
														if ((tmp41)){
															HX_STACK_LINE(213)
															tmp40 = (int)0;
														}
														else{
															HX_STACK_LINE(213)
															tmp40 = (int)255;
														}
													}
													HX_STACK_LINE(213)
													int tmp41 = (int(tmp40) << int((int)8));		HX_STACK_VAR(tmp41,"tmp41");
													HX_STACK_LINE(213)
													hx::OrEq(color,tmp41);
													HX_STACK_LINE(213)
													(int)255;
												}
												HX_STACK_LINE(213)
												{
													HX_STACK_LINE(213)
													hx::AndEq(color,(int)-256);
													HX_STACK_LINE(213)
													bool tmp39 = false;		HX_STACK_VAR(tmp39,"tmp39");
													HX_STACK_LINE(213)
													int tmp40;		HX_STACK_VAR(tmp40,"tmp40");
													HX_STACK_LINE(213)
													if ((tmp39)){
														HX_STACK_LINE(213)
														tmp40 = (int)255;
													}
													else{
														HX_STACK_LINE(213)
														bool tmp41 = false;		HX_STACK_VAR(tmp41,"tmp41");
														HX_STACK_LINE(213)
														if ((tmp41)){
															HX_STACK_LINE(213)
															tmp40 = (int)0;
														}
														else{
															HX_STACK_LINE(213)
															tmp40 = (int)255;
														}
													}
													HX_STACK_LINE(213)
													hx::OrEq(color,tmp40);
													HX_STACK_LINE(213)
													(int)255;
												}
												HX_STACK_LINE(213)
												{
													HX_STACK_LINE(213)
													hx::AndEq(color,(int)16777215);
													HX_STACK_LINE(213)
													bool tmp39 = (Alpha > (int)255);		HX_STACK_VAR(tmp39,"tmp39");
													HX_STACK_LINE(213)
													int tmp40;		HX_STACK_VAR(tmp40,"tmp40");
													HX_STACK_LINE(213)
													if ((tmp39)){
														HX_STACK_LINE(213)
														tmp40 = (int)255;
													}
													else{
														HX_STACK_LINE(213)
														bool tmp41 = (Alpha < (int)0);		HX_STACK_VAR(tmp41,"tmp41");
														HX_STACK_LINE(213)
														if ((tmp41)){
															HX_STACK_LINE(213)
															tmp40 = (int)0;
														}
														else{
															HX_STACK_LINE(213)
															tmp40 = Alpha;
														}
													}
													HX_STACK_LINE(213)
													int tmp41 = (int(tmp40) << int((int)24));		HX_STACK_VAR(tmp41,"tmp41");
													HX_STACK_LINE(213)
													hx::OrEq(color,tmp41);
													HX_STACK_LINE(213)
													Alpha;
												}
												HX_STACK_LINE(213)
												tmp38 = color;
											}
											HX_STACK_LINE(213)
											tmp35 = tmp38;
										}
										HX_STACK_LINE(213)
										result->setPixel32(tmp33,tmp34,tmp35);
									}
								}
							}
						}
					}
				}
			}
			HX_STACK_LINE(221)
			bool tmp10 = identical;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(221)
			bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(221)
			if ((tmp11)){
				HX_STACK_LINE(223)
				::openfl::_legacy::display::BitmapData tmp12 = result;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(223)
				return tmp12;
			}
		}
	}
	HX_STACK_LINE(227)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxBitmapDataUtil_obj,compare,return )

int FlxBitmapDataUtil_obj::getDiff( int value1,int value2){
	HX_STACK_FRAME("flixel.util.FlxBitmapDataUtil","getDiff",0xb3004700,"flixel.util.FlxBitmapDataUtil.getDiff","flixel/util/FlxBitmapDataUtil.hx",232,0xf477b24b)
	HX_STACK_ARG(value1,"value1")
	HX_STACK_ARG(value2,"value2")
	HX_STACK_LINE(233)
	int tmp = (value1 - value2);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(233)
	int diff = tmp;		HX_STACK_VAR(diff,"diff");
	HX_STACK_LINE(234)
	bool tmp1 = (diff >= (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(234)
	int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(234)
	if ((tmp1)){
		HX_STACK_LINE(234)
		tmp2 = diff;
	}
	else{
		HX_STACK_LINE(234)
		tmp2 = ((int)256 + diff);
	}
	HX_STACK_LINE(234)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxBitmapDataUtil_obj,getDiff,return )

Float FlxBitmapDataUtil_obj::getMemorySize( ::openfl::_legacy::display::BitmapData bitmapData){
	HX_STACK_FRAME("flixel.util.FlxBitmapDataUtil","getMemorySize",0x5bc2859d,"flixel.util.FlxBitmapDataUtil.getMemorySize","flixel/util/FlxBitmapDataUtil.hx",241,0xf477b24b)
	HX_STACK_ARG(bitmapData,"bitmapData")
	HX_STACK_LINE(242)
	int tmp = bitmapData->get_width();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(242)
	int tmp1 = bitmapData->get_height();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(242)
	int tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(242)
	int tmp3 = (tmp2 * (int)4);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(242)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxBitmapDataUtil_obj,getMemorySize,return )

Array< ::Dynamic > FlxBitmapDataUtil_obj::replaceColor( ::openfl::_legacy::display::BitmapData bitmapData,int color,int newColor,hx::Null< bool >  __o_fetchPositions,::flixel::math::FlxRect rect){
bool fetchPositions = __o_fetchPositions.Default(false);
	HX_STACK_FRAME("flixel.util.FlxBitmapDataUtil","replaceColor",0xbc41272a,"flixel.util.FlxBitmapDataUtil.replaceColor","flixel/util/FlxBitmapDataUtil.hx",257,0xf477b24b)
	HX_STACK_ARG(bitmapData,"bitmapData")
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(newColor,"newColor")
	HX_STACK_ARG(fetchPositions,"fetchPositions")
	HX_STACK_ARG(rect,"rect")
{
		HX_STACK_LINE(258)
		Array< ::Dynamic > positions = null();		HX_STACK_VAR(positions,"positions");
		HX_STACK_LINE(259)
		bool tmp = fetchPositions;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(259)
		if ((tmp)){
			HX_STACK_LINE(261)
			positions = Array_obj< ::Dynamic >::__new();
		}
		HX_STACK_LINE(264)
		int startX = (int)0;		HX_STACK_VAR(startX,"startX");
		HX_STACK_LINE(265)
		int startY = (int)0;		HX_STACK_VAR(startY,"startY");
		HX_STACK_LINE(266)
		int tmp1 = bitmapData->get_width();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(266)
		int columns = tmp1;		HX_STACK_VAR(columns,"columns");
		HX_STACK_LINE(267)
		int tmp2 = bitmapData->get_height();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(267)
		int rows = tmp2;		HX_STACK_VAR(rows,"rows");
		HX_STACK_LINE(269)
		bool tmp3 = (rect != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(269)
		if ((tmp3)){
			HX_STACK_LINE(271)
			Float tmp4 = rect->x;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(271)
			int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(271)
			startX = tmp5;
			HX_STACK_LINE(272)
			Float tmp6 = rect->y;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(272)
			int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(272)
			startY = tmp7;
			HX_STACK_LINE(273)
			Float tmp8 = rect->width;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(273)
			int tmp9 = ::Std_obj::_int(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(273)
			columns = tmp9;
			HX_STACK_LINE(274)
			Float tmp10 = rect->height;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(274)
			int tmp11 = ::Std_obj::_int(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(274)
			rows = tmp11;
		}
		HX_STACK_LINE(277)
		int tmp4 = columns;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(277)
		int tmp5 = bitmapData->get_width();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(277)
		Float tmp6 = ::Math_obj::max(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(277)
		int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(277)
		columns = tmp7;
		HX_STACK_LINE(278)
		int tmp8 = rows;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(278)
		int tmp9 = bitmapData->get_height();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(278)
		Float tmp10 = ::Math_obj::max(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(278)
		int tmp11 = ::Std_obj::_int(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(278)
		rows = tmp11;
		HX_STACK_LINE(280)
		int row = (int)0;		HX_STACK_VAR(row,"row");
		HX_STACK_LINE(281)
		int column = (int)0;		HX_STACK_VAR(column,"column");
		HX_STACK_LINE(282)
		int x;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(282)
		int y;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(284)
		bool changed = false;		HX_STACK_VAR(changed,"changed");
		HX_STACK_LINE(285)
		bitmapData->lock();
		HX_STACK_LINE(286)
		while((true)){
			HX_STACK_LINE(286)
			bool tmp12 = (row < rows);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(286)
			bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(286)
			if ((tmp13)){
				HX_STACK_LINE(286)
				break;
			}
			HX_STACK_LINE(288)
			column = (int)0;
			HX_STACK_LINE(289)
			while((true)){
				HX_STACK_LINE(289)
				bool tmp14 = (column < columns);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(289)
				bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(289)
				if ((tmp15)){
					HX_STACK_LINE(289)
					break;
				}
				HX_STACK_LINE(291)
				int tmp16 = (startX + column);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(291)
				x = tmp16;
				HX_STACK_LINE(292)
				int tmp17 = (startY + row);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(292)
				y = tmp17;
				HX_STACK_LINE(293)
				int tmp18 = x;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(293)
				int tmp19 = y;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(293)
				int tmp20 = bitmapData->getPixel32(tmp18,tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(293)
				int tmp21 = color;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(293)
				bool tmp22 = (tmp20 == tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(293)
				if ((tmp22)){
					HX_STACK_LINE(295)
					int tmp23 = x;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(295)
					int tmp24 = y;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(295)
					int tmp25 = newColor;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(295)
					bitmapData->setPixel32(tmp23,tmp24,tmp25);
					HX_STACK_LINE(296)
					changed = true;
					HX_STACK_LINE(297)
					bool tmp26 = fetchPositions;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(297)
					if ((tmp26)){
						HX_STACK_LINE(299)
						::flixel::math::FlxPoint tmp27;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(299)
						{
							HX_STACK_LINE(299)
							::flixel::util::FlxPool_flixel_math_FlxPoint tmp28 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(299)
							::flixel::math::FlxPoint tmp29 = tmp28->get();		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(299)
							int tmp30 = x;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(299)
							int tmp31 = y;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(299)
							::flixel::math::FlxPoint tmp32 = tmp29->set(tmp30,tmp31);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(299)
							::flixel::math::FlxPoint point = tmp32;		HX_STACK_VAR(point,"point");
							HX_STACK_LINE(299)
							point->_inPool = false;
							HX_STACK_LINE(299)
							tmp27 = point;
						}
						HX_STACK_LINE(299)
						positions->push(tmp27);
					}
				}
				HX_STACK_LINE(302)
				(column)++;
			}
			HX_STACK_LINE(304)
			(row)++;
		}
		HX_STACK_LINE(306)
		bitmapData->unlock(null());
		HX_STACK_LINE(308)
		bool tmp12 = changed;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(308)
		bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(308)
		if ((tmp12)){
			HX_STACK_LINE(308)
			tmp13 = (positions == null());
		}
		else{
			HX_STACK_LINE(308)
			tmp13 = false;
		}
		HX_STACK_LINE(308)
		if ((tmp13)){
			HX_STACK_LINE(310)
			positions = Array_obj< ::Dynamic >::__new();
		}
		HX_STACK_LINE(313)
		return positions;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxBitmapDataUtil_obj,replaceColor,return )

::openfl::_legacy::display::BitmapData FlxBitmapDataUtil_obj::addSpacesAndBorders( ::openfl::_legacy::display::BitmapData bitmapData,::flixel::math::FlxPoint frameSize,::flixel::math::FlxPoint spacing,::flixel::math::FlxPoint border,::flixel::math::FlxRect region){
	HX_STACK_FRAME("flixel.util.FlxBitmapDataUtil","addSpacesAndBorders",0xf8f1a643,"flixel.util.FlxBitmapDataUtil.addSpacesAndBorders","flixel/util/FlxBitmapDataUtil.hx",326,0xf477b24b)
	HX_STACK_ARG(bitmapData,"bitmapData")
	HX_STACK_ARG(frameSize,"frameSize")
	HX_STACK_ARG(spacing,"spacing")
	HX_STACK_ARG(border,"border")
	HX_STACK_ARG(region,"region")
	HX_STACK_LINE(327)
	bool tmp = (region == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(327)
	if ((tmp)){
		HX_STACK_LINE(329)
		::flixel::math::FlxRect tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(329)
		{
			HX_STACK_LINE(329)
			int tmp2 = bitmapData->get_width();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(329)
			Float Width = tmp2;		HX_STACK_VAR(Width,"Width");
			HX_STACK_LINE(329)
			int tmp3 = bitmapData->get_height();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(329)
			Float Height = tmp3;		HX_STACK_VAR(Height,"Height");
			HX_STACK_LINE(329)
			::flixel::math::FlxRect tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(329)
			{
				HX_STACK_LINE(329)
				::flixel::util::FlxPool_flixel_math_FlxRect tmp5 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(329)
				::flixel::math::FlxRect tmp6 = tmp5->get();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(329)
				::flixel::math::FlxRect _this = tmp6;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(329)
				_this->x = (int)0;
				HX_STACK_LINE(329)
				_this->y = (int)0;
				HX_STACK_LINE(329)
				_this->width = Width;
				HX_STACK_LINE(329)
				_this->height = Height;
				HX_STACK_LINE(329)
				tmp4 = _this;
			}
			HX_STACK_LINE(329)
			::flixel::math::FlxRect rect = tmp4;		HX_STACK_VAR(rect,"rect");
			HX_STACK_LINE(329)
			rect->_inPool = false;
			HX_STACK_LINE(329)
			tmp1 = rect;
		}
		HX_STACK_LINE(329)
		region = tmp1;
	}
	HX_STACK_LINE(332)
	Float tmp1 = region->width;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(332)
	int tmp2 = ::Std_obj::_int(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(332)
	int frameWidth = tmp2;		HX_STACK_VAR(frameWidth,"frameWidth");
	HX_STACK_LINE(333)
	Float tmp3 = region->height;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(333)
	int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(333)
	int frameHeight = tmp4;		HX_STACK_VAR(frameHeight,"frameHeight");
	HX_STACK_LINE(335)
	bool tmp5 = (frameSize != null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(335)
	if ((tmp5)){
		HX_STACK_LINE(337)
		Float tmp6 = frameSize->x;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(337)
		int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(337)
		frameWidth = tmp7;
		HX_STACK_LINE(338)
		Float tmp8 = frameSize->y;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(338)
		int tmp9 = ::Std_obj::_int(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(338)
		frameHeight = tmp9;
	}
	HX_STACK_LINE(341)
	Float tmp6 = (Float(region->width) / Float(frameWidth));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(341)
	int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(341)
	int numHorizontalFrames = tmp7;		HX_STACK_VAR(numHorizontalFrames,"numHorizontalFrames");
	HX_STACK_LINE(342)
	Float tmp8 = (Float(region->height) / Float(frameHeight));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(342)
	int tmp9 = ::Std_obj::_int(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(342)
	int numVerticalFrames = tmp9;		HX_STACK_VAR(numVerticalFrames,"numVerticalFrames");
	HX_STACK_LINE(344)
	int spaceX = (int)0;		HX_STACK_VAR(spaceX,"spaceX");
	HX_STACK_LINE(345)
	int spaceY = (int)0;		HX_STACK_VAR(spaceY,"spaceY");
	HX_STACK_LINE(347)
	bool tmp10 = (spacing != null());		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(347)
	if ((tmp10)){
		HX_STACK_LINE(349)
		Float tmp11 = spacing->x;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(349)
		int tmp12 = ::Std_obj::_int(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(349)
		spaceX = tmp12;
		HX_STACK_LINE(350)
		Float tmp13 = spacing->y;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(350)
		int tmp14 = ::Std_obj::_int(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(350)
		spaceY = tmp14;
	}
	HX_STACK_LINE(353)
	int borderX = (int)0;		HX_STACK_VAR(borderX,"borderX");
	HX_STACK_LINE(354)
	int borderY = (int)0;		HX_STACK_VAR(borderY,"borderY");
	HX_STACK_LINE(356)
	bool tmp11 = (border != null());		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(356)
	if ((tmp11)){
		HX_STACK_LINE(358)
		Float tmp12 = border->x;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(358)
		int tmp13 = ::Std_obj::_int(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(358)
		borderX = tmp13;
		HX_STACK_LINE(359)
		Float tmp14 = border->y;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(359)
		int tmp15 = ::Std_obj::_int(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(359)
		borderY = tmp15;
	}
	HX_STACK_LINE(363)
	Float tmp12 = region->width;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(363)
	int tmp13 = (numHorizontalFrames - (int)1);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(363)
	int tmp14 = spaceX;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(363)
	int tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(363)
	Float tmp16 = (tmp12 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(363)
	int tmp17 = ((int)2 * numHorizontalFrames);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(363)
	int tmp18 = borderX;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(363)
	int tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(363)
	Float tmp20 = (tmp16 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(363)
	int tmp21 = ::Std_obj::_int(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(364)
	Float tmp22 = region->height;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(364)
	int tmp23 = (numVerticalFrames - (int)1);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(364)
	int tmp24 = spaceY;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(364)
	int tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(364)
	Float tmp26 = (tmp22 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(364)
	int tmp27 = ((int)2 * numVerticalFrames);		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(364)
	int tmp28 = borderY;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(364)
	int tmp29 = (tmp27 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(364)
	Float tmp30 = (tmp26 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(364)
	int tmp31 = ::Std_obj::_int(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(362)
	::openfl::_legacy::display::BitmapData tmp32 = ::openfl::_legacy::display::BitmapData_obj::__new(tmp21,tmp31,true,(int)0,null());		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(362)
	::openfl::_legacy::display::BitmapData result = tmp32;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(368)
	result->lock();
	HX_STACK_LINE(369)
	::openfl::_legacy::geom::Rectangle tmp33 = ::openfl::_legacy::geom::Rectangle_obj::__new((int)0,(int)0,frameWidth,frameHeight);		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(369)
	::openfl::_legacy::geom::Rectangle tempRect = tmp33;		HX_STACK_VAR(tempRect,"tempRect");
	HX_STACK_LINE(370)
	::openfl::_legacy::geom::Point tmp34 = ::openfl::_legacy::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(370)
	::openfl::_legacy::geom::Point tempPoint = tmp34;		HX_STACK_VAR(tempPoint,"tempPoint");
	HX_STACK_LINE(373)
	{
		HX_STACK_LINE(373)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(373)
		while((true)){
			HX_STACK_LINE(373)
			bool tmp35 = (_g < numHorizontalFrames);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(373)
			bool tmp36 = !(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(373)
			if ((tmp36)){
				HX_STACK_LINE(373)
				break;
			}
			HX_STACK_LINE(373)
			int tmp37 = (_g)++;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(373)
			int i = tmp37;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(375)
			int tmp38 = i;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(375)
			int tmp39 = (frameWidth + spaceX);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(375)
			int tmp40 = ((int)2 * borderX);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(375)
			int tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(375)
			int tmp42 = (tmp38 * tmp41);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(375)
			int tmp43 = borderX;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(375)
			int tmp44 = (tmp42 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(375)
			tempPoint->x = tmp44;
			HX_STACK_LINE(376)
			int tmp45 = (i * frameWidth);		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(376)
			Float tmp46 = region->x;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(376)
			Float tmp47 = (tmp45 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(376)
			tempRect->x = tmp47;
			HX_STACK_LINE(378)
			{
				HX_STACK_LINE(378)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(378)
				while((true)){
					HX_STACK_LINE(378)
					bool tmp48 = (_g1 < numVerticalFrames);		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(378)
					bool tmp49 = !(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(378)
					if ((tmp49)){
						HX_STACK_LINE(378)
						break;
					}
					HX_STACK_LINE(378)
					int tmp50 = (_g1)++;		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(378)
					int j = tmp50;		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(380)
					int tmp51 = j;		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(380)
					int tmp52 = (frameHeight + spaceY);		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(380)
					int tmp53 = ((int)2 * borderY);		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(380)
					int tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(380)
					int tmp55 = (tmp51 * tmp54);		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(380)
					int tmp56 = borderY;		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(380)
					int tmp57 = (tmp55 + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(380)
					tempPoint->y = tmp57;
					HX_STACK_LINE(381)
					int tmp58 = (j * frameHeight);		HX_STACK_VAR(tmp58,"tmp58");
					HX_STACK_LINE(381)
					Float tmp59 = region->y;		HX_STACK_VAR(tmp59,"tmp59");
					HX_STACK_LINE(381)
					Float tmp60 = (tmp58 + tmp59);		HX_STACK_VAR(tmp60,"tmp60");
					HX_STACK_LINE(381)
					tempRect->y = tmp60;
					HX_STACK_LINE(382)
					::openfl::_legacy::display::BitmapData tmp61 = bitmapData;		HX_STACK_VAR(tmp61,"tmp61");
					HX_STACK_LINE(382)
					::openfl::_legacy::geom::Rectangle tmp62 = tempRect;		HX_STACK_VAR(tmp62,"tmp62");
					HX_STACK_LINE(382)
					::openfl::_legacy::geom::Point tmp63 = tempPoint;		HX_STACK_VAR(tmp63,"tmp63");
					HX_STACK_LINE(382)
					result->copyPixels(tmp61,tmp62,tmp63,null(),null(),null());
				}
			}
		}
	}
	HX_STACK_LINE(385)
	result->unlock(null());
	HX_STACK_LINE(388)
	::openfl::_legacy::display::BitmapData tmp35 = result;		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(388)
	int tmp36 = frameWidth;		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(388)
	int tmp37 = frameHeight;		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(388)
	int tmp38 = spaceX;		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(388)
	int tmp39 = spaceY;		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(388)
	int tmp40 = borderX;		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(388)
	int tmp41 = borderY;		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(388)
	int tmp42 = numHorizontalFrames;		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(388)
	int tmp43 = numVerticalFrames;		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(388)
	::flixel::util::FlxBitmapDataUtil_obj::copyBorderPixels(tmp35,tmp36,tmp37,tmp38,tmp39,tmp40,tmp41,tmp42,tmp43);
	HX_STACK_LINE(389)
	::openfl::_legacy::display::BitmapData tmp44 = result;		HX_STACK_VAR(tmp44,"tmp44");
	HX_STACK_LINE(389)
	return tmp44;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxBitmapDataUtil_obj,addSpacesAndBorders,return )

::openfl::_legacy::display::BitmapData FlxBitmapDataUtil_obj::copyBorderPixels( ::openfl::_legacy::display::BitmapData bitmapData,int frameWidth,int frameHeight,int spaceX,int spaceY,int borderX,int borderY,int horizontalFrames,int verticalFrames){
	HX_STACK_FRAME("flixel.util.FlxBitmapDataUtil","copyBorderPixels",0x739e20a9,"flixel.util.FlxBitmapDataUtil.copyBorderPixels","flixel/util/FlxBitmapDataUtil.hx",409,0xf477b24b)
	HX_STACK_ARG(bitmapData,"bitmapData")
	HX_STACK_ARG(frameWidth,"frameWidth")
	HX_STACK_ARG(frameHeight,"frameHeight")
	HX_STACK_ARG(spaceX,"spaceX")
	HX_STACK_ARG(spaceY,"spaceY")
	HX_STACK_ARG(borderX,"borderX")
	HX_STACK_ARG(borderY,"borderY")
	HX_STACK_ARG(horizontalFrames,"horizontalFrames")
	HX_STACK_ARG(verticalFrames,"verticalFrames")
	HX_STACK_LINE(411)
	int tmp = bitmapData->get_height();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(411)
	::openfl::_legacy::geom::Rectangle tmp1 = ::openfl::_legacy::geom::Rectangle_obj::__new((int)0,(int)0,(int)1,tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(411)
	::openfl::_legacy::geom::Rectangle tempRect = tmp1;		HX_STACK_VAR(tempRect,"tempRect");
	HX_STACK_LINE(412)
	::openfl::_legacy::geom::Point tmp2 = ::openfl::_legacy::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(412)
	::openfl::_legacy::geom::Point tempPoint = tmp2;		HX_STACK_VAR(tempPoint,"tempPoint");
	HX_STACK_LINE(413)
	bitmapData->lock();
	HX_STACK_LINE(415)
	{
		HX_STACK_LINE(415)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(415)
		while((true)){
			HX_STACK_LINE(415)
			bool tmp3 = (_g < horizontalFrames);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(415)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(415)
			if ((tmp4)){
				HX_STACK_LINE(415)
				break;
			}
			HX_STACK_LINE(415)
			int tmp5 = (_g)++;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(415)
			int i = tmp5;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(417)
			int tmp6 = i;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(417)
			int tmp7 = frameWidth;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(417)
			int tmp8 = ((int)2 * borderX);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(417)
			int tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(417)
			int tmp10 = spaceX;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(417)
			int tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(417)
			int tmp12 = (tmp6 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(417)
			int tmp13 = borderX;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(417)
			int tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(417)
			tempRect->x = tmp14;
			HX_STACK_LINE(419)
			{
				HX_STACK_LINE(419)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(419)
				while((true)){
					HX_STACK_LINE(419)
					bool tmp15 = (_g1 < borderX);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(419)
					bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(419)
					if ((tmp16)){
						HX_STACK_LINE(419)
						break;
					}
					HX_STACK_LINE(419)
					int tmp17 = (_g1)++;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(419)
					int j = tmp17;		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(421)
					Float tmp18 = (tempRect->x - j);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(421)
					Float tmp19 = (tmp18 - (int)1);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(421)
					tempPoint->x = tmp19;
					HX_STACK_LINE(422)
					::openfl::_legacy::display::BitmapData tmp20 = bitmapData;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(422)
					::openfl::_legacy::geom::Rectangle tmp21 = tempRect;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(422)
					::openfl::_legacy::geom::Point tmp22 = tempPoint;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(422)
					bitmapData->copyPixels(tmp20,tmp21,tmp22,null(),null(),null());
				}
			}
			HX_STACK_LINE(425)
			int tmp15 = (frameWidth - (int)1);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(425)
			hx::AddEq(tempRect->x,tmp15);
			HX_STACK_LINE(427)
			{
				HX_STACK_LINE(427)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(427)
				while((true)){
					HX_STACK_LINE(427)
					bool tmp16 = (_g1 < borderX);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(427)
					bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(427)
					if ((tmp17)){
						HX_STACK_LINE(427)
						break;
					}
					HX_STACK_LINE(427)
					int tmp18 = (_g1)++;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(427)
					int j = tmp18;		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(429)
					Float tmp19 = (tempRect->x + j);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(429)
					Float tmp20 = (tmp19 + (int)1);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(429)
					tempPoint->x = tmp20;
					HX_STACK_LINE(430)
					::openfl::_legacy::display::BitmapData tmp21 = bitmapData;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(430)
					::openfl::_legacy::geom::Rectangle tmp22 = tempRect;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(430)
					::openfl::_legacy::geom::Point tmp23 = tempPoint;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(430)
					bitmapData->copyPixels(tmp21,tmp22,tmp23,null(),null(),null());
				}
			}
		}
	}
	HX_STACK_LINE(434)
	tempPoint->setTo((int)0,(int)0);
	HX_STACK_LINE(435)
	int tmp3 = bitmapData->get_width();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(435)
	tempRect->setTo((int)0,(int)0,tmp3,(int)1);
	HX_STACK_LINE(436)
	{
		HX_STACK_LINE(436)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(436)
		while((true)){
			HX_STACK_LINE(436)
			bool tmp4 = (_g < verticalFrames);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(436)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(436)
			if ((tmp5)){
				HX_STACK_LINE(436)
				break;
			}
			HX_STACK_LINE(436)
			int tmp6 = (_g)++;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(436)
			int i = tmp6;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(438)
			int tmp7 = i;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(438)
			int tmp8 = frameHeight;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(438)
			int tmp9 = ((int)2 * borderY);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(438)
			int tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(438)
			int tmp11 = spaceY;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(438)
			int tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(438)
			int tmp13 = (tmp7 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(438)
			int tmp14 = borderY;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(438)
			int tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(438)
			tempRect->y = tmp15;
			HX_STACK_LINE(440)
			{
				HX_STACK_LINE(440)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(440)
				while((true)){
					HX_STACK_LINE(440)
					bool tmp16 = (_g1 < borderY);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(440)
					bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(440)
					if ((tmp17)){
						HX_STACK_LINE(440)
						break;
					}
					HX_STACK_LINE(440)
					int tmp18 = (_g1)++;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(440)
					int j = tmp18;		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(442)
					Float tmp19 = (tempRect->y - j);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(442)
					Float tmp20 = (tmp19 - (int)1);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(442)
					tempPoint->y = tmp20;
					HX_STACK_LINE(443)
					::openfl::_legacy::display::BitmapData tmp21 = bitmapData;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(443)
					::openfl::_legacy::geom::Rectangle tmp22 = tempRect;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(443)
					::openfl::_legacy::geom::Point tmp23 = tempPoint;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(443)
					bitmapData->copyPixels(tmp21,tmp22,tmp23,null(),null(),null());
				}
			}
			HX_STACK_LINE(446)
			int tmp16 = (frameHeight - (int)1);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(446)
			hx::AddEq(tempRect->y,tmp16);
			HX_STACK_LINE(448)
			{
				HX_STACK_LINE(448)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(448)
				while((true)){
					HX_STACK_LINE(448)
					bool tmp17 = (_g1 < borderY);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(448)
					bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(448)
					if ((tmp18)){
						HX_STACK_LINE(448)
						break;
					}
					HX_STACK_LINE(448)
					int tmp19 = (_g1)++;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(448)
					int j = tmp19;		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(450)
					Float tmp20 = (tempRect->y + j);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(450)
					Float tmp21 = (tmp20 + (int)1);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(450)
					tempPoint->y = tmp21;
					HX_STACK_LINE(451)
					::openfl::_legacy::display::BitmapData tmp22 = bitmapData;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(451)
					::openfl::_legacy::geom::Rectangle tmp23 = tempRect;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(451)
					::openfl::_legacy::geom::Point tmp24 = tempPoint;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(451)
					bitmapData->copyPixels(tmp22,tmp23,tmp24,null(),null(),null());
				}
			}
		}
	}
	HX_STACK_LINE(455)
	bitmapData->unlock(null());
	HX_STACK_LINE(456)
	::openfl::_legacy::display::BitmapData tmp4 = bitmapData;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(456)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC9(FlxBitmapDataUtil_obj,copyBorderPixels,return )

::openfl::_legacy::display::BitmapData FlxBitmapDataUtil_obj::generateRotations( ::openfl::_legacy::display::BitmapData brush,hx::Null< int >  __o_rotations,hx::Null< bool >  __o_antiAliasing,hx::Null< bool >  __o_autoBuffer){
int rotations = __o_rotations.Default(16);
bool antiAliasing = __o_antiAliasing.Default(false);
bool autoBuffer = __o_autoBuffer.Default(false);
	HX_STACK_FRAME("flixel.util.FlxBitmapDataUtil","generateRotations",0xe085af05,"flixel.util.FlxBitmapDataUtil.generateRotations","flixel/util/FlxBitmapDataUtil.hx",469,0xf477b24b)
	HX_STACK_ARG(brush,"brush")
	HX_STACK_ARG(rotations,"rotations")
	HX_STACK_ARG(antiAliasing,"antiAliasing")
	HX_STACK_ARG(autoBuffer,"autoBuffer")
{
		HX_STACK_LINE(470)
		int tmp = brush->get_width();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(470)
		int brushWidth = tmp;		HX_STACK_VAR(brushWidth,"brushWidth");
		HX_STACK_LINE(471)
		int tmp1 = brush->get_height();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(471)
		int brushHeight = tmp1;		HX_STACK_VAR(brushHeight,"brushHeight");
		HX_STACK_LINE(472)
		bool tmp2 = (brushHeight > brushWidth);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(472)
		int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(472)
		if ((tmp2)){
			HX_STACK_LINE(472)
			tmp3 = brushHeight;
		}
		else{
			HX_STACK_LINE(472)
			tmp3 = brushWidth;
		}
		HX_STACK_LINE(472)
		int max = tmp3;		HX_STACK_VAR(max,"max");
		HX_STACK_LINE(473)
		bool tmp4 = autoBuffer;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(473)
		int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(473)
		if ((tmp4)){
			HX_STACK_LINE(473)
			Float tmp6 = (max * ((Float)1.5));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(473)
			tmp5 = ::Std_obj::_int(tmp6);
		}
		else{
			HX_STACK_LINE(473)
			tmp5 = max;
		}
		HX_STACK_LINE(473)
		max = tmp5;
		HX_STACK_LINE(475)
		int tmp6 = rotations;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(475)
		Float tmp7 = ::Math_obj::sqrt(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(475)
		int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(475)
		int rows = tmp8;		HX_STACK_VAR(rows,"rows");
		HX_STACK_LINE(476)
		Float tmp9 = (Float(rotations) / Float(rows));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(476)
		int tmp10 = ::Math_obj::ceil(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(476)
		int columns = tmp10;		HX_STACK_VAR(columns,"columns");
		HX_STACK_LINE(477)
		Float tmp11 = (Float((int)360) / Float(rotations));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(477)
		Float bakedRotationAngle = tmp11;		HX_STACK_VAR(bakedRotationAngle,"bakedRotationAngle");
		HX_STACK_LINE(479)
		int tmp12 = (max * columns);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(479)
		int width = tmp12;		HX_STACK_VAR(width,"width");
		HX_STACK_LINE(480)
		int tmp13 = (max * rows);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(480)
		int height = tmp13;		HX_STACK_VAR(height,"height");
		HX_STACK_LINE(482)
		::openfl::_legacy::display::BitmapData tmp14 = ::openfl::_legacy::display::BitmapData_obj::__new(width,height,true,(int)0,null());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(482)
		::openfl::_legacy::display::BitmapData result = tmp14;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(484)
		int row = (int)0;		HX_STACK_VAR(row,"row");
		HX_STACK_LINE(485)
		int column = (int)0;		HX_STACK_VAR(column,"column");
		HX_STACK_LINE(486)
		Float bakedAngle = (int)0;		HX_STACK_VAR(bakedAngle,"bakedAngle");
		HX_STACK_LINE(487)
		Float tmp15 = (brushWidth * ((Float)0.5));		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(487)
		int tmp16 = ::Std_obj::_int(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(487)
		int halfBrushWidth = tmp16;		HX_STACK_VAR(halfBrushWidth,"halfBrushWidth");
		HX_STACK_LINE(488)
		Float tmp17 = (brushHeight * ((Float)0.5));		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(488)
		int tmp18 = ::Std_obj::_int(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(488)
		int halfBrushHeight = tmp18;		HX_STACK_VAR(halfBrushHeight,"halfBrushHeight");
		HX_STACK_LINE(489)
		Float tmp19 = (max * ((Float)0.5));		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(489)
		int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(489)
		int midpointX = tmp20;		HX_STACK_VAR(midpointX,"midpointX");
		HX_STACK_LINE(490)
		Float tmp21 = (max * ((Float)0.5));		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(490)
		int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(490)
		int midpointY = tmp22;		HX_STACK_VAR(midpointY,"midpointY");
		HX_STACK_LINE(492)
		while((true)){
			HX_STACK_LINE(492)
			bool tmp23 = (row < rows);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(492)
			bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(492)
			if ((tmp24)){
				HX_STACK_LINE(492)
				break;
			}
			HX_STACK_LINE(494)
			column = (int)0;
			HX_STACK_LINE(495)
			while((true)){
				HX_STACK_LINE(495)
				bool tmp25 = (column < columns);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(495)
				bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(495)
				if ((tmp26)){
					HX_STACK_LINE(495)
					break;
				}
				HX_STACK_LINE(497)
				::flixel::math::FlxMatrix tmp27 = ::flixel::util::FlxBitmapDataUtil_obj::matrix;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(497)
				tmp27->identity();
				HX_STACK_LINE(498)
				::flixel::math::FlxMatrix tmp28 = ::flixel::util::FlxBitmapDataUtil_obj::matrix;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(498)
				int tmp29 = halfBrushWidth;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(498)
				int tmp30 = -(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(498)
				int tmp31 = halfBrushHeight;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(498)
				int tmp32 = -(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(498)
				tmp28->translate(tmp30,tmp32);
				HX_STACK_LINE(499)
				::flixel::math::FlxMatrix tmp33 = ::flixel::util::FlxBitmapDataUtil_obj::matrix;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(499)
				Float tmp34 = bakedAngle;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(499)
				Float tmp35 = ::Math_obj::PI;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(499)
				Float tmp36 = (Float(tmp35) / Float((int)180));		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(499)
				Float tmp37 = (tmp34 * tmp36);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(499)
				tmp33->rotate(tmp37);
				HX_STACK_LINE(500)
				::flixel::math::FlxMatrix tmp38 = ::flixel::util::FlxBitmapDataUtil_obj::matrix;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(500)
				int tmp39 = (max * column);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(500)
				int tmp40 = midpointX;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(500)
				int tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(500)
				int tmp42 = midpointY;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(500)
				tmp38->translate(tmp41,tmp42);
				HX_STACK_LINE(501)
				hx::AddEq(bakedAngle,bakedRotationAngle);
				HX_STACK_LINE(502)
				::openfl::_legacy::display::BitmapData tmp43 = brush;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(502)
				::flixel::math::FlxMatrix tmp44 = ::flixel::util::FlxBitmapDataUtil_obj::matrix;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(502)
				bool tmp45 = antiAliasing;		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(502)
				result->draw(tmp43,tmp44,null(),null(),null(),tmp45);
				HX_STACK_LINE(503)
				(column)++;
			}
			HX_STACK_LINE(505)
			hx::AddEq(midpointY,max);
			HX_STACK_LINE(506)
			(row)++;
		}
		HX_STACK_LINE(509)
		::openfl::_legacy::display::BitmapData tmp23 = result;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(509)
		return tmp23;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxBitmapDataUtil_obj,generateRotations,return )


FlxBitmapDataUtil_obj::FlxBitmapDataUtil_obj()
{
}

bool FlxBitmapDataUtil_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"merge") ) { outValue = merge_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { outValue = matrix; return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"compare") ) { outValue = compare_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getDiff") ) { outValue = getDiff_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"replaceColor") ) { outValue = replaceColor_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getMemorySize") ) { outValue = getMemorySize_dyn(); return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"copyBorderPixels") ) { outValue = copyBorderPixels_dyn(); return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"generateRotations") ) { outValue = generateRotations_dyn(); return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"mergeColorComponent") ) { outValue = mergeColorComponent_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"addSpacesAndBorders") ) { outValue = addSpacesAndBorders_dyn(); return true;  }
	}
	return false;
}

bool FlxBitmapDataUtil_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { matrix=ioValue.Cast< ::flixel::math::FlxMatrix >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::flixel::math::FlxMatrix*/ ,(void *) &FlxBitmapDataUtil_obj::matrix,HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxBitmapDataUtil_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxBitmapDataUtil_obj::matrix,"matrix");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxBitmapDataUtil_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxBitmapDataUtil_obj::matrix,"matrix");
};

#endif

hx::Class FlxBitmapDataUtil_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb"),
	HX_HCSTRING("merge","\xb8","\xa2","\xc6","\x05"),
	HX_HCSTRING("mergeColorComponent","\xb2","\x23","\x8f","\xc5"),
	HX_HCSTRING("compare","\xa5","\x18","\x69","\x83"),
	HX_HCSTRING("getDiff","\xbb","\x0b","\xec","\x14"),
	HX_HCSTRING("getMemorySize","\x98","\x08","\x07","\x4f"),
	HX_HCSTRING("replaceColor","\x8f","\x5c","\xeb","\x3d"),
	HX_HCSTRING("addSpacesAndBorders","\x7e","\x17","\x0f","\x63"),
	HX_HCSTRING("copyBorderPixels","\x8e","\x6c","\x7f","\x76"),
	HX_HCSTRING("generateRotations","\x80","\xcb","\xc6","\x62"),
	::String(null()) };

void FlxBitmapDataUtil_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.util.FlxBitmapDataUtil","\xb3","\x4e","\x39","\xe9");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxBitmapDataUtil_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxBitmapDataUtil_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< FlxBitmapDataUtil_obj >;
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

void FlxBitmapDataUtil_obj::__boot()
{
	matrix= ::flixel::math::FlxMatrix_obj::__new(null(),null(),null(),null(),null(),null());
}

} // end namespace flixel
} // end namespace util
