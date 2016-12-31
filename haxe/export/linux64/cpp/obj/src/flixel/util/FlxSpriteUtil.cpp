#include <hxcpp.h>

#include "hxMath.h"
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
#ifndef INCLUDED_flixel_effects_FlxFlicker
#include <flixel/effects/FlxFlicker.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_system_FlxAssets
#include <flixel/system/FlxAssets.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_NumTween
#include <flixel/tweens/misc/NumTween.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSpriteUtil
#include <flixel/util/FlxSpriteUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BlendMode
#include <openfl/_legacy/display/BlendMode.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_CapsStyle
#include <openfl/_legacy/display/CapsStyle.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#include <openfl/_legacy/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Graphics
#include <openfl/_legacy/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_JointStyle
#include <openfl/_legacy/display/JointStyle.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_LineScaleMode
#include <openfl/_legacy/display/LineScaleMode.h>
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

Void FlxSpriteUtil_obj::__construct()
{
	return null();
}

//FlxSpriteUtil_obj::~FlxSpriteUtil_obj() { }

Dynamic FlxSpriteUtil_obj::__CreateEmpty() { return  new FlxSpriteUtil_obj; }
hx::ObjectPtr< FlxSpriteUtil_obj > FlxSpriteUtil_obj::__new()
{  hx::ObjectPtr< FlxSpriteUtil_obj > _result_ = new FlxSpriteUtil_obj();
	_result_->__construct();
	return _result_;}

Dynamic FlxSpriteUtil_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxSpriteUtil_obj > _result_ = new FlxSpriteUtil_obj();
	_result_->__construct();
	return _result_;}

::openfl::_legacy::display::Sprite FlxSpriteUtil_obj::flashGfxSprite;

::openfl::_legacy::display::Graphics FlxSpriteUtil_obj::flashGfx;

