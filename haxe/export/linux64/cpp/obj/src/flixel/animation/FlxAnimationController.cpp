#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
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
#ifndef INCLUDED_flixel_animation_FlxAnimation
#include <flixel/animation/FlxAnimation.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxBaseAnimation
#include <flixel/animation/FlxBaseAnimation.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxPrerotatedAnimation
#include <flixel/animation/FlxPrerotatedAnimation.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFrame
#include <flixel/graphics/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
namespace flixel{
namespace animation{

Void FlxAnimationController_obj::__construct(::flixel::FlxSprite Sprite)
{
HX_STACK_FRAME("flixel.animation.FlxAnimationController","new",0x0b6477fc,"flixel.animation.FlxAnimationController.new","flixel/animation/FlxAnimationController.hx",8,0xa6f01372)
HX_STACK_THIS(this)
HX_STACK_ARG(Sprite,"Sprite")
{
	HX_STACK_LINE(18)
	this->frameIndex = (int)-1;
	HX_STACK_LINE(79)
	this->_sprite = Sprite;
	HX_STACK_LINE(80)
	::haxe::ds::StringMap tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(80)
	{
		HX_STACK_LINE(80)
		::haxe::ds::StringMap tmp1 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(80)
		::haxe::ds::StringMap tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(80)
		tmp = tmp2;
	}
	HX_STACK_LINE(80)
	this->_animations = tmp;
}
;
	return null();
}

//FlxAnimationController_obj::~FlxAnimationController_obj() { }

Dynamic FlxAnimationController_obj::__CreateEmpty() { return  new FlxAnimationController_obj; }
hx::ObjectPtr< FlxAnimationController_obj > FlxAnimationController_obj::__new(::flixel::FlxSprite Sprite)
{  hx::ObjectPtr< FlxAnimationController_obj > _result_ = new FlxAnimationController_obj();
	_result_->__construct(Sprite);
	return _result_;}

Dynamic FlxAnimationController_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxAnimationController_obj > _result_ = new FlxAnimationController_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

hx::Object *FlxAnimationController_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::util::IFlxDestroyable_obj)) return operator ::flixel::util::IFlxDestroyable_obj *();
	return super::__ToInterface(inType);
}

FlxAnimationController_obj::operator ::flixel::util::IFlxDestroyable_obj *()
	{ return new ::flixel::util::IFlxDestroyable_delegate_< FlxAnimationController_obj >(this); }
