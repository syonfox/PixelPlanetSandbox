#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxAtlasFrames
#include <flixel/graphics/frames/FlxAtlasFrames.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFrame
#include <flixel/graphics/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFrameCollectionType
#include <flixel/graphics/frames/FlxFrameCollectionType.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxTileFrames
#include <flixel/graphics/frames/FlxTileFrames.h>
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
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
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
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_BalancedTree
#include <haxe/ds/BalancedTree.h>
#endif
#ifndef INCLUDED_haxe_ds_EnumValueMap
#include <haxe/ds/EnumValueMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Point
#include <openfl/_legacy/geom/Point.h>
#endif
namespace flixel{
namespace graphics{
namespace frames{

Void FlxTileFrames_obj::__construct(::flixel::graphics::FlxGraphic parent,::flixel::math::FlxPoint border)
{
HX_STACK_FRAME("flixel.graphics.frames.FlxTileFrames","new",0xee264501,"flixel.graphics.frames.FlxTileFrames.new","flixel/graphics/frames/FlxTileFrames.hx",17,0x562d6bb0)
HX_STACK_THIS(this)
HX_STACK_ARG(parent,"parent")
HX_STACK_ARG(border,"border")
{
	HX_STACK_LINE(39)
	this->numCols = (int)0;
	HX_STACK_LINE(37)
	this->numRows = (int)0;
	HX_STACK_LINE(43)
	::flixel::graphics::FlxGraphic tmp = parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(43)
	::flixel::math::FlxPoint tmp1 = border;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(43)
	super::__construct(tmp,::flixel::graphics::frames::FlxFrameCollectionType_obj::TILES,tmp1);
}
;
	return null();
}

//FlxTileFrames_obj::~FlxTileFrames_obj() { }

Dynamic FlxTileFrames_obj::__CreateEmpty() { return  new FlxTileFrames_obj; }
hx::ObjectPtr< FlxTileFrames_obj > FlxTileFrames_obj::__new(::flixel::graphics::FlxGraphic parent,::flixel::math::FlxPoint border)
{  hx::ObjectPtr< FlxTileFrames_obj > _result_ = new FlxTileFrames_obj();
	_result_->__construct(parent,border);
	return _result_;}

Dynamic FlxTileFrames_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxTileFrames_obj > _result_ = new FlxTileFrames_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

::flixel::graphics::frames::FlxFrame FlxTileFrames_obj::getByTilePosition( int column,int row){
	HX_STACK_FRAME("flixel.graphics.frames.FlxTileFrames","getByTilePosition",0xcc1d2a05,"flixel.graphics.frames.FlxTileFrames.getByTilePosition","flixel/graphics/frames/FlxTileFrames.hx",50,0x562d6bb0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(column,"column")
	HX_STACK_ARG(row,"row")
	HX_STACK_LINE(51)
	int tmp = row;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(51)
	int tmp1 = this->numCols;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(51)
	int tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(51)
	int tmp3 = column;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(51)
	int tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(51)
	::flixel::graphics::frames::FlxFrame tmp5 = this->frames->__get(tmp4).StaticCast< ::flixel::graphics::frames::FlxFrame >();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(51)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTileFrames_obj,getByTilePosition,return )

bool FlxTileFrames_obj::equals( ::flixel::math::FlxPoint tileSize,::flixel::math::FlxRect region,::flixel::graphics::frames::FlxFrame atlasFrame,::flixel::math::FlxPoint tileSpacing,::flixel::math::FlxPoint border){
	HX_STACK_FRAME("flixel.graphics.frames.FlxTileFrames","equals",0xd88c543e,"flixel.graphics.frames.FlxTileFrames.equals","flixel/graphics/frames/FlxTileFrames.hx",482,0x562d6bb0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(tileSize,"tileSize")
	HX_STACK_ARG(region,"region")
	HX_STACK_ARG(atlasFrame,"atlasFrame")
	HX_STACK_ARG(tileSpacing,"tileSpacing")
	HX_STACK_ARG(border,"border")
	HX_STACK_LINE(483)
	::flixel::math::FlxRect tmp = this->region;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(483)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(483)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(483)
	if ((tmp1)){
		HX_STACK_LINE(483)
		::flixel::graphics::frames::FlxFrame tmp3 = this->atlasFrame;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(483)
		::flixel::graphics::frames::FlxFrame tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(483)
		tmp2 = (tmp4 == null());
	}
	else{
		HX_STACK_LINE(483)
		tmp2 = false;
	}
	HX_STACK_LINE(483)
	if ((tmp2)){
		HX_STACK_LINE(485)
		return false;
	}
	HX_STACK_LINE(488)
	bool tmp3 = (atlasFrame != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(488)
	if ((tmp3)){
		HX_STACK_LINE(490)
		region = atlasFrame->frame;
	}
	HX_STACK_LINE(493)
	bool tmp4 = (region == null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(493)
	if ((tmp4)){
		HX_STACK_LINE(494)
		::flixel::math::FlxRect tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(494)
		{
			HX_STACK_LINE(494)
			::flixel::math::FlxRect tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(494)
			{
				HX_STACK_LINE(494)
				::flixel::math::FlxRect tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(494)
				{
					HX_STACK_LINE(494)
					::flixel::util::FlxPool_flixel_math_FlxRect tmp8 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(494)
					::flixel::math::FlxRect tmp9 = tmp8->get();		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(494)
					::flixel::math::FlxRect _this = tmp9;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(494)
					_this->x = (int)0;
					HX_STACK_LINE(494)
					_this->y = (int)0;
					HX_STACK_LINE(494)
					::flixel::graphics::FlxGraphic tmp10 = this->parent;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(494)
					_this->width = tmp10->width;
					HX_STACK_LINE(494)
					::flixel::graphics::FlxGraphic tmp11 = this->parent;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(494)
					_this->height = tmp11->height;
					HX_STACK_LINE(494)
					tmp7 = _this;
				}
				HX_STACK_LINE(494)
				::flixel::math::FlxRect rect = tmp7;		HX_STACK_VAR(rect,"rect");
				HX_STACK_LINE(494)
				rect->_inPool = false;
				HX_STACK_LINE(494)
				tmp6 = rect;
			}
			HX_STACK_LINE(494)
			::flixel::math::FlxRect rect = tmp6;		HX_STACK_VAR(rect,"rect");
			HX_STACK_LINE(494)
			rect->_weak = true;
			HX_STACK_LINE(494)
			tmp5 = rect;
		}
		HX_STACK_LINE(494)
		region = tmp5;
	}
	HX_STACK_LINE(496)
	bool tmp5 = (tileSpacing == null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(496)
	if ((tmp5)){
		HX_STACK_LINE(497)
		::flixel::math::FlxPoint tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(497)
		{
			HX_STACK_LINE(497)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(497)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(497)
			::flixel::math::FlxPoint tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(497)
			{
				HX_STACK_LINE(497)
				::flixel::util::FlxPool_flixel_math_FlxPoint tmp8 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(497)
				::flixel::math::FlxPoint tmp9 = tmp8->get();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(497)
				Float tmp10 = X;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(497)
				Float tmp11 = Y;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(497)
				::flixel::math::FlxPoint tmp12 = tmp9->set(tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(497)
				::flixel::math::FlxPoint point = tmp12;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(497)
				point->_inPool = false;
				HX_STACK_LINE(497)
				tmp7 = point;
			}
			HX_STACK_LINE(497)
			::flixel::math::FlxPoint point = tmp7;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(497)
			point->_weak = true;
			HX_STACK_LINE(497)
			tmp6 = point;
		}
		HX_STACK_LINE(497)
		tileSpacing = tmp6;
	}
	HX_STACK_LINE(499)
	bool tmp6 = (border == null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(499)
	if ((tmp6)){
		HX_STACK_LINE(500)
		::flixel::math::FlxPoint tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(500)
		{
			HX_STACK_LINE(500)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(500)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(500)
			::flixel::math::FlxPoint tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(500)
			{
				HX_STACK_LINE(500)
				::flixel::util::FlxPool_flixel_math_FlxPoint tmp9 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(500)
				::flixel::math::FlxPoint tmp10 = tmp9->get();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(500)
				Float tmp11 = X;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(500)
				Float tmp12 = Y;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(500)
				::flixel::math::FlxPoint tmp13 = tmp10->set(tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(500)
				::flixel::math::FlxPoint point = tmp13;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(500)
				point->_inPool = false;
				HX_STACK_LINE(500)
				tmp8 = point;
			}
			HX_STACK_LINE(500)
			::flixel::math::FlxPoint point = tmp8;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(500)
			point->_weak = true;
			HX_STACK_LINE(500)
			tmp7 = point;
		}
		HX_STACK_LINE(500)
		border = tmp7;
	}
	HX_STACK_LINE(502)
	::flixel::graphics::frames::FlxFrame tmp7 = this->atlasFrame;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(502)
	::flixel::graphics::frames::FlxFrame tmp8 = atlasFrame;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(502)
	bool tmp9 = (tmp7 == tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(502)
	bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(502)
	bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(502)
	if ((tmp10)){
		HX_STACK_LINE(502)
		::flixel::math::FlxRect tmp12 = this->region;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(502)
		::flixel::math::FlxRect tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(502)
		::flixel::math::FlxRect tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(502)
		::flixel::math::FlxRect _this = tmp14;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(502)
		bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(502)
		{
			HX_STACK_LINE(502)
			Float aDiff = ((Float)0.0000001);		HX_STACK_VAR(aDiff,"aDiff");
			HX_STACK_LINE(502)
			Float tmp16 = (_this->x - region->x);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(502)
			Float tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(502)
			Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(502)
			Float tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(502)
			Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(502)
			Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(502)
			Float tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(502)
			Float tmp23 = ::Math_obj::abs(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(502)
			Float tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(502)
			Float tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(502)
			Float tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(502)
			Float tmp27 = aDiff;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(502)
			bool tmp28 = (tmp26 <= tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(502)
			bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(502)
			tmp15 = tmp29;
		}
		HX_STACK_LINE(502)
		bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(502)
		bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(502)
		bool tmp18 = tmp16;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(502)
		bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(502)
		if ((tmp19)){
			HX_STACK_LINE(502)
			Float aDiff = ((Float)0.0000001);		HX_STACK_VAR(aDiff,"aDiff");
			HX_STACK_LINE(502)
			Float tmp20 = (_this->y - region->y);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(502)
			Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(502)
			Float tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(502)
			Float tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(502)
			Float tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(502)
			Float tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(502)
			Float tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(502)
			Float tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(502)
			Float tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(502)
			Float tmp29 = ::Math_obj::abs(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(502)
			Float tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(502)
			Float tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(502)
			Float tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(502)
			Float tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(502)
			Float tmp34 = aDiff;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(502)
			bool tmp35 = (tmp33 <= tmp34);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(502)
			bool tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(502)
			tmp17 = tmp36;
		}
		else{
			HX_STACK_LINE(502)
			tmp17 = false;
		}
		HX_STACK_LINE(502)
		bool tmp20 = tmp17;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(502)
		bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(502)
		bool tmp22 = tmp20;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(502)
		bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(502)
		if ((tmp23)){
			HX_STACK_LINE(502)
			Float aDiff = ((Float)0.0000001);		HX_STACK_VAR(aDiff,"aDiff");
			HX_STACK_LINE(502)
			Float tmp24 = (_this->width - region->width);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(502)
			Float tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(502)
			Float tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(502)
			Float tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(502)
			Float tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(502)
			Float tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(502)
			Float tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(502)
			Float tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(502)
			Float tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(502)
			Float tmp33 = ::Math_obj::abs(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(502)
			Float tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(502)
			Float tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(502)
			Float tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(502)
			Float tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(502)
			Float tmp38 = aDiff;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(502)
			bool tmp39 = (tmp37 <= tmp38);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(502)
			bool tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(502)
			tmp21 = tmp40;
		}
		else{
			HX_STACK_LINE(502)
			tmp21 = false;
		}
		HX_STACK_LINE(502)
		bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(502)
		bool tmp25 = tmp21;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(502)
		bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(502)
		if ((tmp26)){
			HX_STACK_LINE(502)
			Float aDiff = ((Float)0.0000001);		HX_STACK_VAR(aDiff,"aDiff");
			HX_STACK_LINE(502)
			Float tmp27 = (_this->height - region->height);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(502)
			Float tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(502)
			Float tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(502)
			Float tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(502)
			Float tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(502)
			Float tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(502)
			Float tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(502)
			Float tmp34 = ::Math_obj::abs(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(502)
			Float tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(502)
			Float tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(502)
			Float tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(502)
			Float tmp38 = aDiff;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(502)
			bool tmp39 = (tmp37 <= tmp38);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(502)
			bool tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(502)
			tmp24 = tmp40;
		}
		else{
			HX_STACK_LINE(502)
			tmp24 = false;
		}
		HX_STACK_LINE(502)
		bool result = tmp24;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(502)
		{
			HX_STACK_LINE(502)
			bool tmp27 = region->_weak;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(502)
			bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(502)
			bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(502)
			if ((tmp29)){
				HX_STACK_LINE(502)
				bool tmp30 = region->_inPool;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(502)
				bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(502)
				bool tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(502)
				bool tmp33 = !(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(502)
				bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(502)
				bool tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(502)
				bool tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(502)
				bool tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(502)
				if ((tmp37)){
					HX_STACK_LINE(502)
					region->_inPool = true;
					HX_STACK_LINE(502)
					region->_weak = false;
					HX_STACK_LINE(502)
					::flixel::util::FlxPool_flixel_math_FlxRect tmp38 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(502)
					::flixel::util::FlxPool_flixel_math_FlxRect tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(502)
					::flixel::util::FlxPool_flixel_math_FlxRect tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(502)
					::flixel::math::FlxRect tmp41 = region;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(502)
					::flixel::math::FlxRect tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(502)
					::flixel::math::FlxRect tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(502)
					tmp40->putUnsafe(tmp43);
				}
			}
		}
		HX_STACK_LINE(502)
		tmp11 = result;
	}
	else{
		HX_STACK_LINE(502)
		tmp11 = false;
	}
	HX_STACK_LINE(502)
	bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(502)
	bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(502)
	if ((tmp12)){
		HX_STACK_LINE(503)
		::flixel::math::FlxPoint tmp14 = this->tileSize;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(503)
		::flixel::math::FlxPoint tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(503)
		::flixel::math::FlxPoint tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(503)
		::flixel::math::FlxPoint _this = tmp16;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(503)
		bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(503)
		{
			HX_STACK_LINE(503)
			Float aDiff = ((Float)0.0000001);		HX_STACK_VAR(aDiff,"aDiff");
			HX_STACK_LINE(503)
			Float tmp18 = (_this->x - tileSize->x);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(503)
			Float tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(503)
			Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(503)
			Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(503)
			Float tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(503)
			Float tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(503)
			Float tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(503)
			Float tmp25 = ::Math_obj::abs(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(503)
			Float tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(503)
			Float tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(503)
			Float tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(503)
			Float tmp29 = aDiff;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(503)
			bool tmp30 = (tmp28 <= tmp29);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(503)
			bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(503)
			tmp17 = tmp31;
		}
		HX_STACK_LINE(503)
		bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(503)
		bool tmp19 = tmp17;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(503)
		bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(503)
		if ((tmp20)){
			HX_STACK_LINE(503)
			Float aDiff = ((Float)0.0000001);		HX_STACK_VAR(aDiff,"aDiff");
			HX_STACK_LINE(503)
			Float tmp21 = (_this->y - tileSize->y);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(503)
			Float tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(503)
			Float tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(503)
			Float tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(503)
			Float tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(503)
			Float tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(503)
			Float tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(503)
			Float tmp28 = ::Math_obj::abs(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(503)
			Float tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(503)
			Float tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(503)
			Float tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(503)
			Float tmp32 = aDiff;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(503)
			bool tmp33 = (tmp31 <= tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(503)
			bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(503)
			tmp18 = tmp34;
		}
		else{
			HX_STACK_LINE(503)
			tmp18 = false;
		}
		HX_STACK_LINE(503)
		bool result = tmp18;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(503)
		{
			HX_STACK_LINE(503)
			bool tmp21 = tileSize->_weak;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(503)
			bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(503)
			bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(503)
			if ((tmp23)){
				HX_STACK_LINE(503)
				tileSize->put();
			}
		}
		HX_STACK_LINE(503)
		tmp13 = result;
	}
	else{
		HX_STACK_LINE(502)
		tmp13 = false;
	}
	HX_STACK_LINE(502)
	bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(502)
	bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(502)
	if ((tmp14)){
		HX_STACK_LINE(503)
		::flixel::math::FlxPoint tmp16 = this->tileSpacing;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(503)
		::flixel::math::FlxPoint tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(503)
		::flixel::math::FlxPoint tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(503)
		::flixel::math::FlxPoint _this = tmp18;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(503)
		bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(503)
		{
			HX_STACK_LINE(503)
			Float aDiff = ((Float)0.0000001);		HX_STACK_VAR(aDiff,"aDiff");
			HX_STACK_LINE(503)
			Float tmp20 = (_this->x - tileSpacing->x);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(503)
			Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(503)
			Float tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(503)
			Float tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(503)
			Float tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(503)
			Float tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(503)
			Float tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(503)
			Float tmp27 = ::Math_obj::abs(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(503)
			Float tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(503)
			Float tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(503)
			Float tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(503)
			Float tmp31 = aDiff;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(503)
			bool tmp32 = (tmp30 <= tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(503)
			bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(503)
			tmp19 = tmp33;
		}
		HX_STACK_LINE(503)
		bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(503)
		bool tmp21 = tmp19;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(503)
		bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(503)
		if ((tmp22)){
			HX_STACK_LINE(503)
			Float aDiff = ((Float)0.0000001);		HX_STACK_VAR(aDiff,"aDiff");
			HX_STACK_LINE(503)
			Float tmp23 = (_this->y - tileSpacing->y);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(503)
			Float tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(503)
			Float tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(503)
			Float tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(503)
			Float tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(503)
			Float tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(503)
			Float tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(503)
			Float tmp30 = ::Math_obj::abs(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(503)
			Float tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(503)
			Float tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(503)
			Float tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(503)
			Float tmp34 = aDiff;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(503)
			bool tmp35 = (tmp33 <= tmp34);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(503)
			bool tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(503)
			tmp20 = tmp36;
		}
		else{
			HX_STACK_LINE(503)
			tmp20 = false;
		}
		HX_STACK_LINE(503)
		bool result = tmp20;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(503)
		{
			HX_STACK_LINE(503)
			bool tmp23 = tileSpacing->_weak;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(503)
			bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(503)
			bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(503)
			if ((tmp25)){
				HX_STACK_LINE(503)
				tileSpacing->put();
			}
		}
		HX_STACK_LINE(503)
		tmp15 = result;
	}
	else{
		HX_STACK_LINE(502)
		tmp15 = false;
	}
	HX_STACK_LINE(502)
	bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(502)
	if ((tmp15)){
		HX_STACK_LINE(504)
		::flixel::math::FlxPoint tmp17 = this->border;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(504)
		::flixel::math::FlxPoint tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(504)
		::flixel::math::FlxPoint _this = tmp18;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(504)
		bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(504)
		{
			HX_STACK_LINE(504)
			Float aDiff = ((Float)0.0000001);		HX_STACK_VAR(aDiff,"aDiff");
			HX_STACK_LINE(504)
			Float tmp20 = (_this->x - border->x);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(504)
			Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(504)
			Float tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(504)
			Float tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(504)
			Float tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(504)
			Float tmp25 = ::Math_obj::abs(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(504)
			Float tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(504)
			Float tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(504)
			Float tmp28 = aDiff;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(504)
			bool tmp29 = (tmp27 <= tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(504)
			tmp19 = tmp29;
		}
		HX_STACK_LINE(504)
		bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(504)
		bool tmp21 = tmp19;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(504)
		if ((tmp21)){
			HX_STACK_LINE(504)
			Float aDiff = ((Float)0.0000001);		HX_STACK_VAR(aDiff,"aDiff");
			HX_STACK_LINE(504)
			Float tmp22 = (_this->y - border->y);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(504)
			Float tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(504)
			Float tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(504)
			Float tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(504)
			Float tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(504)
			Float tmp27 = ::Math_obj::abs(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(504)
			Float tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(504)
			Float tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(504)
			Float tmp30 = aDiff;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(504)
			bool tmp31 = (tmp29 <= tmp30);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(504)
			tmp20 = tmp31;
		}
		else{
			HX_STACK_LINE(504)
			tmp20 = false;
		}
		HX_STACK_LINE(504)
		bool result = tmp20;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(504)
		{
			HX_STACK_LINE(504)
			bool tmp22 = border->_weak;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(504)
			bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(504)
			if ((tmp23)){
				HX_STACK_LINE(504)
				border->put();
			}
		}
		HX_STACK_LINE(504)
		tmp16 = result;
	}
	else{
		HX_STACK_LINE(502)
		tmp16 = false;
	}
	HX_STACK_LINE(502)
	return tmp16;
}


HX_DEFINE_DYNAMIC_FUNC5(FlxTileFrames_obj,equals,return )

::flixel::graphics::frames::FlxFramesCollection FlxTileFrames_obj::addBorder( ::flixel::math::FlxPoint border){
	HX_STACK_FRAME("flixel.graphics.frames.FlxTileFrames","addBorder",0x145fa54e,"flixel.graphics.frames.FlxTileFrames.addBorder","flixel/graphics/frames/FlxTileFrames.hx",508,0x562d6bb0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(border,"border")
	HX_STACK_LINE(509)
	::flixel::math::FlxPoint tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(509)
	{
		HX_STACK_LINE(509)
		Float X = (int)0;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(509)
		Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(509)
		::flixel::util::FlxPool_flixel_math_FlxPoint tmp1 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(509)
		::flixel::math::FlxPoint tmp2 = tmp1->get();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(509)
		Float tmp3 = X;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(509)
		Float tmp4 = Y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(509)
		::flixel::math::FlxPoint tmp5 = tmp2->set(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(509)
		::flixel::math::FlxPoint point = tmp5;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(509)
		point->_inPool = false;
		HX_STACK_LINE(509)
		tmp = point;
	}
	HX_STACK_LINE(509)
	::flixel::math::FlxPoint tmp1 = this->border;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(509)
	::flixel::math::FlxPoint tmp2 = tmp->addPoint(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(509)
	::flixel::math::FlxPoint tmp3 = border;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(509)
	::flixel::math::FlxPoint tmp4 = tmp2->addPoint(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(509)
	::flixel::math::FlxPoint resultBorder = tmp4;		HX_STACK_VAR(resultBorder,"resultBorder");
	HX_STACK_LINE(510)
	::flixel::math::FlxPoint tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(510)
	{
		HX_STACK_LINE(510)
		::flixel::math::FlxPoint tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(510)
		{
			HX_STACK_LINE(510)
			::flixel::math::FlxPoint tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(510)
			{
				HX_STACK_LINE(510)
				Float X = (int)0;		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(510)
				Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(510)
				::flixel::util::FlxPool_flixel_math_FlxPoint tmp8 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(510)
				::flixel::math::FlxPoint tmp9 = tmp8->get();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(510)
				Float tmp10 = X;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(510)
				Float tmp11 = Y;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(510)
				::flixel::math::FlxPoint tmp12 = tmp9->set(tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(510)
				::flixel::math::FlxPoint point = tmp12;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(510)
				point->_inPool = false;
				HX_STACK_LINE(510)
				tmp7 = point;
			}
			HX_STACK_LINE(510)
			::flixel::math::FlxPoint _this = tmp7;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(510)
			::flixel::math::FlxPoint tmp8 = this->tileSize;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(510)
			::flixel::math::FlxPoint point = tmp8;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(510)
			Float tmp9 = point->x;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(510)
			_this->set_x(tmp9);
			HX_STACK_LINE(510)
			Float tmp10 = point->y;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(510)
			_this->set_y(tmp10);
			HX_STACK_LINE(510)
			{
				HX_STACK_LINE(510)
				bool tmp11 = point->_weak;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(510)
				if ((tmp11)){
					HX_STACK_LINE(510)
					point->put();
				}
			}
			HX_STACK_LINE(510)
			tmp6 = _this;
		}
		HX_STACK_LINE(510)
		::flixel::math::FlxPoint _this = tmp6;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(510)
		{
			HX_STACK_LINE(510)
			::flixel::math::FlxPoint _g = _this;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(510)
			Float tmp7 = _g->x;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(510)
			Float tmp8 = ((int)2 * border->x);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(510)
			Float tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(510)
			_g->set_x(tmp9);
		}
		HX_STACK_LINE(510)
		{
			HX_STACK_LINE(510)
			::flixel::math::FlxPoint _g = _this;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(510)
			Float tmp7 = _g->y;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(510)
			Float tmp8 = ((int)2 * border->y);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(510)
			Float tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(510)
			_g->set_y(tmp9);
		}
		HX_STACK_LINE(510)
		tmp5 = _this;
	}
	HX_STACK_LINE(510)
	::flixel::math::FlxPoint resultSize = tmp5;		HX_STACK_VAR(resultSize,"resultSize");
	HX_STACK_LINE(511)
	::flixel::graphics::FlxGraphic tmp6 = this->parent;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(511)
	::flixel::math::FlxPoint tmp7 = resultSize;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(511)
	::flixel::math::FlxRect tmp8 = this->region;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(511)
	::flixel::graphics::frames::FlxFrame tmp9 = this->atlasFrame;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(511)
	::flixel::math::FlxPoint tmp10 = this->tileSpacing;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(511)
	::flixel::math::FlxPoint tmp11 = resultBorder;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(511)
	::flixel::graphics::frames::FlxTileFrames tmp12 = ::flixel::graphics::frames::FlxTileFrames_obj::findFrame(tmp6,tmp7,tmp8,tmp9,tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(511)
	::flixel::graphics::frames::FlxTileFrames tileFrames = tmp12;		HX_STACK_VAR(tileFrames,"tileFrames");
	HX_STACK_LINE(512)
	bool tmp13 = (tileFrames != null());		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(512)
	if ((tmp13)){
		HX_STACK_LINE(514)
		::flixel::math::FlxPoint tmp14 = resultSize;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(514)
		::flixel::math::FlxPoint tmp15 = ::flixel::util::FlxDestroyUtil_obj::put(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(514)
		resultSize = tmp15;
		HX_STACK_LINE(515)
		::flixel::graphics::frames::FlxTileFrames tmp16 = tileFrames;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(515)
		return tmp16;
	}
	HX_STACK_LINE(518)
	::flixel::graphics::FlxGraphic tmp14 = this->parent;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(518)
	::flixel::math::FlxPoint tmp15 = resultBorder;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(518)
	::flixel::graphics::frames::FlxTileFrames tmp16 = ::flixel::graphics::frames::FlxTileFrames_obj::__new(tmp14,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(518)
	tileFrames = tmp16;
	HX_STACK_LINE(519)
	::flixel::math::FlxRect tmp17;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(519)
	{
		HX_STACK_LINE(519)
		::flixel::math::FlxRect tmp18;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(519)
		{
			HX_STACK_LINE(519)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(519)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(519)
			Float Width = (int)0;		HX_STACK_VAR(Width,"Width");
			HX_STACK_LINE(519)
			Float Height = (int)0;		HX_STACK_VAR(Height,"Height");
			HX_STACK_LINE(519)
			::flixel::math::FlxRect tmp19;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(519)
			{
				HX_STACK_LINE(519)
				::flixel::util::FlxPool_flixel_math_FlxRect tmp20 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(519)
				::flixel::math::FlxRect tmp21 = tmp20->get();		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(519)
				::flixel::math::FlxRect _this = tmp21;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(519)
				_this->x = X;
				HX_STACK_LINE(519)
				_this->y = Y;
				HX_STACK_LINE(519)
				_this->width = Width;
				HX_STACK_LINE(519)
				_this->height = Height;
				HX_STACK_LINE(519)
				tmp19 = _this;
			}
			HX_STACK_LINE(519)
			::flixel::math::FlxRect rect = tmp19;		HX_STACK_VAR(rect,"rect");
			HX_STACK_LINE(519)
			rect->_inPool = false;
			HX_STACK_LINE(519)
			tmp18 = rect;
		}
		HX_STACK_LINE(519)
		::flixel::math::FlxRect _this = tmp18;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(519)
		::flixel::math::FlxRect tmp19 = this->region;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(519)
		::flixel::math::FlxRect Rect = tmp19;		HX_STACK_VAR(Rect,"Rect");
		HX_STACK_LINE(519)
		_this->x = Rect->x;
		HX_STACK_LINE(519)
		_this->y = Rect->y;
		HX_STACK_LINE(519)
		_this->width = Rect->width;
		HX_STACK_LINE(519)
		_this->height = Rect->height;
		HX_STACK_LINE(519)
		{
			HX_STACK_LINE(519)
			bool tmp20 = Rect->_weak;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(519)
			if ((tmp20)){
				HX_STACK_LINE(519)
				bool tmp21 = Rect->_inPool;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(519)
				bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(519)
				if ((tmp22)){
					HX_STACK_LINE(519)
					Rect->_inPool = true;
					HX_STACK_LINE(519)
					Rect->_weak = false;
					HX_STACK_LINE(519)
					::flixel::util::FlxPool_flixel_math_FlxRect tmp23 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(519)
					::flixel::math::FlxRect tmp24 = Rect;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(519)
					tmp23->putUnsafe(tmp24);
				}
			}
		}
		HX_STACK_LINE(519)
		tmp17 = _this;
	}
	HX_STACK_LINE(519)
	tileFrames->region = tmp17;
	HX_STACK_LINE(520)
	::flixel::graphics::frames::FlxFrame tmp18 = this->atlasFrame;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(520)
	tileFrames->atlasFrame = tmp18;
	HX_STACK_LINE(521)
	tileFrames->tileSize = resultSize;
	HX_STACK_LINE(522)
	::flixel::math::FlxPoint tmp19;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(522)
	{
		HX_STACK_LINE(522)
		::flixel::math::FlxPoint tmp20;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(522)
		{
			HX_STACK_LINE(522)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(522)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(522)
			::flixel::util::FlxPool_flixel_math_FlxPoint tmp21 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(522)
			::flixel::math::FlxPoint tmp22 = tmp21->get();		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(522)
			Float tmp23 = X;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(522)
			Float tmp24 = Y;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(522)
			::flixel::math::FlxPoint tmp25 = tmp22->set(tmp23,tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(522)
			::flixel::math::FlxPoint point = tmp25;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(522)
			point->_inPool = false;
			HX_STACK_LINE(522)
			tmp20 = point;
		}
		HX_STACK_LINE(522)
		::flixel::math::FlxPoint _this = tmp20;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(522)
		::flixel::math::FlxPoint tmp21 = this->tileSpacing;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(522)
		::flixel::math::FlxPoint point = tmp21;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(522)
		Float tmp22 = point->x;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(522)
		_this->set_x(tmp22);
		HX_STACK_LINE(522)
		Float tmp23 = point->y;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(522)
		_this->set_y(tmp23);
		HX_STACK_LINE(522)
		{
			HX_STACK_LINE(522)
			bool tmp24 = point->_weak;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(522)
			if ((tmp24)){
				HX_STACK_LINE(522)
				point->put();
			}
		}
		HX_STACK_LINE(522)
		tmp19 = _this;
	}
	HX_STACK_LINE(522)
	tileFrames->tileSpacing = tmp19;
	HX_STACK_LINE(524)
	{
		HX_STACK_LINE(524)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(524)
		Array< ::Dynamic > _g1 = this->frames;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(524)
		while((true)){
			HX_STACK_LINE(524)
			bool tmp20 = (_g < _g1->length);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(524)
			bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(524)
			if ((tmp21)){
				HX_STACK_LINE(524)
				break;
			}
			HX_STACK_LINE(524)
			::flixel::graphics::frames::FlxFrame tmp22 = _g1->__get(_g).StaticCast< ::flixel::graphics::frames::FlxFrame >();		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(524)
			::flixel::graphics::frames::FlxFrame frame = tmp22;		HX_STACK_VAR(frame,"frame");
			HX_STACK_LINE(524)
			++(_g);
			HX_STACK_LINE(526)
			::flixel::math::FlxPoint tmp23 = border;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(526)
			::flixel::graphics::frames::FlxFrame tmp24 = frame->setBorderTo(tmp23,null());		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(526)
			tileFrames->pushFrame(tmp24);
		}
	}
	HX_STACK_LINE(529)
	::flixel::graphics::frames::FlxTileFrames tmp20 = tileFrames;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(529)
	return tmp20;
}


Void FlxTileFrames_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.graphics.frames.FlxTileFrames","destroy",0x9226061b,"flixel.graphics.frames.FlxTileFrames.destroy","flixel/graphics/frames/FlxTileFrames.hx",533,0x562d6bb0)
		HX_STACK_THIS(this)
		HX_STACK_LINE(534)
		this->super::destroy();
		HX_STACK_LINE(535)
		this->atlasFrame = null();
		HX_STACK_LINE(536)
		::flixel::math::FlxRect tmp = this->region;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(536)
		::flixel::math::FlxRect tmp1 = ::flixel::util::FlxDestroyUtil_obj::put(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(536)
		this->region = tmp1;
		HX_STACK_LINE(537)
		::flixel::math::FlxPoint tmp2 = this->tileSize;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(537)
		::flixel::math::FlxPoint tmp3 = ::flixel::util::FlxDestroyUtil_obj::put(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(537)
		this->tileSize = tmp3;
		HX_STACK_LINE(538)
		::flixel::math::FlxPoint tmp4 = this->tileSpacing;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(538)
		::flixel::math::FlxPoint tmp5 = ::flixel::util::FlxDestroyUtil_obj::put(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(538)
		this->tileSpacing = tmp5;
	}
return null();
}


::flixel::graphics::frames::FlxTileFrames FlxTileFrames_obj::fromBitmapAddSpacesAndBorders( Dynamic source,::flixel::math::FlxPoint tileSize,::flixel::math::FlxPoint tileSpacing,::flixel::math::FlxPoint tileBorder,::flixel::math::FlxRect region){
	HX_STACK_FRAME("flixel.graphics.frames.FlxTileFrames","fromBitmapAddSpacesAndBorders",0x637393e6,"flixel.graphics.frames.FlxTileFrames.fromBitmapAddSpacesAndBorders","flixel/graphics/frames/FlxTileFrames.hx",68,0x562d6bb0)
	HX_STACK_ARG(source,"source")
	HX_STACK_ARG(tileSize,"tileSize")
	HX_STACK_ARG(tileSpacing,"tileSpacing")
	HX_STACK_ARG(tileBorder,"tileBorder")
	HX_STACK_ARG(region,"region")
	HX_STACK_LINE(69)
	::flixel::_system::frontEnds::BitmapFrontEnd tmp = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(69)
	Dynamic tmp1 = source;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(69)
	::flixel::graphics::FlxGraphic tmp2 = tmp->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )(tmp1,false,null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(69)
	::flixel::graphics::FlxGraphic graphic = tmp2;		HX_STACK_VAR(graphic,"graphic");
	HX_STACK_LINE(70)
	bool tmp3 = (graphic == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(70)
	if ((tmp3)){
		HX_STACK_LINE(70)
		return null();
	}
	HX_STACK_LINE(72)
	::flixel::_system::frontEnds::BitmapFrontEnd tmp4 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(72)
	::String tmp5 = graphic->key;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(72)
	::flixel::math::FlxPoint tmp6 = tileSize;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(72)
	::flixel::math::FlxPoint tmp7 = tileSpacing;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(72)
	::flixel::math::FlxPoint tmp8 = tileBorder;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(72)
	::flixel::math::FlxRect tmp9 = region;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(72)
	::String tmp10 = tmp4->__Field(HX_HCSTRING("getKeyWithSpacesAndBorders","\xac","\x4e","\xae","\x2a"), hx::paccDynamic )(tmp5,tmp6,tmp7,tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(72)
	::String key = tmp10;		HX_STACK_VAR(key,"key");
	HX_STACK_LINE(73)
	::flixel::_system::frontEnds::BitmapFrontEnd tmp11 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(73)
	::String tmp12 = key;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(73)
	::flixel::graphics::FlxGraphic tmp13 = tmp11->__Field(HX_HCSTRING("_cache","\x83","\xe1","\xfb","\x3c"), hx::paccDynamic )->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic )(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(73)
	::flixel::graphics::FlxGraphic result = tmp13;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(74)
	bool tmp14 = (result == null());		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(74)
	if ((tmp14)){
		HX_STACK_LINE(76)
		::openfl::_legacy::display::BitmapData tmp15 = graphic->bitmap;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(76)
		::flixel::math::FlxPoint tmp16 = tileSize;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(76)
		::flixel::math::FlxPoint tmp17 = tileSpacing;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(76)
		::flixel::math::FlxPoint tmp18 = tileBorder;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(76)
		::flixel::math::FlxRect tmp19 = region;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(76)
		::openfl::_legacy::display::BitmapData tmp20 = ::flixel::util::FlxBitmapDataUtil_obj::addSpacesAndBorders(tmp15,tmp16,tmp17,tmp18,tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(76)
		::openfl::_legacy::display::BitmapData bitmap = tmp20;		HX_STACK_VAR(bitmap,"bitmap");
		HX_STACK_LINE(77)
		::flixel::_system::frontEnds::BitmapFrontEnd tmp21 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(77)
		::openfl::_legacy::display::BitmapData tmp22 = bitmap;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(77)
		::String tmp23 = key;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(77)
		::flixel::graphics::FlxGraphic tmp24 = tmp21->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )(tmp22,false,tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(77)
		result = tmp24;
	}
	HX_STACK_LINE(80)
	int borderX = (int)0;		HX_STACK_VAR(borderX,"borderX");
	HX_STACK_LINE(81)
	int borderY = (int)0;		HX_STACK_VAR(borderY,"borderY");
	HX_STACK_LINE(83)
	bool tmp15 = (tileBorder != null());		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(83)
	if ((tmp15)){
		HX_STACK_LINE(85)
		Float tmp16 = tileBorder->x;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(85)
		int tmp17 = ::Std_obj::_int(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(85)
		borderX = tmp17;
		HX_STACK_LINE(86)
		Float tmp18 = tileBorder->y;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(86)
		int tmp19 = ::Std_obj::_int(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(86)
		borderY = tmp19;
	}
	HX_STACK_LINE(89)
	::flixel::graphics::FlxGraphic tmp16 = result;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(89)
	::flixel::math::FlxPoint tmp17;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(89)
	{
		HX_STACK_LINE(89)
		::flixel::math::FlxPoint tmp18;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(89)
		{
			HX_STACK_LINE(89)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(89)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(89)
			::flixel::util::FlxPool_flixel_math_FlxPoint tmp19 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(89)
			::flixel::math::FlxPoint tmp20 = tmp19->get();		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(89)
			Float tmp21 = X;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(89)
			Float tmp22 = Y;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(89)
			::flixel::math::FlxPoint tmp23 = tmp20->set(tmp21,tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(89)
			::flixel::math::FlxPoint point = tmp23;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(89)
			point->_inPool = false;
			HX_STACK_LINE(89)
			tmp18 = point;
		}
		HX_STACK_LINE(89)
		::flixel::math::FlxPoint tmp19 = tileSize;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(89)
		::flixel::math::FlxPoint tmp20 = tmp18->addPoint(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(89)
		::flixel::math::FlxPoint _this = tmp20;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(89)
		{
			HX_STACK_LINE(89)
			::flixel::math::FlxPoint _g = _this;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(89)
			Float tmp21 = _g->x;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(89)
			int tmp22 = ((int)2 * borderX);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(89)
			Float tmp23 = (tmp21 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(89)
			_g->set_x(tmp23);
		}
		HX_STACK_LINE(89)
		{
			HX_STACK_LINE(89)
			::flixel::math::FlxPoint _g = _this;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(89)
			Float tmp21 = _g->y;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(89)
			int tmp22 = ((int)2 * borderY);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(89)
			Float tmp23 = (tmp21 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(89)
			_g->set_y(tmp23);
		}
		HX_STACK_LINE(89)
		tmp17 = _this;
	}
	HX_STACK_LINE(89)
	::flixel::math::FlxPoint tmp18 = tileSpacing;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(89)
	::flixel::graphics::frames::FlxTileFrames tmp19 = ::flixel::graphics::frames::FlxTileFrames_obj::fromGraphic(tmp16,tmp17,null(),tmp18);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(89)
	::flixel::graphics::frames::FlxTileFrames tileFrames = tmp19;		HX_STACK_VAR(tileFrames,"tileFrames");
	HX_STACK_LINE(91)
	bool tmp20 = (tileBorder == null());		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(91)
	if ((tmp20)){
		HX_STACK_LINE(93)
		::flixel::graphics::frames::FlxTileFrames tmp21 = tileFrames;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(93)
		return tmp21;
	}
	HX_STACK_LINE(96)
	::flixel::math::FlxPoint tmp21 = tileBorder;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(96)
	::flixel::graphics::frames::FlxTileFrames tmp22 = hx::TCast< ::flixel::graphics::frames::FlxTileFrames >::cast(tileFrames->addBorder(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(96)
	return tmp22;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxTileFrames_obj,fromBitmapAddSpacesAndBorders,return )

::flixel::graphics::frames::FlxTileFrames FlxTileFrames_obj::fromFrameAddSpacesAndBorders( ::flixel::graphics::frames::FlxFrame frame,::flixel::math::FlxPoint tileSize,::flixel::math::FlxPoint tileSpacing,::flixel::math::FlxPoint tileBorder){
	HX_STACK_FRAME("flixel.graphics.frames.FlxTileFrames","fromFrameAddSpacesAndBorders",0x8cf4341a,"flixel.graphics.frames.FlxTileFrames.fromFrameAddSpacesAndBorders","flixel/graphics/frames/FlxTileFrames.hx",111,0x562d6bb0)
	HX_STACK_ARG(frame,"frame")
	HX_STACK_ARG(tileSize,"tileSize")
	HX_STACK_ARG(tileSpacing,"tileSpacing")
	HX_STACK_ARG(tileBorder,"tileBorder")
	HX_STACK_LINE(112)
	::openfl::_legacy::display::BitmapData tmp = frame->paint(null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(112)
	::openfl::_legacy::display::BitmapData bitmap = tmp;		HX_STACK_VAR(bitmap,"bitmap");
	HX_STACK_LINE(113)
	::openfl::_legacy::display::BitmapData tmp1 = bitmap;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(113)
	::flixel::math::FlxPoint tmp2 = tileSize;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(113)
	::flixel::math::FlxPoint tmp3 = tileSpacing;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(113)
	::flixel::math::FlxPoint tmp4 = tileBorder;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(113)
	::flixel::graphics::frames::FlxTileFrames tmp5 = ::flixel::graphics::frames::FlxTileFrames_obj::fromBitmapAddSpacesAndBorders(tmp1,tmp2,tmp3,tmp4,null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(113)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxTileFrames_obj,fromFrameAddSpacesAndBorders,return )

::flixel::graphics::frames::FlxTileFrames FlxTileFrames_obj::fromFrame( ::flixel::graphics::frames::FlxFrame frame,::flixel::math::FlxPoint tileSize,::flixel::math::FlxPoint tileSpacing){
	HX_STACK_FRAME("flixel.graphics.frames.FlxTileFrames","fromFrame",0xb32d85c4,"flixel.graphics.frames.FlxTileFrames.fromFrame","flixel/graphics/frames/FlxTileFrames.hx",126,0x562d6bb0)
	HX_STACK_ARG(frame,"frame")
	HX_STACK_ARG(tileSize,"tileSize")
	HX_STACK_ARG(tileSpacing,"tileSpacing")
	HX_STACK_LINE(127)
	::flixel::graphics::FlxGraphic graphic = frame->parent;		HX_STACK_VAR(graphic,"graphic");
	HX_STACK_LINE(129)
	::flixel::graphics::FlxGraphic tmp = graphic;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(129)
	::flixel::math::FlxPoint tmp1 = tileSize;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(129)
	::flixel::graphics::frames::FlxFrame tmp2 = frame;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(129)
	::flixel::math::FlxPoint tmp3 = tileSpacing;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(129)
	::flixel::graphics::frames::FlxTileFrames tmp4 = ::flixel::graphics::frames::FlxTileFrames_obj::findFrame(tmp,tmp1,null(),tmp2,tmp3,null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(129)
	::flixel::graphics::frames::FlxTileFrames tileFrames = tmp4;		HX_STACK_VAR(tileFrames,"tileFrames");
	HX_STACK_LINE(130)
	bool tmp5 = (tileFrames != null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(130)
	if ((tmp5)){
		HX_STACK_LINE(132)
		::flixel::graphics::frames::FlxTileFrames tmp6 = tileFrames;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(132)
		return tmp6;
	}
	HX_STACK_LINE(136)
	bool tmp6 = (tileSpacing != null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(136)
	::flixel::math::FlxPoint tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(136)
	if ((tmp6)){
		HX_STACK_LINE(136)
		tmp7 = tileSpacing;
	}
	else{
		HX_STACK_LINE(136)
		::flixel::util::FlxPool_flixel_math_FlxPoint tmp8 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(136)
		::flixel::math::FlxPoint tmp9 = tmp8->get();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(136)
		::flixel::math::FlxPoint tmp10 = tmp9->set((int)0,(int)0);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(136)
		::flixel::math::FlxPoint point = tmp10;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(136)
		point->_inPool = false;
		HX_STACK_LINE(136)
		tmp7 = point;
	}
	HX_STACK_LINE(136)
	tileSpacing = tmp7;
	HX_STACK_LINE(138)
	::flixel::graphics::frames::FlxTileFrames tmp8 = ::flixel::graphics::frames::FlxTileFrames_obj::__new(graphic,null());		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(138)
	tileFrames = tmp8;
	HX_STACK_LINE(139)
	tileFrames->atlasFrame = frame;
	HX_STACK_LINE(140)
	tileFrames->region = frame->frame;
	HX_STACK_LINE(141)
	tileFrames->tileSize = tileSize;
	HX_STACK_LINE(142)
	tileFrames->tileSpacing = tileSpacing;
	HX_STACK_LINE(144)
	{
		HX_STACK_LINE(144)
		Float tmp9 = tileSpacing->x;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(144)
		int tmp10 = ::Math_obj::floor(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(144)
		tileSpacing->set_x(tmp10);
		HX_STACK_LINE(144)
		Float tmp11 = tileSpacing->y;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(144)
		int tmp12 = ::Math_obj::floor(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(144)
		tileSpacing->set_y(tmp12);
		HX_STACK_LINE(144)
		tileSpacing;
	}
	HX_STACK_LINE(145)
	{
		HX_STACK_LINE(145)
		Float tmp9 = tileSize->x;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(145)
		int tmp10 = ::Math_obj::floor(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(145)
		tileSize->set_x(tmp10);
		HX_STACK_LINE(145)
		Float tmp11 = tileSize->y;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(145)
		int tmp12 = ::Math_obj::floor(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(145)
		tileSize->set_y(tmp12);
		HX_STACK_LINE(145)
		tileSize;
	}
	HX_STACK_LINE(147)
	Float tmp9 = (tileSize->x + tileSpacing->x);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(147)
	Float spacedWidth = tmp9;		HX_STACK_VAR(spacedWidth,"spacedWidth");
	HX_STACK_LINE(148)
	Float tmp10 = (tileSize->y + tileSpacing->y);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(148)
	Float spacedHeight = tmp10;		HX_STACK_VAR(spacedHeight,"spacedHeight");
	HX_STACK_LINE(150)
	bool tmp11 = (tileSize->y == (int)0);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(150)
	int tmp12;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(150)
	if ((tmp11)){
		HX_STACK_LINE(150)
		tmp12 = (int)1;
	}
	else{
		HX_STACK_LINE(150)
		Float tmp13 = frame->sourceSize->y;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(150)
		Float tmp14 = tileSpacing->y;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(150)
		Float tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(150)
		Float tmp16 = spacedHeight;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(150)
		Float tmp17 = (Float(tmp15) / Float(tmp16));		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(150)
		tmp12 = ::Std_obj::_int(tmp17);
	}
	HX_STACK_LINE(150)
	int numRows = tmp12;		HX_STACK_VAR(numRows,"numRows");
	HX_STACK_LINE(151)
	bool tmp13 = (tileSize->x == (int)0);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(151)
	int tmp14;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(151)
	if ((tmp13)){
		HX_STACK_LINE(151)
		tmp14 = (int)1;
	}
	else{
		HX_STACK_LINE(151)
		Float tmp15 = frame->sourceSize->x;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(151)
		Float tmp16 = tileSpacing->x;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(151)
		Float tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(151)
		Float tmp18 = spacedWidth;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(151)
		Float tmp19 = (Float(tmp17) / Float(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(151)
		tmp14 = ::Std_obj::_int(tmp19);
	}
	HX_STACK_LINE(151)
	int numCols = tmp14;		HX_STACK_VAR(numCols,"numCols");
	HX_STACK_LINE(153)
	::flixel::math::FlxRect tmp15;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(153)
	{
		HX_STACK_LINE(153)
		::flixel::math::FlxRect tmp16;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(153)
		{
			HX_STACK_LINE(153)
			::flixel::util::FlxPool_flixel_math_FlxRect tmp17 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(153)
			::flixel::math::FlxRect tmp18 = tmp17->get();		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(153)
			::flixel::math::FlxRect _this = tmp18;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(153)
			_this->x = (int)0;
			HX_STACK_LINE(153)
			_this->y = (int)0;
			HX_STACK_LINE(153)
			_this->width = tileSize->x;
			HX_STACK_LINE(153)
			_this->height = tileSize->y;
			HX_STACK_LINE(153)
			tmp16 = _this;
		}
		HX_STACK_LINE(153)
		::flixel::math::FlxRect rect = tmp16;		HX_STACK_VAR(rect,"rect");
		HX_STACK_LINE(153)
		rect->_inPool = false;
		HX_STACK_LINE(153)
		tmp15 = rect;
	}
	HX_STACK_LINE(153)
	::flixel::math::FlxRect helperRect = tmp15;		HX_STACK_VAR(helperRect,"helperRect");
	HX_STACK_LINE(155)
	{
		HX_STACK_LINE(155)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(155)
		while((true)){
			HX_STACK_LINE(155)
			bool tmp16 = (_g < numRows);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(155)
			bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(155)
			if ((tmp17)){
				HX_STACK_LINE(155)
				break;
			}
			HX_STACK_LINE(155)
			int tmp18 = (_g)++;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(155)
			int j = tmp18;		HX_STACK_VAR(j,"j");
			HX_STACK_LINE(157)
			{
				HX_STACK_LINE(157)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(157)
				while((true)){
					HX_STACK_LINE(157)
					bool tmp19 = (_g1 < numCols);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(157)
					bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(157)
					if ((tmp20)){
						HX_STACK_LINE(157)
						break;
					}
					HX_STACK_LINE(157)
					int tmp21 = (_g1)++;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(157)
					int i = tmp21;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(159)
					Float tmp22 = (spacedWidth * i);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(159)
					helperRect->x = tmp22;
					HX_STACK_LINE(160)
					Float tmp23 = (spacedHeight * j);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(160)
					helperRect->y = tmp23;
					HX_STACK_LINE(161)
					::flixel::math::FlxRect tmp24 = helperRect;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(161)
					::flixel::graphics::frames::FlxFrame tmp25 = frame->subFrameTo(tmp24,null());		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(161)
					tileFrames->pushFrame(tmp25);
				}
			}
		}
	}
	HX_STACK_LINE(165)
	::flixel::math::FlxRect tmp16 = helperRect;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(165)
	::flixel::math::FlxRect tmp17 = ::flixel::util::FlxDestroyUtil_obj::put(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(165)
	helperRect = tmp17;
	HX_STACK_LINE(167)
	tileFrames->numCols = numCols;
	HX_STACK_LINE(168)
	tileFrames->numRows = numRows;
	HX_STACK_LINE(169)
	::flixel::graphics::frames::FlxTileFrames tmp18 = tileFrames;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(169)
	return tmp18;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxTileFrames_obj,fromFrame,return )

::flixel::graphics::frames::FlxTileFrames FlxTileFrames_obj::fromFrames( Array< ::Dynamic > Frames){
	HX_STACK_FRAME("flixel.graphics.frames.FlxTileFrames","fromFrames",0x14a7862f,"flixel.graphics.frames.FlxTileFrames.fromFrames","flixel/graphics/frames/FlxTileFrames.hx",179,0x562d6bb0)
	HX_STACK_ARG(Frames,"Frames")
	HX_STACK_LINE(180)
	::flixel::graphics::frames::FlxFrame tmp = Frames->__get((int)0).StaticCast< ::flixel::graphics::frames::FlxFrame >();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(180)
	::flixel::graphics::frames::FlxFrame firstFrame = tmp;		HX_STACK_VAR(firstFrame,"firstFrame");
	HX_STACK_LINE(181)
	::flixel::graphics::FlxGraphic graphic = firstFrame->parent;		HX_STACK_VAR(graphic,"graphic");
	HX_STACK_LINE(183)
	{
		HX_STACK_LINE(183)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(183)
		while((true)){
			HX_STACK_LINE(183)
			bool tmp1 = (_g < Frames->length);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(183)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(183)
			if ((tmp2)){
				HX_STACK_LINE(183)
				break;
			}
			HX_STACK_LINE(183)
			::flixel::graphics::frames::FlxFrame tmp3 = Frames->__get(_g).StaticCast< ::flixel::graphics::frames::FlxFrame >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(183)
			::flixel::graphics::frames::FlxFrame frame = tmp3;		HX_STACK_VAR(frame,"frame");
			HX_STACK_LINE(183)
			++(_g);
			HX_STACK_LINE(185)
			bool tmp4 = (frame->parent != firstFrame->parent);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(185)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(185)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(185)
			if ((tmp5)){
				HX_STACK_LINE(185)
				bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(185)
				{
					HX_STACK_LINE(185)
					::flixel::math::FlxPoint _this = frame->sourceSize;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(185)
					::flixel::math::FlxPoint point = firstFrame->sourceSize;		HX_STACK_VAR(point,"point");
					HX_STACK_LINE(185)
					bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(185)
					{
						HX_STACK_LINE(185)
						Float aDiff = ((Float)0.0000001);		HX_STACK_VAR(aDiff,"aDiff");
						HX_STACK_LINE(185)
						Float tmp9 = (_this->x - point->x);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(185)
						Float tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(185)
						Float tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(185)
						Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(185)
						Float tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(185)
						Float tmp14 = ::Math_obj::abs(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(185)
						Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(185)
						Float tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(185)
						Float tmp17 = aDiff;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(185)
						bool tmp18 = (tmp16 <= tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(185)
						tmp8 = tmp18;
					}
					HX_STACK_LINE(185)
					bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(185)
					bool tmp10 = tmp8;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(185)
					if ((tmp10)){
						HX_STACK_LINE(185)
						Float aDiff = ((Float)0.0000001);		HX_STACK_VAR(aDiff,"aDiff");
						HX_STACK_LINE(185)
						Float tmp11 = (_this->y - point->y);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(185)
						Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(185)
						Float tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(185)
						Float tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(185)
						Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(185)
						Float tmp16 = ::Math_obj::abs(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(185)
						Float tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(185)
						Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(185)
						Float tmp19 = aDiff;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(185)
						bool tmp20 = (tmp18 <= tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(185)
						tmp9 = tmp20;
					}
					else{
						HX_STACK_LINE(185)
						tmp9 = false;
					}
					HX_STACK_LINE(185)
					bool result = tmp9;		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(185)
					{
						HX_STACK_LINE(185)
						bool tmp11 = point->_weak;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(185)
						bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(185)
						if ((tmp12)){
							HX_STACK_LINE(185)
							point->put();
						}
					}
					HX_STACK_LINE(185)
					tmp7 = result;
				}
				HX_STACK_LINE(185)
				bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(185)
				tmp6 = !(tmp8);
			}
			else{
				HX_STACK_LINE(185)
				tmp6 = true;
			}
			HX_STACK_LINE(185)
			if ((tmp6)){
				HX_STACK_LINE(188)
				return null();
			}
		}
	}
	HX_STACK_LINE(192)
	::flixel::graphics::frames::FlxTileFrames tmp1 = ::flixel::graphics::frames::FlxTileFrames_obj::__new(graphic,null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(192)
	::flixel::graphics::frames::FlxTileFrames tileFrames = tmp1;		HX_STACK_VAR(tileFrames,"tileFrames");
	HX_STACK_LINE(194)
	tileFrames->region = null();
	HX_STACK_LINE(195)
	tileFrames->atlasFrame = null();
	HX_STACK_LINE(196)
	::flixel::math::FlxPoint tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(196)
	{
		HX_STACK_LINE(196)
		::flixel::math::FlxPoint tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(196)
		{
			HX_STACK_LINE(196)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(196)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(196)
			::flixel::util::FlxPool_flixel_math_FlxPoint tmp4 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(196)
			::flixel::math::FlxPoint tmp5 = tmp4->get();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(196)
			Float tmp6 = X;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(196)
			Float tmp7 = Y;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(196)
			::flixel::math::FlxPoint tmp8 = tmp5->set(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(196)
			::flixel::math::FlxPoint point = tmp8;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(196)
			point->_inPool = false;
			HX_STACK_LINE(196)
			tmp3 = point;
		}
		HX_STACK_LINE(196)
		::flixel::math::FlxPoint _this = tmp3;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(196)
		::flixel::math::FlxPoint point = firstFrame->sourceSize;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(196)
		Float tmp4 = point->x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(196)
		_this->set_x(tmp4);
		HX_STACK_LINE(196)
		Float tmp5 = point->y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(196)
		_this->set_y(tmp5);
		HX_STACK_LINE(196)
		{
			HX_STACK_LINE(196)
			bool tmp6 = point->_weak;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(196)
			if ((tmp6)){
				HX_STACK_LINE(196)
				point->put();
			}
		}
		HX_STACK_LINE(196)
		tmp2 = _this;
	}
	HX_STACK_LINE(196)
	tileFrames->tileSize = tmp2;
	HX_STACK_LINE(197)
	::flixel::math::FlxPoint tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(197)
	{
		HX_STACK_LINE(197)
		::flixel::util::FlxPool_flixel_math_FlxPoint tmp4 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(197)
		::flixel::math::FlxPoint tmp5 = tmp4->get();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(197)
		::flixel::math::FlxPoint tmp6 = tmp5->set((int)0,(int)0);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(197)
		::flixel::math::FlxPoint point = tmp6;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(197)
		point->_inPool = false;
		HX_STACK_LINE(197)
		tmp3 = point;
	}
	HX_STACK_LINE(197)
	tileFrames->tileSpacing = tmp3;
	HX_STACK_LINE(198)
	tileFrames->numCols = Frames->length;
	HX_STACK_LINE(199)
	tileFrames->numRows = (int)1;
	HX_STACK_LINE(201)
	{
		HX_STACK_LINE(201)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(201)
		while((true)){
			HX_STACK_LINE(201)
			bool tmp4 = (_g < Frames->length);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(201)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(201)
			if ((tmp5)){
				HX_STACK_LINE(201)
				break;
			}
			HX_STACK_LINE(201)
			::flixel::graphics::frames::FlxFrame tmp6 = Frames->__get(_g).StaticCast< ::flixel::graphics::frames::FlxFrame >();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(201)
			::flixel::graphics::frames::FlxFrame frame = tmp6;		HX_STACK_VAR(frame,"frame");
			HX_STACK_LINE(201)
			++(_g);
			HX_STACK_LINE(203)
			::flixel::graphics::frames::FlxFrame tmp7 = frame;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(203)
			tileFrames->frames->push(tmp7);
			HX_STACK_LINE(205)
			bool tmp8 = (frame->name != null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(205)
			if ((tmp8)){
				HX_STACK_LINE(207)
				::String tmp9 = frame->name;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(207)
				::flixel::graphics::frames::FlxFrame tmp10 = frame;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(207)
				tileFrames->framesHash->set(tmp9,tmp10);
			}
		}
	}
	HX_STACK_LINE(211)
	::flixel::graphics::frames::FlxTileFrames tmp4 = tileFrames;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(211)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxTileFrames_obj,fromFrames,return )

::flixel::graphics::frames::FlxTileFrames FlxTileFrames_obj::fromAtlasByPrefix( ::flixel::graphics::frames::FlxAtlasFrames Frames,::String Prefix){
	HX_STACK_FRAME("flixel.graphics.frames.FlxTileFrames","fromAtlasByPrefix",0x9481e7cb,"flixel.graphics.frames.FlxTileFrames.fromAtlasByPrefix","flixel/graphics/frames/FlxTileFrames.hx",224,0x562d6bb0)
	HX_STACK_ARG(Frames,"Frames")
	HX_STACK_ARG(Prefix,"Prefix")
	HX_STACK_LINE(225)
	Array< ::Dynamic > framesToAdd = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(framesToAdd,"framesToAdd");
	HX_STACK_LINE(227)
	{
		HX_STACK_LINE(227)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(227)
		Array< ::Dynamic > _g1 = Frames->frames;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(227)
		while((true)){
			HX_STACK_LINE(227)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(227)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(227)
			if ((tmp1)){
				HX_STACK_LINE(227)
				break;
			}
			HX_STACK_LINE(227)
			::flixel::graphics::frames::FlxFrame tmp2 = _g1->__get(_g).StaticCast< ::flixel::graphics::frames::FlxFrame >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(227)
			::flixel::graphics::frames::FlxFrame frame = tmp2;		HX_STACK_VAR(frame,"frame");
			HX_STACK_LINE(227)
			++(_g);
			HX_STACK_LINE(229)
			::String tmp3 = frame->name;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(229)
			::String tmp4 = Prefix;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(229)
			bool tmp5 = ::StringTools_obj::startsWith(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(229)
			if ((tmp5)){
				HX_STACK_LINE(231)
				::flixel::graphics::frames::FlxFrame tmp6 = frame;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(231)
				framesToAdd->push(tmp6);
			}
		}
	}
	HX_STACK_LINE(235)
	bool tmp = (framesToAdd->length > (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(235)
	if ((tmp)){
		HX_STACK_LINE(237)
		::flixel::graphics::frames::FlxFrame tmp1 = framesToAdd->__get((int)0).StaticCast< ::flixel::graphics::frames::FlxFrame >();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(237)
		::String name = tmp1->name;		HX_STACK_VAR(name,"name");
		HX_STACK_LINE(238)
		int tmp2 = Prefix.length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(238)
		int tmp3 = name.indexOf(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"),tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(238)
		int postIndex = tmp3;		HX_STACK_VAR(postIndex,"postIndex");
		HX_STACK_LINE(239)
		int tmp4 = postIndex;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(239)
		int tmp5 = (int)-1;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(239)
		bool tmp6 = (tmp4 == tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(239)
		int tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(239)
		if ((tmp6)){
			HX_STACK_LINE(239)
			tmp7 = name.length;
		}
		else{
			HX_STACK_LINE(239)
			tmp7 = postIndex;
		}
		HX_STACK_LINE(239)
		int tmp8 = name.length;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(239)
		::String tmp9 = name.substring(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(239)
		::String postFix = tmp9;		HX_STACK_VAR(postFix,"postFix");
		HX_STACK_LINE(241)
		int tmp10 = Prefix.length;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(241)
		int tmp11 = postFix.length;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(241)
		::flixel::graphics::frames::FlxFrame_obj::sort(framesToAdd,tmp10,tmp11);
		HX_STACK_LINE(242)
		::flixel::graphics::frames::FlxTileFrames tmp12 = ::flixel::graphics::frames::FlxTileFrames_obj::fromFrames(framesToAdd);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(242)
		return tmp12;
	}
	HX_STACK_LINE(245)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxTileFrames_obj,fromAtlasByPrefix,return )

::flixel::graphics::frames::FlxTileFrames FlxTileFrames_obj::fromGraphic( ::flixel::graphics::FlxGraphic graphic,::flixel::math::FlxPoint tileSize,::flixel::math::FlxRect region,::flixel::math::FlxPoint tileSpacing){
	HX_STACK_FRAME("flixel.graphics.frames.FlxTileFrames","fromGraphic",0x29813bff,"flixel.graphics.frames.FlxTileFrames.fromGraphic","flixel/graphics/frames/FlxTileFrames.hx",259,0x562d6bb0)
	HX_STACK_ARG(graphic,"graphic")
	HX_STACK_ARG(tileSize,"tileSize")
	HX_STACK_ARG(region,"region")
	HX_STACK_ARG(tileSpacing,"tileSpacing")
	HX_STACK_LINE(261)
	::flixel::graphics::FlxGraphic tmp = graphic;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(261)
	::flixel::math::FlxPoint tmp1 = tileSize;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(261)
	::flixel::math::FlxRect tmp2 = region;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(261)
	::flixel::math::FlxPoint tmp3 = tileSpacing;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(261)
	::flixel::graphics::frames::FlxTileFrames tmp4 = ::flixel::graphics::frames::FlxTileFrames_obj::findFrame(tmp,tmp1,tmp2,null(),tmp3,null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(261)
	::flixel::graphics::frames::FlxTileFrames tileFrames = tmp4;		HX_STACK_VAR(tileFrames,"tileFrames");
	HX_STACK_LINE(262)
	bool tmp5 = (tileFrames != null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(262)
	if ((tmp5)){
		HX_STACK_LINE(264)
		::flixel::graphics::frames::FlxTileFrames tmp6 = tileFrames;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(264)
		return tmp6;
	}
	HX_STACK_LINE(268)
	bool tmp6 = (region == null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(268)
	if ((tmp6)){
		HX_STACK_LINE(270)
		::flixel::math::FlxRect tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(270)
		{
			HX_STACK_LINE(270)
			::flixel::math::FlxRect tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(270)
			{
				HX_STACK_LINE(270)
				::flixel::util::FlxPool_flixel_math_FlxRect tmp9 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(270)
				::flixel::math::FlxRect tmp10 = tmp9->get();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(270)
				::flixel::math::FlxRect _this = tmp10;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(270)
				_this->x = (int)0;
				HX_STACK_LINE(270)
				_this->y = (int)0;
				HX_STACK_LINE(270)
				_this->width = graphic->width;
				HX_STACK_LINE(270)
				_this->height = graphic->height;
				HX_STACK_LINE(270)
				tmp8 = _this;
			}
			HX_STACK_LINE(270)
			::flixel::math::FlxRect rect = tmp8;		HX_STACK_VAR(rect,"rect");
			HX_STACK_LINE(270)
			rect->_inPool = false;
			HX_STACK_LINE(270)
			tmp7 = rect;
		}
		HX_STACK_LINE(270)
		region = tmp7;
	}
	else{
		HX_STACK_LINE(274)
		bool tmp7 = (region->width == (int)0);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(274)
		if ((tmp7)){
			HX_STACK_LINE(276)
			Float tmp8 = (graphic->width - region->x);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(276)
			region->width = tmp8;
		}
		HX_STACK_LINE(279)
		bool tmp8 = (region->height == (int)0);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(279)
		if ((tmp8)){
			HX_STACK_LINE(281)
			Float tmp9 = (graphic->height - region->y);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(281)
			region->height = tmp9;
		}
	}
	HX_STACK_LINE(285)
	bool tmp7 = (tileSpacing != null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(285)
	::flixel::math::FlxPoint tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(285)
	if ((tmp7)){
		HX_STACK_LINE(285)
		tmp8 = tileSpacing;
	}
	else{
		HX_STACK_LINE(285)
		::flixel::util::FlxPool_flixel_math_FlxPoint tmp9 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(285)
		::flixel::math::FlxPoint tmp10 = tmp9->get();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(285)
		::flixel::math::FlxPoint tmp11 = tmp10->set((int)0,(int)0);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(285)
		::flixel::math::FlxPoint point = tmp11;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(285)
		point->_inPool = false;
		HX_STACK_LINE(285)
		tmp8 = point;
	}
	HX_STACK_LINE(285)
	tileSpacing = tmp8;
	HX_STACK_LINE(287)
	::flixel::graphics::frames::FlxTileFrames tmp9 = ::flixel::graphics::frames::FlxTileFrames_obj::__new(graphic,null());		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(287)
	tileFrames = tmp9;
	HX_STACK_LINE(288)
	tileFrames->region = region;
	HX_STACK_LINE(289)
	tileFrames->atlasFrame = null();
	HX_STACK_LINE(290)
	tileFrames->tileSize = tileSize;
	HX_STACK_LINE(291)
	tileFrames->tileSpacing = tileSpacing;
	HX_STACK_LINE(293)
	{
		HX_STACK_LINE(293)
		Float tmp10 = region->x;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(293)
		int tmp11 = ::Math_obj::floor(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(293)
		region->x = tmp11;
		HX_STACK_LINE(293)
		Float tmp12 = region->y;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(293)
		int tmp13 = ::Math_obj::floor(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(293)
		region->y = tmp13;
		HX_STACK_LINE(293)
		Float tmp14 = region->width;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(293)
		int tmp15 = ::Math_obj::floor(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(293)
		region->width = tmp15;
		HX_STACK_LINE(293)
		Float tmp16 = region->height;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(293)
		int tmp17 = ::Math_obj::floor(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(293)
		region->height = tmp17;
		HX_STACK_LINE(293)
		region;
	}
	HX_STACK_LINE(294)
	{
		HX_STACK_LINE(294)
		Float tmp10 = tileSpacing->x;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(294)
		int tmp11 = ::Math_obj::floor(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(294)
		tileSpacing->set_x(tmp11);
		HX_STACK_LINE(294)
		Float tmp12 = tileSpacing->y;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(294)
		int tmp13 = ::Math_obj::floor(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(294)
		tileSpacing->set_y(tmp13);
		HX_STACK_LINE(294)
		tileSpacing;
	}
	HX_STACK_LINE(295)
	{
		HX_STACK_LINE(295)
		Float tmp10 = tileSize->x;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(295)
		int tmp11 = ::Math_obj::floor(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(295)
		tileSize->set_x(tmp11);
		HX_STACK_LINE(295)
		Float tmp12 = tileSize->y;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(295)
		int tmp13 = ::Math_obj::floor(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(295)
		tileSize->set_y(tmp13);
		HX_STACK_LINE(295)
		tileSize;
	}
	HX_STACK_LINE(297)
	Float tmp10 = (tileSize->x + tileSpacing->x);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(297)
	Float spacedWidth = tmp10;		HX_STACK_VAR(spacedWidth,"spacedWidth");
	HX_STACK_LINE(298)
	Float tmp11 = (tileSize->y + tileSpacing->y);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(298)
	Float spacedHeight = tmp11;		HX_STACK_VAR(spacedHeight,"spacedHeight");
	HX_STACK_LINE(300)
	bool tmp12 = (tileSize->y == (int)0);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(300)
	int tmp13;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(300)
	if ((tmp12)){
		HX_STACK_LINE(300)
		tmp13 = (int)1;
	}
	else{
		HX_STACK_LINE(300)
		Float tmp14 = (region->height + tileSpacing->y);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(300)
		Float tmp15 = spacedHeight;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(300)
		Float tmp16 = (Float(tmp14) / Float(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(300)
		tmp13 = ::Std_obj::_int(tmp16);
	}
	HX_STACK_LINE(300)
	int numRows = tmp13;		HX_STACK_VAR(numRows,"numRows");
	HX_STACK_LINE(301)
	bool tmp14 = (tileSize->x == (int)0);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(301)
	int tmp15;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(301)
	if ((tmp14)){
		HX_STACK_LINE(301)
		tmp15 = (int)1;
	}
	else{
		HX_STACK_LINE(301)
		Float tmp16 = (region->width + tileSpacing->x);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(301)
		Float tmp17 = spacedWidth;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(301)
		Float tmp18 = (Float(tmp16) / Float(tmp17));		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(301)
		tmp15 = ::Std_obj::_int(tmp18);
	}
	HX_STACK_LINE(301)
	int numCols = tmp15;		HX_STACK_VAR(numCols,"numCols");
	HX_STACK_LINE(303)
	::flixel::math::FlxRect tileRect;		HX_STACK_VAR(tileRect,"tileRect");
	HX_STACK_LINE(305)
	{
		HX_STACK_LINE(305)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(305)
		while((true)){
			HX_STACK_LINE(305)
			bool tmp16 = (_g < numRows);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(305)
			bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(305)
			if ((tmp17)){
				HX_STACK_LINE(305)
				break;
			}
			HX_STACK_LINE(305)
			int tmp18 = (_g)++;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(305)
			int j = tmp18;		HX_STACK_VAR(j,"j");
			HX_STACK_LINE(307)
			{
				HX_STACK_LINE(307)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(307)
				while((true)){
					HX_STACK_LINE(307)
					bool tmp19 = (_g1 < numCols);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(307)
					bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(307)
					if ((tmp20)){
						HX_STACK_LINE(307)
						break;
					}
					HX_STACK_LINE(307)
					int tmp21 = (_g1)++;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(307)
					int i = tmp21;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(309)
					::flixel::math::FlxRect tmp22;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(309)
					{
						HX_STACK_LINE(309)
						::flixel::math::FlxRect tmp23;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(309)
						{
							HX_STACK_LINE(309)
							::flixel::util::FlxPool_flixel_math_FlxRect tmp24 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(309)
							::flixel::math::FlxRect tmp25 = tmp24->get();		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(309)
							::flixel::math::FlxRect _this = tmp25;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(309)
							Float tmp26 = region->x;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(309)
							Float tmp27 = (i * spacedWidth);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(309)
							Float tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(309)
							_this->x = tmp28;
							HX_STACK_LINE(309)
							Float tmp29 = region->y;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(309)
							Float tmp30 = (j * spacedHeight);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(309)
							Float tmp31 = (tmp29 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(309)
							_this->y = tmp31;
							HX_STACK_LINE(309)
							_this->width = tileSize->x;
							HX_STACK_LINE(309)
							_this->height = tileSize->y;
							HX_STACK_LINE(309)
							tmp23 = _this;
						}
						HX_STACK_LINE(309)
						::flixel::math::FlxRect rect = tmp23;		HX_STACK_VAR(rect,"rect");
						HX_STACK_LINE(309)
						rect->_inPool = false;
						HX_STACK_LINE(309)
						tmp22 = rect;
					}
					HX_STACK_LINE(309)
					tileRect = tmp22;
					HX_STACK_LINE(310)
					::flixel::math::FlxRect tmp23 = tileRect;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(310)
					tileFrames->addSpriteSheetFrame(tmp23);
				}
			}
		}
	}
	HX_STACK_LINE(314)
	tileFrames->numCols = numCols;
	HX_STACK_LINE(315)
	tileFrames->numRows = numRows;
	HX_STACK_LINE(316)
	::flixel::graphics::frames::FlxTileFrames tmp16 = tileFrames;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(316)
	return tmp16;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxTileFrames_obj,fromGraphic,return )

::flixel::graphics::frames::FlxTileFrames FlxTileFrames_obj::fromRectangle( Dynamic source,::flixel::math::FlxPoint tileSize,::flixel::math::FlxRect region,::flixel::math::FlxPoint tileSpacing){
	HX_STACK_FRAME("flixel.graphics.frames.FlxTileFrames","fromRectangle",0x8a32f946,"flixel.graphics.frames.FlxTileFrames.fromRectangle","flixel/graphics/frames/FlxTileFrames.hx",331,0x562d6bb0)
	HX_STACK_ARG(source,"source")
	HX_STACK_ARG(tileSize,"tileSize")
	HX_STACK_ARG(region,"region")
	HX_STACK_ARG(tileSpacing,"tileSpacing")
	HX_STACK_LINE(332)
	::flixel::_system::frontEnds::BitmapFrontEnd tmp = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(332)
	Dynamic tmp1 = source;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(332)
	::flixel::graphics::FlxGraphic tmp2 = tmp->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )(tmp1,false,null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(332)
	::flixel::graphics::FlxGraphic graphic = tmp2;		HX_STACK_VAR(graphic,"graphic");
	HX_STACK_LINE(333)
	bool tmp3 = (graphic == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(333)
	if ((tmp3)){
		HX_STACK_LINE(333)
		return null();
	}
	HX_STACK_LINE(334)
	::flixel::graphics::FlxGraphic tmp4 = graphic;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(334)
	::flixel::math::FlxPoint tmp5 = tileSize;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(334)
	::flixel::math::FlxRect tmp6 = region;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(334)
	::flixel::math::FlxPoint tmp7 = tileSpacing;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(334)
	::flixel::graphics::frames::FlxTileFrames tmp8 = ::flixel::graphics::frames::FlxTileFrames_obj::fromGraphic(tmp4,tmp5,tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(334)
	return tmp8;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxTileFrames_obj,fromRectangle,return )

::flixel::graphics::frames::FlxTileFrames FlxTileFrames_obj::combineTileSets( Array< ::Dynamic > bitmaps,::flixel::math::FlxPoint tileSize,::flixel::math::FlxPoint spacing,::flixel::math::FlxPoint border){
	HX_STACK_FRAME("flixel.graphics.frames.FlxTileFrames","combineTileSets",0x70f3189f,"flixel.graphics.frames.FlxTileFrames.combineTileSets","flixel/graphics/frames/FlxTileFrames.hx",353,0x562d6bb0)
	HX_STACK_ARG(bitmaps,"bitmaps")
	HX_STACK_ARG(tileSize,"tileSize")
	HX_STACK_ARG(spacing,"spacing")
	HX_STACK_ARG(border,"border")
	HX_STACK_LINE(354)
	Array< ::Dynamic > framesCollections = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(framesCollections,"framesCollections");
	HX_STACK_LINE(356)
	{
		HX_STACK_LINE(356)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(356)
		while((true)){
			HX_STACK_LINE(356)
			bool tmp = (_g < bitmaps->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(356)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(356)
			if ((tmp1)){
				HX_STACK_LINE(356)
				break;
			}
			HX_STACK_LINE(356)
			::openfl::_legacy::display::BitmapData tmp2 = bitmaps->__get(_g).StaticCast< ::openfl::_legacy::display::BitmapData >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(356)
			::openfl::_legacy::display::BitmapData bitmap = tmp2;		HX_STACK_VAR(bitmap,"bitmap");
			HX_STACK_LINE(356)
			++(_g);
			HX_STACK_LINE(358)
			::openfl::_legacy::display::BitmapData tmp3 = bitmap;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(358)
			::flixel::math::FlxPoint tmp4 = tileSize;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(358)
			::flixel::graphics::frames::FlxTileFrames tmp5 = ::flixel::graphics::frames::FlxTileFrames_obj::fromRectangle(tmp3,tmp4,null(),null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(358)
			framesCollections->push(tmp5);
		}
	}
	HX_STACK_LINE(361)
	::flixel::math::FlxPoint tmp = spacing;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(361)
	::flixel::math::FlxPoint tmp1 = border;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(361)
	::flixel::graphics::frames::FlxTileFrames tmp2 = ::flixel::graphics::frames::FlxTileFrames_obj::combineTileFrames(framesCollections,tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(361)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxTileFrames_obj,combineTileSets,return )

::flixel::graphics::frames::FlxTileFrames FlxTileFrames_obj::combineTileFrames( Array< ::Dynamic > tileframes,::flixel::math::FlxPoint spacing,::flixel::math::FlxPoint border){
	HX_STACK_FRAME("flixel.graphics.frames.FlxTileFrames","combineTileFrames",0x23605534,"flixel.graphics.frames.FlxTileFrames.combineTileFrames","flixel/graphics/frames/FlxTileFrames.hx",379,0x562d6bb0)
	HX_STACK_ARG(tileframes,"tileframes")
	HX_STACK_ARG(spacing,"spacing")
	HX_STACK_ARG(border,"border")
	HX_STACK_LINE(381)
	int totalArea = (int)0;		HX_STACK_VAR(totalArea,"totalArea");
	HX_STACK_LINE(382)
	int rows = (int)0;		HX_STACK_VAR(rows,"rows");
	HX_STACK_LINE(383)
	int cols = (int)0;		HX_STACK_VAR(cols,"cols");
	HX_STACK_LINE(385)
	::flixel::graphics::frames::FlxTileFrames tmp = tileframes->__get((int)0).StaticCast< ::flixel::graphics::frames::FlxTileFrames >();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(385)
	::flixel::graphics::frames::FlxFrame tmp1 = tmp->frames->__get((int)0).StaticCast< ::flixel::graphics::frames::FlxFrame >();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(385)
	Float tmp2 = tmp1->sourceSize->x;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(385)
	int tmp3 = ::Std_obj::_int(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(385)
	int tileWidth = tmp3;		HX_STACK_VAR(tileWidth,"tileWidth");
	HX_STACK_LINE(386)
	::flixel::graphics::frames::FlxTileFrames tmp4 = tileframes->__get((int)0).StaticCast< ::flixel::graphics::frames::FlxTileFrames >();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(386)
	::flixel::graphics::frames::FlxFrame tmp5 = tmp4->frames->__get((int)0).StaticCast< ::flixel::graphics::frames::FlxFrame >();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(386)
	Float tmp6 = tmp5->sourceSize->y;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(386)
	int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(386)
	int tileHeight = tmp7;		HX_STACK_VAR(tileHeight,"tileHeight");
	HX_STACK_LINE(388)
	int spaceX = (int)0;		HX_STACK_VAR(spaceX,"spaceX");
	HX_STACK_LINE(389)
	int spaceY = (int)0;		HX_STACK_VAR(spaceY,"spaceY");
	HX_STACK_LINE(391)
	bool tmp8 = (spacing != null());		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(391)
	if ((tmp8)){
		HX_STACK_LINE(393)
		Float tmp9 = spacing->x;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(393)
		int tmp10 = ::Std_obj::_int(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(393)
		spaceX = tmp10;
		HX_STACK_LINE(394)
		Float tmp11 = spacing->y;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(394)
		int tmp12 = ::Std_obj::_int(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(394)
		spaceY = tmp12;
	}
	HX_STACK_LINE(397)
	int borderX = (int)0;		HX_STACK_VAR(borderX,"borderX");
	HX_STACK_LINE(398)
	int borderY = (int)0;		HX_STACK_VAR(borderY,"borderY");
	HX_STACK_LINE(400)
	bool tmp9 = (border != null());		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(400)
	if ((tmp9)){
		HX_STACK_LINE(402)
		Float tmp10 = border->x;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(402)
		int tmp11 = ::Std_obj::_int(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(402)
		borderX = tmp11;
		HX_STACK_LINE(403)
		Float tmp12 = border->y;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(403)
		int tmp13 = ::Std_obj::_int(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(403)
		borderY = tmp13;
	}
	HX_STACK_LINE(406)
	{
		HX_STACK_LINE(406)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(406)
		while((true)){
			HX_STACK_LINE(406)
			bool tmp10 = (_g < tileframes->length);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(406)
			bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(406)
			if ((tmp11)){
				HX_STACK_LINE(406)
				break;
			}
			HX_STACK_LINE(406)
			::flixel::graphics::frames::FlxTileFrames tmp12 = tileframes->__get(_g).StaticCast< ::flixel::graphics::frames::FlxTileFrames >();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(406)
			::flixel::graphics::frames::FlxTileFrames collection = tmp12;		HX_STACK_VAR(collection,"collection");
			HX_STACK_LINE(406)
			++(_g);
			HX_STACK_LINE(408)
			cols = collection->numCols;
			HX_STACK_LINE(409)
			rows = collection->numRows;
			HX_STACK_LINE(410)
			int tmp13 = cols;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(410)
			int tmp14 = tileWidth;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(410)
			int tmp15 = ((int)2 * borderX);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(410)
			int tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(410)
			int tmp17 = (tmp13 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(410)
			int tmp18 = rows;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(410)
			int tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(410)
			int tmp20 = tileHeight;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(410)
			int tmp21 = ((int)2 * borderY);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(410)
			int tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(410)
			int tmp23 = (tmp19 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(410)
			int tmp24 = ::Std_obj::_int(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(410)
			hx::AddEq(totalArea,tmp24);
		}
	}
	HX_STACK_LINE(413)
	int tmp10 = totalArea;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(413)
	Float tmp11 = ::Math_obj::sqrt(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(413)
	Float side = tmp11;		HX_STACK_VAR(side,"side");
	HX_STACK_LINE(414)
	Float tmp12 = side;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(414)
	int tmp13 = tileWidth;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(414)
	int tmp14 = ((int)2 * borderX);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(414)
	int tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(414)
	Float tmp16 = (Float(tmp12) / Float(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(414)
	int tmp17 = ::Std_obj::_int(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(414)
	cols = tmp17;
	HX_STACK_LINE(415)
	int tmp18 = totalArea;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(415)
	int tmp19 = cols;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(415)
	int tmp20 = tileWidth;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(415)
	int tmp21 = ((int)2 * borderX);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(415)
	int tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(415)
	int tmp23 = (tmp19 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(415)
	int tmp24 = tileHeight;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(415)
	int tmp25 = ((int)2 * borderY);		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(415)
	int tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(415)
	int tmp27 = (tmp23 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(415)
	Float tmp28 = (Float(tmp18) / Float(tmp27));		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(415)
	int tmp29 = ::Math_obj::ceil(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(415)
	rows = tmp29;
	HX_STACK_LINE(416)
	int tmp30 = cols;		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(416)
	int tmp31 = tileWidth;		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(416)
	int tmp32 = ((int)2 * borderX);		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(416)
	int tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(416)
	int tmp34 = (tmp30 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(416)
	int tmp35 = ::Std_obj::_int(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(416)
	int tmp36 = (cols - (int)1);		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(416)
	int tmp37 = spaceX;		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(416)
	int tmp38 = (tmp36 * tmp37);		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(416)
	int tmp39 = (tmp35 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(416)
	int width = tmp39;		HX_STACK_VAR(width,"width");
	HX_STACK_LINE(417)
	int tmp40 = rows;		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(417)
	int tmp41 = tileHeight;		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(417)
	int tmp42 = ((int)2 * borderY);		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(417)
	int tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(417)
	int tmp44 = (tmp40 * tmp43);		HX_STACK_VAR(tmp44,"tmp44");
	HX_STACK_LINE(417)
	int tmp45 = ::Std_obj::_int(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
	HX_STACK_LINE(417)
	int tmp46 = (rows - (int)1);		HX_STACK_VAR(tmp46,"tmp46");
	HX_STACK_LINE(417)
	int tmp47 = spaceY;		HX_STACK_VAR(tmp47,"tmp47");
	HX_STACK_LINE(417)
	int tmp48 = (tmp46 * tmp47);		HX_STACK_VAR(tmp48,"tmp48");
	HX_STACK_LINE(417)
	int tmp49 = (tmp45 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
	HX_STACK_LINE(417)
	int height = tmp49;		HX_STACK_VAR(height,"height");
	HX_STACK_LINE(420)
	::openfl::_legacy::display::BitmapData tmp50 = ::openfl::_legacy::display::BitmapData_obj::__new(width,height,true,(int)0,null());		HX_STACK_VAR(tmp50,"tmp50");
	HX_STACK_LINE(420)
	::openfl::_legacy::display::BitmapData combined = tmp50;		HX_STACK_VAR(combined,"combined");
	HX_STACK_LINE(421)
	::flixel::_system::frontEnds::BitmapFrontEnd tmp51 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp51,"tmp51");
	HX_STACK_LINE(421)
	::openfl::_legacy::display::BitmapData tmp52 = combined;		HX_STACK_VAR(tmp52,"tmp52");
	HX_STACK_LINE(421)
	::flixel::graphics::FlxGraphic tmp53 = tmp51->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )(tmp52,null(),null());		HX_STACK_VAR(tmp53,"tmp53");
	HX_STACK_LINE(421)
	::flixel::graphics::FlxGraphic graphic = tmp53;		HX_STACK_VAR(graphic,"graphic");
	HX_STACK_LINE(422)
	::flixel::graphics::frames::FlxTileFrames tmp54 = ::flixel::graphics::frames::FlxTileFrames_obj::__new(graphic,null());		HX_STACK_VAR(tmp54,"tmp54");
	HX_STACK_LINE(422)
	::flixel::graphics::frames::FlxTileFrames result = tmp54;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(423)
	::openfl::_legacy::geom::Point tmp55 = ::openfl::_legacy::geom::Point_obj::__new(borderX,borderY);		HX_STACK_VAR(tmp55,"tmp55");
	HX_STACK_LINE(423)
	::openfl::_legacy::geom::Point destPoint = tmp55;		HX_STACK_VAR(destPoint,"destPoint");
	HX_STACK_LINE(425)
	::flixel::math::FlxRect tmp56;		HX_STACK_VAR(tmp56,"tmp56");
	HX_STACK_LINE(425)
	{
		HX_STACK_LINE(425)
		::flixel::math::FlxRect tmp57;		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(425)
		{
			HX_STACK_LINE(425)
			::flixel::util::FlxPool_flixel_math_FlxRect tmp58 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp58,"tmp58");
			HX_STACK_LINE(425)
			::flixel::math::FlxRect tmp59 = tmp58->get();		HX_STACK_VAR(tmp59,"tmp59");
			HX_STACK_LINE(425)
			::flixel::math::FlxRect _this = tmp59;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(425)
			_this->x = (int)0;
			HX_STACK_LINE(425)
			_this->y = (int)0;
			HX_STACK_LINE(425)
			_this->width = width;
			HX_STACK_LINE(425)
			_this->height = height;
			HX_STACK_LINE(425)
			tmp57 = _this;
		}
		HX_STACK_LINE(425)
		::flixel::math::FlxRect rect = tmp57;		HX_STACK_VAR(rect,"rect");
		HX_STACK_LINE(425)
		rect->_inPool = false;
		HX_STACK_LINE(425)
		tmp56 = rect;
	}
	HX_STACK_LINE(425)
	result->region = tmp56;
	HX_STACK_LINE(426)
	result->atlasFrame = null();
	HX_STACK_LINE(427)
	::flixel::math::FlxPoint tmp57;		HX_STACK_VAR(tmp57,"tmp57");
	HX_STACK_LINE(427)
	{
		HX_STACK_LINE(427)
		::flixel::util::FlxPool_flixel_math_FlxPoint tmp58 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(427)
		::flixel::math::FlxPoint tmp59 = tmp58->get();		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(427)
		int tmp60 = tileWidth;		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(427)
		int tmp61 = tileHeight;		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(427)
		::flixel::math::FlxPoint tmp62 = tmp59->set(tmp60,tmp61);		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(427)
		::flixel::math::FlxPoint point = tmp62;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(427)
		point->_inPool = false;
		HX_STACK_LINE(427)
		tmp57 = point;
	}
	HX_STACK_LINE(427)
	result->tileSize = tmp57;
	HX_STACK_LINE(428)
	::flixel::math::FlxPoint tmp58;		HX_STACK_VAR(tmp58,"tmp58");
	HX_STACK_LINE(428)
	{
		HX_STACK_LINE(428)
		::flixel::util::FlxPool_flixel_math_FlxPoint tmp59 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(428)
		::flixel::math::FlxPoint tmp60 = tmp59->get();		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(428)
		int tmp61 = spaceX;		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(428)
		int tmp62 = spaceY;		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(428)
		::flixel::math::FlxPoint tmp63 = tmp60->set(tmp61,tmp62);		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(428)
		::flixel::math::FlxPoint point = tmp63;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(428)
		point->_inPool = false;
		HX_STACK_LINE(428)
		tmp58 = point;
	}
	HX_STACK_LINE(428)
	result->tileSpacing = tmp58;
	HX_STACK_LINE(429)
	result->numCols = cols;
	HX_STACK_LINE(430)
	result->numRows = rows;
	HX_STACK_LINE(432)
	{
		HX_STACK_LINE(432)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(432)
		while((true)){
			HX_STACK_LINE(432)
			bool tmp59 = (_g < tileframes->length);		HX_STACK_VAR(tmp59,"tmp59");
			HX_STACK_LINE(432)
			bool tmp60 = !(tmp59);		HX_STACK_VAR(tmp60,"tmp60");
			HX_STACK_LINE(432)
			if ((tmp60)){
				HX_STACK_LINE(432)
				break;
			}
			HX_STACK_LINE(432)
			::flixel::graphics::frames::FlxTileFrames tmp61 = tileframes->__get(_g).StaticCast< ::flixel::graphics::frames::FlxTileFrames >();		HX_STACK_VAR(tmp61,"tmp61");
			HX_STACK_LINE(432)
			::flixel::graphics::frames::FlxTileFrames collection = tmp61;		HX_STACK_VAR(collection,"collection");
			HX_STACK_LINE(432)
			++(_g);
			HX_STACK_LINE(434)
			{
				HX_STACK_LINE(434)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(434)
				Array< ::Dynamic > _g2 = collection->frames;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(434)
				while((true)){
					HX_STACK_LINE(434)
					bool tmp62 = (_g1 < _g2->length);		HX_STACK_VAR(tmp62,"tmp62");
					HX_STACK_LINE(434)
					bool tmp63 = !(tmp62);		HX_STACK_VAR(tmp63,"tmp63");
					HX_STACK_LINE(434)
					if ((tmp63)){
						HX_STACK_LINE(434)
						break;
					}
					HX_STACK_LINE(434)
					::flixel::graphics::frames::FlxFrame tmp64 = _g2->__get(_g1).StaticCast< ::flixel::graphics::frames::FlxFrame >();		HX_STACK_VAR(tmp64,"tmp64");
					HX_STACK_LINE(434)
					::flixel::graphics::frames::FlxFrame frame = tmp64;		HX_STACK_VAR(frame,"frame");
					HX_STACK_LINE(434)
					++(_g1);
					HX_STACK_LINE(436)
					::openfl::_legacy::display::BitmapData tmp65 = combined;		HX_STACK_VAR(tmp65,"tmp65");
					HX_STACK_LINE(436)
					::openfl::_legacy::geom::Point tmp66 = destPoint;		HX_STACK_VAR(tmp66,"tmp66");
					HX_STACK_LINE(436)
					frame->paint(tmp65,tmp66,true,null());
					HX_STACK_LINE(438)
					::flixel::math::FlxRect tmp67;		HX_STACK_VAR(tmp67,"tmp67");
					HX_STACK_LINE(438)
					{
						HX_STACK_LINE(438)
						::flixel::math::FlxRect tmp68;		HX_STACK_VAR(tmp68,"tmp68");
						HX_STACK_LINE(438)
						{
							HX_STACK_LINE(438)
							::flixel::util::FlxPool_flixel_math_FlxRect tmp69 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp69,"tmp69");
							HX_STACK_LINE(438)
							::flixel::math::FlxRect tmp70 = tmp69->get();		HX_STACK_VAR(tmp70,"tmp70");
							HX_STACK_LINE(438)
							::flixel::math::FlxRect _this = tmp70;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(438)
							_this->x = destPoint->x;
							HX_STACK_LINE(438)
							_this->y = destPoint->y;
							HX_STACK_LINE(438)
							_this->width = tileWidth;
							HX_STACK_LINE(438)
							_this->height = tileHeight;
							HX_STACK_LINE(438)
							tmp68 = _this;
						}
						HX_STACK_LINE(438)
						::flixel::math::FlxRect rect = tmp68;		HX_STACK_VAR(rect,"rect");
						HX_STACK_LINE(438)
						rect->_inPool = false;
						HX_STACK_LINE(438)
						tmp67 = rect;
					}
					HX_STACK_LINE(438)
					::flixel::math::FlxPoint tmp68;		HX_STACK_VAR(tmp68,"tmp68");
					HX_STACK_LINE(438)
					{
						HX_STACK_LINE(438)
						::flixel::util::FlxPool_flixel_math_FlxPoint tmp69 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp69,"tmp69");
						HX_STACK_LINE(438)
						::flixel::math::FlxPoint tmp70 = tmp69->get();		HX_STACK_VAR(tmp70,"tmp70");
						HX_STACK_LINE(438)
						int tmp71 = tileWidth;		HX_STACK_VAR(tmp71,"tmp71");
						HX_STACK_LINE(438)
						int tmp72 = tileHeight;		HX_STACK_VAR(tmp72,"tmp72");
						HX_STACK_LINE(438)
						::flixel::math::FlxPoint tmp73 = tmp70->set(tmp71,tmp72);		HX_STACK_VAR(tmp73,"tmp73");
						HX_STACK_LINE(438)
						::flixel::math::FlxPoint point = tmp73;		HX_STACK_VAR(point,"point");
						HX_STACK_LINE(438)
						point->_inPool = false;
						HX_STACK_LINE(438)
						tmp68 = point;
					}
					HX_STACK_LINE(438)
					::flixel::math::FlxPoint tmp69;		HX_STACK_VAR(tmp69,"tmp69");
					HX_STACK_LINE(438)
					{
						HX_STACK_LINE(438)
						::flixel::util::FlxPool_flixel_math_FlxPoint tmp70 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp70,"tmp70");
						HX_STACK_LINE(438)
						::flixel::math::FlxPoint tmp71 = tmp70->get();		HX_STACK_VAR(tmp71,"tmp71");
						HX_STACK_LINE(438)
						::flixel::math::FlxPoint tmp72 = tmp71->set((int)0,(int)0);		HX_STACK_VAR(tmp72,"tmp72");
						HX_STACK_LINE(438)
						::flixel::math::FlxPoint point = tmp72;		HX_STACK_VAR(point,"point");
						HX_STACK_LINE(438)
						point->_inPool = false;
						HX_STACK_LINE(438)
						tmp69 = point;
					}
					HX_STACK_LINE(438)
					result->addAtlasFrame(tmp67,tmp68,tmp69,null(),null(),null(),null());
					HX_STACK_LINE(439)
					int tmp70 = tileWidth;		HX_STACK_VAR(tmp70,"tmp70");
					HX_STACK_LINE(439)
					int tmp71 = ((int)2 * borderX);		HX_STACK_VAR(tmp71,"tmp71");
					HX_STACK_LINE(439)
					int tmp72 = (tmp70 + tmp71);		HX_STACK_VAR(tmp72,"tmp72");
					HX_STACK_LINE(439)
					int tmp73 = spaceX;		HX_STACK_VAR(tmp73,"tmp73");
					HX_STACK_LINE(439)
					int tmp74 = (tmp72 + tmp73);		HX_STACK_VAR(tmp74,"tmp74");
					HX_STACK_LINE(439)
					hx::AddEq(destPoint->x,tmp74);
					HX_STACK_LINE(441)
					Float tmp75 = destPoint->x;		HX_STACK_VAR(tmp75,"tmp75");
					HX_STACK_LINE(441)
					int tmp76 = combined->get_width();		HX_STACK_VAR(tmp76,"tmp76");
					HX_STACK_LINE(441)
					bool tmp77 = (tmp75 >= tmp76);		HX_STACK_VAR(tmp77,"tmp77");
					HX_STACK_LINE(441)
					if ((tmp77)){
						HX_STACK_LINE(443)
						destPoint->x = borderX;
						HX_STACK_LINE(444)
						int tmp78 = tileHeight;		HX_STACK_VAR(tmp78,"tmp78");
						HX_STACK_LINE(444)
						int tmp79 = ((int)2 * borderY);		HX_STACK_VAR(tmp79,"tmp79");
						HX_STACK_LINE(444)
						int tmp80 = (tmp78 + tmp79);		HX_STACK_VAR(tmp80,"tmp80");
						HX_STACK_LINE(444)
						int tmp81 = spaceY;		HX_STACK_VAR(tmp81,"tmp81");
						HX_STACK_LINE(444)
						int tmp82 = (tmp80 + tmp81);		HX_STACK_VAR(tmp82,"tmp82");
						HX_STACK_LINE(444)
						hx::AddEq(destPoint->y,tmp82);
					}
				}
			}
		}
	}
	HX_STACK_LINE(449)
	::openfl::_legacy::display::BitmapData tmp59 = combined;		HX_STACK_VAR(tmp59,"tmp59");
	HX_STACK_LINE(449)
	int tmp60 = tileWidth;		HX_STACK_VAR(tmp60,"tmp60");
	HX_STACK_LINE(449)
	int tmp61 = tileHeight;		HX_STACK_VAR(tmp61,"tmp61");
	HX_STACK_LINE(449)
	int tmp62 = spaceX;		HX_STACK_VAR(tmp62,"tmp62");
	HX_STACK_LINE(449)
	int tmp63 = spaceY;		HX_STACK_VAR(tmp63,"tmp63");
	HX_STACK_LINE(449)
	int tmp64 = borderX;		HX_STACK_VAR(tmp64,"tmp64");
	HX_STACK_LINE(449)
	int tmp65 = borderY;		HX_STACK_VAR(tmp65,"tmp65");
	HX_STACK_LINE(449)
	int tmp66 = cols;		HX_STACK_VAR(tmp66,"tmp66");
	HX_STACK_LINE(449)
	int tmp67 = rows;		HX_STACK_VAR(tmp67,"tmp67");
	HX_STACK_LINE(449)
	::flixel::util::FlxBitmapDataUtil_obj::copyBorderPixels(tmp59,tmp60,tmp61,tmp62,tmp63,tmp64,tmp65,tmp66,tmp67);
	HX_STACK_LINE(450)
	::flixel::graphics::frames::FlxTileFrames tmp68 = result;		HX_STACK_VAR(tmp68,"tmp68");
	HX_STACK_LINE(450)
	return tmp68;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxTileFrames_obj,combineTileFrames,return )

::flixel::graphics::frames::FlxTileFrames FlxTileFrames_obj::findFrame( ::flixel::graphics::FlxGraphic graphic,::flixel::math::FlxPoint tileSize,::flixel::math::FlxRect region,::flixel::graphics::frames::FlxFrame atlasFrame,::flixel::math::FlxPoint tileSpacing,::flixel::math::FlxPoint border){
	HX_STACK_FRAME("flixel.graphics.frames.FlxTileFrames","findFrame",0xed9bcc95,"flixel.graphics.frames.FlxTileFrames.findFrame","flixel/graphics/frames/FlxTileFrames.hx",464,0x562d6bb0)
	HX_STACK_ARG(graphic,"graphic")
	HX_STACK_ARG(tileSize,"tileSize")
	HX_STACK_ARG(region,"region")
	HX_STACK_ARG(atlasFrame,"atlasFrame")
	HX_STACK_ARG(tileSpacing,"tileSpacing")
	HX_STACK_ARG(border,"border")
	HX_STACK_LINE(465)
	Array< ::Dynamic > tileFrames;		HX_STACK_VAR(tileFrames,"tileFrames");
	struct _Function_1_1{
		inline static cpp::ArrayBase Block( ::flixel::graphics::FlxGraphic &graphic){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/graphics/frames/FlxTileFrames.hx",465,0x562d6bb0)
			{
				HX_STACK_LINE(465)
				::flixel::graphics::frames::FlxFrameCollectionType type = ::flixel::graphics::frames::FlxFrameCollectionType_obj::TILES;		HX_STACK_VAR(type,"type");
				HX_STACK_LINE(465)
				::flixel::graphics::frames::FlxFrameCollectionType tmp = type;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(465)
				cpp::ArrayBase collections = ((cpp::ArrayBase)(graphic->frameCollections->get(tmp)));		HX_STACK_VAR(collections,"collections");
				HX_STACK_LINE(465)
				bool tmp1 = (collections == null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(465)
				if ((tmp1)){
					HX_STACK_LINE(465)
					collections = Array_obj< ::Dynamic >::__new();
					HX_STACK_LINE(465)
					::flixel::graphics::frames::FlxFrameCollectionType tmp2 = type;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(465)
					graphic->frameCollections->set(tmp2,collections);
				}
				HX_STACK_LINE(465)
				return collections;
			}
			return null();
		}
	};
	HX_STACK_LINE(465)
	tileFrames = ((Array< ::Dynamic >)(_Function_1_1::Block(graphic)));
	HX_STACK_LINE(467)
	{
		HX_STACK_LINE(467)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(467)
		while((true)){
			HX_STACK_LINE(467)
			bool tmp = (_g < tileFrames->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(467)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(467)
			if ((tmp1)){
				HX_STACK_LINE(467)
				break;
			}
			HX_STACK_LINE(467)
			::flixel::graphics::frames::FlxTileFrames tmp2 = tileFrames->__get(_g).StaticCast< ::flixel::graphics::frames::FlxTileFrames >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(467)
			::flixel::graphics::frames::FlxTileFrames sheet = tmp2;		HX_STACK_VAR(sheet,"sheet");
			HX_STACK_LINE(467)
			++(_g);
			HX_STACK_LINE(469)
			::flixel::math::FlxPoint tmp3 = tileSize;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(469)
			::flixel::math::FlxRect tmp4 = region;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(469)
			::flixel::math::FlxPoint tmp5 = tileSpacing;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(469)
			::flixel::math::FlxPoint tmp6 = border;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(469)
			bool tmp7 = sheet->equals(tmp3,tmp4,null(),tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(469)
			if ((tmp7)){
				HX_STACK_LINE(471)
				::flixel::graphics::frames::FlxTileFrames tmp8 = sheet;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(471)
				return tmp8;
			}
		}
	}
	HX_STACK_LINE(475)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(FlxTileFrames_obj,findFrame,return )


FlxTileFrames_obj::FlxTileFrames_obj()
{
}

void FlxTileFrames_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTileFrames);
	HX_MARK_MEMBER_NAME(atlasFrame,"atlasFrame");
	HX_MARK_MEMBER_NAME(region,"region");
	HX_MARK_MEMBER_NAME(tileSize,"tileSize");
	HX_MARK_MEMBER_NAME(tileSpacing,"tileSpacing");
	HX_MARK_MEMBER_NAME(numRows,"numRows");
	HX_MARK_MEMBER_NAME(numCols,"numCols");
	::flixel::graphics::frames::FlxFramesCollection_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxTileFrames_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(atlasFrame,"atlasFrame");
	HX_VISIT_MEMBER_NAME(region,"region");
	HX_VISIT_MEMBER_NAME(tileSize,"tileSize");
	HX_VISIT_MEMBER_NAME(tileSpacing,"tileSpacing");
	HX_VISIT_MEMBER_NAME(numRows,"numRows");
	HX_VISIT_MEMBER_NAME(numCols,"numCols");
	::flixel::graphics::frames::FlxFramesCollection_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxTileFrames_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"region") ) { return region; }
		if (HX_FIELD_EQ(inName,"equals") ) { return equals_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"numRows") ) { return numRows; }
		if (HX_FIELD_EQ(inName,"numCols") ) { return numCols; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tileSize") ) { return tileSize; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"addBorder") ) { return addBorder_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"atlasFrame") ) { return atlasFrame; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"tileSpacing") ) { return tileSpacing; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getByTilePosition") ) { return getByTilePosition_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxTileFrames_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"fromFrame") ) { outValue = fromFrame_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"findFrame") ) { outValue = findFrame_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromFrames") ) { outValue = fromFrames_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"fromGraphic") ) { outValue = fromGraphic_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"fromRectangle") ) { outValue = fromRectangle_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"combineTileSets") ) { outValue = combineTileSets_dyn(); return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"fromAtlasByPrefix") ) { outValue = fromAtlasByPrefix_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"combineTileFrames") ) { outValue = combineTileFrames_dyn(); return true;  }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"fromFrameAddSpacesAndBorders") ) { outValue = fromFrameAddSpacesAndBorders_dyn(); return true;  }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"fromBitmapAddSpacesAndBorders") ) { outValue = fromBitmapAddSpacesAndBorders_dyn(); return true;  }
	}
	return false;
}

Dynamic FlxTileFrames_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"region") ) { region=inValue.Cast< ::flixel::math::FlxRect >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"numRows") ) { numRows=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"numCols") ) { numCols=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tileSize") ) { tileSize=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"atlasFrame") ) { atlasFrame=inValue.Cast< ::flixel::graphics::frames::FlxFrame >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"tileSpacing") ) { tileSpacing=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTileFrames_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("atlasFrame","\xe2","\x8a","\x40","\xe9"));
	outFields->push(HX_HCSTRING("region","\xf4","\xc0","\x8c","\x00"));
	outFields->push(HX_HCSTRING("tileSize","\x0f","\xc7","\x59","\x86"));
	outFields->push(HX_HCSTRING("tileSpacing","\xf5","\x71","\x1f","\x31"));
	outFields->push(HX_HCSTRING("numRows","\x7f","\x9a","\x2f","\x9f"));
	outFields->push(HX_HCSTRING("numCols","\x99","\x5d","\x45","\x95"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::graphics::frames::FlxFrame*/ ,(int)offsetof(FlxTileFrames_obj,atlasFrame),HX_HCSTRING("atlasFrame","\xe2","\x8a","\x40","\xe9")},
	{hx::fsObject /*::flixel::math::FlxRect*/ ,(int)offsetof(FlxTileFrames_obj,region),HX_HCSTRING("region","\xf4","\xc0","\x8c","\x00")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxTileFrames_obj,tileSize),HX_HCSTRING("tileSize","\x0f","\xc7","\x59","\x86")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxTileFrames_obj,tileSpacing),HX_HCSTRING("tileSpacing","\xf5","\x71","\x1f","\x31")},
	{hx::fsInt,(int)offsetof(FlxTileFrames_obj,numRows),HX_HCSTRING("numRows","\x7f","\x9a","\x2f","\x9f")},
	{hx::fsInt,(int)offsetof(FlxTileFrames_obj,numCols),HX_HCSTRING("numCols","\x99","\x5d","\x45","\x95")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("atlasFrame","\xe2","\x8a","\x40","\xe9"),
	HX_HCSTRING("region","\xf4","\xc0","\x8c","\x00"),
	HX_HCSTRING("tileSize","\x0f","\xc7","\x59","\x86"),
	HX_HCSTRING("tileSpacing","\xf5","\x71","\x1f","\x31"),
	HX_HCSTRING("numRows","\x7f","\x9a","\x2f","\x9f"),
	HX_HCSTRING("numCols","\x99","\x5d","\x45","\x95"),
	HX_HCSTRING("getByTilePosition","\xa4","\x3d","\x28","\x5c"),
	HX_HCSTRING("equals","\x3f","\xee","\xf2","\xbf"),
	HX_HCSTRING("addBorder","\xed","\x81","\x3e","\x1c"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTileFrames_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTileFrames_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxTileFrames_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("fromBitmapAddSpacesAndBorders","\x05","\x1a","\xdd","\xf3"),
	HX_HCSTRING("fromFrameAddSpacesAndBorders","\xdb","\x16","\xd1","\xbd"),
	HX_HCSTRING("fromFrame","\x63","\x62","\x0c","\xbb"),
	HX_HCSTRING("fromFrames","\xb0","\xb4","\xc9","\xef"),
	HX_HCSTRING("fromAtlasByPrefix","\x6a","\xfb","\x8c","\x24"),
	HX_HCSTRING("fromGraphic","\x5e","\xbe","\x47","\x0c"),
	HX_HCSTRING("fromRectangle","\x65","\x11","\x66","\x8d"),
	HX_HCSTRING("combineTileSets","\x7e","\xb6","\x33","\xf9"),
	HX_HCSTRING("combineTileFrames","\xd3","\x68","\x6b","\xb3"),
	HX_HCSTRING("findFrame","\x34","\xa9","\x7a","\xf5"),
	::String(null()) };

void FlxTileFrames_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.graphics.frames.FlxTileFrames","\x8f","\xb0","\x85","\xcc");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxTileFrames_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxTileFrames_obj >;
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
