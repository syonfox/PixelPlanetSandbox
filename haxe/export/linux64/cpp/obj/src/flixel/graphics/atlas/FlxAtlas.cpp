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
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_atlas_FlxAtlas
#include <flixel/graphics/atlas/FlxAtlas.h>
#endif
#ifndef INCLUDED_flixel_graphics_atlas_FlxNode
#include <flixel/graphics/atlas/FlxNode.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxAtlasFrames
#include <flixel/graphics/frames/FlxAtlasFrames.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFrame
#include <flixel/graphics/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxTileFrames
#include <flixel/graphics/frames/FlxTileFrames.h>
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
#ifndef INCLUDED_flixel_system_FlxAssets
#include <flixel/system/FlxAssets.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SignalFrontEnd
#include <flixel/system/frontEnds/SignalFrontEnd.h>
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
#ifndef INCLUDED_flixel_util_IFlxSignal
#include <flixel/util/IFlxSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxBaseSignal
#include <flixel/util/_FlxSignal/FlxBaseSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal1
#include <flixel/util/_FlxSignal/FlxSignal1.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
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
namespace graphics{
namespace atlas{

Void FlxAtlas_obj::__construct(::String name,hx::Null< bool >  __o_powerOfTwo,hx::Null< int >  __o_border,hx::Null< bool >  __o_rotate,::flixel::math::FlxPoint minSize,::flixel::math::FlxPoint maxSize)
{
HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","new",0xc05046bf,"flixel.graphics.atlas.FlxAtlas.new","flixel/graphics/atlas/FlxAtlas.hx",25,0x03972f50)
HX_STACK_THIS(this)
HX_STACK_ARG(name,"name")
HX_STACK_ARG(__o_powerOfTwo,"powerOfTwo")
HX_STACK_ARG(__o_border,"border")
HX_STACK_ARG(__o_rotate,"rotate")
HX_STACK_ARG(minSize,"minSize")
HX_STACK_ARG(maxSize,"maxSize")
bool powerOfTwo = __o_powerOfTwo.Default(false);
int border = __o_border.Default(1);
bool rotate = __o_rotate.Default(false);
{
	HX_STACK_LINE(111)
	this->powerOfTwo = false;
	HX_STACK_LINE(106)
	this->allowRotation = false;
	HX_STACK_LINE(101)
	this->maxHeight = (int)1024;
	HX_STACK_LINE(97)
	this->maxWidth = (int)1024;
	HX_STACK_LINE(92)
	this->minHeight = (int)128;
	HX_STACK_LINE(88)
	this->minWidth = (int)128;
	HX_STACK_LINE(71)
	this->border = (int)1;
	HX_STACK_LINE(66)
	this->persist = false;
	HX_STACK_LINE(131)
	::haxe::ds::StringMap tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(131)
	{
		HX_STACK_LINE(131)
		::haxe::ds::StringMap tmp1 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(131)
		::haxe::ds::StringMap tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(131)
		tmp = tmp2;
	}
	HX_STACK_LINE(131)
	this->nodes = tmp;
	HX_STACK_LINE(132)
	this->name = name;
	HX_STACK_LINE(133)
	bool tmp1 = powerOfTwo;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(133)
	this->set_powerOfTwo(tmp1);
	HX_STACK_LINE(134)
	this->border = border;
	HX_STACK_LINE(136)
	bool tmp2 = (minSize != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(136)
	::flixel::math::FlxPoint tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(136)
	if ((tmp2)){
		HX_STACK_LINE(136)
		tmp3 = minSize;
	}
	else{
		HX_STACK_LINE(136)
		tmp3 = ::flixel::graphics::atlas::FlxAtlas_obj::defaultMinSize;
	}
	HX_STACK_LINE(136)
	minSize = tmp3;
	HX_STACK_LINE(137)
	bool tmp4 = (maxSize != null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(137)
	::flixel::math::FlxPoint tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(137)
	if ((tmp4)){
		HX_STACK_LINE(137)
		tmp5 = maxSize;
	}
	else{
		HX_STACK_LINE(137)
		tmp5 = ::flixel::graphics::atlas::FlxAtlas_obj::defaultMaxSize;
	}
	HX_STACK_LINE(137)
	maxSize = tmp5;
	HX_STACK_LINE(139)
	Float tmp6 = minSize->x;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(139)
	int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(139)
	this->set_minWidth(tmp7);
	HX_STACK_LINE(140)
	Float tmp8 = minSize->y;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(140)
	int tmp9 = ::Std_obj::_int(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(140)
	this->set_minHeight(tmp9);
	HX_STACK_LINE(141)
	bool tmp10 = (maxSize->x > minSize->x);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(141)
	int tmp11;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(141)
	if ((tmp10)){
		HX_STACK_LINE(141)
		Float tmp12 = maxSize->x;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(141)
		tmp11 = ::Std_obj::_int(tmp12);
	}
	else{
		HX_STACK_LINE(141)
		tmp11 = this->minWidth;
	}
	HX_STACK_LINE(141)
	this->set_maxWidth(tmp11);
	HX_STACK_LINE(142)
	bool tmp12 = (maxSize->y > minSize->x);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(142)
	int tmp13;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(142)
	if ((tmp12)){
		HX_STACK_LINE(142)
		Float tmp14 = maxSize->y;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(142)
		tmp13 = ::Std_obj::_int(tmp14);
	}
	else{
		HX_STACK_LINE(142)
		tmp13 = this->minHeight;
	}
	HX_STACK_LINE(142)
	this->set_maxHeight(tmp13);
	HX_STACK_LINE(143)
	this->allowRotation = rotate;
	HX_STACK_LINE(145)
	this->initRoot();
	HX_STACK_LINE(147)
	{
		HX_STACK_LINE(147)
		::flixel::_system::frontEnds::SignalFrontEnd tmp14 = ::flixel::FlxG_obj::signals;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(147)
		Dynamic tmp15 = this->onClear_dyn();		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(147)
		tmp14->__Field(HX_HCSTRING("preStateCreate","\x8a","\xe8","\xdd","\x06"), hx::paccDynamic )->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )(tmp15);
	}
}
;
	return null();
}

//FlxAtlas_obj::~FlxAtlas_obj() { }

Dynamic FlxAtlas_obj::__CreateEmpty() { return  new FlxAtlas_obj; }
hx::ObjectPtr< FlxAtlas_obj > FlxAtlas_obj::__new(::String name,hx::Null< bool >  __o_powerOfTwo,hx::Null< int >  __o_border,hx::Null< bool >  __o_rotate,::flixel::math::FlxPoint minSize,::flixel::math::FlxPoint maxSize)
{  hx::ObjectPtr< FlxAtlas_obj > _result_ = new FlxAtlas_obj();
	_result_->__construct(name,__o_powerOfTwo,__o_border,__o_rotate,minSize,maxSize);
	return _result_;}

Dynamic FlxAtlas_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxAtlas_obj > _result_ = new FlxAtlas_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _result_;}

hx::Object *FlxAtlas_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::util::IFlxDestroyable_obj)) return operator ::flixel::util::IFlxDestroyable_obj *();
	return super::__ToInterface(inType);
}

FlxAtlas_obj::operator ::flixel::util::IFlxDestroyable_obj *()
	{ return new ::flixel::util::IFlxDestroyable_delegate_< FlxAtlas_obj >(this); }