Void FlxAnimationController_obj::update( Float elapsed){
{
		HX_STACK_FRAME("flixel.animation.FlxAnimationController","update",0x8fb487ed,"flixel.animation.FlxAnimationController.update","flixel/animation/FlxAnimationController.hx",84,0xa6f01372)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(85)
		::flixel::animation::FlxAnimation tmp = this->_curAnim;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(85)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(85)
		if ((tmp1)){
			HX_STACK_LINE(87)
			::flixel::animation::FlxAnimation tmp2 = this->_curAnim;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(87)
			Float tmp3 = elapsed;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(87)
			tmp2->update(tmp3);
		}
		else{
			HX_STACK_LINE(89)
			::flixel::animation::FlxPrerotatedAnimation tmp2 = this->_prerotated;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(89)
			bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(89)
			if ((tmp3)){
				HX_STACK_LINE(91)
				::flixel::animation::FlxPrerotatedAnimation tmp4 = this->_prerotated;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(91)
				::flixel::FlxSprite tmp5 = this->_sprite;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(91)
				Float tmp6 = tmp5->angle;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(91)
				tmp4->set_angle(tmp6);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxAnimationController_obj,update,(void))

::flixel::animation::FlxAnimationController FlxAnimationController_obj::copyFrom( ::flixel::animation::FlxAnimationController controller){
	HX_STACK_FRAME("flixel.animation.FlxAnimationController","copyFrom",0x9c3f4ea3,"flixel.animation.FlxAnimationController.copyFrom","flixel/animation/FlxAnimationController.hx",96,0xa6f01372)
	HX_STACK_THIS(this)
	HX_STACK_ARG(controller,"controller")
	HX_STACK_LINE(97)
	this->destroyAnimations();
	HX_STACK_LINE(99)
	Dynamic tmp = controller->_animations->iterator();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(99)
	for(::cpp::FastIterator_obj< ::flixel::animation::FlxAnimation > *__it = ::cpp::CreateFastIterator< ::flixel::animation::FlxAnimation >(tmp);  __it->hasNext(); ){
		::flixel::animation::FlxAnimation anim = __it->next();
		{
			HX_STACK_LINE(101)
			::String tmp1 = anim->name;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(101)
			int tmp2 = anim->frameRate;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(101)
			bool tmp3 = anim->looped;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(101)
			this->add(tmp1,anim->frames,tmp2,tmp3,null(),null());
		}
;
	}
	HX_STACK_LINE(104)
	bool tmp1 = (controller->_prerotated != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(104)
	if ((tmp1)){
		HX_STACK_LINE(106)
		this->createPrerotated(null());
	}
	HX_STACK_LINE(109)
	::String tmp2 = controller->get_name();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(109)
	bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(109)
	if ((tmp3)){
		HX_STACK_LINE(111)
		::String tmp4 = controller->get_name();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(111)
		this->set_name(tmp4);
	}
	HX_STACK_LINE(114)
	int tmp4 = controller->frameIndex;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(114)
	this->set_frameIndex(tmp4);
	HX_STACK_LINE(116)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxAnimationController_obj,copyFrom,return )

Void FlxAnimationController_obj::createPrerotated( ::flixel::animation::FlxAnimationController Controller){
{
		HX_STACK_FRAME("flixel.animation.FlxAnimationController","createPrerotated",0xc538c8e6,"flixel.animation.FlxAnimationController.createPrerotated","flixel/animation/FlxAnimationController.hx",120,0xa6f01372)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Controller,"Controller")
		HX_STACK_LINE(121)
		this->destroyAnimations();
		HX_STACK_LINE(122)
		bool tmp = (Controller != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(122)
		::flixel::animation::FlxAnimationController tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(122)
		if ((tmp)){
			HX_STACK_LINE(122)
			tmp1 = Controller;
		}
		else{
			HX_STACK_LINE(122)
			tmp1 = hx::ObjectPtr<OBJ_>(this);
		}
		HX_STACK_LINE(122)
		Controller = tmp1;
		HX_STACK_LINE(123)
		::flixel::animation::FlxAnimationController tmp2 = Controller;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(123)
		Float tmp3 = Controller->_sprite->bakedRotationAngle;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(123)
		::flixel::animation::FlxPrerotatedAnimation tmp4 = ::flixel::animation::FlxPrerotatedAnimation_obj::__new(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(123)
		this->_prerotated = tmp4;
		HX_STACK_LINE(124)
		::flixel::animation::FlxPrerotatedAnimation tmp5 = this->_prerotated;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(124)
		::flixel::FlxSprite tmp6 = this->_sprite;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(124)
		Float tmp7 = tmp6->angle;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(124)
		tmp5->set_angle(tmp7);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxAnimationController_obj,createPrerotated,(void))

Void FlxAnimationController_obj::destroyAnimations( ){
{
		HX_STACK_FRAME("flixel.animation.FlxAnimationController","destroyAnimations",0x0b136325,"flixel.animation.FlxAnimationController.destroyAnimations","flixel/animation/FlxAnimationController.hx",128,0xa6f01372)
		HX_STACK_THIS(this)
		HX_STACK_LINE(129)
		this->clearAnimations();
		HX_STACK_LINE(130)
		this->clearPrerotated();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimationController_obj,destroyAnimations,(void))

Void FlxAnimationController_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.animation.FlxAnimationController","destroy",0xb4f8d296,"flixel.animation.FlxAnimationController.destroy","flixel/animation/FlxAnimationController.hx",134,0xa6f01372)
		HX_STACK_THIS(this)
		HX_STACK_LINE(135)
		this->destroyAnimations();
		HX_STACK_LINE(136)
		this->_animations = null();
		HX_STACK_LINE(137)
		this->callback = null();
		HX_STACK_LINE(138)
		this->_sprite = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimationController_obj,destroy,(void))

Void FlxAnimationController_obj::clearPrerotated( ){
{
		HX_STACK_FRAME("flixel.animation.FlxAnimationController","clearPrerotated",0x8ef9ed6f,"flixel.animation.FlxAnimationController.clearPrerotated","flixel/animation/FlxAnimationController.hx",142,0xa6f01372)
		HX_STACK_THIS(this)
		HX_STACK_LINE(143)
		::flixel::animation::FlxPrerotatedAnimation tmp = this->_prerotated;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(143)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(143)
		if ((tmp1)){
			HX_STACK_LINE(145)
			::flixel::animation::FlxPrerotatedAnimation tmp2 = this->_prerotated;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(145)
			tmp2->destroy();
		}
		HX_STACK_LINE(147)
		this->_prerotated = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimationController_obj,clearPrerotated,(void))

Void FlxAnimationController_obj::clearAnimations( ){
{
		HX_STACK_FRAME("flixel.animation.FlxAnimationController","clearAnimations",0x7ffc9e78,"flixel.animation.FlxAnimationController.clearAnimations","flixel/animation/FlxAnimationController.hx",151,0xa6f01372)
		HX_STACK_THIS(this)
		HX_STACK_LINE(152)
		::haxe::ds::StringMap tmp = this->_animations;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(152)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(152)
		if ((tmp1)){
			HX_STACK_LINE(154)
			::flixel::animation::FlxAnimation anim;		HX_STACK_VAR(anim,"anim");
			HX_STACK_LINE(155)
			::haxe::ds::StringMap tmp2 = this->_animations;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(155)
			Dynamic tmp3 = tmp2->keys();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(155)
			for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp3);  __it->hasNext(); ){
				::String key = __it->next();
				{
					HX_STACK_LINE(157)
					::haxe::ds::StringMap tmp4 = this->_animations;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(157)
					::String tmp5 = key;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(157)
					::flixel::animation::FlxAnimation tmp6 = tmp4->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(157)
					anim = tmp6;
					HX_STACK_LINE(158)
					bool tmp7 = (anim != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(158)
					if ((tmp7)){
						HX_STACK_LINE(160)
						anim->destroy();
					}
					HX_STACK_LINE(162)
					::haxe::ds::StringMap tmp8 = this->_animations;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(162)
					::String tmp9 = key;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(162)
					tmp8->remove(tmp9);
				}
;
			}
		}
		HX_STACK_LINE(165)
		this->_curAnim = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimationController_obj,clearAnimations,(void))

Void FlxAnimationController_obj::add( ::String Name,Array< int > Frames,hx::Null< int >  __o_FrameRate,hx::Null< bool >  __o_Looped,hx::Null< bool >  __o_FlipX,hx::Null< bool >  __o_FlipY){
int FrameRate = __o_FrameRate.Default(30);
bool Looped = __o_Looped.Default(true);
bool FlipX = __o_FlipX.Default(false);
bool FlipY = __o_FlipY.Default(false);
	HX_STACK_FRAME("flixel.animation.FlxAnimationController","add",0x0b5a99bd,"flixel.animation.FlxAnimationController.add","flixel/animation/FlxAnimationController.hx",179,0xa6f01372)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Name,"Name")
	HX_STACK_ARG(Frames,"Frames")
	HX_STACK_ARG(FrameRate,"FrameRate")
	HX_STACK_ARG(Looped,"Looped")
	HX_STACK_ARG(FlipX,"FlipX")
	HX_STACK_ARG(FlipY,"FlipY")
{
		HX_STACK_LINE(181)
		Array< int > framesToAdd = Frames;		HX_STACK_VAR(framesToAdd,"framesToAdd");
		HX_STACK_LINE(182)
		int tmp = (framesToAdd->length - (int)1);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(182)
		int numFrames = tmp;		HX_STACK_VAR(numFrames,"numFrames");
		HX_STACK_LINE(183)
		int i = numFrames;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(184)
		while((true)){
			HX_STACK_LINE(184)
			bool tmp1 = (i >= (int)0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(184)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(184)
			if ((tmp2)){
				HX_STACK_LINE(184)
				break;
			}
			HX_STACK_LINE(186)
			int tmp3 = framesToAdd->__get(i);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(186)
			::flixel::FlxSprite tmp4 = this->_sprite;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(186)
			int tmp5 = tmp4->numFrames;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(186)
			bool tmp6 = (tmp3 >= tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(186)
			if ((tmp6)){
				HX_STACK_LINE(190)
				bool tmp7 = (framesToAdd == Frames);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(190)
				if ((tmp7)){
					HX_STACK_LINE(192)
					framesToAdd = Frames->copy();
				}
				HX_STACK_LINE(195)
				int tmp8 = i;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(195)
				framesToAdd->splice(tmp8,(int)1);
			}
			HX_STACK_LINE(197)
			(i)--;
		}
		HX_STACK_LINE(200)
		bool tmp1 = (framesToAdd->length > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(200)
		if ((tmp1)){
			HX_STACK_LINE(202)
			::flixel::animation::FlxAnimation tmp2 = ::flixel::animation::FlxAnimation_obj::__new(hx::ObjectPtr<OBJ_>(this),Name,framesToAdd,FrameRate,Looped,FlipX,FlipY);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(202)
			::flixel::animation::FlxAnimation anim = tmp2;		HX_STACK_VAR(anim,"anim");
			HX_STACK_LINE(203)
			::haxe::ds::StringMap tmp3 = this->_animations;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(203)
			::String tmp4 = Name;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(203)
			::flixel::animation::FlxAnimation tmp5 = anim;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(203)
			tmp3->set(tmp4,tmp5);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(FlxAnimationController_obj,add,(void))

Void FlxAnimationController_obj::remove( ::String Name){
{
		HX_STACK_FRAME("flixel.animation.FlxAnimationController","remove",0x0d379e28,"flixel.animation.FlxAnimationController.remove","flixel/animation/FlxAnimationController.hx",213,0xa6f01372)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Name,"Name")
		HX_STACK_LINE(214)
		::haxe::ds::StringMap tmp = this->_animations;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(214)
		::String tmp1 = Name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(214)
		::flixel::animation::FlxAnimation tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(214)
		::flixel::animation::FlxAnimation anim = tmp2;		HX_STACK_VAR(anim,"anim");
		HX_STACK_LINE(215)
		bool tmp3 = (anim != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(215)
		if ((tmp3)){
			HX_STACK_LINE(217)
			::haxe::ds::StringMap tmp4 = this->_animations;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(217)
			::String tmp5 = Name;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(217)
			tmp4->remove(tmp5);
			HX_STACK_LINE(218)
			anim->destroy();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxAnimationController_obj,remove,(void))

Void FlxAnimationController_obj::append( ::String Name,Array< int > Frames){
{
		HX_STACK_FRAME("flixel.animation.FlxAnimationController","append",0x9882e3be,"flixel.animation.FlxAnimationController.append","flixel/animation/FlxAnimationController.hx",231,0xa6f01372)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Name,"Name")
		HX_STACK_ARG(Frames,"Frames")
		HX_STACK_LINE(232)
		::haxe::ds::StringMap tmp = this->_animations;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(232)
		::String tmp1 = Name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(232)
		::flixel::animation::FlxAnimation tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(232)
		::flixel::animation::FlxAnimation anim = tmp2;		HX_STACK_VAR(anim,"anim");
		HX_STACK_LINE(234)
		bool tmp3 = (anim == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(234)
		if ((tmp3)){
			HX_STACK_LINE(238)
			return null();
		}
		HX_STACK_LINE(242)
		int tmp4 = (Frames->length - (int)1);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(242)
		int numFrames = tmp4;		HX_STACK_VAR(numFrames,"numFrames");
		HX_STACK_LINE(243)
		int i = numFrames;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(244)
		while((true)){
			HX_STACK_LINE(244)
			bool tmp5 = (i >= (int)0);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(244)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(244)
			if ((tmp6)){
				HX_STACK_LINE(244)
				break;
			}
			HX_STACK_LINE(246)
			int tmp7 = (numFrames - i);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(246)
			int tmp8 = Frames->__get(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(246)
			::flixel::FlxSprite tmp9 = this->_sprite;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(246)
			int tmp10 = tmp9->numFrames;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(246)
			bool tmp11 = (tmp8 < tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(246)
			if ((tmp11)){
				HX_STACK_LINE(249)
				int tmp12 = (numFrames - i);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(249)
				int tmp13 = Frames->__get(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(249)
				anim->frames->push(tmp13);
			}
			HX_STACK_LINE(251)
			(i)--;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxAnimationController_obj,append,(void))

Void FlxAnimationController_obj::addByNames( ::String Name,Array< ::String > FrameNames,hx::Null< int >  __o_FrameRate,hx::Null< bool >  __o_Looped,hx::Null< bool >  __o_FlipX,hx::Null< bool >  __o_FlipY){
int FrameRate = __o_FrameRate.Default(30);
bool Looped = __o_Looped.Default(true);
bool FlipX = __o_FlipX.Default(false);
bool FlipY = __o_FlipY.Default(false);
	HX_STACK_FRAME("flixel.animation.FlxAnimationController","addByNames",0x17c20e34,"flixel.animation.FlxAnimationController.addByNames","flixel/animation/FlxAnimationController.hx",266,0xa6f01372)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Name,"Name")
	HX_STACK_ARG(FrameNames,"FrameNames")
	HX_STACK_ARG(FrameRate,"FrameRate")
	HX_STACK_ARG(Looped,"Looped")
	HX_STACK_ARG(FlipX,"FlipX")
	HX_STACK_ARG(FlipY,"FlipY")
{
		HX_STACK_LINE(267)
		::flixel::FlxSprite tmp = this->_sprite;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(267)
		::flixel::graphics::frames::FlxFramesCollection tmp1 = tmp->frames;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(267)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(267)
		if ((tmp2)){
			HX_STACK_LINE(269)
			Array< int > indices = Array_obj< int >::__new();		HX_STACK_VAR(indices,"indices");
			HX_STACK_LINE(270)
			this->byNamesHelper(indices,FrameNames);
			HX_STACK_LINE(272)
			bool tmp3 = (indices->length > (int)0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(272)
			if ((tmp3)){
				HX_STACK_LINE(274)
				::flixel::animation::FlxAnimation tmp4 = ::flixel::animation::FlxAnimation_obj::__new(hx::ObjectPtr<OBJ_>(this),Name,indices,FrameRate,Looped,FlipX,FlipY);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(274)
				::flixel::animation::FlxAnimation anim = tmp4;		HX_STACK_VAR(anim,"anim");
				HX_STACK_LINE(275)
				::haxe::ds::StringMap tmp5 = this->_animations;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(275)
				::String tmp6 = Name;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(275)
				::flixel::animation::FlxAnimation tmp7 = anim;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(275)
				tmp5->set(tmp6,tmp7);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(FlxAnimationController_obj,addByNames,(void))

Void FlxAnimationController_obj::appendByNames( ::String Name,Array< ::String > FrameNames){
{
		HX_STACK_FRAME("flixel.animation.FlxAnimationController","appendByNames",0xcdc97653,"flixel.animation.FlxAnimationController.appendByNames","flixel/animation/FlxAnimationController.hx",289,0xa6f01372)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Name,"Name")
		HX_STACK_ARG(FrameNames,"FrameNames")
		HX_STACK_LINE(290)
		::haxe::ds::StringMap tmp = this->_animations;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(290)
		::String tmp1 = Name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(290)
		::flixel::animation::FlxAnimation tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(290)
		::flixel::animation::FlxAnimation anim = tmp2;		HX_STACK_VAR(anim,"anim");
		HX_STACK_LINE(292)
		bool tmp3 = (anim == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(292)
		if ((tmp3)){
			HX_STACK_LINE(295)
			return null();
		}
		HX_STACK_LINE(298)
		::flixel::FlxSprite tmp4 = this->_sprite;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(298)
		::flixel::graphics::frames::FlxFramesCollection tmp5 = tmp4->frames;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(298)
		bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(298)
		if ((tmp6)){
			HX_STACK_LINE(300)
			this->byNamesHelper(anim->frames,FrameNames);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxAnimationController_obj,appendByNames,(void))

Void FlxAnimationController_obj::addByStringIndices( ::String Name,::String Prefix,Array< ::String > Indices,::String Postfix,hx::Null< int >  __o_FrameRate,hx::Null< bool >  __o_Looped,hx::Null< bool >  __o_FlipX,hx::Null< bool >  __o_FlipY){
int FrameRate = __o_FrameRate.Default(30);
bool Looped = __o_Looped.Default(true);
bool FlipX = __o_FlipX.Default(false);
bool FlipY = __o_FlipY.Default(false);
	HX_STACK_FRAME("flixel.animation.FlxAnimationController","addByStringIndices",0x0f3d3cc2,"flixel.animation.FlxAnimationController.addByStringIndices","flixel/animation/FlxAnimationController.hx",317,0xa6f01372)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Name,"Name")
	HX_STACK_ARG(Prefix,"Prefix")
	HX_STACK_ARG(Indices,"Indices")
	HX_STACK_ARG(Postfix,"Postfix")
	HX_STACK_ARG(FrameRate,"FrameRate")
	HX_STACK_ARG(Looped,"Looped")
	HX_STACK_ARG(FlipX,"FlipX")
	HX_STACK_ARG(FlipY,"FlipY")
{
		HX_STACK_LINE(318)
		::flixel::FlxSprite tmp = this->_sprite;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(318)
		::flixel::graphics::frames::FlxFramesCollection tmp1 = tmp->frames;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(318)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(318)
		if ((tmp2)){
			HX_STACK_LINE(320)
			Array< int > frameIndices = Array_obj< int >::__new();		HX_STACK_VAR(frameIndices,"frameIndices");
			HX_STACK_LINE(321)
			::String tmp3 = Prefix;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(321)
			::String tmp4 = Postfix;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(321)
			this->byStringIndicesHelper(frameIndices,tmp3,Indices,tmp4);
			HX_STACK_LINE(323)
			bool tmp5 = (frameIndices->length > (int)0);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(323)
			if ((tmp5)){
				HX_STACK_LINE(325)
				::flixel::animation::FlxAnimation tmp6 = ::flixel::animation::FlxAnimation_obj::__new(hx::ObjectPtr<OBJ_>(this),Name,frameIndices,FrameRate,Looped,FlipX,FlipY);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(325)
				::flixel::animation::FlxAnimation anim = tmp6;		HX_STACK_VAR(anim,"anim");
				HX_STACK_LINE(326)
				::haxe::ds::StringMap tmp7 = this->_animations;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(326)
				::String tmp8 = Name;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(326)
				::flixel::animation::FlxAnimation tmp9 = anim;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(326)
				tmp7->set(tmp8,tmp9);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC8(FlxAnimationController_obj,addByStringIndices,(void))

Void FlxAnimationController_obj::appendByStringIndices( ::String Name,::String Prefix,Array< ::String > Indices,::String Postfix){
{
		HX_STACK_FRAME("flixel.animation.FlxAnimationController","appendByStringIndices",0x42285be1,"flixel.animation.FlxAnimationController.appendByStringIndices","flixel/animation/FlxAnimationController.hx",342,0xa6f01372)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Name,"Name")
		HX_STACK_ARG(Prefix,"Prefix")
		HX_STACK_ARG(Indices,"Indices")
		HX_STACK_ARG(Postfix,"Postfix")
		HX_STACK_LINE(343)
		::haxe::ds::StringMap tmp = this->_animations;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(343)
		::String tmp1 = Name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(343)
		::flixel::animation::FlxAnimation tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(343)
		::flixel::animation::FlxAnimation anim = tmp2;		HX_STACK_VAR(anim,"anim");
		HX_STACK_LINE(345)
		bool tmp3 = (anim == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(345)
		if ((tmp3)){
			HX_STACK_LINE(348)
			return null();
		}
		HX_STACK_LINE(351)
		::flixel::FlxSprite tmp4 = this->_sprite;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(351)
		::flixel::graphics::frames::FlxFramesCollection tmp5 = tmp4->frames;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(351)
		bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(351)
		if ((tmp6)){
			HX_STACK_LINE(353)
			::String tmp7 = Prefix;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(353)
			::String tmp8 = Postfix;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(353)
			this->byStringIndicesHelper(anim->frames,tmp7,Indices,tmp8);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxAnimationController_obj,appendByStringIndices,(void))

Void FlxAnimationController_obj::addByIndices( ::String Name,::String Prefix,Array< int > Indices,::String Postfix,hx::Null< int >  __o_FrameRate,hx::Null< bool >  __o_Looped,hx::Null< bool >  __o_FlipX,hx::Null< bool >  __o_FlipY){
int FrameRate = __o_FrameRate.Default(30);
bool Looped = __o_Looped.Default(true);
bool FlipX = __o_FlipX.Default(false);
bool FlipY = __o_FlipY.Default(false);
	HX_STACK_FRAME("flixel.animation.FlxAnimationController","addByIndices",0x4dbf3893,"flixel.animation.FlxAnimationController.addByIndices","flixel/animation/FlxAnimationController.hx",370,0xa6f01372)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Name,"Name")
	HX_STACK_ARG(Prefix,"Prefix")
	HX_STACK_ARG(Indices,"Indices")
	HX_STACK_ARG(Postfix,"Postfix")
	HX_STACK_ARG(FrameRate,"FrameRate")
	HX_STACK_ARG(Looped,"Looped")
	HX_STACK_ARG(FlipX,"FlipX")
	HX_STACK_ARG(FlipY,"FlipY")
{
		HX_STACK_LINE(371)
		::flixel::FlxSprite tmp = this->_sprite;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(371)
		::flixel::graphics::frames::FlxFramesCollection tmp1 = tmp->frames;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(371)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(371)
		if ((tmp2)){
			HX_STACK_LINE(373)
			Array< int > frameIndices = Array_obj< int >::__new();		HX_STACK_VAR(frameIndices,"frameIndices");
			HX_STACK_LINE(374)
			::String tmp3 = Prefix;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(374)
			::String tmp4 = Postfix;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(374)
			this->byIndicesHelper(frameIndices,tmp3,Indices,tmp4);
			HX_STACK_LINE(376)
			bool tmp5 = (frameIndices->length > (int)0);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(376)
			if ((tmp5)){
				HX_STACK_LINE(378)
				::flixel::animation::FlxAnimation tmp6 = ::flixel::animation::FlxAnimation_obj::__new(hx::ObjectPtr<OBJ_>(this),Name,frameIndices,FrameRate,Looped,FlipX,FlipY);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(378)
				::flixel::animation::FlxAnimation anim = tmp6;		HX_STACK_VAR(anim,"anim");
				HX_STACK_LINE(379)
				::haxe::ds::StringMap tmp7 = this->_animations;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(379)
				::String tmp8 = Name;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(379)
				::flixel::animation::FlxAnimation tmp9 = anim;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(379)
				tmp7->set(tmp8,tmp9);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC8(FlxAnimationController_obj,addByIndices,(void))

Void FlxAnimationController_obj::appendByIndices( ::String Name,::String Prefix,Array< int > Indices,::String Postfix){
{
		HX_STACK_FRAME("flixel.animation.FlxAnimationController","appendByIndices",0x22882672,"flixel.animation.FlxAnimationController.appendByIndices","flixel/animation/FlxAnimationController.hx",396,0xa6f01372)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Name,"Name")
		HX_STACK_ARG(Prefix,"Prefix")
		HX_STACK_ARG(Indices,"Indices")
		HX_STACK_ARG(Postfix,"Postfix")
		HX_STACK_LINE(397)
		::haxe::ds::StringMap tmp = this->_animations;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(397)
		::String tmp1 = Name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(397)
		::flixel::animation::FlxAnimation tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(397)
		::flixel::animation::FlxAnimation anim = tmp2;		HX_STACK_VAR(anim,"anim");
		HX_STACK_LINE(398)
		bool tmp3 = (anim == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(398)
		if ((tmp3)){
			HX_STACK_LINE(401)
			return null();
		}
		HX_STACK_LINE(404)
		::flixel::FlxSprite tmp4 = this->_sprite;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(404)
		::flixel::graphics::frames::FlxFramesCollection tmp5 = tmp4->frames;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(404)
		bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(404)
		if ((tmp6)){
			HX_STACK_LINE(406)
			::String tmp7 = Prefix;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(406)
			::String tmp8 = Postfix;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(406)
			this->byIndicesHelper(anim->frames,tmp7,Indices,tmp8);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxAnimationController_obj,appendByIndices,(void))

int FlxAnimationController_obj::findSpriteFrame( ::String Prefix,int Index,::String Postfix){
	HX_STACK_FRAME("flixel.animation.FlxAnimationController","findSpriteFrame",0x746a2bcb,"flixel.animation.FlxAnimationController.findSpriteFrame","flixel/animation/FlxAnimationController.hx",417,0xa6f01372)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Prefix,"Prefix")
	HX_STACK_ARG(Index,"Index")
	HX_STACK_ARG(Postfix,"Postfix")
	HX_STACK_LINE(418)
	::flixel::FlxSprite tmp = this->_sprite;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(418)
	int numFrames = tmp->numFrames;		HX_STACK_VAR(numFrames,"numFrames");
	HX_STACK_LINE(419)
	::flixel::FlxSprite tmp1 = this->_sprite;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(419)
	Array< ::Dynamic > flxFrames = tmp1->frames->frames;		HX_STACK_VAR(flxFrames,"flxFrames");
	HX_STACK_LINE(420)
	{
		HX_STACK_LINE(420)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(420)
		while((true)){
			HX_STACK_LINE(420)
			bool tmp2 = (_g < numFrames);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(420)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(420)
			if ((tmp3)){
				HX_STACK_LINE(420)
				break;
			}
			HX_STACK_LINE(420)
			int tmp4 = (_g)++;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(420)
			int i = tmp4;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(422)
			::flixel::graphics::frames::FlxFrame tmp5 = flxFrames->__get(i).StaticCast< ::flixel::graphics::frames::FlxFrame >();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(422)
			::String name = tmp5->name;		HX_STACK_VAR(name,"name");
			HX_STACK_LINE(423)
			::String tmp6 = name;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(423)
			::String tmp7 = Prefix;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(423)
			::String tmp8 = tmp6;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(423)
			::String tmp9 = tmp7;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(423)
			bool tmp10 = ::StringTools_obj::startsWith(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(423)
			bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(423)
			if ((tmp10)){
				HX_STACK_LINE(423)
				::String tmp12 = name;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(423)
				::String tmp13 = Postfix;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(423)
				::String tmp14 = tmp12;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(423)
				::String tmp15 = tmp13;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(423)
				tmp11 = ::StringTools_obj::endsWith(tmp14,tmp15);
			}
			else{
				HX_STACK_LINE(423)
				tmp11 = false;
			}
			HX_STACK_LINE(423)
			if ((tmp11)){
				HX_STACK_LINE(425)
				int tmp12 = Prefix.length;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(425)
				int tmp13 = (name.length - Postfix.length);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(425)
				::String tmp14 = name.substring(tmp12,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(425)
				Dynamic tmp15 = ::Std_obj::parseInt(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(425)
				Dynamic index = tmp15;		HX_STACK_VAR(index,"index");
				HX_STACK_LINE(426)
				bool tmp16 = (index != null());		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(426)
				bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(426)
				if ((tmp16)){
					HX_STACK_LINE(426)
					tmp17 = (index == Index);
				}
				else{
					HX_STACK_LINE(426)
					tmp17 = false;
				}
				HX_STACK_LINE(426)
				if ((tmp17)){
					HX_STACK_LINE(428)
					int tmp18 = i;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(428)
					return tmp18;
				}
			}
		}
	}
	HX_STACK_LINE(433)
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC3(FlxAnimationController_obj,findSpriteFrame,return )

Void FlxAnimationController_obj::addByPrefix( ::String Name,::String Prefix,hx::Null< int >  __o_FrameRate,hx::Null< bool >  __o_Looped,hx::Null< bool >  __o_FlipX,hx::Null< bool >  __o_FlipY){
int FrameRate = __o_FrameRate.Default(30);
bool Looped = __o_Looped.Default(true);
bool FlipX = __o_FlipX.Default(false);
bool FlipY = __o_FlipY.Default(false);
	HX_STACK_FRAME("flixel.animation.FlxAnimationController","addByPrefix",0x4347f9a6,"flixel.animation.FlxAnimationController.addByPrefix","flixel/animation/FlxAnimationController.hx",447,0xa6f01372)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Name,"Name")
	HX_STACK_ARG(Prefix,"Prefix")
	HX_STACK_ARG(FrameRate,"FrameRate")
	HX_STACK_ARG(Looped,"Looped")
	HX_STACK_ARG(FlipX,"FlipX")
	HX_STACK_ARG(FlipY,"FlipY")
{
		HX_STACK_LINE(448)
		::flixel::FlxSprite tmp = this->_sprite;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(448)
		::flixel::graphics::frames::FlxFramesCollection tmp1 = tmp->frames;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(448)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(448)
		if ((tmp2)){
			HX_STACK_LINE(450)
			Array< ::Dynamic > animFrames = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(animFrames,"animFrames");
			HX_STACK_LINE(451)
			::String tmp3 = Prefix;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(451)
			this->findByPrefix(animFrames,tmp3);
			HX_STACK_LINE(453)
			bool tmp4 = (animFrames->length > (int)0);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(453)
			if ((tmp4)){
				HX_STACK_LINE(455)
				Array< int > frameIndices = Array_obj< int >::__new();		HX_STACK_VAR(frameIndices,"frameIndices");
				HX_STACK_LINE(456)
				::String tmp5 = Prefix;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(456)
				this->byPrefixHelper(frameIndices,animFrames,tmp5);
				HX_STACK_LINE(458)
				bool tmp6 = (frameIndices->length > (int)0);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(458)
				if ((tmp6)){
					HX_STACK_LINE(460)
					::flixel::animation::FlxAnimation tmp7 = ::flixel::animation::FlxAnimation_obj::__new(hx::ObjectPtr<OBJ_>(this),Name,frameIndices,FrameRate,Looped,FlipX,FlipY);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(460)
					::flixel::animation::FlxAnimation anim = tmp7;		HX_STACK_VAR(anim,"anim");
					HX_STACK_LINE(461)
					::haxe::ds::StringMap tmp8 = this->_animations;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(461)
					::String tmp9 = Name;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(461)
					::flixel::animation::FlxAnimation tmp10 = anim;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(461)
					tmp8->set(tmp9,tmp10);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(FlxAnimationController_obj,addByPrefix,(void))

Void FlxAnimationController_obj::appendByPrefix( ::String Name,::String Prefix){
{
		HX_STACK_FRAME("flixel.animation.FlxAnimationController","appendByPrefix",0xd3bbaca7,"flixel.animation.FlxAnimationController.appendByPrefix","flixel/animation/FlxAnimationController.hx",477,0xa6f01372)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Name,"Name")
		HX_STACK_ARG(Prefix,"Prefix")
		HX_STACK_LINE(478)
		::haxe::ds::StringMap tmp = this->_animations;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(478)
		::String tmp1 = Name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(478)
		::flixel::animation::FlxAnimation tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(478)
		::flixel::animation::FlxAnimation anim = tmp2;		HX_STACK_VAR(anim,"anim");
		HX_STACK_LINE(479)
		bool tmp3 = (anim == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(479)
		if ((tmp3)){
			HX_STACK_LINE(482)
			return null();
		}
		HX_STACK_LINE(485)
		::flixel::FlxSprite tmp4 = this->_sprite;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(485)
		::flixel::graphics::frames::FlxFramesCollection tmp5 = tmp4->frames;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(485)
		bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(485)
		if ((tmp6)){
			HX_STACK_LINE(487)
			Array< ::Dynamic > animFrames = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(animFrames,"animFrames");
			HX_STACK_LINE(488)
			::String tmp7 = Prefix;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(488)
			this->findByPrefix(animFrames,tmp7);
			HX_STACK_LINE(490)
			bool tmp8 = (animFrames->length > (int)0);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(490)
			if ((tmp8)){
				HX_STACK_LINE(492)
				::String tmp9 = Prefix;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(492)
				this->byPrefixHelper(anim->frames,animFrames,tmp9);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxAnimationController_obj,appendByPrefix,(void))

Void FlxAnimationController_obj::play( ::String AnimName,hx::Null< bool >  __o_Force,hx::Null< bool >  __o_Reversed,hx::Null< int >  __o_Frame){
bool Force = __o_Force.Default(false);
bool Reversed = __o_Reversed.Default(false);
int Frame = __o_Frame.Default(0);
	HX_STACK_FRAME("flixel.animation.FlxAnimationController","play",0xeddc2ed8,"flixel.animation.FlxAnimationController.play","flixel/animation/FlxAnimationController.hx",508,0xa6f01372)
	HX_STACK_THIS(this)
	HX_STACK_ARG(AnimName,"AnimName")
	HX_STACK_ARG(Force,"Force")
	HX_STACK_ARG(Reversed,"Reversed")
	HX_STACK_ARG(Frame,"Frame")
{
		HX_STACK_LINE(509)
		bool tmp = (AnimName == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(509)
		if ((tmp)){
			HX_STACK_LINE(511)
			::flixel::animation::FlxAnimation tmp1 = this->_curAnim;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(511)
			bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(511)
			if ((tmp2)){
				HX_STACK_LINE(513)
				::flixel::animation::FlxAnimation tmp3 = this->_curAnim;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(513)
				tmp3->stop();
			}
			HX_STACK_LINE(515)
			this->_curAnim = null();
		}
		HX_STACK_LINE(518)
		bool tmp1 = (AnimName == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(518)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(518)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(518)
		if ((tmp2)){
			HX_STACK_LINE(518)
			::haxe::ds::StringMap tmp4 = this->_animations;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(518)
			::haxe::ds::StringMap tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(518)
			::String tmp6 = AnimName;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(518)
			::String tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(518)
			::flixel::animation::FlxAnimation tmp8 = tmp5->get(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(518)
			::flixel::animation::FlxAnimation tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(518)
			::flixel::animation::FlxAnimation tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(518)
			tmp3 = (tmp10 == null());
		}
		else{
			HX_STACK_LINE(518)
			tmp3 = true;
		}
		HX_STACK_LINE(518)
		if ((tmp3)){
			HX_STACK_LINE(521)
			return null();
		}
		HX_STACK_LINE(524)
		bool oldFlipX = false;		HX_STACK_VAR(oldFlipX,"oldFlipX");
		HX_STACK_LINE(525)
		bool oldFlipY = false;		HX_STACK_VAR(oldFlipY,"oldFlipY");
		HX_STACK_LINE(527)
		::flixel::animation::FlxAnimation tmp4 = this->_curAnim;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(527)
		bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(527)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(527)
		if ((tmp5)){
			HX_STACK_LINE(527)
			::String tmp7 = AnimName;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(527)
			::flixel::animation::FlxAnimation tmp8 = this->_curAnim;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(527)
			::flixel::animation::FlxAnimation tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(527)
			::String tmp10 = tmp9->name;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(527)
			tmp6 = (tmp7 != tmp10);
		}
		else{
			HX_STACK_LINE(527)
			tmp6 = false;
		}
		HX_STACK_LINE(527)
		if ((tmp6)){
			HX_STACK_LINE(529)
			::flixel::animation::FlxAnimation tmp7 = this->_curAnim;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(529)
			oldFlipX = tmp7->flipX;
			HX_STACK_LINE(530)
			::flixel::animation::FlxAnimation tmp8 = this->_curAnim;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(530)
			oldFlipY = tmp8->flipY;
			HX_STACK_LINE(531)
			::flixel::animation::FlxAnimation tmp9 = this->_curAnim;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(531)
			tmp9->stop();
		}
		HX_STACK_LINE(533)
		::haxe::ds::StringMap tmp7 = this->_animations;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(533)
		::String tmp8 = AnimName;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(533)
		::flixel::animation::FlxAnimation tmp9 = tmp7->get(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(533)
		this->_curAnim = tmp9;
		HX_STACK_LINE(534)
		::flixel::animation::FlxAnimation tmp10 = this->_curAnim;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(534)
		bool tmp11 = Force;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(534)
		bool tmp12 = Reversed;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(534)
		int tmp13 = Frame;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(534)
		tmp10->play(tmp11,tmp12,tmp13);
		HX_STACK_LINE(536)
		bool tmp14 = oldFlipX;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(536)
		::flixel::animation::FlxAnimation tmp15 = this->_curAnim;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(536)
		bool tmp16 = tmp15->flipX;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(536)
		bool tmp17 = (tmp14 != tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(536)
		bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(536)
		bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(536)
		if ((tmp18)){
			HX_STACK_LINE(536)
			bool tmp20 = oldFlipY;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(536)
			::flixel::animation::FlxAnimation tmp21 = this->_curAnim;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(536)
			::flixel::animation::FlxAnimation tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(536)
			bool tmp23 = tmp22->flipY;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(536)
			tmp19 = (tmp20 != tmp23);
		}
		else{
			HX_STACK_LINE(536)
			tmp19 = true;
		}
		HX_STACK_LINE(536)
		if ((tmp19)){
			HX_STACK_LINE(538)
			::flixel::FlxSprite tmp20 = this->_sprite;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(538)
			tmp20->dirty = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxAnimationController_obj,play,(void))

Void FlxAnimationController_obj::reset( ){
{
		HX_STACK_FRAME("flixel.animation.FlxAnimationController","reset",0x5507106b,"flixel.animation.FlxAnimationController.reset","flixel/animation/FlxAnimationController.hx",546,0xa6f01372)
		HX_STACK_THIS(this)
		HX_STACK_LINE(547)
		::flixel::animation::FlxAnimation tmp = this->_curAnim;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(547)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(547)
		if ((tmp1)){
			HX_STACK_LINE(549)
			::flixel::animation::FlxAnimation tmp2 = this->_curAnim;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(549)
			tmp2->reset();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimationController_obj,reset,(void))

Void FlxAnimationController_obj::finish( ){
{
		HX_STACK_FRAME("flixel.animation.FlxAnimationController","finish",0x8f2e4237,"flixel.animation.FlxAnimationController.finish","flixel/animation/FlxAnimationController.hx",557,0xa6f01372)
		HX_STACK_THIS(this)
		HX_STACK_LINE(558)
		::flixel::animation::FlxAnimation tmp = this->_curAnim;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(558)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(558)
		if ((tmp1)){
			HX_STACK_LINE(560)
			::flixel::animation::FlxAnimation tmp2 = this->_curAnim;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(560)
			tmp2->finish();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimationController_obj,finish,(void))

Void FlxAnimationController_obj::stop( ){
{
		HX_STACK_FRAME("flixel.animation.FlxAnimationController","stop",0xefddf0e6,"flixel.animation.FlxAnimationController.stop","flixel/animation/FlxAnimationController.hx",568,0xa6f01372)
		HX_STACK_THIS(this)
		HX_STACK_LINE(569)
		::flixel::animation::FlxAnimation tmp = this->_curAnim;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(569)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(569)
		if ((tmp1)){
			HX_STACK_LINE(571)
			::flixel::animation::FlxAnimation tmp2 = this->_curAnim;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(571)
			tmp2->stop();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimationController_obj,stop,(void))

Void FlxAnimationController_obj::pause( ){
{
		HX_STACK_FRAME("flixel.animation.FlxAnimationController","pause",0x2b969d92,"flixel.animation.FlxAnimationController.pause","flixel/animation/FlxAnimationController.hx",579,0xa6f01372)
		HX_STACK_THIS(this)
		HX_STACK_LINE(580)
		::flixel::animation::FlxAnimation tmp = this->_curAnim;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(580)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(580)
		if ((tmp1)){
			HX_STACK_LINE(582)
			::flixel::animation::FlxAnimation tmp2 = this->_curAnim;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(582)
			tmp2->pause();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimationController_obj,pause,(void))

Void FlxAnimationController_obj::resume( ){
{
		HX_STACK_FRAME("flixel.animation.FlxAnimationController","resume",0x11336b91,"flixel.animation.FlxAnimationController.resume","flixel/animation/FlxAnimationController.hx",590,0xa6f01372)
		HX_STACK_THIS(this)
		HX_STACK_LINE(591)
		::flixel::animation::FlxAnimation tmp = this->_curAnim;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(591)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(591)
		if ((tmp1)){
			HX_STACK_LINE(593)
			::flixel::animation::FlxAnimation tmp2 = this->_curAnim;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(593)
			tmp2->paused = false;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimationController_obj,resume,(void))

Void FlxAnimationController_obj::reverse( ){
{
		HX_STACK_FRAME("flixel.animation.FlxAnimationController","reverse",0xab6edebe,"flixel.animation.FlxAnimationController.reverse","flixel/animation/FlxAnimationController.hx",601,0xa6f01372)
		HX_STACK_THIS(this)
		HX_STACK_LINE(602)
		::flixel::animation::FlxAnimation tmp = this->_curAnim;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(602)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(602)
		if ((tmp1)){
			HX_STACK_LINE(604)
			::flixel::animation::FlxAnimation tmp2 = this->_curAnim;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(604)
			tmp2->reverse();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimationController_obj,reverse,(void))

::flixel::animation::FlxAnimation FlxAnimationController_obj::getByName( ::String Name){
	HX_STACK_FRAME("flixel.animation.FlxAnimationController","getByName",0x1940f994,"flixel.animation.FlxAnimationController.getByName","flixel/animation/FlxAnimationController.hx",612,0xa6f01372)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Name,"Name")
	HX_STACK_LINE(613)
	::haxe::ds::StringMap tmp = this->_animations;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(613)
	::String tmp1 = Name;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(613)
	::flixel::animation::FlxAnimation tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(613)
	::flixel::animation::FlxAnimation tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(613)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxAnimationController_obj,getByName,return )

Void FlxAnimationController_obj::randomFrame( ){
{
		HX_STACK_FRAME("flixel.animation.FlxAnimationController","randomFrame",0x12c43ec6,"flixel.animation.FlxAnimationController.randomFrame","flixel/animation/FlxAnimationController.hx",621,0xa6f01372)
		HX_STACK_THIS(this)
		HX_STACK_LINE(622)
		::flixel::animation::FlxAnimation tmp = this->_curAnim;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(622)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(622)
		if ((tmp1)){
			HX_STACK_LINE(624)
			::flixel::animation::FlxAnimation tmp2 = this->_curAnim;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(624)
			tmp2->stop();
			HX_STACK_LINE(625)
			this->_curAnim = null();
		}
		HX_STACK_LINE(627)
		::flixel::math::FlxRandom tmp2 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(627)
		::flixel::FlxSprite tmp3 = this->_sprite;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(627)
		int tmp4 = tmp3->numFrames;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(627)
		int tmp5 = (tmp4 - (int)1);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(627)
		int tmp6 = tmp2->_int((int)0,tmp5,null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(627)
		this->set_frameIndex(tmp6);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimationController_obj,randomFrame,(void))

Void FlxAnimationController_obj::fireCallback( ){
{
		HX_STACK_FRAME("flixel.animation.FlxAnimationController","fireCallback",0x1523547f,"flixel.animation.FlxAnimationController.fireCallback","flixel/animation/FlxAnimationController.hx",631,0xa6f01372)
		HX_STACK_THIS(this)
		HX_STACK_LINE(632)
		Dynamic tmp = this->callback_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(632)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(632)
		if ((tmp1)){
			HX_STACK_LINE(634)
			::flixel::animation::FlxAnimation tmp2 = this->_curAnim;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(634)
			bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(634)
			::String tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(634)
			if ((tmp3)){
				HX_STACK_LINE(634)
				::flixel::animation::FlxAnimation tmp5 = this->_curAnim;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(634)
				tmp4 = tmp5->name;
			}
			else{
				HX_STACK_LINE(634)
				tmp4 = null();
			}
			HX_STACK_LINE(634)
			::String name = tmp4;		HX_STACK_VAR(name,"name");
			HX_STACK_LINE(635)
			::flixel::animation::FlxAnimation tmp5 = this->_curAnim;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(635)
			bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(635)
			int tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(635)
			if ((tmp6)){
				HX_STACK_LINE(635)
				::flixel::animation::FlxAnimation tmp8 = this->_curAnim;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(635)
				tmp7 = tmp8->curFrame;
			}
			else{
				HX_STACK_LINE(635)
				tmp7 = this->frameIndex;
			}
			HX_STACK_LINE(635)
			int number = tmp7;		HX_STACK_VAR(number,"number");
			HX_STACK_LINE(636)
			::String tmp8 = name;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(636)
			int tmp9 = number;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(636)
			int tmp10 = this->frameIndex;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(636)
			this->callback(tmp8,tmp9,tmp10);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimationController_obj,fireCallback,(void))

Void FlxAnimationController_obj::fireFinishCallback( ::String name){
{
		HX_STACK_FRAME("flixel.animation.FlxAnimationController","fireFinishCallback",0x96b92372,"flixel.animation.FlxAnimationController.fireFinishCallback","flixel/animation/FlxAnimationController.hx",642,0xa6f01372)
		HX_STACK_THIS(this)
		HX_STACK_ARG(name,"name")
		HX_STACK_LINE(643)
		Dynamic tmp = this->finishCallback_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(643)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(643)
		if ((tmp1)){
			HX_STACK_LINE(645)
			::String tmp2 = name;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(645)
			this->finishCallback(tmp2);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxAnimationController_obj,fireFinishCallback,(void))

Void FlxAnimationController_obj::byNamesHelper( Array< int > AddTo,Array< ::String > FrameNames){
{
		HX_STACK_FRAME("flixel.animation.FlxAnimationController","byNamesHelper",0x4e6fbd5b,"flixel.animation.FlxAnimationController.byNamesHelper","flixel/animation/FlxAnimationController.hx",654,0xa6f01372)
		HX_STACK_THIS(this)
		HX_STACK_ARG(AddTo,"AddTo")
		HX_STACK_ARG(FrameNames,"FrameNames")
		HX_STACK_LINE(654)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(654)
		while((true)){
			HX_STACK_LINE(654)
			bool tmp = (_g < FrameNames->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(654)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(654)
			if ((tmp1)){
				HX_STACK_LINE(654)
				break;
			}
			HX_STACK_LINE(654)
			::String tmp2 = FrameNames->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(654)
			::String frameName = tmp2;		HX_STACK_VAR(frameName,"frameName");
			HX_STACK_LINE(654)
			++(_g);
			HX_STACK_LINE(656)
			::flixel::FlxSprite tmp3 = this->_sprite;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(656)
			::haxe::ds::StringMap tmp4 = tmp3->frames->framesHash;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(656)
			::String tmp5 = frameName;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(656)
			bool tmp6 = tmp4->exists(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(656)
			if ((tmp6)){
				HX_STACK_LINE(658)
				::flixel::FlxSprite tmp7 = this->_sprite;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(658)
				::haxe::ds::StringMap tmp8 = tmp7->frames->framesHash;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(658)
				::String tmp9 = frameName;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(658)
				::flixel::graphics::frames::FlxFrame tmp10 = tmp8->get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(658)
				::flixel::graphics::frames::FlxFrame frameToAdd = tmp10;		HX_STACK_VAR(frameToAdd,"frameToAdd");
				HX_STACK_LINE(659)
				::flixel::FlxSprite tmp11 = this->_sprite;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(659)
				::flixel::graphics::frames::FlxFrame tmp12 = frameToAdd;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(659)
				int tmp13 = tmp11->frames->frames->indexOf(tmp12,null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(659)
				AddTo->push(tmp13);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxAnimationController_obj,byNamesHelper,(void))

Void FlxAnimationController_obj::byStringIndicesHelper( Array< int > AddTo,::String Prefix,Array< ::String > Indices,::String Postfix){
{
		HX_STACK_FRAME("flixel.animation.FlxAnimationController","byStringIndicesHelper",0xccff0b69,"flixel.animation.FlxAnimationController.byStringIndicesHelper","flixel/animation/FlxAnimationController.hx",669,0xa6f01372)
		HX_STACK_THIS(this)
		HX_STACK_ARG(AddTo,"AddTo")
		HX_STACK_ARG(Prefix,"Prefix")
		HX_STACK_ARG(Indices,"Indices")
		HX_STACK_ARG(Postfix,"Postfix")
		HX_STACK_LINE(669)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(669)
		while((true)){
			HX_STACK_LINE(669)
			bool tmp = (_g < Indices->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(669)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(669)
			if ((tmp1)){
				HX_STACK_LINE(669)
				break;
			}
			HX_STACK_LINE(669)
			::String tmp2 = Indices->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(669)
			::String index = tmp2;		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(669)
			++(_g);
			HX_STACK_LINE(671)
			::String tmp3 = (Prefix + index);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(671)
			::String tmp4 = Postfix;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(671)
			::String tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(671)
			::String name = tmp5;		HX_STACK_VAR(name,"name");
			HX_STACK_LINE(672)
			::flixel::FlxSprite tmp6 = this->_sprite;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(672)
			::haxe::ds::StringMap tmp7 = tmp6->frames->framesHash;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(672)
			::String tmp8 = name;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(672)
			bool tmp9 = tmp7->exists(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(672)
			if ((tmp9)){
				HX_STACK_LINE(674)
				::flixel::FlxSprite tmp10 = this->_sprite;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(674)
				::haxe::ds::StringMap tmp11 = tmp10->frames->framesHash;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(674)
				::String tmp12 = name;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(674)
				::flixel::graphics::frames::FlxFrame tmp13 = tmp11->get(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(674)
				::flixel::graphics::frames::FlxFrame frameToAdd = tmp13;		HX_STACK_VAR(frameToAdd,"frameToAdd");
				HX_STACK_LINE(675)
				::flixel::FlxSprite tmp14 = this->_sprite;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(675)
				::flixel::graphics::frames::FlxFrame tmp15 = frameToAdd;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(675)
				int tmp16 = tmp14->frames->frames->indexOf(tmp15,null());		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(675)
				AddTo->push(tmp16);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxAnimationController_obj,byStringIndicesHelper,(void))

Void FlxAnimationController_obj::byIndicesHelper( Array< int > AddTo,::String Prefix,Array< int > Indices,::String Postfix){
{
		HX_STACK_FRAME("flixel.animation.FlxAnimationController","byIndicesHelper",0xe757113a,"flixel.animation.FlxAnimationController.byIndicesHelper","flixel/animation/FlxAnimationController.hx",685,0xa6f01372)
		HX_STACK_THIS(this)
		HX_STACK_ARG(AddTo,"AddTo")
		HX_STACK_ARG(Prefix,"Prefix")
		HX_STACK_ARG(Indices,"Indices")
		HX_STACK_ARG(Postfix,"Postfix")
		HX_STACK_LINE(685)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(685)
		while((true)){
			HX_STACK_LINE(685)
			bool tmp = (_g < Indices->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(685)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(685)
			if ((tmp1)){
				HX_STACK_LINE(685)
				break;
			}
			HX_STACK_LINE(685)
			int tmp2 = Indices->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(685)
			int index = tmp2;		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(685)
			++(_g);
			HX_STACK_LINE(687)
			::String tmp3 = Prefix;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(687)
			int tmp4 = index;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(687)
			::String tmp5 = Postfix;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(687)
			int tmp6 = this->findSpriteFrame(tmp3,tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(687)
			int indexToAdd = tmp6;		HX_STACK_VAR(indexToAdd,"indexToAdd");
			HX_STACK_LINE(688)
			bool tmp7 = (indexToAdd != (int)-1);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(688)
			if ((tmp7)){
				HX_STACK_LINE(690)
				int tmp8 = indexToAdd;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(690)
				AddTo->push(tmp8);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxAnimationController_obj,byIndicesHelper,(void))

Void FlxAnimationController_obj::byPrefixHelper( Array< int > AddTo,Array< ::Dynamic > AnimFrames,::String Prefix){
{
		HX_STACK_FRAME("flixel.animation.FlxAnimationController","byPrefixHelper",0x238152fb,"flixel.animation.FlxAnimationController.byPrefixHelper","flixel/animation/FlxAnimationController.hx",699,0xa6f01372)
		HX_STACK_THIS(this)
		HX_STACK_ARG(AddTo,"AddTo")
		HX_STACK_ARG(AnimFrames,"AnimFrames")
		HX_STACK_ARG(Prefix,"Prefix")
		HX_STACK_LINE(700)
		::flixel::graphics::frames::FlxFrame tmp = AnimFrames->__get((int)0).StaticCast< ::flixel::graphics::frames::FlxFrame >();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(700)
		::String name = tmp->name;		HX_STACK_VAR(name,"name");
		HX_STACK_LINE(701)
		int tmp1 = Prefix.length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(701)
		int tmp2 = name.indexOf(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"),tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(701)
		int postIndex = tmp2;		HX_STACK_VAR(postIndex,"postIndex");
		HX_STACK_LINE(702)
		int tmp3 = postIndex;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(702)
		int tmp4 = (int)-1;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(702)
		bool tmp5 = (tmp3 == tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(702)
		int tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(702)
		if ((tmp5)){
			HX_STACK_LINE(702)
			tmp6 = name.length;
		}
		else{
			HX_STACK_LINE(702)
			tmp6 = postIndex;
		}
		HX_STACK_LINE(702)
		int tmp7 = name.length;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(702)
		::String tmp8 = name.substring(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(702)
		::String postFix = tmp8;		HX_STACK_VAR(postFix,"postFix");
		HX_STACK_LINE(703)
		int tmp9 = Prefix.length;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(703)
		int tmp10 = postFix.length;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(703)
		::flixel::graphics::frames::FlxFrame_obj::sort(AnimFrames,tmp9,tmp10);
		HX_STACK_LINE(705)
		{
			HX_STACK_LINE(705)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(705)
			while((true)){
				HX_STACK_LINE(705)
				bool tmp11 = (_g < AnimFrames->length);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(705)
				bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(705)
				if ((tmp12)){
					HX_STACK_LINE(705)
					break;
				}
				HX_STACK_LINE(705)
				::flixel::graphics::frames::FlxFrame tmp13 = AnimFrames->__get(_g).StaticCast< ::flixel::graphics::frames::FlxFrame >();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(705)
				::flixel::graphics::frames::FlxFrame animFrame = tmp13;		HX_STACK_VAR(animFrame,"animFrame");
				HX_STACK_LINE(705)
				++(_g);
				HX_STACK_LINE(707)
				::flixel::FlxSprite tmp14 = this->_sprite;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(707)
				::flixel::graphics::frames::FlxFrame tmp15 = animFrame;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(707)
				int tmp16 = tmp14->frames->frames->indexOf(tmp15,null());		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(707)
				AddTo->push(tmp16);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxAnimationController_obj,byPrefixHelper,(void))

Void FlxAnimationController_obj::findByPrefix( Array< ::Dynamic > AnimFrames,::String Prefix){
{
		HX_STACK_FRAME("flixel.animation.FlxAnimationController","findByPrefix",0x32419106,"flixel.animation.FlxAnimationController.findByPrefix","flixel/animation/FlxAnimationController.hx",716,0xa6f01372)
		HX_STACK_THIS(this)
		HX_STACK_ARG(AnimFrames,"AnimFrames")
		HX_STACK_ARG(Prefix,"Prefix")
		HX_STACK_LINE(716)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(716)
		::flixel::FlxSprite tmp = this->_sprite;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(716)
		Array< ::Dynamic > _g1 = tmp->frames->frames;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(716)
		while((true)){
			HX_STACK_LINE(716)
			bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(716)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(716)
			if ((tmp2)){
				HX_STACK_LINE(716)
				break;
			}
			HX_STACK_LINE(716)
			::flixel::graphics::frames::FlxFrame tmp3 = _g1->__get(_g).StaticCast< ::flixel::graphics::frames::FlxFrame >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(716)
			::flixel::graphics::frames::FlxFrame frame = tmp3;		HX_STACK_VAR(frame,"frame");
			HX_STACK_LINE(716)
			++(_g);
			HX_STACK_LINE(718)
			bool tmp4 = (frame->name != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(718)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(718)
			if ((tmp4)){
				HX_STACK_LINE(718)
				::String tmp6 = frame->name;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(718)
				::String tmp7 = Prefix;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(718)
				::String tmp8 = tmp6;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(718)
				::String tmp9 = tmp7;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(718)
				tmp5 = ::StringTools_obj::startsWith(tmp8,tmp9);
			}
			else{
				HX_STACK_LINE(718)
				tmp5 = false;
			}
			HX_STACK_LINE(718)
			if ((tmp5)){
				HX_STACK_LINE(720)
				::flixel::graphics::frames::FlxFrame tmp6 = frame;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(720)
				AnimFrames->push(tmp6);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxAnimationController_obj,findByPrefix,(void))

int FlxAnimationController_obj::set_frameIndex( int Frame){
	HX_STACK_FRAME("flixel.animation.FlxAnimationController","set_frameIndex",0xd769c646,"flixel.animation.FlxAnimationController.set_frameIndex","flixel/animation/FlxAnimationController.hx",726,0xa6f01372)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Frame,"Frame")
	HX_STACK_LINE(727)
	::flixel::FlxSprite tmp = this->_sprite;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(727)
	::flixel::graphics::frames::FlxFramesCollection tmp1 = tmp->frames;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(727)
	bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(727)
	if ((tmp2)){
		HX_STACK_LINE(729)
		int tmp3 = Frame;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(729)
		::flixel::FlxSprite tmp4 = this->_sprite;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(729)
		int tmp5 = tmp4->numFrames;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(729)
		int tmp6 = hx::Mod(tmp3,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(729)
		Frame = tmp6;
		HX_STACK_LINE(730)
		::flixel::FlxSprite tmp7 = this->_sprite;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(730)
		::flixel::FlxSprite tmp8 = this->_sprite;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(730)
		::flixel::graphics::frames::FlxFrame tmp9 = tmp8->frames->frames->__get(Frame).StaticCast< ::flixel::graphics::frames::FlxFrame >();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(730)
		tmp7->set_frame(tmp9);
		HX_STACK_LINE(731)
		this->frameIndex = Frame;
		HX_STACK_LINE(732)
		{
			HX_STACK_LINE(732)
			Dynamic tmp10 = this->callback_dyn();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(732)
			bool tmp11 = (tmp10 != null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(732)
			if ((tmp11)){
				HX_STACK_LINE(732)
				::flixel::animation::FlxAnimation tmp12 = this->_curAnim;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(732)
				bool tmp13 = (tmp12 != null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(732)
				::String tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(732)
				if ((tmp13)){
					HX_STACK_LINE(732)
					::flixel::animation::FlxAnimation tmp15 = this->_curAnim;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(732)
					tmp14 = tmp15->name;
				}
				else{
					HX_STACK_LINE(732)
					tmp14 = null();
				}
				HX_STACK_LINE(732)
				::String name = tmp14;		HX_STACK_VAR(name,"name");
				HX_STACK_LINE(732)
				::flixel::animation::FlxAnimation tmp15 = this->_curAnim;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(732)
				bool tmp16 = (tmp15 != null());		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(732)
				int tmp17;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(732)
				if ((tmp16)){
					HX_STACK_LINE(732)
					::flixel::animation::FlxAnimation tmp18 = this->_curAnim;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(732)
					tmp17 = tmp18->curFrame;
				}
				else{
					HX_STACK_LINE(732)
					tmp17 = this->frameIndex;
				}
				HX_STACK_LINE(732)
				int number = tmp17;		HX_STACK_VAR(number,"number");
				HX_STACK_LINE(732)
				::String tmp18 = name;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(732)
				int tmp19 = number;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(732)
				int tmp20 = this->frameIndex;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(732)
				this->callback(tmp18,tmp19,tmp20);
			}
		}
	}
	HX_STACK_LINE(735)
	int tmp3 = this->frameIndex;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(735)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxAnimationController_obj,set_frameIndex,return )

::String FlxAnimationController_obj::get_frameName( ){
	HX_STACK_FRAME("flixel.animation.FlxAnimationController","get_frameName",0x1674c78b,"flixel.animation.FlxAnimationController.get_frameName","flixel/animation/FlxAnimationController.hx",739,0xa6f01372)
	HX_STACK_THIS(this)
	HX_STACK_LINE(740)
	::flixel::FlxSprite tmp = this->_sprite;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(740)
	::String tmp1 = tmp->frame->name;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(740)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimationController_obj,get_frameName,return )

::String FlxAnimationController_obj::set_frameName( ::String Value){
	HX_STACK_FRAME("flixel.animation.FlxAnimationController","set_frameName",0x5b7aa997,"flixel.animation.FlxAnimationController.set_frameName","flixel/animation/FlxAnimationController.hx",744,0xa6f01372)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(745)
	::flixel::FlxSprite tmp = this->_sprite;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(745)
	::flixel::graphics::frames::FlxFramesCollection tmp1 = tmp->frames;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(745)
	bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(745)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(745)
	if ((tmp2)){
		HX_STACK_LINE(745)
		::flixel::FlxSprite tmp4 = this->_sprite;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(745)
		::flixel::FlxSprite tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(745)
		::haxe::ds::StringMap tmp6 = tmp5->frames->framesHash;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(745)
		::haxe::ds::StringMap tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(745)
		::String tmp8 = Value;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(745)
		::String tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(745)
		tmp3 = tmp7->exists(tmp9);
	}
	else{
		HX_STACK_LINE(745)
		tmp3 = false;
	}
	HX_STACK_LINE(745)
	if ((tmp3)){
		HX_STACK_LINE(747)
		::flixel::animation::FlxAnimation tmp4 = this->_curAnim;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(747)
		bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(747)
		if ((tmp5)){
			HX_STACK_LINE(749)
			::flixel::animation::FlxAnimation tmp6 = this->_curAnim;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(749)
			tmp6->stop();
			HX_STACK_LINE(750)
			this->_curAnim = null();
		}
		HX_STACK_LINE(753)
		::flixel::FlxSprite tmp6 = this->_sprite;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(753)
		::haxe::ds::StringMap tmp7 = tmp6->frames->framesHash;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(753)
		::String tmp8 = Value;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(753)
		::flixel::graphics::frames::FlxFrame tmp9 = tmp7->get(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(753)
		::flixel::graphics::frames::FlxFrame frame = tmp9;		HX_STACK_VAR(frame,"frame");
		HX_STACK_LINE(754)
		bool tmp10 = (frame != null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(754)
		if ((tmp10)){
			HX_STACK_LINE(756)
			::flixel::FlxSprite tmp11 = this->_sprite;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(756)
			::flixel::graphics::frames::FlxFrame tmp12 = frame;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(756)
			int tmp13 = tmp11->frames->frames->indexOf(tmp12,null());		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(756)
			this->set_frameIndex(tmp13);
		}
	}
	HX_STACK_LINE(760)
	::String tmp4 = Value;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(760)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxAnimationController_obj,set_frameName,return )

::String FlxAnimationController_obj::get_name( ){
	HX_STACK_FRAME("flixel.animation.FlxAnimationController","get_name",0x9c9870b8,"flixel.animation.FlxAnimationController.get_name","flixel/animation/FlxAnimationController.hx",764,0xa6f01372)
	HX_STACK_THIS(this)
	HX_STACK_LINE(765)
	::String animName = null();		HX_STACK_VAR(animName,"animName");
	HX_STACK_LINE(766)
	::flixel::animation::FlxAnimation tmp = this->_curAnim;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(766)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(766)
	if ((tmp1)){
		HX_STACK_LINE(768)
		::flixel::animation::FlxAnimation tmp2 = this->_curAnim;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(768)
		animName = tmp2->name;
	}
	HX_STACK_LINE(770)
	::String tmp2 = animName;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(770)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimationController_obj,get_name,return )

::String FlxAnimationController_obj::set_name( ::String AnimName){
	HX_STACK_FRAME("flixel.animation.FlxAnimationController","set_name",0x4af5ca2c,"flixel.animation.FlxAnimationController.set_name","flixel/animation/FlxAnimationController.hx",774,0xa6f01372)
	HX_STACK_THIS(this)
	HX_STACK_ARG(AnimName,"AnimName")
	HX_STACK_LINE(775)
	::String tmp = AnimName;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(775)
	this->play(tmp,null(),null(),null());
	HX_STACK_LINE(776)
	::String tmp1 = AnimName;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(776)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxAnimationController_obj,set_name,return )

::flixel::animation::FlxAnimation FlxAnimationController_obj::get_curAnim( ){
	HX_STACK_FRAME("flixel.animation.FlxAnimationController","get_curAnim",0xd32cfb64,"flixel.animation.FlxAnimationController.get_curAnim","flixel/animation/FlxAnimationController.hx",780,0xa6f01372)
	HX_STACK_THIS(this)
	HX_STACK_LINE(781)
	::flixel::animation::FlxAnimation tmp = this->_curAnim;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(781)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimationController_obj,get_curAnim,return )

::flixel::animation::FlxAnimation FlxAnimationController_obj::set_curAnim( ::flixel::animation::FlxAnimation Anim){
	HX_STACK_FRAME("flixel.animation.FlxAnimationController","set_curAnim",0xdd9a0270,"flixel.animation.FlxAnimationController.set_curAnim","flixel/animation/FlxAnimationController.hx",785,0xa6f01372)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Anim,"Anim")
	HX_STACK_LINE(786)
	::flixel::animation::FlxAnimation tmp = Anim;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(786)
	::flixel::animation::FlxAnimation tmp1 = this->_curAnim;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(786)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(786)
	if ((tmp2)){
		HX_STACK_LINE(788)
		::flixel::animation::FlxAnimation tmp3 = this->_curAnim;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(788)
		bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(788)
		if ((tmp4)){
			HX_STACK_LINE(790)
			::flixel::animation::FlxAnimation tmp5 = this->_curAnim;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(790)
			tmp5->stop();
		}
		HX_STACK_LINE(793)
		bool tmp5 = (Anim != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(793)
		if ((tmp5)){
			HX_STACK_LINE(795)
			Anim->play(null(),null(),null());
		}
	}
	HX_STACK_LINE(798)
	::flixel::animation::FlxAnimation tmp3 = this->_curAnim = Anim;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(798)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxAnimationController_obj,set_curAnim,return )

bool FlxAnimationController_obj::get_paused( ){
	HX_STACK_FRAME("flixel.animation.FlxAnimationController","get_paused",0x1a2b745b,"flixel.animation.FlxAnimationController.get_paused","flixel/animation/FlxAnimationController.hx",802,0xa6f01372)
	HX_STACK_THIS(this)
	HX_STACK_LINE(803)
	bool paused = false;		HX_STACK_VAR(paused,"paused");
	HX_STACK_LINE(804)
	::flixel::animation::FlxAnimation tmp = this->_curAnim;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(804)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(804)
	if ((tmp1)){
		HX_STACK_LINE(806)
		::flixel::animation::FlxAnimation tmp2 = this->_curAnim;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(806)
		paused = tmp2->paused;
	}
	HX_STACK_LINE(808)
	bool tmp2 = paused;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(808)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimationController_obj,get_paused,return )

bool FlxAnimationController_obj::set_paused( bool Value){
	HX_STACK_FRAME("flixel.animation.FlxAnimationController","set_paused",0x1da912cf,"flixel.animation.FlxAnimationController.set_paused","flixel/animation/FlxAnimationController.hx",812,0xa6f01372)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(813)
	::flixel::animation::FlxAnimation tmp = this->_curAnim;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(813)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(813)
	if ((tmp1)){
		HX_STACK_LINE(815)
		bool tmp2 = Value;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(815)
		if ((tmp2)){
			HX_STACK_LINE(817)
			::flixel::animation::FlxAnimation tmp3 = this->_curAnim;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(817)
			tmp3->pause();
		}
		else{
			HX_STACK_LINE(821)
			::flixel::animation::FlxAnimation tmp3 = this->_curAnim;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(821)
			tmp3->paused = false;
		}
	}
	HX_STACK_LINE(824)
	bool tmp2 = Value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(824)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxAnimationController_obj,set_paused,return )

bool FlxAnimationController_obj::get_finished( ){
	HX_STACK_FRAME("flixel.animation.FlxAnimationController","get_finished",0x1eabcc5f,"flixel.animation.FlxAnimationController.get_finished","flixel/animation/FlxAnimationController.hx",828,0xa6f01372)
	HX_STACK_THIS(this)
	HX_STACK_LINE(829)
	bool finished = true;		HX_STACK_VAR(finished,"finished");
	HX_STACK_LINE(830)
	::flixel::animation::FlxAnimation tmp = this->_curAnim;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(830)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(830)
	if ((tmp1)){
		HX_STACK_LINE(832)
		::flixel::animation::FlxAnimation tmp2 = this->_curAnim;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(832)
		finished = tmp2->finished;
	}
	HX_STACK_LINE(834)
	bool tmp2 = finished;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(834)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimationController_obj,get_finished,return )

bool FlxAnimationController_obj::set_finished( bool Value){
	HX_STACK_FRAME("flixel.animation.FlxAnimationController","set_finished",0x33a4efd3,"flixel.animation.FlxAnimationController.set_finished","flixel/animation/FlxAnimationController.hx",838,0xa6f01372)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(839)
	bool tmp = Value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(839)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(839)
	if ((tmp)){
		HX_STACK_LINE(839)
		::flixel::animation::FlxAnimation tmp2 = this->_curAnim;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(839)
		::flixel::animation::FlxAnimation tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(839)
		tmp1 = (tmp3 != null());
	}
	else{
		HX_STACK_LINE(839)
		tmp1 = false;
	}
	HX_STACK_LINE(839)
	if ((tmp1)){
		HX_STACK_LINE(841)
		::flixel::animation::FlxAnimation tmp2 = this->_curAnim;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(841)
		tmp2->finish();
	}
	HX_STACK_LINE(843)
	bool tmp2 = Value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(843)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxAnimationController_obj,set_finished,return )

int FlxAnimationController_obj::get_frames( ){
	HX_STACK_FRAME("flixel.animation.FlxAnimationController","get_frames",0xd72ce353,"flixel.animation.FlxAnimationController.get_frames","flixel/animation/FlxAnimationController.hx",847,0xa6f01372)
	HX_STACK_THIS(this)
	HX_STACK_LINE(848)
	::flixel::FlxSprite tmp = this->_sprite;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(848)
	int tmp1 = tmp->numFrames;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(848)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimationController_obj,get_frames,return )

int FlxAnimationController_obj::getFrameIndex( ::flixel::graphics::frames::FlxFrame Frame){
	HX_STACK_FRAME("flixel.animation.FlxAnimationController","getFrameIndex",0x1c3dee77,"flixel.animation.FlxAnimationController.getFrameIndex","flixel/animation/FlxAnimationController.hx",858,0xa6f01372)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Frame,"Frame")
	HX_STACK_LINE(859)
	::flixel::FlxSprite tmp = this->_sprite;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(859)
	::flixel::graphics::frames::FlxFrame tmp1 = Frame;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(859)
	int tmp2 = tmp->frames->frames->indexOf(tmp1,null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(859)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxAnimationController_obj,getFrameIndex,return )


FlxAnimationController_obj::FlxAnimationController_obj()
{
}

void FlxAnimationController_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxAnimationController);
	HX_MARK_MEMBER_NAME(frameIndex,"frameIndex");
	HX_MARK_MEMBER_NAME(frames,"frames");
	HX_MARK_MEMBER_NAME(callback,"callback");
	HX_MARK_MEMBER_NAME(finishCallback,"finishCallback");
	HX_MARK_MEMBER_NAME(_sprite,"_sprite");
	HX_MARK_MEMBER_NAME(_curAnim,"_curAnim");
	HX_MARK_MEMBER_NAME(_animations,"_animations");
	HX_MARK_MEMBER_NAME(_prerotated,"_prerotated");
	HX_MARK_END_CLASS();
}

void FlxAnimationController_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(frameIndex,"frameIndex");
	HX_VISIT_MEMBER_NAME(frames,"frames");
	HX_VISIT_MEMBER_NAME(callback,"callback");
	HX_VISIT_MEMBER_NAME(finishCallback,"finishCallback");
	HX_VISIT_MEMBER_NAME(_sprite,"_sprite");
	HX_VISIT_MEMBER_NAME(_curAnim,"_curAnim");
	HX_VISIT_MEMBER_NAME(_animations,"_animations");
	HX_VISIT_MEMBER_NAME(_prerotated,"_prerotated");
}

Dynamic FlxAnimationController_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { if (inCallProp == hx::paccAlways) return get_name(); }
		if (HX_FIELD_EQ(inName,"play") ) { return play_dyn(); }
		if (HX_FIELD_EQ(inName,"stop") ) { return stop_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		if (HX_FIELD_EQ(inName,"pause") ) { return pause_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"paused") ) { if (inCallProp == hx::paccAlways) return get_paused(); }
		if (HX_FIELD_EQ(inName,"frames") ) { return inCallProp == hx::paccAlways ? get_frames() : frames; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"append") ) { return append_dyn(); }
		if (HX_FIELD_EQ(inName,"finish") ) { return finish_dyn(); }
		if (HX_FIELD_EQ(inName,"resume") ) { return resume_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"curAnim") ) { if (inCallProp == hx::paccAlways) return get_curAnim(); }
		if (HX_FIELD_EQ(inName,"_sprite") ) { return _sprite; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"reverse") ) { return reverse_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"finished") ) { if (inCallProp == hx::paccAlways) return get_finished(); }
		if (HX_FIELD_EQ(inName,"callback") ) { return callback; }
		if (HX_FIELD_EQ(inName,"_curAnim") ) { return _curAnim; }
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return copyFrom_dyn(); }
		if (HX_FIELD_EQ(inName,"get_name") ) { return get_name_dyn(); }
		if (HX_FIELD_EQ(inName,"set_name") ) { return set_name_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameName") ) { if (inCallProp == hx::paccAlways) return get_frameName(); }
		if (HX_FIELD_EQ(inName,"getByName") ) { return getByName_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"frameIndex") ) { return frameIndex; }
		if (HX_FIELD_EQ(inName,"addByNames") ) { return addByNames_dyn(); }
		if (HX_FIELD_EQ(inName,"get_paused") ) { return get_paused_dyn(); }
		if (HX_FIELD_EQ(inName,"set_paused") ) { return set_paused_dyn(); }
		if (HX_FIELD_EQ(inName,"get_frames") ) { return get_frames_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_animations") ) { return _animations; }
		if (HX_FIELD_EQ(inName,"_prerotated") ) { return _prerotated; }
		if (HX_FIELD_EQ(inName,"addByPrefix") ) { return addByPrefix_dyn(); }
		if (HX_FIELD_EQ(inName,"randomFrame") ) { return randomFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"get_curAnim") ) { return get_curAnim_dyn(); }
		if (HX_FIELD_EQ(inName,"set_curAnim") ) { return set_curAnim_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"addByIndices") ) { return addByIndices_dyn(); }
		if (HX_FIELD_EQ(inName,"fireCallback") ) { return fireCallback_dyn(); }
		if (HX_FIELD_EQ(inName,"findByPrefix") ) { return findByPrefix_dyn(); }
		if (HX_FIELD_EQ(inName,"get_finished") ) { return get_finished_dyn(); }
		if (HX_FIELD_EQ(inName,"set_finished") ) { return set_finished_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"appendByNames") ) { return appendByNames_dyn(); }
		if (HX_FIELD_EQ(inName,"byNamesHelper") ) { return byNamesHelper_dyn(); }
		if (HX_FIELD_EQ(inName,"get_frameName") ) { return get_frameName_dyn(); }
		if (HX_FIELD_EQ(inName,"set_frameName") ) { return set_frameName_dyn(); }
		if (HX_FIELD_EQ(inName,"getFrameIndex") ) { return getFrameIndex_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"finishCallback") ) { return finishCallback; }
		if (HX_FIELD_EQ(inName,"appendByPrefix") ) { return appendByPrefix_dyn(); }
		if (HX_FIELD_EQ(inName,"byPrefixHelper") ) { return byPrefixHelper_dyn(); }
		if (HX_FIELD_EQ(inName,"set_frameIndex") ) { return set_frameIndex_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"clearPrerotated") ) { return clearPrerotated_dyn(); }
		if (HX_FIELD_EQ(inName,"clearAnimations") ) { return clearAnimations_dyn(); }
		if (HX_FIELD_EQ(inName,"appendByIndices") ) { return appendByIndices_dyn(); }
		if (HX_FIELD_EQ(inName,"findSpriteFrame") ) { return findSpriteFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"byIndicesHelper") ) { return byIndicesHelper_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"createPrerotated") ) { return createPrerotated_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"destroyAnimations") ) { return destroyAnimations_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"addByStringIndices") ) { return addByStringIndices_dyn(); }
		if (HX_FIELD_EQ(inName,"fireFinishCallback") ) { return fireFinishCallback_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"appendByStringIndices") ) { return appendByStringIndices_dyn(); }
		if (HX_FIELD_EQ(inName,"byStringIndicesHelper") ) { return byStringIndicesHelper_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxAnimationController_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { if (inCallProp == hx::paccAlways) return set_name(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"paused") ) { if (inCallProp == hx::paccAlways) return set_paused(inValue); }
		if (HX_FIELD_EQ(inName,"frames") ) { frames=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"curAnim") ) { if (inCallProp == hx::paccAlways) return set_curAnim(inValue); }
		if (HX_FIELD_EQ(inName,"_sprite") ) { _sprite=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"finished") ) { if (inCallProp == hx::paccAlways) return set_finished(inValue); }
		if (HX_FIELD_EQ(inName,"callback") ) { callback=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_curAnim") ) { _curAnim=inValue.Cast< ::flixel::animation::FlxAnimation >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameName") ) { if (inCallProp == hx::paccAlways) return set_frameName(inValue); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"frameIndex") ) { if (inCallProp == hx::paccAlways) return set_frameIndex(inValue);frameIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_animations") ) { _animations=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_prerotated") ) { _prerotated=inValue.Cast< ::flixel::animation::FlxPrerotatedAnimation >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"finishCallback") ) { finishCallback=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxAnimationController_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("curAnim","\xb1","\xf7","\x86","\xab"));
	outFields->push(HX_HCSTRING("frameIndex","\xa5","\xcf","\x3a","\xa1"));
	outFields->push(HX_HCSTRING("frameName","\x18","\x31","\x80","\x36"));
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("paused","\xae","\x40","\x84","\xef"));
	outFields->push(HX_HCSTRING("finished","\x72","\x93","\x0e","\x95"));
	outFields->push(HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac"));
	outFields->push(HX_HCSTRING("_sprite","\xa4","\xed","\x0c","\x32"));
	outFields->push(HX_HCSTRING("_curAnim","\x32","\x51","\x3f","\xe5"));
	outFields->push(HX_HCSTRING("_animations","\x0e","\x02","\xa6","\x55"));
	outFields->push(HX_HCSTRING("_prerotated","\x05","\x51","\xa3","\x64"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(FlxAnimationController_obj,frameIndex),HX_HCSTRING("frameIndex","\xa5","\xcf","\x3a","\xa1")},
	{hx::fsInt,(int)offsetof(FlxAnimationController_obj,frames),HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxAnimationController_obj,callback),HX_HCSTRING("callback","\xc5","\x99","\x06","\x7f")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxAnimationController_obj,finishCallback),HX_HCSTRING("finishCallback","\x38","\xa1","\xbc","\xb4")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(FlxAnimationController_obj,_sprite),HX_HCSTRING("_sprite","\xa4","\xed","\x0c","\x32")},
	{hx::fsObject /*::flixel::animation::FlxAnimation*/ ,(int)offsetof(FlxAnimationController_obj,_curAnim),HX_HCSTRING("_curAnim","\x32","\x51","\x3f","\xe5")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(FlxAnimationController_obj,_animations),HX_HCSTRING("_animations","\x0e","\x02","\xa6","\x55")},
	{hx::fsObject /*::flixel::animation::FlxPrerotatedAnimation*/ ,(int)offsetof(FlxAnimationController_obj,_prerotated),HX_HCSTRING("_prerotated","\x05","\x51","\xa3","\x64")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("frameIndex","\xa5","\xcf","\x3a","\xa1"),
	HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac"),
	HX_HCSTRING("callback","\xc5","\x99","\x06","\x7f"),
	HX_HCSTRING("finishCallback","\x38","\xa1","\xbc","\xb4"),
	HX_HCSTRING("_sprite","\xa4","\xed","\x0c","\x32"),
	HX_HCSTRING("_curAnim","\x32","\x51","\x3f","\xe5"),
	HX_HCSTRING("_animations","\x0e","\x02","\xa6","\x55"),
	HX_HCSTRING("_prerotated","\x05","\x51","\xa3","\x64"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("copyFrom","\xbf","\x0b","\x61","\xc8"),
	HX_HCSTRING("createPrerotated","\x02","\x02","\x47","\xc7"),
	HX_HCSTRING("destroyAnimations","\x89","\x22","\x77","\xd5"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("clearPrerotated","\xd3","\x4b","\xbe","\x18"),
	HX_HCSTRING("clearAnimations","\xdc","\xfc","\xc0","\x09"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("append","\xda","\xe1","\xd3","\x8f"),
	HX_HCSTRING("addByNames","\x50","\x4a","\xa2","\xdd"),
	HX_HCSTRING("appendByNames","\xb7","\xb3","\x38","\xaf"),
	HX_HCSTRING("addByStringIndices","\xde","\xf4","\x20","\x5c"),
	HX_HCSTRING("appendByStringIndices","\x45","\x9d","\xe9","\x96"),
	HX_HCSTRING("addByIndices","\xaf","\xb3","\x3b","\x79"),
	HX_HCSTRING("appendByIndices","\xd6","\x84","\x4c","\xac"),
	HX_HCSTRING("findSpriteFrame","\x2f","\x8a","\x2e","\xfe"),
	HX_HCSTRING("addByPrefix","\x0a","\x56","\x9c","\xa1"),
	HX_HCSTRING("appendByPrefix","\xc3","\x26","\xa2","\x33"),
	HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	HX_HCSTRING("finish","\x53","\x40","\x7f","\x86"),
	HX_HCSTRING("stop","\x02","\xf0","\x5b","\x4c"),
	HX_HCSTRING("pause","\xf6","\xd6","\x57","\xbd"),
	HX_HCSTRING("resume","\xad","\x69","\x84","\x08"),
	HX_HCSTRING("reverse","\x22","\x39","\xfc","\x1a"),
	HX_HCSTRING("getByName","\xf8","\xb4","\xa4","\x8a"),
	HX_HCSTRING("randomFrame","\x2a","\x9b","\x18","\x71"),
	HX_HCSTRING("fireCallback","\x9b","\xcf","\x9f","\x40"),
	HX_HCSTRING("fireFinishCallback","\x8e","\xdb","\x9c","\xe3"),
	HX_HCSTRING("byNamesHelper","\xbf","\xfa","\xde","\x2f"),
	HX_HCSTRING("byStringIndicesHelper","\xcd","\x4c","\xc0","\x21"),
	HX_HCSTRING("byIndicesHelper","\x9e","\x6f","\x1b","\x71"),
	HX_HCSTRING("byPrefixHelper","\x17","\xcd","\x67","\x83"),
	HX_HCSTRING("findByPrefix","\x22","\x0c","\xbe","\x5d"),
	HX_HCSTRING("set_frameIndex","\x62","\x40","\x50","\x37"),
	HX_HCSTRING("get_frameName","\xef","\x04","\xe4","\xf7"),
	HX_HCSTRING("set_frameName","\xfb","\xe6","\xe9","\x3c"),
	HX_HCSTRING("get_name","\xd4","\x2d","\xba","\xc8"),
	HX_HCSTRING("set_name","\x48","\x87","\x17","\x77"),
	HX_HCSTRING("get_curAnim","\xc8","\x57","\x81","\x31"),
	HX_HCSTRING("set_curAnim","\xd4","\x5e","\xee","\x3b"),
	HX_HCSTRING("get_paused","\x77","\xb0","\x0b","\xe0"),
	HX_HCSTRING("set_paused","\xeb","\x4e","\x89","\xe3"),
	HX_HCSTRING("get_finished","\x7b","\x47","\x28","\x4a"),
	HX_HCSTRING("set_finished","\xef","\x6a","\x21","\x5f"),
	HX_HCSTRING("get_frames","\x6f","\x1f","\x0d","\x9d"),
	HX_HCSTRING("getFrameIndex","\xdb","\x2b","\xad","\xfd"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxAnimationController_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxAnimationController_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxAnimationController_obj::__mClass;

void FlxAnimationController_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.animation.FlxAnimationController","\x0a","\x0a","\xda","\x33");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxAnimationController_obj >;
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
} // end namespace animation
