#include <hxcpp.h>

#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
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
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
namespace flixel{
namespace graphics{
namespace frames{

Void FlxFramesCollection_obj::__construct(::flixel::graphics::FlxGraphic parent,::flixel::graphics::frames::FlxFrameCollectionType type,::flixel::math::FlxPoint border)
{
HX_STACK_FRAME("flixel.graphics.frames.FlxFramesCollection","new",0x41834b71,"flixel.graphics.frames.FlxFramesCollection.new","flixel/graphics/frames/FlxFramesCollection.hx",54,0xe09dd200)
HX_STACK_THIS(this)
HX_STACK_ARG(parent,"parent")
HX_STACK_ARG(type,"type")
HX_STACK_ARG(border,"border")
{
	HX_STACK_LINE(55)
	this->parent = parent;
	HX_STACK_LINE(56)
	this->type = type;
	HX_STACK_LINE(57)
	bool tmp = (border == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(57)
	::flixel::math::FlxPoint tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(57)
	if ((tmp)){
		HX_STACK_LINE(57)
		Float X = (int)0;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(57)
		Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(57)
		::flixel::util::FlxPool_flixel_math_FlxPoint tmp2 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(57)
		::flixel::math::FlxPoint tmp3 = tmp2->get();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(57)
		Float tmp4 = X;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(57)
		Float tmp5 = Y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(57)
		::flixel::math::FlxPoint tmp6 = tmp3->set(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(57)
		::flixel::math::FlxPoint point = tmp6;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(57)
		point->_inPool = false;
		HX_STACK_LINE(57)
		tmp1 = point;
	}
	else{
		HX_STACK_LINE(57)
		tmp1 = border;
	}
	HX_STACK_LINE(57)
	this->border = tmp1;
	HX_STACK_LINE(58)
	this->frames = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(59)
	::haxe::ds::StringMap tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(59)
	{
		HX_STACK_LINE(59)
		::haxe::ds::StringMap tmp3 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(59)
		::haxe::ds::StringMap tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(59)
		tmp2 = tmp4;
	}
	HX_STACK_LINE(59)
	this->framesHash = tmp2;
	HX_STACK_LINE(61)
	bool tmp3 = (parent != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(61)
	if ((tmp3)){
		HX_STACK_LINE(63)
		parent->addFrameCollection(hx::ObjectPtr<OBJ_>(this));
	}
}
;
	return null();
}

//FlxFramesCollection_obj::~FlxFramesCollection_obj() { }

Dynamic FlxFramesCollection_obj::__CreateEmpty() { return  new FlxFramesCollection_obj; }
hx::ObjectPtr< FlxFramesCollection_obj > FlxFramesCollection_obj::__new(::flixel::graphics::FlxGraphic parent,::flixel::graphics::frames::FlxFrameCollectionType type,::flixel::math::FlxPoint border)
{  hx::ObjectPtr< FlxFramesCollection_obj > _result_ = new FlxFramesCollection_obj();
	_result_->__construct(parent,type,border);
	return _result_;}

Dynamic FlxFramesCollection_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxFramesCollection_obj > _result_ = new FlxFramesCollection_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

hx::Object *FlxFramesCollection_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::util::IFlxDestroyable_obj)) return operator ::flixel::util::IFlxDestroyable_obj *();
	return super::__ToInterface(inType);
}

FlxFramesCollection_obj::operator ::flixel::util::IFlxDestroyable_obj *()
	{ return new ::flixel::util::IFlxDestroyable_delegate_< FlxFramesCollection_obj >(this); }
::flixel::graphics::frames::FlxFrame FlxFramesCollection_obj::getByName( ::String name){
	HX_STACK_FRAME("flixel.graphics.frames.FlxFramesCollection","getByName",0xec0f52c9,"flixel.graphics.frames.FlxFramesCollection.getByName","flixel/graphics/frames/FlxFramesCollection.hx",74,0xe09dd200)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(75)
	::haxe::ds::StringMap tmp = this->framesHash;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(75)
	::String tmp1 = name;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(75)
	::flixel::graphics::frames::FlxFrame tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(75)
	::flixel::graphics::frames::FlxFrame tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(75)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxFramesCollection_obj,getByName,return )

::flixel::graphics::frames::FlxFrame FlxFramesCollection_obj::getByIndex( int index){
	HX_STACK_FRAME("flixel.graphics.frames.FlxFramesCollection","getByIndex",0xc8e928d4,"flixel.graphics.frames.FlxFramesCollection.getByIndex","flixel/graphics/frames/FlxFramesCollection.hx",85,0xe09dd200)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(86)
	::flixel::graphics::frames::FlxFrame tmp = this->frames->__get(index).StaticCast< ::flixel::graphics::frames::FlxFrame >();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(86)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxFramesCollection_obj,getByIndex,return )

int FlxFramesCollection_obj::getIndexByName( ::String name){
	HX_STACK_FRAME("flixel.graphics.frames.FlxFramesCollection","getIndexByName",0x9190d40d,"flixel.graphics.frames.FlxFramesCollection.getIndexByName","flixel/graphics/frames/FlxFramesCollection.hx",96,0xe09dd200)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(97)
	{
		HX_STACK_LINE(97)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(97)
		int tmp = this->frames->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(97)
		int _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(97)
		while((true)){
			HX_STACK_LINE(97)
			bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(97)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(97)
			if ((tmp2)){
				HX_STACK_LINE(97)
				break;
			}
			HX_STACK_LINE(97)
			int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(97)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(99)
			::flixel::graphics::frames::FlxFrame tmp4 = this->frames->__get(i).StaticCast< ::flixel::graphics::frames::FlxFrame >();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(99)
			::String tmp5 = tmp4->name;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(99)
			::String tmp6 = name;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(99)
			bool tmp7 = (tmp5 == tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(99)
			if ((tmp7)){
				HX_STACK_LINE(101)
				int tmp8 = i;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(101)
				return tmp8;
			}
		}
	}
	HX_STACK_LINE(105)
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxFramesCollection_obj,getIndexByName,return )

int FlxFramesCollection_obj::getFrameIndex( ::flixel::graphics::frames::FlxFrame frame){
	HX_STACK_FRAME("flixel.graphics.frames.FlxFramesCollection","getFrameIndex",0x9be9862c,"flixel.graphics.frames.FlxFramesCollection.getFrameIndex","flixel/graphics/frames/FlxFramesCollection.hx",115,0xe09dd200)
	HX_STACK_THIS(this)
	HX_STACK_ARG(frame,"frame")
	HX_STACK_LINE(116)
	::flixel::graphics::frames::FlxFrame tmp = frame;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(116)
	int tmp1 = this->frames->indexOf(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(116)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxFramesCollection_obj,getFrameIndex,return )

Void FlxFramesCollection_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.graphics.frames.FlxFramesCollection","destroy",0x3c5f048b,"flixel.graphics.frames.FlxFramesCollection.destroy","flixel/graphics/frames/FlxFramesCollection.hx",120,0xe09dd200)
		HX_STACK_THIS(this)
		HX_STACK_LINE(121)
		this->frames = ::flixel::util::FlxDestroyUtil_obj::destroyArray(this->frames);
		HX_STACK_LINE(122)
		::flixel::math::FlxPoint tmp = this->border;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(122)
		::flixel::math::FlxPoint tmp1 = ::flixel::util::FlxDestroyUtil_obj::put(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(122)
		this->border = tmp1;
		HX_STACK_LINE(123)
		this->framesHash = null();
		HX_STACK_LINE(124)
		this->parent = null();
		HX_STACK_LINE(125)
		this->type = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxFramesCollection_obj,destroy,(void))

::flixel::graphics::frames::FlxFrame FlxFramesCollection_obj::addEmptyFrame( ::flixel::math::FlxRect size){
	HX_STACK_FRAME("flixel.graphics.frames.FlxFramesCollection","addEmptyFrame",0x8f5bf232,"flixel.graphics.frames.FlxFramesCollection.addEmptyFrame","flixel/graphics/frames/FlxFramesCollection.hx",136,0xe09dd200)
	HX_STACK_THIS(this)
	HX_STACK_ARG(size,"size")
	HX_STACK_LINE(137)
	::flixel::graphics::FlxGraphic tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(137)
	::flixel::graphics::frames::FlxFrame tmp1 = ::flixel::graphics::frames::FlxFrame_obj::__new(tmp,null(),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(137)
	::flixel::graphics::frames::FlxFrame frame = tmp1;		HX_STACK_VAR(frame,"frame");
	HX_STACK_LINE(138)
	frame->type = (int)2;
	HX_STACK_LINE(139)
	::flixel::math::FlxRect tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(139)
	{
		HX_STACK_LINE(139)
		Float X = (int)0;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(139)
		Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(139)
		Float Width = (int)0;		HX_STACK_VAR(Width,"Width");
		HX_STACK_LINE(139)
		Float Height = (int)0;		HX_STACK_VAR(Height,"Height");
		HX_STACK_LINE(139)
		::flixel::math::FlxRect tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(139)
		{
			HX_STACK_LINE(139)
			::flixel::util::FlxPool_flixel_math_FlxRect tmp4 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(139)
			::flixel::math::FlxRect tmp5 = tmp4->get();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(139)
			::flixel::math::FlxRect _this = tmp5;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(139)
			_this->x = X;
			HX_STACK_LINE(139)
			_this->y = Y;
			HX_STACK_LINE(139)
			_this->width = Width;
			HX_STACK_LINE(139)
			_this->height = Height;
			HX_STACK_LINE(139)
			tmp3 = _this;
		}
		HX_STACK_LINE(139)
		::flixel::math::FlxRect rect = tmp3;		HX_STACK_VAR(rect,"rect");
		HX_STACK_LINE(139)
		rect->_inPool = false;
		HX_STACK_LINE(139)
		tmp2 = rect;
	}
	HX_STACK_LINE(139)
	frame->set_frame(tmp2);
	HX_STACK_LINE(140)
	Float tmp3 = size->width;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(140)
	Float tmp4 = size->height;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(140)
	frame->sourceSize->set(tmp3,tmp4);
	HX_STACK_LINE(141)
	::flixel::graphics::frames::FlxFrame tmp5 = frame;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(141)
	this->frames->push(tmp5);
	HX_STACK_LINE(142)
	::flixel::graphics::frames::FlxFrame tmp6 = frame;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(142)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxFramesCollection_obj,addEmptyFrame,return )

::flixel::graphics::frames::FlxFrame FlxFramesCollection_obj::addSpriteSheetFrame( ::flixel::math::FlxRect region){
	HX_STACK_FRAME("flixel.graphics.frames.FlxFramesCollection","addSpriteSheetFrame",0x98036ac5,"flixel.graphics.frames.FlxFramesCollection.addSpriteSheetFrame","flixel/graphics/frames/FlxFramesCollection.hx",152,0xe09dd200)
	HX_STACK_THIS(this)
	HX_STACK_ARG(region,"region")
	HX_STACK_LINE(153)
	::flixel::graphics::FlxGraphic tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(153)
	::flixel::graphics::frames::FlxFrame tmp1 = ::flixel::graphics::frames::FlxFrame_obj::__new(tmp,null(),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(153)
	::flixel::graphics::frames::FlxFrame frame = tmp1;		HX_STACK_VAR(frame,"frame");
	HX_STACK_LINE(154)
	::flixel::math::FlxRect tmp2 = region;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(154)
	::flixel::math::FlxRect tmp3 = this->checkFrame(tmp2,null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(154)
	frame->set_frame(tmp3);
	HX_STACK_LINE(155)
	Float tmp4 = region->width;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(155)
	Float tmp5 = region->height;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(155)
	frame->sourceSize->set(tmp4,tmp5);
	HX_STACK_LINE(156)
	frame->offset->set((int)0,(int)0);
	HX_STACK_LINE(157)
	::flixel::graphics::frames::FlxFrame tmp6 = frame;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(157)
	::flixel::graphics::frames::FlxFrame tmp7 = this->pushFrame(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(157)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxFramesCollection_obj,addSpriteSheetFrame,return )

::flixel::graphics::frames::FlxFrame FlxFramesCollection_obj::addAtlasFrame( ::flixel::math::FlxRect frame,::flixel::math::FlxPoint sourceSize,::flixel::math::FlxPoint offset,::String name,hx::Null< int >  __o_angle,hx::Null< bool >  __o_flipX,hx::Null< bool >  __o_flipY){
int angle = __o_angle.Default(0);
bool flipX = __o_flipX.Default(false);
bool flipY = __o_flipY.Default(false);
	HX_STACK_FRAME("flixel.graphics.frames.FlxFramesCollection","addAtlasFrame",0xf1c62eb4,"flixel.graphics.frames.FlxFramesCollection.addAtlasFrame","flixel/graphics/frames/FlxFramesCollection.hx",172,0xe09dd200)
	HX_STACK_THIS(this)
	HX_STACK_ARG(frame,"frame")
	HX_STACK_ARG(sourceSize,"sourceSize")
	HX_STACK_ARG(offset,"offset")
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(angle,"angle")
	HX_STACK_ARG(flipX,"flipX")
	HX_STACK_ARG(flipY,"flipY")
{
		HX_STACK_LINE(173)
		bool tmp = (name != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(173)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(173)
		if ((tmp)){
			HX_STACK_LINE(173)
			::haxe::ds::StringMap tmp2 = this->framesHash;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(173)
			::haxe::ds::StringMap tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(173)
			::String tmp4 = name;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(173)
			::String tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(173)
			tmp1 = tmp3->exists(tmp5);
		}
		else{
			HX_STACK_LINE(173)
			tmp1 = false;
		}
		HX_STACK_LINE(173)
		if ((tmp1)){
			HX_STACK_LINE(175)
			::haxe::ds::StringMap tmp2 = this->framesHash;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(175)
			::String tmp3 = name;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(175)
			::flixel::graphics::frames::FlxFrame tmp4 = tmp2->get(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(175)
			::flixel::graphics::frames::FlxFrame tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(175)
			return tmp5;
		}
		HX_STACK_LINE(178)
		::flixel::graphics::FlxGraphic tmp2 = this->parent;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(178)
		int tmp3 = angle;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(178)
		bool tmp4 = flipX;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(178)
		bool tmp5 = flipY;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(178)
		::flixel::graphics::frames::FlxFrame tmp6 = ::flixel::graphics::frames::FlxFrame_obj::__new(tmp2,tmp3,tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(178)
		::flixel::graphics::frames::FlxFrame texFrame = tmp6;		HX_STACK_VAR(texFrame,"texFrame");
		HX_STACK_LINE(179)
		texFrame->name = name;
		HX_STACK_LINE(180)
		Float tmp7 = sourceSize->x;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(180)
		Float tmp8 = sourceSize->y;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(180)
		texFrame->sourceSize->set(tmp7,tmp8);
		HX_STACK_LINE(181)
		Float tmp9 = offset->x;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(181)
		Float tmp10 = offset->y;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(181)
		texFrame->offset->set(tmp9,tmp10);
		HX_STACK_LINE(182)
		::flixel::math::FlxRect tmp11 = frame;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(182)
		::String tmp12 = name;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(182)
		::flixel::math::FlxRect tmp13 = this->checkFrame(tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(182)
		texFrame->set_frame(tmp13);
		HX_STACK_LINE(184)
		::flixel::math::FlxPoint tmp14 = sourceSize;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(184)
		::flixel::math::FlxPoint tmp15 = ::flixel::util::FlxDestroyUtil_obj::put(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(184)
		sourceSize = tmp15;
		HX_STACK_LINE(185)
		::flixel::math::FlxPoint tmp16 = offset;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(185)
		::flixel::math::FlxPoint tmp17 = ::flixel::util::FlxDestroyUtil_obj::put(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(185)
		offset = tmp17;
		HX_STACK_LINE(187)
		::flixel::graphics::frames::FlxFrame tmp18 = texFrame;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(187)
		::flixel::graphics::frames::FlxFrame tmp19 = this->pushFrame(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(187)
		return tmp19;
	}
}


HX_DEFINE_DYNAMIC_FUNC7(FlxFramesCollection_obj,addAtlasFrame,return )

::flixel::math::FlxRect FlxFramesCollection_obj::checkFrame( ::flixel::math::FlxRect frame,::String name){
	HX_STACK_FRAME("flixel.graphics.frames.FlxFramesCollection","checkFrame",0xf252f354,"flixel.graphics.frames.FlxFramesCollection.checkFrame","flixel/graphics/frames/FlxFramesCollection.hx",197,0xe09dd200)
	HX_STACK_THIS(this)
	HX_STACK_ARG(frame,"frame")
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(198)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(198)
	{
		HX_STACK_LINE(198)
		Float Value = frame->x;		HX_STACK_VAR(Value,"Value");
		HX_STACK_LINE(198)
		::flixel::graphics::FlxGraphic tmp1 = this->parent;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(198)
		Dynamic Max = tmp1->width;		HX_STACK_VAR(Max,"Max");
		HX_STACK_LINE(198)
		bool tmp2 = true;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(198)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(198)
		if ((tmp2)){
			HX_STACK_LINE(198)
			tmp3 = (Value < (int)0);
		}
		else{
			HX_STACK_LINE(198)
			tmp3 = false;
		}
		HX_STACK_LINE(198)
		Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(198)
		if ((tmp3)){
			HX_STACK_LINE(198)
			tmp4 = (int)0;
		}
		else{
			HX_STACK_LINE(198)
			tmp4 = Value;
		}
		HX_STACK_LINE(198)
		Float lowerBound = tmp4;		HX_STACK_VAR(lowerBound,"lowerBound");
		HX_STACK_LINE(198)
		bool tmp5 = (Max != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(198)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(198)
		if ((tmp5)){
			HX_STACK_LINE(198)
			tmp6 = (lowerBound > Max);
		}
		else{
			HX_STACK_LINE(198)
			tmp6 = false;
		}
		HX_STACK_LINE(198)
		if ((tmp6)){
			HX_STACK_LINE(198)
			tmp = Max;
		}
		else{
			HX_STACK_LINE(198)
			tmp = lowerBound;
		}
	}
	HX_STACK_LINE(198)
	Float x = tmp;		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(199)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(199)
	{
		HX_STACK_LINE(199)
		Float Value = frame->y;		HX_STACK_VAR(Value,"Value");
		HX_STACK_LINE(199)
		::flixel::graphics::FlxGraphic tmp2 = this->parent;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(199)
		Dynamic Max = tmp2->height;		HX_STACK_VAR(Max,"Max");
		HX_STACK_LINE(199)
		bool tmp3 = true;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(199)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(199)
		if ((tmp3)){
			HX_STACK_LINE(199)
			tmp4 = (Value < (int)0);
		}
		else{
			HX_STACK_LINE(199)
			tmp4 = false;
		}
		HX_STACK_LINE(199)
		Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(199)
		if ((tmp4)){
			HX_STACK_LINE(199)
			tmp5 = (int)0;
		}
		else{
			HX_STACK_LINE(199)
			tmp5 = Value;
		}
		HX_STACK_LINE(199)
		Float lowerBound = tmp5;		HX_STACK_VAR(lowerBound,"lowerBound");
		HX_STACK_LINE(199)
		bool tmp6 = (Max != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(199)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(199)
		if ((tmp6)){
			HX_STACK_LINE(199)
			tmp7 = (lowerBound > Max);
		}
		else{
			HX_STACK_LINE(199)
			tmp7 = false;
		}
		HX_STACK_LINE(199)
		if ((tmp7)){
			HX_STACK_LINE(199)
			tmp1 = Max;
		}
		else{
			HX_STACK_LINE(199)
			tmp1 = lowerBound;
		}
	}
	HX_STACK_LINE(199)
	Float y = tmp1;		HX_STACK_VAR(y,"y");
	HX_STACK_LINE(201)
	Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(201)
	{
		HX_STACK_LINE(201)
		Float tmp3 = (frame->x + frame->width);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(201)
		Float Value = tmp3;		HX_STACK_VAR(Value,"Value");
		HX_STACK_LINE(201)
		::flixel::graphics::FlxGraphic tmp4 = this->parent;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(201)
		Dynamic Max = tmp4->width;		HX_STACK_VAR(Max,"Max");
		HX_STACK_LINE(201)
		bool tmp5 = true;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(201)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(201)
		if ((tmp5)){
			HX_STACK_LINE(201)
			tmp6 = (Value < (int)0);
		}
		else{
			HX_STACK_LINE(201)
			tmp6 = false;
		}
		HX_STACK_LINE(201)
		Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(201)
		if ((tmp6)){
			HX_STACK_LINE(201)
			tmp7 = (int)0;
		}
		else{
			HX_STACK_LINE(201)
			tmp7 = Value;
		}
		HX_STACK_LINE(201)
		Float lowerBound = tmp7;		HX_STACK_VAR(lowerBound,"lowerBound");
		HX_STACK_LINE(201)
		bool tmp8 = (Max != null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(201)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(201)
		if ((tmp8)){
			HX_STACK_LINE(201)
			tmp9 = (lowerBound > Max);
		}
		else{
			HX_STACK_LINE(201)
			tmp9 = false;
		}
		HX_STACK_LINE(201)
		if ((tmp9)){
			HX_STACK_LINE(201)
			tmp2 = Max;
		}
		else{
			HX_STACK_LINE(201)
			tmp2 = lowerBound;
		}
	}
	HX_STACK_LINE(201)
	Float r = tmp2;		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(202)
	Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(202)
	{
		HX_STACK_LINE(202)
		Float tmp4 = (frame->y + frame->height);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(202)
		Float Value = tmp4;		HX_STACK_VAR(Value,"Value");
		HX_STACK_LINE(202)
		::flixel::graphics::FlxGraphic tmp5 = this->parent;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(202)
		Dynamic Max = tmp5->height;		HX_STACK_VAR(Max,"Max");
		HX_STACK_LINE(202)
		bool tmp6 = true;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(202)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(202)
		if ((tmp6)){
			HX_STACK_LINE(202)
			tmp7 = (Value < (int)0);
		}
		else{
			HX_STACK_LINE(202)
			tmp7 = false;
		}
		HX_STACK_LINE(202)
		Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(202)
		if ((tmp7)){
			HX_STACK_LINE(202)
			tmp8 = (int)0;
		}
		else{
			HX_STACK_LINE(202)
			tmp8 = Value;
		}
		HX_STACK_LINE(202)
		Float lowerBound = tmp8;		HX_STACK_VAR(lowerBound,"lowerBound");
		HX_STACK_LINE(202)
		bool tmp9 = (Max != null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(202)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(202)
		if ((tmp9)){
			HX_STACK_LINE(202)
			tmp10 = (lowerBound > Max);
		}
		else{
			HX_STACK_LINE(202)
			tmp10 = false;
		}
		HX_STACK_LINE(202)
		if ((tmp10)){
			HX_STACK_LINE(202)
			tmp3 = Max;
		}
		else{
			HX_STACK_LINE(202)
			tmp3 = lowerBound;
		}
	}
	HX_STACK_LINE(202)
	Float b = tmp3;		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(204)
	{
		HX_STACK_LINE(204)
		frame->x = x;
		HX_STACK_LINE(204)
		frame->y = y;
		HX_STACK_LINE(204)
		Float tmp4 = (r - x);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(204)
		frame->width = tmp4;
		HX_STACK_LINE(204)
		Float tmp5 = (b - y);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(204)
		frame->height = tmp5;
		HX_STACK_LINE(204)
		frame;
	}
	HX_STACK_LINE(206)
	bool tmp4 = (frame->width <= (int)0);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(206)
	bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(206)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(206)
	if ((tmp5)){
		HX_STACK_LINE(206)
		tmp6 = (frame->height <= (int)0);
	}
	else{
		HX_STACK_LINE(206)
		tmp6 = true;
	}
	HX_STACK_LINE(206)
	if ((tmp6)){
		HX_STACK_LINE(207)
		Dynamic();
	}
	HX_STACK_LINE(209)
	::flixel::math::FlxRect tmp7 = frame;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(209)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxFramesCollection_obj,checkFrame,return )

::flixel::graphics::frames::FlxFrame FlxFramesCollection_obj::pushFrame( ::flixel::graphics::frames::FlxFrame frameObj){
	HX_STACK_FRAME("flixel.graphics.frames.FlxFramesCollection","pushFrame",0xac097dc4,"flixel.graphics.frames.FlxFramesCollection.pushFrame","flixel/graphics/frames/FlxFramesCollection.hx",219,0xe09dd200)
	HX_STACK_THIS(this)
	HX_STACK_ARG(frameObj,"frameObj")
	HX_STACK_LINE(220)
	::String name = frameObj->name;		HX_STACK_VAR(name,"name");
	HX_STACK_LINE(221)
	bool tmp = (name != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(221)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(221)
	if ((tmp)){
		HX_STACK_LINE(221)
		::haxe::ds::StringMap tmp2 = this->framesHash;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(221)
		::haxe::ds::StringMap tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(221)
		::String tmp4 = name;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(221)
		::String tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(221)
		tmp1 = tmp3->exists(tmp5);
	}
	else{
		HX_STACK_LINE(221)
		tmp1 = false;
	}
	HX_STACK_LINE(221)
	if ((tmp1)){
		HX_STACK_LINE(223)
		::haxe::ds::StringMap tmp2 = this->framesHash;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(223)
		::String tmp3 = name;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(223)
		::flixel::graphics::frames::FlxFrame tmp4 = tmp2->get(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(223)
		::flixel::graphics::frames::FlxFrame tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(223)
		return tmp5;
	}
	HX_STACK_LINE(226)
	::flixel::graphics::frames::FlxFrame tmp2 = frameObj;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(226)
	this->frames->push(tmp2);
	HX_STACK_LINE(227)
	frameObj->cacheFrameMatrix();
	HX_STACK_LINE(229)
	bool tmp3 = (name != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(229)
	if ((tmp3)){
		HX_STACK_LINE(231)
		::haxe::ds::StringMap tmp4 = this->framesHash;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(231)
		::String tmp5 = name;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(231)
		::flixel::graphics::frames::FlxFrame tmp6 = frameObj;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(231)
		tmp4->set(tmp5,tmp6);
	}
	HX_STACK_LINE(234)
	::flixel::graphics::frames::FlxFrame tmp4 = frameObj;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(234)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxFramesCollection_obj,pushFrame,return )

::flixel::graphics::frames::FlxFramesCollection FlxFramesCollection_obj::addBorder( ::flixel::math::FlxPoint border){
	HX_STACK_FRAME("flixel.graphics.frames.FlxFramesCollection","addBorder",0x7da91fbe,"flixel.graphics.frames.FlxFramesCollection.addBorder","flixel/graphics/frames/FlxFramesCollection.hx",244,0xe09dd200)
	HX_STACK_THIS(this)
	HX_STACK_ARG(border,"border")
	HX_STACK_LINE(245)
	HX_STACK_DO_THROW(HX_HCSTRING("To be overriden in subclasses","\x8b","\x78","\x89","\x60"));
	HX_STACK_LINE(246)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxFramesCollection_obj,addBorder,return )

::String FlxFramesCollection_obj::toString( ){
	HX_STACK_FRAME("flixel.graphics.frames.FlxFramesCollection","toString",0xfe5297fb,"flixel.graphics.frames.FlxFramesCollection.toString","flixel/graphics/frames/FlxFramesCollection.hx",250,0xe09dd200)
	HX_STACK_THIS(this)
	HX_STACK_LINE(252)
	::flixel::util::LabelValuePair tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(252)
	{
		HX_STACK_LINE(252)
		::flixel::util::FlxPool_flixel_util_LabelValuePair tmp1 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(252)
		::flixel::util::LabelValuePair tmp2 = tmp1->get();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(252)
		::flixel::util::LabelValuePair _this = tmp2;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(252)
		_this->label = HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac");
		HX_STACK_LINE(252)
		_this->value = this->frames;
		HX_STACK_LINE(252)
		tmp = _this;
	}
	HX_STACK_LINE(253)
	::flixel::util::LabelValuePair tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(253)
	{
		HX_STACK_LINE(253)
		::flixel::util::FlxPool_flixel_util_LabelValuePair tmp2 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(253)
		::flixel::util::LabelValuePair tmp3 = tmp2->get();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(253)
		::flixel::util::LabelValuePair _this = tmp3;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(253)
		_this->label = HX_HCSTRING("type","\xba","\xf2","\x08","\x4d");
		HX_STACK_LINE(253)
		::flixel::graphics::frames::FlxFrameCollectionType tmp4 = this->type;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(253)
		_this->value = tmp4;
		HX_STACK_LINE(253)
		tmp1 = _this;
	}
	HX_STACK_LINE(251)
	::String tmp2 = ::flixel::util::FlxStringUtil_obj::getDebugString(Array_obj< ::Dynamic >::__new().Add(tmp).Add(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(251)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxFramesCollection_obj,toString,return )

int FlxFramesCollection_obj::get_numFrames( ){
	HX_STACK_FRAME("flixel.graphics.frames.FlxFramesCollection","get_numFrames",0xbd2728b4,"flixel.graphics.frames.FlxFramesCollection.get_numFrames","flixel/graphics/frames/FlxFramesCollection.hx",257,0xe09dd200)
	HX_STACK_THIS(this)
	HX_STACK_LINE(258)
	int tmp = this->frames->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(258)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxFramesCollection_obj,get_numFrames,return )


FlxFramesCollection_obj::FlxFramesCollection_obj()
{
}

void FlxFramesCollection_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxFramesCollection);
	HX_MARK_MEMBER_NAME(frames,"frames");
	HX_MARK_MEMBER_NAME(framesHash,"framesHash");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(border,"border");
	HX_MARK_END_CLASS();
}

void FlxFramesCollection_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(frames,"frames");
	HX_VISIT_MEMBER_NAME(framesHash,"framesHash");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(border,"border");
}

Dynamic FlxFramesCollection_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"frames") ) { return frames; }
		if (HX_FIELD_EQ(inName,"parent") ) { return parent; }
		if (HX_FIELD_EQ(inName,"border") ) { return border; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"numFrames") ) { if (inCallProp == hx::paccAlways) return get_numFrames(); }
		if (HX_FIELD_EQ(inName,"getByName") ) { return getByName_dyn(); }
		if (HX_FIELD_EQ(inName,"pushFrame") ) { return pushFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"addBorder") ) { return addBorder_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"framesHash") ) { return framesHash; }
		if (HX_FIELD_EQ(inName,"getByIndex") ) { return getByIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"checkFrame") ) { return checkFrame_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getFrameIndex") ) { return getFrameIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"addEmptyFrame") ) { return addEmptyFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"addAtlasFrame") ) { return addAtlasFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"get_numFrames") ) { return get_numFrames_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getIndexByName") ) { return getIndexByName_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"addSpriteSheetFrame") ) { return addSpriteSheetFrame_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxFramesCollection_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::flixel::graphics::frames::FlxFrameCollectionType >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"frames") ) { frames=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast< ::flixel::graphics::FlxGraphic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"border") ) { border=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"framesHash") ) { framesHash=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxFramesCollection_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac"));
	outFields->push(HX_HCSTRING("numFrames","\x8c","\xfa","\x86","\x5d"));
	outFields->push(HX_HCSTRING("framesHash","\x94","\xd6","\xee","\xb6"));
	outFields->push(HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("border","\xec","\x4c","\x1a","\x64"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxFramesCollection_obj,frames),HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(FlxFramesCollection_obj,framesHash),HX_HCSTRING("framesHash","\x94","\xd6","\xee","\xb6")},
	{hx::fsObject /*::flixel::graphics::FlxGraphic*/ ,(int)offsetof(FlxFramesCollection_obj,parent),HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed")},
	{hx::fsObject /*::flixel::graphics::frames::FlxFrameCollectionType*/ ,(int)offsetof(FlxFramesCollection_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxFramesCollection_obj,border),HX_HCSTRING("border","\xec","\x4c","\x1a","\x64")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac"),
	HX_HCSTRING("framesHash","\x94","\xd6","\xee","\xb6"),
	HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("border","\xec","\x4c","\x1a","\x64"),
	HX_HCSTRING("getByName","\xf8","\xb4","\xa4","\x8a"),
	HX_HCSTRING("getByIndex","\xc5","\xaf","\x09","\xed"),
	HX_HCSTRING("getIndexByName","\x7e","\x27","\xfe","\xba"),
	HX_HCSTRING("getFrameIndex","\xdb","\x2b","\xad","\xfd"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("addEmptyFrame","\xe1","\x97","\x1f","\xf1"),
	HX_HCSTRING("addSpriteSheetFrame","\xb4","\xfd","\xbc","\xf0"),
	HX_HCSTRING("addAtlasFrame","\x63","\xd4","\x89","\x53"),
	HX_HCSTRING("checkFrame","\x45","\x7a","\x73","\x16"),
	HX_HCSTRING("pushFrame","\xf3","\xdf","\x9e","\x4a"),
	HX_HCSTRING("addBorder","\xed","\x81","\x3e","\x1c"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("get_numFrames","\x63","\xce","\xea","\x1e"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxFramesCollection_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxFramesCollection_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxFramesCollection_obj::__mClass;

void FlxFramesCollection_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.graphics.frames.FlxFramesCollection","\xff","\xbe","\x62","\x54");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxFramesCollection_obj >;
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
