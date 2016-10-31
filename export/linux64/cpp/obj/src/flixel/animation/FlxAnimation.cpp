#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
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
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
namespace flixel{
namespace animation{

Void FlxAnimation_obj::__construct(::flixel::animation::FlxAnimationController Parent,::String Name,Array< int > Frames,hx::Null< int >  __o_FrameRate,hx::Null< bool >  __o_Looped,hx::Null< bool >  __o_FlipX,hx::Null< bool >  __o_FlipY)
{
HX_STACK_FRAME("flixel.animation.FlxAnimation","new",0x9bc5ffc0,"flixel.animation.FlxAnimation.new","flixel/animation/FlxAnimation.hx",8,0x660bc6ae)
HX_STACK_THIS(this)
HX_STACK_ARG(Parent,"Parent")
HX_STACK_ARG(Name,"Name")
HX_STACK_ARG(Frames,"Frames")
HX_STACK_ARG(__o_FrameRate,"FrameRate")
HX_STACK_ARG(__o_Looped,"Looped")
HX_STACK_ARG(__o_FlipX,"FlipX")
HX_STACK_ARG(__o_FlipY,"FlipY")
int FrameRate = __o_FrameRate.Default(0);
bool Looped = __o_Looped.Default(true);
bool FlipX = __o_FlipX.Default(false);
bool FlipY = __o_FlipY.Default(false);
{
	HX_STACK_LINE(70)
	this->_frameTimer = ((Float)0);
	HX_STACK_LINE(59)
	this->flipY = false;
	HX_STACK_LINE(54)
	this->flipX = false;
	HX_STACK_LINE(49)
	this->reversed = false;
	HX_STACK_LINE(44)
	this->looped = true;
	HX_STACK_LINE(39)
	this->paused = true;
	HX_STACK_LINE(34)
	this->finished = true;
	HX_STACK_LINE(29)
	this->delay = ((Float)0);
	HX_STACK_LINE(19)
	this->curFrame = (int)0;
	HX_STACK_LINE(82)
	::flixel::animation::FlxAnimationController tmp = Parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(82)
	::String tmp1 = Name;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(82)
	super::__construct(tmp,tmp1);
	HX_STACK_LINE(84)
	int tmp2 = FrameRate;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(84)
	this->set_frameRate(tmp2);
	HX_STACK_LINE(85)
	this->frames = Frames;
	HX_STACK_LINE(86)
	this->looped = Looped;
	HX_STACK_LINE(87)
	this->flipX = FlipX;
	HX_STACK_LINE(88)
	this->flipY = FlipY;
}
;
	return null();
}

//FlxAnimation_obj::~FlxAnimation_obj() { }

Dynamic FlxAnimation_obj::__CreateEmpty() { return  new FlxAnimation_obj; }
hx::ObjectPtr< FlxAnimation_obj > FlxAnimation_obj::__new(::flixel::animation::FlxAnimationController Parent,::String Name,Array< int > Frames,hx::Null< int >  __o_FrameRate,hx::Null< bool >  __o_Looped,hx::Null< bool >  __o_FlipX,hx::Null< bool >  __o_FlipY)
{  hx::ObjectPtr< FlxAnimation_obj > _result_ = new FlxAnimation_obj();
	_result_->__construct(Parent,Name,Frames,__o_FrameRate,__o_Looped,__o_FlipX,__o_FlipY);
	return _result_;}

Dynamic FlxAnimation_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxAnimation_obj > _result_ = new FlxAnimation_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6]);
	return _result_;}

Void FlxAnimation_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.animation.FlxAnimation","destroy",0x7cb38c5a,"flixel.animation.FlxAnimation.destroy","flixel/animation/FlxAnimation.hx",95,0x660bc6ae)
		HX_STACK_THIS(this)
		HX_STACK_LINE(96)
		this->frames = null();
		HX_STACK_LINE(97)
		this->name = null();
		HX_STACK_LINE(98)
		this->super::destroy();
	}
return null();
}