Void FlxAtlas_obj::initRoot( ){
{
		HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","initRoot",0x37652e93,"flixel.graphics.atlas.FlxAtlas.initRoot","flixel/graphics/atlas/FlxAtlas.hx",151,0x03972f50)
		HX_STACK_THIS(this)
		HX_STACK_LINE(152)
		int tmp = this->minWidth;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(152)
		int rootWidth = tmp;		HX_STACK_VAR(rootWidth,"rootWidth");
		HX_STACK_LINE(153)
		int tmp1 = this->minHeight;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(153)
		int rootHeight = tmp1;		HX_STACK_VAR(rootHeight,"rootHeight");
		HX_STACK_LINE(155)
		bool tmp2 = this->powerOfTwo;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(155)
		if ((tmp2)){
			HX_STACK_LINE(157)
			int tmp3 = rootWidth;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(157)
			int tmp4 = this->getNextPowerOfTwo(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(157)
			rootWidth = tmp4;
			HX_STACK_LINE(158)
			int tmp5 = rootHeight;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(158)
			int tmp6 = this->getNextPowerOfTwo(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(158)
			rootHeight = tmp6;
		}
		HX_STACK_LINE(161)
		::flixel::math::FlxRect tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(161)
		{
			HX_STACK_LINE(161)
			::flixel::math::FlxRect tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(161)
			{
				HX_STACK_LINE(161)
				::flixel::util::FlxPool_flixel_math_FlxRect tmp5 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(161)
				::flixel::math::FlxRect tmp6 = tmp5->get();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(161)
				::flixel::math::FlxRect _this = tmp6;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(161)
				_this->x = (int)0;
				HX_STACK_LINE(161)
				_this->y = (int)0;
				HX_STACK_LINE(161)
				_this->width = rootWidth;
				HX_STACK_LINE(161)
				_this->height = rootHeight;
				HX_STACK_LINE(161)
				tmp4 = _this;
			}
			HX_STACK_LINE(161)
			::flixel::math::FlxRect rect = tmp4;		HX_STACK_VAR(rect,"rect");
			HX_STACK_LINE(161)
			rect->_inPool = false;
			HX_STACK_LINE(161)
			tmp3 = rect;
		}
		HX_STACK_LINE(161)
		::flixel::graphics::atlas::FlxNode tmp4 = ::flixel::graphics::atlas::FlxNode_obj::__new(tmp3,hx::ObjectPtr<OBJ_>(this),null(),null(),null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(161)
		this->root = tmp4;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAtlas_obj,initRoot,(void))

::flixel::graphics::atlas::FlxNode FlxAtlas_obj::addNode( Dynamic Graphic,::String Key){
	HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","addNode",0xeec7dea2,"flixel.graphics.atlas.FlxAtlas.addNode","flixel/graphics/atlas/FlxAtlas.hx",171,0x03972f50)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Graphic,"Graphic")
	HX_STACK_ARG(Key,"Key")
	HX_STACK_LINE(172)
	Dynamic tmp = Graphic;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(172)
	::String tmp1 = Key;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(172)
	::String tmp2 = ::flixel::_system::FlxAssets_obj::resolveKey(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(172)
	::String key = tmp2;		HX_STACK_VAR(key,"key");
	HX_STACK_LINE(174)
	bool tmp3 = (key == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(174)
	if ((tmp3)){
		HX_STACK_LINE(179)
		return null();
	}
	HX_STACK_LINE(182)
	::String tmp4 = key;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(182)
	bool tmp5 = this->hasNodeWithName(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(182)
	if ((tmp5)){
		HX_STACK_LINE(183)
		::haxe::ds::StringMap tmp6 = this->nodes;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(183)
		::String tmp7 = key;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(183)
		::flixel::graphics::atlas::FlxNode tmp8 = tmp6->get(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(183)
		::flixel::graphics::atlas::FlxNode tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(183)
		return tmp9;
	}
	HX_STACK_LINE(185)
	Dynamic tmp6 = Graphic;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(185)
	::openfl::_legacy::display::BitmapData tmp7 = ::flixel::_system::FlxAssets_obj::resolveBitmapData(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(185)
	::openfl::_legacy::display::BitmapData data = tmp7;		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(187)
	bool tmp8 = (data == null());		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(187)
	if ((tmp8)){
		HX_STACK_LINE(192)
		return null();
	}
	HX_STACK_LINE(196)
	::flixel::graphics::atlas::FlxNode tmp9 = this->root;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(196)
	::flixel::graphics::atlas::FlxNode tmp10 = tmp9->left;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(196)
	bool tmp11 = (tmp10 == null());		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(196)
	if ((tmp11)){
		HX_STACK_LINE(197)
		::openfl::_legacy::display::BitmapData tmp12 = data;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(197)
		::String tmp13 = key;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(197)
		::flixel::graphics::atlas::FlxNode tmp14 = this->insertFirstNodeInRoot(tmp12,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(197)
		return tmp14;
	}
	HX_STACK_LINE(199)
	::flixel::graphics::atlas::FlxNode tmp12 = this->root;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(199)
	::flixel::graphics::atlas::FlxNode tmp13 = tmp12->right;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(199)
	bool tmp14 = (tmp13 == null());		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(199)
	if ((tmp14)){
		HX_STACK_LINE(201)
		::openfl::_legacy::display::BitmapData tmp15 = data;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(201)
		::String tmp16 = key;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(201)
		::flixel::graphics::atlas::FlxNode tmp17 = this->expand(tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(201)
		return tmp17;
	}
	HX_STACK_LINE(205)
	::openfl::_legacy::display::BitmapData tmp15 = data;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(205)
	::String tmp16 = key;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(205)
	::flixel::graphics::atlas::FlxNode tmp17 = this->tryInsert(tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(205)
	::flixel::graphics::atlas::FlxNode inserted = tmp17;		HX_STACK_VAR(inserted,"inserted");
	HX_STACK_LINE(206)
	bool tmp18 = (inserted != null());		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(206)
	if ((tmp18)){
		HX_STACK_LINE(207)
		::flixel::graphics::atlas::FlxNode tmp19 = inserted;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(207)
		return tmp19;
	}
	HX_STACK_LINE(210)
	this->wrapRoot();
	HX_STACK_LINE(211)
	::openfl::_legacy::display::BitmapData tmp19 = data;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(211)
	::String tmp20 = key;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(211)
	::flixel::graphics::atlas::FlxNode tmp21 = this->expand(tmp19,tmp20);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(211)
	return tmp21;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxAtlas_obj,addNode,return )

Void FlxAtlas_obj::wrapRoot( ){
{
		HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","wrapRoot",0x7e08124d,"flixel.graphics.atlas.FlxAtlas.wrapRoot","flixel/graphics/atlas/FlxAtlas.hx",215,0x03972f50)
		HX_STACK_THIS(this)
		HX_STACK_LINE(216)
		::flixel::graphics::atlas::FlxNode tmp = this->root;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(216)
		::flixel::graphics::atlas::FlxNode temp = tmp;		HX_STACK_VAR(temp,"temp");
		HX_STACK_LINE(217)
		::flixel::math::FlxRect tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(217)
		{
			HX_STACK_LINE(217)
			Float tmp2 = temp->rect->width;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(217)
			int tmp3 = ::Std_obj::_int(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(217)
			Float Width = tmp3;		HX_STACK_VAR(Width,"Width");
			HX_STACK_LINE(217)
			Float tmp4 = temp->rect->height;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(217)
			int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(217)
			Float Height = tmp5;		HX_STACK_VAR(Height,"Height");
			HX_STACK_LINE(217)
			::flixel::math::FlxRect tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(217)
			{
				HX_STACK_LINE(217)
				::flixel::util::FlxPool_flixel_math_FlxRect tmp7 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(217)
				::flixel::math::FlxRect tmp8 = tmp7->get();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(217)
				::flixel::math::FlxRect _this = tmp8;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(217)
				_this->x = (int)0;
				HX_STACK_LINE(217)
				_this->y = (int)0;
				HX_STACK_LINE(217)
				_this->width = Width;
				HX_STACK_LINE(217)
				_this->height = Height;
				HX_STACK_LINE(217)
				tmp6 = _this;
			}
			HX_STACK_LINE(217)
			::flixel::math::FlxRect rect = tmp6;		HX_STACK_VAR(rect,"rect");
			HX_STACK_LINE(217)
			rect->_inPool = false;
			HX_STACK_LINE(217)
			tmp1 = rect;
		}
		HX_STACK_LINE(217)
		::flixel::graphics::atlas::FlxNode tmp2 = ::flixel::graphics::atlas::FlxNode_obj::__new(tmp1,hx::ObjectPtr<OBJ_>(this),null(),null(),null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(217)
		this->root = tmp2;
		HX_STACK_LINE(218)
		::flixel::graphics::atlas::FlxNode tmp3 = this->root;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(218)
		tmp3->left = temp;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAtlas_obj,wrapRoot,(void))

::flixel::graphics::atlas::FlxNode FlxAtlas_obj::tryInsert( ::openfl::_legacy::display::BitmapData data,::String key){
	HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","tryInsert",0xc0214673,"flixel.graphics.atlas.FlxAtlas.tryInsert","flixel/graphics/atlas/FlxAtlas.hx",222,0x03972f50)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(key,"key")
	HX_STACK_LINE(223)
	int tmp = data->get_width();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(223)
	int tmp1 = this->border;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(223)
	int tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(223)
	int insertWidth = tmp2;		HX_STACK_VAR(insertWidth,"insertWidth");
	HX_STACK_LINE(224)
	int tmp3 = data->get_height();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(224)
	int tmp4 = this->border;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(224)
	int tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(224)
	int insertHeight = tmp5;		HX_STACK_VAR(insertHeight,"insertHeight");
	HX_STACK_LINE(226)
	bool rotateNode = false;		HX_STACK_VAR(rotateNode,"rotateNode");
	HX_STACK_LINE(227)
	int tmp6 = insertWidth;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(227)
	int tmp7 = insertHeight;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(227)
	::flixel::graphics::atlas::FlxNode tmp8 = this->findNodeToInsert(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(227)
	::flixel::graphics::atlas::FlxNode nodeToInsert = tmp8;		HX_STACK_VAR(nodeToInsert,"nodeToInsert");
	HX_STACK_LINE(229)
	bool tmp9 = this->allowRotation;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(229)
	if ((tmp9)){
		HX_STACK_LINE(231)
		int tmp10 = insertHeight;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(231)
		int tmp11 = insertWidth;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(231)
		::flixel::graphics::atlas::FlxNode tmp12 = this->findNodeToInsert(tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(231)
		::flixel::graphics::atlas::FlxNode nodeToInsertWithRotation = tmp12;		HX_STACK_VAR(nodeToInsertWithRotation,"nodeToInsertWithRotation");
		HX_STACK_LINE(233)
		bool tmp13 = (nodeToInsertWithRotation != null());		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(233)
		if ((tmp13)){
			HX_STACK_LINE(235)
			Float tmp14 = nodeToInsertWithRotation->rect->width;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(235)
			int tmp15 = ::Std_obj::_int(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(235)
			Float tmp16 = nodeToInsertWithRotation->rect->height;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(235)
			int tmp17 = ::Std_obj::_int(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(235)
			int tmp18 = (tmp15 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(235)
			int nodeWithRotationArea = tmp18;		HX_STACK_VAR(nodeWithRotationArea,"nodeWithRotationArea");
			HX_STACK_LINE(237)
			bool tmp19 = (nodeToInsert == null());		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(237)
			bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(237)
			bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(237)
			if ((tmp20)){
				HX_STACK_LINE(237)
				bool tmp22 = (nodeToInsert != null());		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(237)
				bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(237)
				bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(237)
				if ((tmp24)){
					HX_STACK_LINE(237)
					Float tmp25 = nodeToInsert->rect->width;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(237)
					Float tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(237)
					Float tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(237)
					Float tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(237)
					Float tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(237)
					int tmp30 = ::Std_obj::_int(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(237)
					int tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(237)
					int tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(237)
					Float tmp33 = nodeToInsert->rect->height;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(237)
					Float tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(237)
					Float tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(237)
					Float tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(237)
					Float tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(237)
					int tmp38 = ::Std_obj::_int(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(237)
					int tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(237)
					int tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(237)
					int tmp41 = (tmp32 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(237)
					int tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(237)
					int tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(237)
					int tmp44 = nodeWithRotationArea;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(237)
					tmp21 = (tmp43 > tmp44);
				}
				else{
					HX_STACK_LINE(237)
					tmp21 = false;
				}
			}
			else{
				HX_STACK_LINE(237)
				tmp21 = true;
			}
			HX_STACK_LINE(237)
			if ((tmp21)){
				HX_STACK_LINE(239)
				nodeToInsert = nodeToInsertWithRotation;
				HX_STACK_LINE(240)
				rotateNode = true;
				HX_STACK_LINE(241)
				int temp = insertWidth;		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(242)
				insertWidth = insertHeight;
				HX_STACK_LINE(243)
				insertHeight = temp;
			}
		}
	}
	HX_STACK_LINE(248)
	bool tmp10 = (nodeToInsert != null());		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(248)
	if ((tmp10)){
		HX_STACK_LINE(250)
		::flixel::graphics::atlas::FlxNode tmp11 = nodeToInsert;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(250)
		int tmp12 = insertWidth;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(250)
		int tmp13 = insertHeight;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(250)
		bool tmp14 = this->needToDivideHorizontally(tmp11,tmp12,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(250)
		bool horizontally = tmp14;		HX_STACK_VAR(horizontally,"horizontally");
		HX_STACK_LINE(251)
		::flixel::graphics::atlas::FlxNode tmp15 = nodeToInsert;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(251)
		int tmp16 = insertWidth;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(251)
		int tmp17 = insertHeight;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(251)
		bool tmp18 = horizontally;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(251)
		::openfl::_legacy::display::BitmapData tmp19 = data;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(251)
		::String tmp20 = key;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(251)
		bool tmp21 = rotateNode;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(251)
		::flixel::graphics::atlas::FlxNode tmp22 = this->divideNode(tmp15,tmp16,tmp17,tmp18,tmp19,tmp20,tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(251)
		return tmp22;
	}
	HX_STACK_LINE(254)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxAtlas_obj,tryInsert,return )

bool FlxAtlas_obj::needToDivideHorizontally( ::flixel::graphics::atlas::FlxNode nodeToDivide,int insertWidth,int insertHeight){
	HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","needToDivideHorizontally",0x28a8e09c,"flixel.graphics.atlas.FlxAtlas.needToDivideHorizontally","flixel/graphics/atlas/FlxAtlas.hx",258,0x03972f50)
	HX_STACK_THIS(this)
	HX_STACK_ARG(nodeToDivide,"nodeToDivide")
	HX_STACK_ARG(insertWidth,"insertWidth")
	HX_STACK_ARG(insertHeight,"insertHeight")
	HX_STACK_LINE(259)
	Float tmp = nodeToDivide->rect->width;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(259)
	int tmp1 = ::Std_obj::_int(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(259)
	int tmp2 = insertWidth;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(259)
	int tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(259)
	int dw = tmp3;		HX_STACK_VAR(dw,"dw");
	HX_STACK_LINE(260)
	Float tmp4 = nodeToDivide->rect->height;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(260)
	int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(260)
	int tmp6 = insertHeight;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(260)
	int tmp7 = (tmp5 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(260)
	int dh = tmp7;		HX_STACK_VAR(dh,"dh");
	HX_STACK_LINE(262)
	bool tmp8 = (dw > dh);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(262)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC3(FlxAtlas_obj,needToDivideHorizontally,return )

::flixel::graphics::atlas::FlxNode FlxAtlas_obj::divideNode( ::flixel::graphics::atlas::FlxNode nodeToDivide,int insertWidth,int insertHeight,bool divideHorizontally,::openfl::_legacy::display::BitmapData firstGrandChildData,::String firstGrandChildKey,hx::Null< bool >  __o_firstGrandChildRotated){
bool firstGrandChildRotated = __o_firstGrandChildRotated.Default(false);
	HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","divideNode",0x568bb99c,"flixel.graphics.atlas.FlxAtlas.divideNode","flixel/graphics/atlas/FlxAtlas.hx",266,0x03972f50)
	HX_STACK_THIS(this)
	HX_STACK_ARG(nodeToDivide,"nodeToDivide")
	HX_STACK_ARG(insertWidth,"insertWidth")
	HX_STACK_ARG(insertHeight,"insertHeight")
	HX_STACK_ARG(divideHorizontally,"divideHorizontally")
	HX_STACK_ARG(firstGrandChildData,"firstGrandChildData")
	HX_STACK_ARG(firstGrandChildKey,"firstGrandChildKey")
	HX_STACK_ARG(firstGrandChildRotated,"firstGrandChildRotated")
{
		HX_STACK_LINE(267)
		bool tmp = (nodeToDivide != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(267)
		if ((tmp)){
			HX_STACK_LINE(269)
			::flixel::graphics::atlas::FlxNode firstChild = null();		HX_STACK_VAR(firstChild,"firstChild");
			HX_STACK_LINE(270)
			::flixel::graphics::atlas::FlxNode secondChild = null();		HX_STACK_VAR(secondChild,"secondChild");
			HX_STACK_LINE(271)
			::flixel::graphics::atlas::FlxNode firstGrandChild = null();		HX_STACK_VAR(firstGrandChild,"firstGrandChild");
			HX_STACK_LINE(272)
			::flixel::graphics::atlas::FlxNode secondGrandChild = null();		HX_STACK_VAR(secondGrandChild,"secondGrandChild");
			HX_STACK_LINE(273)
			bool tmp1 = (firstGrandChildKey != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(273)
			bool firstGrandChildFilled = tmp1;		HX_STACK_VAR(firstGrandChildFilled,"firstGrandChildFilled");
			HX_STACK_LINE(275)
			bool tmp2 = divideHorizontally;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(275)
			if ((tmp2)){
				HX_STACK_LINE(277)
				::flixel::math::FlxRect tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(277)
				{
					HX_STACK_LINE(277)
					Float tmp4 = nodeToDivide->rect->x;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(277)
					int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(277)
					Float X = tmp5;		HX_STACK_VAR(X,"X");
					HX_STACK_LINE(277)
					Float tmp6 = nodeToDivide->rect->y;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(277)
					int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(277)
					Float Y = tmp7;		HX_STACK_VAR(Y,"Y");
					HX_STACK_LINE(277)
					Float tmp8 = nodeToDivide->rect->height;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(277)
					int tmp9 = ::Std_obj::_int(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(277)
					Float Height = tmp9;		HX_STACK_VAR(Height,"Height");
					HX_STACK_LINE(277)
					::flixel::math::FlxRect tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(277)
					{
						HX_STACK_LINE(277)
						::flixel::util::FlxPool_flixel_math_FlxRect tmp11 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(277)
						::flixel::math::FlxRect tmp12 = tmp11->get();		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(277)
						::flixel::math::FlxRect _this = tmp12;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(277)
						_this->x = X;
						HX_STACK_LINE(277)
						_this->y = Y;
						HX_STACK_LINE(277)
						_this->width = insertWidth;
						HX_STACK_LINE(277)
						_this->height = Height;
						HX_STACK_LINE(277)
						tmp10 = _this;
					}
					HX_STACK_LINE(277)
					::flixel::math::FlxRect rect = tmp10;		HX_STACK_VAR(rect,"rect");
					HX_STACK_LINE(277)
					rect->_inPool = false;
					HX_STACK_LINE(277)
					tmp3 = rect;
				}
				HX_STACK_LINE(277)
				::flixel::graphics::atlas::FlxNode tmp4 = ::flixel::graphics::atlas::FlxNode_obj::__new(tmp3,hx::ObjectPtr<OBJ_>(this),null(),null(),null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(277)
				firstChild = tmp4;
				HX_STACK_LINE(279)
				Float tmp5 = nodeToDivide->rect->width;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(279)
				int tmp6 = ::Std_obj::_int(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(279)
				int tmp7 = insertWidth;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(279)
				int tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(279)
				bool tmp9 = (tmp8 > (int)0);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(279)
				if ((tmp9)){
					HX_STACK_LINE(281)
					::flixel::math::FlxRect tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(281)
					{
						HX_STACK_LINE(281)
						Float tmp11 = nodeToDivide->rect->x;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(281)
						int tmp12 = ::Std_obj::_int(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(281)
						int tmp13 = insertWidth;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(281)
						int tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(281)
						Float X = tmp14;		HX_STACK_VAR(X,"X");
						HX_STACK_LINE(281)
						Float tmp15 = nodeToDivide->rect->y;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(281)
						int tmp16 = ::Std_obj::_int(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(281)
						Float Y = tmp16;		HX_STACK_VAR(Y,"Y");
						HX_STACK_LINE(281)
						Float tmp17 = nodeToDivide->rect->width;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(281)
						int tmp18 = ::Std_obj::_int(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(281)
						int tmp19 = insertWidth;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(281)
						int tmp20 = (tmp18 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(281)
						Float Width = tmp20;		HX_STACK_VAR(Width,"Width");
						HX_STACK_LINE(281)
						Float tmp21 = nodeToDivide->rect->height;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(281)
						int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(281)
						Float Height = tmp22;		HX_STACK_VAR(Height,"Height");
						HX_STACK_LINE(281)
						::flixel::math::FlxRect tmp23;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(281)
						{
							HX_STACK_LINE(281)
							::flixel::util::FlxPool_flixel_math_FlxRect tmp24 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(281)
							::flixel::math::FlxRect tmp25 = tmp24->get();		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(281)
							::flixel::math::FlxRect _this = tmp25;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(281)
							_this->x = X;
							HX_STACK_LINE(281)
							_this->y = Y;
							HX_STACK_LINE(281)
							_this->width = Width;
							HX_STACK_LINE(281)
							_this->height = Height;
							HX_STACK_LINE(281)
							tmp23 = _this;
						}
						HX_STACK_LINE(281)
						::flixel::math::FlxRect rect = tmp23;		HX_STACK_VAR(rect,"rect");
						HX_STACK_LINE(281)
						rect->_inPool = false;
						HX_STACK_LINE(281)
						tmp10 = rect;
					}
					HX_STACK_LINE(281)
					::flixel::graphics::atlas::FlxNode tmp11 = ::flixel::graphics::atlas::FlxNode_obj::__new(tmp10,hx::ObjectPtr<OBJ_>(this),null(),null(),null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(281)
					secondChild = tmp11;
				}
				HX_STACK_LINE(284)
				::flixel::math::FlxRect tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(284)
				{
					HX_STACK_LINE(284)
					Float tmp11 = firstChild->rect->x;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(284)
					int tmp12 = ::Std_obj::_int(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(284)
					Float X = tmp12;		HX_STACK_VAR(X,"X");
					HX_STACK_LINE(284)
					Float tmp13 = firstChild->rect->y;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(284)
					int tmp14 = ::Std_obj::_int(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(284)
					Float Y = tmp14;		HX_STACK_VAR(Y,"Y");
					HX_STACK_LINE(284)
					::flixel::math::FlxRect tmp15;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(284)
					{
						HX_STACK_LINE(284)
						::flixel::util::FlxPool_flixel_math_FlxRect tmp16 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(284)
						::flixel::math::FlxRect tmp17 = tmp16->get();		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(284)
						::flixel::math::FlxRect _this = tmp17;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(284)
						_this->x = X;
						HX_STACK_LINE(284)
						_this->y = Y;
						HX_STACK_LINE(284)
						_this->width = insertWidth;
						HX_STACK_LINE(284)
						_this->height = insertHeight;
						HX_STACK_LINE(284)
						tmp15 = _this;
					}
					HX_STACK_LINE(284)
					::flixel::math::FlxRect rect = tmp15;		HX_STACK_VAR(rect,"rect");
					HX_STACK_LINE(284)
					rect->_inPool = false;
					HX_STACK_LINE(284)
					tmp10 = rect;
				}
				HX_STACK_LINE(284)
				bool tmp11 = firstGrandChildFilled;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(284)
				::String tmp12 = firstGrandChildKey;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(284)
				bool tmp13 = firstGrandChildRotated;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(284)
				::flixel::graphics::atlas::FlxNode tmp14 = ::flixel::graphics::atlas::FlxNode_obj::__new(tmp10,hx::ObjectPtr<OBJ_>(this),tmp11,tmp12,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(284)
				firstGrandChild = tmp14;
				HX_STACK_LINE(286)
				Float tmp15 = firstChild->rect->height;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(286)
				int tmp16 = ::Std_obj::_int(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(286)
				int tmp17 = insertHeight;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(286)
				int tmp18 = (tmp16 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(286)
				bool tmp19 = (tmp18 > (int)0);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(286)
				if ((tmp19)){
					HX_STACK_LINE(288)
					::flixel::math::FlxRect tmp20;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(288)
					{
						HX_STACK_LINE(288)
						Float tmp21 = firstChild->rect->x;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(288)
						int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(288)
						Float X = tmp22;		HX_STACK_VAR(X,"X");
						HX_STACK_LINE(288)
						Float tmp23 = firstChild->rect->y;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(288)
						int tmp24 = ::Std_obj::_int(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(288)
						int tmp25 = insertHeight;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(288)
						int tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(288)
						Float Y = tmp26;		HX_STACK_VAR(Y,"Y");
						HX_STACK_LINE(288)
						Float tmp27 = firstChild->rect->height;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(288)
						int tmp28 = ::Std_obj::_int(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(288)
						int tmp29 = insertHeight;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(288)
						int tmp30 = (tmp28 - tmp29);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(288)
						Float Height = tmp30;		HX_STACK_VAR(Height,"Height");
						HX_STACK_LINE(288)
						::flixel::math::FlxRect tmp31;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(288)
						{
							HX_STACK_LINE(288)
							::flixel::util::FlxPool_flixel_math_FlxRect tmp32 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(288)
							::flixel::math::FlxRect tmp33 = tmp32->get();		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(288)
							::flixel::math::FlxRect _this = tmp33;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(288)
							_this->x = X;
							HX_STACK_LINE(288)
							_this->y = Y;
							HX_STACK_LINE(288)
							_this->width = insertWidth;
							HX_STACK_LINE(288)
							_this->height = Height;
							HX_STACK_LINE(288)
							tmp31 = _this;
						}
						HX_STACK_LINE(288)
						::flixel::math::FlxRect rect = tmp31;		HX_STACK_VAR(rect,"rect");
						HX_STACK_LINE(288)
						rect->_inPool = false;
						HX_STACK_LINE(288)
						tmp20 = rect;
					}
					HX_STACK_LINE(288)
					::flixel::graphics::atlas::FlxNode tmp21 = ::flixel::graphics::atlas::FlxNode_obj::__new(tmp20,hx::ObjectPtr<OBJ_>(this),null(),null(),null());		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(288)
					secondGrandChild = tmp21;
				}
			}
			else{
				HX_STACK_LINE(294)
				::flixel::math::FlxRect tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(294)
				{
					HX_STACK_LINE(294)
					Float tmp4 = nodeToDivide->rect->x;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(294)
					int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(294)
					Float X = tmp5;		HX_STACK_VAR(X,"X");
					HX_STACK_LINE(294)
					Float tmp6 = nodeToDivide->rect->y;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(294)
					int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(294)
					Float Y = tmp7;		HX_STACK_VAR(Y,"Y");
					HX_STACK_LINE(294)
					Float tmp8 = nodeToDivide->rect->width;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(294)
					int tmp9 = ::Std_obj::_int(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(294)
					Float Width = tmp9;		HX_STACK_VAR(Width,"Width");
					HX_STACK_LINE(294)
					::flixel::math::FlxRect tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(294)
					{
						HX_STACK_LINE(294)
						::flixel::util::FlxPool_flixel_math_FlxRect tmp11 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(294)
						::flixel::math::FlxRect tmp12 = tmp11->get();		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(294)
						::flixel::math::FlxRect _this = tmp12;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(294)
						_this->x = X;
						HX_STACK_LINE(294)
						_this->y = Y;
						HX_STACK_LINE(294)
						_this->width = Width;
						HX_STACK_LINE(294)
						_this->height = insertHeight;
						HX_STACK_LINE(294)
						tmp10 = _this;
					}
					HX_STACK_LINE(294)
					::flixel::math::FlxRect rect = tmp10;		HX_STACK_VAR(rect,"rect");
					HX_STACK_LINE(294)
					rect->_inPool = false;
					HX_STACK_LINE(294)
					tmp3 = rect;
				}
				HX_STACK_LINE(294)
				::flixel::graphics::atlas::FlxNode tmp4 = ::flixel::graphics::atlas::FlxNode_obj::__new(tmp3,hx::ObjectPtr<OBJ_>(this),null(),null(),null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(294)
				firstChild = tmp4;
				HX_STACK_LINE(296)
				Float tmp5 = nodeToDivide->rect->height;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(296)
				int tmp6 = ::Std_obj::_int(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(296)
				int tmp7 = insertHeight;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(296)
				int tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(296)
				bool tmp9 = (tmp8 > (int)0);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(296)
				if ((tmp9)){
					HX_STACK_LINE(298)
					::flixel::math::FlxRect tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(298)
					{
						HX_STACK_LINE(298)
						Float tmp11 = nodeToDivide->rect->x;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(298)
						int tmp12 = ::Std_obj::_int(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(298)
						Float X = tmp12;		HX_STACK_VAR(X,"X");
						HX_STACK_LINE(298)
						Float tmp13 = nodeToDivide->rect->y;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(298)
						int tmp14 = ::Std_obj::_int(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(298)
						int tmp15 = insertHeight;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(298)
						int tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(298)
						Float Y = tmp16;		HX_STACK_VAR(Y,"Y");
						HX_STACK_LINE(298)
						Float tmp17 = nodeToDivide->rect->width;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(298)
						int tmp18 = ::Std_obj::_int(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(298)
						Float Width = tmp18;		HX_STACK_VAR(Width,"Width");
						HX_STACK_LINE(298)
						Float tmp19 = nodeToDivide->rect->height;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(298)
						int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(298)
						int tmp21 = insertHeight;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(298)
						int tmp22 = (tmp20 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(298)
						Float Height = tmp22;		HX_STACK_VAR(Height,"Height");
						HX_STACK_LINE(298)
						::flixel::math::FlxRect tmp23;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(298)
						{
							HX_STACK_LINE(298)
							::flixel::util::FlxPool_flixel_math_FlxRect tmp24 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(298)
							::flixel::math::FlxRect tmp25 = tmp24->get();		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(298)
							::flixel::math::FlxRect _this = tmp25;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(298)
							_this->x = X;
							HX_STACK_LINE(298)
							_this->y = Y;
							HX_STACK_LINE(298)
							_this->width = Width;
							HX_STACK_LINE(298)
							_this->height = Height;
							HX_STACK_LINE(298)
							tmp23 = _this;
						}
						HX_STACK_LINE(298)
						::flixel::math::FlxRect rect = tmp23;		HX_STACK_VAR(rect,"rect");
						HX_STACK_LINE(298)
						rect->_inPool = false;
						HX_STACK_LINE(298)
						tmp10 = rect;
					}
					HX_STACK_LINE(298)
					::flixel::graphics::atlas::FlxNode tmp11 = ::flixel::graphics::atlas::FlxNode_obj::__new(tmp10,hx::ObjectPtr<OBJ_>(this),null(),null(),null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(298)
					secondChild = tmp11;
				}
				HX_STACK_LINE(301)
				::flixel::math::FlxRect tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(301)
				{
					HX_STACK_LINE(301)
					Float tmp11 = firstChild->rect->x;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(301)
					int tmp12 = ::Std_obj::_int(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(301)
					Float X = tmp12;		HX_STACK_VAR(X,"X");
					HX_STACK_LINE(301)
					Float tmp13 = firstChild->rect->y;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(301)
					int tmp14 = ::Std_obj::_int(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(301)
					Float Y = tmp14;		HX_STACK_VAR(Y,"Y");
					HX_STACK_LINE(301)
					::flixel::math::FlxRect tmp15;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(301)
					{
						HX_STACK_LINE(301)
						::flixel::util::FlxPool_flixel_math_FlxRect tmp16 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(301)
						::flixel::math::FlxRect tmp17 = tmp16->get();		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(301)
						::flixel::math::FlxRect _this = tmp17;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(301)
						_this->x = X;
						HX_STACK_LINE(301)
						_this->y = Y;
						HX_STACK_LINE(301)
						_this->width = insertWidth;
						HX_STACK_LINE(301)
						_this->height = insertHeight;
						HX_STACK_LINE(301)
						tmp15 = _this;
					}
					HX_STACK_LINE(301)
					::flixel::math::FlxRect rect = tmp15;		HX_STACK_VAR(rect,"rect");
					HX_STACK_LINE(301)
					rect->_inPool = false;
					HX_STACK_LINE(301)
					tmp10 = rect;
				}
				HX_STACK_LINE(301)
				bool tmp11 = firstGrandChildFilled;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(301)
				::String tmp12 = firstGrandChildKey;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(301)
				bool tmp13 = firstGrandChildRotated;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(301)
				::flixel::graphics::atlas::FlxNode tmp14 = ::flixel::graphics::atlas::FlxNode_obj::__new(tmp10,hx::ObjectPtr<OBJ_>(this),tmp11,tmp12,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(301)
				firstGrandChild = tmp14;
				HX_STACK_LINE(303)
				Float tmp15 = firstChild->rect->width;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(303)
				int tmp16 = ::Std_obj::_int(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(303)
				int tmp17 = insertWidth;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(303)
				int tmp18 = (tmp16 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(303)
				bool tmp19 = (tmp18 > (int)0);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(303)
				if ((tmp19)){
					HX_STACK_LINE(305)
					::flixel::math::FlxRect tmp20;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(305)
					{
						HX_STACK_LINE(305)
						Float tmp21 = firstChild->rect->x;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(305)
						int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(305)
						int tmp23 = insertWidth;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(305)
						int tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(305)
						Float X = tmp24;		HX_STACK_VAR(X,"X");
						HX_STACK_LINE(305)
						Float tmp25 = firstChild->rect->y;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(305)
						int tmp26 = ::Std_obj::_int(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(305)
						Float Y = tmp26;		HX_STACK_VAR(Y,"Y");
						HX_STACK_LINE(305)
						Float tmp27 = firstChild->rect->width;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(305)
						int tmp28 = ::Std_obj::_int(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(305)
						int tmp29 = insertWidth;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(305)
						int tmp30 = (tmp28 - tmp29);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(305)
						Float Width = tmp30;		HX_STACK_VAR(Width,"Width");
						HX_STACK_LINE(305)
						::flixel::math::FlxRect tmp31;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(305)
						{
							HX_STACK_LINE(305)
							::flixel::util::FlxPool_flixel_math_FlxRect tmp32 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(305)
							::flixel::math::FlxRect tmp33 = tmp32->get();		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(305)
							::flixel::math::FlxRect _this = tmp33;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(305)
							_this->x = X;
							HX_STACK_LINE(305)
							_this->y = Y;
							HX_STACK_LINE(305)
							_this->width = Width;
							HX_STACK_LINE(305)
							_this->height = insertHeight;
							HX_STACK_LINE(305)
							tmp31 = _this;
						}
						HX_STACK_LINE(305)
						::flixel::math::FlxRect rect = tmp31;		HX_STACK_VAR(rect,"rect");
						HX_STACK_LINE(305)
						rect->_inPool = false;
						HX_STACK_LINE(305)
						tmp20 = rect;
					}
					HX_STACK_LINE(305)
					::flixel::graphics::atlas::FlxNode tmp21 = ::flixel::graphics::atlas::FlxNode_obj::__new(tmp20,hx::ObjectPtr<OBJ_>(this),null(),null(),null());		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(305)
					secondGrandChild = tmp21;
				}
			}
			HX_STACK_LINE(309)
			firstChild->left = firstGrandChild;
			HX_STACK_LINE(310)
			firstChild->right = secondGrandChild;
			HX_STACK_LINE(312)
			nodeToDivide->left = firstChild;
			HX_STACK_LINE(313)
			nodeToDivide->right = secondChild;
			HX_STACK_LINE(316)
			bool tmp3 = (firstGrandChildKey != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(316)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(316)
			if ((tmp3)){
				HX_STACK_LINE(316)
				tmp4 = (firstGrandChildData != null());
			}
			else{
				HX_STACK_LINE(316)
				tmp4 = false;
			}
			HX_STACK_LINE(316)
			if ((tmp4)){
				HX_STACK_LINE(318)
				this->expandBitmapData();
				HX_STACK_LINE(320)
				bool tmp5 = firstGrandChildRotated;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(320)
				if ((tmp5)){
					HX_STACK_LINE(322)
					::openfl::_legacy::geom::Matrix tmp6 = ::flixel::graphics::atlas::FlxAtlas_obj::matrix;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(322)
					tmp6->identity();
					HX_STACK_LINE(323)
					::openfl::_legacy::geom::Matrix tmp7 = ::flixel::graphics::atlas::FlxAtlas_obj::matrix;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(323)
					Float tmp8 = ::Math_obj::PI;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(323)
					Float tmp9 = (Float(tmp8) / Float((int)2));		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(323)
					tmp7->rotate(tmp9);
					HX_STACK_LINE(324)
					::openfl::_legacy::geom::Matrix tmp10 = ::flixel::graphics::atlas::FlxAtlas_obj::matrix;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(324)
					int tmp11 = firstGrandChildData->get_height();		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(324)
					Float tmp12 = firstGrandChild->rect->x;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(324)
					int tmp13 = ::Std_obj::_int(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(324)
					int tmp14 = (tmp11 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(324)
					Float tmp15 = firstGrandChild->rect->y;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(324)
					int tmp16 = ::Std_obj::_int(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(324)
					tmp10->translate(tmp14,tmp16);
					HX_STACK_LINE(325)
					::openfl::_legacy::display::BitmapData tmp17 = this->bitmapData;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(325)
					::openfl::_legacy::display::BitmapData tmp18 = firstGrandChildData;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(325)
					::openfl::_legacy::geom::Matrix tmp19 = ::flixel::graphics::atlas::FlxAtlas_obj::matrix;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(325)
					tmp17->draw(tmp18,tmp19,null(),null(),null(),null());
				}
				else{
					HX_STACK_LINE(329)
					::openfl::_legacy::geom::Point tmp6 = ::flixel::graphics::atlas::FlxAtlas_obj::point;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(329)
					Float tmp7 = firstGrandChild->rect->x;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(329)
					int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(329)
					Float tmp9 = firstGrandChild->rect->y;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(329)
					int tmp10 = ::Std_obj::_int(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(329)
					tmp6->setTo(tmp8,tmp10);
					HX_STACK_LINE(330)
					::openfl::_legacy::display::BitmapData tmp11 = this->bitmapData;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(330)
					::openfl::_legacy::display::BitmapData tmp12 = firstGrandChildData;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(330)
					::openfl::_legacy::geom::Rectangle tmp13 = firstGrandChildData->get_rect();		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(330)
					::openfl::_legacy::geom::Point tmp14 = ::flixel::graphics::atlas::FlxAtlas_obj::point;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(330)
					tmp11->copyPixels(tmp12,tmp13,tmp14,null(),null(),null());
				}
				HX_STACK_LINE(333)
				::flixel::graphics::atlas::FlxNode tmp6 = firstGrandChild;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(333)
				this->addNodeToAtlasFrames(tmp6);
				HX_STACK_LINE(334)
				::haxe::ds::StringMap tmp7 = this->nodes;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(334)
				::String tmp8 = firstGrandChildKey;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(334)
				::flixel::graphics::atlas::FlxNode tmp9 = firstGrandChild;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(334)
				tmp7->set(tmp8,tmp9);
			}
			HX_STACK_LINE(337)
			::flixel::graphics::atlas::FlxNode tmp5 = firstGrandChild;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(337)
			return tmp5;
		}
		HX_STACK_LINE(340)
		return null();
	}
}


HX_DEFINE_DYNAMIC_FUNC7(FlxAtlas_obj,divideNode,return )

::flixel::graphics::atlas::FlxNode FlxAtlas_obj::insertFirstNodeInRoot( ::openfl::_legacy::display::BitmapData data,::String key){
	HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","insertFirstNodeInRoot",0xea82177f,"flixel.graphics.atlas.FlxAtlas.insertFirstNodeInRoot","flixel/graphics/atlas/FlxAtlas.hx",344,0x03972f50)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(key,"key")
	HX_STACK_LINE(345)
	::flixel::graphics::atlas::FlxNode tmp = this->root;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(345)
	::flixel::graphics::atlas::FlxNode tmp1 = tmp->left;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(345)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(345)
	if ((tmp2)){
		HX_STACK_LINE(347)
		int tmp3 = data->get_width();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(347)
		int tmp4 = this->border;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(347)
		int tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(347)
		int insertWidth = tmp5;		HX_STACK_VAR(insertWidth,"insertWidth");
		HX_STACK_LINE(348)
		int tmp6 = data->get_height();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(348)
		int tmp7 = this->border;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(348)
		int tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(348)
		int insertHeight = tmp8;		HX_STACK_VAR(insertHeight,"insertHeight");
		HX_STACK_LINE(350)
		int rootWidth = insertWidth;		HX_STACK_VAR(rootWidth,"rootWidth");
		HX_STACK_LINE(351)
		int rootHeight = insertHeight;		HX_STACK_VAR(rootHeight,"rootHeight");
		HX_STACK_LINE(353)
		bool tmp9 = this->powerOfTwo;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(353)
		if ((tmp9)){
			HX_STACK_LINE(355)
			int tmp10 = rootWidth;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(355)
			int tmp11 = this->getNextPowerOfTwo(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(355)
			rootWidth = tmp11;
			HX_STACK_LINE(356)
			int tmp12 = rootHeight;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(356)
			int tmp13 = this->getNextPowerOfTwo(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(356)
			rootHeight = tmp13;
		}
		HX_STACK_LINE(359)
		int tmp10 = this->minWidth;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(359)
		int tmp11 = rootWidth;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(359)
		bool tmp12 = (tmp10 > tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(359)
		int tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(359)
		if ((tmp12)){
			HX_STACK_LINE(359)
			tmp13 = this->minWidth;
		}
		else{
			HX_STACK_LINE(359)
			tmp13 = rootWidth;
		}
		HX_STACK_LINE(359)
		rootWidth = tmp13;
		HX_STACK_LINE(360)
		int tmp14 = this->minHeight;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(360)
		int tmp15 = rootHeight;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(360)
		bool tmp16 = (tmp14 > tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(360)
		int tmp17;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(360)
		if ((tmp16)){
			HX_STACK_LINE(360)
			tmp17 = this->minHeight;
		}
		else{
			HX_STACK_LINE(360)
			tmp17 = rootHeight;
		}
		HX_STACK_LINE(360)
		rootHeight = tmp17;
		HX_STACK_LINE(362)
		bool tmp18 = this->powerOfTwo;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(362)
		if ((tmp18)){
			HX_STACK_LINE(364)
			int tmp19 = rootWidth;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(364)
			int tmp20 = this->getNextPowerOfTwo(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(364)
			rootWidth = tmp20;
			HX_STACK_LINE(365)
			int tmp21 = rootHeight;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(365)
			int tmp22 = this->getNextPowerOfTwo(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(365)
			rootHeight = tmp22;
		}
		HX_STACK_LINE(368)
		int tmp19 = this->maxWidth;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(368)
		bool tmp20 = (tmp19 > (int)0);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(368)
		bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(368)
		bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(368)
		if ((tmp21)){
			HX_STACK_LINE(368)
			int tmp23 = rootWidth;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(368)
			int tmp24 = this->maxWidth;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(368)
			int tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(368)
			int tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(368)
			tmp22 = (tmp23 > tmp26);
		}
		else{
			HX_STACK_LINE(368)
			tmp22 = false;
		}
		HX_STACK_LINE(368)
		bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(368)
		bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(368)
		if ((tmp23)){
			HX_STACK_LINE(368)
			int tmp25 = this->maxHeight;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(368)
			int tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(368)
			bool tmp27 = (tmp26 > (int)0);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(368)
			bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(368)
			bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(368)
			if ((tmp29)){
				HX_STACK_LINE(368)
				int tmp30 = rootHeight;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(368)
				int tmp31 = this->maxHeight;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(368)
				int tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(368)
				int tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(368)
				tmp24 = (tmp30 > tmp33);
			}
			else{
				HX_STACK_LINE(368)
				tmp24 = false;
			}
		}
		else{
			HX_STACK_LINE(368)
			tmp24 = true;
		}
		HX_STACK_LINE(368)
		if ((tmp24)){
			HX_STACK_LINE(373)
			return null();
		}
		HX_STACK_LINE(376)
		::flixel::graphics::atlas::FlxNode tmp25 = this->root;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(376)
		int tmp26 = rootWidth;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(376)
		tmp25->set_width(tmp26);
		HX_STACK_LINE(377)
		::flixel::graphics::atlas::FlxNode tmp27 = this->root;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(377)
		int tmp28 = rootHeight;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(377)
		tmp27->set_height(tmp28);
		HX_STACK_LINE(379)
		::flixel::graphics::atlas::FlxNode tmp29 = this->root;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(379)
		int tmp30 = insertWidth;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(379)
		int tmp31 = insertHeight;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(379)
		bool tmp32 = this->needToDivideHorizontally(tmp29,tmp30,tmp31);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(379)
		bool horizontally = tmp32;		HX_STACK_VAR(horizontally,"horizontally");
		HX_STACK_LINE(380)
		::flixel::graphics::atlas::FlxNode tmp33 = this->root;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(380)
		int tmp34 = insertWidth;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(380)
		int tmp35 = insertHeight;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(380)
		bool tmp36 = horizontally;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(380)
		::openfl::_legacy::display::BitmapData tmp37 = data;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(380)
		::String tmp38 = key;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(380)
		::flixel::graphics::atlas::FlxNode tmp39 = this->divideNode(tmp33,tmp34,tmp35,tmp36,tmp37,tmp38,null());		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(380)
		return tmp39;
	}
	HX_STACK_LINE(383)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxAtlas_obj,insertFirstNodeInRoot,return )

::flixel::graphics::atlas::FlxNode FlxAtlas_obj::expand( ::openfl::_legacy::display::BitmapData data,::String key){
	HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","expand",0x67ef7d5b,"flixel.graphics.atlas.FlxAtlas.expand","flixel/graphics/atlas/FlxAtlas.hx",387,0x03972f50)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(key,"key")
	HX_STACK_LINE(388)
	::flixel::graphics::atlas::FlxNode tmp = this->root;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(388)
	::flixel::graphics::atlas::FlxNode tmp1 = tmp->right;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(388)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(388)
	if ((tmp2)){
		HX_STACK_LINE(390)
		int tmp3 = data->get_width();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(390)
		int tmp4 = this->border;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(390)
		int tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(390)
		int insertWidth = tmp5;		HX_STACK_VAR(insertWidth,"insertWidth");
		HX_STACK_LINE(391)
		int tmp6 = data->get_height();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(391)
		int tmp7 = this->border;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(391)
		int tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(391)
		int insertHeight = tmp8;		HX_STACK_VAR(insertHeight,"insertHeight");
		HX_STACK_LINE(394)
		::flixel::graphics::atlas::FlxNode tmp9 = this->root;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(394)
		Float tmp10 = tmp9->rect->width;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(394)
		int tmp11 = ::Std_obj::_int(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(394)
		int tmp12 = insertWidth;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(394)
		int tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(394)
		int addRightWidth = tmp13;		HX_STACK_VAR(addRightWidth,"addRightWidth");
		HX_STACK_LINE(395)
		::flixel::graphics::atlas::FlxNode tmp14 = this->root;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(395)
		Float tmp15 = tmp14->rect->height;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(395)
		int tmp16 = ::Std_obj::_int(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(395)
		int tmp17 = insertHeight;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(395)
		Float tmp18 = ::Math_obj::max(tmp16,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(395)
		int tmp19 = ::Std_obj::_int(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(395)
		int addRightHeight = tmp19;		HX_STACK_VAR(addRightHeight,"addRightHeight");
		HX_STACK_LINE(397)
		::flixel::graphics::atlas::FlxNode tmp20 = this->root;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(397)
		Float tmp21 = tmp20->rect->width;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(397)
		int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(397)
		int tmp23 = insertWidth;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(397)
		Float tmp24 = ::Math_obj::max(tmp22,tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(397)
		int tmp25 = ::Std_obj::_int(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(397)
		int addBottomWidth = tmp25;		HX_STACK_VAR(addBottomWidth,"addBottomWidth");
		HX_STACK_LINE(398)
		::flixel::graphics::atlas::FlxNode tmp26 = this->root;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(398)
		Float tmp27 = tmp26->rect->height;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(398)
		int tmp28 = ::Std_obj::_int(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(398)
		int tmp29 = insertHeight;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(398)
		int tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(398)
		int addBottomHeight = tmp30;		HX_STACK_VAR(addBottomHeight,"addBottomHeight");
		HX_STACK_LINE(400)
		int addRightWidthRotate = addRightWidth;		HX_STACK_VAR(addRightWidthRotate,"addRightWidthRotate");
		HX_STACK_LINE(401)
		int addRightHeightRotate = addRightHeight;		HX_STACK_VAR(addRightHeightRotate,"addRightHeightRotate");
		HX_STACK_LINE(403)
		int addBottomWidthRotate = addBottomWidth;		HX_STACK_VAR(addBottomWidthRotate,"addBottomWidthRotate");
		HX_STACK_LINE(404)
		int addBottomHeightRotate = addBottomHeight;		HX_STACK_VAR(addBottomHeightRotate,"addBottomHeightRotate");
		HX_STACK_LINE(406)
		bool tmp31 = this->allowRotation;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(406)
		if ((tmp31)){
			HX_STACK_LINE(408)
			::flixel::graphics::atlas::FlxNode tmp32 = this->root;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(408)
			Float tmp33 = tmp32->rect->width;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(408)
			int tmp34 = ::Std_obj::_int(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(408)
			int tmp35 = insertHeight;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(408)
			int tmp36 = (tmp34 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(408)
			addRightWidthRotate = tmp36;
			HX_STACK_LINE(409)
			::flixel::graphics::atlas::FlxNode tmp37 = this->root;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(409)
			Float tmp38 = tmp37->rect->height;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(409)
			int tmp39 = ::Std_obj::_int(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(409)
			int tmp40 = insertWidth;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(409)
			Float tmp41 = ::Math_obj::max(tmp39,tmp40);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(409)
			int tmp42 = ::Std_obj::_int(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(409)
			addRightHeightRotate = tmp42;
			HX_STACK_LINE(411)
			::flixel::graphics::atlas::FlxNode tmp43 = this->root;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(411)
			Float tmp44 = tmp43->rect->width;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(411)
			int tmp45 = ::Std_obj::_int(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(411)
			int tmp46 = insertHeight;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(411)
			Float tmp47 = ::Math_obj::max(tmp45,tmp46);		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(411)
			int tmp48 = ::Std_obj::_int(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(411)
			addBottomWidthRotate = tmp48;
			HX_STACK_LINE(412)
			::flixel::graphics::atlas::FlxNode tmp49 = this->root;		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(412)
			Float tmp50 = tmp49->rect->height;		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(412)
			int tmp51 = ::Std_obj::_int(tmp50);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(412)
			int tmp52 = insertWidth;		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(412)
			int tmp53 = (tmp51 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(412)
			addBottomHeightRotate = tmp53;
		}
		HX_STACK_LINE(415)
		bool tmp32 = this->powerOfTwo;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(415)
		if ((tmp32)){
			HX_STACK_LINE(417)
			int tmp33 = addRightWidth;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(417)
			int tmp34 = this->getNextPowerOfTwo(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(417)
			int tmp35 = addRightWidth = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(417)
			addRightWidthRotate = tmp35;
			HX_STACK_LINE(418)
			int tmp36 = addRightHeight;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(418)
			int tmp37 = this->getNextPowerOfTwo(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(418)
			int tmp38 = addRightHeight = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(418)
			addRightHeightRotate = tmp38;
			HX_STACK_LINE(419)
			int tmp39 = addBottomWidth;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(419)
			int tmp40 = this->getNextPowerOfTwo(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(419)
			int tmp41 = addBottomWidth = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(419)
			addBottomWidthRotate = tmp41;
			HX_STACK_LINE(420)
			int tmp42 = addBottomHeight;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(420)
			int tmp43 = this->getNextPowerOfTwo(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(420)
			int tmp44 = addBottomHeight = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(420)
			addBottomHeightRotate = tmp44;
			HX_STACK_LINE(422)
			bool tmp45 = this->allowRotation;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(422)
			if ((tmp45)){
				HX_STACK_LINE(424)
				int tmp46 = addRightWidthRotate;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(424)
				int tmp47 = this->getNextPowerOfTwo(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(424)
				addRightWidthRotate = tmp47;
				HX_STACK_LINE(425)
				int tmp48 = addRightHeightRotate;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(425)
				int tmp49 = this->getNextPowerOfTwo(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(425)
				addRightHeightRotate = tmp49;
				HX_STACK_LINE(426)
				int tmp50 = addBottomWidthRotate;		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(426)
				int tmp51 = this->getNextPowerOfTwo(tmp50);		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(426)
				addBottomWidthRotate = tmp51;
				HX_STACK_LINE(427)
				int tmp52 = addBottomHeightRotate;		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(427)
				int tmp53 = this->getNextPowerOfTwo(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(427)
				addBottomHeightRotate = tmp53;
			}
		}
		HX_STACK_LINE(432)
		bool canExpandRight = true;		HX_STACK_VAR(canExpandRight,"canExpandRight");
		HX_STACK_LINE(433)
		bool canExpandBottom = true;		HX_STACK_VAR(canExpandBottom,"canExpandBottom");
		HX_STACK_LINE(435)
		bool tmp33 = this->allowRotation;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(435)
		bool canExpandRightRotate = tmp33;		HX_STACK_VAR(canExpandRightRotate,"canExpandRightRotate");
		HX_STACK_LINE(436)
		bool tmp34 = this->allowRotation;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(436)
		bool canExpandBottomRotate = tmp34;		HX_STACK_VAR(canExpandBottomRotate,"canExpandBottomRotate");
		HX_STACK_LINE(438)
		int tmp35 = this->maxWidth;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(438)
		bool tmp36 = (tmp35 > (int)0);		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(438)
		bool tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(438)
		bool tmp38;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(438)
		if ((tmp37)){
			HX_STACK_LINE(438)
			int tmp39 = addRightWidth;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(438)
			int tmp40 = this->maxWidth;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(438)
			int tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(438)
			int tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(438)
			tmp38 = (tmp39 > tmp42);
		}
		else{
			HX_STACK_LINE(438)
			tmp38 = false;
		}
		HX_STACK_LINE(438)
		bool tmp39 = !(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(438)
		bool tmp40;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(438)
		if ((tmp39)){
			HX_STACK_LINE(438)
			int tmp41 = this->maxHeight;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(438)
			int tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(438)
			bool tmp43 = (tmp42 > (int)0);		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(438)
			bool tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(438)
			bool tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(438)
			if ((tmp45)){
				HX_STACK_LINE(438)
				int tmp46 = addRightHeight;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(438)
				int tmp47 = this->maxHeight;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(438)
				int tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(438)
				int tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(438)
				tmp40 = (tmp46 > tmp49);
			}
			else{
				HX_STACK_LINE(438)
				tmp40 = false;
			}
		}
		else{
			HX_STACK_LINE(438)
			tmp40 = true;
		}
		HX_STACK_LINE(438)
		if ((tmp40)){
			HX_STACK_LINE(439)
			canExpandRight = false;
		}
		HX_STACK_LINE(441)
		int tmp41 = this->maxWidth;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(441)
		bool tmp42 = (tmp41 > (int)0);		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(441)
		bool tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(441)
		bool tmp44;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(441)
		if ((tmp43)){
			HX_STACK_LINE(441)
			int tmp45 = addBottomWidth;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(441)
			int tmp46 = this->maxWidth;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(441)
			int tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(441)
			int tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(441)
			tmp44 = (tmp45 > tmp48);
		}
		else{
			HX_STACK_LINE(441)
			tmp44 = false;
		}
		HX_STACK_LINE(441)
		bool tmp45 = !(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(441)
		bool tmp46;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(441)
		if ((tmp45)){
			HX_STACK_LINE(441)
			int tmp47 = this->maxHeight;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(441)
			int tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(441)
			bool tmp49 = (tmp48 > (int)0);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(441)
			bool tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(441)
			bool tmp51 = tmp50;		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(441)
			if ((tmp51)){
				HX_STACK_LINE(441)
				int tmp52 = addBottomHeight;		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(441)
				int tmp53 = this->maxHeight;		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(441)
				int tmp54 = tmp53;		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(441)
				int tmp55 = tmp54;		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(441)
				tmp46 = (tmp52 > tmp55);
			}
			else{
				HX_STACK_LINE(441)
				tmp46 = false;
			}
		}
		else{
			HX_STACK_LINE(441)
			tmp46 = true;
		}
		HX_STACK_LINE(441)
		if ((tmp46)){
			HX_STACK_LINE(442)
			canExpandBottom = false;
		}
		HX_STACK_LINE(444)
		int tmp47 = this->maxWidth;		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(444)
		bool tmp48 = (tmp47 > (int)0);		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(444)
		bool tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(444)
		bool tmp50;		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(444)
		if ((tmp49)){
			HX_STACK_LINE(444)
			int tmp51 = addRightWidthRotate;		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(444)
			int tmp52 = this->maxWidth;		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(444)
			int tmp53 = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(444)
			int tmp54 = tmp53;		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(444)
			tmp50 = (tmp51 > tmp54);
		}
		else{
			HX_STACK_LINE(444)
			tmp50 = false;
		}
		HX_STACK_LINE(444)
		bool tmp51 = !(tmp50);		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(444)
		bool tmp52;		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(444)
		if ((tmp51)){
			HX_STACK_LINE(444)
			int tmp53 = this->maxHeight;		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(444)
			int tmp54 = tmp53;		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(444)
			bool tmp55 = (tmp54 > (int)0);		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(444)
			bool tmp56 = tmp55;		HX_STACK_VAR(tmp56,"tmp56");
			HX_STACK_LINE(444)
			bool tmp57 = tmp56;		HX_STACK_VAR(tmp57,"tmp57");
			HX_STACK_LINE(444)
			if ((tmp57)){
				HX_STACK_LINE(444)
				int tmp58 = addRightHeightRotate;		HX_STACK_VAR(tmp58,"tmp58");
				HX_STACK_LINE(444)
				int tmp59 = this->maxHeight;		HX_STACK_VAR(tmp59,"tmp59");
				HX_STACK_LINE(444)
				int tmp60 = tmp59;		HX_STACK_VAR(tmp60,"tmp60");
				HX_STACK_LINE(444)
				int tmp61 = tmp60;		HX_STACK_VAR(tmp61,"tmp61");
				HX_STACK_LINE(444)
				tmp52 = (tmp58 > tmp61);
			}
			else{
				HX_STACK_LINE(444)
				tmp52 = false;
			}
		}
		else{
			HX_STACK_LINE(444)
			tmp52 = true;
		}
		HX_STACK_LINE(444)
		if ((tmp52)){
			HX_STACK_LINE(445)
			canExpandRightRotate = false;
		}
		HX_STACK_LINE(447)
		int tmp53 = this->maxWidth;		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(447)
		bool tmp54 = (tmp53 > (int)0);		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(447)
		bool tmp55 = tmp54;		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(447)
		bool tmp56;		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(447)
		if ((tmp55)){
			HX_STACK_LINE(447)
			int tmp57 = addBottomWidthRotate;		HX_STACK_VAR(tmp57,"tmp57");
			HX_STACK_LINE(447)
			int tmp58 = this->maxWidth;		HX_STACK_VAR(tmp58,"tmp58");
			HX_STACK_LINE(447)
			int tmp59 = tmp58;		HX_STACK_VAR(tmp59,"tmp59");
			HX_STACK_LINE(447)
			int tmp60 = tmp59;		HX_STACK_VAR(tmp60,"tmp60");
			HX_STACK_LINE(447)
			tmp56 = (tmp57 > tmp60);
		}
		else{
			HX_STACK_LINE(447)
			tmp56 = false;
		}
		HX_STACK_LINE(447)
		bool tmp57 = !(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(447)
		bool tmp58;		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(447)
		if ((tmp57)){
			HX_STACK_LINE(447)
			int tmp59 = this->maxHeight;		HX_STACK_VAR(tmp59,"tmp59");
			HX_STACK_LINE(447)
			int tmp60 = tmp59;		HX_STACK_VAR(tmp60,"tmp60");
			HX_STACK_LINE(447)
			bool tmp61 = (tmp60 > (int)0);		HX_STACK_VAR(tmp61,"tmp61");
			HX_STACK_LINE(447)
			bool tmp62 = tmp61;		HX_STACK_VAR(tmp62,"tmp62");
			HX_STACK_LINE(447)
			bool tmp63 = tmp62;		HX_STACK_VAR(tmp63,"tmp63");
			HX_STACK_LINE(447)
			if ((tmp63)){
				HX_STACK_LINE(447)
				int tmp64 = addBottomHeightRotate;		HX_STACK_VAR(tmp64,"tmp64");
				HX_STACK_LINE(447)
				int tmp65 = this->maxHeight;		HX_STACK_VAR(tmp65,"tmp65");
				HX_STACK_LINE(447)
				int tmp66 = tmp65;		HX_STACK_VAR(tmp66,"tmp66");
				HX_STACK_LINE(447)
				int tmp67 = tmp66;		HX_STACK_VAR(tmp67,"tmp67");
				HX_STACK_LINE(447)
				tmp58 = (tmp64 > tmp67);
			}
			else{
				HX_STACK_LINE(447)
				tmp58 = false;
			}
		}
		else{
			HX_STACK_LINE(447)
			tmp58 = true;
		}
		HX_STACK_LINE(447)
		if ((tmp58)){
			HX_STACK_LINE(448)
			canExpandBottomRotate = false;
		}
		HX_STACK_LINE(450)
		bool tmp59 = canExpandRight;		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(450)
		bool tmp60 = tmp59;		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(450)
		bool tmp61 = !(tmp60);		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(450)
		bool tmp62 = tmp61;		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(450)
		bool tmp63;		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(450)
		if ((tmp62)){
			HX_STACK_LINE(450)
			bool tmp64 = canExpandBottom;		HX_STACK_VAR(tmp64,"tmp64");
			HX_STACK_LINE(450)
			bool tmp65 = tmp64;		HX_STACK_VAR(tmp65,"tmp65");
			HX_STACK_LINE(450)
			bool tmp66 = tmp65;		HX_STACK_VAR(tmp66,"tmp66");
			HX_STACK_LINE(450)
			tmp63 = !(tmp66);
		}
		else{
			HX_STACK_LINE(450)
			tmp63 = false;
		}
		HX_STACK_LINE(450)
		bool tmp64 = tmp63;		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(450)
		bool tmp65;		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(450)
		if ((tmp64)){
			HX_STACK_LINE(450)
			bool tmp66 = canExpandRightRotate;		HX_STACK_VAR(tmp66,"tmp66");
			HX_STACK_LINE(450)
			bool tmp67 = tmp66;		HX_STACK_VAR(tmp67,"tmp67");
			HX_STACK_LINE(450)
			bool tmp68 = tmp67;		HX_STACK_VAR(tmp68,"tmp68");
			HX_STACK_LINE(450)
			tmp65 = !(tmp68);
		}
		else{
			HX_STACK_LINE(450)
			tmp65 = false;
		}
		HX_STACK_LINE(450)
		bool tmp66;		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(450)
		if ((tmp65)){
			HX_STACK_LINE(450)
			bool tmp67 = canExpandBottomRotate;		HX_STACK_VAR(tmp67,"tmp67");
			HX_STACK_LINE(450)
			bool tmp68 = tmp67;		HX_STACK_VAR(tmp68,"tmp68");
			HX_STACK_LINE(450)
			tmp66 = !(tmp68);
		}
		else{
			HX_STACK_LINE(450)
			tmp66 = false;
		}
		HX_STACK_LINE(450)
		if ((tmp66)){
			HX_STACK_LINE(455)
			return null();
		}
		HX_STACK_LINE(460)
		int tmp67 = (addRightWidth * addRightHeight);		HX_STACK_VAR(tmp67,"tmp67");
		HX_STACK_LINE(460)
		int addRightArea = tmp67;		HX_STACK_VAR(addRightArea,"addRightArea");
		HX_STACK_LINE(461)
		int tmp68 = (addBottomWidth * addBottomHeight);		HX_STACK_VAR(tmp68,"tmp68");
		HX_STACK_LINE(461)
		int addBottomArea = tmp68;		HX_STACK_VAR(addBottomArea,"addBottomArea");
		HX_STACK_LINE(463)
		int tmp69 = (addRightWidthRotate * addRightHeightRotate);		HX_STACK_VAR(tmp69,"tmp69");
		HX_STACK_LINE(463)
		int addRightAreaRotate = tmp69;		HX_STACK_VAR(addRightAreaRotate,"addRightAreaRotate");
		HX_STACK_LINE(464)
		int tmp70 = (addBottomWidthRotate * addBottomHeightRotate);		HX_STACK_VAR(tmp70,"tmp70");
		HX_STACK_LINE(464)
		int addBottomAreaRotate = tmp70;		HX_STACK_VAR(addBottomAreaRotate,"addBottomAreaRotate");
		HX_STACK_LINE(466)
		bool rotateRight = false;		HX_STACK_VAR(rotateRight,"rotateRight");
		HX_STACK_LINE(467)
		bool rotateBottom = false;		HX_STACK_VAR(rotateBottom,"rotateBottom");
		HX_STACK_LINE(468)
		bool rotateNode = false;		HX_STACK_VAR(rotateNode,"rotateNode");
		HX_STACK_LINE(470)
		bool tmp71 = canExpandRight;		HX_STACK_VAR(tmp71,"tmp71");
		HX_STACK_LINE(470)
		bool tmp72 = tmp71;		HX_STACK_VAR(tmp72,"tmp72");
		HX_STACK_LINE(470)
		bool tmp73;		HX_STACK_VAR(tmp73,"tmp73");
		HX_STACK_LINE(470)
		if ((tmp72)){
			HX_STACK_LINE(470)
			tmp73 = canExpandRightRotate;
		}
		else{
			HX_STACK_LINE(470)
			tmp73 = false;
		}
		HX_STACK_LINE(470)
		bool tmp74 = tmp73;		HX_STACK_VAR(tmp74,"tmp74");
		HX_STACK_LINE(470)
		bool tmp75;		HX_STACK_VAR(tmp75,"tmp75");
		HX_STACK_LINE(470)
		if ((tmp74)){
			HX_STACK_LINE(470)
			tmp75 = (addRightArea > addRightAreaRotate);
		}
		else{
			HX_STACK_LINE(470)
			tmp75 = false;
		}
		HX_STACK_LINE(470)
		bool tmp76 = !(tmp75);		HX_STACK_VAR(tmp76,"tmp76");
		HX_STACK_LINE(470)
		bool tmp77;		HX_STACK_VAR(tmp77,"tmp77");
		HX_STACK_LINE(470)
		if ((tmp76)){
			HX_STACK_LINE(470)
			bool tmp78 = canExpandRight;		HX_STACK_VAR(tmp78,"tmp78");
			HX_STACK_LINE(470)
			bool tmp79 = tmp78;		HX_STACK_VAR(tmp79,"tmp79");
			HX_STACK_LINE(470)
			bool tmp80 = tmp79;		HX_STACK_VAR(tmp80,"tmp80");
			HX_STACK_LINE(470)
			bool tmp81 = !(tmp80);		HX_STACK_VAR(tmp81,"tmp81");
			HX_STACK_LINE(470)
			bool tmp82 = tmp81;		HX_STACK_VAR(tmp82,"tmp82");
			HX_STACK_LINE(470)
			bool tmp83 = tmp82;		HX_STACK_VAR(tmp83,"tmp83");
			HX_STACK_LINE(470)
			if ((tmp83)){
				HX_STACK_LINE(470)
				tmp77 = canExpandRightRotate;
			}
			else{
				HX_STACK_LINE(470)
				tmp77 = false;
			}
		}
		else{
			HX_STACK_LINE(470)
			tmp77 = true;
		}
		HX_STACK_LINE(470)
		if ((tmp77)){
			HX_STACK_LINE(472)
			addRightArea = addBottomAreaRotate;
			HX_STACK_LINE(473)
			addRightWidth = addRightWidthRotate;
			HX_STACK_LINE(474)
			addRightHeight = addRightHeightRotate;
			HX_STACK_LINE(475)
			canExpandRight = true;
			HX_STACK_LINE(476)
			rotateRight = true;
		}
		HX_STACK_LINE(479)
		bool tmp78 = canExpandBottom;		HX_STACK_VAR(tmp78,"tmp78");
		HX_STACK_LINE(479)
		bool tmp79 = tmp78;		HX_STACK_VAR(tmp79,"tmp79");
		HX_STACK_LINE(479)
		bool tmp80;		HX_STACK_VAR(tmp80,"tmp80");
		HX_STACK_LINE(479)
		if ((tmp79)){
			HX_STACK_LINE(479)
			tmp80 = canExpandBottomRotate;
		}
		else{
			HX_STACK_LINE(479)
			tmp80 = false;
		}
		HX_STACK_LINE(479)
		bool tmp81 = tmp80;		HX_STACK_VAR(tmp81,"tmp81");
		HX_STACK_LINE(479)
		bool tmp82;		HX_STACK_VAR(tmp82,"tmp82");
		HX_STACK_LINE(479)
		if ((tmp81)){
			HX_STACK_LINE(479)
			tmp82 = (addBottomArea > addBottomAreaRotate);
		}
		else{
			HX_STACK_LINE(479)
			tmp82 = false;
		}
		HX_STACK_LINE(479)
		bool tmp83 = !(tmp82);		HX_STACK_VAR(tmp83,"tmp83");
		HX_STACK_LINE(479)
		bool tmp84;		HX_STACK_VAR(tmp84,"tmp84");
		HX_STACK_LINE(479)
		if ((tmp83)){
			HX_STACK_LINE(479)
			bool tmp85 = canExpandBottom;		HX_STACK_VAR(tmp85,"tmp85");
			HX_STACK_LINE(479)
			bool tmp86 = tmp85;		HX_STACK_VAR(tmp86,"tmp86");
			HX_STACK_LINE(479)
			bool tmp87 = tmp86;		HX_STACK_VAR(tmp87,"tmp87");
			HX_STACK_LINE(479)
			bool tmp88 = !(tmp87);		HX_STACK_VAR(tmp88,"tmp88");
			HX_STACK_LINE(479)
			bool tmp89 = tmp88;		HX_STACK_VAR(tmp89,"tmp89");
			HX_STACK_LINE(479)
			bool tmp90 = tmp89;		HX_STACK_VAR(tmp90,"tmp90");
			HX_STACK_LINE(479)
			if ((tmp90)){
				HX_STACK_LINE(479)
				tmp84 = canExpandBottomRotate;
			}
			else{
				HX_STACK_LINE(479)
				tmp84 = false;
			}
		}
		else{
			HX_STACK_LINE(479)
			tmp84 = true;
		}
		HX_STACK_LINE(479)
		if ((tmp84)){
			HX_STACK_LINE(481)
			addBottomArea = addBottomAreaRotate;
			HX_STACK_LINE(482)
			addBottomWidth = addBottomWidthRotate;
			HX_STACK_LINE(483)
			addBottomHeight = addBottomHeightRotate;
			HX_STACK_LINE(484)
			canExpandBottom = true;
			HX_STACK_LINE(485)
			rotateBottom = true;
		}
		HX_STACK_LINE(488)
		bool tmp85 = canExpandRight;		HX_STACK_VAR(tmp85,"tmp85");
		HX_STACK_LINE(488)
		bool tmp86 = tmp85;		HX_STACK_VAR(tmp86,"tmp86");
		HX_STACK_LINE(488)
		bool tmp87 = !(tmp86);		HX_STACK_VAR(tmp87,"tmp87");
		HX_STACK_LINE(488)
		bool tmp88;		HX_STACK_VAR(tmp88,"tmp88");
		HX_STACK_LINE(488)
		if ((tmp87)){
			HX_STACK_LINE(488)
			tmp88 = canExpandBottom;
		}
		else{
			HX_STACK_LINE(488)
			tmp88 = false;
		}
		HX_STACK_LINE(488)
		if ((tmp88)){
			HX_STACK_LINE(490)
			int tmp89 = (addBottomArea + (int)1);		HX_STACK_VAR(tmp89,"tmp89");
			HX_STACK_LINE(490)
			addRightArea = tmp89;
			HX_STACK_LINE(491)
			rotateNode = rotateRight;
		}
		else{
			HX_STACK_LINE(493)
			bool tmp89 = canExpandRight;		HX_STACK_VAR(tmp89,"tmp89");
			HX_STACK_LINE(493)
			bool tmp90;		HX_STACK_VAR(tmp90,"tmp90");
			HX_STACK_LINE(493)
			if ((tmp89)){
				HX_STACK_LINE(493)
				bool tmp91 = canExpandBottom;		HX_STACK_VAR(tmp91,"tmp91");
				HX_STACK_LINE(493)
				bool tmp92 = tmp91;		HX_STACK_VAR(tmp92,"tmp92");
				HX_STACK_LINE(493)
				tmp90 = !(tmp92);
			}
			else{
				HX_STACK_LINE(493)
				tmp90 = false;
			}
			HX_STACK_LINE(493)
			if ((tmp90)){
				HX_STACK_LINE(495)
				int tmp91 = (addRightArea + (int)1);		HX_STACK_VAR(tmp91,"tmp91");
				HX_STACK_LINE(495)
				addBottomArea = tmp91;
				HX_STACK_LINE(496)
				rotateNode = rotateBottom;
			}
		}
		HX_STACK_LINE(499)
		::flixel::graphics::atlas::FlxNode dataNode = null();		HX_STACK_VAR(dataNode,"dataNode");
		HX_STACK_LINE(500)
		::flixel::graphics::atlas::FlxNode tmp89 = this->root;		HX_STACK_VAR(tmp89,"tmp89");
		HX_STACK_LINE(500)
		::flixel::graphics::atlas::FlxNode temp = tmp89;		HX_STACK_VAR(temp,"temp");
		HX_STACK_LINE(501)
		int insertNodeWidth = insertWidth;		HX_STACK_VAR(insertNodeWidth,"insertNodeWidth");
		HX_STACK_LINE(502)
		int insertNodeHeight = insertHeight;		HX_STACK_VAR(insertNodeHeight,"insertNodeHeight");
		HX_STACK_LINE(505)
		bool tmp90 = (addBottomArea >= addRightArea);		HX_STACK_VAR(tmp90,"tmp90");
		HX_STACK_LINE(505)
		if ((tmp90)){
			HX_STACK_LINE(507)
			bool tmp91 = rotateRight;		HX_STACK_VAR(tmp91,"tmp91");
			HX_STACK_LINE(507)
			if ((tmp91)){
				HX_STACK_LINE(509)
				insertNodeWidth = insertHeight;
				HX_STACK_LINE(510)
				insertNodeHeight = insertWidth;
			}
			HX_STACK_LINE(513)
			Float tmp92 = temp->rect->width;		HX_STACK_VAR(tmp92,"tmp92");
			HX_STACK_LINE(513)
			int tmp93 = ::Std_obj::_int(tmp92);		HX_STACK_VAR(tmp93,"tmp93");
			HX_STACK_LINE(513)
			int tmp94 = insertNodeWidth;		HX_STACK_VAR(tmp94,"tmp94");
			HX_STACK_LINE(513)
			int tmp95 = (tmp93 + tmp94);		HX_STACK_VAR(tmp95,"tmp95");
			HX_STACK_LINE(513)
			Float tmp96 = temp->rect->height;		HX_STACK_VAR(tmp96,"tmp96");
			HX_STACK_LINE(513)
			int tmp97 = ::Std_obj::_int(tmp96);		HX_STACK_VAR(tmp97,"tmp97");
			HX_STACK_LINE(513)
			int tmp98 = insertNodeHeight;		HX_STACK_VAR(tmp98,"tmp98");
			HX_STACK_LINE(513)
			Float tmp99 = ::Math_obj::max(tmp97,tmp98);		HX_STACK_VAR(tmp99,"tmp99");
			HX_STACK_LINE(513)
			this->expandRoot(tmp95,tmp99,true,null());
			HX_STACK_LINE(514)
			::flixel::graphics::atlas::FlxNode tmp100 = this->root;		HX_STACK_VAR(tmp100,"tmp100");
			HX_STACK_LINE(514)
			::flixel::graphics::atlas::FlxNode tmp101 = tmp100->right;		HX_STACK_VAR(tmp101,"tmp101");
			HX_STACK_LINE(514)
			int tmp102 = insertNodeWidth;		HX_STACK_VAR(tmp102,"tmp102");
			HX_STACK_LINE(514)
			int tmp103 = insertNodeHeight;		HX_STACK_VAR(tmp103,"tmp103");
			HX_STACK_LINE(514)
			::openfl::_legacy::display::BitmapData tmp104 = data;		HX_STACK_VAR(tmp104,"tmp104");
			HX_STACK_LINE(514)
			::String tmp105 = key;		HX_STACK_VAR(tmp105,"tmp105");
			HX_STACK_LINE(514)
			bool tmp106 = rotateRight;		HX_STACK_VAR(tmp106,"tmp106");
			HX_STACK_LINE(514)
			::flixel::graphics::atlas::FlxNode tmp107 = this->divideNode(tmp101,tmp102,tmp103,true,tmp104,tmp105,tmp106);		HX_STACK_VAR(tmp107,"tmp107");
			HX_STACK_LINE(514)
			dataNode = tmp107;
			HX_STACK_LINE(515)
			int tmp108 = addRightWidth;		HX_STACK_VAR(tmp108,"tmp108");
			HX_STACK_LINE(515)
			int tmp109 = addRightHeight;		HX_STACK_VAR(tmp109,"tmp109");
			HX_STACK_LINE(515)
			this->expandRoot(tmp108,tmp109,false,true);
		}
		else{
			HX_STACK_LINE(519)
			bool tmp91 = rotateBottom;		HX_STACK_VAR(tmp91,"tmp91");
			HX_STACK_LINE(519)
			if ((tmp91)){
				HX_STACK_LINE(521)
				insertNodeWidth = insertHeight;
				HX_STACK_LINE(522)
				insertNodeHeight = insertWidth;
			}
			HX_STACK_LINE(525)
			Float tmp92 = temp->rect->width;		HX_STACK_VAR(tmp92,"tmp92");
			HX_STACK_LINE(525)
			int tmp93 = ::Std_obj::_int(tmp92);		HX_STACK_VAR(tmp93,"tmp93");
			HX_STACK_LINE(525)
			int tmp94 = insertNodeWidth;		HX_STACK_VAR(tmp94,"tmp94");
			HX_STACK_LINE(525)
			Float tmp95 = ::Math_obj::max(tmp93,tmp94);		HX_STACK_VAR(tmp95,"tmp95");
			HX_STACK_LINE(525)
			Float tmp96 = temp->rect->height;		HX_STACK_VAR(tmp96,"tmp96");
			HX_STACK_LINE(525)
			int tmp97 = ::Std_obj::_int(tmp96);		HX_STACK_VAR(tmp97,"tmp97");
			HX_STACK_LINE(525)
			int tmp98 = insertNodeHeight;		HX_STACK_VAR(tmp98,"tmp98");
			HX_STACK_LINE(525)
			int tmp99 = (tmp97 + tmp98);		HX_STACK_VAR(tmp99,"tmp99");
			HX_STACK_LINE(525)
			this->expandRoot(tmp95,tmp99,false,null());
			HX_STACK_LINE(526)
			::flixel::graphics::atlas::FlxNode tmp100 = this->root;		HX_STACK_VAR(tmp100,"tmp100");
			HX_STACK_LINE(526)
			::flixel::graphics::atlas::FlxNode tmp101 = tmp100->right;		HX_STACK_VAR(tmp101,"tmp101");
			HX_STACK_LINE(526)
			int tmp102 = insertNodeWidth;		HX_STACK_VAR(tmp102,"tmp102");
			HX_STACK_LINE(526)
			int tmp103 = insertNodeHeight;		HX_STACK_VAR(tmp103,"tmp103");
			HX_STACK_LINE(526)
			::openfl::_legacy::display::BitmapData tmp104 = data;		HX_STACK_VAR(tmp104,"tmp104");
			HX_STACK_LINE(526)
			::String tmp105 = key;		HX_STACK_VAR(tmp105,"tmp105");
			HX_STACK_LINE(526)
			bool tmp106 = rotateBottom;		HX_STACK_VAR(tmp106,"tmp106");
			HX_STACK_LINE(526)
			::flixel::graphics::atlas::FlxNode tmp107 = this->divideNode(tmp101,tmp102,tmp103,true,tmp104,tmp105,tmp106);		HX_STACK_VAR(tmp107,"tmp107");
			HX_STACK_LINE(526)
			dataNode = tmp107;
			HX_STACK_LINE(527)
			int tmp108 = addBottomWidth;		HX_STACK_VAR(tmp108,"tmp108");
			HX_STACK_LINE(527)
			int tmp109 = addBottomHeight;		HX_STACK_VAR(tmp109,"tmp109");
			HX_STACK_LINE(527)
			this->expandRoot(tmp108,tmp109,false,true);
		}
		HX_STACK_LINE(530)
		::flixel::graphics::atlas::FlxNode tmp91 = dataNode;		HX_STACK_VAR(tmp91,"tmp91");
		HX_STACK_LINE(530)
		return tmp91;
	}
	HX_STACK_LINE(533)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxAtlas_obj,expand,return )

Void FlxAtlas_obj::expandRoot( Float newWidth,Float newHeight,bool divideHorizontally,hx::Null< bool >  __o_decideHowToDivide){
bool decideHowToDivide = __o_decideHowToDivide.Default(false);
	HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","expandRoot",0x3df0e11d,"flixel.graphics.atlas.FlxAtlas.expandRoot","flixel/graphics/atlas/FlxAtlas.hx",537,0x03972f50)
	HX_STACK_THIS(this)
	HX_STACK_ARG(newWidth,"newWidth")
	HX_STACK_ARG(newHeight,"newHeight")
	HX_STACK_ARG(divideHorizontally,"divideHorizontally")
	HX_STACK_ARG(decideHowToDivide,"decideHowToDivide")
{
		HX_STACK_LINE(538)
		Float tmp = newWidth;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(538)
		::flixel::graphics::atlas::FlxNode tmp1 = this->root;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(538)
		Float tmp2 = tmp1->rect->width;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(538)
		int tmp3 = ::Std_obj::_int(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(538)
		bool tmp4 = (tmp > tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(538)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(538)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(538)
		if ((tmp5)){
			HX_STACK_LINE(538)
			Float tmp7 = newHeight;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(538)
			::flixel::graphics::atlas::FlxNode tmp8 = this->root;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(538)
			::flixel::graphics::atlas::FlxNode tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(538)
			Float tmp10 = tmp9->rect->height;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(538)
			Float tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(538)
			Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(538)
			int tmp13 = ::Std_obj::_int(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(538)
			int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(538)
			tmp6 = (tmp7 > tmp14);
		}
		else{
			HX_STACK_LINE(538)
			tmp6 = true;
		}
		HX_STACK_LINE(538)
		if ((tmp6)){
			HX_STACK_LINE(540)
			::flixel::graphics::atlas::FlxNode tmp7 = this->root;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(540)
			::flixel::graphics::atlas::FlxNode temp = tmp7;		HX_STACK_VAR(temp,"temp");
			HX_STACK_LINE(541)
			::flixel::math::FlxRect tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(541)
			{
				HX_STACK_LINE(541)
				::flixel::math::FlxRect tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(541)
				{
					HX_STACK_LINE(541)
					::flixel::util::FlxPool_flixel_math_FlxRect tmp10 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(541)
					::flixel::math::FlxRect tmp11 = tmp10->get();		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(541)
					::flixel::math::FlxRect _this = tmp11;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(541)
					_this->x = (int)0;
					HX_STACK_LINE(541)
					_this->y = (int)0;
					HX_STACK_LINE(541)
					_this->width = newWidth;
					HX_STACK_LINE(541)
					_this->height = newHeight;
					HX_STACK_LINE(541)
					tmp9 = _this;
				}
				HX_STACK_LINE(541)
				::flixel::math::FlxRect rect = tmp9;		HX_STACK_VAR(rect,"rect");
				HX_STACK_LINE(541)
				rect->_inPool = false;
				HX_STACK_LINE(541)
				tmp8 = rect;
			}
			HX_STACK_LINE(541)
			::flixel::graphics::atlas::FlxNode tmp9 = ::flixel::graphics::atlas::FlxNode_obj::__new(tmp8,hx::ObjectPtr<OBJ_>(this),null(),null(),null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(541)
			this->root = tmp9;
			HX_STACK_LINE(543)
			bool tmp10 = decideHowToDivide;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(543)
			bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(543)
			if ((tmp10)){
				HX_STACK_LINE(543)
				::flixel::graphics::atlas::FlxNode tmp12 = this->root;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(543)
				Float tmp13 = temp->rect->width;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(543)
				int tmp14 = ::Std_obj::_int(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(543)
				Float tmp15 = temp->rect->height;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(543)
				int tmp16 = ::Std_obj::_int(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(543)
				tmp11 = this->needToDivideHorizontally(tmp12,tmp14,tmp16);
			}
			else{
				HX_STACK_LINE(543)
				tmp11 = divideHorizontally;
			}
			HX_STACK_LINE(543)
			divideHorizontally = tmp11;
			HX_STACK_LINE(545)
			::flixel::graphics::atlas::FlxNode tmp12 = this->root;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(545)
			Float tmp13 = temp->rect->width;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(545)
			int tmp14 = ::Std_obj::_int(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(545)
			Float tmp15 = temp->rect->height;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(545)
			int tmp16 = ::Std_obj::_int(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(545)
			bool tmp17 = divideHorizontally;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(545)
			this->divideNode(tmp12,tmp14,tmp16,tmp17,null(),null(),null());
			HX_STACK_LINE(546)
			::flixel::graphics::atlas::FlxNode tmp18 = this->root;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(546)
			tmp18->left->left = temp;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxAtlas_obj,expandRoot,(void))

Void FlxAtlas_obj::expandBitmapData( ){
{
		HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","expandBitmapData",0xdc8f96f4,"flixel.graphics.atlas.FlxAtlas.expandBitmapData","flixel/graphics/atlas/FlxAtlas.hx",551,0x03972f50)
		HX_STACK_THIS(this)
		HX_STACK_LINE(552)
		::openfl::_legacy::display::BitmapData tmp = this->bitmapData;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(552)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(552)
		bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(552)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(552)
		if ((tmp2)){
			HX_STACK_LINE(552)
			::openfl::_legacy::display::BitmapData tmp4 = this->bitmapData;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(552)
			::openfl::_legacy::display::BitmapData tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(552)
			::openfl::_legacy::display::BitmapData tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(552)
			int tmp7 = tmp6->get_width();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(552)
			int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(552)
			int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(552)
			::flixel::graphics::atlas::FlxNode tmp10 = this->root;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(552)
			::flixel::graphics::atlas::FlxNode tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(552)
			::flixel::graphics::atlas::FlxNode tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(552)
			Float tmp13 = tmp12->rect->width;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(552)
			Float tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(552)
			Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(552)
			Float tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(552)
			Float tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(552)
			int tmp18 = ::Std_obj::_int(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(552)
			int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(552)
			int tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(552)
			tmp3 = (tmp9 == tmp20);
		}
		else{
			HX_STACK_LINE(552)
			tmp3 = false;
		}
		HX_STACK_LINE(552)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(552)
		if ((tmp3)){
			HX_STACK_LINE(552)
			::openfl::_legacy::display::BitmapData tmp5 = this->bitmapData;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(552)
			::openfl::_legacy::display::BitmapData tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(552)
			int tmp7 = tmp6->get_height();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(552)
			int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(552)
			::flixel::graphics::atlas::FlxNode tmp9 = this->root;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(552)
			::flixel::graphics::atlas::FlxNode tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(552)
			Float tmp11 = tmp10->rect->height;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(552)
			Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(552)
			Float tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(552)
			int tmp14 = ::Std_obj::_int(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(552)
			int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(552)
			tmp4 = (tmp8 == tmp15);
		}
		else{
			HX_STACK_LINE(552)
			tmp4 = false;
		}
		HX_STACK_LINE(552)
		if ((tmp4)){
			HX_STACK_LINE(554)
			return null();
		}
		HX_STACK_LINE(557)
		::flixel::graphics::atlas::FlxNode tmp5 = this->root;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(557)
		Float tmp6 = tmp5->rect->width;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(557)
		int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(557)
		::flixel::graphics::atlas::FlxNode tmp8 = this->root;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(557)
		Float tmp9 = tmp8->rect->height;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(557)
		int tmp10 = ::Std_obj::_int(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(557)
		::openfl::_legacy::display::BitmapData tmp11 = ::openfl::_legacy::display::BitmapData_obj::__new(tmp7,tmp10,true,(int)0,null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(557)
		::openfl::_legacy::display::BitmapData newBitmapData = tmp11;		HX_STACK_VAR(newBitmapData,"newBitmapData");
		HX_STACK_LINE(558)
		::openfl::_legacy::display::BitmapData tmp12 = this->bitmapData;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(558)
		bool tmp13 = (tmp12 != null());		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(558)
		if ((tmp13)){
			HX_STACK_LINE(560)
			::openfl::_legacy::geom::Point tmp14 = ::flixel::graphics::atlas::FlxAtlas_obj::point;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(560)
			tmp14->setTo((int)0,(int)0);
			HX_STACK_LINE(561)
			::openfl::_legacy::display::BitmapData tmp15 = this->bitmapData;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(561)
			::openfl::_legacy::display::BitmapData tmp16 = this->bitmapData;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(561)
			::openfl::_legacy::geom::Rectangle tmp17 = tmp16->get_rect();		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(561)
			::openfl::_legacy::geom::Point tmp18 = ::flixel::graphics::atlas::FlxAtlas_obj::point;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(561)
			newBitmapData->copyPixels(tmp15,tmp17,tmp18,null(),null(),null());
		}
		HX_STACK_LINE(564)
		::openfl::_legacy::display::BitmapData tmp14 = this->bitmapData;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(564)
		::openfl::_legacy::display::BitmapData tmp15 = ::flixel::util::FlxDestroyUtil_obj::dispose(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(564)
		this->set_bitmapData(tmp15);
		HX_STACK_LINE(565)
		::openfl::_legacy::display::BitmapData tmp16 = newBitmapData;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(565)
		this->set_bitmapData(tmp16);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAtlas_obj,expandBitmapData,(void))

int FlxAtlas_obj::getNextPowerOfTwo( Float number){
	HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","getNextPowerOfTwo",0x3bc20318,"flixel.graphics.atlas.FlxAtlas.getNextPowerOfTwo","flixel/graphics/atlas/FlxAtlas.hx",569,0x03972f50)
	HX_STACK_THIS(this)
	HX_STACK_ARG(number,"number")
	HX_STACK_LINE(570)
	Float tmp = number;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(570)
	int tmp1 = ::Std_obj::_int(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(570)
	int n = tmp1;		HX_STACK_VAR(n,"n");
	HX_STACK_LINE(571)
	bool tmp2 = (n > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(571)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(571)
	if ((tmp2)){
		HX_STACK_LINE(571)
		int tmp4 = n;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(571)
		int tmp5 = (n - (int)1);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(571)
		int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(571)
		int tmp7 = (int(tmp4) & int(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(571)
		int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(571)
		tmp3 = (tmp8 == (int)0);
	}
	else{
		HX_STACK_LINE(571)
		tmp3 = false;
	}
	HX_STACK_LINE(571)
	if ((tmp3)){
		HX_STACK_LINE(573)
		int tmp4 = n;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(573)
		return tmp4;
	}
	HX_STACK_LINE(576)
	int result = (int)1;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(577)
	while((true)){
		HX_STACK_LINE(577)
		bool tmp4 = (result < n);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(577)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(577)
		if ((tmp5)){
			HX_STACK_LINE(577)
			break;
		}
		HX_STACK_LINE(577)
		hx::ShlEq(result,(int)1);
	}
	HX_STACK_LINE(578)
	int tmp4 = result;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(578)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxAtlas_obj,getNextPowerOfTwo,return )

::flixel::graphics::frames::FlxTileFrames FlxAtlas_obj::addNodeWithSpacesAndBorders( Dynamic Graphic,::String Key,::flixel::math::FlxPoint tileSize,::flixel::math::FlxPoint tileSpacing,::flixel::math::FlxPoint tileBorder,::flixel::math::FlxRect region){
	HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","addNodeWithSpacesAndBorders",0x375b9d25,"flixel.graphics.atlas.FlxAtlas.addNodeWithSpacesAndBorders","flixel/graphics/atlas/FlxAtlas.hx",594,0x03972f50)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Graphic,"Graphic")
	HX_STACK_ARG(Key,"Key")
	HX_STACK_ARG(tileSize,"tileSize")
	HX_STACK_ARG(tileSpacing,"tileSpacing")
	HX_STACK_ARG(tileBorder,"tileBorder")
	HX_STACK_ARG(region,"region")
	HX_STACK_LINE(595)
	Dynamic tmp = Graphic;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(595)
	::String tmp1 = Key;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(595)
	::String tmp2 = ::flixel::_system::FlxAssets_obj::resolveKey(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(595)
	::String key = tmp2;		HX_STACK_VAR(key,"key");
	HX_STACK_LINE(597)
	bool tmp3 = (key == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(597)
	if ((tmp3)){
		HX_STACK_LINE(602)
		return null();
	}
	HX_STACK_LINE(605)
	::flixel::_system::frontEnds::BitmapFrontEnd tmp4 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(605)
	::String tmp5 = key;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(605)
	::flixel::math::FlxPoint tmp6 = tileSize;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(605)
	::flixel::math::FlxPoint tmp7 = tileSpacing;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(605)
	::flixel::math::FlxPoint tmp8 = tileBorder;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(605)
	::flixel::math::FlxRect tmp9 = region;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(605)
	::String tmp10 = tmp4->__Field(HX_HCSTRING("getKeyWithSpacesAndBorders","\xac","\x4e","\xae","\x2a"), hx::paccDynamic )(tmp5,tmp6,tmp7,tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(605)
	key = tmp10;
	HX_STACK_LINE(607)
	::String tmp11 = key;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(607)
	bool tmp12 = this->hasNodeWithName(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(607)
	if ((tmp12)){
		HX_STACK_LINE(608)
		::haxe::ds::StringMap tmp13 = this->nodes;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(608)
		::String tmp14 = key;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(608)
		::flixel::graphics::atlas::FlxNode tmp15 = tmp13->get(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(608)
		::flixel::math::FlxPoint tmp16 = tileSize;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(608)
		::flixel::math::FlxPoint tmp17 = tileSpacing;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(608)
		::flixel::math::FlxPoint tmp18 = tileBorder;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(608)
		::flixel::graphics::frames::FlxTileFrames tmp19 = tmp15->getTileFrames(tmp16,tmp17,tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(608)
		return tmp19;
	}
	HX_STACK_LINE(610)
	Dynamic tmp13 = Graphic;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(610)
	::openfl::_legacy::display::BitmapData tmp14 = ::flixel::_system::FlxAssets_obj::resolveBitmapData(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(610)
	::openfl::_legacy::display::BitmapData data = tmp14;		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(612)
	bool tmp15 = (data == null());		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(612)
	if ((tmp15)){
		HX_STACK_LINE(617)
		return null();
	}
	HX_STACK_LINE(620)
	::openfl::_legacy::display::BitmapData tmp16 = data;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(620)
	::flixel::math::FlxPoint tmp17 = tileSize;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(620)
	::flixel::math::FlxPoint tmp18 = tileSpacing;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(620)
	::flixel::math::FlxPoint tmp19 = tileBorder;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(620)
	::flixel::math::FlxRect tmp20 = region;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(620)
	::openfl::_legacy::display::BitmapData tmp21 = ::flixel::util::FlxBitmapDataUtil_obj::addSpacesAndBorders(tmp16,tmp17,tmp18,tmp19,tmp20);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(620)
	::openfl::_legacy::display::BitmapData nodeData = tmp21;		HX_STACK_VAR(nodeData,"nodeData");
	HX_STACK_LINE(621)
	::openfl::_legacy::display::BitmapData tmp22 = nodeData;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(621)
	::String tmp23 = key;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(621)
	::flixel::graphics::atlas::FlxNode tmp24 = this->addNode(tmp22,tmp23);		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(621)
	::flixel::graphics::atlas::FlxNode node = tmp24;		HX_STACK_VAR(node,"node");
	HX_STACK_LINE(623)
	bool tmp25 = (node == null());		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(623)
	if ((tmp25)){
		HX_STACK_LINE(628)
		return null();
	}
	HX_STACK_LINE(631)
	bool tmp26 = (tileBorder != null());		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(631)
	if ((tmp26)){
		HX_STACK_LINE(633)
		{
			HX_STACK_LINE(633)
			::flixel::math::FlxPoint _g = tileSize;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(633)
			Float tmp27 = _g->x;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(633)
			Float tmp28 = ((int)2 * tileBorder->x);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(633)
			Float tmp29 = (tmp27 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(633)
			_g->set_x(tmp29);
		}
		HX_STACK_LINE(633)
		{
			HX_STACK_LINE(633)
			::flixel::math::FlxPoint _g = tileSize;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(633)
			Float tmp27 = _g->y;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(633)
			Float tmp28 = ((int)2 * tileBorder->y);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(633)
			Float tmp29 = (tmp27 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(633)
			_g->set_y(tmp29);
		}
		HX_STACK_LINE(633)
		tileSize;
	}
	HX_STACK_LINE(636)
	::flixel::math::FlxPoint tmp27 = tileSize;		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(636)
	::flixel::math::FlxPoint tmp28 = tileSpacing;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(636)
	::flixel::math::FlxPoint tmp29 = tileBorder;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(636)
	::flixel::graphics::frames::FlxTileFrames tmp30 = node->getTileFrames(tmp27,tmp28,tmp29);		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(636)
	return tmp30;
}


HX_DEFINE_DYNAMIC_FUNC6(FlxAtlas_obj,addNodeWithSpacesAndBorders,return )

::flixel::graphics::frames::FlxAtlasFrames FlxAtlas_obj::getAtlasFrames( ){
	HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","getAtlasFrames",0xe2ec465c,"flixel.graphics.atlas.FlxAtlas.getAtlasFrames","flixel/graphics/atlas/FlxAtlas.hx",645,0x03972f50)
	HX_STACK_THIS(this)
	HX_STACK_LINE(646)
	::flixel::graphics::FlxGraphic tmp = this->get_graphic();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(646)
	::flixel::graphics::FlxGraphic graph = tmp;		HX_STACK_VAR(graph,"graph");
	HX_STACK_LINE(648)
	::flixel::graphics::frames::FlxAtlasFrames tmp1 = graph->get_atlasFrames();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(648)
	::flixel::graphics::frames::FlxAtlasFrames atlasFrames = tmp1;		HX_STACK_VAR(atlasFrames,"atlasFrames");
	HX_STACK_LINE(649)
	::flixel::graphics::frames::FlxAtlasFrames tmp2 = graph->get_atlasFrames();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(649)
	bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(649)
	if ((tmp3)){
		HX_STACK_LINE(651)
		::flixel::graphics::frames::FlxAtlasFrames tmp4 = ::flixel::graphics::frames::FlxAtlasFrames_obj::__new(graph,null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(651)
		atlasFrames = tmp4;
	}
	HX_STACK_LINE(654)
	::haxe::ds::StringMap tmp4 = this->nodes;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(654)
	Dynamic tmp5 = tmp4->iterator();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(654)
	for(::cpp::FastIterator_obj< ::flixel::graphics::atlas::FlxNode > *__it = ::cpp::CreateFastIterator< ::flixel::graphics::atlas::FlxNode >(tmp5);  __it->hasNext(); ){
		::flixel::graphics::atlas::FlxNode node = __it->next();
		{
			HX_STACK_LINE(655)
			::flixel::graphics::atlas::FlxNode tmp6 = node;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(655)
			this->addNodeToAtlasFrames(tmp6);
		}
;
	}
	HX_STACK_LINE(657)
	::flixel::graphics::frames::FlxAtlasFrames tmp6 = atlasFrames;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(657)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAtlas_obj,getAtlasFrames,return )

Void FlxAtlas_obj::addNodeToAtlasFrames( ::flixel::graphics::atlas::FlxNode node){
{
		HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","addNodeToAtlasFrames",0x19696d94,"flixel.graphics.atlas.FlxAtlas.addNodeToAtlasFrames","flixel/graphics/atlas/FlxAtlas.hx",661,0x03972f50)
		HX_STACK_THIS(this)
		HX_STACK_ARG(node,"node")
		HX_STACK_LINE(662)
		::flixel::graphics::FlxGraphic tmp = this->_graphic;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(662)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(662)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(662)
		bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(662)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(662)
		if ((tmp3)){
			HX_STACK_LINE(662)
			::flixel::graphics::FlxGraphic tmp5 = this->_graphic;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(662)
			::flixel::graphics::FlxGraphic tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(662)
			::flixel::graphics::FlxGraphic tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(662)
			::flixel::graphics::frames::FlxAtlasFrames tmp8 = tmp7->get_atlasFrames();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(662)
			::flixel::graphics::frames::FlxAtlasFrames tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(662)
			::flixel::graphics::frames::FlxAtlasFrames tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(662)
			tmp4 = (tmp10 == null());
		}
		else{
			HX_STACK_LINE(662)
			tmp4 = true;
		}
		HX_STACK_LINE(662)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(662)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(662)
		if ((tmp5)){
			HX_STACK_LINE(662)
			tmp6 = (node == null());
		}
		else{
			HX_STACK_LINE(662)
			tmp6 = true;
		}
		HX_STACK_LINE(662)
		if ((tmp6)){
			HX_STACK_LINE(663)
			return null();
		}
		HX_STACK_LINE(665)
		::flixel::graphics::FlxGraphic tmp7 = this->_graphic;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(665)
		::flixel::graphics::frames::FlxAtlasFrames tmp8 = tmp7->get_atlasFrames();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(665)
		::flixel::graphics::frames::FlxAtlasFrames atlasFrames = tmp8;		HX_STACK_VAR(atlasFrames,"atlasFrames");
		HX_STACK_LINE(667)
		bool tmp9 = node->filled;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(667)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(667)
		if ((tmp9)){
			HX_STACK_LINE(667)
			::String tmp11 = node->key;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(667)
			::String tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(667)
			bool tmp13 = atlasFrames->framesHash->exists(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(667)
			bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(667)
			bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(667)
			tmp10 = !(tmp15);
		}
		else{
			HX_STACK_LINE(667)
			tmp10 = false;
		}
		HX_STACK_LINE(667)
		if ((tmp10)){
			HX_STACK_LINE(669)
			::flixel::math::FlxRect tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(669)
			{
				HX_STACK_LINE(669)
				Float tmp12 = node->rect->x;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(669)
				int tmp13 = ::Std_obj::_int(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(669)
				Float X = tmp13;		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(669)
				Float tmp14 = node->rect->y;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(669)
				int tmp15 = ::Std_obj::_int(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(669)
				Float Y = tmp15;		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(669)
				Float tmp16 = node->rect->width;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(669)
				int tmp17 = ::Std_obj::_int(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(669)
				int tmp18 = this->border;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(669)
				int tmp19 = (tmp17 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(669)
				Float Width = tmp19;		HX_STACK_VAR(Width,"Width");
				HX_STACK_LINE(669)
				Float tmp20 = node->rect->height;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(669)
				int tmp21 = ::Std_obj::_int(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(669)
				int tmp22 = this->border;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(669)
				int tmp23 = (tmp21 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(669)
				Float Height = tmp23;		HX_STACK_VAR(Height,"Height");
				HX_STACK_LINE(669)
				::flixel::math::FlxRect tmp24;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(669)
				{
					HX_STACK_LINE(669)
					::flixel::util::FlxPool_flixel_math_FlxRect tmp25 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(669)
					::flixel::math::FlxRect tmp26 = tmp25->get();		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(669)
					::flixel::math::FlxRect _this = tmp26;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(669)
					_this->x = X;
					HX_STACK_LINE(669)
					_this->y = Y;
					HX_STACK_LINE(669)
					_this->width = Width;
					HX_STACK_LINE(669)
					_this->height = Height;
					HX_STACK_LINE(669)
					tmp24 = _this;
				}
				HX_STACK_LINE(669)
				::flixel::math::FlxRect rect = tmp24;		HX_STACK_VAR(rect,"rect");
				HX_STACK_LINE(669)
				rect->_inPool = false;
				HX_STACK_LINE(669)
				tmp11 = rect;
			}
			HX_STACK_LINE(669)
			::flixel::math::FlxRect frame = tmp11;		HX_STACK_VAR(frame,"frame");
			HX_STACK_LINE(670)
			bool tmp12 = node->rotated;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(670)
			::flixel::math::FlxPoint tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(670)
			if ((tmp12)){
				HX_STACK_LINE(670)
				Float tmp14 = node->rect->height;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(670)
				int tmp15 = ::Std_obj::_int(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(670)
				int tmp16 = this->border;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(670)
				int tmp17 = (tmp15 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(670)
				Float X = tmp17;		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(670)
				Float tmp18 = node->rect->width;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(670)
				int tmp19 = ::Std_obj::_int(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(670)
				int tmp20 = this->border;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(670)
				int tmp21 = (tmp19 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(670)
				Float Y = tmp21;		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(670)
				::flixel::util::FlxPool_flixel_math_FlxPoint tmp22 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(670)
				::flixel::math::FlxPoint tmp23 = tmp22->get();		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(670)
				Float tmp24 = X;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(670)
				Float tmp25 = Y;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(670)
				::flixel::math::FlxPoint tmp26 = tmp23->set(tmp24,tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(670)
				::flixel::math::FlxPoint point = tmp26;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(670)
				point->_inPool = false;
				HX_STACK_LINE(670)
				tmp13 = point;
			}
			else{
				HX_STACK_LINE(670)
				Float tmp14 = node->rect->width;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(670)
				int tmp15 = ::Std_obj::_int(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(670)
				int tmp16 = this->border;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(670)
				int tmp17 = (tmp15 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(670)
				Float X = tmp17;		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(670)
				Float tmp18 = node->rect->height;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(670)
				int tmp19 = ::Std_obj::_int(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(670)
				int tmp20 = this->border;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(670)
				int tmp21 = (tmp19 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(670)
				Float Y = tmp21;		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(670)
				::flixel::util::FlxPool_flixel_math_FlxPoint tmp22 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(670)
				::flixel::math::FlxPoint tmp23 = tmp22->get();		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(670)
				Float tmp24 = X;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(670)
				Float tmp25 = Y;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(670)
				::flixel::math::FlxPoint tmp26 = tmp23->set(tmp24,tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(670)
				::flixel::math::FlxPoint point = tmp26;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(670)
				point->_inPool = false;
				HX_STACK_LINE(670)
				tmp13 = point;
			}
			HX_STACK_LINE(670)
			::flixel::math::FlxPoint sourceSize = tmp13;		HX_STACK_VAR(sourceSize,"sourceSize");
			HX_STACK_LINE(671)
			::flixel::math::FlxPoint tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(671)
			{
				HX_STACK_LINE(671)
				::flixel::util::FlxPool_flixel_math_FlxPoint tmp15 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(671)
				::flixel::math::FlxPoint tmp16 = tmp15->get();		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(671)
				::flixel::math::FlxPoint tmp17 = tmp16->set((int)0,(int)0);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(671)
				::flixel::math::FlxPoint point = tmp17;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(671)
				point->_inPool = false;
				HX_STACK_LINE(671)
				tmp14 = point;
			}
			HX_STACK_LINE(671)
			::flixel::math::FlxPoint offset = tmp14;		HX_STACK_VAR(offset,"offset");
			HX_STACK_LINE(672)
			bool tmp15 = node->rotated;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(672)
			int tmp16;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(672)
			if ((tmp15)){
				HX_STACK_LINE(672)
				tmp16 = (int)-90;
			}
			else{
				HX_STACK_LINE(672)
				tmp16 = (int)0;
			}
			HX_STACK_LINE(672)
			int angle = tmp16;		HX_STACK_VAR(angle,"angle");
			HX_STACK_LINE(673)
			::flixel::math::FlxRect tmp17 = frame;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(673)
			::flixel::math::FlxPoint tmp18 = sourceSize;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(673)
			::flixel::math::FlxPoint tmp19 = offset;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(673)
			::String tmp20 = node->key;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(673)
			int tmp21 = angle;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(673)
			atlasFrames->addAtlasFrame(tmp17,tmp18,tmp19,tmp20,tmp21,null(),null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxAtlas_obj,addNodeToAtlasFrames,(void))

bool FlxAtlas_obj::hasNodeWithName( ::String nodeName){
	HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","hasNodeWithName",0x3a185aec,"flixel.graphics.atlas.FlxAtlas.hasNodeWithName","flixel/graphics/atlas/FlxAtlas.hx",683,0x03972f50)
	HX_STACK_THIS(this)
	HX_STACK_ARG(nodeName,"nodeName")
	HX_STACK_LINE(684)
	::haxe::ds::StringMap tmp = this->nodes;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(684)
	::String tmp1 = nodeName;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(684)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(684)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxAtlas_obj,hasNodeWithName,return )

::flixel::graphics::atlas::FlxNode FlxAtlas_obj::getNode( ::String key){
	HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","getNode",0x850d4b97,"flixel.graphics.atlas.FlxAtlas.getNode","flixel/graphics/atlas/FlxAtlas.hx",693,0x03972f50)
	HX_STACK_THIS(this)
	HX_STACK_ARG(key,"key")
	HX_STACK_LINE(694)
	::haxe::ds::StringMap tmp = this->nodes;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(694)
	::String tmp1 = key;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(694)
	::flixel::graphics::atlas::FlxNode tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(694)
	::flixel::graphics::atlas::FlxNode tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(694)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxAtlas_obj,getNode,return )

::flixel::graphics::atlas::FlxAtlas FlxAtlas_obj::addNodes( Array< ::Dynamic > bitmaps,Array< ::String > keys){
	HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","addNodes",0x001aef91,"flixel.graphics.atlas.FlxAtlas.addNodes","flixel/graphics/atlas/FlxAtlas.hx",705,0x03972f50)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bitmaps,"bitmaps")
	HX_STACK_ARG(keys,"keys")
	HX_STACK_LINE(706)
	int numKeys = keys->length;		HX_STACK_VAR(numKeys,"numKeys");
	HX_STACK_LINE(707)
	int numBitmaps = bitmaps->length;		HX_STACK_VAR(numBitmaps,"numBitmaps");
	HX_STACK_LINE(709)
	bool tmp = (numBitmaps != numKeys);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(709)
	if ((tmp)){
		HX_STACK_LINE(714)
		return null();
	}
	HX_STACK_LINE(717)
	this->_tempStorage = Dynamic( Array_obj<Dynamic>::__new() );
	HX_STACK_LINE(718)
	{
		HX_STACK_LINE(718)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(718)
		while((true)){
			HX_STACK_LINE(718)
			bool tmp1 = (_g < numBitmaps);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(718)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(718)
			if ((tmp2)){
				HX_STACK_LINE(718)
				break;
			}
			HX_STACK_LINE(718)
			int tmp3 = (_g)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(718)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(720)
			::openfl::_legacy::display::BitmapData tmp4 = bitmaps->__get(i).StaticCast< ::openfl::_legacy::display::BitmapData >();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(720)
			::String tmp5 = keys->__get(i);		HX_STACK_VAR(tmp5,"tmp5");
			struct _Function_3_1{
				inline static Dynamic Block( ::String &tmp5,::openfl::_legacy::display::BitmapData &tmp4){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/graphics/atlas/FlxAtlas.hx",720,0x03972f50)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("bmd","\x39","\xbc","\x4a","\x00") , tmp4,false);
						__result->Add(HX_HCSTRING("keyStr","\x52","\x64","\xe2","\x3f") , tmp5,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(720)
			Dynamic tmp6 = _Function_3_1::Block(tmp5,tmp4);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(720)
			this->_tempStorage->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp6);
		}
	}
	HX_STACK_LINE(723)
	this->addFromAtlasObjects(this->_tempStorage);
	HX_STACK_LINE(724)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC2(FlxAtlas_obj,addNodes,return )

Void FlxAtlas_obj::addFromAtlasObjects( cpp::ArrayBase objects){
{
		HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","addFromAtlasObjects",0xc364fff3,"flixel.graphics.atlas.FlxAtlas.addFromAtlasObjects","flixel/graphics/atlas/FlxAtlas.hx",728,0x03972f50)
		HX_STACK_THIS(this)
		HX_STACK_ARG(objects,"objects")
		HX_STACK_LINE(729)
		Dynamic tmp = this->bitmapSorter_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(729)
		objects->__Field(HX_HCSTRING("sort","\x5e","\x27","\x58","\x4c"), hx::paccDynamic )(tmp);
		HX_STACK_LINE(730)
		int numBitmaps = objects->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(numBitmaps,"numBitmaps");
		HX_STACK_LINE(732)
		{
			HX_STACK_LINE(732)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(732)
			while((true)){
				HX_STACK_LINE(732)
				bool tmp1 = (_g < numBitmaps);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(732)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(732)
				if ((tmp2)){
					HX_STACK_LINE(732)
					break;
				}
				HX_STACK_LINE(732)
				int tmp3 = (_g)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(732)
				int i = tmp3;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(734)
				Dynamic tmp4 = objects->__GetItem(i);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(734)
				::openfl::_legacy::display::BitmapData tmp5 = tmp4->__Field(HX_HCSTRING("bmd","\x39","\xbc","\x4a","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(734)
				Dynamic tmp6 = objects->__GetItem(i);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(734)
				::String tmp7 = tmp6->__Field(HX_HCSTRING("keyStr","\x52","\x64","\xe2","\x3f"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(734)
				this->addNode(tmp5,tmp7);
			}
		}
		HX_STACK_LINE(737)
		this->_tempStorage = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxAtlas_obj,addFromAtlasObjects,(void))

int FlxAtlas_obj::bitmapSorter( Dynamic obj1,Dynamic obj2){
	HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","bitmapSorter",0x4abe7a5b,"flixel.graphics.atlas.FlxAtlas.bitmapSorter","flixel/graphics/atlas/FlxAtlas.hx",744,0x03972f50)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj1,"obj1")
	HX_STACK_ARG(obj2,"obj2")
	HX_STACK_LINE(745)
	bool tmp = this->allowRotation;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(745)
	if ((tmp)){
		HX_STACK_LINE(747)
		int tmp1 = obj1->__Field(HX_HCSTRING("bmd","\x39","\xbc","\x4a","\x00"), hx::paccDynamic )->__Field(HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"), hx::paccDynamic )();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(747)
		int tmp2 = obj1->__Field(HX_HCSTRING("bmd","\x39","\xbc","\x4a","\x00"), hx::paccDynamic )->__Field(HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"), hx::paccDynamic )();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(747)
		int tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(747)
		int area1 = tmp3;		HX_STACK_VAR(area1,"area1");
		HX_STACK_LINE(748)
		int tmp4 = obj2->__Field(HX_HCSTRING("bmd","\x39","\xbc","\x4a","\x00"), hx::paccDynamic )->__Field(HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"), hx::paccDynamic )();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(748)
		int tmp5 = obj2->__Field(HX_HCSTRING("bmd","\x39","\xbc","\x4a","\x00"), hx::paccDynamic )->__Field(HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"), hx::paccDynamic )();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(748)
		int tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(748)
		int area2 = tmp6;		HX_STACK_VAR(area2,"area2");
		HX_STACK_LINE(749)
		int tmp7 = (area2 - area1);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(749)
		return tmp7;
	}
	HX_STACK_LINE(752)
	int tmp1 = obj2->__Field(HX_HCSTRING("bmd","\x39","\xbc","\x4a","\x00"), hx::paccDynamic )->__Field(HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"), hx::paccDynamic )();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(752)
	int tmp2 = obj1->__Field(HX_HCSTRING("bmd","\x39","\xbc","\x4a","\x00"), hx::paccDynamic )->__Field(HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"), hx::paccDynamic )();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(752)
	bool tmp3 = (tmp1 == tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(752)
	if ((tmp3)){
		HX_STACK_LINE(754)
		int tmp4 = obj2->__Field(HX_HCSTRING("bmd","\x39","\xbc","\x4a","\x00"), hx::paccDynamic )->__Field(HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"), hx::paccDynamic )();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(754)
		int tmp5 = obj1->__Field(HX_HCSTRING("bmd","\x39","\xbc","\x4a","\x00"), hx::paccDynamic )->__Field(HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"), hx::paccDynamic )();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(754)
		int tmp6 = (tmp4 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(754)
		return tmp6;
	}
	HX_STACK_LINE(757)
	int tmp4 = obj2->__Field(HX_HCSTRING("bmd","\x39","\xbc","\x4a","\x00"), hx::paccDynamic )->__Field(HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"), hx::paccDynamic )();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(757)
	int tmp5 = obj1->__Field(HX_HCSTRING("bmd","\x39","\xbc","\x4a","\x00"), hx::paccDynamic )->__Field(HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"), hx::paccDynamic )();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(757)
	int tmp6 = (tmp4 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(757)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxAtlas_obj,bitmapSorter,return )

::flixel::graphics::atlas::FlxAtlas FlxAtlas_obj::createQueue( ){
	HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","createQueue",0x315e3254,"flixel.graphics.atlas.FlxAtlas.createQueue","flixel/graphics/atlas/FlxAtlas.hx",768,0x03972f50)
	HX_STACK_THIS(this)
	HX_STACK_LINE(769)
	this->_tempStorage = Dynamic( Array_obj<Dynamic>::__new() );
	HX_STACK_LINE(770)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAtlas_obj,createQueue,return )

::flixel::graphics::atlas::FlxAtlas FlxAtlas_obj::addToQueue( ::openfl::_legacy::display::BitmapData data,::String key){
	HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","addToQueue",0x83cfa976,"flixel.graphics.atlas.FlxAtlas.addToQueue","flixel/graphics/atlas/FlxAtlas.hx",779,0x03972f50)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(key,"key")
	HX_STACK_LINE(780)
	bool tmp = (this->_tempStorage == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(780)
	if ((tmp)){
		HX_STACK_LINE(782)
		this->_tempStorage = Dynamic( Array_obj<Dynamic>::__new() );
	}
	struct _Function_1_1{
		inline static Dynamic Block( ::openfl::_legacy::display::BitmapData &data,::String &key){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/graphics/atlas/FlxAtlas.hx",785,0x03972f50)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("bmd","\x39","\xbc","\x4a","\x00") , data,false);
				__result->Add(HX_HCSTRING("keyStr","\x52","\x64","\xe2","\x3f") , key,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(785)
	Dynamic tmp1 = _Function_1_1::Block(data,key);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(785)
	this->_tempStorage->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp1);
	HX_STACK_LINE(786)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC2(FlxAtlas_obj,addToQueue,return )

::flixel::graphics::atlas::FlxAtlas FlxAtlas_obj::generateFromQueue( ){
	HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","generateFromQueue",0x8e4a2871,"flixel.graphics.atlas.FlxAtlas.generateFromQueue","flixel/graphics/atlas/FlxAtlas.hx",793,0x03972f50)
	HX_STACK_THIS(this)
	HX_STACK_LINE(794)
	bool tmp = (this->_tempStorage != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(794)
	if ((tmp)){
		HX_STACK_LINE(796)
		this->addFromAtlasObjects(this->_tempStorage);
	}
	HX_STACK_LINE(799)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAtlas_obj,generateFromQueue,return )

Void FlxAtlas_obj::onClear( ::flixel::FlxState _){
{
		HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","onClear",0x4819a1cd,"flixel.graphics.atlas.FlxAtlas.onClear","flixel/graphics/atlas/FlxAtlas.hx",803,0x03972f50)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(804)
		bool tmp = this->persist;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(804)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(804)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(804)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(804)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(804)
		if ((tmp3)){
			HX_STACK_LINE(804)
			::flixel::graphics::FlxGraphic tmp5 = this->_graphic;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(804)
			::flixel::graphics::FlxGraphic tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(804)
			bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(804)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(804)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(804)
			if ((tmp9)){
				HX_STACK_LINE(804)
				::flixel::graphics::FlxGraphic tmp10 = this->_graphic;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(804)
				::flixel::graphics::FlxGraphic tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(804)
				::flixel::graphics::FlxGraphic tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(804)
				int tmp13 = tmp12->get_useCount();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(804)
				int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(804)
				int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(804)
				tmp4 = (tmp15 <= (int)0);
			}
			else{
				HX_STACK_LINE(804)
				tmp4 = false;
			}
		}
		else{
			HX_STACK_LINE(804)
			tmp4 = true;
		}
		HX_STACK_LINE(804)
		if ((tmp4)){
			HX_STACK_LINE(806)
			this->destroy();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxAtlas_obj,onClear,(void))

Void FlxAtlas_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","destroy",0x8e06bed9,"flixel.graphics.atlas.FlxAtlas.destroy","flixel/graphics/atlas/FlxAtlas.hx",815,0x03972f50)
		HX_STACK_THIS(this)
		HX_STACK_LINE(816)
		this->_tempStorage = null();
		HX_STACK_LINE(817)
		::flixel::graphics::atlas::FlxNode tmp = this->root;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(817)
		this->deleteSubtree(tmp);
		HX_STACK_LINE(818)
		this->root = null();
		HX_STACK_LINE(819)
		::flixel::_system::frontEnds::BitmapFrontEnd tmp1 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(819)
		::String tmp2 = this->name;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(819)
		tmp1->__Field(HX_HCSTRING("removeByKey","\x24","\xc9","\xac","\xbb"), hx::paccDynamic )(tmp2);
		HX_STACK_LINE(820)
		this->set_bitmapData(null());
		HX_STACK_LINE(821)
		this->nodes = null();
		HX_STACK_LINE(822)
		this->_graphic = null();
		HX_STACK_LINE(824)
		{
			HX_STACK_LINE(824)
			::flixel::_system::frontEnds::SignalFrontEnd tmp3 = ::flixel::FlxG_obj::signals;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(824)
			Dynamic tmp4 = this->onClear_dyn();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(824)
			tmp3->__Field(HX_HCSTRING("preStateCreate","\x8a","\xe8","\xdd","\x06"), hx::paccDynamic )->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(tmp4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAtlas_obj,destroy,(void))

Void FlxAtlas_obj::clear( ){
{
		HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","clear",0x59297dac,"flixel.graphics.atlas.FlxAtlas.clear","flixel/graphics/atlas/FlxAtlas.hx",832,0x03972f50)
		HX_STACK_THIS(this)
		HX_STACK_LINE(833)
		::flixel::graphics::atlas::FlxNode tmp = this->root;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(833)
		this->deleteSubtree(tmp);
		HX_STACK_LINE(834)
		this->initRoot();
		HX_STACK_LINE(835)
		::flixel::_system::frontEnds::BitmapFrontEnd tmp1 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(835)
		::String tmp2 = this->name;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(835)
		tmp1->__Field(HX_HCSTRING("removeByKey","\x24","\xc9","\xac","\xbb"), hx::paccDynamic )(tmp2);
		HX_STACK_LINE(836)
		this->set_bitmapData(null());
		HX_STACK_LINE(837)
		::haxe::ds::StringMap tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(837)
		{
			HX_STACK_LINE(837)
			::haxe::ds::StringMap tmp4 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(837)
			::haxe::ds::StringMap tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(837)
			tmp3 = tmp5;
		}
		HX_STACK_LINE(837)
		this->nodes = tmp3;
		HX_STACK_LINE(838)
		this->_graphic = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAtlas_obj,clear,(void))

::String FlxAtlas_obj::getLibGdxData( ){
	HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","getLibGdxData",0x1a9c9615,"flixel.graphics.atlas.FlxAtlas.getLibGdxData","flixel/graphics/atlas/FlxAtlas.hx",845,0x03972f50)
	HX_STACK_THIS(this)
	HX_STACK_LINE(846)
	::String data = HX_HCSTRING("\n","\x0a","\x00","\x00","\x00");		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(847)
	::String tmp = this->name;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(847)
	::String tmp1 = (tmp + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(847)
	hx::AddEq(data,tmp1);
	HX_STACK_LINE(848)
	hx::AddEq(data,HX_HCSTRING("format: RGBA8888\n","\x99","\x1f","\xed","\xc2"));
	HX_STACK_LINE(849)
	hx::AddEq(data,HX_HCSTRING("filter: Linear,Linear\n","\x9c","\x47","\x05","\x72"));
	HX_STACK_LINE(850)
	hx::AddEq(data,HX_HCSTRING("repeat: none\n","\xf1","\x9b","\x51","\xee"));
	HX_STACK_LINE(852)
	::haxe::ds::StringMap tmp2 = this->nodes;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(852)
	Dynamic tmp3 = tmp2->iterator();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(852)
	for(::cpp::FastIterator_obj< ::flixel::graphics::atlas::FlxNode > *__it = ::cpp::CreateFastIterator< ::flixel::graphics::atlas::FlxNode >(tmp3);  __it->hasNext(); ){
		::flixel::graphics::atlas::FlxNode node = __it->next();
		{
			HX_STACK_LINE(854)
			::String tmp4 = (node->key + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(854)
			hx::AddEq(data,tmp4);
			HX_STACK_LINE(855)
			bool tmp5 = node->rotated;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(855)
			::String tmp6 = ::Std_obj::string(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(855)
			::String tmp7 = (HX_HCSTRING("  rotate: ","\xc1","\x21","\xff","\x6f") + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(855)
			::String tmp8 = (tmp7 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(855)
			hx::AddEq(data,tmp8);
			HX_STACK_LINE(856)
			Float tmp9 = node->rect->x;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(856)
			int tmp10 = ::Std_obj::_int(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(856)
			::String tmp11 = (HX_HCSTRING("  xy: ","\xe7","\xb9","\xeb","\x87") + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(856)
			::String tmp12 = (tmp11 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(856)
			Float tmp13 = node->rect->y;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(856)
			int tmp14 = ::Std_obj::_int(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(856)
			::String tmp15 = (tmp12 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(856)
			::String tmp16 = (tmp15 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(856)
			hx::AddEq(data,tmp16);
			HX_STACK_LINE(858)
			bool tmp17 = this->allowRotation;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(858)
			if ((tmp17)){
				HX_STACK_LINE(860)
				Float tmp18 = node->rect->height;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(860)
				int tmp19 = ::Std_obj::_int(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(860)
				::String tmp20 = (HX_HCSTRING("size: ","\xa7","\x45","\x0e","\xc1") + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(860)
				::String tmp21 = (tmp20 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(860)
				Float tmp22 = node->rect->width;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(860)
				int tmp23 = ::Std_obj::_int(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(860)
				::String tmp24 = (tmp21 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(860)
				::String tmp25 = (tmp24 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(860)
				hx::AddEq(data,tmp25);
				HX_STACK_LINE(861)
				Float tmp26 = node->rect->height;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(861)
				int tmp27 = ::Std_obj::_int(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(861)
				::String tmp28 = (HX_HCSTRING("orig: ","\xa7","\xf0","\x00","\x4b") + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(861)
				::String tmp29 = (tmp28 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(861)
				Float tmp30 = node->rect->width;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(861)
				int tmp31 = ::Std_obj::_int(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(861)
				::String tmp32 = (tmp29 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(861)
				::String tmp33 = (tmp32 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(861)
				hx::AddEq(data,tmp33);
			}
			else{
				HX_STACK_LINE(865)
				Float tmp18 = node->rect->width;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(865)
				int tmp19 = ::Std_obj::_int(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(865)
				::String tmp20 = (HX_HCSTRING("size: ","\xa7","\x45","\x0e","\xc1") + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(865)
				::String tmp21 = (tmp20 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(865)
				Float tmp22 = node->rect->height;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(865)
				int tmp23 = ::Std_obj::_int(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(865)
				::String tmp24 = (tmp21 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(865)
				::String tmp25 = (tmp24 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(865)
				hx::AddEq(data,tmp25);
				HX_STACK_LINE(866)
				Float tmp26 = node->rect->width;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(866)
				int tmp27 = ::Std_obj::_int(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(866)
				::String tmp28 = (HX_HCSTRING("orig: ","\xa7","\xf0","\x00","\x4b") + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(866)
				::String tmp29 = (tmp28 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(866)
				Float tmp30 = node->rect->height;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(866)
				int tmp31 = ::Std_obj::_int(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(866)
				::String tmp32 = (tmp29 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(866)
				::String tmp33 = (tmp32 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(866)
				hx::AddEq(data,tmp33);
			}
			HX_STACK_LINE(869)
			hx::AddEq(data,HX_HCSTRING("  offset: 0, 0\n","\xe5","\x55","\xb9","\x3b"));
			HX_STACK_LINE(870)
			hx::AddEq(data,HX_HCSTRING("  index: -1\n","\xee","\xe8","\x07","\x0b"));
		}
;
	}
	HX_STACK_LINE(873)
	::String tmp4 = data;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(873)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAtlas_obj,getLibGdxData,return )

Void FlxAtlas_obj::deleteSubtree( ::flixel::graphics::atlas::FlxNode node){
{
		HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","deleteSubtree",0xf9ad5912,"flixel.graphics.atlas.FlxAtlas.deleteSubtree","flixel/graphics/atlas/FlxAtlas.hx",877,0x03972f50)
		HX_STACK_THIS(this)
		HX_STACK_ARG(node,"node")
		HX_STACK_LINE(878)
		bool tmp = (node != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(878)
		if ((tmp)){
			HX_STACK_LINE(880)
			bool tmp1 = (node->left != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(880)
			if ((tmp1)){
				HX_STACK_LINE(880)
				::flixel::graphics::atlas::FlxNode tmp2 = node->left;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(880)
				this->deleteSubtree(tmp2);
			}
			HX_STACK_LINE(881)
			bool tmp2 = (node->right != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(881)
			if ((tmp2)){
				HX_STACK_LINE(881)
				::flixel::graphics::atlas::FlxNode tmp3 = node->right;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(881)
				this->deleteSubtree(tmp3);
			}
			HX_STACK_LINE(882)
			{
				HX_STACK_LINE(882)
				node->key = null();
				HX_STACK_LINE(882)
				node->left = null();
				HX_STACK_LINE(882)
				node->right = null();
				HX_STACK_LINE(882)
				node->rect = null();
				HX_STACK_LINE(882)
				node->atlas = null();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxAtlas_obj,deleteSubtree,(void))

::flixel::graphics::atlas::FlxNode FlxAtlas_obj::findNodeToInsert( int insertWidth,int insertHeight){
	HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","findNodeToInsert",0x513a4b50,"flixel.graphics.atlas.FlxAtlas.findNodeToInsert","flixel/graphics/atlas/FlxAtlas.hx",888,0x03972f50)
	HX_STACK_THIS(this)
	HX_STACK_ARG(insertWidth,"insertWidth")
	HX_STACK_ARG(insertHeight,"insertHeight")
	HX_STACK_LINE(890)
	Array< ::Dynamic > stack = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(stack,"stack");
	HX_STACK_LINE(892)
	::flixel::graphics::atlas::FlxNode tmp = this->root;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(892)
	::flixel::graphics::atlas::FlxNode current = tmp;		HX_STACK_VAR(current,"current");
	HX_STACK_LINE(894)
	Array< ::Dynamic > emptyNodes = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(emptyNodes,"emptyNodes");
	HX_STACK_LINE(896)
	bool canPlaceRight = false;		HX_STACK_VAR(canPlaceRight,"canPlaceRight");
	HX_STACK_LINE(897)
	bool canPlaceLeft = false;		HX_STACK_VAR(canPlaceLeft,"canPlaceLeft");
	HX_STACK_LINE(899)
	bool looping = true;		HX_STACK_VAR(looping,"looping");
	HX_STACK_LINE(901)
	::flixel::graphics::atlas::FlxNode result = null();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(902)
	int tmp1 = this->maxWidth;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(902)
	int tmp2 = this->maxHeight;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(902)
	int tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(902)
	int tmp4 = (tmp3 + (int)1);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(902)
	int minArea = tmp4;		HX_STACK_VAR(minArea,"minArea");
	HX_STACK_LINE(903)
	int nodeArea;		HX_STACK_VAR(nodeArea,"nodeArea");
	HX_STACK_LINE(906)
	while((true)){
		HX_STACK_LINE(906)
		bool tmp5 = looping;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(906)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(906)
		if ((tmp6)){
			HX_STACK_LINE(906)
			break;
		}
		HX_STACK_LINE(909)
		bool tmp7 = current->filled;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(909)
		bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(909)
		bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(909)
		bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(909)
		bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(909)
		if ((tmp10)){
			HX_STACK_LINE(909)
			tmp11 = (current->left == null());
		}
		else{
			HX_STACK_LINE(909)
			tmp11 = false;
		}
		HX_STACK_LINE(909)
		bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(909)
		bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(909)
		if ((tmp12)){
			HX_STACK_LINE(909)
			tmp13 = (current->right == null());
		}
		else{
			HX_STACK_LINE(909)
			tmp13 = false;
		}
		HX_STACK_LINE(909)
		bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(909)
		if ((tmp13)){
			HX_STACK_LINE(909)
			Float tmp15 = current->rect->width;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(909)
			Float tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(909)
			int tmp17 = insertWidth;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(909)
			bool tmp18 = (tmp16 >= tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(909)
			bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(909)
			bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(909)
			if ((tmp20)){
				HX_STACK_LINE(909)
				Float tmp21 = current->rect->height;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(909)
				Float tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(909)
				Float tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(909)
				int tmp24 = insertHeight;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(909)
				tmp14 = (tmp23 >= tmp24);
			}
			else{
				HX_STACK_LINE(909)
				tmp14 = false;
			}
		}
		else{
			HX_STACK_LINE(909)
			tmp14 = false;
		}
		HX_STACK_LINE(909)
		if ((tmp14)){
			HX_STACK_LINE(911)
			Float tmp15 = current->rect->width;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(911)
			int tmp16 = ::Std_obj::_int(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(911)
			Float tmp17 = current->rect->height;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(911)
			int tmp18 = ::Std_obj::_int(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(911)
			int tmp19 = (tmp16 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(911)
			nodeArea = tmp19;
			HX_STACK_LINE(913)
			bool tmp20 = (nodeArea < minArea);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(913)
			if ((tmp20)){
				HX_STACK_LINE(915)
				minArea = nodeArea;
				HX_STACK_LINE(916)
				result = current;
			}
		}
		HX_STACK_LINE(920)
		bool tmp15 = (current->right != null());		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(920)
		bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(920)
		if ((tmp15)){
			HX_STACK_LINE(920)
			::flixel::graphics::atlas::FlxNode _this = current->right;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(920)
			Float tmp17 = _this->rect->width;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(920)
			Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(920)
			int tmp19 = insertWidth;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(920)
			bool tmp20 = (tmp18 >= tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(920)
			bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(920)
			bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(920)
			if ((tmp22)){
				HX_STACK_LINE(920)
				Float tmp23 = _this->rect->height;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(920)
				Float tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(920)
				Float tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(920)
				int tmp26 = insertHeight;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(920)
				tmp16 = (tmp25 >= tmp26);
			}
			else{
				HX_STACK_LINE(920)
				tmp16 = false;
			}
		}
		else{
			HX_STACK_LINE(920)
			tmp16 = false;
		}
		HX_STACK_LINE(920)
		canPlaceRight = tmp16;
		HX_STACK_LINE(921)
		bool tmp17 = (current->left != null());		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(921)
		bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(921)
		if ((tmp17)){
			HX_STACK_LINE(921)
			::flixel::graphics::atlas::FlxNode _this = current->left;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(921)
			Float tmp19 = _this->rect->width;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(921)
			Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(921)
			int tmp21 = insertWidth;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(921)
			bool tmp22 = (tmp20 >= tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(921)
			bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(921)
			bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(921)
			if ((tmp24)){
				HX_STACK_LINE(921)
				Float tmp25 = _this->rect->height;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(921)
				Float tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(921)
				Float tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(921)
				int tmp28 = insertHeight;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(921)
				tmp18 = (tmp27 >= tmp28);
			}
			else{
				HX_STACK_LINE(921)
				tmp18 = false;
			}
		}
		else{
			HX_STACK_LINE(921)
			tmp18 = false;
		}
		HX_STACK_LINE(921)
		canPlaceLeft = tmp18;
		HX_STACK_LINE(922)
		bool tmp19 = canPlaceRight;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(922)
		bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(922)
		if ((tmp19)){
			HX_STACK_LINE(922)
			tmp20 = canPlaceLeft;
		}
		else{
			HX_STACK_LINE(922)
			tmp20 = false;
		}
		HX_STACK_LINE(922)
		if ((tmp20)){
			HX_STACK_LINE(924)
			::flixel::graphics::atlas::FlxNode tmp21 = current->right;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(924)
			stack->push(tmp21);
			HX_STACK_LINE(925)
			current = current->left;
		}
		else{
			HX_STACK_LINE(927)
			bool tmp21 = canPlaceLeft;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(927)
			if ((tmp21)){
				HX_STACK_LINE(929)
				current = current->left;
			}
			else{
				HX_STACK_LINE(931)
				bool tmp22 = canPlaceRight;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(931)
				if ((tmp22)){
					HX_STACK_LINE(933)
					current = current->right;
				}
				else{
					HX_STACK_LINE(937)
					bool tmp23 = (stack->length > (int)0);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(937)
					if ((tmp23)){
						HX_STACK_LINE(940)
						::flixel::graphics::atlas::FlxNode tmp24 = stack->pop().StaticCast< ::flixel::graphics::atlas::FlxNode >();		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(940)
						current = tmp24;
					}
					else{
						HX_STACK_LINE(945)
						looping = false;
					}
				}
			}
		}
	}
	HX_STACK_LINE(950)
	::flixel::graphics::atlas::FlxNode tmp5 = result;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(950)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxAtlas_obj,findNodeToInsert,return )

::openfl::_legacy::display::BitmapData FlxAtlas_obj::set_bitmapData( ::openfl::_legacy::display::BitmapData value){
	HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","set_bitmapData",0xf5eb1e77,"flixel.graphics.atlas.FlxAtlas.set_bitmapData","flixel/graphics/atlas/FlxAtlas.hx",954,0x03972f50)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(955)
	bool tmp = (value != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(955)
	if ((tmp)){
		HX_STACK_LINE(958)
		::flixel::graphics::FlxGraphic tmp1 = this->_graphic;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(958)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(958)
		if ((tmp2)){
			HX_STACK_LINE(960)
			::flixel::graphics::FlxGraphic tmp3 = this->_graphic;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(960)
			::openfl::_legacy::display::BitmapData tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(960)
			tmp3->set_bitmap(tmp4);
		}
	}
	HX_STACK_LINE(964)
	::openfl::_legacy::display::BitmapData tmp1 = this->bitmapData = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(964)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxAtlas_obj,set_bitmapData,return )

::flixel::graphics::FlxGraphic FlxAtlas_obj::get_graphic( ){
	HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","get_graphic",0xa3fa281e,"flixel.graphics.atlas.FlxAtlas.get_graphic","flixel/graphics/atlas/FlxAtlas.hx",968,0x03972f50)
	HX_STACK_THIS(this)
	HX_STACK_LINE(969)
	::flixel::graphics::FlxGraphic tmp = this->_graphic;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(969)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(969)
	if ((tmp1)){
		HX_STACK_LINE(970)
		::flixel::graphics::FlxGraphic tmp2 = this->_graphic;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(970)
		return tmp2;
	}
	HX_STACK_LINE(972)
	::flixel::_system::frontEnds::BitmapFrontEnd tmp2 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(972)
	::openfl::_legacy::display::BitmapData tmp3 = this->bitmapData;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(972)
	::String tmp4 = this->name;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(972)
	::flixel::graphics::FlxGraphic tmp5 = tmp2->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )(tmp3,false,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(972)
	this->_graphic = tmp5;
	HX_STACK_LINE(973)
	bool tmp6 = this->persist;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(973)
	::flixel::graphics::FlxGraphic tmp7 = this->_graphic;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(973)
	tmp7->persist = tmp6;
	HX_STACK_LINE(975)
	::flixel::graphics::FlxGraphic tmp8 = this->_graphic;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(975)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAtlas_obj,get_graphic,return )

bool FlxAtlas_obj::set_persist( bool value){
	HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","set_persist",0xbdd0f696,"flixel.graphics.atlas.FlxAtlas.set_persist","flixel/graphics/atlas/FlxAtlas.hx",979,0x03972f50)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(980)
	::flixel::graphics::FlxGraphic tmp = this->_graphic;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(980)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(980)
	if ((tmp1)){
		HX_STACK_LINE(981)
		::flixel::graphics::FlxGraphic tmp2 = this->_graphic;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(981)
		tmp2->persist = value;
	}
	HX_STACK_LINE(983)
	bool tmp2 = this->persist = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(983)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxAtlas_obj,set_persist,return )

int FlxAtlas_obj::set_minWidth( int value){
	HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","set_minWidth",0x9b144052,"flixel.graphics.atlas.FlxAtlas.set_minWidth","flixel/graphics/atlas/FlxAtlas.hx",987,0x03972f50)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(988)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(988)
	int tmp1 = this->maxWidth;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(988)
	bool tmp2 = (tmp <= tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(988)
	if ((tmp2)){
		HX_STACK_LINE(990)
		this->minWidth = value;
		HX_STACK_LINE(992)
		int tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(992)
		int tmp4 = this->get_width();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(992)
		bool tmp5 = (tmp3 > tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(992)
		if ((tmp5)){
			HX_STACK_LINE(994)
			int tmp6 = value;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(994)
			this->set_width(tmp6);
		}
	}
	HX_STACK_LINE(998)
	int tmp3 = this->minWidth;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(998)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxAtlas_obj,set_minWidth,return )

int FlxAtlas_obj::set_minHeight( int value){
	HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","set_minHeight",0xccf3801b,"flixel.graphics.atlas.FlxAtlas.set_minHeight","flixel/graphics/atlas/FlxAtlas.hx",1002,0x03972f50)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1003)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1003)
	int tmp1 = this->maxHeight;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1003)
	bool tmp2 = (tmp <= tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1003)
	if ((tmp2)){
		HX_STACK_LINE(1005)
		this->minHeight = value;
		HX_STACK_LINE(1007)
		int tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1007)
		int tmp4 = this->get_height();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1007)
		bool tmp5 = (tmp3 > tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1007)
		if ((tmp5)){
			HX_STACK_LINE(1009)
			int tmp6 = value;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1009)
			this->set_height(tmp6);
		}
	}
	HX_STACK_LINE(1013)
	int tmp3 = this->minHeight;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1013)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxAtlas_obj,set_minHeight,return )

int FlxAtlas_obj::get_width( ){
	HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","get_width",0x463c19fc,"flixel.graphics.atlas.FlxAtlas.get_width","flixel/graphics/atlas/FlxAtlas.hx",1017,0x03972f50)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1018)
	::flixel::graphics::atlas::FlxNode tmp = this->root;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1018)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1018)
	if ((tmp1)){
		HX_STACK_LINE(1020)
		::flixel::graphics::atlas::FlxNode tmp2 = this->root;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1020)
		Float tmp3 = tmp2->rect->width;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1020)
		int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1020)
		return tmp4;
	}
	HX_STACK_LINE(1023)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAtlas_obj,get_width,return )

int FlxAtlas_obj::set_width( int value){
	HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","set_width",0x298d0608,"flixel.graphics.atlas.FlxAtlas.set_width","flixel/graphics/atlas/FlxAtlas.hx",1027,0x03972f50)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1028)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1028)
	int tmp1 = this->get_width();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1028)
	bool tmp2 = (tmp > tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1028)
	if ((tmp2)){
		HX_STACK_LINE(1030)
		bool tmp3 = this->powerOfTwo;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1030)
		if ((tmp3)){
			HX_STACK_LINE(1032)
			int tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1032)
			int tmp5 = this->getNextPowerOfTwo(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1032)
			value = tmp5;
		}
		HX_STACK_LINE(1035)
		int tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1035)
		int tmp5 = this->maxWidth;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1035)
		bool tmp6 = (tmp4 <= tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1035)
		if ((tmp6)){
			HX_STACK_LINE(1037)
			::flixel::graphics::atlas::FlxNode tmp7 = this->root;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1037)
			bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1037)
			bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1037)
			if ((tmp8)){
				HX_STACK_LINE(1037)
				::flixel::graphics::atlas::FlxNode tmp10 = this->root;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1037)
				::flixel::graphics::atlas::FlxNode tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1037)
				Float tmp12 = tmp11->rect->width;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1037)
				Float tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1037)
				Float tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1037)
				int tmp15 = ::Std_obj::_int(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1037)
				int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1037)
				int tmp17 = value;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1037)
				tmp9 = (tmp16 < tmp17);
			}
			else{
				HX_STACK_LINE(1037)
				tmp9 = false;
			}
			HX_STACK_LINE(1037)
			if ((tmp9)){
				HX_STACK_LINE(1039)
				int tmp10 = value;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1039)
				::flixel::graphics::atlas::FlxNode tmp11 = this->root;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1039)
				Float tmp12 = tmp11->rect->height;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1039)
				int tmp13 = ::Std_obj::_int(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1039)
				::flixel::graphics::atlas::FlxNode tmp14 = this->root;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1039)
				::flixel::graphics::atlas::FlxNode tmp15 = this->root;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1039)
				Float tmp16 = tmp15->rect->width;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1039)
				int tmp17 = ::Std_obj::_int(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1039)
				::flixel::graphics::atlas::FlxNode tmp18 = this->root;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1039)
				Float tmp19 = tmp18->rect->height;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1039)
				int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(1039)
				bool tmp21 = this->needToDivideHorizontally(tmp14,tmp17,tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(1039)
				this->expandRoot(tmp10,tmp13,tmp21,null());
			}
		}
	}
	HX_STACK_LINE(1044)
	int tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1044)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxAtlas_obj,set_width,return )

int FlxAtlas_obj::get_height( ){
	HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","get_height",0xe4aa1b31,"flixel.graphics.atlas.FlxAtlas.get_height","flixel/graphics/atlas/FlxAtlas.hx",1048,0x03972f50)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1049)
	::flixel::graphics::atlas::FlxNode tmp = this->root;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1049)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1049)
	if ((tmp1)){
		HX_STACK_LINE(1051)
		::flixel::graphics::atlas::FlxNode tmp2 = this->root;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1051)
		Float tmp3 = tmp2->rect->height;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1051)
		int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1051)
		return tmp4;
	}
	HX_STACK_LINE(1054)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAtlas_obj,get_height,return )

int FlxAtlas_obj::set_height( int value){
	HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","set_height",0xe827b9a5,"flixel.graphics.atlas.FlxAtlas.set_height","flixel/graphics/atlas/FlxAtlas.hx",1058,0x03972f50)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1059)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1059)
	int tmp1 = this->get_height();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1059)
	bool tmp2 = (tmp > tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1059)
	if ((tmp2)){
		HX_STACK_LINE(1061)
		bool tmp3 = this->powerOfTwo;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1061)
		if ((tmp3)){
			HX_STACK_LINE(1063)
			int tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1063)
			int tmp5 = this->getNextPowerOfTwo(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1063)
			value = tmp5;
		}
		HX_STACK_LINE(1066)
		int tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1066)
		int tmp5 = this->maxHeight;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1066)
		bool tmp6 = (tmp4 <= tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1066)
		if ((tmp6)){
			HX_STACK_LINE(1068)
			::flixel::graphics::atlas::FlxNode tmp7 = this->root;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1068)
			bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1068)
			bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1068)
			if ((tmp8)){
				HX_STACK_LINE(1068)
				::flixel::graphics::atlas::FlxNode tmp10 = this->root;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1068)
				::flixel::graphics::atlas::FlxNode tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1068)
				Float tmp12 = tmp11->rect->height;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1068)
				Float tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1068)
				Float tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1068)
				int tmp15 = ::Std_obj::_int(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1068)
				int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1068)
				int tmp17 = value;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1068)
				tmp9 = (tmp16 < tmp17);
			}
			else{
				HX_STACK_LINE(1068)
				tmp9 = false;
			}
			HX_STACK_LINE(1068)
			if ((tmp9)){
				HX_STACK_LINE(1070)
				::flixel::graphics::atlas::FlxNode tmp10 = this->root;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1070)
				Float tmp11 = tmp10->rect->width;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1070)
				int tmp12 = ::Std_obj::_int(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1070)
				int tmp13 = value;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1070)
				::flixel::graphics::atlas::FlxNode tmp14 = this->root;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1070)
				::flixel::graphics::atlas::FlxNode tmp15 = this->root;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1070)
				Float tmp16 = tmp15->rect->width;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1070)
				int tmp17 = ::Std_obj::_int(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1070)
				::flixel::graphics::atlas::FlxNode tmp18 = this->root;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1070)
				Float tmp19 = tmp18->rect->height;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1070)
				int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(1070)
				bool tmp21 = this->needToDivideHorizontally(tmp14,tmp17,tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(1070)
				this->expandRoot(tmp12,tmp13,tmp21,null());
			}
		}
	}
	HX_STACK_LINE(1075)
	int tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1075)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxAtlas_obj,set_height,return )

int FlxAtlas_obj::set_maxWidth( int value){
	HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","set_maxWidth",0x4dfa2600,"flixel.graphics.atlas.FlxAtlas.set_maxWidth","flixel/graphics/atlas/FlxAtlas.hx",1079,0x03972f50)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1080)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1080)
	int tmp1 = this->minWidth;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1080)
	bool tmp2 = (tmp >= tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1080)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1080)
	if ((tmp2)){
		HX_STACK_LINE(1080)
		::flixel::graphics::atlas::FlxNode tmp4 = this->root;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1080)
		::flixel::graphics::atlas::FlxNode tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1080)
		bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1080)
		bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1080)
		bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1080)
		bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1080)
		bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1080)
		bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1080)
		if ((tmp11)){
			HX_STACK_LINE(1080)
			int tmp12 = value;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1080)
			int tmp13 = this->get_width();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1080)
			int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1080)
			int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1080)
			tmp3 = (tmp12 >= tmp15);
		}
		else{
			HX_STACK_LINE(1080)
			tmp3 = true;
		}
	}
	else{
		HX_STACK_LINE(1080)
		tmp3 = false;
	}
	HX_STACK_LINE(1080)
	if ((tmp3)){
		HX_STACK_LINE(1082)
		this->maxWidth = value;
	}
	HX_STACK_LINE(1085)
	int tmp4 = this->maxWidth;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1085)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxAtlas_obj,set_maxWidth,return )

int FlxAtlas_obj::set_maxHeight( int value){
	HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","set_maxHeight",0xa33692ad,"flixel.graphics.atlas.FlxAtlas.set_maxHeight","flixel/graphics/atlas/FlxAtlas.hx",1089,0x03972f50)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1090)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1090)
	int tmp1 = this->minHeight;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1090)
	bool tmp2 = (tmp >= tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1090)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1090)
	if ((tmp2)){
		HX_STACK_LINE(1090)
		::flixel::graphics::atlas::FlxNode tmp4 = this->root;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1090)
		::flixel::graphics::atlas::FlxNode tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1090)
		bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1090)
		bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1090)
		bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1090)
		bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1090)
		bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1090)
		bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1090)
		if ((tmp11)){
			HX_STACK_LINE(1090)
			int tmp12 = value;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1090)
			int tmp13 = this->get_height();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1090)
			int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1090)
			int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1090)
			tmp3 = (tmp12 >= tmp15);
		}
		else{
			HX_STACK_LINE(1090)
			tmp3 = true;
		}
	}
	else{
		HX_STACK_LINE(1090)
		tmp3 = false;
	}
	HX_STACK_LINE(1090)
	if ((tmp3)){
		HX_STACK_LINE(1092)
		this->maxHeight = value;
	}
	HX_STACK_LINE(1095)
	int tmp4 = this->maxHeight;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1095)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxAtlas_obj,set_maxHeight,return )

bool FlxAtlas_obj::set_powerOfTwo( bool value){
	HX_STACK_FRAME("flixel.graphics.atlas.FlxAtlas","set_powerOfTwo",0xacd9272e,"flixel.graphics.atlas.FlxAtlas.set_powerOfTwo","flixel/graphics/atlas/FlxAtlas.hx",1099,0x03972f50)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1100)
	bool tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1100)
	bool tmp1 = this->powerOfTwo;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1100)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1100)
	bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1100)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1100)
	if ((tmp3)){
		HX_STACK_LINE(1100)
		tmp4 = value;
	}
	else{
		HX_STACK_LINE(1100)
		tmp4 = false;
	}
	HX_STACK_LINE(1100)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1100)
	if ((tmp4)){
		HX_STACK_LINE(1100)
		::flixel::graphics::atlas::FlxNode tmp6 = this->root;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1100)
		::flixel::graphics::atlas::FlxNode tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1100)
		tmp5 = (tmp7 != null());
	}
	else{
		HX_STACK_LINE(1100)
		tmp5 = false;
	}
	HX_STACK_LINE(1100)
	if ((tmp5)){
		HX_STACK_LINE(1102)
		::flixel::graphics::atlas::FlxNode tmp6 = this->root;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1102)
		Float tmp7 = tmp6->rect->width;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1102)
		int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1102)
		int tmp9 = this->getNextPowerOfTwo(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1102)
		int nextWidth = tmp9;		HX_STACK_VAR(nextWidth,"nextWidth");
		HX_STACK_LINE(1103)
		::flixel::graphics::atlas::FlxNode tmp10 = this->root;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1103)
		Float tmp11 = tmp10->rect->height;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1103)
		int tmp12 = ::Std_obj::_int(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1103)
		int tmp13 = this->getNextPowerOfTwo(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1103)
		int nextHeight = tmp13;		HX_STACK_VAR(nextHeight,"nextHeight");
		HX_STACK_LINE(1105)
		int tmp14 = nextWidth;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1105)
		::flixel::graphics::atlas::FlxNode tmp15 = this->root;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1105)
		Float tmp16 = tmp15->rect->width;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1105)
		int tmp17 = ::Std_obj::_int(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1105)
		bool tmp18 = (tmp14 != tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1105)
		bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(1105)
		bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(1105)
		if ((tmp19)){
			HX_STACK_LINE(1105)
			int tmp21 = nextHeight;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1105)
			::flixel::graphics::atlas::FlxNode tmp22 = this->root;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(1105)
			::flixel::graphics::atlas::FlxNode tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(1105)
			Float tmp24 = tmp23->rect->height;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(1105)
			Float tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(1105)
			Float tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(1105)
			int tmp27 = ::Std_obj::_int(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(1105)
			int tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(1105)
			tmp20 = (tmp21 != tmp28);
		}
		else{
			HX_STACK_LINE(1105)
			tmp20 = true;
		}
		HX_STACK_LINE(1105)
		if ((tmp20)){
			HX_STACK_LINE(1107)
			int tmp21 = this->maxWidth;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1107)
			bool tmp22 = (tmp21 > (int)0);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(1107)
			bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(1107)
			bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(1107)
			if ((tmp23)){
				HX_STACK_LINE(1107)
				int tmp25 = nextWidth;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(1107)
				int tmp26 = this->maxWidth;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(1107)
				int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(1107)
				int tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(1107)
				tmp24 = (tmp25 > tmp28);
			}
			else{
				HX_STACK_LINE(1107)
				tmp24 = false;
			}
			HX_STACK_LINE(1107)
			bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(1107)
			bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(1107)
			if ((tmp25)){
				HX_STACK_LINE(1107)
				int tmp27 = this->maxHeight;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(1107)
				int tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(1107)
				bool tmp29 = (tmp28 > (int)0);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(1107)
				bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(1107)
				bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(1107)
				if ((tmp31)){
					HX_STACK_LINE(1107)
					int tmp32 = nextHeight;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(1107)
					int tmp33 = this->maxHeight;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(1107)
					int tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(1107)
					int tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(1107)
					tmp26 = (tmp32 > tmp35);
				}
				else{
					HX_STACK_LINE(1107)
					tmp26 = false;
				}
			}
			else{
				HX_STACK_LINE(1107)
				tmp26 = true;
			}
			HX_STACK_LINE(1107)
			if ((tmp26)){
				HX_STACK_LINE(1112)
				return false;
			}
			HX_STACK_LINE(1115)
			::flixel::graphics::atlas::FlxNode tmp27 = this->root;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(1115)
			::flixel::graphics::atlas::FlxNode temp = tmp27;		HX_STACK_VAR(temp,"temp");
			HX_STACK_LINE(1116)
			::flixel::math::FlxRect tmp28;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(1116)
			{
				HX_STACK_LINE(1116)
				::flixel::math::FlxRect tmp29;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(1116)
				{
					HX_STACK_LINE(1116)
					::flixel::util::FlxPool_flixel_math_FlxRect tmp30 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(1116)
					::flixel::math::FlxRect tmp31 = tmp30->get();		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(1116)
					::flixel::math::FlxRect _this = tmp31;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1116)
					_this->x = (int)0;
					HX_STACK_LINE(1116)
					_this->y = (int)0;
					HX_STACK_LINE(1116)
					_this->width = nextWidth;
					HX_STACK_LINE(1116)
					_this->height = nextHeight;
					HX_STACK_LINE(1116)
					tmp29 = _this;
				}
				HX_STACK_LINE(1116)
				::flixel::math::FlxRect rect = tmp29;		HX_STACK_VAR(rect,"rect");
				HX_STACK_LINE(1116)
				rect->_inPool = false;
				HX_STACK_LINE(1116)
				tmp28 = rect;
			}
			HX_STACK_LINE(1116)
			::flixel::graphics::atlas::FlxNode tmp29 = ::flixel::graphics::atlas::FlxNode_obj::__new(tmp28,hx::ObjectPtr<OBJ_>(this),null(),null(),null());		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(1116)
			this->root = tmp29;
			HX_STACK_LINE(1118)
			bool tmp30 = (temp->left != null());		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(1118)
			if ((tmp30)){
				HX_STACK_LINE(1120)
				::flixel::graphics::atlas::FlxNode tmp31 = this->root;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(1120)
				Float tmp32 = temp->rect->width;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(1120)
				int tmp33 = ::Std_obj::_int(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(1120)
				Float tmp34 = temp->rect->height;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(1120)
				int tmp35 = ::Std_obj::_int(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(1120)
				::flixel::graphics::atlas::FlxNode tmp36 = this->root;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(1120)
				Float tmp37 = temp->rect->width;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(1120)
				int tmp38 = ::Std_obj::_int(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(1120)
				Float tmp39 = temp->rect->height;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(1120)
				int tmp40 = ::Std_obj::_int(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(1120)
				bool tmp41 = this->needToDivideHorizontally(tmp36,tmp38,tmp40);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(1120)
				this->divideNode(tmp31,tmp33,tmp35,tmp41,null(),null(),null());
				HX_STACK_LINE(1121)
				::flixel::graphics::atlas::FlxNode tmp42 = this->root;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(1121)
				tmp42->left->left = temp;
			}
		}
	}
	HX_STACK_LINE(1126)
	bool tmp6 = this->powerOfTwo = value;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1126)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxAtlas_obj,set_powerOfTwo,return )

::openfl::_legacy::geom::Point FlxAtlas_obj::point;

::openfl::_legacy::geom::Matrix FlxAtlas_obj::matrix;

::flixel::math::FlxPoint FlxAtlas_obj::defaultMinSize;

::flixel::math::FlxPoint FlxAtlas_obj::defaultMaxSize;


FlxAtlas_obj::FlxAtlas_obj()
{
}

void FlxAtlas_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxAtlas);
	HX_MARK_MEMBER_NAME(root,"root");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(nodes,"nodes");
	HX_MARK_MEMBER_NAME(bitmapData,"bitmapData");
	HX_MARK_MEMBER_NAME(graphic,"graphic");
	HX_MARK_MEMBER_NAME(persist,"persist");
	HX_MARK_MEMBER_NAME(border,"border");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(minWidth,"minWidth");
	HX_MARK_MEMBER_NAME(minHeight,"minHeight");
	HX_MARK_MEMBER_NAME(maxWidth,"maxWidth");
	HX_MARK_MEMBER_NAME(maxHeight,"maxHeight");
	HX_MARK_MEMBER_NAME(allowRotation,"allowRotation");
	HX_MARK_MEMBER_NAME(powerOfTwo,"powerOfTwo");
	HX_MARK_MEMBER_NAME(_graphic,"_graphic");
	HX_MARK_MEMBER_NAME(_tempStorage,"_tempStorage");
	HX_MARK_END_CLASS();
}

void FlxAtlas_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(root,"root");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(nodes,"nodes");
	HX_VISIT_MEMBER_NAME(bitmapData,"bitmapData");
	HX_VISIT_MEMBER_NAME(graphic,"graphic");
	HX_VISIT_MEMBER_NAME(persist,"persist");
	HX_VISIT_MEMBER_NAME(border,"border");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(minWidth,"minWidth");
	HX_VISIT_MEMBER_NAME(minHeight,"minHeight");
	HX_VISIT_MEMBER_NAME(maxWidth,"maxWidth");
	HX_VISIT_MEMBER_NAME(maxHeight,"maxHeight");
	HX_VISIT_MEMBER_NAME(allowRotation,"allowRotation");
	HX_VISIT_MEMBER_NAME(powerOfTwo,"powerOfTwo");
	HX_VISIT_MEMBER_NAME(_graphic,"_graphic");
	HX_VISIT_MEMBER_NAME(_tempStorage,"_tempStorage");
}

Dynamic FlxAtlas_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"root") ) { return root; }
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"nodes") ) { return nodes; }
		if (HX_FIELD_EQ(inName,"width") ) { return inCallProp == hx::paccAlways ? get_width() : width; }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"border") ) { return border; }
		if (HX_FIELD_EQ(inName,"height") ) { return inCallProp == hx::paccAlways ? get_height() : height; }
		if (HX_FIELD_EQ(inName,"expand") ) { return expand_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"graphic") ) { return inCallProp == hx::paccAlways ? get_graphic() : graphic; }
		if (HX_FIELD_EQ(inName,"persist") ) { return persist; }
		if (HX_FIELD_EQ(inName,"addNode") ) { return addNode_dyn(); }
		if (HX_FIELD_EQ(inName,"getNode") ) { return getNode_dyn(); }
		if (HX_FIELD_EQ(inName,"onClear") ) { return onClear_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"minWidth") ) { return minWidth; }
		if (HX_FIELD_EQ(inName,"maxWidth") ) { return maxWidth; }
		if (HX_FIELD_EQ(inName,"_graphic") ) { return _graphic; }
		if (HX_FIELD_EQ(inName,"initRoot") ) { return initRoot_dyn(); }
		if (HX_FIELD_EQ(inName,"wrapRoot") ) { return wrapRoot_dyn(); }
		if (HX_FIELD_EQ(inName,"addNodes") ) { return addNodes_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"minHeight") ) { return minHeight; }
		if (HX_FIELD_EQ(inName,"maxHeight") ) { return maxHeight; }
		if (HX_FIELD_EQ(inName,"tryInsert") ) { return tryInsert_dyn(); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return set_width_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapData") ) { return bitmapData; }
		if (HX_FIELD_EQ(inName,"powerOfTwo") ) { return powerOfTwo; }
		if (HX_FIELD_EQ(inName,"divideNode") ) { return divideNode_dyn(); }
		if (HX_FIELD_EQ(inName,"expandRoot") ) { return expandRoot_dyn(); }
		if (HX_FIELD_EQ(inName,"addToQueue") ) { return addToQueue_dyn(); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return set_height_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"createQueue") ) { return createQueue_dyn(); }
		if (HX_FIELD_EQ(inName,"get_graphic") ) { return get_graphic_dyn(); }
		if (HX_FIELD_EQ(inName,"set_persist") ) { return set_persist_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_tempStorage") ) { return _tempStorage; }
		if (HX_FIELD_EQ(inName,"bitmapSorter") ) { return bitmapSorter_dyn(); }
		if (HX_FIELD_EQ(inName,"set_minWidth") ) { return set_minWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"set_maxWidth") ) { return set_maxWidth_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"allowRotation") ) { return allowRotation; }
		if (HX_FIELD_EQ(inName,"getLibGdxData") ) { return getLibGdxData_dyn(); }
		if (HX_FIELD_EQ(inName,"deleteSubtree") ) { return deleteSubtree_dyn(); }
		if (HX_FIELD_EQ(inName,"set_minHeight") ) { return set_minHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"set_maxHeight") ) { return set_maxHeight_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getAtlasFrames") ) { return getAtlasFrames_dyn(); }
		if (HX_FIELD_EQ(inName,"set_bitmapData") ) { return set_bitmapData_dyn(); }
		if (HX_FIELD_EQ(inName,"set_powerOfTwo") ) { return set_powerOfTwo_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"hasNodeWithName") ) { return hasNodeWithName_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"expandBitmapData") ) { return expandBitmapData_dyn(); }
		if (HX_FIELD_EQ(inName,"findNodeToInsert") ) { return findNodeToInsert_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getNextPowerOfTwo") ) { return getNextPowerOfTwo_dyn(); }
		if (HX_FIELD_EQ(inName,"generateFromQueue") ) { return generateFromQueue_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"addFromAtlasObjects") ) { return addFromAtlasObjects_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"addNodeToAtlasFrames") ) { return addNodeToAtlasFrames_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"insertFirstNodeInRoot") ) { return insertFirstNodeInRoot_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"needToDivideHorizontally") ) { return needToDivideHorizontally_dyn(); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"addNodeWithSpacesAndBorders") ) { return addNodeWithSpacesAndBorders_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxAtlas_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"point") ) { outValue = point; return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { outValue = matrix; return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"defaultMinSize") ) { outValue = defaultMinSize; return true;  }
		if (HX_FIELD_EQ(inName,"defaultMaxSize") ) { outValue = defaultMaxSize; return true;  }
	}
	return false;
}

Dynamic FlxAtlas_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"root") ) { root=inValue.Cast< ::flixel::graphics::atlas::FlxNode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"nodes") ) { nodes=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == hx::paccAlways) return set_width(inValue);width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"border") ) { border=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp == hx::paccAlways) return set_height(inValue);height=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"graphic") ) { graphic=inValue.Cast< ::flixel::graphics::FlxGraphic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"persist") ) { if (inCallProp == hx::paccAlways) return set_persist(inValue);persist=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"minWidth") ) { if (inCallProp == hx::paccAlways) return set_minWidth(inValue);minWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxWidth") ) { if (inCallProp == hx::paccAlways) return set_maxWidth(inValue);maxWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_graphic") ) { _graphic=inValue.Cast< ::flixel::graphics::FlxGraphic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"minHeight") ) { if (inCallProp == hx::paccAlways) return set_minHeight(inValue);minHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxHeight") ) { if (inCallProp == hx::paccAlways) return set_maxHeight(inValue);maxHeight=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapData") ) { if (inCallProp == hx::paccAlways) return set_bitmapData(inValue);bitmapData=inValue.Cast< ::openfl::_legacy::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"powerOfTwo") ) { if (inCallProp == hx::paccAlways) return set_powerOfTwo(inValue);powerOfTwo=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_tempStorage") ) { _tempStorage=inValue.Cast< cpp::ArrayBase >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"allowRotation") ) { allowRotation=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxAtlas_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"point") ) { point=ioValue.Cast< ::openfl::_legacy::geom::Point >(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { matrix=ioValue.Cast< ::openfl::_legacy::geom::Matrix >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"defaultMinSize") ) { defaultMinSize=ioValue.Cast< ::flixel::math::FlxPoint >(); return true; }
		if (HX_FIELD_EQ(inName,"defaultMaxSize") ) { defaultMaxSize=ioValue.Cast< ::flixel::math::FlxPoint >(); return true; }
	}
	return false;
}

void FlxAtlas_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("root","\x22","\xee","\xae","\x4b"));
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("nodes","\x31","\xb8","\xbe","\x9f"));
	outFields->push(HX_HCSTRING("bitmapData","\xb9","\xb5","\xc0","\x33"));
	outFields->push(HX_HCSTRING("graphic","\xa8","\x5a","\x07","\x74"));
	outFields->push(HX_HCSTRING("persist","\x14","\x22","\x71","\x83"));
	outFields->push(HX_HCSTRING("border","\xec","\x4c","\x1a","\x64"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("minWidth","\x14","\x23","\x9a","\xc1"));
	outFields->push(HX_HCSTRING("minHeight","\x19","\x07","\x94","\x5b"));
	outFields->push(HX_HCSTRING("maxWidth","\xc2","\x08","\x80","\x74"));
	outFields->push(HX_HCSTRING("maxHeight","\xab","\x19","\xd7","\x31"));
	outFields->push(HX_HCSTRING("allowRotation","\xe7","\xce","\x40","\xd9"));
	outFields->push(HX_HCSTRING("powerOfTwo","\x70","\xbe","\xae","\xea"));
	outFields->push(HX_HCSTRING("_graphic","\x29","\xb4","\xbf","\xad"));
	outFields->push(HX_HCSTRING("_tempStorage","\x88","\x3c","\x09","\x91"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::graphics::atlas::FlxNode*/ ,(int)offsetof(FlxAtlas_obj,root),HX_HCSTRING("root","\x22","\xee","\xae","\x4b")},
	{hx::fsString,(int)offsetof(FlxAtlas_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(FlxAtlas_obj,nodes),HX_HCSTRING("nodes","\x31","\xb8","\xbe","\x9f")},
	{hx::fsObject /*::openfl::_legacy::display::BitmapData*/ ,(int)offsetof(FlxAtlas_obj,bitmapData),HX_HCSTRING("bitmapData","\xb9","\xb5","\xc0","\x33")},
	{hx::fsObject /*::flixel::graphics::FlxGraphic*/ ,(int)offsetof(FlxAtlas_obj,graphic),HX_HCSTRING("graphic","\xa8","\x5a","\x07","\x74")},
	{hx::fsBool,(int)offsetof(FlxAtlas_obj,persist),HX_HCSTRING("persist","\x14","\x22","\x71","\x83")},
	{hx::fsInt,(int)offsetof(FlxAtlas_obj,border),HX_HCSTRING("border","\xec","\x4c","\x1a","\x64")},
	{hx::fsInt,(int)offsetof(FlxAtlas_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsInt,(int)offsetof(FlxAtlas_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsInt,(int)offsetof(FlxAtlas_obj,minWidth),HX_HCSTRING("minWidth","\x14","\x23","\x9a","\xc1")},
	{hx::fsInt,(int)offsetof(FlxAtlas_obj,minHeight),HX_HCSTRING("minHeight","\x19","\x07","\x94","\x5b")},
	{hx::fsInt,(int)offsetof(FlxAtlas_obj,maxWidth),HX_HCSTRING("maxWidth","\xc2","\x08","\x80","\x74")},
	{hx::fsInt,(int)offsetof(FlxAtlas_obj,maxHeight),HX_HCSTRING("maxHeight","\xab","\x19","\xd7","\x31")},
	{hx::fsBool,(int)offsetof(FlxAtlas_obj,allowRotation),HX_HCSTRING("allowRotation","\xe7","\xce","\x40","\xd9")},
	{hx::fsBool,(int)offsetof(FlxAtlas_obj,powerOfTwo),HX_HCSTRING("powerOfTwo","\x70","\xbe","\xae","\xea")},
	{hx::fsObject /*::flixel::graphics::FlxGraphic*/ ,(int)offsetof(FlxAtlas_obj,_graphic),HX_HCSTRING("_graphic","\x29","\xb4","\xbf","\xad")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(FlxAtlas_obj,_tempStorage),HX_HCSTRING("_tempStorage","\x88","\x3c","\x09","\x91")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::openfl::_legacy::geom::Point*/ ,(void *) &FlxAtlas_obj::point,HX_HCSTRING("point","\x50","\xb4","\x8f","\xc6")},
	{hx::fsObject /*::openfl::_legacy::geom::Matrix*/ ,(void *) &FlxAtlas_obj::matrix,HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(void *) &FlxAtlas_obj::defaultMinSize,HX_HCSTRING("defaultMinSize","\xb2","\x68","\x9d","\x6c")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(void *) &FlxAtlas_obj::defaultMaxSize,HX_HCSTRING("defaultMaxSize","\xc4","\x52","\xc4","\xfb")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("root","\x22","\xee","\xae","\x4b"),
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("nodes","\x31","\xb8","\xbe","\x9f"),
	HX_HCSTRING("bitmapData","\xb9","\xb5","\xc0","\x33"),
	HX_HCSTRING("graphic","\xa8","\x5a","\x07","\x74"),
	HX_HCSTRING("persist","\x14","\x22","\x71","\x83"),
	HX_HCSTRING("border","\xec","\x4c","\x1a","\x64"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("minWidth","\x14","\x23","\x9a","\xc1"),
	HX_HCSTRING("minHeight","\x19","\x07","\x94","\x5b"),
	HX_HCSTRING("maxWidth","\xc2","\x08","\x80","\x74"),
	HX_HCSTRING("maxHeight","\xab","\x19","\xd7","\x31"),
	HX_HCSTRING("allowRotation","\xe7","\xce","\x40","\xd9"),
	HX_HCSTRING("powerOfTwo","\x70","\xbe","\xae","\xea"),
	HX_HCSTRING("_graphic","\x29","\xb4","\xbf","\xad"),
	HX_HCSTRING("_tempStorage","\x88","\x3c","\x09","\x91"),
	HX_HCSTRING("initRoot","\x52","\x1d","\x66","\x50"),
	HX_HCSTRING("addNode","\xc3","\x4c","\x47","\x85"),
	HX_HCSTRING("wrapRoot","\x0c","\x01","\x09","\x97"),
	HX_HCSTRING("tryInsert","\xd4","\x3e","\xf1","\x87"),
	HX_HCSTRING("needToDivideHorizontally","\x5b","\x7d","\xcf","\xa2"),
	HX_HCSTRING("divideNode","\x1b","\x16","\xb5","\x64"),
	HX_HCSTRING("insertFirstNodeInRoot","\x60","\x9d","\x55","\x94"),
	HX_HCSTRING("expand","\x5a","\xee","\x72","\xc4"),
	HX_HCSTRING("expandRoot","\x9c","\x3d","\x1a","\x4c"),
	HX_HCSTRING("expandBitmapData","\xb3","\xdc","\x4b","\xc7"),
	HX_HCSTRING("getNextPowerOfTwo","\x79","\xc4","\xc2","\xb5"),
	HX_HCSTRING("addNodeWithSpacesAndBorders","\xc6","\x41","\x7e","\xb4"),
	HX_HCSTRING("getAtlasFrames","\x5b","\x4e","\xd7","\xb6"),
	HX_HCSTRING("addNodeToAtlasFrames","\xd3","\xfe","\xb4","\xb1"),
	HX_HCSTRING("hasNodeWithName","\x0d","\x52","\xd4","\xd3"),
	HX_HCSTRING("getNode","\xb8","\xb9","\x8c","\x1b"),
	HX_HCSTRING("addNodes","\x50","\xde","\x1b","\x19"),
	HX_HCSTRING("addFromAtlasObjects","\x94","\x9b","\x21","\x50"),
	HX_HCSTRING("bitmapSorter","\x9a","\x34","\x57","\x3b"),
	HX_HCSTRING("createQueue","\xf5","\xc4","\x65","\x87"),
	HX_HCSTRING("addToQueue","\xf5","\x05","\xf9","\x91"),
	HX_HCSTRING("generateFromQueue","\xd2","\xe9","\x4a","\x08"),
	HX_HCSTRING("onClear","\xee","\x0f","\x99","\xde"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("getLibGdxData","\xf6","\xd2","\xa6","\xaf"),
	HX_HCSTRING("deleteSubtree","\xf3","\x95","\xb7","\x8e"),
	HX_HCSTRING("findNodeToInsert","\x0f","\x91","\xf6","\x3b"),
	HX_HCSTRING("set_bitmapData","\x76","\x26","\xd6","\xc9"),
	HX_HCSTRING("get_graphic","\xbf","\xba","\x01","\xfa"),
	HX_HCSTRING("set_persist","\x37","\x89","\xd8","\x13"),
	HX_HCSTRING("set_minWidth","\x91","\xfa","\xac","\x8b"),
	HX_HCSTRING("set_minHeight","\xfc","\xbc","\xfd","\x61"),
	HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"),
	HX_HCSTRING("set_width","\x69","\xfe","\x5c","\xf1"),
	HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"),
	HX_HCSTRING("set_height","\x24","\x16","\x51","\xf6"),
	HX_HCSTRING("set_maxWidth","\x3f","\xe0","\x92","\x3e"),
	HX_HCSTRING("set_maxHeight","\x8e","\xcf","\x40","\x38"),
	HX_HCSTRING("set_powerOfTwo","\x2d","\x2f","\xc4","\x80"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxAtlas_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxAtlas_obj::point,"point");
	HX_MARK_MEMBER_NAME(FlxAtlas_obj::matrix,"matrix");
	HX_MARK_MEMBER_NAME(FlxAtlas_obj::defaultMinSize,"defaultMinSize");
	HX_MARK_MEMBER_NAME(FlxAtlas_obj::defaultMaxSize,"defaultMaxSize");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxAtlas_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxAtlas_obj::point,"point");
	HX_VISIT_MEMBER_NAME(FlxAtlas_obj::matrix,"matrix");
	HX_VISIT_MEMBER_NAME(FlxAtlas_obj::defaultMinSize,"defaultMinSize");
	HX_VISIT_MEMBER_NAME(FlxAtlas_obj::defaultMaxSize,"defaultMaxSize");
};

#endif

hx::Class FlxAtlas_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("point","\x50","\xb4","\x8f","\xc6"),
	HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb"),
	HX_HCSTRING("defaultMinSize","\xb2","\x68","\x9d","\x6c"),
	HX_HCSTRING("defaultMaxSize","\xc4","\x52","\xc4","\xfb"),
	::String(null()) };

void FlxAtlas_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.graphics.atlas.FlxAtlas","\x4d","\x7b","\x60","\x52");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxAtlas_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxAtlas_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxAtlas_obj >;
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

void FlxAtlas_obj::__boot()
{
	point= ::openfl::_legacy::geom::Point_obj::__new(null(),null());
	matrix= ::openfl::_legacy::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());
	defaultMinSize= ::flixel::math::FlxPoint_obj::__new((int)128,(int)128);
	defaultMaxSize= ::flixel::math::FlxPoint_obj::__new((int)1024,(int)1024);
}

} // end namespace flixel
} // end namespace graphics
} // end namespace atlas
