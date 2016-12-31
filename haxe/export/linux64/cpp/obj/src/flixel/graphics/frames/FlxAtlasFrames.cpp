#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED__List_ListIterator
#include <_List/ListIterator.h>
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
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
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
#ifndef INCLUDED_haxe_format_JsonParser
#include <haxe/format/JsonParser.h>
#endif
#ifndef INCLUDED_haxe_xml_Fast
#include <haxe/xml/Fast.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_AttribAccess
#include <haxe/xml/_Fast/AttribAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_HasAttribAccess
#include <haxe/xml/_Fast/HasAttribAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_NodeListAccess
#include <haxe/xml/_Fast/NodeListAccess.h>
#endif
#ifndef INCLUDED_openfl__legacy_AssetType
#include <openfl/_legacy/AssetType.h>
#endif
#ifndef INCLUDED_openfl__legacy_Assets
#include <openfl/_legacy/Assets.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif
namespace flixel{
namespace graphics{
namespace frames{

Void FlxAtlasFrames_obj::__construct(::flixel::graphics::FlxGraphic parent,::flixel::math::FlxPoint border)
{
HX_STACK_FRAME("flixel.graphics.frames.FlxAtlasFrames","new",0xed20cbc8,"flixel.graphics.frames.FlxAtlasFrames.new","flixel/graphics/frames/FlxAtlasFrames.hx",21,0x501ecb67)
HX_STACK_THIS(this)
HX_STACK_ARG(parent,"parent")
HX_STACK_ARG(border,"border")
{
	HX_STACK_LINE(22)
	::flixel::graphics::FlxGraphic tmp = parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(22)
	::flixel::math::FlxPoint tmp1 = border;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(22)
	super::__construct(tmp,::flixel::graphics::frames::FlxFrameCollectionType_obj::ATLAS,tmp1);
}
;
	return null();
}

//FlxAtlasFrames_obj::~FlxAtlasFrames_obj() { }

Dynamic FlxAtlasFrames_obj::__CreateEmpty() { return  new FlxAtlasFrames_obj; }
hx::ObjectPtr< FlxAtlasFrames_obj > FlxAtlasFrames_obj::__new(::flixel::graphics::FlxGraphic parent,::flixel::math::FlxPoint border)
{  hx::ObjectPtr< FlxAtlasFrames_obj > _result_ = new FlxAtlasFrames_obj();
	_result_->__construct(parent,border);
	return _result_;}

Dynamic FlxAtlasFrames_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxAtlasFrames_obj > _result_ = new FlxAtlasFrames_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

::flixel::graphics::frames::FlxFramesCollection FlxAtlasFrames_obj::addBorder( ::flixel::math::FlxPoint border){
	HX_STACK_FRAME("flixel.graphics.frames.FlxAtlasFrames","addBorder",0x1a31fb55,"flixel.graphics.frames.FlxAtlasFrames.addBorder","flixel/graphics/frames/FlxAtlasFrames.hx",385,0x501ecb67)
	HX_STACK_THIS(this)
	HX_STACK_ARG(border,"border")
	HX_STACK_LINE(386)
	::flixel::math::FlxPoint tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(386)
	{
		HX_STACK_LINE(386)
		Float X = (int)0;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(386)
		Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(386)
		::flixel::math::FlxPoint tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(386)
		{
			HX_STACK_LINE(386)
			::flixel::util::FlxPool_flixel_math_FlxPoint tmp2 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(386)
			::flixel::math::FlxPoint tmp3 = tmp2->get();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(386)
			Float tmp4 = X;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(386)
			Float tmp5 = Y;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(386)
			::flixel::math::FlxPoint tmp6 = tmp3->set(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(386)
			::flixel::math::FlxPoint point = tmp6;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(386)
			point->_inPool = false;
			HX_STACK_LINE(386)
			tmp1 = point;
		}
		HX_STACK_LINE(386)
		::flixel::math::FlxPoint point = tmp1;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(386)
		point->_weak = true;
		HX_STACK_LINE(386)
		tmp = point;
	}
	HX_STACK_LINE(386)
	::flixel::math::FlxPoint tmp1 = this->border;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(386)
	::flixel::math::FlxPoint tmp2 = tmp->addPoint(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(386)
	::flixel::math::FlxPoint tmp3 = border;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(386)
	::flixel::math::FlxPoint tmp4 = tmp2->addPoint(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(386)
	::flixel::math::FlxPoint resultBorder = tmp4;		HX_STACK_VAR(resultBorder,"resultBorder");
	HX_STACK_LINE(387)
	::flixel::graphics::FlxGraphic tmp5 = this->parent;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(387)
	::flixel::math::FlxPoint tmp6 = resultBorder;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(387)
	::flixel::graphics::frames::FlxAtlasFrames tmp7 = ::flixel::graphics::frames::FlxAtlasFrames_obj::findFrame(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(387)
	::flixel::graphics::frames::FlxAtlasFrames atlasFrames = tmp7;		HX_STACK_VAR(atlasFrames,"atlasFrames");
	HX_STACK_LINE(388)
	bool tmp8 = (atlasFrames != null());		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(388)
	if ((tmp8)){
		HX_STACK_LINE(389)
		::flixel::graphics::frames::FlxAtlasFrames tmp9 = atlasFrames;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(389)
		return tmp9;
	}
	HX_STACK_LINE(391)
	::flixel::graphics::FlxGraphic tmp9 = this->parent;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(391)
	::flixel::math::FlxPoint tmp10 = resultBorder;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(391)
	::flixel::graphics::frames::FlxAtlasFrames tmp11 = ::flixel::graphics::frames::FlxAtlasFrames_obj::__new(tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(391)
	atlasFrames = tmp11;
	HX_STACK_LINE(393)
	{
		HX_STACK_LINE(393)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(393)
		Array< ::Dynamic > _g1 = this->frames;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(393)
		while((true)){
			HX_STACK_LINE(393)
			bool tmp12 = (_g < _g1->length);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(393)
			bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(393)
			if ((tmp13)){
				HX_STACK_LINE(393)
				break;
			}
			HX_STACK_LINE(393)
			::flixel::graphics::frames::FlxFrame tmp14 = _g1->__get(_g).StaticCast< ::flixel::graphics::frames::FlxFrame >();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(393)
			::flixel::graphics::frames::FlxFrame frame = tmp14;		HX_STACK_VAR(frame,"frame");
			HX_STACK_LINE(393)
			++(_g);
			HX_STACK_LINE(394)
			::flixel::math::FlxPoint tmp15 = border;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(394)
			::flixel::graphics::frames::FlxFrame tmp16 = frame->setBorderTo(tmp15,null());		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(394)
			atlasFrames->pushFrame(tmp16);
		}
	}
	HX_STACK_LINE(396)
	::flixel::graphics::frames::FlxAtlasFrames tmp12 = atlasFrames;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(396)
	return tmp12;
}


::flixel::graphics::frames::FlxAtlasFrames FlxAtlasFrames_obj::fromTexturePackerJson( Dynamic Source,::String Description){
	HX_STACK_FRAME("flixel.graphics.frames.FlxAtlasFrames","fromTexturePackerJson",0xae76e627,"flixel.graphics.frames.FlxAtlasFrames.fromTexturePackerJson","flixel/graphics/frames/FlxAtlasFrames.hx",33,0x501ecb67)
	HX_STACK_ARG(Source,"Source")
	HX_STACK_ARG(Description,"Description")
	HX_STACK_LINE(34)
	::flixel::_system::frontEnds::BitmapFrontEnd tmp = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(34)
	Dynamic tmp1 = Source;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(34)
	::flixel::graphics::FlxGraphic tmp2 = tmp->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )(tmp1,false,null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(34)
	::flixel::graphics::FlxGraphic graphic = tmp2;		HX_STACK_VAR(graphic,"graphic");
	HX_STACK_LINE(35)
	bool tmp3 = (graphic == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(35)
	if ((tmp3)){
		HX_STACK_LINE(36)
		return null();
	}
	HX_STACK_LINE(39)
	::flixel::graphics::FlxGraphic tmp4 = graphic;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(39)
	::flixel::graphics::frames::FlxAtlasFrames tmp5 = ::flixel::graphics::frames::FlxAtlasFrames_obj::findFrame(tmp4,null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(39)
	::flixel::graphics::frames::FlxAtlasFrames frames = tmp5;		HX_STACK_VAR(frames,"frames");
	HX_STACK_LINE(40)
	bool tmp6 = (frames != null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(40)
	if ((tmp6)){
		HX_STACK_LINE(41)
		::flixel::graphics::frames::FlxAtlasFrames tmp7 = frames;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(41)
		return tmp7;
	}
	HX_STACK_LINE(43)
	bool tmp7 = (graphic == null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(43)
	bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(43)
	bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(43)
	if ((tmp8)){
		HX_STACK_LINE(43)
		tmp9 = (Description == null());
	}
	else{
		HX_STACK_LINE(43)
		tmp9 = true;
	}
	HX_STACK_LINE(43)
	if ((tmp9)){
		HX_STACK_LINE(44)
		return null();
	}
	HX_STACK_LINE(46)
	::flixel::graphics::frames::FlxAtlasFrames tmp10 = ::flixel::graphics::frames::FlxAtlasFrames_obj::__new(graphic,null());		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(46)
	frames = tmp10;
	HX_STACK_LINE(48)
	::String tmp11 = Description;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(48)
	bool tmp12 = ::openfl::_legacy::Assets_obj::exists(tmp11,null());		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(48)
	if ((tmp12)){
		HX_STACK_LINE(50)
		::String tmp13 = Description;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(50)
		::String tmp14 = ::openfl::_legacy::Assets_obj::getText(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(50)
		Description = tmp14;
	}
	HX_STACK_LINE(53)
	::haxe::format::JsonParser tmp13 = ::haxe::format::JsonParser_obj::__new(Description);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(53)
	Dynamic tmp14 = tmp13->parseRec();		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(53)
	Dynamic data = tmp14;		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(56)
	bool tmp15 = ::Std_obj::is(data->__Field(HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac"), hx::paccDynamic ),hx::ClassOf< Array<int> >());		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(56)
	if ((tmp15)){
		HX_STACK_LINE(58)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(58)
		cpp::ArrayBase _g1 = ::Lambda_obj::array(data->__Field(HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac"), hx::paccDynamic ));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(58)
		while((true)){
			HX_STACK_LINE(58)
			bool tmp16 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(58)
			bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(58)
			if ((tmp17)){
				HX_STACK_LINE(58)
				break;
			}
			HX_STACK_LINE(58)
			Dynamic tmp18 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(58)
			Dynamic frame = tmp18;		HX_STACK_VAR(frame,"frame");
			HX_STACK_LINE(58)
			++(_g);
			HX_STACK_LINE(60)
			::String tmp19 = frame->__Field(HX_HCSTRING("filename","\xc7","\x2e","\x6a","\x77"), hx::paccDynamic );		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(60)
			Dynamic tmp20 = frame;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(60)
			::flixel::graphics::frames::FlxAtlasFrames tmp21 = frames;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(60)
			::flixel::graphics::frames::FlxAtlasFrames_obj::texturePackerHelper(tmp19,tmp20,tmp21);
		}
	}
	else{
		HX_STACK_LINE(66)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(66)
		Array< ::String > _g1 = ::Reflect_obj::fields(data->__Field(HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac"), hx::paccDynamic ));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(66)
		while((true)){
			HX_STACK_LINE(66)
			bool tmp16 = (_g < _g1->length);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(66)
			bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(66)
			if ((tmp17)){
				HX_STACK_LINE(66)
				break;
			}
			HX_STACK_LINE(66)
			::String tmp18 = _g1->__get(_g);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(66)
			::String frameName = tmp18;		HX_STACK_VAR(frameName,"frameName");
			HX_STACK_LINE(66)
			++(_g);
			HX_STACK_LINE(68)
			::String tmp19 = frameName;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(68)
			::String tmp20 = frameName;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(68)
			Dynamic tmp21 = ::Reflect_obj::field(data->__Field(HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac"), hx::paccDynamic ),tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(68)
			::flixel::graphics::frames::FlxAtlasFrames tmp22 = frames;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(68)
			::flixel::graphics::frames::FlxAtlasFrames_obj::texturePackerHelper(tmp19,tmp21,tmp22);
		}
	}
	HX_STACK_LINE(72)
	::flixel::graphics::frames::FlxAtlasFrames tmp16 = frames;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(72)
	return tmp16;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxAtlasFrames_obj,fromTexturePackerJson,return )

Void FlxAtlasFrames_obj::texturePackerHelper( ::String FrameName,Dynamic FrameData,::flixel::graphics::frames::FlxAtlasFrames Frames){
{
		HX_STACK_FRAME("flixel.graphics.frames.FlxAtlasFrames","texturePackerHelper",0x397d6e77,"flixel.graphics.frames.FlxAtlasFrames.texturePackerHelper","flixel/graphics/frames/FlxAtlasFrames.hx",82,0x501ecb67)
		HX_STACK_ARG(FrameName,"FrameName")
		HX_STACK_ARG(FrameData,"FrameData")
		HX_STACK_ARG(Frames,"Frames")
		HX_STACK_LINE(83)
		bool rotated = FrameData->__Field(HX_HCSTRING("rotated","\xa9","\x49","\x1d","\xf1"), hx::paccDynamic );		HX_STACK_VAR(rotated,"rotated");
		HX_STACK_LINE(84)
		::String name = FrameName;		HX_STACK_VAR(name,"name");
		HX_STACK_LINE(85)
		::flixel::math::FlxPoint tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(85)
		{
			HX_STACK_LINE(85)
			Float X = FrameData->__Field(HX_HCSTRING("sourceSize","\x3c","\x87","\xb7","\x74"), hx::paccDynamic )->__Field(HX_HCSTRING("w","\x77","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(85)
			Float Y = FrameData->__Field(HX_HCSTRING("sourceSize","\x3c","\x87","\xb7","\x74"), hx::paccDynamic )->__Field(HX_HCSTRING("h","\x68","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(85)
			::flixel::util::FlxPool_flixel_math_FlxPoint tmp1 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(85)
			::flixel::math::FlxPoint tmp2 = tmp1->get();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(85)
			Float tmp3 = X;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(85)
			Float tmp4 = Y;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(85)
			::flixel::math::FlxPoint tmp5 = tmp2->set(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(85)
			::flixel::math::FlxPoint point = tmp5;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(85)
			point->_inPool = false;
			HX_STACK_LINE(85)
			tmp = point;
		}
		HX_STACK_LINE(85)
		::flixel::math::FlxPoint sourceSize = tmp;		HX_STACK_VAR(sourceSize,"sourceSize");
		HX_STACK_LINE(86)
		::flixel::math::FlxPoint tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(86)
		{
			HX_STACK_LINE(86)
			Float X = FrameData->__Field(HX_HCSTRING("spriteSourceSize","\xa1","\x7f","\xc1","\x03"), hx::paccDynamic )->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(86)
			Float Y = FrameData->__Field(HX_HCSTRING("spriteSourceSize","\xa1","\x7f","\xc1","\x03"), hx::paccDynamic )->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(86)
			::flixel::util::FlxPool_flixel_math_FlxPoint tmp2 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(86)
			::flixel::math::FlxPoint tmp3 = tmp2->get();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(86)
			Float tmp4 = X;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(86)
			Float tmp5 = Y;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(86)
			::flixel::math::FlxPoint tmp6 = tmp3->set(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(86)
			::flixel::math::FlxPoint point = tmp6;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(86)
			point->_inPool = false;
			HX_STACK_LINE(86)
			tmp1 = point;
		}
		HX_STACK_LINE(86)
		::flixel::math::FlxPoint offset = tmp1;		HX_STACK_VAR(offset,"offset");
		HX_STACK_LINE(87)
		int angle = (int)0;		HX_STACK_VAR(angle,"angle");
		HX_STACK_LINE(88)
		::flixel::math::FlxRect frameRect = null();		HX_STACK_VAR(frameRect,"frameRect");
		HX_STACK_LINE(90)
		bool tmp2 = rotated;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(90)
		if ((tmp2)){
			HX_STACK_LINE(92)
			::flixel::math::FlxRect tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(92)
			{
				HX_STACK_LINE(92)
				Float X = FrameData->__Field(HX_HCSTRING("frame","\x2d","\x78","\x83","\x06"), hx::paccDynamic )->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(92)
				Float Y = FrameData->__Field(HX_HCSTRING("frame","\x2d","\x78","\x83","\x06"), hx::paccDynamic )->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(92)
				Float Width = FrameData->__Field(HX_HCSTRING("frame","\x2d","\x78","\x83","\x06"), hx::paccDynamic )->__Field(HX_HCSTRING("h","\x68","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(Width,"Width");
				HX_STACK_LINE(92)
				Float Height = FrameData->__Field(HX_HCSTRING("frame","\x2d","\x78","\x83","\x06"), hx::paccDynamic )->__Field(HX_HCSTRING("w","\x77","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(Height,"Height");
				HX_STACK_LINE(92)
				::flixel::math::FlxRect tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(92)
				{
					HX_STACK_LINE(92)
					::flixel::util::FlxPool_flixel_math_FlxRect tmp5 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(92)
					::flixel::math::FlxRect tmp6 = tmp5->get();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(92)
					::flixel::math::FlxRect _this = tmp6;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(92)
					_this->x = X;
					HX_STACK_LINE(92)
					_this->y = Y;
					HX_STACK_LINE(92)
					_this->width = Width;
					HX_STACK_LINE(92)
					_this->height = Height;
					HX_STACK_LINE(92)
					tmp4 = _this;
				}
				HX_STACK_LINE(92)
				::flixel::math::FlxRect rect = tmp4;		HX_STACK_VAR(rect,"rect");
				HX_STACK_LINE(92)
				rect->_inPool = false;
				HX_STACK_LINE(92)
				tmp3 = rect;
			}
			HX_STACK_LINE(92)
			frameRect = tmp3;
			HX_STACK_LINE(93)
			angle = (int)-90;
		}
		else{
			HX_STACK_LINE(97)
			::flixel::math::FlxRect tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(97)
			{
				HX_STACK_LINE(97)
				Float X = FrameData->__Field(HX_HCSTRING("frame","\x2d","\x78","\x83","\x06"), hx::paccDynamic )->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(97)
				Float Y = FrameData->__Field(HX_HCSTRING("frame","\x2d","\x78","\x83","\x06"), hx::paccDynamic )->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(97)
				Float Width = FrameData->__Field(HX_HCSTRING("frame","\x2d","\x78","\x83","\x06"), hx::paccDynamic )->__Field(HX_HCSTRING("w","\x77","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(Width,"Width");
				HX_STACK_LINE(97)
				Float Height = FrameData->__Field(HX_HCSTRING("frame","\x2d","\x78","\x83","\x06"), hx::paccDynamic )->__Field(HX_HCSTRING("h","\x68","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(Height,"Height");
				HX_STACK_LINE(97)
				::flixel::math::FlxRect tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(97)
				{
					HX_STACK_LINE(97)
					::flixel::util::FlxPool_flixel_math_FlxRect tmp5 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(97)
					::flixel::math::FlxRect tmp6 = tmp5->get();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(97)
					::flixel::math::FlxRect _this = tmp6;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(97)
					_this->x = X;
					HX_STACK_LINE(97)
					_this->y = Y;
					HX_STACK_LINE(97)
					_this->width = Width;
					HX_STACK_LINE(97)
					_this->height = Height;
					HX_STACK_LINE(97)
					tmp4 = _this;
				}
				HX_STACK_LINE(97)
				::flixel::math::FlxRect rect = tmp4;		HX_STACK_VAR(rect,"rect");
				HX_STACK_LINE(97)
				rect->_inPool = false;
				HX_STACK_LINE(97)
				tmp3 = rect;
			}
			HX_STACK_LINE(97)
			frameRect = tmp3;
		}
		HX_STACK_LINE(100)
		::flixel::math::FlxRect tmp3 = frameRect;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(100)
		::flixel::math::FlxPoint tmp4 = sourceSize;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(100)
		::flixel::math::FlxPoint tmp5 = offset;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(100)
		::String tmp6 = name;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(100)
		int tmp7 = angle;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(100)
		Frames->addAtlasFrame(tmp3,tmp4,tmp5,tmp6,tmp7,null(),null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxAtlasFrames_obj,texturePackerHelper,(void))

::flixel::graphics::frames::FlxAtlasFrames FlxAtlasFrames_obj::fromLibGdx( Dynamic Source,::String Description){
	HX_STACK_FRAME("flixel.graphics.frames.FlxAtlasFrames","fromLibGdx",0x5ef5c818,"flixel.graphics.frames.FlxAtlasFrames.fromLibGdx","flixel/graphics/frames/FlxAtlasFrames.hx",112,0x501ecb67)
	HX_STACK_ARG(Source,"Source")
	HX_STACK_ARG(Description,"Description")
	HX_STACK_LINE(113)
	::flixel::_system::frontEnds::BitmapFrontEnd tmp = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(113)
	Dynamic tmp1 = Source;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(113)
	::flixel::graphics::FlxGraphic tmp2 = tmp->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )(tmp1,null(),null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(113)
	::flixel::graphics::FlxGraphic graphic = tmp2;		HX_STACK_VAR(graphic,"graphic");
	HX_STACK_LINE(114)
	bool tmp3 = (graphic == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(114)
	if ((tmp3)){
		HX_STACK_LINE(115)
		return null();
	}
	HX_STACK_LINE(118)
	::flixel::graphics::FlxGraphic tmp4 = graphic;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(118)
	::flixel::graphics::frames::FlxAtlasFrames tmp5 = ::flixel::graphics::frames::FlxAtlasFrames_obj::findFrame(tmp4,null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(118)
	::flixel::graphics::frames::FlxAtlasFrames frames = tmp5;		HX_STACK_VAR(frames,"frames");
	HX_STACK_LINE(119)
	bool tmp6 = (frames != null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(119)
	if ((tmp6)){
		HX_STACK_LINE(120)
		::flixel::graphics::frames::FlxAtlasFrames tmp7 = frames;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(120)
		return tmp7;
	}
	HX_STACK_LINE(122)
	bool tmp7 = (graphic == null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(122)
	bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(122)
	bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(122)
	if ((tmp8)){
		HX_STACK_LINE(122)
		tmp9 = (Description == null());
	}
	else{
		HX_STACK_LINE(122)
		tmp9 = true;
	}
	HX_STACK_LINE(122)
	if ((tmp9)){
		HX_STACK_LINE(123)
		return null();
	}
	HX_STACK_LINE(125)
	::flixel::graphics::frames::FlxAtlasFrames tmp10 = ::flixel::graphics::frames::FlxAtlasFrames_obj::__new(graphic,null());		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(125)
	frames = tmp10;
	HX_STACK_LINE(127)
	::String tmp11 = Description;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(127)
	bool tmp12 = ::openfl::_legacy::Assets_obj::exists(tmp11,null());		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(127)
	if ((tmp12)){
		HX_STACK_LINE(128)
		::String tmp13 = Description;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(128)
		::String tmp14 = ::openfl::_legacy::Assets_obj::getText(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(128)
		Description = tmp14;
	}
	HX_STACK_LINE(130)
	::String tmp13 = Description;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(130)
	::String tmp14 = ::StringTools_obj::trim(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(130)
	::String pack = tmp14;		HX_STACK_VAR(pack,"pack");
	HX_STACK_LINE(131)
	Array< ::String > lines = pack.split(HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(lines,"lines");
	HX_STACK_LINE(134)
	::String tmp15 = lines->__get((int)3);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(134)
	int tmp16 = tmp15.indexOf(HX_HCSTRING("repeat:","\x7f","\xd8","\x87","\xa6"),null());		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(134)
	bool tmp17 = (tmp16 > (int)-1);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(134)
	int tmp18;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(134)
	if ((tmp17)){
		HX_STACK_LINE(134)
		tmp18 = (int)3;
	}
	else{
		HX_STACK_LINE(134)
		tmp18 = (int)4;
	}
	HX_STACK_LINE(134)
	int repeatLine = tmp18;		HX_STACK_VAR(repeatLine,"repeatLine");
	HX_STACK_LINE(135)
	int tmp19 = (repeatLine + (int)1);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(135)
	lines->splice((int)0,tmp19);
	HX_STACK_LINE(137)
	int numElementsPerImage = (int)7;		HX_STACK_VAR(numElementsPerImage,"numElementsPerImage");
	HX_STACK_LINE(138)
	Float tmp20 = (Float(lines->length) / Float(numElementsPerImage));		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(138)
	int tmp21 = ::Std_obj::_int(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(138)
	int numImages = tmp21;		HX_STACK_VAR(numImages,"numImages");
	HX_STACK_LINE(139)
	Array< int > size = Array_obj< int >::__new();		HX_STACK_VAR(size,"size");
	HX_STACK_LINE(141)
	{
		HX_STACK_LINE(141)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(141)
		while((true)){
			HX_STACK_LINE(141)
			bool tmp22 = (_g < numImages);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(141)
			bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(141)
			if ((tmp23)){
				HX_STACK_LINE(141)
				break;
			}
			HX_STACK_LINE(141)
			int tmp24 = (_g)++;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(141)
			int i = tmp24;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(143)
			int tmp25 = (i * numElementsPerImage);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(143)
			int curIndex = tmp25;		HX_STACK_VAR(curIndex,"curIndex");
			HX_STACK_LINE(145)
			int tmp26 = (curIndex)++;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(145)
			::String tmp27 = lines->__get(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(145)
			::String name = tmp27;		HX_STACK_VAR(name,"name");
			HX_STACK_LINE(146)
			int tmp28 = (curIndex)++;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(146)
			::String tmp29 = lines->__get(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(146)
			int tmp30 = tmp29.indexOf(HX_HCSTRING("true","\x4e","\xa7","\x03","\x4d"),null());		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(146)
			bool tmp31 = (tmp30 >= (int)0);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(146)
			bool rotated = tmp31;		HX_STACK_VAR(rotated,"rotated");
			HX_STACK_LINE(147)
			int angle = (int)0;		HX_STACK_VAR(angle,"angle");
			HX_STACK_LINE(149)
			int tmp32 = (curIndex)++;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(149)
			::String tmp33 = lines->__get(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(149)
			::String tempString = tmp33;		HX_STACK_VAR(tempString,"tempString");
			HX_STACK_LINE(150)
			::String tmp34 = tempString;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(150)
			Array< int > size1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::getDimensions(tmp34,size);		HX_STACK_VAR(size1,"size1");
			HX_STACK_LINE(152)
			int tmp35 = size1->__get((int)0);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(152)
			int imageX = tmp35;		HX_STACK_VAR(imageX,"imageX");
			HX_STACK_LINE(153)
			int tmp36 = size1->__get((int)1);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(153)
			int imageY = tmp36;		HX_STACK_VAR(imageY,"imageY");
			HX_STACK_LINE(155)
			int tmp37 = (curIndex)++;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(155)
			::String tmp38 = lines->__get(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(155)
			tempString = tmp38;
			HX_STACK_LINE(156)
			::String tmp39 = tempString;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(156)
			size1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::getDimensions(tmp39,size1);
			HX_STACK_LINE(158)
			int tmp40 = size1->__get((int)0);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(158)
			int imageWidth = tmp40;		HX_STACK_VAR(imageWidth,"imageWidth");
			HX_STACK_LINE(159)
			int tmp41 = size1->__get((int)1);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(159)
			int imageHeight = tmp41;		HX_STACK_VAR(imageHeight,"imageHeight");
			HX_STACK_LINE(161)
			::flixel::math::FlxRect rect = null();		HX_STACK_VAR(rect,"rect");
			HX_STACK_LINE(162)
			bool tmp42 = rotated;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(162)
			if ((tmp42)){
				HX_STACK_LINE(164)
				::flixel::math::FlxRect tmp43;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(164)
				{
					HX_STACK_LINE(164)
					::flixel::math::FlxRect tmp44;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(164)
					{
						HX_STACK_LINE(164)
						::flixel::util::FlxPool_flixel_math_FlxRect tmp45 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(164)
						::flixel::math::FlxRect tmp46 = tmp45->get();		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(164)
						::flixel::math::FlxRect _this = tmp46;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(164)
						_this->x = imageX;
						HX_STACK_LINE(164)
						_this->y = imageY;
						HX_STACK_LINE(164)
						_this->width = imageHeight;
						HX_STACK_LINE(164)
						_this->height = imageWidth;
						HX_STACK_LINE(164)
						tmp44 = _this;
					}
					HX_STACK_LINE(164)
					::flixel::math::FlxRect rect1 = tmp44;		HX_STACK_VAR(rect1,"rect1");
					HX_STACK_LINE(164)
					rect1->_inPool = false;
					HX_STACK_LINE(164)
					tmp43 = rect1;
				}
				HX_STACK_LINE(164)
				rect = tmp43;
				HX_STACK_LINE(165)
				angle = (int)90;
			}
			else{
				HX_STACK_LINE(169)
				::flixel::math::FlxRect tmp43;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(169)
				{
					HX_STACK_LINE(169)
					::flixel::math::FlxRect tmp44;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(169)
					{
						HX_STACK_LINE(169)
						::flixel::util::FlxPool_flixel_math_FlxRect tmp45 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(169)
						::flixel::math::FlxRect tmp46 = tmp45->get();		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(169)
						::flixel::math::FlxRect _this = tmp46;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(169)
						_this->x = imageX;
						HX_STACK_LINE(169)
						_this->y = imageY;
						HX_STACK_LINE(169)
						_this->width = imageWidth;
						HX_STACK_LINE(169)
						_this->height = imageHeight;
						HX_STACK_LINE(169)
						tmp44 = _this;
					}
					HX_STACK_LINE(169)
					::flixel::math::FlxRect rect1 = tmp44;		HX_STACK_VAR(rect1,"rect1");
					HX_STACK_LINE(169)
					rect1->_inPool = false;
					HX_STACK_LINE(169)
					tmp43 = rect1;
				}
				HX_STACK_LINE(169)
				rect = tmp43;
			}
			HX_STACK_LINE(172)
			int tmp43 = (curIndex)++;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(172)
			::String tmp44 = lines->__get(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(172)
			tempString = tmp44;
			HX_STACK_LINE(173)
			::String tmp45 = tempString;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(173)
			size1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::getDimensions(tmp45,size1);
			HX_STACK_LINE(175)
			::flixel::math::FlxPoint tmp46;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(175)
			{
				HX_STACK_LINE(175)
				::flixel::util::FlxPool_flixel_math_FlxPoint tmp47 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(175)
				::flixel::math::FlxPoint tmp48 = tmp47->get();		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(175)
				int tmp49 = size1->__get((int)0);		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(175)
				int tmp50 = size1->__get((int)1);		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(175)
				::flixel::math::FlxPoint tmp51 = tmp48->set(tmp49,tmp50);		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(175)
				::flixel::math::FlxPoint point = tmp51;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(175)
				point->_inPool = false;
				HX_STACK_LINE(175)
				tmp46 = point;
			}
			HX_STACK_LINE(175)
			::flixel::math::FlxPoint sourceSize = tmp46;		HX_STACK_VAR(sourceSize,"sourceSize");
			HX_STACK_LINE(177)
			int tmp47 = (curIndex)++;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(177)
			::String tmp48 = lines->__get(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(177)
			tempString = tmp48;
			HX_STACK_LINE(178)
			::String tmp49 = tempString;		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(178)
			size1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::getDimensions(tmp49,size1);
			HX_STACK_LINE(181)
			::flixel::math::FlxPoint tmp50;		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(181)
			{
				HX_STACK_LINE(181)
				::flixel::util::FlxPool_flixel_math_FlxPoint tmp51 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(181)
				::flixel::math::FlxPoint tmp52 = tmp51->get();		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(181)
				int tmp53 = size1->__get((int)0);		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(181)
				Float tmp54 = sourceSize->y;		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(181)
				int tmp55 = size1->__get((int)1);		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(181)
				Float tmp56 = (tmp54 - tmp55);		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(181)
				int tmp57 = imageHeight;		HX_STACK_VAR(tmp57,"tmp57");
				HX_STACK_LINE(181)
				Float tmp58 = (tmp56 - tmp57);		HX_STACK_VAR(tmp58,"tmp58");
				HX_STACK_LINE(181)
				::flixel::math::FlxPoint tmp59 = tmp52->set(tmp53,tmp58);		HX_STACK_VAR(tmp59,"tmp59");
				HX_STACK_LINE(181)
				::flixel::math::FlxPoint point = tmp59;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(181)
				point->_inPool = false;
				HX_STACK_LINE(181)
				tmp50 = point;
			}
			HX_STACK_LINE(181)
			::flixel::math::FlxPoint offset = tmp50;		HX_STACK_VAR(offset,"offset");
			HX_STACK_LINE(182)
			::flixel::math::FlxRect tmp51 = rect;		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(182)
			::flixel::math::FlxPoint tmp52 = sourceSize;		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(182)
			::flixel::math::FlxPoint tmp53 = offset;		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(182)
			::String tmp54 = name;		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(182)
			int tmp55 = angle;		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(182)
			frames->addAtlasFrame(tmp51,tmp52,tmp53,tmp54,tmp55,null(),null());
		}
	}
	HX_STACK_LINE(185)
	::flixel::graphics::frames::FlxAtlasFrames tmp22 = frames;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(185)
	return tmp22;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxAtlasFrames_obj,fromLibGdx,return )

Array< int > FlxAtlasFrames_obj::getDimensions( ::String line,Array< int > size){
	HX_STACK_FRAME("flixel.graphics.frames.FlxAtlasFrames","getDimensions",0x0a6267eb,"flixel.graphics.frames.FlxAtlasFrames.getDimensions","flixel/graphics/frames/FlxAtlasFrames.hx",196,0x501ecb67)
	HX_STACK_ARG(line,"line")
	HX_STACK_ARG(size,"size")
	HX_STACK_LINE(197)
	int tmp = line.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(197)
	int colonPosition = tmp;		HX_STACK_VAR(colonPosition,"colonPosition");
	HX_STACK_LINE(198)
	int tmp1 = line.indexOf(HX_HCSTRING(",","\x2c","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(198)
	int comaPosition = tmp1;		HX_STACK_VAR(comaPosition,"comaPosition");
	HX_STACK_LINE(200)
	int tmp2 = (colonPosition + (int)1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(200)
	int tmp3 = comaPosition;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(200)
	::String tmp4 = line.substring(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(200)
	Dynamic tmp5 = ::Std_obj::parseInt(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(200)
	size[(int)0] = tmp5;
	HX_STACK_LINE(201)
	int tmp6 = (comaPosition + (int)1);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(201)
	int tmp7 = line.length;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(201)
	::String tmp8 = line.substring(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(201)
	Dynamic tmp9 = ::Std_obj::parseInt(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(201)
	size[(int)1] = tmp9;
	HX_STACK_LINE(203)
	return size;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxAtlasFrames_obj,getDimensions,return )

::flixel::graphics::frames::FlxAtlasFrames FlxAtlasFrames_obj::fromSparrow( Dynamic Source,::String Description){
	HX_STACK_FRAME("flixel.graphics.frames.FlxAtlasFrames","fromSparrow",0x30bf432a,"flixel.graphics.frames.FlxAtlasFrames.fromSparrow","flixel/graphics/frames/FlxAtlasFrames.hx",215,0x501ecb67)
	HX_STACK_ARG(Source,"Source")
	HX_STACK_ARG(Description,"Description")
	HX_STACK_LINE(216)
	::flixel::_system::frontEnds::BitmapFrontEnd tmp = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(216)
	Dynamic tmp1 = Source;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(216)
	::flixel::graphics::FlxGraphic tmp2 = tmp->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )(tmp1,null(),null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(216)
	::flixel::graphics::FlxGraphic graphic = tmp2;		HX_STACK_VAR(graphic,"graphic");
	HX_STACK_LINE(217)
	bool tmp3 = (graphic == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(217)
	if ((tmp3)){
		HX_STACK_LINE(218)
		return null();
	}
	HX_STACK_LINE(221)
	::flixel::graphics::FlxGraphic tmp4 = graphic;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(221)
	::flixel::graphics::frames::FlxAtlasFrames tmp5 = ::flixel::graphics::frames::FlxAtlasFrames_obj::findFrame(tmp4,null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(221)
	::flixel::graphics::frames::FlxAtlasFrames frames = tmp5;		HX_STACK_VAR(frames,"frames");
	HX_STACK_LINE(222)
	bool tmp6 = (frames != null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(222)
	if ((tmp6)){
		HX_STACK_LINE(223)
		::flixel::graphics::frames::FlxAtlasFrames tmp7 = frames;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(223)
		return tmp7;
	}
	HX_STACK_LINE(225)
	bool tmp7 = (graphic == null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(225)
	bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(225)
	bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(225)
	if ((tmp8)){
		HX_STACK_LINE(225)
		tmp9 = (Description == null());
	}
	else{
		HX_STACK_LINE(225)
		tmp9 = true;
	}
	HX_STACK_LINE(225)
	if ((tmp9)){
		HX_STACK_LINE(226)
		return null();
	}
	HX_STACK_LINE(228)
	::flixel::graphics::frames::FlxAtlasFrames tmp10 = ::flixel::graphics::frames::FlxAtlasFrames_obj::__new(graphic,null());		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(228)
	frames = tmp10;
	HX_STACK_LINE(230)
	::String tmp11 = Description;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(230)
	bool tmp12 = ::openfl::_legacy::Assets_obj::exists(tmp11,null());		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(230)
	if ((tmp12)){
		HX_STACK_LINE(231)
		::String tmp13 = Description;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(231)
		::String tmp14 = ::openfl::_legacy::Assets_obj::getText(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(231)
		Description = tmp14;
	}
	HX_STACK_LINE(233)
	::String tmp13 = Description;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(233)
	::Xml tmp14 = ::Xml_obj::parse(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(233)
	::Xml tmp15 = tmp14->firstElement();		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(233)
	::haxe::xml::Fast tmp16 = ::haxe::xml::Fast_obj::__new(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(233)
	::haxe::xml::Fast data = tmp16;		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(235)
	{
		HX_STACK_LINE(235)
		::_List::ListIterator tmp17;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(235)
		{
			HX_STACK_LINE(235)
			::List tmp18 = data->nodes->resolve(HX_HCSTRING("SubTexture","\x5b","\x7b","\xfb","\x11"));		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(235)
			::List _this = tmp18;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(235)
			tmp17 = ::_List::ListIterator_obj::__new(_this->h);
		}
		HX_STACK_LINE(235)
		::_List::ListIterator _g = tmp17;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(235)
		while((true)){
			HX_STACK_LINE(235)
			bool tmp18 = (_g->head != null());		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(235)
			bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(235)
			if ((tmp19)){
				HX_STACK_LINE(235)
				break;
			}
			HX_STACK_LINE(235)
			Dynamic tmp20;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(235)
			{
				HX_STACK_LINE(235)
				Dynamic tmp21 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(235)
				_g->val = tmp21;
				HX_STACK_LINE(235)
				Dynamic tmp22 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(235)
				_g->head = tmp22;
				HX_STACK_LINE(235)
				tmp20 = _g->val;
			}
			HX_STACK_LINE(235)
			::haxe::xml::Fast texture = ((::haxe::xml::Fast)(tmp20));		HX_STACK_VAR(texture,"texture");
			HX_STACK_LINE(237)
			::String tmp21 = texture->att->resolve(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(237)
			::String name = tmp21;		HX_STACK_VAR(name,"name");
			HX_STACK_LINE(238)
			bool tmp22 = texture->has->resolve(HX_HCSTRING("frameX","\x8b","\xaf","\x85","\xac"));		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(238)
			bool trimmed = tmp22;		HX_STACK_VAR(trimmed,"trimmed");
			HX_STACK_LINE(239)
			bool tmp23 = texture->has->resolve(HX_HCSTRING("rotated","\xa9","\x49","\x1d","\xf1"));		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(239)
			bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(239)
			if ((tmp23)){
				HX_STACK_LINE(239)
				::String tmp25 = texture->att->resolve(HX_HCSTRING("rotated","\xa9","\x49","\x1d","\xf1"));		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(239)
				::String tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(239)
				tmp24 = (tmp26 == HX_HCSTRING("true","\x4e","\xa7","\x03","\x4d"));
			}
			else{
				HX_STACK_LINE(239)
				tmp24 = false;
			}
			HX_STACK_LINE(239)
			bool rotated = tmp24;		HX_STACK_VAR(rotated,"rotated");
			HX_STACK_LINE(240)
			bool tmp25 = texture->has->resolve(HX_HCSTRING("flipX","\x0b","\x45","\x92","\x02"));		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(240)
			bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(240)
			if ((tmp25)){
				HX_STACK_LINE(240)
				::String tmp27 = texture->att->resolve(HX_HCSTRING("flipX","\x0b","\x45","\x92","\x02"));		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(240)
				::String tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(240)
				tmp26 = (tmp28 == HX_HCSTRING("true","\x4e","\xa7","\x03","\x4d"));
			}
			else{
				HX_STACK_LINE(240)
				tmp26 = false;
			}
			HX_STACK_LINE(240)
			bool flipX = tmp26;		HX_STACK_VAR(flipX,"flipX");
			HX_STACK_LINE(241)
			bool tmp27 = texture->has->resolve(HX_HCSTRING("flipY","\x0c","\x45","\x92","\x02"));		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(241)
			bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(241)
			if ((tmp27)){
				HX_STACK_LINE(241)
				::String tmp29 = texture->att->resolve(HX_HCSTRING("flipY","\x0c","\x45","\x92","\x02"));		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(241)
				::String tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(241)
				tmp28 = (tmp30 == HX_HCSTRING("true","\x4e","\xa7","\x03","\x4d"));
			}
			else{
				HX_STACK_LINE(241)
				tmp28 = false;
			}
			HX_STACK_LINE(241)
			bool flipY = tmp28;		HX_STACK_VAR(flipY,"flipY");
			HX_STACK_LINE(243)
			::flixel::math::FlxRect tmp29;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(243)
			{
				HX_STACK_LINE(243)
				::String tmp30 = texture->att->resolve(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(243)
				Float tmp31 = ::Std_obj::parseFloat(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(243)
				Float X = tmp31;		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(243)
				::String tmp32 = texture->att->resolve(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(243)
				Float tmp33 = ::Std_obj::parseFloat(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(243)
				Float Y = tmp33;		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(243)
				::String tmp34 = texture->att->resolve(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(243)
				Float tmp35 = ::Std_obj::parseFloat(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(243)
				Float Width = tmp35;		HX_STACK_VAR(Width,"Width");
				HX_STACK_LINE(243)
				::String tmp36 = texture->att->resolve(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(243)
				Float tmp37 = ::Std_obj::parseFloat(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(243)
				Float Height = tmp37;		HX_STACK_VAR(Height,"Height");
				HX_STACK_LINE(243)
				::flixel::math::FlxRect tmp38;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(243)
				{
					HX_STACK_LINE(243)
					::flixel::util::FlxPool_flixel_math_FlxRect tmp39 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(243)
					::flixel::math::FlxRect tmp40 = tmp39->get();		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(243)
					::flixel::math::FlxRect _this = tmp40;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(243)
					_this->x = X;
					HX_STACK_LINE(243)
					_this->y = Y;
					HX_STACK_LINE(243)
					_this->width = Width;
					HX_STACK_LINE(243)
					_this->height = Height;
					HX_STACK_LINE(243)
					tmp38 = _this;
				}
				HX_STACK_LINE(243)
				::flixel::math::FlxRect rect = tmp38;		HX_STACK_VAR(rect,"rect");
				HX_STACK_LINE(243)
				rect->_inPool = false;
				HX_STACK_LINE(243)
				tmp29 = rect;
			}
			HX_STACK_LINE(243)
			::flixel::math::FlxRect rect = tmp29;		HX_STACK_VAR(rect,"rect");
			HX_STACK_LINE(245)
			bool tmp30 = trimmed;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(245)
			::openfl::_legacy::geom::Rectangle tmp31;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(245)
			if ((tmp30)){
				HX_STACK_LINE(247)
				::String tmp32 = texture->att->resolve(HX_HCSTRING("frameX","\x8b","\xaf","\x85","\xac"));		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(247)
				Dynamic tmp33 = ::Std_obj::parseInt(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(247)
				::String tmp34 = texture->att->resolve(HX_HCSTRING("frameY","\x8c","\xaf","\x85","\xac"));		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(247)
				Dynamic tmp35 = ::Std_obj::parseInt(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(247)
				::String tmp36 = texture->att->resolve(HX_HCSTRING("frameWidth","\x99","\xea","\x88","\xad"));		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(247)
				Dynamic tmp37 = ::Std_obj::parseInt(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(247)
				::String tmp38 = texture->att->resolve(HX_HCSTRING("frameHeight","\xf4","\xd3","\x93","\xe0"));		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(247)
				Dynamic tmp39 = ::Std_obj::parseInt(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(247)
				tmp31 = ::openfl::_legacy::geom::Rectangle_obj::__new(tmp33,tmp35,tmp37,tmp39);
			}
			else{
				HX_STACK_LINE(251)
				tmp31 = ::openfl::_legacy::geom::Rectangle_obj::__new((int)0,(int)0,rect->width,rect->height);
			}
			HX_STACK_LINE(245)
			::openfl::_legacy::geom::Rectangle size = tmp31;		HX_STACK_VAR(size,"size");
			HX_STACK_LINE(254)
			bool tmp32 = rotated;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(254)
			int tmp33;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(254)
			if ((tmp32)){
				HX_STACK_LINE(254)
				tmp33 = (int)-90;
			}
			else{
				HX_STACK_LINE(254)
				tmp33 = (int)0;
			}
			HX_STACK_LINE(254)
			int angle = tmp33;		HX_STACK_VAR(angle,"angle");
			HX_STACK_LINE(256)
			::flixel::math::FlxPoint tmp34;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(256)
			{
				HX_STACK_LINE(256)
				Float tmp35 = size->get_left();		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(256)
				Float tmp36 = -(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(256)
				Float X = tmp36;		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(256)
				Float tmp37 = size->get_top();		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(256)
				Float tmp38 = -(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(256)
				Float Y = tmp38;		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(256)
				::flixel::util::FlxPool_flixel_math_FlxPoint tmp39 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(256)
				::flixel::math::FlxPoint tmp40 = tmp39->get();		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(256)
				Float tmp41 = X;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(256)
				Float tmp42 = Y;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(256)
				::flixel::math::FlxPoint tmp43 = tmp40->set(tmp41,tmp42);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(256)
				::flixel::math::FlxPoint point = tmp43;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(256)
				point->_inPool = false;
				HX_STACK_LINE(256)
				tmp34 = point;
			}
			HX_STACK_LINE(256)
			::flixel::math::FlxPoint offset = tmp34;		HX_STACK_VAR(offset,"offset");
			HX_STACK_LINE(257)
			::flixel::math::FlxPoint tmp35;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(257)
			{
				HX_STACK_LINE(257)
				::flixel::util::FlxPool_flixel_math_FlxPoint tmp36 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(257)
				::flixel::math::FlxPoint tmp37 = tmp36->get();		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(257)
				Float tmp38 = size->width;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(257)
				Float tmp39 = size->height;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(257)
				::flixel::math::FlxPoint tmp40 = tmp37->set(tmp38,tmp39);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(257)
				::flixel::math::FlxPoint point = tmp40;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(257)
				point->_inPool = false;
				HX_STACK_LINE(257)
				tmp35 = point;
			}
			HX_STACK_LINE(257)
			::flixel::math::FlxPoint sourceSize = tmp35;		HX_STACK_VAR(sourceSize,"sourceSize");
			HX_STACK_LINE(259)
			bool tmp36 = rotated;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(259)
			bool tmp37;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(259)
			if ((tmp36)){
				HX_STACK_LINE(259)
				bool tmp38 = trimmed;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(259)
				bool tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(259)
				tmp37 = !(tmp39);
			}
			else{
				HX_STACK_LINE(259)
				tmp37 = false;
			}
			HX_STACK_LINE(259)
			if ((tmp37)){
				HX_STACK_LINE(260)
				Float tmp38 = size->height;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(260)
				Float tmp39 = size->width;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(260)
				sourceSize->set(tmp38,tmp39);
			}
			HX_STACK_LINE(262)
			::flixel::math::FlxRect tmp38 = rect;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(262)
			::flixel::math::FlxPoint tmp39 = sourceSize;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(262)
			::flixel::math::FlxPoint tmp40 = offset;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(262)
			::String tmp41 = name;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(262)
			int tmp42 = angle;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(262)
			bool tmp43 = flipX;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(262)
			bool tmp44 = flipY;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(262)
			frames->addAtlasFrame(tmp38,tmp39,tmp40,tmp41,tmp42,tmp43,tmp44);
		}
	}
	HX_STACK_LINE(265)
	::flixel::graphics::frames::FlxAtlasFrames tmp17 = frames;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(265)
	return tmp17;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxAtlasFrames_obj,fromSparrow,return )

::flixel::graphics::frames::FlxAtlasFrames FlxAtlasFrames_obj::fromTexturePackerXml( Dynamic Source,::String Description){
	HX_STACK_FRAME("flixel.graphics.frames.FlxAtlasFrames","fromTexturePackerXml",0x5ca98eb8,"flixel.graphics.frames.FlxAtlasFrames.fromTexturePackerXml","flixel/graphics/frames/FlxAtlasFrames.hx",277,0x501ecb67)
	HX_STACK_ARG(Source,"Source")
	HX_STACK_ARG(Description,"Description")
	HX_STACK_LINE(278)
	::flixel::_system::frontEnds::BitmapFrontEnd tmp = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(278)
	Dynamic tmp1 = Source;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(278)
	::flixel::graphics::FlxGraphic tmp2 = tmp->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )(tmp1,false,null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(278)
	::flixel::graphics::FlxGraphic graphic = tmp2;		HX_STACK_VAR(graphic,"graphic");
	HX_STACK_LINE(279)
	bool tmp3 = (graphic == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(279)
	if ((tmp3)){
		HX_STACK_LINE(279)
		return null();
	}
	HX_STACK_LINE(282)
	::flixel::graphics::FlxGraphic tmp4 = graphic;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(282)
	::flixel::graphics::frames::FlxAtlasFrames tmp5 = ::flixel::graphics::frames::FlxAtlasFrames_obj::findFrame(tmp4,null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(282)
	::flixel::graphics::frames::FlxAtlasFrames frames = tmp5;		HX_STACK_VAR(frames,"frames");
	HX_STACK_LINE(283)
	bool tmp6 = (frames != null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(283)
	if ((tmp6)){
		HX_STACK_LINE(284)
		::flixel::graphics::frames::FlxAtlasFrames tmp7 = frames;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(284)
		return tmp7;
	}
	HX_STACK_LINE(286)
	bool tmp7 = (graphic == null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(286)
	bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(286)
	bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(286)
	if ((tmp8)){
		HX_STACK_LINE(286)
		tmp9 = (Description == null());
	}
	else{
		HX_STACK_LINE(286)
		tmp9 = true;
	}
	HX_STACK_LINE(286)
	if ((tmp9)){
		HX_STACK_LINE(287)
		return null();
	}
	HX_STACK_LINE(289)
	::flixel::graphics::frames::FlxAtlasFrames tmp10 = ::flixel::graphics::frames::FlxAtlasFrames_obj::__new(graphic,null());		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(289)
	frames = tmp10;
	HX_STACK_LINE(291)
	::String tmp11 = Description;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(291)
	bool tmp12 = ::openfl::_legacy::Assets_obj::exists(tmp11,null());		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(291)
	if ((tmp12)){
		HX_STACK_LINE(292)
		::String tmp13 = Description;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(292)
		::String tmp14 = ::openfl::_legacy::Assets_obj::getText(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(292)
		Description = tmp14;
	}
	HX_STACK_LINE(294)
	::String tmp13 = Description;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(294)
	::Xml tmp14 = ::Xml_obj::parse(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(294)
	::Xml xml = tmp14;		HX_STACK_VAR(xml,"xml");
	HX_STACK_LINE(296)
	::Xml tmp15 = xml->firstElement();		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(296)
	Dynamic tmp16 = tmp15->elements();		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(296)
	for(::cpp::FastIterator_obj< ::Xml > *__it = ::cpp::CreateFastIterator< ::Xml >(tmp16);  __it->hasNext(); ){
		::Xml sprite = __it->next();
		{
			HX_STACK_LINE(298)
			bool tmp17 = sprite->exists(HX_HCSTRING("oX","\x09","\x61","\x00","\x00"));		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(298)
			bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(298)
			bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(298)
			if ((tmp18)){
				HX_STACK_LINE(298)
				tmp19 = sprite->exists(HX_HCSTRING("oY","\x0a","\x61","\x00","\x00"));
			}
			else{
				HX_STACK_LINE(298)
				tmp19 = true;
			}
			HX_STACK_LINE(298)
			bool trimmed = tmp19;		HX_STACK_VAR(trimmed,"trimmed");
			HX_STACK_LINE(299)
			bool tmp20 = sprite->exists(HX_HCSTRING("r","\x72","\x00","\x00","\x00"));		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(299)
			bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(299)
			if ((tmp20)){
				HX_STACK_LINE(299)
				::String tmp22 = sprite->get(HX_HCSTRING("r","\x72","\x00","\x00","\x00"));		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(299)
				::String tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(299)
				tmp21 = (tmp23 == HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
			}
			else{
				HX_STACK_LINE(299)
				tmp21 = false;
			}
			HX_STACK_LINE(299)
			bool rotated = tmp21;		HX_STACK_VAR(rotated,"rotated");
			HX_STACK_LINE(300)
			bool tmp22 = rotated;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(300)
			int tmp23;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(300)
			if ((tmp22)){
				HX_STACK_LINE(300)
				tmp23 = (int)-90;
			}
			else{
				HX_STACK_LINE(300)
				tmp23 = (int)0;
			}
			HX_STACK_LINE(300)
			int angle = tmp23;		HX_STACK_VAR(angle,"angle");
			HX_STACK_LINE(301)
			::String tmp24 = sprite->get(HX_HCSTRING("n","\x6e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(301)
			::String name = tmp24;		HX_STACK_VAR(name,"name");
			HX_STACK_LINE(302)
			::flixel::math::FlxPoint tmp25;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(302)
			{
				HX_STACK_LINE(302)
				::flixel::util::FlxPool_flixel_math_FlxPoint tmp26 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(302)
				::flixel::math::FlxPoint tmp27 = tmp26->get();		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(302)
				::flixel::math::FlxPoint tmp28 = tmp27->set((int)0,(int)0);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(302)
				::flixel::math::FlxPoint point = tmp28;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(302)
				point->_inPool = false;
				HX_STACK_LINE(302)
				tmp25 = point;
			}
			HX_STACK_LINE(302)
			::flixel::math::FlxPoint offset = tmp25;		HX_STACK_VAR(offset,"offset");
			HX_STACK_LINE(303)
			::flixel::math::FlxRect tmp26;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(303)
			{
				HX_STACK_LINE(303)
				::String tmp27 = sprite->get(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(303)
				Dynamic tmp28 = ::Std_obj::parseInt(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(303)
				Float X = tmp28;		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(303)
				::String tmp29 = sprite->get(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(303)
				Dynamic tmp30 = ::Std_obj::parseInt(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(303)
				Float Y = tmp30;		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(303)
				::String tmp31 = sprite->get(HX_HCSTRING("w","\x77","\x00","\x00","\x00"));		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(303)
				Dynamic tmp32 = ::Std_obj::parseInt(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(303)
				Float Width = tmp32;		HX_STACK_VAR(Width,"Width");
				HX_STACK_LINE(303)
				::String tmp33 = sprite->get(HX_HCSTRING("h","\x68","\x00","\x00","\x00"));		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(303)
				Dynamic tmp34 = ::Std_obj::parseInt(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(303)
				Float Height = tmp34;		HX_STACK_VAR(Height,"Height");
				HX_STACK_LINE(303)
				::flixel::math::FlxRect tmp35;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(303)
				{
					HX_STACK_LINE(303)
					::flixel::util::FlxPool_flixel_math_FlxRect tmp36 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(303)
					::flixel::math::FlxRect tmp37 = tmp36->get();		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(303)
					::flixel::math::FlxRect _this = tmp37;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(303)
					_this->x = X;
					HX_STACK_LINE(303)
					_this->y = Y;
					HX_STACK_LINE(303)
					_this->width = Width;
					HX_STACK_LINE(303)
					_this->height = Height;
					HX_STACK_LINE(303)
					tmp35 = _this;
				}
				HX_STACK_LINE(303)
				::flixel::math::FlxRect rect = tmp35;		HX_STACK_VAR(rect,"rect");
				HX_STACK_LINE(303)
				rect->_inPool = false;
				HX_STACK_LINE(303)
				tmp26 = rect;
			}
			HX_STACK_LINE(303)
			::flixel::math::FlxRect rect = tmp26;		HX_STACK_VAR(rect,"rect");
			HX_STACK_LINE(304)
			::flixel::math::FlxPoint tmp27;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(304)
			{
				HX_STACK_LINE(304)
				::flixel::util::FlxPool_flixel_math_FlxPoint tmp28 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(304)
				::flixel::math::FlxPoint tmp29 = tmp28->get();		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(304)
				Float tmp30 = rect->width;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(304)
				Float tmp31 = rect->height;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(304)
				::flixel::math::FlxPoint tmp32 = tmp29->set(tmp30,tmp31);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(304)
				::flixel::math::FlxPoint point = tmp32;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(304)
				point->_inPool = false;
				HX_STACK_LINE(304)
				tmp27 = point;
			}
			HX_STACK_LINE(304)
			::flixel::math::FlxPoint sourceSize = tmp27;		HX_STACK_VAR(sourceSize,"sourceSize");
			HX_STACK_LINE(306)
			bool tmp28 = trimmed;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(306)
			if ((tmp28)){
				HX_STACK_LINE(308)
				::String tmp29 = sprite->get(HX_HCSTRING("oX","\x09","\x61","\x00","\x00"));		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(308)
				Dynamic tmp30 = ::Std_obj::parseInt(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(308)
				::String tmp31 = sprite->get(HX_HCSTRING("oY","\x0a","\x61","\x00","\x00"));		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(308)
				Dynamic tmp32 = ::Std_obj::parseInt(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(308)
				offset->set(tmp30,tmp32);
				HX_STACK_LINE(309)
				::String tmp33 = sprite->get(HX_HCSTRING("oW","\x08","\x61","\x00","\x00"));		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(309)
				Dynamic tmp34 = ::Std_obj::parseInt(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(309)
				::String tmp35 = sprite->get(HX_HCSTRING("oH","\xf9","\x60","\x00","\x00"));		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(309)
				Dynamic tmp36 = ::Std_obj::parseInt(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(309)
				sourceSize->set(tmp34,tmp36);
			}
			HX_STACK_LINE(312)
			::flixel::math::FlxRect tmp29 = rect;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(312)
			::flixel::math::FlxPoint tmp30 = sourceSize;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(312)
			::flixel::math::FlxPoint tmp31 = offset;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(312)
			::String tmp32 = name;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(312)
			int tmp33 = angle;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(312)
			frames->addAtlasFrame(tmp29,tmp30,tmp31,tmp32,tmp33,null(),null());
		}
;
	}
	HX_STACK_LINE(315)
	::flixel::graphics::frames::FlxAtlasFrames tmp17 = frames;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(315)
	return tmp17;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxAtlasFrames_obj,fromTexturePackerXml,return )

::flixel::graphics::frames::FlxAtlasFrames FlxAtlasFrames_obj::fromSpriteSheetPacker( Dynamic Source,::String Description){
	HX_STACK_FRAME("flixel.graphics.frames.FlxAtlasFrames","fromSpriteSheetPacker",0x4fb8a81e,"flixel.graphics.frames.FlxAtlasFrames.fromSpriteSheetPacker","flixel/graphics/frames/FlxAtlasFrames.hx",327,0x501ecb67)
	HX_STACK_ARG(Source,"Source")
	HX_STACK_ARG(Description,"Description")
	HX_STACK_LINE(328)
	::flixel::_system::frontEnds::BitmapFrontEnd tmp = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(328)
	Dynamic tmp1 = Source;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(328)
	::flixel::graphics::FlxGraphic tmp2 = tmp->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )(tmp1,null(),null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(328)
	::flixel::graphics::FlxGraphic graphic = tmp2;		HX_STACK_VAR(graphic,"graphic");
	HX_STACK_LINE(329)
	bool tmp3 = (graphic == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(329)
	if ((tmp3)){
		HX_STACK_LINE(330)
		return null();
	}
	HX_STACK_LINE(333)
	::flixel::graphics::FlxGraphic tmp4 = graphic;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(333)
	::flixel::graphics::frames::FlxAtlasFrames tmp5 = ::flixel::graphics::frames::FlxAtlasFrames_obj::findFrame(tmp4,null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(333)
	::flixel::graphics::frames::FlxAtlasFrames frames = tmp5;		HX_STACK_VAR(frames,"frames");
	HX_STACK_LINE(334)
	bool tmp6 = (frames != null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(334)
	if ((tmp6)){
		HX_STACK_LINE(335)
		::flixel::graphics::frames::FlxAtlasFrames tmp7 = frames;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(335)
		return tmp7;
	}
	HX_STACK_LINE(337)
	bool tmp7 = (graphic == null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(337)
	bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(337)
	bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(337)
	if ((tmp8)){
		HX_STACK_LINE(337)
		tmp9 = (Description == null());
	}
	else{
		HX_STACK_LINE(337)
		tmp9 = true;
	}
	HX_STACK_LINE(337)
	if ((tmp9)){
		HX_STACK_LINE(338)
		return null();
	}
	HX_STACK_LINE(340)
	::flixel::graphics::frames::FlxAtlasFrames tmp10 = ::flixel::graphics::frames::FlxAtlasFrames_obj::__new(graphic,null());		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(340)
	frames = tmp10;
	HX_STACK_LINE(342)
	::String tmp11 = Description;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(342)
	bool tmp12 = ::openfl::_legacy::Assets_obj::exists(tmp11,null());		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(342)
	if ((tmp12)){
		HX_STACK_LINE(343)
		::String tmp13 = Description;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(343)
		::String tmp14 = ::openfl::_legacy::Assets_obj::getText(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(343)
		Description = tmp14;
	}
	HX_STACK_LINE(345)
	::String tmp13 = Description;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(345)
	::String tmp14 = ::StringTools_obj::trim(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(345)
	::String pack = tmp14;		HX_STACK_VAR(pack,"pack");
	HX_STACK_LINE(346)
	Array< ::String > lines = pack.split(HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(lines,"lines");
	HX_STACK_LINE(348)
	{
		HX_STACK_LINE(348)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(348)
		int _g = lines->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(348)
		while((true)){
			HX_STACK_LINE(348)
			bool tmp15 = (_g1 < _g);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(348)
			bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(348)
			if ((tmp16)){
				HX_STACK_LINE(348)
				break;
			}
			HX_STACK_LINE(348)
			int tmp17 = (_g1)++;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(348)
			int i = tmp17;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(350)
			::String tmp18 = lines->__get(i);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(350)
			Array< ::String > currImageData = tmp18.split(HX_HCSTRING("=","\x3d","\x00","\x00","\x00"));		HX_STACK_VAR(currImageData,"currImageData");
			HX_STACK_LINE(351)
			::String tmp19 = currImageData->__get((int)0);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(351)
			::String tmp20 = ::StringTools_obj::trim(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(351)
			::String name = tmp20;		HX_STACK_VAR(name,"name");
			HX_STACK_LINE(352)
			::String tmp21 = currImageData->__get((int)1);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(352)
			::String tmp22 = ::StringTools_obj::trim(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(352)
			Array< ::String > currImageRegion = tmp22.split(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(currImageRegion,"currImageRegion");
			HX_STACK_LINE(354)
			::flixel::math::FlxRect tmp23;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(354)
			{
				HX_STACK_LINE(354)
				::String tmp24 = currImageRegion->__get((int)0);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(354)
				Dynamic tmp25 = ::Std_obj::parseInt(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(354)
				Float X = tmp25;		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(354)
				::String tmp26 = currImageRegion->__get((int)1);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(354)
				Dynamic tmp27 = ::Std_obj::parseInt(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(354)
				Float Y = tmp27;		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(354)
				::String tmp28 = currImageRegion->__get((int)2);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(354)
				Dynamic tmp29 = ::Std_obj::parseInt(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(354)
				Float Width = tmp29;		HX_STACK_VAR(Width,"Width");
				HX_STACK_LINE(354)
				::String tmp30 = currImageRegion->__get((int)3);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(354)
				Dynamic tmp31 = ::Std_obj::parseInt(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(354)
				Float Height = tmp31;		HX_STACK_VAR(Height,"Height");
				HX_STACK_LINE(354)
				::flixel::math::FlxRect tmp32;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(354)
				{
					HX_STACK_LINE(354)
					::flixel::util::FlxPool_flixel_math_FlxRect tmp33 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(354)
					::flixel::math::FlxRect tmp34 = tmp33->get();		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(354)
					::flixel::math::FlxRect _this = tmp34;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(354)
					_this->x = X;
					HX_STACK_LINE(354)
					_this->y = Y;
					HX_STACK_LINE(354)
					_this->width = Width;
					HX_STACK_LINE(354)
					_this->height = Height;
					HX_STACK_LINE(354)
					tmp32 = _this;
				}
				HX_STACK_LINE(354)
				::flixel::math::FlxRect rect = tmp32;		HX_STACK_VAR(rect,"rect");
				HX_STACK_LINE(354)
				rect->_inPool = false;
				HX_STACK_LINE(354)
				tmp23 = rect;
			}
			HX_STACK_LINE(354)
			::flixel::math::FlxRect rect = tmp23;		HX_STACK_VAR(rect,"rect");
			HX_STACK_LINE(355)
			::flixel::math::FlxPoint tmp24;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(355)
			{
				HX_STACK_LINE(355)
				::flixel::util::FlxPool_flixel_math_FlxPoint tmp25 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(355)
				::flixel::math::FlxPoint tmp26 = tmp25->get();		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(355)
				Float tmp27 = rect->width;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(355)
				Float tmp28 = rect->height;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(355)
				::flixel::math::FlxPoint tmp29 = tmp26->set(tmp27,tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(355)
				::flixel::math::FlxPoint point = tmp29;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(355)
				point->_inPool = false;
				HX_STACK_LINE(355)
				tmp24 = point;
			}
			HX_STACK_LINE(355)
			::flixel::math::FlxPoint sourceSize = tmp24;		HX_STACK_VAR(sourceSize,"sourceSize");
			HX_STACK_LINE(356)
			::flixel::math::FlxPoint tmp25;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(356)
			{
				HX_STACK_LINE(356)
				Float X = (int)0;		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(356)
				Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(356)
				::flixel::util::FlxPool_flixel_math_FlxPoint tmp26 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(356)
				::flixel::math::FlxPoint tmp27 = tmp26->get();		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(356)
				Float tmp28 = X;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(356)
				Float tmp29 = Y;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(356)
				::flixel::math::FlxPoint tmp30 = tmp27->set(tmp28,tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(356)
				::flixel::math::FlxPoint point = tmp30;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(356)
				point->_inPool = false;
				HX_STACK_LINE(356)
				tmp25 = point;
			}
			HX_STACK_LINE(356)
			::flixel::math::FlxPoint offset = tmp25;		HX_STACK_VAR(offset,"offset");
			HX_STACK_LINE(358)
			::flixel::math::FlxRect tmp26 = rect;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(358)
			::flixel::math::FlxPoint tmp27 = sourceSize;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(358)
			::flixel::math::FlxPoint tmp28 = offset;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(358)
			::String tmp29 = name;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(358)
			frames->addAtlasFrame(tmp26,tmp27,tmp28,tmp29,(int)0,null(),null());
		}
	}
	HX_STACK_LINE(361)
	::flixel::graphics::frames::FlxAtlasFrames tmp15 = frames;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(361)
	return tmp15;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxAtlasFrames_obj,fromSpriteSheetPacker,return )

::flixel::graphics::frames::FlxAtlasFrames FlxAtlasFrames_obj::findFrame( ::flixel::graphics::FlxGraphic graphic,::flixel::math::FlxPoint border){
	HX_STACK_FRAME("flixel.graphics.frames.FlxAtlasFrames","findFrame",0xf36e229c,"flixel.graphics.frames.FlxAtlasFrames.findFrame","flixel/graphics/frames/FlxAtlasFrames.hx",371,0x501ecb67)
	HX_STACK_ARG(graphic,"graphic")
	HX_STACK_ARG(border,"border")
	HX_STACK_LINE(372)
	bool tmp = (border == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(372)
	if ((tmp)){
		HX_STACK_LINE(373)
		::flixel::math::FlxPoint tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(373)
		{
			HX_STACK_LINE(373)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(373)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(373)
			::flixel::math::FlxPoint tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(373)
			{
				HX_STACK_LINE(373)
				::flixel::util::FlxPool_flixel_math_FlxPoint tmp3 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(373)
				::flixel::math::FlxPoint tmp4 = tmp3->get();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(373)
				Float tmp5 = X;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(373)
				Float tmp6 = Y;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(373)
				::flixel::math::FlxPoint tmp7 = tmp4->set(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(373)
				::flixel::math::FlxPoint point = tmp7;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(373)
				point->_inPool = false;
				HX_STACK_LINE(373)
				tmp2 = point;
			}
			HX_STACK_LINE(373)
			::flixel::math::FlxPoint point = tmp2;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(373)
			point->_weak = true;
			HX_STACK_LINE(373)
			tmp1 = point;
		}
		HX_STACK_LINE(373)
		border = tmp1;
	}
	HX_STACK_LINE(375)
	Array< ::Dynamic > atlasFrames;		HX_STACK_VAR(atlasFrames,"atlasFrames");
	struct _Function_1_1{
		inline static cpp::ArrayBase Block( ::flixel::graphics::FlxGraphic &graphic){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/graphics/frames/FlxAtlasFrames.hx",375,0x501ecb67)
			{
				HX_STACK_LINE(375)
				::flixel::graphics::frames::FlxFrameCollectionType type = ::flixel::graphics::frames::FlxFrameCollectionType_obj::ATLAS;		HX_STACK_VAR(type,"type");
				HX_STACK_LINE(375)
				::flixel::graphics::frames::FlxFrameCollectionType tmp1 = type;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(375)
				cpp::ArrayBase collections = ((cpp::ArrayBase)(graphic->frameCollections->get(tmp1)));		HX_STACK_VAR(collections,"collections");
				HX_STACK_LINE(375)
				bool tmp2 = (collections == null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(375)
				if ((tmp2)){
					HX_STACK_LINE(375)
					collections = Array_obj< ::Dynamic >::__new();
					HX_STACK_LINE(375)
					::flixel::graphics::frames::FlxFrameCollectionType tmp3 = type;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(375)
					graphic->frameCollections->set(tmp3,collections);
				}
				HX_STACK_LINE(375)
				return collections;
			}
			return null();
		}
	};
	HX_STACK_LINE(375)
	atlasFrames = ((Array< ::Dynamic >)(_Function_1_1::Block(graphic)));
	HX_STACK_LINE(377)
	{
		HX_STACK_LINE(377)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(377)
		while((true)){
			HX_STACK_LINE(377)
			bool tmp1 = (_g < atlasFrames->length);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(377)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(377)
			if ((tmp2)){
				HX_STACK_LINE(377)
				break;
			}
			HX_STACK_LINE(377)
			::flixel::graphics::frames::FlxAtlasFrames tmp3 = atlasFrames->__get(_g).StaticCast< ::flixel::graphics::frames::FlxAtlasFrames >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(377)
			::flixel::graphics::frames::FlxAtlasFrames atlas = tmp3;		HX_STACK_VAR(atlas,"atlas");
			HX_STACK_LINE(377)
			++(_g);
			HX_STACK_LINE(378)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(378)
			{
				HX_STACK_LINE(378)
				::flixel::math::FlxPoint _this = atlas->border;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(378)
				bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(378)
				{
					HX_STACK_LINE(378)
					Float aDiff = ((Float)0.0000001);		HX_STACK_VAR(aDiff,"aDiff");
					HX_STACK_LINE(378)
					Float tmp6 = (_this->x - border->x);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(378)
					Float tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(378)
					Float tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(378)
					Float tmp9 = ::Math_obj::abs(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(378)
					Float tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(378)
					Float tmp11 = aDiff;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(378)
					tmp5 = (tmp10 <= tmp11);
				}
				HX_STACK_LINE(378)
				bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(378)
				if ((tmp5)){
					HX_STACK_LINE(378)
					Float aDiff = ((Float)0.0000001);		HX_STACK_VAR(aDiff,"aDiff");
					HX_STACK_LINE(378)
					Float tmp7 = (_this->y - border->y);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(378)
					Float tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(378)
					Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(378)
					Float tmp10 = ::Math_obj::abs(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(378)
					Float tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(378)
					Float tmp12 = aDiff;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(378)
					tmp6 = (tmp11 <= tmp12);
				}
				else{
					HX_STACK_LINE(378)
					tmp6 = false;
				}
				HX_STACK_LINE(378)
				bool result = tmp6;		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(378)
				{
					HX_STACK_LINE(378)
					bool tmp7 = border->_weak;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(378)
					if ((tmp7)){
						HX_STACK_LINE(378)
						border->put();
					}
				}
				HX_STACK_LINE(378)
				tmp4 = result;
			}
			HX_STACK_LINE(378)
			if ((tmp4)){
				HX_STACK_LINE(379)
				::flixel::graphics::frames::FlxAtlasFrames tmp5 = atlas;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(379)
				return tmp5;
			}
		}
	}
	HX_STACK_LINE(381)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxAtlasFrames_obj,findFrame,return )


FlxAtlasFrames_obj::FlxAtlasFrames_obj()
{
}

Dynamic FlxAtlasFrames_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"addBorder") ) { return addBorder_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxAtlasFrames_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"findFrame") ) { outValue = findFrame_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromLibGdx") ) { outValue = fromLibGdx_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"fromSparrow") ) { outValue = fromSparrow_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getDimensions") ) { outValue = getDimensions_dyn(); return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"texturePackerHelper") ) { outValue = texturePackerHelper_dyn(); return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"fromTexturePackerXml") ) { outValue = fromTexturePackerXml_dyn(); return true;  }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"fromTexturePackerJson") ) { outValue = fromTexturePackerJson_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"fromSpriteSheetPacker") ) { outValue = fromSpriteSheetPacker_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("addBorder","\xed","\x81","\x3e","\x1c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxAtlasFrames_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxAtlasFrames_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxAtlasFrames_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("fromTexturePackerJson","\xbf","\xf0","\x7e","\xbe"),
	HX_HCSTRING("texturePackerHelper","\x0f","\x23","\xbd","\xb2"),
	HX_HCSTRING("fromLibGdx","\x80","\x06","\xdf","\x27"),
	HX_HCSTRING("getDimensions","\x83","\x1a","\x12","\x39"),
	HX_HCSTRING("fromSparrow","\xc2","\x9f","\xec","\x33"),
	HX_HCSTRING("fromTexturePackerXml","\x20","\xdf","\x27","\xfb"),
	HX_HCSTRING("fromSpriteSheetPacker","\xb6","\xb2","\xc0","\x5f"),
	HX_HCSTRING("findFrame","\x34","\xa9","\x7a","\xf5"),
	::String(null()) };

void FlxAtlasFrames_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.graphics.frames.FlxAtlasFrames","\xd6","\x87","\xd5","\x6f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxAtlasFrames_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxAtlasFrames_obj >;
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