Void FlxAnimation_obj::play( hx::Null< bool >  __o_Force,hx::Null< bool >  __o_Reversed,hx::Null< int >  __o_Frame){
bool Force = __o_Force.Default(false);
bool Reversed = __o_Reversed.Default(false);
int Frame = __o_Frame.Default(0);
	HX_STACK_FRAME("flixel.animation.FlxAnimation","play",0xb2d17294,"flixel.animation.FlxAnimation.play","flixel/animation/FlxAnimation.hx",112,0x660bc6ae)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Force,"Force")
	HX_STACK_ARG(Reversed,"Reversed")
	HX_STACK_ARG(Frame,"Frame")
{
		HX_STACK_LINE(113)
		bool tmp = Force;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(113)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(113)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(113)
		bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(113)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(113)
		if ((tmp3)){
			HX_STACK_LINE(113)
			bool tmp5 = this->finished;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(113)
			bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(113)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(113)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(113)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(113)
			tmp4 = !(tmp9);
		}
		else{
			HX_STACK_LINE(113)
			tmp4 = false;
		}
		HX_STACK_LINE(113)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(113)
		if ((tmp4)){
			HX_STACK_LINE(113)
			bool tmp6 = this->reversed;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(113)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(113)
			bool tmp8 = Reversed;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(113)
			tmp5 = (tmp7 == tmp8);
		}
		else{
			HX_STACK_LINE(113)
			tmp5 = false;
		}
		HX_STACK_LINE(113)
		if ((tmp5)){
			HX_STACK_LINE(115)
			this->paused = false;
			HX_STACK_LINE(116)
			this->finished = false;
			HX_STACK_LINE(117)
			return null();
		}
		HX_STACK_LINE(120)
		this->reversed = Reversed;
		HX_STACK_LINE(121)
		this->paused = false;
		HX_STACK_LINE(122)
		this->_frameTimer = (int)0;
		HX_STACK_LINE(123)
		Float tmp6 = this->delay;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(123)
		bool tmp7 = (tmp6 == (int)0);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(123)
		this->finished = tmp7;
		HX_STACK_LINE(125)
		int tmp8 = this->frames->length;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(125)
		int tmp9 = (tmp8 - (int)1);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(125)
		int maxFrameIndex = tmp9;		HX_STACK_VAR(maxFrameIndex,"maxFrameIndex");
		HX_STACK_LINE(126)
		bool tmp10 = (Frame < (int)0);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(126)
		if ((tmp10)){
			HX_STACK_LINE(127)
			::flixel::math::FlxRandom tmp11 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(127)
			int tmp12 = maxFrameIndex;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(127)
			int tmp13 = tmp11->_int((int)0,tmp12,null());		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(127)
			this->set_curFrame(tmp13);
		}
		else{
			HX_STACK_LINE(130)
			bool tmp11 = (Frame > maxFrameIndex);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(130)
			if ((tmp11)){
				HX_STACK_LINE(131)
				Frame = maxFrameIndex;
			}
			HX_STACK_LINE(132)
			bool tmp12 = this->reversed;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(132)
			if ((tmp12)){
				HX_STACK_LINE(133)
				int tmp13 = (maxFrameIndex - Frame);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(133)
				Frame = tmp13;
			}
			HX_STACK_LINE(134)
			int tmp13 = Frame;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(134)
			this->set_curFrame(tmp13);
		}
		HX_STACK_LINE(137)
		bool tmp11 = this->finished;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(137)
		if ((tmp11)){
			HX_STACK_LINE(138)
			::flixel::animation::FlxAnimationController tmp12 = this->parent;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(138)
			::flixel::animation::FlxAnimationController _this = tmp12;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(138)
			bool tmp13 = (_this->finishCallback != null());		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(138)
			if ((tmp13)){
				HX_STACK_LINE(138)
				::String tmp14 = this->name;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(138)
				_this->finishCallback(tmp14);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxAnimation_obj,play,(void))

Void FlxAnimation_obj::restart( ){
{
		HX_STACK_FRAME("flixel.animation.FlxAnimation","restart",0xc2d3272f,"flixel.animation.FlxAnimation.restart","flixel/animation/FlxAnimation.hx",142,0x660bc6ae)
		HX_STACK_THIS(this)
		HX_STACK_LINE(143)
		bool tmp = this->reversed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(143)
		this->play(true,tmp,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimation_obj,restart,(void))

Void FlxAnimation_obj::stop( ){
{
		HX_STACK_FRAME("flixel.animation.FlxAnimation","stop",0xb4d334a2,"flixel.animation.FlxAnimation.stop","flixel/animation/FlxAnimation.hx",147,0x660bc6ae)
		HX_STACK_THIS(this)
		HX_STACK_LINE(148)
		this->finished = true;
		HX_STACK_LINE(149)
		this->paused = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimation_obj,stop,(void))

Void FlxAnimation_obj::reset( ){
{
		HX_STACK_FRAME("flixel.animation.FlxAnimation","reset",0xe6ad112f,"flixel.animation.FlxAnimation.reset","flixel/animation/FlxAnimation.hx",153,0x660bc6ae)
		HX_STACK_THIS(this)
		HX_STACK_LINE(154)
		this->stop();
		HX_STACK_LINE(155)
		bool tmp = this->reversed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(155)
		int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(155)
		if ((tmp)){
			HX_STACK_LINE(155)
			int tmp2 = this->frames->length;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(155)
			tmp1 = (tmp2 - (int)1);
		}
		else{
			HX_STACK_LINE(155)
			tmp1 = (int)0;
		}
		HX_STACK_LINE(155)
		this->set_curFrame(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimation_obj,reset,(void))

Void FlxAnimation_obj::finish( ){
{
		HX_STACK_FRAME("flixel.animation.FlxAnimation","finish",0x6ec8ecf3,"flixel.animation.FlxAnimation.finish","flixel/animation/FlxAnimation.hx",159,0x660bc6ae)
		HX_STACK_THIS(this)
		HX_STACK_LINE(160)
		this->stop();
		HX_STACK_LINE(161)
		bool tmp = this->reversed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(161)
		int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(161)
		if ((tmp)){
			HX_STACK_LINE(161)
			tmp1 = (int)0;
		}
		else{
			HX_STACK_LINE(161)
			int tmp2 = this->frames->length;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(161)
			tmp1 = (tmp2 - (int)1);
		}
		HX_STACK_LINE(161)
		this->set_curFrame(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimation_obj,finish,(void))

Void FlxAnimation_obj::pause( ){
{
		HX_STACK_FRAME("flixel.animation.FlxAnimation","pause",0xbd3c9e56,"flixel.animation.FlxAnimation.pause","flixel/animation/FlxAnimation.hx",166,0x660bc6ae)
		HX_STACK_THIS(this)
		HX_STACK_LINE(166)
		this->paused = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimation_obj,pause,(void))

Void FlxAnimation_obj::resume( ){
{
		HX_STACK_FRAME("flixel.animation.FlxAnimation","resume",0xf0ce164d,"flixel.animation.FlxAnimation.resume","flixel/animation/FlxAnimation.hx",171,0x660bc6ae)
		HX_STACK_THIS(this)
		HX_STACK_LINE(171)
		this->paused = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimation_obj,resume,(void))

Void FlxAnimation_obj::reverse( ){
{
		HX_STACK_FRAME("flixel.animation.FlxAnimation","reverse",0x73299882,"flixel.animation.FlxAnimation.reverse","flixel/animation/FlxAnimation.hx",175,0x660bc6ae)
		HX_STACK_THIS(this)
		HX_STACK_LINE(176)
		bool tmp = this->reversed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(176)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(176)
		this->reversed = tmp1;
		HX_STACK_LINE(177)
		bool tmp2 = this->finished;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(177)
		if ((tmp2)){
			HX_STACK_LINE(178)
			bool tmp3 = this->reversed;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(178)
			this->play(false,tmp3,null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimation_obj,reverse,(void))

Void FlxAnimation_obj::update( Float elapsed){
{
		HX_STACK_FRAME("flixel.animation.FlxAnimation","update",0x6f4f32a9,"flixel.animation.FlxAnimation.update","flixel/animation/FlxAnimation.hx",182,0x660bc6ae)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(183)
		Float tmp = this->delay;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(183)
		bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(183)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(183)
		bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(183)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(183)
		if ((tmp3)){
			HX_STACK_LINE(183)
			tmp4 = this->finished;
		}
		else{
			HX_STACK_LINE(183)
			tmp4 = true;
		}
		HX_STACK_LINE(183)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(183)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(183)
		if ((tmp5)){
			HX_STACK_LINE(183)
			tmp6 = this->paused;
		}
		else{
			HX_STACK_LINE(183)
			tmp6 = true;
		}
		HX_STACK_LINE(183)
		if ((tmp6)){
			HX_STACK_LINE(184)
			return null();
		}
		HX_STACK_LINE(186)
		hx::AddEq(this->_frameTimer,elapsed);
		HX_STACK_LINE(187)
		while((true)){
			HX_STACK_LINE(187)
			Float tmp7 = this->_frameTimer;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(187)
			Float tmp8 = this->delay;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(187)
			bool tmp9 = (tmp7 > tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(187)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(187)
			if ((tmp9)){
				HX_STACK_LINE(187)
				bool tmp11 = this->finished;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(187)
				bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(187)
				bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(187)
				tmp10 = !(tmp13);
			}
			else{
				HX_STACK_LINE(187)
				tmp10 = false;
			}
			HX_STACK_LINE(187)
			bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(187)
			if ((tmp11)){
				HX_STACK_LINE(187)
				break;
			}
			HX_STACK_LINE(189)
			Float tmp12 = this->delay;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(189)
			hx::SubEq(this->_frameTimer,tmp12);
			HX_STACK_LINE(190)
			bool tmp13 = this->reversed;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(190)
			if ((tmp13)){
				HX_STACK_LINE(192)
				bool tmp14 = this->looped;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(192)
				bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(192)
				if ((tmp14)){
					HX_STACK_LINE(192)
					int tmp16 = this->curFrame;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(192)
					int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(192)
					tmp15 = (tmp17 == (int)0);
				}
				else{
					HX_STACK_LINE(192)
					tmp15 = false;
				}
				HX_STACK_LINE(192)
				if ((tmp15)){
					HX_STACK_LINE(193)
					int tmp16 = this->frames->length;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(193)
					int tmp17 = (tmp16 - (int)1);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(193)
					this->set_curFrame(tmp17);
				}
				else{
					HX_STACK_LINE(195)
					::flixel::animation::FlxAnimation _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(195)
					int _g1 = _g->curFrame;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(195)
					int tmp16 = (_g1 - (int)1);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(195)
					_g->set_curFrame(tmp16);
					HX_STACK_LINE(195)
					_g1;
				}
			}
			else{
				HX_STACK_LINE(199)
				bool tmp14 = this->looped;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(199)
				bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(199)
				if ((tmp14)){
					HX_STACK_LINE(199)
					int tmp16 = this->curFrame;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(199)
					int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(199)
					int tmp18 = this->frames->length;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(199)
					int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(199)
					int tmp20 = (tmp19 - (int)1);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(199)
					int tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(199)
					tmp15 = (tmp17 == tmp21);
				}
				else{
					HX_STACK_LINE(199)
					tmp15 = false;
				}
				HX_STACK_LINE(199)
				if ((tmp15)){
					HX_STACK_LINE(200)
					this->set_curFrame((int)0);
				}
				else{
					HX_STACK_LINE(202)
					::flixel::animation::FlxAnimation _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(202)
					int _g1 = _g->curFrame;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(202)
					int tmp16 = (_g1 + (int)1);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(202)
					_g->set_curFrame(tmp16);
					HX_STACK_LINE(202)
					_g1;
				}
			}
		}
	}
return null();
}


::flixel::animation::FlxBaseAnimation FlxAnimation_obj::clone( ::flixel::animation::FlxAnimationController Parent){
	HX_STACK_FRAME("flixel.animation.FlxAnimation","clone",0x4847dabd,"flixel.animation.FlxAnimation.clone","flixel/animation/FlxAnimation.hx",208,0x660bc6ae)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Parent,"Parent")
	HX_STACK_LINE(209)
	::flixel::animation::FlxAnimationController tmp = Parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(209)
	::String tmp1 = this->name;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(209)
	int tmp2 = this->frameRate;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(209)
	bool tmp3 = this->looped;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(209)
	bool tmp4 = this->flipX;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(209)
	bool tmp5 = this->flipY;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(209)
	::flixel::animation::FlxAnimation tmp6 = ::flixel::animation::FlxAnimation_obj::__new(tmp,tmp1,this->frames,tmp2,tmp3,tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(209)
	return tmp6;
}


int FlxAnimation_obj::set_frameRate( int value){
	HX_STACK_FRAME("flixel.animation.FlxAnimation","set_frameRate",0x8699eef0,"flixel.animation.FlxAnimation.set_frameRate","flixel/animation/FlxAnimation.hx",213,0x660bc6ae)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(214)
	this->delay = (int)0;
	HX_STACK_LINE(215)
	this->frameRate = value;
	HX_STACK_LINE(216)
	bool tmp = (value > (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(216)
	if ((tmp)){
		HX_STACK_LINE(217)
		Float tmp1 = (Float(((Float)1.0)) / Float(value));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(217)
		this->delay = tmp1;
	}
	HX_STACK_LINE(218)
	int tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(218)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxAnimation_obj,set_frameRate,return )

int FlxAnimation_obj::set_curFrame( int Frame){
	HX_STACK_FRAME("flixel.animation.FlxAnimation","set_curFrame",0x46812eaa,"flixel.animation.FlxAnimation.set_curFrame","flixel/animation/FlxAnimation.hx",222,0x660bc6ae)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Frame,"Frame")
	HX_STACK_LINE(223)
	int tmp = this->frames->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(223)
	int tmp1 = (tmp - (int)1);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(223)
	int maxFrameIndex = tmp1;		HX_STACK_VAR(maxFrameIndex,"maxFrameIndex");
	HX_STACK_LINE(224)
	bool tmp2 = this->reversed;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(224)
	if ((tmp2)){
		HX_STACK_LINE(225)
		int tmp3 = (maxFrameIndex - Frame);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(225)
		Frame = tmp3;
	}
	HX_STACK_LINE(227)
	bool tmp3 = (Frame >= (int)0);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(227)
	if ((tmp3)){
		HX_STACK_LINE(229)
		bool tmp4 = this->looped;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(229)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(229)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(229)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(229)
		if ((tmp6)){
			HX_STACK_LINE(229)
			tmp7 = (Frame > maxFrameIndex);
		}
		else{
			HX_STACK_LINE(229)
			tmp7 = false;
		}
		HX_STACK_LINE(229)
		if ((tmp7)){
			HX_STACK_LINE(231)
			this->finished = true;
			HX_STACK_LINE(232)
			bool tmp8 = this->reversed;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(232)
			int tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(232)
			if ((tmp8)){
				HX_STACK_LINE(232)
				tmp9 = (int)0;
			}
			else{
				HX_STACK_LINE(232)
				tmp9 = maxFrameIndex;
			}
			HX_STACK_LINE(232)
			this->curFrame = tmp9;
		}
		else{
			HX_STACK_LINE(236)
			this->curFrame = Frame;
		}
	}
	else{
		HX_STACK_LINE(240)
		::flixel::math::FlxRandom tmp4 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(240)
		int tmp5 = maxFrameIndex;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(240)
		int tmp6 = tmp4->_int((int)0,tmp5,null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(240)
		this->curFrame = tmp6;
	}
	HX_STACK_LINE(242)
	int tmp4 = this->curFrame;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(242)
	int tmp5 = this->frames->__get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(242)
	this->set_curIndex(tmp5);
	HX_STACK_LINE(244)
	bool tmp6 = this->finished;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(244)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(244)
	if ((tmp6)){
		HX_STACK_LINE(244)
		::flixel::animation::FlxAnimationController tmp8 = this->parent;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(244)
		::flixel::animation::FlxAnimationController tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(244)
		tmp7 = (tmp9 != null());
	}
	else{
		HX_STACK_LINE(244)
		tmp7 = false;
	}
	HX_STACK_LINE(244)
	if ((tmp7)){
		HX_STACK_LINE(245)
		::flixel::animation::FlxAnimationController tmp8 = this->parent;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(245)
		::flixel::animation::FlxAnimationController _this = tmp8;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(245)
		bool tmp9 = (_this->finishCallback != null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(245)
		if ((tmp9)){
			HX_STACK_LINE(245)
			::String tmp10 = this->name;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(245)
			_this->finishCallback(tmp10);
		}
	}
	HX_STACK_LINE(247)
	int tmp8 = Frame;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(247)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxAnimation_obj,set_curFrame,return )

int FlxAnimation_obj::get_numFrames( ){
	HX_STACK_FRAME("flixel.animation.FlxAnimation","get_numFrames",0x65f5f5c3,"flixel.animation.FlxAnimation.get_numFrames","flixel/animation/FlxAnimation.hx",251,0x660bc6ae)
	HX_STACK_THIS(this)
	HX_STACK_LINE(252)
	int tmp = this->frames->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(252)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimation_obj,get_numFrames,return )


FlxAnimation_obj::FlxAnimation_obj()
{
}

void FlxAnimation_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxAnimation);
	HX_MARK_MEMBER_NAME(frameRate,"frameRate");
	HX_MARK_MEMBER_NAME(curFrame,"curFrame");
	HX_MARK_MEMBER_NAME(numFrames,"numFrames");
	HX_MARK_MEMBER_NAME(delay,"delay");
	HX_MARK_MEMBER_NAME(finished,"finished");
	HX_MARK_MEMBER_NAME(paused,"paused");
	HX_MARK_MEMBER_NAME(looped,"looped");
	HX_MARK_MEMBER_NAME(reversed,"reversed");
	HX_MARK_MEMBER_NAME(flipX,"flipX");
	HX_MARK_MEMBER_NAME(flipY,"flipY");
	HX_MARK_MEMBER_NAME(frames,"frames");
	HX_MARK_MEMBER_NAME(_frameTimer,"_frameTimer");
	::flixel::animation::FlxBaseAnimation_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxAnimation_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(frameRate,"frameRate");
	HX_VISIT_MEMBER_NAME(curFrame,"curFrame");
	HX_VISIT_MEMBER_NAME(numFrames,"numFrames");
	HX_VISIT_MEMBER_NAME(delay,"delay");
	HX_VISIT_MEMBER_NAME(finished,"finished");
	HX_VISIT_MEMBER_NAME(paused,"paused");
	HX_VISIT_MEMBER_NAME(looped,"looped");
	HX_VISIT_MEMBER_NAME(reversed,"reversed");
	HX_VISIT_MEMBER_NAME(flipX,"flipX");
	HX_VISIT_MEMBER_NAME(flipY,"flipY");
	HX_VISIT_MEMBER_NAME(frames,"frames");
	HX_VISIT_MEMBER_NAME(_frameTimer,"_frameTimer");
	::flixel::animation::FlxBaseAnimation_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxAnimation_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"play") ) { return play_dyn(); }
		if (HX_FIELD_EQ(inName,"stop") ) { return stop_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"delay") ) { return delay; }
		if (HX_FIELD_EQ(inName,"flipX") ) { return flipX; }
		if (HX_FIELD_EQ(inName,"flipY") ) { return flipY; }
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		if (HX_FIELD_EQ(inName,"pause") ) { return pause_dyn(); }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"paused") ) { return paused; }
		if (HX_FIELD_EQ(inName,"looped") ) { return looped; }
		if (HX_FIELD_EQ(inName,"frames") ) { return frames; }
		if (HX_FIELD_EQ(inName,"finish") ) { return finish_dyn(); }
		if (HX_FIELD_EQ(inName,"resume") ) { return resume_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"restart") ) { return restart_dyn(); }
		if (HX_FIELD_EQ(inName,"reverse") ) { return reverse_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"curFrame") ) { return curFrame; }
		if (HX_FIELD_EQ(inName,"finished") ) { return finished; }
		if (HX_FIELD_EQ(inName,"reversed") ) { return reversed; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameRate") ) { return frameRate; }
		if (HX_FIELD_EQ(inName,"numFrames") ) { return inCallProp == hx::paccAlways ? get_numFrames() : numFrames; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_frameTimer") ) { return _frameTimer; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"set_curFrame") ) { return set_curFrame_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"set_frameRate") ) { return set_frameRate_dyn(); }
		if (HX_FIELD_EQ(inName,"get_numFrames") ) { return get_numFrames_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxAnimation_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"delay") ) { delay=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"flipX") ) { flipX=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"flipY") ) { flipY=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"paused") ) { paused=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"looped") ) { looped=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frames") ) { frames=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"curFrame") ) { if (inCallProp == hx::paccAlways) return set_curFrame(inValue);curFrame=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"finished") ) { finished=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"reversed") ) { reversed=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameRate") ) { if (inCallProp == hx::paccAlways) return set_frameRate(inValue);frameRate=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"numFrames") ) { numFrames=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_frameTimer") ) { _frameTimer=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxAnimation_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("frameRate","\xad","\x11","\x25","\x39"));
	outFields->push(HX_HCSTRING("curFrame","\x8d","\x72","\x31","\x4e"));
	outFields->push(HX_HCSTRING("numFrames","\x8c","\xfa","\x86","\x5d"));
	outFields->push(HX_HCSTRING("delay","\x83","\xd7","\x26","\xd7"));
	outFields->push(HX_HCSTRING("finished","\x72","\x93","\x0e","\x95"));
	outFields->push(HX_HCSTRING("paused","\xae","\x40","\x84","\xef"));
	outFields->push(HX_HCSTRING("looped","\xc3","\x5f","\xb9","\x61"));
	outFields->push(HX_HCSTRING("reversed","\x02","\xc5","\xb5","\x81"));
	outFields->push(HX_HCSTRING("flipX","\x0b","\x45","\x92","\x02"));
	outFields->push(HX_HCSTRING("flipY","\x0c","\x45","\x92","\x02"));
	outFields->push(HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac"));
	outFields->push(HX_HCSTRING("_frameTimer","\x77","\xc1","\xe5","\xc5"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(FlxAnimation_obj,frameRate),HX_HCSTRING("frameRate","\xad","\x11","\x25","\x39")},
	{hx::fsInt,(int)offsetof(FlxAnimation_obj,curFrame),HX_HCSTRING("curFrame","\x8d","\x72","\x31","\x4e")},
	{hx::fsInt,(int)offsetof(FlxAnimation_obj,numFrames),HX_HCSTRING("numFrames","\x8c","\xfa","\x86","\x5d")},
	{hx::fsFloat,(int)offsetof(FlxAnimation_obj,delay),HX_HCSTRING("delay","\x83","\xd7","\x26","\xd7")},
	{hx::fsBool,(int)offsetof(FlxAnimation_obj,finished),HX_HCSTRING("finished","\x72","\x93","\x0e","\x95")},
	{hx::fsBool,(int)offsetof(FlxAnimation_obj,paused),HX_HCSTRING("paused","\xae","\x40","\x84","\xef")},
	{hx::fsBool,(int)offsetof(FlxAnimation_obj,looped),HX_HCSTRING("looped","\xc3","\x5f","\xb9","\x61")},
	{hx::fsBool,(int)offsetof(FlxAnimation_obj,reversed),HX_HCSTRING("reversed","\x02","\xc5","\xb5","\x81")},
	{hx::fsBool,(int)offsetof(FlxAnimation_obj,flipX),HX_HCSTRING("flipX","\x0b","\x45","\x92","\x02")},
	{hx::fsBool,(int)offsetof(FlxAnimation_obj,flipY),HX_HCSTRING("flipY","\x0c","\x45","\x92","\x02")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(FlxAnimation_obj,frames),HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac")},
	{hx::fsFloat,(int)offsetof(FlxAnimation_obj,_frameTimer),HX_HCSTRING("_frameTimer","\x77","\xc1","\xe5","\xc5")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("frameRate","\xad","\x11","\x25","\x39"),
	HX_HCSTRING("curFrame","\x8d","\x72","\x31","\x4e"),
	HX_HCSTRING("numFrames","\x8c","\xfa","\x86","\x5d"),
	HX_HCSTRING("delay","\x83","\xd7","\x26","\xd7"),
	HX_HCSTRING("finished","\x72","\x93","\x0e","\x95"),
	HX_HCSTRING("paused","\xae","\x40","\x84","\xef"),
	HX_HCSTRING("looped","\xc3","\x5f","\xb9","\x61"),
	HX_HCSTRING("reversed","\x02","\xc5","\xb5","\x81"),
	HX_HCSTRING("flipX","\x0b","\x45","\x92","\x02"),
	HX_HCSTRING("flipY","\x0c","\x45","\x92","\x02"),
	HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac"),
	HX_HCSTRING("_frameTimer","\x77","\xc1","\xe5","\xc5"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"),
	HX_HCSTRING("restart","\xcf","\xc7","\xa5","\x6a"),
	HX_HCSTRING("stop","\x02","\xf0","\x5b","\x4c"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	HX_HCSTRING("finish","\x53","\x40","\x7f","\x86"),
	HX_HCSTRING("pause","\xf6","\xd6","\x57","\xbd"),
	HX_HCSTRING("resume","\xad","\x69","\x84","\x08"),
	HX_HCSTRING("reverse","\x22","\x39","\xfc","\x1a"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("set_frameRate","\x90","\xc7","\x8e","\x3f"),
	HX_HCSTRING("set_curFrame","\x0a","\x4a","\x44","\x18"),
	HX_HCSTRING("get_numFrames","\x63","\xce","\xea","\x1e"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxAnimation_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxAnimation_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxAnimation_obj::__mClass;

void FlxAnimation_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.animation.FlxAnimation","\xce","\x5f","\xe3","\xa1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxAnimation_obj >;
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
