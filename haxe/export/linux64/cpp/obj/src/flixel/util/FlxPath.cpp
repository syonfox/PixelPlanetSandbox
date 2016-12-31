#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPath
#include <flixel/util/FlxPath.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
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
namespace flixel{
namespace util{

Void FlxPath_obj::__construct(Array< ::Dynamic > Nodes)
{
HX_STACK_FRAME("flixel.util.FlxPath","new",0x6e30af6f,"flixel.util.FlxPath.new","flixel/util/FlxPath.hx",44,0x22aae741)
HX_STACK_THIS(this)
HX_STACK_ARG(Nodes,"Nodes")
{
	HX_STACK_LINE(148)
	this->_firstUpdate = false;
	HX_STACK_LINE(146)
	this->_wasObjectImmovable = null();
	HX_STACK_LINE(144)
	this->_autoRotate = false;
	HX_STACK_LINE(140)
	this->_inc = (int)1;
	HX_STACK_LINE(131)
	this->finished = false;
	HX_STACK_LINE(129)
	this->nodeIndex = (int)0;
	HX_STACK_LINE(110)
	this->active = false;
	HX_STACK_LINE(105)
	this->autoCenter = true;
	HX_STACK_LINE(101)
	this->angle = ((Float)0);
	HX_STACK_LINE(97)
	this->speed = ((Float)0);
	HX_STACK_LINE(158)
	bool tmp = (Nodes != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(158)
	if ((tmp)){
		HX_STACK_LINE(159)
		this->_nodes = Nodes->copy();
	}
	else{
		HX_STACK_LINE(161)
		this->_nodes = Array_obj< ::Dynamic >::__new();
	}
}
;
	return null();
}

//FlxPath_obj::~FlxPath_obj() { }

Dynamic FlxPath_obj::__CreateEmpty() { return  new FlxPath_obj; }
hx::ObjectPtr< FlxPath_obj > FlxPath_obj::__new(Array< ::Dynamic > Nodes)
{  hx::ObjectPtr< FlxPath_obj > _result_ = new FlxPath_obj();
	_result_->__construct(Nodes);
	return _result_;}

Dynamic FlxPath_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxPath_obj > _result_ = new FlxPath_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

hx::Object *FlxPath_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::util::IFlxDestroyable_obj)) return operator ::flixel::util::IFlxDestroyable_obj *();
	return super::__ToInterface(inType);
}

FlxPath_obj::operator ::flixel::util::IFlxDestroyable_obj *()
	{ return new ::flixel::util::IFlxDestroyable_delegate_< FlxPath_obj >(this); }
::flixel::util::FlxPath FlxPath_obj::reset( ){
	HX_STACK_FRAME("flixel.util.FlxPath","reset",0x2ce64a9e,"flixel.util.FlxPath.reset","flixel/util/FlxPath.hx",170,0x22aae741)
	HX_STACK_THIS(this)
	HX_STACK_LINE(175)
	this->autoCenter = true;
	HX_STACK_LINE(176)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxPath_obj,reset,return )