::flixel::FlxSprite FlxSpriteUtil_obj::alphaMask( ::flixel::FlxSprite output,Dynamic source,Dynamic mask){
	HX_STACK_FRAME("flixel.util.FlxSpriteUtil","alphaMask",0xaad6793b,"flixel.util.FlxSpriteUtil.alphaMask","flixel/util/FlxSpriteUtil.hx",55,0xc647097f)
	HX_STACK_ARG(output,"output")
	HX_STACK_ARG(source,"source")
	HX_STACK_ARG(mask,"mask")
	HX_STACK_LINE(56)
	Dynamic tmp = source;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(56)
	::openfl::_legacy::display::BitmapData tmp1 = ::flixel::_system::FlxAssets_obj::resolveBitmapData(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(56)
	::openfl::_legacy::display::BitmapData data = tmp1;		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(57)
	Dynamic tmp2 = mask;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(57)
	::openfl::_legacy::display::BitmapData tmp3 = ::flixel::_system::FlxAssets_obj::resolveBitmapData(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(57)
	::openfl::_legacy::display::BitmapData maskData = tmp3;		HX_STACK_VAR(maskData,"maskData");
	HX_STACK_LINE(59)
	bool tmp4 = (data == null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(59)
	bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(59)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(59)
	if ((tmp5)){
		HX_STACK_LINE(59)
		tmp6 = (maskData == null());
	}
	else{
		HX_STACK_LINE(59)
		tmp6 = true;
	}
	HX_STACK_LINE(59)
	if ((tmp6)){
		HX_STACK_LINE(61)
		return null();
	}
	HX_STACK_LINE(64)
	::openfl::_legacy::display::BitmapData tmp7 = data->clone();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(64)
	data = tmp7;
	HX_STACK_LINE(65)
	::openfl::_legacy::display::BitmapData tmp8 = maskData;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(65)
	int tmp9 = data->get_width();		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(65)
	int tmp10 = data->get_height();		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(65)
	::openfl::_legacy::geom::Rectangle tmp11 = ::openfl::_legacy::geom::Rectangle_obj::__new((int)0,(int)0,tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(65)
	::openfl::_legacy::geom::Point tmp12 = ::openfl::_legacy::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(65)
	data->copyChannel(tmp8,tmp11,tmp12,(int)8,(int)8);
	HX_STACK_LINE(66)
	::openfl::_legacy::display::BitmapData tmp13 = data;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(66)
	output->set_pixels(tmp13);
	HX_STACK_LINE(67)
	::flixel::FlxSprite tmp14 = output;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(67)
	return tmp14;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxSpriteUtil_obj,alphaMask,return )

::flixel::FlxSprite FlxSpriteUtil_obj::alphaMaskFlxSprite( ::flixel::FlxSprite sprite,::flixel::FlxSprite mask,::flixel::FlxSprite output){
	HX_STACK_FRAME("flixel.util.FlxSpriteUtil","alphaMaskFlxSprite",0x13c0dd5c,"flixel.util.FlxSpriteUtil.alphaMaskFlxSprite","flixel/util/FlxSpriteUtil.hx",84,0xc647097f)
	HX_STACK_ARG(sprite,"sprite")
	HX_STACK_ARG(mask,"mask")
	HX_STACK_ARG(output,"output")
	HX_STACK_LINE(85)
	sprite->drawFrame(null());
	HX_STACK_LINE(86)
	::openfl::_legacy::display::BitmapData tmp = sprite->get_pixels();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(86)
	::openfl::_legacy::display::BitmapData tmp1 = tmp->clone();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(86)
	::openfl::_legacy::display::BitmapData data = tmp1;		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(87)
	::openfl::_legacy::display::BitmapData tmp2 = mask->get_pixels();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(87)
	Float tmp3 = sprite->get_width();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(87)
	Float tmp4 = sprite->get_height();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(87)
	::openfl::_legacy::geom::Rectangle tmp5 = ::openfl::_legacy::geom::Rectangle_obj::__new((int)0,(int)0,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(87)
	::openfl::_legacy::geom::Point tmp6 = ::openfl::_legacy::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(87)
	data->copyChannel(tmp2,tmp5,tmp6,(int)8,(int)8);
	HX_STACK_LINE(88)
	::openfl::_legacy::display::BitmapData tmp7 = data;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(88)
	output->set_pixels(tmp7);
	HX_STACK_LINE(89)
	::flixel::FlxSprite tmp8 = output;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(89)
	return tmp8;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxSpriteUtil_obj,alphaMaskFlxSprite,return )

::flixel::FlxSprite FlxSpriteUtil_obj::screenWrap( ::flixel::FlxSprite sprite,hx::Null< bool >  __o_Left,hx::Null< bool >  __o_Right,hx::Null< bool >  __o_Top,hx::Null< bool >  __o_Bottom){
bool Left = __o_Left.Default(true);
bool Right = __o_Right.Default(true);
bool Top = __o_Top.Default(true);
bool Bottom = __o_Bottom.Default(true);
	HX_STACK_FRAME("flixel.util.FlxSpriteUtil","screenWrap",0x74418065,"flixel.util.FlxSpriteUtil.screenWrap","flixel/util/FlxSpriteUtil.hx",104,0xc647097f)
	HX_STACK_ARG(sprite,"sprite")
	HX_STACK_ARG(Left,"Left")
	HX_STACK_ARG(Right,"Right")
	HX_STACK_ARG(Top,"Top")
	HX_STACK_ARG(Bottom,"Bottom")
{
		HX_STACK_LINE(105)
		bool tmp = Left;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(105)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(105)
		if ((tmp)){
			HX_STACK_LINE(105)
			Float tmp2 = sprite->x;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(105)
			Float tmp3 = (Float(sprite->frameWidth) / Float((int)2));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(105)
			Float tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(105)
			Float tmp5 = (tmp2 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(105)
			Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(105)
			tmp1 = (tmp6 <= (int)0);
		}
		else{
			HX_STACK_LINE(105)
			tmp1 = false;
		}
		HX_STACK_LINE(105)
		if ((tmp1)){
			HX_STACK_LINE(107)
			int tmp2 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(107)
			sprite->set_x(tmp2);
		}
		else{
			HX_STACK_LINE(109)
			bool tmp2 = Right;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(109)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(109)
			if ((tmp2)){
				HX_STACK_LINE(109)
				Float tmp4 = sprite->x;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(109)
				int tmp5 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(109)
				int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(109)
				tmp3 = (tmp4 >= tmp6);
			}
			else{
				HX_STACK_LINE(109)
				tmp3 = false;
			}
			HX_STACK_LINE(109)
			if ((tmp3)){
				HX_STACK_LINE(111)
				sprite->set_x((int)0);
			}
		}
		HX_STACK_LINE(114)
		bool tmp2 = Top;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(114)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(114)
		if ((tmp2)){
			HX_STACK_LINE(114)
			Float tmp4 = sprite->y;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(114)
			Float tmp5 = (Float(sprite->frameHeight) / Float((int)2));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(114)
			Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(114)
			Float tmp7 = (tmp4 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(114)
			Float tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(114)
			tmp3 = (tmp8 <= (int)0);
		}
		else{
			HX_STACK_LINE(114)
			tmp3 = false;
		}
		HX_STACK_LINE(114)
		if ((tmp3)){
			HX_STACK_LINE(116)
			int tmp4 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(116)
			sprite->set_y(tmp4);
		}
		else{
			HX_STACK_LINE(118)
			bool tmp4 = Bottom;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(118)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(118)
			if ((tmp4)){
				HX_STACK_LINE(118)
				Float tmp6 = sprite->y;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(118)
				int tmp7 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(118)
				int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(118)
				tmp5 = (tmp6 >= tmp8);
			}
			else{
				HX_STACK_LINE(118)
				tmp5 = false;
			}
			HX_STACK_LINE(118)
			if ((tmp5)){
				HX_STACK_LINE(120)
				sprite->set_y((int)0);
			}
		}
		HX_STACK_LINE(122)
		::flixel::FlxSprite tmp4 = sprite;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(122)
		return tmp4;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxSpriteUtil_obj,screenWrap,return )

::flixel::FlxSprite FlxSpriteUtil_obj::bound( ::flixel::FlxSprite sprite,hx::Null< Float >  __o_MinX,hx::Null< Float >  __o_MaxX,hx::Null< Float >  __o_MinY,hx::Null< Float >  __o_MaxY){
Float MinX = __o_MinX.Default(0);
Float MaxX = __o_MaxX.Default(0);
Float MinY = __o_MinY.Default(0);
Float MaxY = __o_MaxY.Default(0);
	HX_STACK_FRAME("flixel.util.FlxSpriteUtil","bound",0x7d89918f,"flixel.util.FlxSpriteUtil.bound","flixel/util/FlxSpriteUtil.hx",137,0xc647097f)
	HX_STACK_ARG(sprite,"sprite")
	HX_STACK_ARG(MinX,"MinX")
	HX_STACK_ARG(MaxX,"MaxX")
	HX_STACK_ARG(MinY,"MinY")
	HX_STACK_ARG(MaxY,"MaxY")
{
		HX_STACK_LINE(138)
		bool tmp = (MaxX <= (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(138)
		if ((tmp)){
			HX_STACK_LINE(140)
			int tmp1 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(140)
			MaxX = tmp1;
		}
		HX_STACK_LINE(142)
		bool tmp1 = (MaxY <= (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(142)
		if ((tmp1)){
			HX_STACK_LINE(144)
			int tmp2 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(144)
			MaxY = tmp2;
		}
		HX_STACK_LINE(147)
		hx::SubEq(MaxX,sprite->frameWidth);
		HX_STACK_LINE(148)
		hx::SubEq(MaxY,sprite->frameHeight);
		HX_STACK_LINE(150)
		Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(150)
		{
			HX_STACK_LINE(150)
			Float Value = sprite->x;		HX_STACK_VAR(Value,"Value");
			HX_STACK_LINE(150)
			bool tmp3 = (MinX != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(150)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(150)
			if ((tmp3)){
				HX_STACK_LINE(150)
				tmp4 = (Value < MinX);
			}
			else{
				HX_STACK_LINE(150)
				tmp4 = false;
			}
			HX_STACK_LINE(150)
			Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(150)
			if ((tmp4)){
				HX_STACK_LINE(150)
				tmp5 = MinX;
			}
			else{
				HX_STACK_LINE(150)
				tmp5 = Value;
			}
			HX_STACK_LINE(150)
			Float lowerBound = tmp5;		HX_STACK_VAR(lowerBound,"lowerBound");
			HX_STACK_LINE(150)
			bool tmp6 = (MaxX != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(150)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(150)
			if ((tmp6)){
				HX_STACK_LINE(150)
				tmp7 = (lowerBound > MaxX);
			}
			else{
				HX_STACK_LINE(150)
				tmp7 = false;
			}
			HX_STACK_LINE(150)
			if ((tmp7)){
				HX_STACK_LINE(150)
				tmp2 = MaxX;
			}
			else{
				HX_STACK_LINE(150)
				tmp2 = lowerBound;
			}
		}
		HX_STACK_LINE(150)
		sprite->set_x(tmp2);
		HX_STACK_LINE(151)
		Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(151)
		{
			HX_STACK_LINE(151)
			Float Value = sprite->y;		HX_STACK_VAR(Value,"Value");
			HX_STACK_LINE(151)
			bool tmp4 = (MinY != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(151)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(151)
			if ((tmp4)){
				HX_STACK_LINE(151)
				tmp5 = (Value < MinY);
			}
			else{
				HX_STACK_LINE(151)
				tmp5 = false;
			}
			HX_STACK_LINE(151)
			Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(151)
			if ((tmp5)){
				HX_STACK_LINE(151)
				tmp6 = MinY;
			}
			else{
				HX_STACK_LINE(151)
				tmp6 = Value;
			}
			HX_STACK_LINE(151)
			Float lowerBound = tmp6;		HX_STACK_VAR(lowerBound,"lowerBound");
			HX_STACK_LINE(151)
			bool tmp7 = (MaxY != null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(151)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(151)
			if ((tmp7)){
				HX_STACK_LINE(151)
				tmp8 = (lowerBound > MaxY);
			}
			else{
				HX_STACK_LINE(151)
				tmp8 = false;
			}
			HX_STACK_LINE(151)
			if ((tmp8)){
				HX_STACK_LINE(151)
				tmp3 = MaxY;
			}
			else{
				HX_STACK_LINE(151)
				tmp3 = lowerBound;
			}
		}
		HX_STACK_LINE(151)
		sprite->set_y(tmp3);
		HX_STACK_LINE(153)
		::flixel::FlxSprite tmp4 = sprite;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(153)
		return tmp4;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxSpriteUtil_obj,bound,return )

Void FlxSpriteUtil_obj::space( Array< ::Dynamic > objects,int startX,int startY,hx::Null< int >  __o_horizontalSpacing,hx::Null< int >  __o_verticalSpacing,hx::Null< bool >  __o_spaceFromBounds){
int horizontalSpacing = __o_horizontalSpacing.Default(0);
int verticalSpacing = __o_verticalSpacing.Default(0);
bool spaceFromBounds = __o_spaceFromBounds.Default(false);
	HX_STACK_FRAME("flixel.util.FlxSpriteUtil","space",0x47f36e17,"flixel.util.FlxSpriteUtil.space","flixel/util/FlxSpriteUtil.hx",168,0xc647097f)
	HX_STACK_ARG(objects,"objects")
	HX_STACK_ARG(startX,"startX")
	HX_STACK_ARG(startY,"startY")
	HX_STACK_ARG(horizontalSpacing,"horizontalSpacing")
	HX_STACK_ARG(verticalSpacing,"verticalSpacing")
	HX_STACK_ARG(spaceFromBounds,"spaceFromBounds")
{
		HX_STACK_LINE(169)
		int prevWidth = (int)0;		HX_STACK_VAR(prevWidth,"prevWidth");
		HX_STACK_LINE(170)
		int prevHeight = (int)0;		HX_STACK_VAR(prevHeight,"prevHeight");
		HX_STACK_LINE(172)
		{
			HX_STACK_LINE(172)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(172)
			int _g = objects->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(172)
			while((true)){
				HX_STACK_LINE(172)
				bool tmp = (_g1 < _g);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(172)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(172)
				if ((tmp1)){
					HX_STACK_LINE(172)
					break;
				}
				HX_STACK_LINE(172)
				int tmp2 = (_g1)++;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(172)
				int i = tmp2;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(174)
				::flixel::FlxObject tmp3 = objects->__get(i).StaticCast< ::flixel::FlxObject >();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(174)
				::flixel::FlxObject object = tmp3;		HX_STACK_VAR(object,"object");
				HX_STACK_LINE(176)
				bool tmp4 = spaceFromBounds;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(176)
				if ((tmp4)){
					HX_STACK_LINE(178)
					int tmp5 = (startX + prevWidth);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(178)
					int tmp6 = (i * horizontalSpacing);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(178)
					int tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(178)
					object->set_x(tmp7);
					HX_STACK_LINE(179)
					int tmp8 = (startY + prevHeight);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(179)
					int tmp9 = (i * verticalSpacing);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(179)
					int tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(179)
					object->set_y(tmp10);
				}
				else{
					HX_STACK_LINE(183)
					int tmp5 = startX;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(183)
					int tmp6 = (i * horizontalSpacing);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(183)
					int tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(183)
					object->set_x(tmp7);
					HX_STACK_LINE(184)
					int tmp8 = startY;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(184)
					int tmp9 = (i * verticalSpacing);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(184)
					int tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(184)
					object->set_y(tmp10);
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(FlxSpriteUtil_obj,space,(void))

::flixel::FlxSprite FlxSpriteUtil_obj::drawLine( ::flixel::FlxSprite sprite,Float StartX,Float StartY,Float EndX,Float EndY,Dynamic lineStyle,Dynamic drawStyle){
	HX_STACK_FRAME("flixel.util.FlxSpriteUtil","drawLine",0x239cc967,"flixel.util.FlxSpriteUtil.drawLine","flixel/util/FlxSpriteUtil.hx",204,0xc647097f)
	HX_STACK_ARG(sprite,"sprite")
	HX_STACK_ARG(StartX,"StartX")
	HX_STACK_ARG(StartY,"StartY")
	HX_STACK_ARG(EndX,"EndX")
	HX_STACK_ARG(EndY,"EndY")
	HX_STACK_ARG(lineStyle,"lineStyle")
	HX_STACK_ARG(drawStyle,"drawStyle")
	HX_STACK_LINE(205)
	Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(205)
	{
		HX_STACK_LINE(205)
		Dynamic lineStyle1 = lineStyle;		HX_STACK_VAR(lineStyle1,"lineStyle1");
		HX_STACK_LINE(205)
		bool tmp1 = (lineStyle1 == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(205)
		if ((tmp1)){
			struct _Function_3_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxSpriteUtil.hx",205,0xc647097f)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("thickness","\x74","\xf1","\x66","\x5a") , ((Dynamic)((int)1)),false);
						__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , (int)-1,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(205)
			Dynamic tmp2 = _Function_3_1::Block();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(205)
			lineStyle1 = tmp2;
		}
		HX_STACK_LINE(205)
		bool tmp2 = (lineStyle1->__Field(HX_HCSTRING("thickness","\x74","\xf1","\x66","\x5a"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(205)
		if ((tmp2)){
			HX_STACK_LINE(205)
			lineStyle1->__FieldRef(HX_HCSTRING("thickness","\x74","\xf1","\x66","\x5a")) = (int)1;
		}
		HX_STACK_LINE(205)
		bool tmp3 = (lineStyle1->__Field(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(205)
		if ((tmp3)){
			HX_STACK_LINE(205)
			lineStyle1->__FieldRef(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a")) = (int)-1;
		}
		HX_STACK_LINE(205)
		tmp = lineStyle1;
	}
	HX_STACK_LINE(205)
	lineStyle = tmp;
	HX_STACK_LINE(206)
	{
		HX_STACK_LINE(206)
		::openfl::_legacy::display::Graphics tmp1 = ::flixel::util::FlxSpriteUtil_obj::flashGfx;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(206)
		tmp1->clear();
		HX_STACK_LINE(206)
		{
			HX_STACK_LINE(206)
			bool tmp2 = (lineStyle != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(206)
			if ((tmp2)){
				HX_STACK_LINE(206)
				bool tmp3 = (lineStyle->__Field(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(206)
				Dynamic tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(206)
				if ((tmp3)){
					HX_STACK_LINE(206)
					tmp4 = (int)-16777216;
				}
				else{
					HX_STACK_LINE(206)
					tmp4 = lineStyle->__Field(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"), hx::paccDynamic );
				}
				HX_STACK_LINE(206)
				Dynamic color = tmp4;		HX_STACK_VAR(color,"color");
				HX_STACK_LINE(206)
				bool tmp5 = (lineStyle->__Field(HX_HCSTRING("thickness","\x74","\xf1","\x66","\x5a"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(206)
				if ((tmp5)){
					HX_STACK_LINE(206)
					lineStyle->__FieldRef(HX_HCSTRING("thickness","\x74","\xf1","\x66","\x5a")) = (int)1;
				}
				HX_STACK_LINE(206)
				bool tmp6 = (lineStyle->__Field(HX_HCSTRING("pixelHinting","\xd5","\x9b","\xfb","\x6c"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(206)
				if ((tmp6)){
					HX_STACK_LINE(206)
					lineStyle->__FieldRef(HX_HCSTRING("pixelHinting","\xd5","\x9b","\xfb","\x6c")) = false;
				}
				HX_STACK_LINE(206)
				bool tmp7 = (lineStyle->__Field(HX_HCSTRING("miterLimit","\xf6","\x5c","\x6a","\x54"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(206)
				if ((tmp7)){
					HX_STACK_LINE(206)
					lineStyle->__FieldRef(HX_HCSTRING("miterLimit","\xf6","\x5c","\x6a","\x54")) = (int)3;
				}
				HX_STACK_LINE(206)
				::openfl::_legacy::display::Graphics tmp8 = ::flixel::util::FlxSpriteUtil_obj::flashGfx;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(206)
				Dynamic tmp9 = lineStyle->__Field(HX_HCSTRING("thickness","\x74","\xf1","\x66","\x5a"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(206)
				int tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(206)
				{
					HX_STACK_LINE(206)
					int this1 = color;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(206)
					tmp10 = (int(this1) & int((int)16777215));
				}
				HX_STACK_LINE(206)
				Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(206)
				{
					HX_STACK_LINE(206)
					int this1 = color;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(206)
					int tmp12 = (int(this1) >> int((int)24));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(206)
					int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(206)
					tmp11 = (Float(tmp13) / Float((int)255));
				}
				HX_STACK_LINE(206)
				Dynamic tmp12 = lineStyle->__Field(HX_HCSTRING("pixelHinting","\xd5","\x9b","\xfb","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(206)
				::openfl::_legacy::display::LineScaleMode tmp13 = lineStyle->__Field(HX_HCSTRING("scaleMode","\x0d","\xdb","\xd3","\x2b"), hx::paccDynamic );		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(206)
				::openfl::_legacy::display::CapsStyle tmp14 = lineStyle->__Field(HX_HCSTRING("capsStyle","\x50","\x61","\x32","\x83"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(206)
				::openfl::_legacy::display::JointStyle tmp15 = lineStyle->__Field(HX_HCSTRING("jointStyle","\x87","\xef","\x1c","\xe2"), hx::paccDynamic );		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(206)
				Dynamic tmp16 = lineStyle->__Field(HX_HCSTRING("miterLimit","\xf6","\x5c","\x6a","\x54"), hx::paccDynamic );		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(206)
				tmp8->lineStyle(tmp9,tmp10,tmp11,tmp12,tmp13,tmp14,tmp15,tmp16);
			}
		}
		HX_STACK_LINE(206)
		bool tmp2 = ((int)0 != (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(206)
		if ((tmp2)){
			HX_STACK_LINE(206)
			::openfl::_legacy::display::Graphics tmp3 = ::flixel::util::FlxSpriteUtil_obj::flashGfx;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(206)
			int tmp4 = (int((int)0) & int((int)16777215));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(206)
			int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(206)
			int tmp6 = (int((int)0) >> int((int)24));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(206)
			int tmp7 = (int(tmp6) & int((int)255));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(206)
			Float tmp8 = (Float(tmp7) / Float((int)255));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(206)
			tmp3->beginFill(tmp5,tmp8);
		}
	}
	HX_STACK_LINE(207)
	::openfl::_legacy::display::Graphics tmp1 = ::flixel::util::FlxSpriteUtil_obj::flashGfx;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(207)
	Float tmp2 = StartX;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(207)
	Float tmp3 = StartY;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(207)
	tmp1->moveTo(tmp2,tmp3);
	HX_STACK_LINE(208)
	::openfl::_legacy::display::Graphics tmp4 = ::flixel::util::FlxSpriteUtil_obj::flashGfx;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(208)
	Float tmp5 = EndX;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(208)
	Float tmp6 = EndY;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(208)
	tmp4->lineTo(tmp5,tmp6);
	HX_STACK_LINE(209)
	{
		HX_STACK_LINE(209)
		::openfl::_legacy::display::Graphics tmp7 = ::flixel::util::FlxSpriteUtil_obj::flashGfx;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(209)
		tmp7->endFill();
		HX_STACK_LINE(209)
		::flixel::FlxSprite tmp8 = sprite;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(209)
		Dynamic tmp9 = drawStyle;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(209)
		::flixel::util::FlxSpriteUtil_obj::updateSpriteGraphic(tmp8,tmp9);
		HX_STACK_LINE(209)
		sprite;
	}
	HX_STACK_LINE(210)
	::flixel::FlxSprite tmp7 = sprite;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(210)
	return tmp7;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(FlxSpriteUtil_obj,drawLine,return )

::flixel::FlxSprite FlxSpriteUtil_obj::drawCurve( ::flixel::FlxSprite sprite,Float StartX,Float StartY,Float EndX,Float EndY,Float ControlX,Float ControlY,hx::Null< int >  __o_FillColor,Dynamic lineStyle,Dynamic drawStyle){
int FillColor = __o_FillColor.Default(0);
	HX_STACK_FRAME("flixel.util.FlxSpriteUtil","drawCurve",0xdee9dfdc,"flixel.util.FlxSpriteUtil.drawCurve","flixel/util/FlxSpriteUtil.hx",231,0xc647097f)
	HX_STACK_ARG(sprite,"sprite")
	HX_STACK_ARG(StartX,"StartX")
	HX_STACK_ARG(StartY,"StartY")
	HX_STACK_ARG(EndX,"EndX")
	HX_STACK_ARG(EndY,"EndY")
	HX_STACK_ARG(ControlX,"ControlX")
	HX_STACK_ARG(ControlY,"ControlY")
	HX_STACK_ARG(FillColor,"FillColor")
	HX_STACK_ARG(lineStyle,"lineStyle")
	HX_STACK_ARG(drawStyle,"drawStyle")
{
		HX_STACK_LINE(232)
		Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(232)
		{
			HX_STACK_LINE(232)
			Dynamic lineStyle1 = lineStyle;		HX_STACK_VAR(lineStyle1,"lineStyle1");
			HX_STACK_LINE(232)
			bool tmp1 = (lineStyle1 == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(232)
			if ((tmp1)){
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxSpriteUtil.hx",232,0xc647097f)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_HCSTRING("thickness","\x74","\xf1","\x66","\x5a") , ((Dynamic)((int)1)),false);
							__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , (int)-1,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(232)
				Dynamic tmp2 = _Function_3_1::Block();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(232)
				lineStyle1 = tmp2;
			}
			HX_STACK_LINE(232)
			bool tmp2 = (lineStyle1->__Field(HX_HCSTRING("thickness","\x74","\xf1","\x66","\x5a"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(232)
			if ((tmp2)){
				HX_STACK_LINE(232)
				lineStyle1->__FieldRef(HX_HCSTRING("thickness","\x74","\xf1","\x66","\x5a")) = (int)1;
			}
			HX_STACK_LINE(232)
			bool tmp3 = (lineStyle1->__Field(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(232)
			if ((tmp3)){
				HX_STACK_LINE(232)
				lineStyle1->__FieldRef(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a")) = (int)-1;
			}
			HX_STACK_LINE(232)
			tmp = lineStyle1;
		}
		HX_STACK_LINE(232)
		lineStyle = tmp;
		HX_STACK_LINE(233)
		{
			HX_STACK_LINE(233)
			::openfl::_legacy::display::Graphics tmp1 = ::flixel::util::FlxSpriteUtil_obj::flashGfx;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(233)
			tmp1->clear();
			HX_STACK_LINE(233)
			{
				HX_STACK_LINE(233)
				bool tmp2 = (lineStyle != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(233)
				if ((tmp2)){
					HX_STACK_LINE(233)
					bool tmp3 = (lineStyle->__Field(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(233)
					Dynamic tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(233)
					if ((tmp3)){
						HX_STACK_LINE(233)
						tmp4 = (int)-16777216;
					}
					else{
						HX_STACK_LINE(233)
						tmp4 = lineStyle->__Field(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"), hx::paccDynamic );
					}
					HX_STACK_LINE(233)
					Dynamic color = tmp4;		HX_STACK_VAR(color,"color");
					HX_STACK_LINE(233)
					bool tmp5 = (lineStyle->__Field(HX_HCSTRING("thickness","\x74","\xf1","\x66","\x5a"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(233)
					if ((tmp5)){
						HX_STACK_LINE(233)
						lineStyle->__FieldRef(HX_HCSTRING("thickness","\x74","\xf1","\x66","\x5a")) = (int)1;
					}
					HX_STACK_LINE(233)
					bool tmp6 = (lineStyle->__Field(HX_HCSTRING("pixelHinting","\xd5","\x9b","\xfb","\x6c"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(233)
					if ((tmp6)){
						HX_STACK_LINE(233)
						lineStyle->__FieldRef(HX_HCSTRING("pixelHinting","\xd5","\x9b","\xfb","\x6c")) = false;
					}
					HX_STACK_LINE(233)
					bool tmp7 = (lineStyle->__Field(HX_HCSTRING("miterLimit","\xf6","\x5c","\x6a","\x54"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(233)
					if ((tmp7)){
						HX_STACK_LINE(233)
						lineStyle->__FieldRef(HX_HCSTRING("miterLimit","\xf6","\x5c","\x6a","\x54")) = (int)3;
					}
					HX_STACK_LINE(233)
					::openfl::_legacy::display::Graphics tmp8 = ::flixel::util::FlxSpriteUtil_obj::flashGfx;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(233)
					Dynamic tmp9 = lineStyle->__Field(HX_HCSTRING("thickness","\x74","\xf1","\x66","\x5a"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(233)
					int tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(233)
					{
						HX_STACK_LINE(233)
						int this1 = color;		HX_STACK_VAR(this1,"this1");
						HX_STACK_LINE(233)
						tmp10 = (int(this1) & int((int)16777215));
					}
					HX_STACK_LINE(233)
					Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(233)
					{
						HX_STACK_LINE(233)
						int this1 = color;		HX_STACK_VAR(this1,"this1");
						HX_STACK_LINE(233)
						int tmp12 = (int(this1) >> int((int)24));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(233)
						int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(233)
						tmp11 = (Float(tmp13) / Float((int)255));
					}
					HX_STACK_LINE(233)
					Dynamic tmp12 = lineStyle->__Field(HX_HCSTRING("pixelHinting","\xd5","\x9b","\xfb","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(233)
					::openfl::_legacy::display::LineScaleMode tmp13 = lineStyle->__Field(HX_HCSTRING("scaleMode","\x0d","\xdb","\xd3","\x2b"), hx::paccDynamic );		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(233)
					::openfl::_legacy::display::CapsStyle tmp14 = lineStyle->__Field(HX_HCSTRING("capsStyle","\x50","\x61","\x32","\x83"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(233)
					::openfl::_legacy::display::JointStyle tmp15 = lineStyle->__Field(HX_HCSTRING("jointStyle","\x87","\xef","\x1c","\xe2"), hx::paccDynamic );		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(233)
					Dynamic tmp16 = lineStyle->__Field(HX_HCSTRING("miterLimit","\xf6","\x5c","\x6a","\x54"), hx::paccDynamic );		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(233)
					tmp8->lineStyle(tmp9,tmp10,tmp11,tmp12,tmp13,tmp14,tmp15,tmp16);
				}
			}
			HX_STACK_LINE(233)
			bool tmp2 = (FillColor != (int)0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(233)
			if ((tmp2)){
				HX_STACK_LINE(233)
				::openfl::_legacy::display::Graphics tmp3 = ::flixel::util::FlxSpriteUtil_obj::flashGfx;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(233)
				int tmp4 = (int(FillColor) & int((int)16777215));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(233)
				int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(233)
				int tmp6 = (int(FillColor) >> int((int)24));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(233)
				int tmp7 = (int(tmp6) & int((int)255));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(233)
				Float tmp8 = (Float(tmp7) / Float((int)255));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(233)
				tmp3->beginFill(tmp5,tmp8);
			}
		}
		HX_STACK_LINE(234)
		::openfl::_legacy::display::Graphics tmp1 = ::flixel::util::FlxSpriteUtil_obj::flashGfx;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(234)
		Float tmp2 = StartX;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(234)
		Float tmp3 = StartY;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(234)
		tmp1->moveTo(tmp2,tmp3);
		HX_STACK_LINE(235)
		::openfl::_legacy::display::Graphics tmp4 = ::flixel::util::FlxSpriteUtil_obj::flashGfx;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(235)
		Float tmp5 = EndX;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(235)
		Float tmp6 = EndY;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(235)
		Float tmp7 = ControlX;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(235)
		Float tmp8 = ControlY;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(235)
		tmp4->curveTo(tmp5,tmp6,tmp7,tmp8);
		HX_STACK_LINE(236)
		{
			HX_STACK_LINE(236)
			::openfl::_legacy::display::Graphics tmp9 = ::flixel::util::FlxSpriteUtil_obj::flashGfx;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(236)
			tmp9->endFill();
			HX_STACK_LINE(236)
			::flixel::FlxSprite tmp10 = sprite;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(236)
			Dynamic tmp11 = drawStyle;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(236)
			::flixel::util::FlxSpriteUtil_obj::updateSpriteGraphic(tmp10,tmp11);
			HX_STACK_LINE(236)
			sprite;
		}
		HX_STACK_LINE(237)
		::flixel::FlxSprite tmp9 = sprite;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(237)
		return tmp9;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC10(FlxSpriteUtil_obj,drawCurve,return )

::flixel::FlxSprite FlxSpriteUtil_obj::drawRect( ::flixel::FlxSprite sprite,Float X,Float Y,Float Width,Float Height,hx::Null< int >  __o_FillColor,Dynamic lineStyle,Dynamic drawStyle){
int FillColor = __o_FillColor.Default(-1);
	HX_STACK_FRAME("flixel.util.FlxSpriteUtil","drawRect",0x2790fe97,"flixel.util.FlxSpriteUtil.drawRect","flixel/util/FlxSpriteUtil.hx",255,0xc647097f)
	HX_STACK_ARG(sprite,"sprite")
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(Width,"Width")
	HX_STACK_ARG(Height,"Height")
	HX_STACK_ARG(FillColor,"FillColor")
	HX_STACK_ARG(lineStyle,"lineStyle")
	HX_STACK_ARG(drawStyle,"drawStyle")
{
		HX_STACK_LINE(256)
		{
			HX_STACK_LINE(256)
			::openfl::_legacy::display::Graphics tmp = ::flixel::util::FlxSpriteUtil_obj::flashGfx;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(256)
			tmp->clear();
			HX_STACK_LINE(256)
			{
				HX_STACK_LINE(256)
				bool tmp1 = (lineStyle != null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(256)
				if ((tmp1)){
					HX_STACK_LINE(256)
					bool tmp2 = (lineStyle->__Field(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(256)
					Dynamic tmp3;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(256)
					if ((tmp2)){
						HX_STACK_LINE(256)
						tmp3 = (int)-16777216;
					}
					else{
						HX_STACK_LINE(256)
						tmp3 = lineStyle->__Field(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"), hx::paccDynamic );
					}
					HX_STACK_LINE(256)
					Dynamic color = tmp3;		HX_STACK_VAR(color,"color");
					HX_STACK_LINE(256)
					bool tmp4 = (lineStyle->__Field(HX_HCSTRING("thickness","\x74","\xf1","\x66","\x5a"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(256)
					if ((tmp4)){
						HX_STACK_LINE(256)
						lineStyle->__FieldRef(HX_HCSTRING("thickness","\x74","\xf1","\x66","\x5a")) = (int)1;
					}
					HX_STACK_LINE(256)
					bool tmp5 = (lineStyle->__Field(HX_HCSTRING("pixelHinting","\xd5","\x9b","\xfb","\x6c"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(256)
					if ((tmp5)){
						HX_STACK_LINE(256)
						lineStyle->__FieldRef(HX_HCSTRING("pixelHinting","\xd5","\x9b","\xfb","\x6c")) = false;
					}
					HX_STACK_LINE(256)
					bool tmp6 = (lineStyle->__Field(HX_HCSTRING("miterLimit","\xf6","\x5c","\x6a","\x54"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(256)
					if ((tmp6)){
						HX_STACK_LINE(256)
						lineStyle->__FieldRef(HX_HCSTRING("miterLimit","\xf6","\x5c","\x6a","\x54")) = (int)3;
					}
					HX_STACK_LINE(256)
					::openfl::_legacy::display::Graphics tmp7 = ::flixel::util::FlxSpriteUtil_obj::flashGfx;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(256)
					Dynamic tmp8 = lineStyle->__Field(HX_HCSTRING("thickness","\x74","\xf1","\x66","\x5a"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(256)
					int tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(256)
					{
						HX_STACK_LINE(256)
						int this1 = color;		HX_STACK_VAR(this1,"this1");
						HX_STACK_LINE(256)
						tmp9 = (int(this1) & int((int)16777215));
					}
					HX_STACK_LINE(256)
					Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(256)
					{
						HX_STACK_LINE(256)
						int this1 = color;		HX_STACK_VAR(this1,"this1");
						HX_STACK_LINE(256)
						int tmp11 = (int(this1) >> int((int)24));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(256)
						int tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(256)
						tmp10 = (Float(tmp12) / Float((int)255));
					}
					HX_STACK_LINE(256)
					Dynamic tmp11 = lineStyle->__Field(HX_HCSTRING("pixelHinting","\xd5","\x9b","\xfb","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(256)
					::openfl::_legacy::display::LineScaleMode tmp12 = lineStyle->__Field(HX_HCSTRING("scaleMode","\x0d","\xdb","\xd3","\x2b"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(256)
					::openfl::_legacy::display::CapsStyle tmp13 = lineStyle->__Field(HX_HCSTRING("capsStyle","\x50","\x61","\x32","\x83"), hx::paccDynamic );		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(256)
					::openfl::_legacy::display::JointStyle tmp14 = lineStyle->__Field(HX_HCSTRING("jointStyle","\x87","\xef","\x1c","\xe2"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(256)
					Dynamic tmp15 = lineStyle->__Field(HX_HCSTRING("miterLimit","\xf6","\x5c","\x6a","\x54"), hx::paccDynamic );		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(256)
					tmp7->lineStyle(tmp8,tmp9,tmp10,tmp11,tmp12,tmp13,tmp14,tmp15);
				}
			}
			HX_STACK_LINE(256)
			bool tmp1 = (FillColor != (int)0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(256)
			if ((tmp1)){
				HX_STACK_LINE(256)
				::openfl::_legacy::display::Graphics tmp2 = ::flixel::util::FlxSpriteUtil_obj::flashGfx;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(256)
				int tmp3 = (int(FillColor) & int((int)16777215));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(256)
				int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(256)
				int tmp5 = (int(FillColor) >> int((int)24));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(256)
				int tmp6 = (int(tmp5) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(256)
				Float tmp7 = (Float(tmp6) / Float((int)255));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(256)
				tmp2->beginFill(tmp4,tmp7);
			}
		}
		HX_STACK_LINE(257)
		::openfl::_legacy::display::Graphics tmp = ::flixel::util::FlxSpriteUtil_obj::flashGfx;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(257)
		Float tmp1 = X;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(257)
		Float tmp2 = Y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(257)
		Float tmp3 = Width;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(257)
		Float tmp4 = Height;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(257)
		tmp->drawRect(tmp1,tmp2,tmp3,tmp4);
		HX_STACK_LINE(258)
		{
			HX_STACK_LINE(258)
			::openfl::_legacy::display::Graphics tmp5 = ::flixel::util::FlxSpriteUtil_obj::flashGfx;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(258)
			tmp5->endFill();
			HX_STACK_LINE(258)
			::flixel::FlxSprite tmp6 = sprite;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(258)
			Dynamic tmp7 = drawStyle;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(258)
			::flixel::util::FlxSpriteUtil_obj::updateSpriteGraphic(tmp6,tmp7);
			HX_STACK_LINE(258)
			sprite;
		}
		HX_STACK_LINE(259)
		::flixel::FlxSprite tmp5 = sprite;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(259)
		return tmp5;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(FlxSpriteUtil_obj,drawRect,return )

::flixel::FlxSprite FlxSpriteUtil_obj::drawRoundRect( ::flixel::FlxSprite sprite,Float X,Float Y,Float Width,Float Height,Float EllipseWidth,Float EllipseHeight,hx::Null< int >  __o_FillColor,Dynamic lineStyle,Dynamic drawStyle){
int FillColor = __o_FillColor.Default(-1);
	HX_STACK_FRAME("flixel.util.FlxSpriteUtil","drawRoundRect",0x00e2de3f,"flixel.util.FlxSpriteUtil.drawRoundRect","flixel/util/FlxSpriteUtil.hx",279,0xc647097f)
	HX_STACK_ARG(sprite,"sprite")
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(Width,"Width")
	HX_STACK_ARG(Height,"Height")
	HX_STACK_ARG(EllipseWidth,"EllipseWidth")
	HX_STACK_ARG(EllipseHeight,"EllipseHeight")
	HX_STACK_ARG(FillColor,"FillColor")
	HX_STACK_ARG(lineStyle,"lineStyle")
	HX_STACK_ARG(drawStyle,"drawStyle")
{
		HX_STACK_LINE(280)
		{
			HX_STACK_LINE(280)
			::openfl::_legacy::display::Graphics tmp = ::flixel::util::FlxSpriteUtil_obj::flashGfx;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(280)
			tmp->clear();
			HX_STACK_LINE(280)
			{
				HX_STACK_LINE(280)
				bool tmp1 = (lineStyle != null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(280)
				if ((tmp1)){
					HX_STACK_LINE(280)
					bool tmp2 = (lineStyle->__Field(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(280)
					Dynamic tmp3;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(280)
					if ((tmp2)){
						HX_STACK_LINE(280)
						tmp3 = (int)-16777216;
					}
					else{
						HX_STACK_LINE(280)
						tmp3 = lineStyle->__Field(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"), hx::paccDynamic );
					}
					HX_STACK_LINE(280)
					Dynamic color = tmp3;		HX_STACK_VAR(color,"color");
					HX_STACK_LINE(280)
					bool tmp4 = (lineStyle->__Field(HX_HCSTRING("thickness","\x74","\xf1","\x66","\x5a"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(280)
					if ((tmp4)){
						HX_STACK_LINE(280)
						lineStyle->__FieldRef(HX_HCSTRING("thickness","\x74","\xf1","\x66","\x5a")) = (int)1;
					}
					HX_STACK_LINE(280)
					bool tmp5 = (lineStyle->__Field(HX_HCSTRING("pixelHinting","\xd5","\x9b","\xfb","\x6c"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(280)
					if ((tmp5)){
						HX_STACK_LINE(280)
						lineStyle->__FieldRef(HX_HCSTRING("pixelHinting","\xd5","\x9b","\xfb","\x6c")) = false;
					}
					HX_STACK_LINE(280)
					bool tmp6 = (lineStyle->__Field(HX_HCSTRING("miterLimit","\xf6","\x5c","\x6a","\x54"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(280)
					if ((tmp6)){
						HX_STACK_LINE(280)
						lineStyle->__FieldRef(HX_HCSTRING("miterLimit","\xf6","\x5c","\x6a","\x54")) = (int)3;
					}
					HX_STACK_LINE(280)
					::openfl::_legacy::display::Graphics tmp7 = ::flixel::util::FlxSpriteUtil_obj::flashGfx;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(280)
					Dynamic tmp8 = lineStyle->__Field(HX_HCSTRING("thickness","\x74","\xf1","\x66","\x5a"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(280)
					int tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(280)
					{
						HX_STACK_LINE(280)
						int this1 = color;		HX_STACK_VAR(this1,"this1");
						HX_STACK_LINE(280)
						tmp9 = (int(this1) & int((int)16777215));
					}
					HX_STACK_LINE(280)
					Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(280)
					{
						HX_STACK_LINE(280)
						int this1 = color;		HX_STACK_VAR(this1,"this1");
						HX_STACK_LINE(280)
						int tmp11 = (int(this1) >> int((int)24));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(280)
						int tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(280)
						tmp10 = (Float(tmp12) / Float((int)255));
					}
					HX_STACK_LINE(280)
					Dynamic tmp11 = lineStyle->__Field(HX_HCSTRING("pixelHinting","\xd5","\x9b","\xfb","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(280)
					::openfl::_legacy::display::LineScaleMode tmp12 = lineStyle->__Field(HX_HCSTRING("scaleMode","\x0d","\xdb","\xd3","\x2b"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(280)
					::openfl::_legacy::display::CapsStyle tmp13 = lineStyle->__Field(HX_HCSTRING("capsStyle","\x50","\x61","\x32","\x83"), hx::paccDynamic );		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(280)
					::openfl::_legacy::display::JointStyle tmp14 = lineStyle->__Field(HX_HCSTRING("jointStyle","\x87","\xef","\x1c","\xe2"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(280)
					Dynamic tmp15 = lineStyle->__Field(HX_HCSTRING("miterLimit","\xf6","\x5c","\x6a","\x54"), hx::paccDynamic );		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(280)
					tmp7->lineStyle(tmp8,tmp9,tmp10,tmp11,tmp12,tmp13,tmp14,tmp15);
				}
			}
			HX_STACK_LINE(280)
			bool tmp1 = (FillColor != (int)0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(280)
			if ((tmp1)){
				HX_STACK_LINE(280)
				::openfl::_legacy::display::Graphics tmp2 = ::flixel::util::FlxSpriteUtil_obj::flashGfx;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(280)
				int tmp3 = (int(FillColor) & int((int)16777215));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(280)
				int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(280)
				int tmp5 = (int(FillColor) >> int((int)24));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(280)
				int tmp6 = (int(tmp5) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(280)
				Float tmp7 = (Float(tmp6) / Float((int)255));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(280)
				tmp2->beginFill(tmp4,tmp7);
			}
		}
		HX_STACK_LINE(281)
		::openfl::_legacy::display::Graphics tmp = ::flixel::util::FlxSpriteUtil_obj::flashGfx;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(281)
		Float tmp1 = X;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(281)
		Float tmp2 = Y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(281)
		Float tmp3 = Width;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(281)
		Float tmp4 = Height;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(281)
		Float tmp5 = EllipseWidth;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(281)
		Float tmp6 = EllipseHeight;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(281)
		tmp->drawRoundRect(tmp1,tmp2,tmp3,tmp4,tmp5,tmp6);
		HX_STACK_LINE(282)
		{
			HX_STACK_LINE(282)
			::openfl::_legacy::display::Graphics tmp7 = ::flixel::util::FlxSpriteUtil_obj::flashGfx;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(282)
			tmp7->endFill();
			HX_STACK_LINE(282)
			::flixel::FlxSprite tmp8 = sprite;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(282)
			Dynamic tmp9 = drawStyle;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(282)
			::flixel::util::FlxSpriteUtil_obj::updateSpriteGraphic(tmp8,tmp9);
			HX_STACK_LINE(282)
			sprite;
		}
		HX_STACK_LINE(283)
		::flixel::FlxSprite tmp7 = sprite;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(283)
		return tmp7;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC10(FlxSpriteUtil_obj,drawRoundRect,return )

::flixel::FlxSprite FlxSpriteUtil_obj::drawCircle( ::flixel::FlxSprite sprite,hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_Radius,hx::Null< int >  __o_FillColor,Dynamic lineStyle,Dynamic drawStyle){
Float X = __o_X.Default(-1);
Float Y = __o_Y.Default(-1);
Float Radius = __o_Radius.Default(-1);
int FillColor = __o_FillColor.Default(-1);
	HX_STACK_FRAME("flixel.util.FlxSpriteUtil","drawCircle",0x44dca643,"flixel.util.FlxSpriteUtil.drawCircle","flixel/util/FlxSpriteUtil.hx",330,0xc647097f)
	HX_STACK_ARG(sprite,"sprite")
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(Radius,"Radius")
	HX_STACK_ARG(FillColor,"FillColor")
	HX_STACK_ARG(lineStyle,"lineStyle")
	HX_STACK_ARG(drawStyle,"drawStyle")
{
		HX_STACK_LINE(331)
		Float tmp = X;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(331)
		int tmp1 = (int)-1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(331)
		bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(331)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(331)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(331)
		if ((tmp3)){
			HX_STACK_LINE(331)
			tmp4 = (Y == (int)-1);
		}
		else{
			HX_STACK_LINE(331)
			tmp4 = true;
		}
		HX_STACK_LINE(331)
		if ((tmp4)){
			HX_STACK_LINE(333)
			::flixel::math::FlxPoint tmp5 = sprite->getGraphicMidpoint(null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(333)
			::flixel::math::FlxPoint midPoint = tmp5;		HX_STACK_VAR(midPoint,"midPoint");
			HX_STACK_LINE(335)
			bool tmp6 = (X == (int)-1);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(335)
			if ((tmp6)){
				HX_STACK_LINE(336)
				Float tmp7 = (midPoint->x - sprite->x);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(336)
				X = tmp7;
			}
			HX_STACK_LINE(337)
			bool tmp7 = (Y == (int)-1);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(337)
			if ((tmp7)){
				HX_STACK_LINE(338)
				Float tmp8 = (midPoint->y - sprite->y);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(338)
				Y = tmp8;
			}
			HX_STACK_LINE(340)
			midPoint->put();
		}
		HX_STACK_LINE(343)
		bool tmp5 = (Radius < (int)1);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(343)
		if ((tmp5)){
			HX_STACK_LINE(345)
			int tmp6 = sprite->frameWidth;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(345)
			int tmp7 = sprite->frameHeight;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(345)
			Float tmp8 = ::Math_obj::min(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(345)
			Float minVal = tmp8;		HX_STACK_VAR(minVal,"minVal");
			HX_STACK_LINE(346)
			Float tmp9 = (Float(minVal) / Float((int)2));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(346)
			Radius = tmp9;
		}
		HX_STACK_LINE(349)
		{
			HX_STACK_LINE(349)
			::openfl::_legacy::display::Graphics tmp6 = ::flixel::util::FlxSpriteUtil_obj::flashGfx;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(349)
			tmp6->clear();
			HX_STACK_LINE(349)
			{
				HX_STACK_LINE(349)
				bool tmp7 = (lineStyle != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(349)
				if ((tmp7)){
					HX_STACK_LINE(349)
					bool tmp8 = (lineStyle->__Field(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(349)
					Dynamic tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(349)
					if ((tmp8)){
						HX_STACK_LINE(349)
						tmp9 = (int)-16777216;
					}
					else{
						HX_STACK_LINE(349)
						tmp9 = lineStyle->__Field(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"), hx::paccDynamic );
					}
					HX_STACK_LINE(349)
					Dynamic color = tmp9;		HX_STACK_VAR(color,"color");
					HX_STACK_LINE(349)
					bool tmp10 = (lineStyle->__Field(HX_HCSTRING("thickness","\x74","\xf1","\x66","\x5a"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(349)
					if ((tmp10)){
						HX_STACK_LINE(349)
						lineStyle->__FieldRef(HX_HCSTRING("thickness","\x74","\xf1","\x66","\x5a")) = (int)1;
					}
					HX_STACK_LINE(349)
					bool tmp11 = (lineStyle->__Field(HX_HCSTRING("pixelHinting","\xd5","\x9b","\xfb","\x6c"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(349)
					if ((tmp11)){
						HX_STACK_LINE(349)
						lineStyle->__FieldRef(HX_HCSTRING("pixelHinting","\xd5","\x9b","\xfb","\x6c")) = false;
					}
					HX_STACK_LINE(349)
					bool tmp12 = (lineStyle->__Field(HX_HCSTRING("miterLimit","\xf6","\x5c","\x6a","\x54"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(349)
					if ((tmp12)){
						HX_STACK_LINE(349)
						lineStyle->__FieldRef(HX_HCSTRING("miterLimit","\xf6","\x5c","\x6a","\x54")) = (int)3;
					}
					HX_STACK_LINE(349)
					::openfl::_legacy::display::Graphics tmp13 = ::flixel::util::FlxSpriteUtil_obj::flashGfx;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(349)
					Dynamic tmp14 = lineStyle->__Field(HX_HCSTRING("thickness","\x74","\xf1","\x66","\x5a"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(349)
					int tmp15;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(349)
					{
						HX_STACK_LINE(349)
						int this1 = color;		HX_STACK_VAR(this1,"this1");
						HX_STACK_LINE(349)
						tmp15 = (int(this1) & int((int)16777215));
					}
					HX_STACK_LINE(349)
					Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(349)
					{
						HX_STACK_LINE(349)
						int this1 = color;		HX_STACK_VAR(this1,"this1");
						HX_STACK_LINE(349)
						int tmp17 = (int(this1) >> int((int)24));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(349)
						int tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(349)
						tmp16 = (Float(tmp18) / Float((int)255));
					}
					HX_STACK_LINE(349)
					Dynamic tmp17 = lineStyle->__Field(HX_HCSTRING("pixelHinting","\xd5","\x9b","\xfb","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(349)
					::openfl::_legacy::display::LineScaleMode tmp18 = lineStyle->__Field(HX_HCSTRING("scaleMode","\x0d","\xdb","\xd3","\x2b"), hx::paccDynamic );		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(349)
					::openfl::_legacy::display::CapsStyle tmp19 = lineStyle->__Field(HX_HCSTRING("capsStyle","\x50","\x61","\x32","\x83"), hx::paccDynamic );		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(349)
					::openfl::_legacy::display::JointStyle tmp20 = lineStyle->__Field(HX_HCSTRING("jointStyle","\x87","\xef","\x1c","\xe2"), hx::paccDynamic );		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(349)
					Dynamic tmp21 = lineStyle->__Field(HX_HCSTRING("miterLimit","\xf6","\x5c","\x6a","\x54"), hx::paccDynamic );		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(349)
					tmp13->lineStyle(tmp14,tmp15,tmp16,tmp17,tmp18,tmp19,tmp20,tmp21);
				}
			}
			HX_STACK_LINE(349)
			bool tmp7 = (FillColor != (int)0);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(349)
			if ((tmp7)){
				HX_STACK_LINE(349)
				::openfl::_legacy::display::Graphics tmp8 = ::flixel::util::FlxSpriteUtil_obj::flashGfx;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(349)
				int tmp9 = (int(FillColor) & int((int)16777215));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(349)
				int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(349)
				int tmp11 = (int(FillColor) >> int((int)24));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(349)
				int tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(349)
				Float tmp13 = (Float(tmp12) / Float((int)255));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(349)
				tmp8->beginFill(tmp10,tmp13);
			}
		}
		HX_STACK_LINE(350)
		::openfl::_legacy::display::Graphics tmp6 = ::flixel::util::FlxSpriteUtil_obj::flashGfx;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(350)
		Float tmp7 = X;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(350)
		Float tmp8 = Y;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(350)
		Float tmp9 = Radius;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(350)
		tmp6->drawCircle(tmp7,tmp8,tmp9);
		HX_STACK_LINE(351)
		{
			HX_STACK_LINE(351)
			::openfl::_legacy::display::Graphics tmp10 = ::flixel::util::FlxSpriteUtil_obj::flashGfx;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(351)
			tmp10->endFill();
			HX_STACK_LINE(351)
			::flixel::FlxSprite tmp11 = sprite;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(351)
			Dynamic tmp12 = drawStyle;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(351)
			::flixel::util::FlxSpriteUtil_obj::updateSpriteGraphic(tmp11,tmp12);
			HX_STACK_LINE(351)
			sprite;
		}
		HX_STACK_LINE(352)
		::flixel::FlxSprite tmp10 = sprite;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(352)
		return tmp10;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(FlxSpriteUtil_obj,drawCircle,return )

::flixel::FlxSprite FlxSpriteUtil_obj::drawEllipse( ::flixel::FlxSprite sprite,Float X,Float Y,Float Width,Float Height,hx::Null< int >  __o_FillColor,Dynamic lineStyle,Dynamic drawStyle){
int FillColor = __o_FillColor.Default(-1);
	HX_STACK_FRAME("flixel.util.FlxSpriteUtil","drawEllipse",0x1204b94b,"flixel.util.FlxSpriteUtil.drawEllipse","flixel/util/FlxSpriteUtil.hx",370,0xc647097f)
	HX_STACK_ARG(sprite,"sprite")
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(Width,"Width")
	HX_STACK_ARG(Height,"Height")
	HX_STACK_ARG(FillColor,"FillColor")
	HX_STACK_ARG(lineStyle,"lineStyle")
	HX_STACK_ARG(drawStyle,"drawStyle")
{
		HX_STACK_LINE(371)
		{
			HX_STACK_LINE(371)
			::openfl::_legacy::display::Graphics tmp = ::flixel::util::FlxSpriteUtil_obj::flashGfx;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(371)
			tmp->clear();
			HX_STACK_LINE(371)
			{
				HX_STACK_LINE(371)
				bool tmp1 = (lineStyle != null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(371)
				if ((tmp1)){
					HX_STACK_LINE(371)
					bool tmp2 = (lineStyle->__Field(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(371)
					Dynamic tmp3;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(371)
					if ((tmp2)){
						HX_STACK_LINE(371)
						tmp3 = (int)-16777216;
					}
					else{
						HX_STACK_LINE(371)
						tmp3 = lineStyle->__Field(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"), hx::paccDynamic );
					}
					HX_STACK_LINE(371)
					Dynamic color = tmp3;		HX_STACK_VAR(color,"color");
					HX_STACK_LINE(371)
					bool tmp4 = (lineStyle->__Field(HX_HCSTRING("thickness","\x74","\xf1","\x66","\x5a"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(371)
					if ((tmp4)){
						HX_STACK_LINE(371)
						lineStyle->__FieldRef(HX_HCSTRING("thickness","\x74","\xf1","\x66","\x5a")) = (int)1;
					}
					HX_STACK_LINE(371)
					bool tmp5 = (lineStyle->__Field(HX_HCSTRING("pixelHinting","\xd5","\x9b","\xfb","\x6c"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(371)
					if ((tmp5)){
						HX_STACK_LINE(371)
						lineStyle->__FieldRef(HX_HCSTRING("pixelHinting","\xd5","\x9b","\xfb","\x6c")) = false;
					}
					HX_STACK_LINE(371)
					bool tmp6 = (lineStyle->__Field(HX_HCSTRING("miterLimit","\xf6","\x5c","\x6a","\x54"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(371)
					if ((tmp6)){
						HX_STACK_LINE(371)
						lineStyle->__FieldRef(HX_HCSTRING("miterLimit","\xf6","\x5c","\x6a","\x54")) = (int)3;
					}
					HX_STACK_LINE(371)
					::openfl::_legacy::display::Graphics tmp7 = ::flixel::util::FlxSpriteUtil_obj::flashGfx;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(371)
					Dynamic tmp8 = lineStyle->__Field(HX_HCSTRING("thickness","\x74","\xf1","\x66","\x5a"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(371)
					int tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(371)
					{
						HX_STACK_LINE(371)
						int this1 = color;		HX_STACK_VAR(this1,"this1");
						HX_STACK_LINE(371)
						tmp9 = (int(this1) & int((int)16777215));
					}
					HX_STACK_LINE(371)
					Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(371)
					{
						HX_STACK_LINE(371)
						int this1 = color;		HX_STACK_VAR(this1,"this1");
						HX_STACK_LINE(371)
						int tmp11 = (int(this1) >> int((int)24));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(371)
						int tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(371)
						tmp10 = (Float(tmp12) / Float((int)255));
					}
					HX_STACK_LINE(371)
					Dynamic tmp11 = lineStyle->__Field(HX_HCSTRING("pixelHinting","\xd5","\x9b","\xfb","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(371)
					::openfl::_legacy::display::LineScaleMode tmp12 = lineStyle->__Field(HX_HCSTRING("scaleMode","\x0d","\xdb","\xd3","\x2b"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(371)
					::openfl::_legacy::display::CapsStyle tmp13 = lineStyle->__Field(HX_HCSTRING("capsStyle","\x50","\x61","\x32","\x83"), hx::paccDynamic );		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(371)
					::openfl::_legacy::display::JointStyle tmp14 = lineStyle->__Field(HX_HCSTRING("jointStyle","\x87","\xef","\x1c","\xe2"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(371)
					Dynamic tmp15 = lineStyle->__Field(HX_HCSTRING("miterLimit","\xf6","\x5c","\x6a","\x54"), hx::paccDynamic );		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(371)
					tmp7->lineStyle(tmp8,tmp9,tmp10,tmp11,tmp12,tmp13,tmp14,tmp15);
				}
			}
			HX_STACK_LINE(371)
			bool tmp1 = (FillColor != (int)0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(371)
			if ((tmp1)){
				HX_STACK_LINE(371)
				::openfl::_legacy::display::Graphics tmp2 = ::flixel::util::FlxSpriteUtil_obj::flashGfx;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(371)
				int tmp3 = (int(FillColor) & int((int)16777215));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(371)
				int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(371)
				int tmp5 = (int(FillColor) >> int((int)24));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(371)
				int tmp6 = (int(tmp5) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(371)
				Float tmp7 = (Float(tmp6) / Float((int)255));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(371)
				tmp2->beginFill(tmp4,tmp7);
			}
		}
		HX_STACK_LINE(372)
		::openfl::_legacy::display::Graphics tmp = ::flixel::util::FlxSpriteUtil_obj::flashGfx;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(372)
		Float tmp1 = X;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(372)
		Float tmp2 = Y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(372)
		Float tmp3 = Width;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(372)
		Float tmp4 = Height;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(372)
		tmp->drawEllipse(tmp1,tmp2,tmp3,tmp4);
		HX_STACK_LINE(373)
		{
			HX_STACK_LINE(373)
			::openfl::_legacy::display::Graphics tmp5 = ::flixel::util::FlxSpriteUtil_obj::flashGfx;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(373)
			tmp5->endFill();
			HX_STACK_LINE(373)
			::flixel::FlxSprite tmp6 = sprite;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(373)
			Dynamic tmp7 = drawStyle;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(373)
			::flixel::util::FlxSpriteUtil_obj::updateSpriteGraphic(tmp6,tmp7);
			HX_STACK_LINE(373)
			sprite;
		}
		HX_STACK_LINE(374)
		::flixel::FlxSprite tmp5 = sprite;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(374)
		return tmp5;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(FlxSpriteUtil_obj,drawEllipse,return )

::flixel::FlxSprite FlxSpriteUtil_obj::drawTriangle( ::flixel::FlxSprite sprite,Float X,Float Y,Float Height,hx::Null< int >  __o_FillColor,Dynamic lineStyle,Dynamic drawStyle){
int FillColor = __o_FillColor.Default(-1);
	HX_STACK_FRAME("flixel.util.FlxSpriteUtil","drawTriangle",0x35f0a5bb,"flixel.util.FlxSpriteUtil.drawTriangle","flixel/util/FlxSpriteUtil.hx",391,0xc647097f)
	HX_STACK_ARG(sprite,"sprite")
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(Height,"Height")
	HX_STACK_ARG(FillColor,"FillColor")
	HX_STACK_ARG(lineStyle,"lineStyle")
	HX_STACK_ARG(drawStyle,"drawStyle")
{
		HX_STACK_LINE(392)
		{
			HX_STACK_LINE(392)
			::openfl::_legacy::display::Graphics tmp = ::flixel::util::FlxSpriteUtil_obj::flashGfx;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(392)
			tmp->clear();
			HX_STACK_LINE(392)
			{
				HX_STACK_LINE(392)
				bool tmp1 = (lineStyle != null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(392)
				if ((tmp1)){
					HX_STACK_LINE(392)
					bool tmp2 = (lineStyle->__Field(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(392)
					Dynamic tmp3;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(392)
					if ((tmp2)){
						HX_STACK_LINE(392)
						tmp3 = (int)-16777216;
					}
					else{
						HX_STACK_LINE(392)
						tmp3 = lineStyle->__Field(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"), hx::paccDynamic );
					}
					HX_STACK_LINE(392)
					Dynamic color = tmp3;		HX_STACK_VAR(color,"color");
					HX_STACK_LINE(392)
					bool tmp4 = (lineStyle->__Field(HX_HCSTRING("thickness","\x74","\xf1","\x66","\x5a"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(392)
					if ((tmp4)){
						HX_STACK_LINE(392)
						lineStyle->__FieldRef(HX_HCSTRING("thickness","\x74","\xf1","\x66","\x5a")) = (int)1;
					}
					HX_STACK_LINE(392)
					bool tmp5 = (lineStyle->__Field(HX_HCSTRING("pixelHinting","\xd5","\x9b","\xfb","\x6c"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(392)
					if ((tmp5)){
						HX_STACK_LINE(392)
						lineStyle->__FieldRef(HX_HCSTRING("pixelHinting","\xd5","\x9b","\xfb","\x6c")) = false;
					}
					HX_STACK_LINE(392)
					bool tmp6 = (lineStyle->__Field(HX_HCSTRING("miterLimit","\xf6","\x5c","\x6a","\x54"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(392)
					if ((tmp6)){
						HX_STACK_LINE(392)
						lineStyle->__FieldRef(HX_HCSTRING("miterLimit","\xf6","\x5c","\x6a","\x54")) = (int)3;
					}
					HX_STACK_LINE(392)
					::openfl::_legacy::display::Graphics tmp7 = ::flixel::util::FlxSpriteUtil_obj::flashGfx;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(392)
					Dynamic tmp8 = lineStyle->__Field(HX_HCSTRING("thickness","\x74","\xf1","\x66","\x5a"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(392)
					int tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(392)
					{
						HX_STACK_LINE(392)
						int this1 = color;		HX_STACK_VAR(this1,"this1");
						HX_STACK_LINE(392)
						tmp9 = (int(this1) & int((int)16777215));
					}
					HX_STACK_LINE(392)
					Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(392)
					{
						HX_STACK_LINE(392)
						int this1 = color;		HX_STACK_VAR(this1,"this1");
						HX_STACK_LINE(392)
						int tmp11 = (int(this1) >> int((int)24));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(392)
						int tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(392)
						tmp10 = (Float(tmp12) / Float((int)255));
					}
					HX_STACK_LINE(392)
					Dynamic tmp11 = lineStyle->__Field(HX_HCSTRING("pixelHinting","\xd5","\x9b","\xfb","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(392)
					::openfl::_legacy::display::LineScaleMode tmp12 = lineStyle->__Field(HX_HCSTRING("scaleMode","\x0d","\xdb","\xd3","\x2b"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(392)
					::openfl::_legacy::display::CapsStyle tmp13 = lineStyle->__Field(HX_HCSTRING("capsStyle","\x50","\x61","\x32","\x83"), hx::paccDynamic );		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(392)
					::openfl::_legacy::display::JointStyle tmp14 = lineStyle->__Field(HX_HCSTRING("jointStyle","\x87","\xef","\x1c","\xe2"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(392)
					Dynamic tmp15 = lineStyle->__Field(HX_HCSTRING("miterLimit","\xf6","\x5c","\x6a","\x54"), hx::paccDynamic );		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(392)
					tmp7->lineStyle(tmp8,tmp9,tmp10,tmp11,tmp12,tmp13,tmp14,tmp15);
				}
			}
			HX_STACK_LINE(392)
			bool tmp1 = (FillColor != (int)0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(392)
			if ((tmp1)){
				HX_STACK_LINE(392)
				::openfl::_legacy::display::Graphics tmp2 = ::flixel::util::FlxSpriteUtil_obj::flashGfx;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(392)
				int tmp3 = (int(FillColor) & int((int)16777215));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(392)
				int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(392)
				int tmp5 = (int(FillColor) >> int((int)24));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(392)
				int tmp6 = (int(tmp5) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(392)
				Float tmp7 = (Float(tmp6) / Float((int)255));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(392)
				tmp2->beginFill(tmp4,tmp7);
			}
		}
		HX_STACK_LINE(393)
		::openfl::_legacy::display::Graphics tmp = ::flixel::util::FlxSpriteUtil_obj::flashGfx;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(393)
		Float tmp1 = X;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(393)
		Float tmp2 = (Float(Height) / Float((int)2));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(393)
		Float tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(393)
		Float tmp4 = Y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(393)
		tmp->moveTo(tmp3,tmp4);
		HX_STACK_LINE(394)
		::openfl::_legacy::display::Graphics tmp5 = ::flixel::util::FlxSpriteUtil_obj::flashGfx;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(394)
		Float tmp6 = (X + Height);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(394)
		Float tmp7 = (Height + Y);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(394)
		tmp5->lineTo(tmp6,tmp7);
		HX_STACK_LINE(395)
		::openfl::_legacy::display::Graphics tmp8 = ::flixel::util::FlxSpriteUtil_obj::flashGfx;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(395)
		Float tmp9 = X;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(395)
		Float tmp10 = (Height + Y);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(395)
		tmp8->lineTo(tmp9,tmp10);
		HX_STACK_LINE(396)
		::openfl::_legacy::display::Graphics tmp11 = ::flixel::util::FlxSpriteUtil_obj::flashGfx;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(396)
		Float tmp12 = X;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(396)
		Float tmp13 = (Float(Height) / Float((int)2));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(396)
		Float tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(396)
		Float tmp15 = Y;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(396)
		tmp11->lineTo(tmp14,tmp15);
		HX_STACK_LINE(397)
		{
			HX_STACK_LINE(397)
			::openfl::_legacy::display::Graphics tmp16 = ::flixel::util::FlxSpriteUtil_obj::flashGfx;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(397)
			tmp16->endFill();
			HX_STACK_LINE(397)
			::flixel::FlxSprite tmp17 = sprite;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(397)
			Dynamic tmp18 = drawStyle;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(397)
			::flixel::util::FlxSpriteUtil_obj::updateSpriteGraphic(tmp17,tmp18);
			HX_STACK_LINE(397)
			sprite;
		}
		HX_STACK_LINE(398)
		::flixel::FlxSprite tmp16 = sprite;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(398)
		return tmp16;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(FlxSpriteUtil_obj,drawTriangle,return )

::flixel::FlxSprite FlxSpriteUtil_obj::drawPolygon( ::flixel::FlxSprite sprite,Array< ::Dynamic > Vertices,hx::Null< int >  __o_FillColor,Dynamic lineStyle,Dynamic drawStyle){
int FillColor = __o_FillColor.Default(-1);
	HX_STACK_FRAME("flixel.util.FlxSpriteUtil","drawPolygon",0x190f7ae7,"flixel.util.FlxSpriteUtil.drawPolygon","flixel/util/FlxSpriteUtil.hx",413,0xc647097f)
	HX_STACK_ARG(sprite,"sprite")
	HX_STACK_ARG(Vertices,"Vertices")
	HX_STACK_ARG(FillColor,"FillColor")
	HX_STACK_ARG(lineStyle,"lineStyle")
	HX_STACK_ARG(drawStyle,"drawStyle")
{
		HX_STACK_LINE(414)
		{
			HX_STACK_LINE(414)
			::openfl::_legacy::display::Graphics tmp = ::flixel::util::FlxSpriteUtil_obj::flashGfx;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(414)
			tmp->clear();
			HX_STACK_LINE(414)
			{
				HX_STACK_LINE(414)
				bool tmp1 = (lineStyle != null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(414)
				if ((tmp1)){
					HX_STACK_LINE(414)
					bool tmp2 = (lineStyle->__Field(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(414)
					Dynamic tmp3;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(414)
					if ((tmp2)){
						HX_STACK_LINE(414)
						tmp3 = (int)-16777216;
					}
					else{
						HX_STACK_LINE(414)
						tmp3 = lineStyle->__Field(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"), hx::paccDynamic );
					}
					HX_STACK_LINE(414)
					Dynamic color = tmp3;		HX_STACK_VAR(color,"color");
					HX_STACK_LINE(414)
					bool tmp4 = (lineStyle->__Field(HX_HCSTRING("thickness","\x74","\xf1","\x66","\x5a"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(414)
					if ((tmp4)){
						HX_STACK_LINE(414)
						lineStyle->__FieldRef(HX_HCSTRING("thickness","\x74","\xf1","\x66","\x5a")) = (int)1;
					}
					HX_STACK_LINE(414)
					bool tmp5 = (lineStyle->__Field(HX_HCSTRING("pixelHinting","\xd5","\x9b","\xfb","\x6c"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(414)
					if ((tmp5)){
						HX_STACK_LINE(414)
						lineStyle->__FieldRef(HX_HCSTRING("pixelHinting","\xd5","\x9b","\xfb","\x6c")) = false;
					}
					HX_STACK_LINE(414)
					bool tmp6 = (lineStyle->__Field(HX_HCSTRING("miterLimit","\xf6","\x5c","\x6a","\x54"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(414)
					if ((tmp6)){
						HX_STACK_LINE(414)
						lineStyle->__FieldRef(HX_HCSTRING("miterLimit","\xf6","\x5c","\x6a","\x54")) = (int)3;
					}
					HX_STACK_LINE(414)
					::openfl::_legacy::display::Graphics tmp7 = ::flixel::util::FlxSpriteUtil_obj::flashGfx;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(414)
					Dynamic tmp8 = lineStyle->__Field(HX_HCSTRING("thickness","\x74","\xf1","\x66","\x5a"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(414)
					int tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(414)
					{
						HX_STACK_LINE(414)
						int this1 = color;		HX_STACK_VAR(this1,"this1");
						HX_STACK_LINE(414)
						tmp9 = (int(this1) & int((int)16777215));
					}
					HX_STACK_LINE(414)
					Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(414)
					{
						HX_STACK_LINE(414)
						int this1 = color;		HX_STACK_VAR(this1,"this1");
						HX_STACK_LINE(414)
						int tmp11 = (int(this1) >> int((int)24));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(414)
						int tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(414)
						tmp10 = (Float(tmp12) / Float((int)255));
					}
					HX_STACK_LINE(414)
					Dynamic tmp11 = lineStyle->__Field(HX_HCSTRING("pixelHinting","\xd5","\x9b","\xfb","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(414)
					::openfl::_legacy::display::LineScaleMode tmp12 = lineStyle->__Field(HX_HCSTRING("scaleMode","\x0d","\xdb","\xd3","\x2b"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(414)
					::openfl::_legacy::display::CapsStyle tmp13 = lineStyle->__Field(HX_HCSTRING("capsStyle","\x50","\x61","\x32","\x83"), hx::paccDynamic );		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(414)
					::openfl::_legacy::display::JointStyle tmp14 = lineStyle->__Field(HX_HCSTRING("jointStyle","\x87","\xef","\x1c","\xe2"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(414)
					Dynamic tmp15 = lineStyle->__Field(HX_HCSTRING("miterLimit","\xf6","\x5c","\x6a","\x54"), hx::paccDynamic );		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(414)
					tmp7->lineStyle(tmp8,tmp9,tmp10,tmp11,tmp12,tmp13,tmp14,tmp15);
				}
			}
			HX_STACK_LINE(414)
			bool tmp1 = (FillColor != (int)0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(414)
			if ((tmp1)){
				HX_STACK_LINE(414)
				::openfl::_legacy::display::Graphics tmp2 = ::flixel::util::FlxSpriteUtil_obj::flashGfx;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(414)
				int tmp3 = (int(FillColor) & int((int)16777215));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(414)
				int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(414)
				int tmp5 = (int(FillColor) >> int((int)24));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(414)
				int tmp6 = (int(tmp5) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(414)
				Float tmp7 = (Float(tmp6) / Float((int)255));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(414)
				tmp2->beginFill(tmp4,tmp7);
			}
		}
		HX_STACK_LINE(415)
		::flixel::math::FlxPoint tmp = Vertices->shift().StaticCast< ::flixel::math::FlxPoint >();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(415)
		::flixel::math::FlxPoint p = tmp;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(416)
		::openfl::_legacy::display::Graphics tmp1 = ::flixel::util::FlxSpriteUtil_obj::flashGfx;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(416)
		Float tmp2 = p->x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(416)
		Float tmp3 = p->y;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(416)
		tmp1->moveTo(tmp2,tmp3);
		HX_STACK_LINE(417)
		{
			HX_STACK_LINE(417)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(417)
			while((true)){
				HX_STACK_LINE(417)
				bool tmp4 = (_g < Vertices->length);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(417)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(417)
				if ((tmp5)){
					HX_STACK_LINE(417)
					break;
				}
				HX_STACK_LINE(417)
				::flixel::math::FlxPoint tmp6 = Vertices->__get(_g).StaticCast< ::flixel::math::FlxPoint >();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(417)
				::flixel::math::FlxPoint p1 = tmp6;		HX_STACK_VAR(p1,"p1");
				HX_STACK_LINE(417)
				++(_g);
				HX_STACK_LINE(419)
				::openfl::_legacy::display::Graphics tmp7 = ::flixel::util::FlxSpriteUtil_obj::flashGfx;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(419)
				Float tmp8 = p1->x;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(419)
				Float tmp9 = p1->y;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(419)
				tmp7->lineTo(tmp8,tmp9);
			}
		}
		HX_STACK_LINE(421)
		{
			HX_STACK_LINE(421)
			::openfl::_legacy::display::Graphics tmp4 = ::flixel::util::FlxSpriteUtil_obj::flashGfx;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(421)
			tmp4->endFill();
			HX_STACK_LINE(421)
			::flixel::FlxSprite tmp5 = sprite;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(421)
			Dynamic tmp6 = drawStyle;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(421)
			::flixel::util::FlxSpriteUtil_obj::updateSpriteGraphic(tmp5,tmp6);
			HX_STACK_LINE(421)
			sprite;
		}
		HX_STACK_LINE(422)
		::flixel::math::FlxPoint tmp4 = p;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(422)
		Vertices->unshift(tmp4);
		HX_STACK_LINE(423)
		::flixel::FlxSprite tmp5 = sprite;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(423)
		return tmp5;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxSpriteUtil_obj,drawPolygon,return )

Void FlxSpriteUtil_obj::beginDraw( int FillColor,Dynamic lineStyle){
{
		HX_STACK_FRAME("flixel.util.FlxSpriteUtil","beginDraw",0x53d0689e,"flixel.util.FlxSpriteUtil.beginDraw","flixel/util/FlxSpriteUtil.hx",434,0xc647097f)
		HX_STACK_ARG(FillColor,"FillColor")
		HX_STACK_ARG(lineStyle,"lineStyle")
		HX_STACK_LINE(435)
		::openfl::_legacy::display::Graphics tmp = ::flixel::util::FlxSpriteUtil_obj::flashGfx;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(435)
		tmp->clear();
		HX_STACK_LINE(436)
		{
			HX_STACK_LINE(436)
			bool tmp1 = (lineStyle != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(436)
			if ((tmp1)){
				HX_STACK_LINE(436)
				bool tmp2 = (lineStyle->__Field(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(436)
				Dynamic tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(436)
				if ((tmp2)){
					HX_STACK_LINE(436)
					tmp3 = (int)-16777216;
				}
				else{
					HX_STACK_LINE(436)
					tmp3 = lineStyle->__Field(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"), hx::paccDynamic );
				}
				HX_STACK_LINE(436)
				Dynamic color = tmp3;		HX_STACK_VAR(color,"color");
				HX_STACK_LINE(436)
				bool tmp4 = (lineStyle->__Field(HX_HCSTRING("thickness","\x74","\xf1","\x66","\x5a"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(436)
				if ((tmp4)){
					HX_STACK_LINE(436)
					lineStyle->__FieldRef(HX_HCSTRING("thickness","\x74","\xf1","\x66","\x5a")) = (int)1;
				}
				HX_STACK_LINE(436)
				bool tmp5 = (lineStyle->__Field(HX_HCSTRING("pixelHinting","\xd5","\x9b","\xfb","\x6c"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(436)
				if ((tmp5)){
					HX_STACK_LINE(436)
					lineStyle->__FieldRef(HX_HCSTRING("pixelHinting","\xd5","\x9b","\xfb","\x6c")) = false;
				}
				HX_STACK_LINE(436)
				bool tmp6 = (lineStyle->__Field(HX_HCSTRING("miterLimit","\xf6","\x5c","\x6a","\x54"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(436)
				if ((tmp6)){
					HX_STACK_LINE(436)
					lineStyle->__FieldRef(HX_HCSTRING("miterLimit","\xf6","\x5c","\x6a","\x54")) = (int)3;
				}
				HX_STACK_LINE(436)
				::openfl::_legacy::display::Graphics tmp7 = ::flixel::util::FlxSpriteUtil_obj::flashGfx;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(436)
				Dynamic tmp8 = lineStyle->__Field(HX_HCSTRING("thickness","\x74","\xf1","\x66","\x5a"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(436)
				int tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(436)
				{
					HX_STACK_LINE(436)
					int this1 = color;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(436)
					tmp9 = (int(this1) & int((int)16777215));
				}
				HX_STACK_LINE(436)
				Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(436)
				{
					HX_STACK_LINE(436)
					int this1 = color;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(436)
					int tmp11 = (int(this1) >> int((int)24));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(436)
					int tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(436)
					tmp10 = (Float(tmp12) / Float((int)255));
				}
				HX_STACK_LINE(436)
				Dynamic tmp11 = lineStyle->__Field(HX_HCSTRING("pixelHinting","\xd5","\x9b","\xfb","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(436)
				::openfl::_legacy::display::LineScaleMode tmp12 = lineStyle->__Field(HX_HCSTRING("scaleMode","\x0d","\xdb","\xd3","\x2b"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(436)
				::openfl::_legacy::display::CapsStyle tmp13 = lineStyle->__Field(HX_HCSTRING("capsStyle","\x50","\x61","\x32","\x83"), hx::paccDynamic );		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(436)
				::openfl::_legacy::display::JointStyle tmp14 = lineStyle->__Field(HX_HCSTRING("jointStyle","\x87","\xef","\x1c","\xe2"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(436)
				Dynamic tmp15 = lineStyle->__Field(HX_HCSTRING("miterLimit","\xf6","\x5c","\x6a","\x54"), hx::paccDynamic );		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(436)
				tmp7->lineStyle(tmp8,tmp9,tmp10,tmp11,tmp12,tmp13,tmp14,tmp15);
			}
		}
		HX_STACK_LINE(438)
		bool tmp1 = (FillColor != (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(438)
		if ((tmp1)){
			HX_STACK_LINE(440)
			::openfl::_legacy::display::Graphics tmp2 = ::flixel::util::FlxSpriteUtil_obj::flashGfx;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(440)
			int tmp3 = (int(FillColor) & int((int)16777215));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(440)
			int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(440)
			int tmp5 = (int(FillColor) >> int((int)24));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(440)
			int tmp6 = (int(tmp5) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(440)
			Float tmp7 = (Float(tmp6) / Float((int)255));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(440)
			tmp2->beginFill(tmp4,tmp7);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxSpriteUtil_obj,beginDraw,(void))

::flixel::FlxSprite FlxSpriteUtil_obj::endDraw( ::flixel::FlxSprite sprite,Dynamic drawStyle){
	HX_STACK_FRAME("flixel.util.FlxSpriteUtil","endDraw",0x51197d10,"flixel.util.FlxSpriteUtil.endDraw","flixel/util/FlxSpriteUtil.hx",452,0xc647097f)
	HX_STACK_ARG(sprite,"sprite")
	HX_STACK_ARG(drawStyle,"drawStyle")
	HX_STACK_LINE(453)
	::openfl::_legacy::display::Graphics tmp = ::flixel::util::FlxSpriteUtil_obj::flashGfx;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(453)
	tmp->endFill();
	HX_STACK_LINE(454)
	::flixel::FlxSprite tmp1 = sprite;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(454)
	Dynamic tmp2 = drawStyle;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(454)
	::flixel::util::FlxSpriteUtil_obj::updateSpriteGraphic(tmp1,tmp2);
	HX_STACK_LINE(455)
	::flixel::FlxSprite tmp3 = sprite;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(455)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxSpriteUtil_obj,endDraw,return )

::flixel::FlxSprite FlxSpriteUtil_obj::updateSpriteGraphic( ::flixel::FlxSprite sprite,Dynamic drawStyle){
	HX_STACK_FRAME("flixel.util.FlxSpriteUtil","updateSpriteGraphic",0x448b866b,"flixel.util.FlxSpriteUtil.updateSpriteGraphic","flixel/util/FlxSpriteUtil.hx",467,0xc647097f)
	HX_STACK_ARG(sprite,"sprite")
	HX_STACK_ARG(drawStyle,"drawStyle")
	HX_STACK_LINE(468)
	bool tmp = (drawStyle == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(468)
	if ((tmp)){
		struct _Function_2_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxSpriteUtil.hx",470,0xc647097f)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("smoothing","\x74","\xd5","\xe1","\x95") , false,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(470)
		Dynamic tmp1 = _Function_2_1::Block();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(470)
		drawStyle = tmp1;
	}
	else{
		HX_STACK_LINE(472)
		bool tmp1 = (drawStyle->__Field(HX_HCSTRING("smoothing","\x74","\xd5","\xe1","\x95"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(472)
		if ((tmp1)){
			HX_STACK_LINE(474)
			drawStyle->__FieldRef(HX_HCSTRING("smoothing","\x74","\xd5","\xe1","\x95")) = false;
		}
	}
	HX_STACK_LINE(477)
	::openfl::_legacy::display::BitmapData tmp1 = sprite->get_pixels();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(477)
	::openfl::_legacy::display::Sprite tmp2 = ::flixel::util::FlxSpriteUtil_obj::flashGfxSprite;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(477)
	::openfl::_legacy::geom::Matrix tmp3 = drawStyle->__Field(HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(477)
	::openfl::_legacy::geom::ColorTransform tmp4 = drawStyle->__Field(HX_HCSTRING("colorTransform","\x89","\xd7","\x3f","\xad"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(478)
	::openfl::_legacy::display::BlendMode tmp5 = drawStyle->__Field(HX_HCSTRING("blendMode","\x54","\xe4","\x37","\x0c"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(478)
	::openfl::_legacy::geom::Rectangle tmp6 = drawStyle->__Field(HX_HCSTRING("clipRect","\x14","\x90","\x6a","\x58"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(478)
	Dynamic tmp7 = drawStyle->__Field(HX_HCSTRING("smoothing","\x74","\xd5","\xe1","\x95"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(477)
	tmp1->draw(tmp2,tmp3,tmp4,tmp5,tmp6,tmp7);
	HX_STACK_LINE(479)
	sprite->dirty = true;
	HX_STACK_LINE(480)
	::flixel::FlxSprite tmp8 = sprite;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(480)
	return tmp8;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxSpriteUtil_obj,updateSpriteGraphic,return )

Void FlxSpriteUtil_obj::setLineStyle( Dynamic lineStyle){
{
		HX_STACK_FRAME("flixel.util.FlxSpriteUtil","setLineStyle",0xc19fc36a,"flixel.util.FlxSpriteUtil.setLineStyle","flixel/util/FlxSpriteUtil.hx",491,0xc647097f)
		HX_STACK_ARG(lineStyle,"lineStyle")
		HX_STACK_LINE(492)
		bool tmp = (lineStyle != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(492)
		if ((tmp)){
			HX_STACK_LINE(494)
			bool tmp1 = (lineStyle->__Field(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(494)
			Dynamic tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(494)
			if ((tmp1)){
				HX_STACK_LINE(494)
				tmp2 = (int)-16777216;
			}
			else{
				HX_STACK_LINE(494)
				tmp2 = lineStyle->__Field(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"), hx::paccDynamic );
			}
			HX_STACK_LINE(494)
			Dynamic color = tmp2;		HX_STACK_VAR(color,"color");
			HX_STACK_LINE(496)
			bool tmp3 = (lineStyle->__Field(HX_HCSTRING("thickness","\x74","\xf1","\x66","\x5a"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(496)
			if ((tmp3)){
				HX_STACK_LINE(497)
				lineStyle->__FieldRef(HX_HCSTRING("thickness","\x74","\xf1","\x66","\x5a")) = (int)1;
			}
			HX_STACK_LINE(498)
			bool tmp4 = (lineStyle->__Field(HX_HCSTRING("pixelHinting","\xd5","\x9b","\xfb","\x6c"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(498)
			if ((tmp4)){
				HX_STACK_LINE(499)
				lineStyle->__FieldRef(HX_HCSTRING("pixelHinting","\xd5","\x9b","\xfb","\x6c")) = false;
			}
			HX_STACK_LINE(500)
			bool tmp5 = (lineStyle->__Field(HX_HCSTRING("miterLimit","\xf6","\x5c","\x6a","\x54"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(500)
			if ((tmp5)){
				HX_STACK_LINE(501)
				lineStyle->__FieldRef(HX_HCSTRING("miterLimit","\xf6","\x5c","\x6a","\x54")) = (int)3;
			}
			HX_STACK_LINE(503)
			::openfl::_legacy::display::Graphics tmp6 = ::flixel::util::FlxSpriteUtil_obj::flashGfx;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(504)
			Dynamic tmp7 = lineStyle->__Field(HX_HCSTRING("thickness","\x74","\xf1","\x66","\x5a"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(505)
			int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(505)
			{
				HX_STACK_LINE(505)
				int this1 = color;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(505)
				tmp8 = (int(this1) & int((int)16777215));
			}
			HX_STACK_LINE(506)
			Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(506)
			{
				HX_STACK_LINE(506)
				int this1 = color;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(506)
				int tmp10 = (int(this1) >> int((int)24));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(506)
				int tmp11 = (int(tmp10) & int((int)255));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(506)
				tmp9 = (Float(tmp11) / Float((int)255));
			}
			HX_STACK_LINE(507)
			Dynamic tmp10 = lineStyle->__Field(HX_HCSTRING("pixelHinting","\xd5","\x9b","\xfb","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(508)
			::openfl::_legacy::display::LineScaleMode tmp11 = lineStyle->__Field(HX_HCSTRING("scaleMode","\x0d","\xdb","\xd3","\x2b"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(509)
			::openfl::_legacy::display::CapsStyle tmp12 = lineStyle->__Field(HX_HCSTRING("capsStyle","\x50","\x61","\x32","\x83"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(510)
			::openfl::_legacy::display::JointStyle tmp13 = lineStyle->__Field(HX_HCSTRING("jointStyle","\x87","\xef","\x1c","\xe2"), hx::paccDynamic );		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(511)
			Dynamic tmp14 = lineStyle->__Field(HX_HCSTRING("miterLimit","\xf6","\x5c","\x6a","\x54"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(503)
			tmp6->lineStyle(tmp7,tmp8,tmp9,tmp10,tmp11,tmp12,tmp13,tmp14);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxSpriteUtil_obj,setLineStyle,(void))

Dynamic FlxSpriteUtil_obj::getDefaultLineStyle( Dynamic lineStyle){
	HX_STACK_FRAME("flixel.util.FlxSpriteUtil","getDefaultLineStyle",0x36c9a563,"flixel.util.FlxSpriteUtil.getDefaultLineStyle","flixel/util/FlxSpriteUtil.hx",521,0xc647097f)
	HX_STACK_ARG(lineStyle,"lineStyle")
	HX_STACK_LINE(522)
	bool tmp = (lineStyle == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(522)
	if ((tmp)){
		struct _Function_2_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxSpriteUtil.hx",523,0xc647097f)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("thickness","\x74","\xf1","\x66","\x5a") , ((Dynamic)((int)1)),false);
					__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , (int)-1,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(523)
		Dynamic tmp1 = _Function_2_1::Block();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(523)
		lineStyle = tmp1;
	}
	HX_STACK_LINE(524)
	bool tmp1 = (lineStyle->__Field(HX_HCSTRING("thickness","\x74","\xf1","\x66","\x5a"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(524)
	if ((tmp1)){
		HX_STACK_LINE(525)
		lineStyle->__FieldRef(HX_HCSTRING("thickness","\x74","\xf1","\x66","\x5a")) = (int)1;
	}
	HX_STACK_LINE(526)
	bool tmp2 = (lineStyle->__Field(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(526)
	if ((tmp2)){
		HX_STACK_LINE(527)
		lineStyle->__FieldRef(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a")) = (int)-1;
	}
	HX_STACK_LINE(529)
	Dynamic tmp3 = lineStyle;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(529)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxSpriteUtil_obj,getDefaultLineStyle,return )

::flixel::FlxSprite FlxSpriteUtil_obj::fill( ::flixel::FlxSprite sprite,int FillColor){
	HX_STACK_FRAME("flixel.util.FlxSpriteUtil","fill",0x7a944252,"flixel.util.FlxSpriteUtil.fill","flixel/util/FlxSpriteUtil.hx",540,0xc647097f)
	HX_STACK_ARG(sprite,"sprite")
	HX_STACK_ARG(FillColor,"FillColor")
	HX_STACK_LINE(541)
	::openfl::_legacy::display::BitmapData tmp = sprite->get_pixels();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(541)
	::openfl::_legacy::display::BitmapData tmp1 = sprite->get_pixels();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(541)
	::openfl::_legacy::geom::Rectangle tmp2 = tmp1->get_rect();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(541)
	int tmp3 = FillColor;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(541)
	tmp->fillRect(tmp2,tmp3);
	HX_STACK_LINE(543)
	::openfl::_legacy::display::BitmapData tmp4 = sprite->get_pixels();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(543)
	::openfl::_legacy::display::BitmapData tmp5 = sprite->framePixels;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(543)
	bool tmp6 = (tmp4 != tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(543)
	if ((tmp6)){
		HX_STACK_LINE(545)
		sprite->dirty = true;
	}
	HX_STACK_LINE(548)
	::flixel::FlxSprite tmp7 = sprite;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(548)
	return tmp7;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxSpriteUtil_obj,fill,return )

::flixel::effects::FlxFlicker FlxSpriteUtil_obj::flicker( ::flixel::FlxObject Object,hx::Null< Float >  __o_Duration,hx::Null< Float >  __o_Interval,hx::Null< bool >  __o_EndVisibility,hx::Null< bool >  __o_ForceRestart,Dynamic CompletionCallback,Dynamic ProgressCallback){
Float Duration = __o_Duration.Default(1);
Float Interval = __o_Interval.Default(((Float)0.04));
bool EndVisibility = __o_EndVisibility.Default(true);
bool ForceRestart = __o_ForceRestart.Default(true);
	HX_STACK_FRAME("flixel.util.FlxSpriteUtil","flicker",0xa3717289,"flixel.util.FlxSpriteUtil.flicker","flixel/util/FlxSpriteUtil.hx",565,0xc647097f)
	HX_STACK_ARG(Object,"Object")
	HX_STACK_ARG(Duration,"Duration")
	HX_STACK_ARG(Interval,"Interval")
	HX_STACK_ARG(EndVisibility,"EndVisibility")
	HX_STACK_ARG(ForceRestart,"ForceRestart")
	HX_STACK_ARG(CompletionCallback,"CompletionCallback")
	HX_STACK_ARG(ProgressCallback,"ProgressCallback")
{
		HX_STACK_LINE(566)
		::flixel::FlxObject tmp = Object;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(566)
		Float tmp1 = Duration;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(566)
		Float tmp2 = Interval;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(566)
		bool tmp3 = EndVisibility;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(566)
		bool tmp4 = ForceRestart;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(566)
		Dynamic tmp5 = CompletionCallback;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(566)
		Dynamic tmp6 = ProgressCallback;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(566)
		::flixel::effects::FlxFlicker tmp7 = ::flixel::effects::FlxFlicker_obj::flicker(tmp,tmp1,tmp2,tmp3,tmp4,tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(566)
		return tmp7;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(FlxSpriteUtil_obj,flicker,return )

bool FlxSpriteUtil_obj::isFlickering( ::flixel::FlxObject Object){
	HX_STACK_FRAME("flixel.util.FlxSpriteUtil","isFlickering",0x05aae043,"flixel.util.FlxSpriteUtil.isFlickering","flixel/util/FlxSpriteUtil.hx",575,0xc647097f)
	HX_STACK_ARG(Object,"Object")
	HX_STACK_LINE(576)
	::flixel::FlxObject tmp = Object;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(576)
	bool tmp1 = ::flixel::effects::FlxFlicker_obj::isFlickering(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(576)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxSpriteUtil_obj,isFlickering,return )

::flixel::FlxObject FlxSpriteUtil_obj::stopFlickering( ::flixel::FlxObject Object){
	HX_STACK_FRAME("flixel.util.FlxSpriteUtil","stopFlickering",0x9d49141b,"flixel.util.FlxSpriteUtil.stopFlickering","flixel/util/FlxSpriteUtil.hx",586,0xc647097f)
	HX_STACK_ARG(Object,"Object")
	HX_STACK_LINE(587)
	::flixel::FlxObject tmp = Object;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(587)
	::flixel::effects::FlxFlicker_obj::stopFlickering(tmp);
	HX_STACK_LINE(588)
	::flixel::FlxObject tmp1 = Object;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(588)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxSpriteUtil_obj,stopFlickering,return )

::flixel::FlxSprite FlxSpriteUtil_obj::fadeIn( ::flixel::FlxSprite sprite,hx::Null< Float >  __o_Duration,Dynamic ResetAlpha,Dynamic OnComplete){
Float Duration = __o_Duration.Default(1);
	HX_STACK_FRAME("flixel.util.FlxSpriteUtil","fadeIn",0xd9639210,"flixel.util.FlxSpriteUtil.fadeIn","flixel/util/FlxSpriteUtil.hx",599,0xc647097f)
	HX_STACK_ARG(sprite,"sprite")
	HX_STACK_ARG(Duration,"Duration")
	HX_STACK_ARG(ResetAlpha,"ResetAlpha")
	HX_STACK_ARG(OnComplete,"OnComplete")
{
		HX_STACK_LINE(600)
		Dynamic tmp = ResetAlpha;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(600)
		if ((tmp)){
			HX_STACK_LINE(602)
			sprite->set_alpha((int)0);
		}
		HX_STACK_LINE(604)
		Float tmp1 = sprite->alpha;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(604)
		Float tmp2 = Duration;		HX_STACK_VAR(tmp2,"tmp2");
		struct _Function_1_1{
			inline static Dynamic Block( Dynamic &OnComplete){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxSpriteUtil.hx",604,0xc647097f)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("onComplete","\xf8","\xd4","\x7e","\x5d") , OnComplete,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(604)
		Dynamic tmp3 = _Function_1_1::Block(OnComplete);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(604)
		Dynamic tmp4 = ::flixel::util::FlxSpriteUtil_obj::alphaTween_dyn();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(604)
		::flixel::FlxSprite tmp5 = sprite;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(604)
		Dynamic tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(604)
		{
			HX_STACK_LINE(604)
			Dynamic f1 = tmp4;		HX_STACK_VAR(f1,"f1");
			HX_STACK_LINE(604)
			::flixel::FlxSprite a1 = tmp5;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,Dynamic,f1,::flixel::FlxSprite,a1)
			int __ArgCount() const { return 1; }
			Void run(Float f){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","flixel/util/FlxSpriteUtil.hx",604,0xc647097f)
				HX_STACK_ARG(f,"f")
				{
					HX_STACK_LINE(604)
					::flixel::FlxSprite tmp7 = a1;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(604)
					Float tmp8 = f;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(604)
					f1(tmp7,tmp8).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(604)
			tmp6 =  Dynamic(new _Function_2_1(f1,a1));
		}
		HX_STACK_LINE(604)
		::flixel::tweens::FlxTween_obj::num(tmp1,(int)1,tmp2,tmp3,tmp6);
		HX_STACK_LINE(605)
		::flixel::FlxSprite tmp7 = sprite;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(605)
		return tmp7;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxSpriteUtil_obj,fadeIn,return )

::flixel::FlxSprite FlxSpriteUtil_obj::fadeOut( ::flixel::FlxSprite sprite,hx::Null< Float >  __o_Duration,Dynamic OnComplete){
Float Duration = __o_Duration.Default(1);
	HX_STACK_FRAME("flixel.util.FlxSpriteUtil","fadeOut",0x5dc0d003,"flixel.util.FlxSpriteUtil.fadeOut","flixel/util/FlxSpriteUtil.hx",616,0xc647097f)
	HX_STACK_ARG(sprite,"sprite")
	HX_STACK_ARG(Duration,"Duration")
	HX_STACK_ARG(OnComplete,"OnComplete")
{
		HX_STACK_LINE(617)
		Float tmp = sprite->alpha;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(617)
		Float tmp1 = Duration;		HX_STACK_VAR(tmp1,"tmp1");
		struct _Function_1_1{
			inline static Dynamic Block( Dynamic &OnComplete){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxSpriteUtil.hx",617,0xc647097f)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("onComplete","\xf8","\xd4","\x7e","\x5d") , OnComplete,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(617)
		Dynamic tmp2 = _Function_1_1::Block(OnComplete);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(617)
		Dynamic tmp3 = ::flixel::util::FlxSpriteUtil_obj::alphaTween_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(617)
		::flixel::FlxSprite tmp4 = sprite;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(617)
		Dynamic tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(617)
		{
			HX_STACK_LINE(617)
			Dynamic f1 = tmp3;		HX_STACK_VAR(f1,"f1");
			HX_STACK_LINE(617)
			::flixel::FlxSprite a1 = tmp4;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,Dynamic,f1,::flixel::FlxSprite,a1)
			int __ArgCount() const { return 1; }
			Void run(Float f){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","flixel/util/FlxSpriteUtil.hx",617,0xc647097f)
				HX_STACK_ARG(f,"f")
				{
					HX_STACK_LINE(617)
					::flixel::FlxSprite tmp6 = a1;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(617)
					Float tmp7 = f;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(617)
					f1(tmp6,tmp7).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(617)
			tmp5 =  Dynamic(new _Function_2_1(f1,a1));
		}
		HX_STACK_LINE(617)
		::flixel::tweens::FlxTween_obj::num(tmp,(int)0,tmp1,tmp2,tmp5);
		HX_STACK_LINE(618)
		::flixel::FlxSprite tmp6 = sprite;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(618)
		return tmp6;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxSpriteUtil_obj,fadeOut,return )

Void FlxSpriteUtil_obj::alphaTween( ::flixel::FlxSprite sprite,Float f){
{
		HX_STACK_FRAME("flixel.util.FlxSpriteUtil","alphaTween",0xe721b73c,"flixel.util.FlxSpriteUtil.alphaTween","flixel/util/FlxSpriteUtil.hx",622,0xc647097f)
		HX_STACK_ARG(sprite,"sprite")
		HX_STACK_ARG(f,"f")
		HX_STACK_LINE(623)
		Float tmp = f;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(623)
		sprite->set_alpha(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxSpriteUtil_obj,alphaTween,(void))


FlxSpriteUtil_obj::FlxSpriteUtil_obj()
{
}

bool FlxSpriteUtil_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"fill") ) { outValue = fill_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"bound") ) { outValue = bound_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"space") ) { outValue = space_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"fadeIn") ) { outValue = fadeIn_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"endDraw") ) { outValue = endDraw_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"flicker") ) { outValue = flicker_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"fadeOut") ) { outValue = fadeOut_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"flashGfx") ) { outValue = flashGfx; return true;  }
		if (HX_FIELD_EQ(inName,"drawLine") ) { outValue = drawLine_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"drawRect") ) { outValue = drawRect_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"alphaMask") ) { outValue = alphaMask_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"drawCurve") ) { outValue = drawCurve_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"beginDraw") ) { outValue = beginDraw_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"screenWrap") ) { outValue = screenWrap_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"drawCircle") ) { outValue = drawCircle_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"alphaTween") ) { outValue = alphaTween_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"drawEllipse") ) { outValue = drawEllipse_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"drawPolygon") ) { outValue = drawPolygon_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"drawTriangle") ) { outValue = drawTriangle_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"setLineStyle") ) { outValue = setLineStyle_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"isFlickering") ) { outValue = isFlickering_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"drawRoundRect") ) { outValue = drawRoundRect_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"flashGfxSprite") ) { outValue = flashGfxSprite; return true;  }
		if (HX_FIELD_EQ(inName,"stopFlickering") ) { outValue = stopFlickering_dyn(); return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"alphaMaskFlxSprite") ) { outValue = alphaMaskFlxSprite_dyn(); return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"updateSpriteGraphic") ) { outValue = updateSpriteGraphic_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getDefaultLineStyle") ) { outValue = getDefaultLineStyle_dyn(); return true;  }
	}
	return false;
}

bool FlxSpriteUtil_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"flashGfx") ) { flashGfx=ioValue.Cast< ::openfl::_legacy::display::Graphics >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"flashGfxSprite") ) { flashGfxSprite=ioValue.Cast< ::openfl::_legacy::display::Sprite >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::openfl::_legacy::display::Sprite*/ ,(void *) &FlxSpriteUtil_obj::flashGfxSprite,HX_HCSTRING("flashGfxSprite","\x8e","\x26","\x3f","\xab")},
	{hx::fsObject /*::openfl::_legacy::display::Graphics*/ ,(void *) &FlxSpriteUtil_obj::flashGfx,HX_HCSTRING("flashGfx","\xa9","\xb1","\xce","\x99")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxSpriteUtil_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxSpriteUtil_obj::flashGfxSprite,"flashGfxSprite");
	HX_MARK_MEMBER_NAME(FlxSpriteUtil_obj::flashGfx,"flashGfx");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxSpriteUtil_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxSpriteUtil_obj::flashGfxSprite,"flashGfxSprite");
	HX_VISIT_MEMBER_NAME(FlxSpriteUtil_obj::flashGfx,"flashGfx");
};

#endif

hx::Class FlxSpriteUtil_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("flashGfxSprite","\x8e","\x26","\x3f","\xab"),
	HX_HCSTRING("flashGfx","\xa9","\xb1","\xce","\x99"),
	HX_HCSTRING("alphaMask","\x6a","\x1b","\x50","\xe2"),
	HX_HCSTRING("alphaMaskFlxSprite","\x4d","\xfd","\xae","\x12"),
	HX_HCSTRING("screenWrap","\x56","\xc7","\x35","\xc7"),
	HX_HCSTRING("bound","\x3e","\xb0","\xfc","\xb6"),
	HX_HCSTRING("space","\xc6","\x8c","\x66","\x81"),
	HX_HCSTRING("drawLine","\x18","\xc2","\x1c","\x5c"),
	HX_HCSTRING("drawCurve","\x0b","\x82","\x63","\x16"),
	HX_HCSTRING("drawRect","\x48","\xf7","\x10","\x60"),
	HX_HCSTRING("drawRoundRect","\xee","\xc3","\xaa","\xe2"),
	HX_HCSTRING("drawCircle","\x34","\xed","\xd0","\x97"),
	HX_HCSTRING("drawEllipse","\x3a","\x85","\xce","\x54"),
	HX_HCSTRING("drawTriangle","\xec","\x4a","\xb9","\x63"),
	HX_HCSTRING("drawPolygon","\xd6","\x46","\xd9","\x5b"),
	HX_HCSTRING("beginDraw","\xcd","\x0a","\x4a","\x8b"),
	HX_HCSTRING("endDraw","\x7f","\xe5","\x94","\x24"),
	HX_HCSTRING("updateSpriteGraphic","\x5a","\x59","\xf9","\x55"),
	HX_HCSTRING("setLineStyle","\x9b","\x68","\x68","\xef"),
	HX_HCSTRING("getDefaultLineStyle","\x52","\x78","\x37","\x48"),
	HX_HCSTRING("fill","\x83","\xce","\xbb","\x43"),
	HX_HCSTRING("flicker","\xf8","\xda","\xec","\x76"),
	HX_HCSTRING("isFlickering","\x74","\x85","\x73","\x33"),
	HX_HCSTRING("stopFlickering","\x8c","\x27","\x6a","\x4a"),
	HX_HCSTRING("fadeIn","\x81","\x4c","\xab","\xe4"),
	HX_HCSTRING("fadeOut","\x72","\x38","\x3c","\x31"),
	HX_HCSTRING("alphaTween","\x2d","\xfe","\x15","\x3a"),
	::String(null()) };

void FlxSpriteUtil_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.util.FlxSpriteUtil","\xff","\x7e","\x4e","\xf7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxSpriteUtil_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxSpriteUtil_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< FlxSpriteUtil_obj >;
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

void FlxSpriteUtil_obj::__boot()
{
	flashGfxSprite= ::openfl::_legacy::display::Sprite_obj::__new();
struct _Function_0_1{
	inline static ::openfl::_legacy::display::Graphics Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxSpriteUtil.hx",39,0xc647097f)
		{
			HX_STACK_LINE(39)
			::openfl::_legacy::display::Sprite tmp = ::flixel::util::FlxSpriteUtil_obj::flashGfxSprite;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(39)
			return tmp->get_graphics();
		}
		return null();
	}
};
	flashGfx= _Function_0_1::Block();
}

} // end namespace flixel
} // end namespace util