::flixel::util::FlxPath FlxPath_obj::setProperties( hx::Null< Float >  __o_Speed,hx::Null< int >  __o_Mode,hx::Null< bool >  __o_AutoRotate){
Float Speed = __o_Speed.Default(100);
int Mode = __o_Mode.Default(0);
bool AutoRotate = __o_AutoRotate.Default(false);
	HX_STACK_FRAME("flixel.util.FlxPath","setProperties",0x27d92204,"flixel.util.FlxPath.setProperties","flixel/util/FlxPath.hx",189,0x22aae741)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Speed,"Speed")
	HX_STACK_ARG(Mode,"Mode")
	HX_STACK_ARG(AutoRotate,"AutoRotate")
{
		HX_STACK_LINE(190)
		Float tmp = Speed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(190)
		Float tmp1 = ::Math_obj::abs(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(190)
		this->speed = tmp1;
		HX_STACK_LINE(191)
		this->_mode = Mode;
		HX_STACK_LINE(192)
		this->_autoRotate = AutoRotate;
		HX_STACK_LINE(193)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC3(FlxPath_obj,setProperties,return )

::flixel::util::FlxPath FlxPath_obj::start( Array< ::Dynamic > Nodes,hx::Null< Float >  __o_Speed,hx::Null< int >  __o_Mode,hx::Null< bool >  __o_AutoRotate,hx::Null< bool >  __o_NodesAsReference){
Float Speed = __o_Speed.Default(100);
int Mode = __o_Mode.Default(0);
bool AutoRotate = __o_AutoRotate.Default(false);
bool NodesAsReference = __o_NodesAsReference.Default(false);
	HX_STACK_FRAME("flixel.util.FlxPath","start",0xca297531,"flixel.util.FlxPath.start","flixel/util/FlxPath.hx",207,0x22aae741)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Nodes,"Nodes")
	HX_STACK_ARG(Speed,"Speed")
	HX_STACK_ARG(Mode,"Mode")
	HX_STACK_ARG(AutoRotate,"AutoRotate")
	HX_STACK_ARG(NodesAsReference,"NodesAsReference")
{
		HX_STACK_LINE(208)
		bool tmp = (Nodes != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(208)
		if ((tmp)){
			HX_STACK_LINE(210)
			bool tmp1 = NodesAsReference;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(210)
			if ((tmp1)){
				HX_STACK_LINE(212)
				this->_nodes = Nodes;
			}
			else{
				HX_STACK_LINE(216)
				this->_nodes = Nodes->copy();
			}
		}
		HX_STACK_LINE(219)
		Float tmp1 = Speed;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(219)
		int tmp2 = Mode;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(219)
		bool tmp3 = AutoRotate;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(219)
		this->setProperties(tmp1,tmp2,tmp3);
		HX_STACK_LINE(220)
		int tmp4 = this->_nodes->length;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(220)
		bool tmp5 = (tmp4 > (int)0);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(220)
		if ((tmp5)){
			HX_STACK_LINE(222)
			this->restart();
		}
		HX_STACK_LINE(224)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC5(FlxPath_obj,start,return )

::flixel::util::FlxPath FlxPath_obj::restart( ){
	HX_STACK_FRAME("flixel.util.FlxPath","restart",0xf4e0da5e,"flixel.util.FlxPath.restart","flixel/util/FlxPath.hx",234,0x22aae741)
	HX_STACK_THIS(this)
	HX_STACK_LINE(235)
	this->finished = false;
	HX_STACK_LINE(236)
	this->_firstUpdate = true;
	HX_STACK_LINE(237)
	int tmp = this->_nodes->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(237)
	bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(237)
	this->active = tmp1;
	HX_STACK_LINE(238)
	bool tmp2 = this->active;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(238)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(238)
	if ((tmp3)){
		HX_STACK_LINE(240)
		return hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(244)
	int tmp4 = this->_mode;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(244)
	bool tmp5 = (tmp4 == (int)1);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(244)
	bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(244)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(244)
	if ((tmp6)){
		HX_STACK_LINE(244)
		int tmp8 = this->_mode;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(244)
		int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(244)
		tmp7 = (tmp9 == (int)256);
	}
	else{
		HX_STACK_LINE(244)
		tmp7 = true;
	}
	HX_STACK_LINE(244)
	if ((tmp7)){
		HX_STACK_LINE(246)
		int tmp8 = this->_nodes->length;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(246)
		int tmp9 = (tmp8 - (int)1);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(246)
		this->nodeIndex = tmp9;
		HX_STACK_LINE(247)
		this->_inc = (int)-1;
	}
	else{
		HX_STACK_LINE(251)
		this->nodeIndex = (int)0;
		HX_STACK_LINE(252)
		this->_inc = (int)1;
	}
	HX_STACK_LINE(255)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxPath_obj,restart,return )

::flixel::util::FlxPath FlxPath_obj::setNode( int NodeIndex){
	HX_STACK_FRAME("flixel.util.FlxPath","setNode",0x98c95d53,"flixel.util.FlxPath.setNode","flixel/util/FlxPath.hx",264,0x22aae741)
	HX_STACK_THIS(this)
	HX_STACK_ARG(NodeIndex,"NodeIndex")
	HX_STACK_LINE(265)
	bool tmp = (NodeIndex < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(265)
	if ((tmp)){
		HX_STACK_LINE(266)
		NodeIndex = (int)0;
	}
	else{
		HX_STACK_LINE(267)
		int tmp1 = NodeIndex;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(267)
		int tmp2 = this->_nodes->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(267)
		int tmp3 = (tmp2 - (int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(267)
		bool tmp4 = (tmp1 > tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(267)
		if ((tmp4)){
			HX_STACK_LINE(268)
			int tmp5 = this->_nodes->length;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(268)
			int tmp6 = (tmp5 - (int)1);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(268)
			NodeIndex = tmp6;
		}
	}
	HX_STACK_LINE(270)
	this->nodeIndex = NodeIndex;
	HX_STACK_LINE(271)
	this->advancePath(null());
	HX_STACK_LINE(272)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPath_obj,setNode,return )

Void FlxPath_obj::update( Float elapsed){
{
		HX_STACK_FRAME("flixel.util.FlxPath","update",0x9b283a5a,"flixel.util.FlxPath.update","flixel/util/FlxPath.hx",281,0x22aae741)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(282)
		::flixel::FlxObject tmp = this->object;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(282)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(282)
		if ((tmp1)){
			HX_STACK_LINE(283)
			return null();
		}
		HX_STACK_LINE(285)
		bool tmp2 = this->_firstUpdate;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(285)
		if ((tmp2)){
			HX_STACK_LINE(287)
			::flixel::FlxObject tmp3 = this->object;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(287)
			this->_wasObjectImmovable = tmp3->immovable;
			HX_STACK_LINE(288)
			::flixel::FlxObject tmp4 = this->object;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(288)
			tmp4->set_immovable(true);
			HX_STACK_LINE(289)
			this->_firstUpdate = false;
		}
		HX_STACK_LINE(293)
		::flixel::math::FlxPoint tmp3 = ::flixel::util::FlxPath_obj::_point;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(293)
		::flixel::FlxObject tmp4 = this->object;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(293)
		Float tmp5 = tmp4->x;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(293)
		tmp3->set_x(tmp5);
		HX_STACK_LINE(294)
		::flixel::math::FlxPoint tmp6 = ::flixel::util::FlxPath_obj::_point;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(294)
		::flixel::FlxObject tmp7 = this->object;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(294)
		Float tmp8 = tmp7->y;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(294)
		tmp6->set_y(tmp8);
		HX_STACK_LINE(295)
		bool tmp9 = this->autoCenter;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(295)
		if ((tmp9)){
			HX_STACK_LINE(297)
			::flixel::math::FlxPoint tmp10 = ::flixel::util::FlxPath_obj::_point;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(297)
			::flixel::math::FlxPoint _this = tmp10;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(297)
			::flixel::FlxObject tmp11 = this->object;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(297)
			Float tmp12 = tmp11->get_width();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(297)
			Float tmp13 = (tmp12 * ((Float)0.5));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(297)
			Float X = tmp13;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(297)
			::flixel::FlxObject tmp14 = this->object;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(297)
			Float tmp15 = tmp14->get_height();		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(297)
			Float tmp16 = (tmp15 * ((Float)0.5));		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(297)
			Float Y = tmp16;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(297)
			{
				HX_STACK_LINE(297)
				::flixel::math::FlxPoint _g = _this;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(297)
				Float tmp17 = (_g->x + X);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(297)
				_g->set_x(tmp17);
			}
			HX_STACK_LINE(297)
			{
				HX_STACK_LINE(297)
				::flixel::math::FlxPoint _g = _this;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(297)
				Float tmp17 = (_g->y + Y);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(297)
				_g->set_y(tmp17);
			}
			HX_STACK_LINE(297)
			_this;
		}
		HX_STACK_LINE(299)
		int tmp10 = this->nodeIndex;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(299)
		::flixel::math::FlxPoint tmp11 = this->_nodes->__get(tmp10).StaticCast< ::flixel::math::FlxPoint >();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(299)
		::flixel::math::FlxPoint node = tmp11;		HX_STACK_VAR(node,"node");
		HX_STACK_LINE(300)
		Float tmp12 = node->x;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(300)
		::flixel::math::FlxPoint tmp13 = ::flixel::util::FlxPath_obj::_point;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(300)
		Float tmp14 = tmp13->x;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(300)
		Float tmp15 = (tmp12 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(300)
		Float deltaX = tmp15;		HX_STACK_VAR(deltaX,"deltaX");
		HX_STACK_LINE(301)
		Float tmp16 = node->y;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(301)
		::flixel::math::FlxPoint tmp17 = ::flixel::util::FlxPath_obj::_point;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(301)
		Float tmp18 = tmp17->y;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(301)
		Float tmp19 = (tmp16 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(301)
		Float deltaY = tmp19;		HX_STACK_VAR(deltaY,"deltaY");
		HX_STACK_LINE(303)
		int tmp20 = this->_mode;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(303)
		int tmp21 = (int(tmp20) & int((int)65536));		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(303)
		bool tmp22 = (tmp21 > (int)0);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(303)
		bool horizontalOnly = tmp22;		HX_STACK_VAR(horizontalOnly,"horizontalOnly");
		HX_STACK_LINE(304)
		int tmp23 = this->_mode;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(304)
		int tmp24 = (int(tmp23) & int((int)1048576));		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(304)
		bool tmp25 = (tmp24 > (int)0);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(304)
		bool verticalOnly = tmp25;		HX_STACK_VAR(verticalOnly,"verticalOnly");
		HX_STACK_LINE(306)
		bool tmp26 = horizontalOnly;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(306)
		if ((tmp26)){
			HX_STACK_LINE(308)
			bool tmp27 = (deltaX > (int)0);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(308)
			Float tmp28;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(308)
			if ((tmp27)){
				HX_STACK_LINE(308)
				tmp28 = deltaX;
			}
			else{
				HX_STACK_LINE(308)
				Float tmp29 = deltaX;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(308)
				tmp28 = -(tmp29);
			}
			HX_STACK_LINE(308)
			Float tmp29 = this->speed;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(308)
			Float tmp30 = elapsed;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(308)
			Float tmp31 = (tmp29 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(308)
			bool tmp32 = (tmp28 < tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(308)
			if ((tmp32)){
				HX_STACK_LINE(310)
				::flixel::math::FlxPoint tmp33 = this->advancePath(null());		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(310)
				node = tmp33;
			}
		}
		else{
			HX_STACK_LINE(313)
			bool tmp27 = verticalOnly;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(313)
			if ((tmp27)){
				HX_STACK_LINE(315)
				bool tmp28 = (deltaY > (int)0);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(315)
				Float tmp29;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(315)
				if ((tmp28)){
					HX_STACK_LINE(315)
					tmp29 = deltaY;
				}
				else{
					HX_STACK_LINE(315)
					Float tmp30 = deltaY;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(315)
					tmp29 = -(tmp30);
				}
				HX_STACK_LINE(315)
				Float tmp30 = this->speed;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(315)
				Float tmp31 = elapsed;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(315)
				Float tmp32 = (tmp30 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(315)
				bool tmp33 = (tmp29 < tmp32);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(315)
				if ((tmp33)){
					HX_STACK_LINE(317)
					::flixel::math::FlxPoint tmp34 = this->advancePath(null());		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(317)
					node = tmp34;
				}
			}
			else{
				HX_STACK_LINE(322)
				Float tmp28 = (deltaX * deltaX);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(322)
				Float tmp29 = (deltaY * deltaY);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(322)
				Float tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(322)
				Float tmp31 = ::Math_obj::sqrt(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(322)
				Float tmp32 = this->speed;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(322)
				Float tmp33 = elapsed;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(322)
				Float tmp34 = (tmp32 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(322)
				bool tmp35 = (tmp31 < tmp34);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(322)
				if ((tmp35)){
					HX_STACK_LINE(324)
					::flixel::math::FlxPoint tmp36 = this->advancePath(null());		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(324)
					node = tmp36;
				}
			}
		}
		HX_STACK_LINE(329)
		::flixel::FlxObject tmp27 = this->object;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(329)
		bool tmp28 = (tmp27 != null());		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(329)
		bool tmp29;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(329)
		if ((tmp28)){
			HX_STACK_LINE(329)
			Float tmp30 = this->speed;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(329)
			Float tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(329)
			tmp29 = (tmp31 != (int)0);
		}
		else{
			HX_STACK_LINE(329)
			tmp29 = false;
		}
		HX_STACK_LINE(329)
		if ((tmp29)){
			HX_STACK_LINE(332)
			::flixel::math::FlxPoint tmp30 = ::flixel::util::FlxPath_obj::_point;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(332)
			::flixel::FlxObject tmp31 = this->object;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(332)
			Float tmp32 = tmp31->x;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(332)
			tmp30->set_x(tmp32);
			HX_STACK_LINE(333)
			::flixel::math::FlxPoint tmp33 = ::flixel::util::FlxPath_obj::_point;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(333)
			::flixel::FlxObject tmp34 = this->object;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(333)
			Float tmp35 = tmp34->y;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(333)
			tmp33->set_y(tmp35);
			HX_STACK_LINE(335)
			bool tmp36 = this->autoCenter;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(335)
			if ((tmp36)){
				HX_STACK_LINE(337)
				::flixel::math::FlxPoint tmp37 = ::flixel::util::FlxPath_obj::_point;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(337)
				::flixel::math::FlxPoint _this = tmp37;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(337)
				::flixel::FlxObject tmp38 = this->object;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(337)
				Float tmp39 = tmp38->get_width();		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(337)
				Float tmp40 = (tmp39 * ((Float)0.5));		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(337)
				Float X = tmp40;		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(337)
				::flixel::FlxObject tmp41 = this->object;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(337)
				Float tmp42 = tmp41->get_height();		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(337)
				Float tmp43 = (tmp42 * ((Float)0.5));		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(337)
				Float Y = tmp43;		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(337)
				{
					HX_STACK_LINE(337)
					::flixel::math::FlxPoint _g = _this;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(337)
					Float tmp44 = (_g->x + X);		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(337)
					_g->set_x(tmp44);
				}
				HX_STACK_LINE(337)
				{
					HX_STACK_LINE(337)
					::flixel::math::FlxPoint _g = _this;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(337)
					Float tmp44 = (_g->y + Y);		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(337)
					_g->set_y(tmp44);
				}
				HX_STACK_LINE(337)
				_this;
			}
			HX_STACK_LINE(340)
			bool tmp37;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(340)
			{
				HX_STACK_LINE(340)
				::flixel::math::FlxPoint tmp38 = ::flixel::util::FlxPath_obj::_point;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(340)
				::flixel::math::FlxPoint _this = tmp38;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(340)
				bool tmp39;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(340)
				{
					HX_STACK_LINE(340)
					Float aDiff = ((Float)0.0000001);		HX_STACK_VAR(aDiff,"aDiff");
					HX_STACK_LINE(340)
					Float tmp40 = (_this->x - node->x);		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(340)
					Float tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(340)
					Float tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(340)
					Float tmp43 = ::Math_obj::abs(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(340)
					Float tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(340)
					Float tmp45 = aDiff;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(340)
					tmp39 = (tmp44 <= tmp45);
				}
				HX_STACK_LINE(340)
				bool tmp40;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(340)
				if ((tmp39)){
					HX_STACK_LINE(340)
					Float aDiff = ((Float)0.0000001);		HX_STACK_VAR(aDiff,"aDiff");
					HX_STACK_LINE(340)
					Float tmp41 = (_this->y - node->y);		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(340)
					Float tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(340)
					Float tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(340)
					Float tmp44 = ::Math_obj::abs(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(340)
					Float tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(340)
					Float tmp46 = aDiff;		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(340)
					tmp40 = (tmp45 <= tmp46);
				}
				else{
					HX_STACK_LINE(340)
					tmp40 = false;
				}
				HX_STACK_LINE(340)
				bool result = tmp40;		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(340)
				{
					HX_STACK_LINE(340)
					bool tmp41 = node->_weak;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(340)
					if ((tmp41)){
						HX_STACK_LINE(340)
						node->put();
					}
				}
				HX_STACK_LINE(340)
				tmp37 = result;
			}
			HX_STACK_LINE(340)
			bool tmp38 = !(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(340)
			if ((tmp38)){
				HX_STACK_LINE(342)
				::flixel::math::FlxPoint tmp39 = node;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(342)
				bool tmp40 = horizontalOnly;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(342)
				bool tmp41 = verticalOnly;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(342)
				this->calculateVelocity(tmp39,tmp40,tmp41);
			}
			else{
				HX_STACK_LINE(346)
				::flixel::FlxObject tmp39 = this->object;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(346)
				tmp39->velocity->set(null(),null());
			}
			HX_STACK_LINE(350)
			bool tmp39 = this->_autoRotate;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(350)
			if ((tmp39)){
				HX_STACK_LINE(352)
				::flixel::FlxObject tmp40 = this->object;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(352)
				tmp40->angularVelocity = (int)0;
				HX_STACK_LINE(353)
				::flixel::FlxObject tmp41 = this->object;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(353)
				tmp41->angularAcceleration = (int)0;
				HX_STACK_LINE(354)
				::flixel::FlxObject tmp42 = this->object;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(354)
				Float tmp43 = this->angle;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(354)
				tmp42->set_angle(tmp43);
			}
			HX_STACK_LINE(357)
			bool tmp40 = this->finished;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(357)
			if ((tmp40)){
				HX_STACK_LINE(359)
				this->cancel();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPath_obj,update,(void))

Void FlxPath_obj::calculateVelocity( ::flixel::math::FlxPoint node,bool horizontalOnly,bool verticalOnly){
{
		HX_STACK_FRAME("flixel.util.FlxPath","calculateVelocity",0x682aa4f2,"flixel.util.FlxPath.calculateVelocity","flixel/util/FlxPath.hx",365,0x22aae741)
		HX_STACK_THIS(this)
		HX_STACK_ARG(node,"node")
		HX_STACK_ARG(horizontalOnly,"horizontalOnly")
		HX_STACK_ARG(verticalOnly,"verticalOnly")
		HX_STACK_LINE(366)
		bool tmp = horizontalOnly;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(366)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(366)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(366)
		if ((tmp1)){
			HX_STACK_LINE(366)
			::flixel::math::FlxPoint tmp3 = ::flixel::util::FlxPath_obj::_point;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(366)
			::flixel::math::FlxPoint tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(366)
			Float tmp5 = tmp4->y;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(366)
			Float tmp6 = node->y;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(366)
			tmp2 = (tmp5 == tmp6);
		}
		else{
			HX_STACK_LINE(366)
			tmp2 = true;
		}
		HX_STACK_LINE(366)
		if ((tmp2)){
			HX_STACK_LINE(368)
			::flixel::FlxObject tmp3 = this->object;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(368)
			::flixel::math::FlxPoint tmp4 = ::flixel::util::FlxPath_obj::_point;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(368)
			Float tmp5 = tmp4->x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(368)
			Float tmp6 = node->x;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(368)
			bool tmp7 = (tmp5 < tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(368)
			Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(368)
			if ((tmp7)){
				HX_STACK_LINE(368)
				tmp8 = this->speed;
			}
			else{
				HX_STACK_LINE(368)
				Float tmp9 = this->speed;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(368)
				tmp8 = -(tmp9);
			}
			HX_STACK_LINE(368)
			tmp3->velocity->set_x(tmp8);
			HX_STACK_LINE(369)
			::flixel::FlxObject tmp9 = this->object;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(369)
			Float tmp10 = tmp9->velocity->x;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(369)
			bool tmp11 = (tmp10 < (int)0);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(369)
			Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(369)
			if ((tmp11)){
				HX_STACK_LINE(369)
				tmp12 = (int)-90;
			}
			else{
				HX_STACK_LINE(369)
				tmp12 = (int)90;
			}
			HX_STACK_LINE(369)
			this->angle = tmp12;
			HX_STACK_LINE(371)
			bool tmp13 = horizontalOnly;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(371)
			bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(371)
			if ((tmp14)){
				HX_STACK_LINE(373)
				::flixel::FlxObject tmp15 = this->object;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(373)
				tmp15->velocity->set_y((int)0);
			}
		}
		else{
			HX_STACK_LINE(376)
			bool tmp3 = verticalOnly;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(376)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(376)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(376)
			if ((tmp4)){
				HX_STACK_LINE(376)
				::flixel::math::FlxPoint tmp6 = ::flixel::util::FlxPath_obj::_point;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(376)
				::flixel::math::FlxPoint tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(376)
				Float tmp8 = tmp7->x;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(376)
				Float tmp9 = node->x;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(376)
				tmp5 = (tmp8 == tmp9);
			}
			else{
				HX_STACK_LINE(376)
				tmp5 = true;
			}
			HX_STACK_LINE(376)
			if ((tmp5)){
				HX_STACK_LINE(378)
				::flixel::FlxObject tmp6 = this->object;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(378)
				::flixel::math::FlxPoint tmp7 = ::flixel::util::FlxPath_obj::_point;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(378)
				Float tmp8 = tmp7->y;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(378)
				Float tmp9 = node->y;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(378)
				bool tmp10 = (tmp8 < tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(378)
				Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(378)
				if ((tmp10)){
					HX_STACK_LINE(378)
					tmp11 = this->speed;
				}
				else{
					HX_STACK_LINE(378)
					Float tmp12 = this->speed;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(378)
					tmp11 = -(tmp12);
				}
				HX_STACK_LINE(378)
				tmp6->velocity->set_y(tmp11);
				HX_STACK_LINE(379)
				::flixel::FlxObject tmp12 = this->object;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(379)
				Float tmp13 = tmp12->velocity->y;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(379)
				bool tmp14 = (tmp13 < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(379)
				Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(379)
				if ((tmp14)){
					HX_STACK_LINE(379)
					tmp15 = (int)0;
				}
				else{
					HX_STACK_LINE(379)
					tmp15 = (int)180;
				}
				HX_STACK_LINE(379)
				this->angle = tmp15;
				HX_STACK_LINE(381)
				bool tmp16 = verticalOnly;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(381)
				bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(381)
				if ((tmp17)){
					HX_STACK_LINE(383)
					::flixel::FlxObject tmp18 = this->object;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(383)
					tmp18->velocity->set_x((int)0);
				}
			}
			else{
				HX_STACK_LINE(388)
				::flixel::FlxObject tmp6 = this->object;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(388)
				::flixel::math::FlxPoint tmp7 = ::flixel::util::FlxPath_obj::_point;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(388)
				Float tmp8 = tmp7->x;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(388)
				Float tmp9 = node->x;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(388)
				bool tmp10 = (tmp8 < tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(388)
				Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(388)
				if ((tmp10)){
					HX_STACK_LINE(388)
					tmp11 = this->speed;
				}
				else{
					HX_STACK_LINE(388)
					Float tmp12 = this->speed;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(388)
					tmp11 = -(tmp12);
				}
				HX_STACK_LINE(388)
				tmp6->velocity->set_x(tmp11);
				HX_STACK_LINE(389)
				::flixel::FlxObject tmp12 = this->object;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(389)
				::flixel::math::FlxPoint tmp13 = ::flixel::util::FlxPath_obj::_point;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(389)
				Float tmp14 = tmp13->y;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(389)
				Float tmp15 = node->y;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(389)
				bool tmp16 = (tmp14 < tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(389)
				Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(389)
				if ((tmp16)){
					HX_STACK_LINE(389)
					tmp17 = this->speed;
				}
				else{
					HX_STACK_LINE(389)
					Float tmp18 = this->speed;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(389)
					tmp17 = -(tmp18);
				}
				HX_STACK_LINE(389)
				tmp12->velocity->set_y(tmp17);
				HX_STACK_LINE(391)
				::flixel::math::FlxPoint tmp18 = ::flixel::util::FlxPath_obj::_point;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(391)
				::flixel::math::FlxPoint tmp19 = node;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(391)
				Float tmp20 = tmp18->angleBetween(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(391)
				this->angle = tmp20;
				HX_STACK_LINE(393)
				::flixel::FlxObject tmp21 = this->object;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(393)
				Float tmp22 = this->speed;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(393)
				Float tmp23 = -(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(393)
				tmp21->velocity->set((int)0,tmp23);
				HX_STACK_LINE(394)
				::flixel::FlxObject tmp24 = this->object;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(394)
				::flixel::math::FlxPoint tmp25;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(394)
				{
					HX_STACK_LINE(394)
					::flixel::math::FlxPoint tmp26;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(394)
					{
						HX_STACK_LINE(394)
						::flixel::util::FlxPool_flixel_math_FlxPoint tmp27 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(394)
						::flixel::math::FlxPoint tmp28 = tmp27->get();		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(394)
						::flixel::math::FlxPoint tmp29 = tmp28->set((int)0,(int)0);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(394)
						::flixel::math::FlxPoint point = tmp29;		HX_STACK_VAR(point,"point");
						HX_STACK_LINE(394)
						point->_inPool = false;
						HX_STACK_LINE(394)
						tmp26 = point;
					}
					HX_STACK_LINE(394)
					::flixel::math::FlxPoint point = tmp26;		HX_STACK_VAR(point,"point");
					HX_STACK_LINE(394)
					point->_weak = true;
					HX_STACK_LINE(394)
					tmp25 = point;
				}
				HX_STACK_LINE(394)
				Float tmp26 = this->angle;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(394)
				tmp24->velocity->rotate(tmp25,tmp26);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxPath_obj,calculateVelocity,(void))

::flixel::math::FlxPoint FlxPath_obj::advancePath( hx::Null< bool >  __o_Snap){
bool Snap = __o_Snap.Default(true);
	HX_STACK_FRAME("flixel.util.FlxPath","advancePath",0xf96b8956,"flixel.util.FlxPath.advancePath","flixel/util/FlxPath.hx",404,0x22aae741)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Snap,"Snap")
{
		HX_STACK_LINE(405)
		bool tmp = Snap;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(405)
		if ((tmp)){
			HX_STACK_LINE(407)
			int tmp1 = this->nodeIndex;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(407)
			::flixel::math::FlxPoint tmp2 = this->_nodes->__get(tmp1).StaticCast< ::flixel::math::FlxPoint >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(407)
			::flixel::math::FlxPoint oldNode = tmp2;		HX_STACK_VAR(oldNode,"oldNode");
			HX_STACK_LINE(408)
			bool tmp3 = (oldNode != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(408)
			if ((tmp3)){
				HX_STACK_LINE(410)
				int tmp4 = this->_mode;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(410)
				int tmp5 = (int(tmp4) & int((int)1048576));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(410)
				bool tmp6 = (tmp5 == (int)0);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(410)
				if ((tmp6)){
					HX_STACK_LINE(412)
					::flixel::FlxObject tmp7 = this->object;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(412)
					Float tmp8 = oldNode->x;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(412)
					tmp7->set_x(tmp8);
					HX_STACK_LINE(413)
					bool tmp9 = this->autoCenter;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(413)
					if ((tmp9)){
						HX_STACK_LINE(414)
						::flixel::FlxObject tmp10 = this->object;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(414)
						::flixel::FlxObject _g = tmp10;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(414)
						Float tmp11 = _g->x;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(414)
						::flixel::FlxObject tmp12 = this->object;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(414)
						Float tmp13 = tmp12->get_width();		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(414)
						Float tmp14 = (tmp13 * ((Float)0.5));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(414)
						Float tmp15 = (tmp11 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(414)
						_g->set_x(tmp15);
					}
				}
				HX_STACK_LINE(416)
				int tmp7 = this->_mode;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(416)
				int tmp8 = (int(tmp7) & int((int)65536));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(416)
				bool tmp9 = (tmp8 == (int)0);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(416)
				if ((tmp9)){
					HX_STACK_LINE(418)
					::flixel::FlxObject tmp10 = this->object;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(418)
					Float tmp11 = oldNode->y;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(418)
					tmp10->set_y(tmp11);
					HX_STACK_LINE(419)
					bool tmp12 = this->autoCenter;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(419)
					if ((tmp12)){
						HX_STACK_LINE(420)
						::flixel::FlxObject tmp13 = this->object;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(420)
						::flixel::FlxObject _g = tmp13;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(420)
						Float tmp14 = _g->y;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(420)
						::flixel::FlxObject tmp15 = this->object;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(420)
						Float tmp16 = tmp15->get_height();		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(420)
						Float tmp17 = (tmp16 * ((Float)0.5));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(420)
						Float tmp18 = (tmp14 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(420)
						_g->set_y(tmp18);
					}
				}
			}
		}
		HX_STACK_LINE(425)
		bool callComplete = false;		HX_STACK_VAR(callComplete,"callComplete");
		HX_STACK_LINE(426)
		int tmp1 = this->_inc;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(426)
		hx::AddEq(this->nodeIndex,tmp1);
		HX_STACK_LINE(428)
		int tmp2 = this->_mode;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(428)
		int tmp3 = (int(tmp2) & int((int)1));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(428)
		bool tmp4 = (tmp3 > (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(428)
		if ((tmp4)){
			HX_STACK_LINE(430)
			int tmp5 = this->nodeIndex;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(430)
			bool tmp6 = (tmp5 < (int)0);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(430)
			if ((tmp6)){
				HX_STACK_LINE(432)
				this->nodeIndex = (int)0;
				HX_STACK_LINE(433)
				callComplete = true;
				HX_STACK_LINE(434)
				this->onEnd();
			}
		}
		else{
			HX_STACK_LINE(437)
			int tmp5 = this->_mode;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(437)
			int tmp6 = (int(tmp5) & int((int)16));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(437)
			bool tmp7 = (tmp6 > (int)0);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(437)
			if ((tmp7)){
				HX_STACK_LINE(439)
				int tmp8 = this->nodeIndex;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(439)
				int tmp9 = this->_nodes->length;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(439)
				bool tmp10 = (tmp8 >= tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(439)
				if ((tmp10)){
					HX_STACK_LINE(441)
					callComplete = true;
					HX_STACK_LINE(442)
					this->nodeIndex = (int)0;
				}
			}
			else{
				HX_STACK_LINE(445)
				int tmp8 = this->_mode;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(445)
				int tmp9 = (int(tmp8) & int((int)256));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(445)
				bool tmp10 = (tmp9 > (int)0);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(445)
				if ((tmp10)){
					HX_STACK_LINE(447)
					int tmp11 = this->nodeIndex;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(447)
					bool tmp12 = (tmp11 < (int)0);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(447)
					if ((tmp12)){
						HX_STACK_LINE(449)
						int tmp13 = this->_nodes->length;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(449)
						int tmp14 = (tmp13 - (int)1);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(449)
						this->nodeIndex = tmp14;
						HX_STACK_LINE(450)
						callComplete = true;
						HX_STACK_LINE(451)
						int tmp15 = this->nodeIndex;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(451)
						bool tmp16 = (tmp15 < (int)0);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(451)
						if ((tmp16)){
							HX_STACK_LINE(453)
							this->nodeIndex = (int)0;
						}
					}
				}
				else{
					HX_STACK_LINE(457)
					int tmp11 = this->_mode;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(457)
					int tmp12 = (int(tmp11) & int((int)4096));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(457)
					bool tmp13 = (tmp12 > (int)0);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(457)
					if ((tmp13)){
						HX_STACK_LINE(459)
						int tmp14 = this->_inc;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(459)
						bool tmp15 = (tmp14 > (int)0);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(459)
						if ((tmp15)){
							HX_STACK_LINE(461)
							int tmp16 = this->nodeIndex;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(461)
							int tmp17 = this->_nodes->length;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(461)
							bool tmp18 = (tmp16 >= tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(461)
							if ((tmp18)){
								HX_STACK_LINE(463)
								int tmp19 = this->_nodes->length;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(463)
								int tmp20 = (tmp19 - (int)2);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(463)
								this->nodeIndex = tmp20;
								HX_STACK_LINE(464)
								callComplete = true;
								HX_STACK_LINE(465)
								int tmp21 = this->nodeIndex;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(465)
								bool tmp22 = (tmp21 < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(465)
								if ((tmp22)){
									HX_STACK_LINE(467)
									this->nodeIndex = (int)0;
								}
								HX_STACK_LINE(469)
								int tmp23 = this->_inc;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(469)
								int tmp24 = -(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(469)
								this->_inc = tmp24;
							}
						}
						else{
							HX_STACK_LINE(472)
							int tmp16 = this->nodeIndex;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(472)
							bool tmp17 = (tmp16 < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(472)
							if ((tmp17)){
								HX_STACK_LINE(474)
								this->nodeIndex = (int)1;
								HX_STACK_LINE(475)
								callComplete = true;
								HX_STACK_LINE(476)
								int tmp18 = this->nodeIndex;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(476)
								int tmp19 = this->_nodes->length;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(476)
								bool tmp20 = (tmp18 >= tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(476)
								if ((tmp20)){
									HX_STACK_LINE(478)
									int tmp21 = this->_nodes->length;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(478)
									int tmp22 = (tmp21 - (int)1);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(478)
									this->nodeIndex = tmp22;
								}
								HX_STACK_LINE(480)
								int tmp21 = this->nodeIndex;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(480)
								bool tmp22 = (tmp21 < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(480)
								if ((tmp22)){
									HX_STACK_LINE(482)
									this->nodeIndex = (int)0;
								}
								HX_STACK_LINE(484)
								int tmp23 = this->_inc;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(484)
								int tmp24 = -(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(484)
								this->_inc = tmp24;
							}
						}
					}
					else{
						HX_STACK_LINE(489)
						int tmp14 = this->nodeIndex;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(489)
						int tmp15 = this->_nodes->length;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(489)
						bool tmp16 = (tmp14 >= tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(489)
						if ((tmp16)){
							HX_STACK_LINE(491)
							int tmp17 = this->_nodes->length;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(491)
							int tmp18 = (tmp17 - (int)1);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(491)
							this->nodeIndex = tmp18;
							HX_STACK_LINE(492)
							callComplete = true;
							HX_STACK_LINE(493)
							this->onEnd();
						}
					}
				}
			}
		}
		HX_STACK_LINE(497)
		bool tmp5 = callComplete;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(497)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(497)
		if ((tmp5)){
			HX_STACK_LINE(497)
			Dynamic tmp7 = this->onComplete_dyn();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(497)
			Dynamic tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(497)
			tmp6 = (tmp8 != null());
		}
		else{
			HX_STACK_LINE(497)
			tmp6 = false;
		}
		HX_STACK_LINE(497)
		if ((tmp6)){
			HX_STACK_LINE(499)
			this->onComplete(hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(502)
		int tmp7 = this->nodeIndex;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(502)
		::flixel::math::FlxPoint tmp8 = this->_nodes->__get(tmp7).StaticCast< ::flixel::math::FlxPoint >();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(502)
		return tmp8;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPath_obj,advancePath,return )

::flixel::util::FlxPath FlxPath_obj::cancel( ){
	HX_STACK_FRAME("flixel.util.FlxPath","cancel",0xcc56a1cb,"flixel.util.FlxPath.cancel","flixel/util/FlxPath.hx",511,0x22aae741)
	HX_STACK_THIS(this)
	HX_STACK_LINE(512)
	this->onEnd();
	HX_STACK_LINE(514)
	::flixel::FlxObject tmp = this->object;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(514)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(514)
	if ((tmp1)){
		HX_STACK_LINE(516)
		::flixel::FlxObject tmp2 = this->object;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(516)
		tmp2->velocity->set((int)0,(int)0);
	}
	HX_STACK_LINE(518)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxPath_obj,cancel,return )

Void FlxPath_obj::onEnd( ){
{
		HX_STACK_FRAME("flixel.util.FlxPath","onEnd",0x788298cb,"flixel.util.FlxPath.onEnd","flixel/util/FlxPath.hx",525,0x22aae741)
		HX_STACK_THIS(this)
		HX_STACK_LINE(526)
		this->finished = true;
		HX_STACK_LINE(527)
		this->active = false;
		HX_STACK_LINE(528)
		Dynamic tmp = this->_wasObjectImmovable;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(528)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(528)
		if ((tmp1)){
			HX_STACK_LINE(529)
			::flixel::FlxObject tmp2 = this->object;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(529)
			Dynamic tmp3 = this->_wasObjectImmovable;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(529)
			tmp2->set_immovable(tmp3);
		}
		HX_STACK_LINE(530)
		this->_wasObjectImmovable = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxPath_obj,onEnd,(void))

Void FlxPath_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.util.FlxPath","destroy",0xaec13f89,"flixel.util.FlxPath.destroy","flixel/util/FlxPath.hx",537,0x22aae741)
		HX_STACK_THIS(this)
		HX_STACK_LINE(538)
		::flixel::util::FlxDestroyUtil_obj::putArray(this->_nodes);
		HX_STACK_LINE(539)
		this->_nodes = null();
		HX_STACK_LINE(540)
		this->object = null();
		HX_STACK_LINE(541)
		this->onComplete = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxPath_obj,destroy,(void))

::flixel::util::FlxPath FlxPath_obj::add( Float X,Float Y){
	HX_STACK_FRAME("flixel.util.FlxPath","add",0x6e26d130,"flixel.util.FlxPath.add","flixel/util/FlxPath.hx",553,0x22aae741)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_LINE(554)
	::flixel::math::FlxPoint tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(554)
	{
		HX_STACK_LINE(554)
		::flixel::util::FlxPool_flixel_math_FlxPoint tmp1 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(554)
		::flixel::math::FlxPoint tmp2 = tmp1->get();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(554)
		Float tmp3 = X;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(554)
		Float tmp4 = Y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(554)
		::flixel::math::FlxPoint tmp5 = tmp2->set(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(554)
		::flixel::math::FlxPoint point = tmp5;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(554)
		point->_inPool = false;
		HX_STACK_LINE(554)
		tmp = point;
	}
	HX_STACK_LINE(554)
	this->_nodes->push(tmp);
	HX_STACK_LINE(555)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC2(FlxPath_obj,add,return )

::flixel::util::FlxPath FlxPath_obj::addAt( Float X,Float Y,int Index){
	HX_STACK_FRAME("flixel.util.FlxPath","addAt",0x6261b643,"flixel.util.FlxPath.addAt","flixel/util/FlxPath.hx",568,0x22aae741)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(Index,"Index")
	HX_STACK_LINE(569)
	bool tmp = (Index < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(569)
	if ((tmp)){
		HX_STACK_LINE(569)
		return hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(570)
	int tmp1 = Index;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(570)
	::flixel::math::FlxPoint tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(570)
	{
		HX_STACK_LINE(570)
		::flixel::util::FlxPool_flixel_math_FlxPoint tmp3 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(570)
		::flixel::math::FlxPoint tmp4 = tmp3->get();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(570)
		Float tmp5 = X;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(570)
		Float tmp6 = Y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(570)
		::flixel::math::FlxPoint tmp7 = tmp4->set(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(570)
		::flixel::math::FlxPoint point = tmp7;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(570)
		point->_inPool = false;
		HX_STACK_LINE(570)
		tmp2 = point;
	}
	HX_STACK_LINE(570)
	this->_nodes->insert(tmp1,tmp2);
	HX_STACK_LINE(571)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC3(FlxPath_obj,addAt,return )

::flixel::util::FlxPath FlxPath_obj::addPoint( ::flixel::math::FlxPoint Node,hx::Null< bool >  __o_AsReference){
bool AsReference = __o_AsReference.Default(false);
	HX_STACK_FRAME("flixel.util.FlxPath","addPoint",0xa9620500,"flixel.util.FlxPath.addPoint","flixel/util/FlxPath.hx",585,0x22aae741)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Node,"Node")
	HX_STACK_ARG(AsReference,"AsReference")
{
		HX_STACK_LINE(586)
		bool tmp = AsReference;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(586)
		if ((tmp)){
			HX_STACK_LINE(588)
			::flixel::math::FlxPoint tmp1 = Node;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(588)
			this->_nodes->push(tmp1);
		}
		else{
			HX_STACK_LINE(592)
			::flixel::math::FlxPoint tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(592)
			{
				HX_STACK_LINE(592)
				::flixel::util::FlxPool_flixel_math_FlxPoint tmp2 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(592)
				::flixel::math::FlxPoint tmp3 = tmp2->get();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(592)
				Float tmp4 = Node->x;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(592)
				Float tmp5 = Node->y;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(592)
				::flixel::math::FlxPoint tmp6 = tmp3->set(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(592)
				::flixel::math::FlxPoint point = tmp6;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(592)
				point->_inPool = false;
				HX_STACK_LINE(592)
				tmp1 = point;
			}
			HX_STACK_LINE(592)
			this->_nodes->push(tmp1);
		}
		HX_STACK_LINE(594)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxPath_obj,addPoint,return )

::flixel::util::FlxPath FlxPath_obj::addPointAt( ::flixel::math::FlxPoint Node,int Index,hx::Null< bool >  __o_AsReference){
bool AsReference = __o_AsReference.Default(false);
	HX_STACK_FRAME("flixel.util.FlxPath","addPointAt",0x49ad7e13,"flixel.util.FlxPath.addPointAt","flixel/util/FlxPath.hx",609,0x22aae741)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Node,"Node")
	HX_STACK_ARG(Index,"Index")
	HX_STACK_ARG(AsReference,"AsReference")
{
		HX_STACK_LINE(610)
		bool tmp = (Index < (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(610)
		if ((tmp)){
			HX_STACK_LINE(610)
			return hx::ObjectPtr<OBJ_>(this);
		}
		HX_STACK_LINE(611)
		bool tmp1 = AsReference;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(611)
		if ((tmp1)){
			HX_STACK_LINE(613)
			int tmp2 = Index;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(613)
			::flixel::math::FlxPoint tmp3 = Node;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(613)
			this->_nodes->insert(tmp2,tmp3);
		}
		else{
			HX_STACK_LINE(617)
			int tmp2 = Index;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(617)
			::flixel::math::FlxPoint tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(617)
			{
				HX_STACK_LINE(617)
				::flixel::util::FlxPool_flixel_math_FlxPoint tmp4 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(617)
				::flixel::math::FlxPoint tmp5 = tmp4->get();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(617)
				Float tmp6 = Node->x;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(617)
				Float tmp7 = Node->y;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(617)
				::flixel::math::FlxPoint tmp8 = tmp5->set(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(617)
				::flixel::math::FlxPoint point = tmp8;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(617)
				point->_inPool = false;
				HX_STACK_LINE(617)
				tmp3 = point;
			}
			HX_STACK_LINE(617)
			this->_nodes->insert(tmp2,tmp3);
		}
		HX_STACK_LINE(619)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC3(FlxPath_obj,addPointAt,return )

::flixel::math::FlxPoint FlxPath_obj::remove( ::flixel::math::FlxPoint Node){
	HX_STACK_FRAME("flixel.util.FlxPath","remove",0x18ab5095,"flixel.util.FlxPath.remove","flixel/util/FlxPath.hx",630,0x22aae741)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Node,"Node")
	HX_STACK_LINE(631)
	::flixel::math::FlxPoint tmp = Node;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(631)
	int tmp1 = this->_nodes->indexOf(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(631)
	int index = tmp1;		HX_STACK_VAR(index,"index");
	HX_STACK_LINE(632)
	bool tmp2 = (index >= (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(632)
	if ((tmp2)){
		HX_STACK_LINE(634)
		int tmp3 = index;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(634)
		::flixel::math::FlxPoint tmp4 = this->_nodes->splice(tmp3,(int)1)->__get((int)0).StaticCast< ::flixel::math::FlxPoint >();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(634)
		return tmp4;
	}
	HX_STACK_LINE(636)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPath_obj,remove,return )

::flixel::math::FlxPoint FlxPath_obj::removeAt( int Index){
	HX_STACK_FRAME("flixel.util.FlxPath","removeAt",0x169098e8,"flixel.util.FlxPath.removeAt","flixel/util/FlxPath.hx",646,0x22aae741)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Index,"Index")
	HX_STACK_LINE(647)
	int tmp = this->_nodes->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(647)
	bool tmp1 = (tmp <= (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(647)
	if ((tmp1)){
		HX_STACK_LINE(649)
		return null();
	}
	HX_STACK_LINE(651)
	int tmp2 = Index;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(651)
	int tmp3 = this->_nodes->length;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(651)
	int tmp4 = (tmp3 - (int)1);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(651)
	bool tmp5 = (tmp2 >= tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(651)
	if ((tmp5)){
		HX_STACK_LINE(653)
		this->_nodes->pop().StaticCast< ::flixel::math::FlxPoint >();
	}
	HX_STACK_LINE(655)
	int tmp6 = Index;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(655)
	::flixel::math::FlxPoint tmp7 = this->_nodes->splice(tmp6,(int)1)->__get((int)0).StaticCast< ::flixel::math::FlxPoint >();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(655)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPath_obj,removeAt,return )

::flixel::math::FlxPoint FlxPath_obj::head( ){
	HX_STACK_FRAME("flixel.util.FlxPath","head",0xf8717731,"flixel.util.FlxPath.head","flixel/util/FlxPath.hx",664,0x22aae741)
	HX_STACK_THIS(this)
	HX_STACK_LINE(665)
	int tmp = this->_nodes->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(665)
	bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(665)
	if ((tmp1)){
		HX_STACK_LINE(667)
		::flixel::math::FlxPoint tmp2 = this->_nodes->__get((int)0).StaticCast< ::flixel::math::FlxPoint >();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(667)
		return tmp2;
	}
	HX_STACK_LINE(669)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxPath_obj,head,return )

::flixel::math::FlxPoint FlxPath_obj::tail( ){
	HX_STACK_FRAME("flixel.util.FlxPath","tail",0x005d04a1,"flixel.util.FlxPath.tail","flixel/util/FlxPath.hx",678,0x22aae741)
	HX_STACK_THIS(this)
	HX_STACK_LINE(679)
	int tmp = this->_nodes->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(679)
	bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(679)
	if ((tmp1)){
		HX_STACK_LINE(681)
		int tmp2 = this->_nodes->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(681)
		int tmp3 = (tmp2 - (int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(681)
		::flixel::math::FlxPoint tmp4 = this->_nodes->__get(tmp3).StaticCast< ::flixel::math::FlxPoint >();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(681)
		return tmp4;
	}
	HX_STACK_LINE(683)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxPath_obj,tail,return )

Array< ::Dynamic > FlxPath_obj::get_nodes( ){
	HX_STACK_FRAME("flixel.util.FlxPath","get_nodes",0xc07828d7,"flixel.util.FlxPath.get_nodes","flixel/util/FlxPath.hx",789,0x22aae741)
	HX_STACK_THIS(this)
	HX_STACK_LINE(789)
	return this->_nodes;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxPath_obj,get_nodes,return )

Array< ::Dynamic > FlxPath_obj::set_nodes( Array< ::Dynamic > Nodes){
	HX_STACK_FRAME("flixel.util.FlxPath","set_nodes",0xa3c914e3,"flixel.util.FlxPath.set_nodes","flixel/util/FlxPath.hx",793,0x22aae741)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Nodes,"Nodes")
	HX_STACK_LINE(794)
	bool tmp = (Nodes != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(794)
	if ((tmp)){
		HX_STACK_LINE(796)
		this->_nodes = Nodes;
	}
	HX_STACK_LINE(798)
	return this->_nodes;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPath_obj,set_nodes,return )

int FlxPath_obj::FORWARD;

int FlxPath_obj::BACKWARD;

int FlxPath_obj::LOOP_FORWARD;

int FlxPath_obj::LOOP_BACKWARD;

int FlxPath_obj::YOYO;

int FlxPath_obj::HORIZONTAL_ONLY;

int FlxPath_obj::VERTICAL_ONLY;

::flixel::math::FlxPoint FlxPath_obj::_point;


FlxPath_obj::FlxPath_obj()
{
}

void FlxPath_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxPath);
	HX_MARK_MEMBER_NAME(_nodes,"_nodes");
	HX_MARK_MEMBER_NAME(speed,"speed");
	HX_MARK_MEMBER_NAME(angle,"angle");
	HX_MARK_MEMBER_NAME(autoCenter,"autoCenter");
	HX_MARK_MEMBER_NAME(active,"active");
	HX_MARK_MEMBER_NAME(onComplete,"onComplete");
	HX_MARK_MEMBER_NAME(nodeIndex,"nodeIndex");
	HX_MARK_MEMBER_NAME(finished,"finished");
	HX_MARK_MEMBER_NAME(_mode,"_mode");
	HX_MARK_MEMBER_NAME(_inc,"_inc");
	HX_MARK_MEMBER_NAME(_autoRotate,"_autoRotate");
	HX_MARK_MEMBER_NAME(_wasObjectImmovable,"_wasObjectImmovable");
	HX_MARK_MEMBER_NAME(_firstUpdate,"_firstUpdate");
	HX_MARK_MEMBER_NAME(object,"object");
	HX_MARK_END_CLASS();
}

void FlxPath_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_nodes,"_nodes");
	HX_VISIT_MEMBER_NAME(speed,"speed");
	HX_VISIT_MEMBER_NAME(angle,"angle");
	HX_VISIT_MEMBER_NAME(autoCenter,"autoCenter");
	HX_VISIT_MEMBER_NAME(active,"active");
	HX_VISIT_MEMBER_NAME(onComplete,"onComplete");
	HX_VISIT_MEMBER_NAME(nodeIndex,"nodeIndex");
	HX_VISIT_MEMBER_NAME(finished,"finished");
	HX_VISIT_MEMBER_NAME(_mode,"_mode");
	HX_VISIT_MEMBER_NAME(_inc,"_inc");
	HX_VISIT_MEMBER_NAME(_autoRotate,"_autoRotate");
	HX_VISIT_MEMBER_NAME(_wasObjectImmovable,"_wasObjectImmovable");
	HX_VISIT_MEMBER_NAME(_firstUpdate,"_firstUpdate");
	HX_VISIT_MEMBER_NAME(object,"object");
}

Dynamic FlxPath_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_inc") ) { return _inc; }
		if (HX_FIELD_EQ(inName,"head") ) { return head_dyn(); }
		if (HX_FIELD_EQ(inName,"tail") ) { return tail_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"nodes") ) { if (inCallProp == hx::paccAlways) return get_nodes(); }
		if (HX_FIELD_EQ(inName,"speed") ) { return speed; }
		if (HX_FIELD_EQ(inName,"angle") ) { return angle; }
		if (HX_FIELD_EQ(inName,"_mode") ) { return _mode; }
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		if (HX_FIELD_EQ(inName,"start") ) { return start_dyn(); }
		if (HX_FIELD_EQ(inName,"onEnd") ) { return onEnd_dyn(); }
		if (HX_FIELD_EQ(inName,"addAt") ) { return addAt_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_nodes") ) { return _nodes; }
		if (HX_FIELD_EQ(inName,"active") ) { return active; }
		if (HX_FIELD_EQ(inName,"object") ) { return object; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"cancel") ) { return cancel_dyn(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"restart") ) { return restart_dyn(); }
		if (HX_FIELD_EQ(inName,"setNode") ) { return setNode_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"finished") ) { return finished; }
		if (HX_FIELD_EQ(inName,"addPoint") ) { return addPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"removeAt") ) { return removeAt_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"nodeIndex") ) { return nodeIndex; }
		if (HX_FIELD_EQ(inName,"get_nodes") ) { return get_nodes_dyn(); }
		if (HX_FIELD_EQ(inName,"set_nodes") ) { return set_nodes_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"autoCenter") ) { return autoCenter; }
		if (HX_FIELD_EQ(inName,"onComplete") ) { return onComplete; }
		if (HX_FIELD_EQ(inName,"addPointAt") ) { return addPointAt_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_autoRotate") ) { return _autoRotate; }
		if (HX_FIELD_EQ(inName,"advancePath") ) { return advancePath_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_firstUpdate") ) { return _firstUpdate; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"setProperties") ) { return setProperties_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"calculateVelocity") ) { return calculateVelocity_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_wasObjectImmovable") ) { return _wasObjectImmovable; }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxPath_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_point") ) { outValue = _point; return true;  }
	}
	return false;
}

Dynamic FlxPath_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_inc") ) { _inc=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"nodes") ) { if (inCallProp == hx::paccAlways) return set_nodes(inValue); }
		if (HX_FIELD_EQ(inName,"speed") ) { speed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"angle") ) { angle=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_mode") ) { _mode=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_nodes") ) { _nodes=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"active") ) { active=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"object") ) { object=inValue.Cast< ::flixel::FlxObject >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"finished") ) { finished=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"nodeIndex") ) { nodeIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"autoCenter") ) { autoCenter=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onComplete") ) { onComplete=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_autoRotate") ) { _autoRotate=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_firstUpdate") ) { _firstUpdate=inValue.Cast< bool >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_wasObjectImmovable") ) { _wasObjectImmovable=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxPath_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_point") ) { _point=ioValue.Cast< ::flixel::math::FlxPoint >(); return true; }
	}
	return false;
}

void FlxPath_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("nodes","\x31","\xb8","\xbe","\x9f"));
	outFields->push(HX_HCSTRING("_nodes","\x72","\xff","\xa5","\x9b"));
	outFields->push(HX_HCSTRING("speed","\x87","\x97","\x69","\x81"));
	outFields->push(HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22"));
	outFields->push(HX_HCSTRING("autoCenter","\xa4","\x36","\xa6","\x71"));
	outFields->push(HX_HCSTRING("active","\xc6","\x41","\x46","\x16"));
	outFields->push(HX_HCSTRING("nodeIndex","\xb0","\x79","\x4a","\x62"));
	outFields->push(HX_HCSTRING("finished","\x72","\x93","\x0e","\x95"));
	outFields->push(HX_HCSTRING("_mode","\x42","\xef","\x71","\xfb"));
	outFields->push(HX_HCSTRING("_inc","\xdf","\x51","\x1b","\x3f"));
	outFields->push(HX_HCSTRING("_autoRotate","\x49","\x24","\x75","\x09"));
	outFields->push(HX_HCSTRING("_wasObjectImmovable","\x41","\xd9","\x92","\x98"));
	outFields->push(HX_HCSTRING("_firstUpdate","\x5a","\x64","\xb1","\xd1"));
	outFields->push(HX_HCSTRING("object","\xbf","\x7e","\x3f","\x15"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxPath_obj,_nodes),HX_HCSTRING("_nodes","\x72","\xff","\xa5","\x9b")},
	{hx::fsFloat,(int)offsetof(FlxPath_obj,speed),HX_HCSTRING("speed","\x87","\x97","\x69","\x81")},
	{hx::fsFloat,(int)offsetof(FlxPath_obj,angle),HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22")},
	{hx::fsBool,(int)offsetof(FlxPath_obj,autoCenter),HX_HCSTRING("autoCenter","\xa4","\x36","\xa6","\x71")},
	{hx::fsBool,(int)offsetof(FlxPath_obj,active),HX_HCSTRING("active","\xc6","\x41","\x46","\x16")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxPath_obj,onComplete),HX_HCSTRING("onComplete","\xf8","\xd4","\x7e","\x5d")},
	{hx::fsInt,(int)offsetof(FlxPath_obj,nodeIndex),HX_HCSTRING("nodeIndex","\xb0","\x79","\x4a","\x62")},
	{hx::fsBool,(int)offsetof(FlxPath_obj,finished),HX_HCSTRING("finished","\x72","\x93","\x0e","\x95")},
	{hx::fsInt,(int)offsetof(FlxPath_obj,_mode),HX_HCSTRING("_mode","\x42","\xef","\x71","\xfb")},
	{hx::fsInt,(int)offsetof(FlxPath_obj,_inc),HX_HCSTRING("_inc","\xdf","\x51","\x1b","\x3f")},
	{hx::fsBool,(int)offsetof(FlxPath_obj,_autoRotate),HX_HCSTRING("_autoRotate","\x49","\x24","\x75","\x09")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxPath_obj,_wasObjectImmovable),HX_HCSTRING("_wasObjectImmovable","\x41","\xd9","\x92","\x98")},
	{hx::fsBool,(int)offsetof(FlxPath_obj,_firstUpdate),HX_HCSTRING("_firstUpdate","\x5a","\x64","\xb1","\xd1")},
	{hx::fsObject /*::flixel::FlxObject*/ ,(int)offsetof(FlxPath_obj,object),HX_HCSTRING("object","\xbf","\x7e","\x3f","\x15")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &FlxPath_obj::FORWARD,HX_HCSTRING("FORWARD","\xa5","\xb5","\x9e","\x65")},
	{hx::fsInt,(void *) &FlxPath_obj::BACKWARD,HX_HCSTRING("BACKWARD","\xe3","\x6b","\x9e","\x80")},
	{hx::fsInt,(void *) &FlxPath_obj::LOOP_FORWARD,HX_HCSTRING("LOOP_FORWARD","\x8a","\x81","\x3a","\x2b")},
	{hx::fsInt,(void *) &FlxPath_obj::LOOP_BACKWARD,HX_HCSTRING("LOOP_BACKWARD","\x5e","\x08","\x55","\xa3")},
	{hx::fsInt,(void *) &FlxPath_obj::YOYO,HX_HCSTRING("YOYO","\x2c","\x3d","\x10","\x3b")},
	{hx::fsInt,(void *) &FlxPath_obj::HORIZONTAL_ONLY,HX_HCSTRING("HORIZONTAL_ONLY","\xe7","\x3d","\x5f","\x9a")},
	{hx::fsInt,(void *) &FlxPath_obj::VERTICAL_ONLY,HX_HCSTRING("VERTICAL_ONLY","\x15","\x31","\x92","\x7f")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(void *) &FlxPath_obj::_point,HX_HCSTRING("_point","\x91","\xfb","\x76","\xc2")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_nodes","\x72","\xff","\xa5","\x9b"),
	HX_HCSTRING("speed","\x87","\x97","\x69","\x81"),
	HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22"),
	HX_HCSTRING("autoCenter","\xa4","\x36","\xa6","\x71"),
	HX_HCSTRING("active","\xc6","\x41","\x46","\x16"),
	HX_HCSTRING("onComplete","\xf8","\xd4","\x7e","\x5d"),
	HX_HCSTRING("nodeIndex","\xb0","\x79","\x4a","\x62"),
	HX_HCSTRING("finished","\x72","\x93","\x0e","\x95"),
	HX_HCSTRING("_mode","\x42","\xef","\x71","\xfb"),
	HX_HCSTRING("_inc","\xdf","\x51","\x1b","\x3f"),
	HX_HCSTRING("_autoRotate","\x49","\x24","\x75","\x09"),
	HX_HCSTRING("_wasObjectImmovable","\x41","\xd9","\x92","\x98"),
	HX_HCSTRING("_firstUpdate","\x5a","\x64","\xb1","\xd1"),
	HX_HCSTRING("object","\xbf","\x7e","\x3f","\x15"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	HX_HCSTRING("setProperties","\x35","\x3a","\x87","\x02"),
	HX_HCSTRING("start","\x62","\x74","\x0b","\x84"),
	HX_HCSTRING("restart","\xcf","\xc7","\xa5","\x6a"),
	HX_HCSTRING("setNode","\xc4","\x4a","\x8e","\x0e"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("calculateVelocity","\xa3","\x29","\x67","\x06"),
	HX_HCSTRING("advancePath","\x47","\x83","\xf2","\xa8"),
	HX_HCSTRING("cancel","\x7a","\xed","\x33","\xb8"),
	HX_HCSTRING("onEnd","\xfc","\x97","\x64","\x32"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("addAt","\x74","\xb5","\x43","\x1c"),
	HX_HCSTRING("addPoint","\x6f","\xda","\xec","\x3f"),
	HX_HCSTRING("addPointAt","\x42","\xcd","\xab","\xb8"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("removeAt","\x57","\x6e","\x1b","\xad"),
	HX_HCSTRING("head","\x20","\x29","\x0b","\x45"),
	HX_HCSTRING("tail","\x90","\xb6","\xf6","\x4c"),
	HX_HCSTRING("get_nodes","\x88","\x14","\x68","\xe3"),
	HX_HCSTRING("set_nodes","\x94","\x00","\xb9","\xc6"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxPath_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxPath_obj::FORWARD,"FORWARD");
	HX_MARK_MEMBER_NAME(FlxPath_obj::BACKWARD,"BACKWARD");
	HX_MARK_MEMBER_NAME(FlxPath_obj::LOOP_FORWARD,"LOOP_FORWARD");
	HX_MARK_MEMBER_NAME(FlxPath_obj::LOOP_BACKWARD,"LOOP_BACKWARD");
	HX_MARK_MEMBER_NAME(FlxPath_obj::YOYO,"YOYO");
	HX_MARK_MEMBER_NAME(FlxPath_obj::HORIZONTAL_ONLY,"HORIZONTAL_ONLY");
	HX_MARK_MEMBER_NAME(FlxPath_obj::VERTICAL_ONLY,"VERTICAL_ONLY");
	HX_MARK_MEMBER_NAME(FlxPath_obj::_point,"_point");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxPath_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxPath_obj::FORWARD,"FORWARD");
	HX_VISIT_MEMBER_NAME(FlxPath_obj::BACKWARD,"BACKWARD");
	HX_VISIT_MEMBER_NAME(FlxPath_obj::LOOP_FORWARD,"LOOP_FORWARD");
	HX_VISIT_MEMBER_NAME(FlxPath_obj::LOOP_BACKWARD,"LOOP_BACKWARD");
	HX_VISIT_MEMBER_NAME(FlxPath_obj::YOYO,"YOYO");
	HX_VISIT_MEMBER_NAME(FlxPath_obj::HORIZONTAL_ONLY,"HORIZONTAL_ONLY");
	HX_VISIT_MEMBER_NAME(FlxPath_obj::VERTICAL_ONLY,"VERTICAL_ONLY");
	HX_VISIT_MEMBER_NAME(FlxPath_obj::_point,"_point");
};

#endif

hx::Class FlxPath_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("FORWARD","\xa5","\xb5","\x9e","\x65"),
	HX_HCSTRING("BACKWARD","\xe3","\x6b","\x9e","\x80"),
	HX_HCSTRING("LOOP_FORWARD","\x8a","\x81","\x3a","\x2b"),
	HX_HCSTRING("LOOP_BACKWARD","\x5e","\x08","\x55","\xa3"),
	HX_HCSTRING("YOYO","\x2c","\x3d","\x10","\x3b"),
	HX_HCSTRING("HORIZONTAL_ONLY","\xe7","\x3d","\x5f","\x9a"),
	HX_HCSTRING("VERTICAL_ONLY","\x15","\x31","\x92","\x7f"),
	HX_HCSTRING("_point","\x91","\xfb","\x76","\xc2"),
	::String(null()) };

void FlxPath_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.util.FlxPath","\xfd","\xcb","\x52","\xba");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxPath_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxPath_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxPath_obj >;
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

void FlxPath_obj::__boot()
{
	FORWARD= (int)0;
	BACKWARD= (int)1;
	LOOP_FORWARD= (int)16;
	LOOP_BACKWARD= (int)256;
	YOYO= (int)4096;
	HORIZONTAL_ONLY= (int)65536;
	VERTICAL_ONLY= (int)1048576;
struct _Function_0_1{
	inline static ::flixel::math::FlxPoint Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxPath.hx",78,0x22aae741)
		{
			HX_STACK_LINE(78)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(78)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(78)
			::flixel::util::FlxPool_flixel_math_FlxPoint tmp = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(78)
			::flixel::math::FlxPoint tmp1 = tmp->get();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(78)
			Float tmp2 = X;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(78)
			Float tmp3 = Y;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(78)
			::flixel::math::FlxPoint tmp4 = tmp1->set(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(78)
			::flixel::math::FlxPoint point = tmp4;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(78)
			point->_inPool = false;
			HX_STACK_LINE(78)
			return point;
		}
		return null();
	}
};
	_point= _Function_0_1::Block();
}

} // end namespace flixel
} // end namespace util
