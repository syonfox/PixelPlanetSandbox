#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
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
#ifndef INCLUDED_flixel_system_FlxLinkedList
#include <flixel/system/FlxLinkedList.h>
#endif
#ifndef INCLUDED_flixel_system_FlxQuadTree
#include <flixel/system/FlxQuadTree.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
namespace flixel{
namespace _system{

Void FlxQuadTree_obj::__construct(Float X,Float Y,Float Width,Float Height,::flixel::_system::FlxQuadTree Parent)
{
HX_STACK_FRAME("flixel.system.FlxQuadTree","new",0xc8d074fc,"flixel.system.FlxQuadTree.new","flixel/system/FlxQuadTree.hx",199,0xb5742814)
HX_STACK_THIS(this)
HX_STACK_ARG(X,"X")
HX_STACK_ARG(Y,"Y")
HX_STACK_ARG(Width,"Width")
HX_STACK_ARG(Height,"Height")
HX_STACK_ARG(Parent,"Parent")
{
	HX_STACK_LINE(200)
	super::__construct(null(),null(),null(),null());
	HX_STACK_LINE(201)
	{
		HX_STACK_LINE(201)
		this->x = X;
		HX_STACK_LINE(201)
		this->y = Y;
		HX_STACK_LINE(201)
		this->width = Width;
		HX_STACK_LINE(201)
		this->height = Height;
		HX_STACK_LINE(201)
		hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(202)
	Float tmp = X;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(202)
	Float tmp1 = Y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(202)
	Float tmp2 = Width;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(202)
	Float tmp3 = Height;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(202)
	::flixel::_system::FlxQuadTree tmp4 = Parent;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(202)
	this->reset(tmp,tmp1,tmp2,tmp3,tmp4);
}
;
	return null();
}

//FlxQuadTree_obj::~FlxQuadTree_obj() { }

Dynamic FlxQuadTree_obj::__CreateEmpty() { return  new FlxQuadTree_obj; }
hx::ObjectPtr< FlxQuadTree_obj > FlxQuadTree_obj::__new(Float X,Float Y,Float Width,Float Height,::flixel::_system::FlxQuadTree Parent)
{  hx::ObjectPtr< FlxQuadTree_obj > _result_ = new FlxQuadTree_obj();
	_result_->__construct(X,Y,Width,Height,Parent);
	return _result_;}

Dynamic FlxQuadTree_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxQuadTree_obj > _result_ = new FlxQuadTree_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _result_;}

Void FlxQuadTree_obj::reset( Float X,Float Y,Float Width,Float Height,::flixel::_system::FlxQuadTree Parent){
{
		HX_STACK_FRAME("flixel.system.FlxQuadTree","reset",0x432c4d6b,"flixel.system.FlxQuadTree.reset","flixel/system/FlxQuadTree.hx",243,0xb5742814)
		HX_STACK_THIS(this)
		HX_STACK_ARG(X,"X")
		HX_STACK_ARG(Y,"Y")
		HX_STACK_ARG(Width,"Width")
		HX_STACK_ARG(Height,"Height")
		HX_STACK_ARG(Parent,"Parent")
		HX_STACK_LINE(244)
		this->exists = true;
		HX_STACK_LINE(246)
		{
			HX_STACK_LINE(246)
			this->x = X;
			HX_STACK_LINE(246)
			this->y = Y;
			HX_STACK_LINE(246)
			this->width = Width;
			HX_STACK_LINE(246)
			this->height = Height;
			HX_STACK_LINE(246)
			hx::ObjectPtr<OBJ_>(this);
		}
		HX_STACK_LINE(248)
		::flixel::_system::FlxLinkedList tmp = ::flixel::_system::FlxLinkedList_obj::recycle();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(248)
		::flixel::_system::FlxLinkedList tmp1 = this->_tailA = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(248)
		this->_headA = tmp1;
		HX_STACK_LINE(249)
		::flixel::_system::FlxLinkedList tmp2 = ::flixel::_system::FlxLinkedList_obj::recycle();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(249)
		::flixel::_system::FlxLinkedList tmp3 = this->_tailB = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(249)
		this->_headB = tmp3;
		HX_STACK_LINE(252)
		bool tmp4 = (Parent != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(252)
		if ((tmp4)){
			HX_STACK_LINE(254)
			::flixel::_system::FlxLinkedList iterator;		HX_STACK_VAR(iterator,"iterator");
			HX_STACK_LINE(255)
			::flixel::_system::FlxLinkedList ot;		HX_STACK_VAR(ot,"ot");
			HX_STACK_LINE(256)
			::flixel::FlxObject tmp5 = Parent->__Field(HX_HCSTRING("_headA","\x62","\x1a","\xa0","\x20"), hx::paccDynamic )->__Field(HX_HCSTRING("object","\xbf","\x7e","\x3f","\x15"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(256)
			bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(256)
			if ((tmp6)){
				HX_STACK_LINE(258)
				iterator = Parent->__Field(HX_HCSTRING("_headA","\x62","\x1a","\xa0","\x20"), hx::paccDynamic );
				HX_STACK_LINE(259)
				while((true)){
					HX_STACK_LINE(259)
					bool tmp7 = (iterator != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(259)
					bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(259)
					if ((tmp8)){
						HX_STACK_LINE(259)
						break;
					}
					HX_STACK_LINE(261)
					::flixel::_system::FlxLinkedList tmp9 = this->_tailA;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(261)
					::flixel::FlxObject tmp10 = tmp9->__Field(HX_HCSTRING("object","\xbf","\x7e","\x3f","\x15"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(261)
					bool tmp11 = (tmp10 != null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(261)
					if ((tmp11)){
						HX_STACK_LINE(263)
						::flixel::_system::FlxLinkedList tmp12 = this->_tailA;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(263)
						ot = tmp12;
						HX_STACK_LINE(264)
						::flixel::_system::FlxLinkedList tmp13 = ::flixel::_system::FlxLinkedList_obj::recycle();		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(264)
						this->_tailA = tmp13;
						HX_STACK_LINE(265)
						::flixel::_system::FlxLinkedList tmp14 = this->_tailA;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(265)
						ot->__FieldRef(HX_HCSTRING("next","\xf3","\x84","\x02","\x49")) = tmp14;
					}
					HX_STACK_LINE(267)
					::flixel::_system::FlxLinkedList tmp12 = this->_tailA;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(267)
					tmp12->__FieldRef(HX_HCSTRING("object","\xbf","\x7e","\x3f","\x15")) = iterator->__Field(HX_HCSTRING("object","\xbf","\x7e","\x3f","\x15"), hx::paccDynamic );
					HX_STACK_LINE(268)
					iterator = iterator->__Field(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"), hx::paccDynamic );
				}
			}
			HX_STACK_LINE(271)
			::flixel::FlxObject tmp7 = Parent->__Field(HX_HCSTRING("_headB","\x63","\x1a","\xa0","\x20"), hx::paccDynamic )->__Field(HX_HCSTRING("object","\xbf","\x7e","\x3f","\x15"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(271)
			bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(271)
			if ((tmp8)){
				HX_STACK_LINE(273)
				iterator = Parent->__Field(HX_HCSTRING("_headB","\x63","\x1a","\xa0","\x20"), hx::paccDynamic );
				HX_STACK_LINE(274)
				while((true)){
					HX_STACK_LINE(274)
					bool tmp9 = (iterator != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(274)
					bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(274)
					if ((tmp10)){
						HX_STACK_LINE(274)
						break;
					}
					HX_STACK_LINE(276)
					::flixel::_system::FlxLinkedList tmp11 = this->_tailB;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(276)
					::flixel::FlxObject tmp12 = tmp11->__Field(HX_HCSTRING("object","\xbf","\x7e","\x3f","\x15"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(276)
					bool tmp13 = (tmp12 != null());		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(276)
					if ((tmp13)){
						HX_STACK_LINE(278)
						::flixel::_system::FlxLinkedList tmp14 = this->_tailB;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(278)
						ot = tmp14;
						HX_STACK_LINE(279)
						::flixel::_system::FlxLinkedList tmp15 = ::flixel::_system::FlxLinkedList_obj::recycle();		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(279)
						this->_tailB = tmp15;
						HX_STACK_LINE(280)
						::flixel::_system::FlxLinkedList tmp16 = this->_tailB;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(280)
						ot->__FieldRef(HX_HCSTRING("next","\xf3","\x84","\x02","\x49")) = tmp16;
					}
					HX_STACK_LINE(282)
					::flixel::_system::FlxLinkedList tmp14 = this->_tailB;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(282)
					tmp14->__FieldRef(HX_HCSTRING("object","\xbf","\x7e","\x3f","\x15")) = iterator->__Field(HX_HCSTRING("object","\xbf","\x7e","\x3f","\x15"), hx::paccDynamic );
					HX_STACK_LINE(283)
					iterator = iterator->__Field(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"), hx::paccDynamic );
				}
			}
		}
		else{
			HX_STACK_LINE(289)
			Float tmp5 = this->width;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(289)
			Float tmp6 = this->height;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(289)
			Float tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(289)
			int tmp8 = ::flixel::_system::FlxQuadTree_obj::divisions;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(289)
			int tmp9 = ((int)2 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(289)
			Float tmp10 = (Float(tmp7) / Float(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(289)
			int tmp11 = ::Math_obj::floor(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(289)
			::flixel::_system::FlxQuadTree_obj::_min = tmp11;
		}
		HX_STACK_LINE(291)
		Float tmp5 = this->width;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(291)
		int tmp6 = ::flixel::_system::FlxQuadTree_obj::_min;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(291)
		bool tmp7 = (tmp5 > tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(291)
		bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(291)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(291)
		if ((tmp8)){
			HX_STACK_LINE(291)
			Float tmp10 = this->height;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(291)
			Float tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(291)
			int tmp12 = ::flixel::_system::FlxQuadTree_obj::_min;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(291)
			int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(291)
			tmp9 = (tmp11 > tmp13);
		}
		else{
			HX_STACK_LINE(291)
			tmp9 = true;
		}
		HX_STACK_LINE(291)
		this->_canSubdivide = tmp9;
		HX_STACK_LINE(294)
		this->_northWestTree = null();
		HX_STACK_LINE(295)
		this->_northEastTree = null();
		HX_STACK_LINE(296)
		this->_southEastTree = null();
		HX_STACK_LINE(297)
		this->_southWestTree = null();
		HX_STACK_LINE(298)
		Float tmp10 = this->x;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(298)
		this->_leftEdge = tmp10;
		HX_STACK_LINE(299)
		Float tmp11 = this->x;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(299)
		Float tmp12 = this->width;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(299)
		Float tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(299)
		this->_rightEdge = tmp13;
		HX_STACK_LINE(300)
		Float tmp14 = this->width;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(300)
		Float tmp15 = (Float(tmp14) / Float((int)2));		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(300)
		this->_halfWidth = tmp15;
		HX_STACK_LINE(301)
		Float tmp16 = this->_leftEdge;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(301)
		Float tmp17 = this->_halfWidth;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(301)
		Float tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(301)
		this->_midpointX = tmp18;
		HX_STACK_LINE(302)
		Float tmp19 = this->y;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(302)
		this->_topEdge = tmp19;
		HX_STACK_LINE(303)
		Float tmp20 = this->y;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(303)
		Float tmp21 = this->height;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(303)
		Float tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(303)
		this->_bottomEdge = tmp22;
		HX_STACK_LINE(304)
		Float tmp23 = this->height;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(304)
		Float tmp24 = (Float(tmp23) / Float((int)2));		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(304)
		this->_halfHeight = tmp24;
		HX_STACK_LINE(305)
		Float tmp25 = this->_topEdge;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(305)
		Float tmp26 = this->_halfHeight;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(305)
		Float tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(305)
		this->_midpointY = tmp27;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(FlxQuadTree_obj,reset,(void))

Void FlxQuadTree_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.system.FlxQuadTree","destroy",0x64a74f96,"flixel.system.FlxQuadTree.destroy","flixel/system/FlxQuadTree.hx",312,0xb5742814)
		HX_STACK_THIS(this)
		HX_STACK_LINE(313)
		::flixel::_system::FlxLinkedList tmp = this->_headA;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(313)
		::flixel::_system::FlxLinkedList tmp1 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(313)
		this->_headA = tmp1;
		HX_STACK_LINE(314)
		::flixel::_system::FlxLinkedList tmp2 = this->_headB;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(314)
		::flixel::_system::FlxLinkedList tmp3 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(314)
		this->_headB = tmp3;
		HX_STACK_LINE(316)
		::flixel::_system::FlxLinkedList tmp4 = this->_tailA;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(316)
		::flixel::_system::FlxLinkedList tmp5 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(316)
		this->_tailA = tmp5;
		HX_STACK_LINE(317)
		::flixel::_system::FlxLinkedList tmp6 = this->_tailB;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(317)
		::flixel::_system::FlxLinkedList tmp7 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(317)
		this->_tailB = tmp7;
		HX_STACK_LINE(319)
		::flixel::_system::FlxQuadTree tmp8 = this->_northWestTree;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(319)
		::flixel::_system::FlxQuadTree tmp9 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(319)
		this->_northWestTree = tmp9;
		HX_STACK_LINE(320)
		::flixel::_system::FlxQuadTree tmp10 = this->_northEastTree;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(320)
		::flixel::_system::FlxQuadTree tmp11 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(320)
		this->_northEastTree = tmp11;
		HX_STACK_LINE(322)
		::flixel::_system::FlxQuadTree tmp12 = this->_southWestTree;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(322)
		::flixel::_system::FlxQuadTree tmp13 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(322)
		this->_southWestTree = tmp13;
		HX_STACK_LINE(323)
		::flixel::_system::FlxQuadTree tmp14 = this->_southEastTree;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(323)
		::flixel::_system::FlxQuadTree tmp15 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(323)
		this->_southEastTree = tmp15;
		HX_STACK_LINE(325)
		::flixel::_system::FlxQuadTree_obj::_object = null();
		HX_STACK_LINE(326)
		::flixel::_system::FlxQuadTree_obj::_processingCallback = null();
		HX_STACK_LINE(327)
		::flixel::_system::FlxQuadTree_obj::_notifyCallback = null();
		HX_STACK_LINE(329)
		this->exists = false;
		HX_STACK_LINE(332)
		::flixel::_system::FlxQuadTree tmp16 = ::flixel::_system::FlxQuadTree_obj::_cachedTreesHead;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(332)
		this->next = tmp16;
		HX_STACK_LINE(333)
		::flixel::_system::FlxQuadTree_obj::_cachedTreesHead = hx::ObjectPtr<OBJ_>(this);
		HX_STACK_LINE(334)
		(::flixel::_system::FlxQuadTree_obj::_NUM_CACHED_QUAD_TREES)++;
		HX_STACK_LINE(336)
		this->super::destroy();
	}
return null();
}


Void FlxQuadTree_obj::load( ::flixel::FlxBasic ObjectOrGroup1,::flixel::FlxBasic ObjectOrGroup2,Dynamic NotifyCallback,Dynamic ProcessCallback){
{
		HX_STACK_FRAME("flixel.system.FlxQuadTree","load",0xec4afe0a,"flixel.system.FlxQuadTree.load","flixel/system/FlxQuadTree.hx",347,0xb5742814)
		HX_STACK_THIS(this)
		HX_STACK_ARG(ObjectOrGroup1,"ObjectOrGroup1")
		HX_STACK_ARG(ObjectOrGroup2,"ObjectOrGroup2")
		HX_STACK_ARG(NotifyCallback,"NotifyCallback")
		HX_STACK_ARG(ProcessCallback,"ProcessCallback")
		HX_STACK_LINE(348)
		::flixel::FlxBasic tmp = ObjectOrGroup1;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(348)
		this->add(tmp,(int)0);
		HX_STACK_LINE(349)
		bool tmp1 = (ObjectOrGroup2 != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(349)
		if ((tmp1)){
			HX_STACK_LINE(351)
			::flixel::FlxBasic tmp2 = ObjectOrGroup2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(351)
			this->add(tmp2,(int)1);
			HX_STACK_LINE(352)
			::flixel::_system::FlxQuadTree_obj::_useBothLists = true;
		}
		else{
			HX_STACK_LINE(356)
			::flixel::_system::FlxQuadTree_obj::_useBothLists = false;
		}
		HX_STACK_LINE(358)
		::flixel::_system::FlxQuadTree_obj::_notifyCallback = NotifyCallback;
		HX_STACK_LINE(359)
		::flixel::_system::FlxQuadTree_obj::_processingCallback = ProcessCallback;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxQuadTree_obj,load,(void))

Void FlxQuadTree_obj::add( ::flixel::FlxBasic ObjectOrGroup,int list){
{
		HX_STACK_FRAME("flixel.system.FlxQuadTree","add",0xc8c696bd,"flixel.system.FlxQuadTree.add","flixel/system/FlxQuadTree.hx",371,0xb5742814)
		HX_STACK_THIS(this)
		HX_STACK_ARG(ObjectOrGroup,"ObjectOrGroup")
		HX_STACK_ARG(list,"list")
		HX_STACK_LINE(372)
		::flixel::_system::FlxQuadTree_obj::_list = list;
		HX_STACK_LINE(374)
		::flixel::FlxBasic tmp = ObjectOrGroup;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(374)
		::flixel::group::FlxTypedGroup tmp1 = ::flixel::group::FlxTypedGroup_obj::resolveGroup(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(374)
		::flixel::group::FlxTypedGroup group = tmp1;		HX_STACK_VAR(group,"group");
		HX_STACK_LINE(375)
		bool tmp2 = (group != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(375)
		if ((tmp2)){
			HX_STACK_LINE(377)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(378)
			::flixel::FlxBasic basic;		HX_STACK_VAR(basic,"basic");
			HX_STACK_LINE(379)
			Array< ::Dynamic > members = group->members;		HX_STACK_VAR(members,"members");
			HX_STACK_LINE(380)
			int l = group->length;		HX_STACK_VAR(l,"l");
			HX_STACK_LINE(381)
			while((true)){
				HX_STACK_LINE(381)
				bool tmp3 = (i < l);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(381)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(381)
				if ((tmp4)){
					HX_STACK_LINE(381)
					break;
				}
				HX_STACK_LINE(383)
				int tmp5 = (i)++;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(383)
				::flixel::FlxBasic tmp6 = members->__get(tmp5).StaticCast< ::flixel::FlxBasic >();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(383)
				basic = tmp6;
				HX_STACK_LINE(384)
				bool tmp7 = (basic != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(384)
				bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(384)
				if ((tmp7)){
					HX_STACK_LINE(384)
					tmp8 = basic->exists;
				}
				else{
					HX_STACK_LINE(384)
					tmp8 = false;
				}
				HX_STACK_LINE(384)
				if ((tmp8)){
					HX_STACK_LINE(386)
					::flixel::FlxBasic tmp9 = basic;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(386)
					::flixel::group::FlxTypedGroup tmp10 = ::flixel::group::FlxTypedGroup_obj::resolveGroup(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(386)
					group = tmp10;
					HX_STACK_LINE(387)
					bool tmp11 = (group != null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(387)
					if ((tmp11)){
						HX_STACK_LINE(389)
						::flixel::group::FlxTypedGroup tmp12 = group;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(389)
						int tmp13 = list;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(389)
						this->add(tmp12,tmp13);
					}
					else{
						HX_STACK_LINE(393)
						::flixel::_system::FlxQuadTree_obj::_object = ((::flixel::FlxObject)(basic));
						HX_STACK_LINE(394)
						::flixel::FlxObject tmp12 = ::flixel::_system::FlxQuadTree_obj::_object;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(394)
						bool tmp13 = tmp12->exists;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(394)
						bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(394)
						if ((tmp13)){
							HX_STACK_LINE(394)
							::flixel::FlxObject tmp15 = ::flixel::_system::FlxQuadTree_obj::_object;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(394)
							::flixel::FlxObject tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(394)
							int tmp17 = tmp16->allowCollisions;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(394)
							tmp14 = (tmp17 != (int)0);
						}
						else{
							HX_STACK_LINE(394)
							tmp14 = false;
						}
						HX_STACK_LINE(394)
						if ((tmp14)){
							HX_STACK_LINE(396)
							::flixel::FlxObject tmp15 = ::flixel::_system::FlxQuadTree_obj::_object;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(396)
							::flixel::_system::FlxQuadTree_obj::_objectLeftEdge = tmp15->x;
							HX_STACK_LINE(397)
							::flixel::FlxObject tmp16 = ::flixel::_system::FlxQuadTree_obj::_object;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(397)
							::flixel::_system::FlxQuadTree_obj::_objectTopEdge = tmp16->y;
							HX_STACK_LINE(398)
							::flixel::FlxObject tmp17 = ::flixel::_system::FlxQuadTree_obj::_object;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(398)
							Float tmp18 = tmp17->x;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(398)
							::flixel::FlxObject tmp19 = ::flixel::_system::FlxQuadTree_obj::_object;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(398)
							Float tmp20 = tmp19->get_width();		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(398)
							Float tmp21 = (tmp18 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(398)
							::flixel::_system::FlxQuadTree_obj::_objectRightEdge = tmp21;
							HX_STACK_LINE(399)
							::flixel::FlxObject tmp22 = ::flixel::_system::FlxQuadTree_obj::_object;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(399)
							Float tmp23 = tmp22->y;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(399)
							::flixel::FlxObject tmp24 = ::flixel::_system::FlxQuadTree_obj::_object;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(399)
							Float tmp25 = tmp24->get_height();		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(399)
							Float tmp26 = (tmp23 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(399)
							::flixel::_system::FlxQuadTree_obj::_objectBottomEdge = tmp26;
							HX_STACK_LINE(400)
							this->addObject();
						}
					}
				}
			}
		}
		else{
			HX_STACK_LINE(408)
			::flixel::_system::FlxQuadTree_obj::_object = ((::flixel::FlxObject)(ObjectOrGroup));
			HX_STACK_LINE(409)
			::flixel::FlxObject tmp3 = ::flixel::_system::FlxQuadTree_obj::_object;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(409)
			bool tmp4 = tmp3->exists;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(409)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(409)
			if ((tmp4)){
				HX_STACK_LINE(409)
				::flixel::FlxObject tmp6 = ::flixel::_system::FlxQuadTree_obj::_object;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(409)
				::flixel::FlxObject tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(409)
				int tmp8 = tmp7->allowCollisions;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(409)
				tmp5 = (tmp8 != (int)0);
			}
			else{
				HX_STACK_LINE(409)
				tmp5 = false;
			}
			HX_STACK_LINE(409)
			if ((tmp5)){
				HX_STACK_LINE(411)
				::flixel::FlxObject tmp6 = ::flixel::_system::FlxQuadTree_obj::_object;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(411)
				::flixel::_system::FlxQuadTree_obj::_objectLeftEdge = tmp6->x;
				HX_STACK_LINE(412)
				::flixel::FlxObject tmp7 = ::flixel::_system::FlxQuadTree_obj::_object;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(412)
				::flixel::_system::FlxQuadTree_obj::_objectTopEdge = tmp7->y;
				HX_STACK_LINE(413)
				::flixel::FlxObject tmp8 = ::flixel::_system::FlxQuadTree_obj::_object;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(413)
				Float tmp9 = tmp8->x;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(413)
				::flixel::FlxObject tmp10 = ::flixel::_system::FlxQuadTree_obj::_object;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(413)
				Float tmp11 = tmp10->get_width();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(413)
				Float tmp12 = (tmp9 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(413)
				::flixel::_system::FlxQuadTree_obj::_objectRightEdge = tmp12;
				HX_STACK_LINE(414)
				::flixel::FlxObject tmp13 = ::flixel::_system::FlxQuadTree_obj::_object;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(414)
				Float tmp14 = tmp13->y;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(414)
				::flixel::FlxObject tmp15 = ::flixel::_system::FlxQuadTree_obj::_object;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(414)
				Float tmp16 = tmp15->get_height();		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(414)
				Float tmp17 = (tmp14 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(414)
				::flixel::_system::FlxQuadTree_obj::_objectBottomEdge = tmp17;
				HX_STACK_LINE(415)
				this->addObject();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxQuadTree_obj,add,(void))

Void FlxQuadTree_obj::addObject( ){
{
		HX_STACK_FRAME("flixel.system.FlxQuadTree","addObject",0x3207b55c,"flixel.system.FlxQuadTree.addObject","flixel/system/FlxQuadTree.hx",425,0xb5742814)
		HX_STACK_THIS(this)
		HX_STACK_LINE(427)
		bool tmp = this->_canSubdivide;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(427)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(427)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(427)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(427)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(427)
		if ((tmp3)){
			HX_STACK_LINE(427)
			Float tmp5 = this->_leftEdge;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(427)
			Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(427)
			Float tmp7 = ::flixel::_system::FlxQuadTree_obj::_objectLeftEdge;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(427)
			Float tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(427)
			bool tmp9 = (tmp6 >= tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(427)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(427)
			bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(427)
			bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(427)
			bool tmp13 = tmp11;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(427)
			if ((tmp13)){
				HX_STACK_LINE(427)
				Float tmp14 = this->_rightEdge;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(427)
				Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(427)
				Float tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(427)
				Float tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(427)
				Float tmp18 = ::flixel::_system::FlxQuadTree_obj::_objectRightEdge;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(427)
				Float tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(427)
				Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(427)
				Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(427)
				bool tmp22 = (tmp17 <= tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(427)
				tmp12 = tmp22;
			}
			else{
				HX_STACK_LINE(427)
				tmp12 = false;
			}
			HX_STACK_LINE(427)
			bool tmp14 = tmp12;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(427)
			bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(427)
			bool tmp16 = tmp14;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(427)
			if ((tmp16)){
				HX_STACK_LINE(427)
				Float tmp17 = this->_topEdge;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(427)
				Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(427)
				Float tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(427)
				Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(427)
				Float tmp21 = ::flixel::_system::FlxQuadTree_obj::_objectTopEdge;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(427)
				Float tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(427)
				Float tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(427)
				Float tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(427)
				bool tmp25 = (tmp20 >= tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(427)
				tmp15 = tmp25;
			}
			else{
				HX_STACK_LINE(427)
				tmp15 = false;
			}
			HX_STACK_LINE(427)
			bool tmp17 = tmp15;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(427)
			if ((tmp17)){
				HX_STACK_LINE(427)
				Float tmp18 = this->_bottomEdge;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(427)
				Float tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(427)
				Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(427)
				Float tmp21 = ::flixel::_system::FlxQuadTree_obj::_objectBottomEdge;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(427)
				Float tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(427)
				Float tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(427)
				tmp4 = (tmp20 <= tmp23);
			}
			else{
				HX_STACK_LINE(427)
				tmp4 = false;
			}
		}
		else{
			HX_STACK_LINE(427)
			tmp4 = true;
		}
		HX_STACK_LINE(427)
		if ((tmp4)){
			HX_STACK_LINE(429)
			this->addToList();
			HX_STACK_LINE(430)
			return null();
		}
		HX_STACK_LINE(434)
		Float tmp5 = ::flixel::_system::FlxQuadTree_obj::_objectLeftEdge;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(434)
		Float tmp6 = this->_leftEdge;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(434)
		bool tmp7 = (tmp5 > tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(434)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(434)
		if ((tmp7)){
			HX_STACK_LINE(434)
			Float tmp9 = ::flixel::_system::FlxQuadTree_obj::_objectRightEdge;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(434)
			Float tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(434)
			Float tmp11 = this->_midpointX;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(434)
			Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(434)
			tmp8 = (tmp10 < tmp12);
		}
		else{
			HX_STACK_LINE(434)
			tmp8 = false;
		}
		HX_STACK_LINE(434)
		if ((tmp8)){
			HX_STACK_LINE(436)
			Float tmp9 = ::flixel::_system::FlxQuadTree_obj::_objectTopEdge;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(436)
			Float tmp10 = this->_topEdge;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(436)
			bool tmp11 = (tmp9 > tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(436)
			bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(436)
			if ((tmp11)){
				HX_STACK_LINE(436)
				Float tmp13 = ::flixel::_system::FlxQuadTree_obj::_objectBottomEdge;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(436)
				Float tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(436)
				Float tmp15 = this->_midpointY;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(436)
				Float tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(436)
				tmp12 = (tmp14 < tmp16);
			}
			else{
				HX_STACK_LINE(436)
				tmp12 = false;
			}
			HX_STACK_LINE(436)
			if ((tmp12)){
				HX_STACK_LINE(438)
				::flixel::_system::FlxQuadTree tmp13 = this->_northWestTree;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(438)
				bool tmp14 = (tmp13 == null());		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(438)
				if ((tmp14)){
					HX_STACK_LINE(440)
					Float tmp15 = this->_leftEdge;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(440)
					Float tmp16 = this->_topEdge;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(440)
					Float tmp17 = this->_halfWidth;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(440)
					Float tmp18 = this->_halfHeight;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(440)
					::flixel::_system::FlxQuadTree tmp19 = ::flixel::_system::FlxQuadTree_obj::recycle(tmp15,tmp16,tmp17,tmp18,hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(440)
					this->_northWestTree = tmp19;
				}
				HX_STACK_LINE(442)
				::flixel::_system::FlxQuadTree tmp15 = this->_northWestTree;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(442)
				tmp15->__Field(HX_HCSTRING("addObject","\xc0","\xb3","\x63","\xcd"), hx::paccDynamic )();
				HX_STACK_LINE(443)
				return null();
			}
			HX_STACK_LINE(445)
			Float tmp13 = ::flixel::_system::FlxQuadTree_obj::_objectTopEdge;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(445)
			Float tmp14 = this->_midpointY;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(445)
			bool tmp15 = (tmp13 > tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(445)
			bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(445)
			if ((tmp15)){
				HX_STACK_LINE(445)
				Float tmp17 = ::flixel::_system::FlxQuadTree_obj::_objectBottomEdge;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(445)
				Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(445)
				Float tmp19 = this->_bottomEdge;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(445)
				Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(445)
				tmp16 = (tmp18 < tmp20);
			}
			else{
				HX_STACK_LINE(445)
				tmp16 = false;
			}
			HX_STACK_LINE(445)
			if ((tmp16)){
				HX_STACK_LINE(447)
				::flixel::_system::FlxQuadTree tmp17 = this->_southWestTree;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(447)
				bool tmp18 = (tmp17 == null());		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(447)
				if ((tmp18)){
					HX_STACK_LINE(449)
					Float tmp19 = this->_leftEdge;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(449)
					Float tmp20 = this->_midpointY;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(449)
					Float tmp21 = this->_halfWidth;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(449)
					Float tmp22 = this->_halfHeight;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(449)
					::flixel::_system::FlxQuadTree tmp23 = ::flixel::_system::FlxQuadTree_obj::recycle(tmp19,tmp20,tmp21,tmp22,hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(449)
					this->_southWestTree = tmp23;
				}
				HX_STACK_LINE(451)
				::flixel::_system::FlxQuadTree tmp19 = this->_southWestTree;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(451)
				tmp19->__Field(HX_HCSTRING("addObject","\xc0","\xb3","\x63","\xcd"), hx::paccDynamic )();
				HX_STACK_LINE(452)
				return null();
			}
		}
		HX_STACK_LINE(455)
		Float tmp9 = ::flixel::_system::FlxQuadTree_obj::_objectLeftEdge;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(455)
		Float tmp10 = this->_midpointX;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(455)
		bool tmp11 = (tmp9 > tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(455)
		bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(455)
		if ((tmp11)){
			HX_STACK_LINE(455)
			Float tmp13 = ::flixel::_system::FlxQuadTree_obj::_objectRightEdge;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(455)
			Float tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(455)
			Float tmp15 = this->_rightEdge;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(455)
			Float tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(455)
			tmp12 = (tmp14 < tmp16);
		}
		else{
			HX_STACK_LINE(455)
			tmp12 = false;
		}
		HX_STACK_LINE(455)
		if ((tmp12)){
			HX_STACK_LINE(457)
			Float tmp13 = ::flixel::_system::FlxQuadTree_obj::_objectTopEdge;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(457)
			Float tmp14 = this->_topEdge;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(457)
			bool tmp15 = (tmp13 > tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(457)
			bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(457)
			if ((tmp15)){
				HX_STACK_LINE(457)
				Float tmp17 = ::flixel::_system::FlxQuadTree_obj::_objectBottomEdge;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(457)
				Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(457)
				Float tmp19 = this->_midpointY;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(457)
				Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(457)
				tmp16 = (tmp18 < tmp20);
			}
			else{
				HX_STACK_LINE(457)
				tmp16 = false;
			}
			HX_STACK_LINE(457)
			if ((tmp16)){
				HX_STACK_LINE(459)
				::flixel::_system::FlxQuadTree tmp17 = this->_northEastTree;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(459)
				bool tmp18 = (tmp17 == null());		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(459)
				if ((tmp18)){
					HX_STACK_LINE(461)
					Float tmp19 = this->_midpointX;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(461)
					Float tmp20 = this->_topEdge;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(461)
					Float tmp21 = this->_halfWidth;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(461)
					Float tmp22 = this->_halfHeight;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(461)
					::flixel::_system::FlxQuadTree tmp23 = ::flixel::_system::FlxQuadTree_obj::recycle(tmp19,tmp20,tmp21,tmp22,hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(461)
					this->_northEastTree = tmp23;
				}
				HX_STACK_LINE(463)
				::flixel::_system::FlxQuadTree tmp19 = this->_northEastTree;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(463)
				tmp19->__Field(HX_HCSTRING("addObject","\xc0","\xb3","\x63","\xcd"), hx::paccDynamic )();
				HX_STACK_LINE(464)
				return null();
			}
			HX_STACK_LINE(466)
			Float tmp17 = ::flixel::_system::FlxQuadTree_obj::_objectTopEdge;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(466)
			Float tmp18 = this->_midpointY;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(466)
			bool tmp19 = (tmp17 > tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(466)
			bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(466)
			if ((tmp19)){
				HX_STACK_LINE(466)
				Float tmp21 = ::flixel::_system::FlxQuadTree_obj::_objectBottomEdge;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(466)
				Float tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(466)
				Float tmp23 = this->_bottomEdge;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(466)
				Float tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(466)
				tmp20 = (tmp22 < tmp24);
			}
			else{
				HX_STACK_LINE(466)
				tmp20 = false;
			}
			HX_STACK_LINE(466)
			if ((tmp20)){
				HX_STACK_LINE(468)
				::flixel::_system::FlxQuadTree tmp21 = this->_southEastTree;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(468)
				bool tmp22 = (tmp21 == null());		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(468)
				if ((tmp22)){
					HX_STACK_LINE(470)
					Float tmp23 = this->_midpointX;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(470)
					Float tmp24 = this->_midpointY;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(470)
					Float tmp25 = this->_halfWidth;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(470)
					Float tmp26 = this->_halfHeight;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(470)
					::flixel::_system::FlxQuadTree tmp27 = ::flixel::_system::FlxQuadTree_obj::recycle(tmp23,tmp24,tmp25,tmp26,hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(470)
					this->_southEastTree = tmp27;
				}
				HX_STACK_LINE(472)
				::flixel::_system::FlxQuadTree tmp23 = this->_southEastTree;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(472)
				tmp23->__Field(HX_HCSTRING("addObject","\xc0","\xb3","\x63","\xcd"), hx::paccDynamic )();
				HX_STACK_LINE(473)
				return null();
			}
		}
		HX_STACK_LINE(478)
		Float tmp13 = ::flixel::_system::FlxQuadTree_obj::_objectRightEdge;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(478)
		Float tmp14 = this->_leftEdge;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(478)
		bool tmp15 = (tmp13 > tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(478)
		bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(478)
		bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(478)
		if ((tmp16)){
			HX_STACK_LINE(478)
			Float tmp18 = ::flixel::_system::FlxQuadTree_obj::_objectLeftEdge;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(478)
			Float tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(478)
			Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(478)
			Float tmp21 = this->_midpointX;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(478)
			Float tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(478)
			Float tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(478)
			tmp17 = (tmp20 < tmp23);
		}
		else{
			HX_STACK_LINE(478)
			tmp17 = false;
		}
		HX_STACK_LINE(478)
		bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(478)
		bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(478)
		if ((tmp18)){
			HX_STACK_LINE(478)
			Float tmp20 = ::flixel::_system::FlxQuadTree_obj::_objectBottomEdge;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(478)
			Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(478)
			Float tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(478)
			Float tmp23 = this->_topEdge;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(478)
			Float tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(478)
			Float tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(478)
			tmp19 = (tmp22 > tmp25);
		}
		else{
			HX_STACK_LINE(478)
			tmp19 = false;
		}
		HX_STACK_LINE(478)
		bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(478)
		if ((tmp19)){
			HX_STACK_LINE(478)
			Float tmp21 = ::flixel::_system::FlxQuadTree_obj::_objectTopEdge;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(478)
			Float tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(478)
			Float tmp23 = this->_midpointY;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(478)
			Float tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(478)
			tmp20 = (tmp22 < tmp24);
		}
		else{
			HX_STACK_LINE(478)
			tmp20 = false;
		}
		HX_STACK_LINE(478)
		if ((tmp20)){
			HX_STACK_LINE(480)
			::flixel::_system::FlxQuadTree tmp21 = this->_northWestTree;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(480)
			bool tmp22 = (tmp21 == null());		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(480)
			if ((tmp22)){
				HX_STACK_LINE(482)
				Float tmp23 = this->_leftEdge;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(482)
				Float tmp24 = this->_topEdge;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(482)
				Float tmp25 = this->_halfWidth;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(482)
				Float tmp26 = this->_halfHeight;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(482)
				::flixel::_system::FlxQuadTree tmp27 = ::flixel::_system::FlxQuadTree_obj::recycle(tmp23,tmp24,tmp25,tmp26,hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(482)
				this->_northWestTree = tmp27;
			}
			HX_STACK_LINE(484)
			::flixel::_system::FlxQuadTree tmp23 = this->_northWestTree;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(484)
			tmp23->__Field(HX_HCSTRING("addObject","\xc0","\xb3","\x63","\xcd"), hx::paccDynamic )();
		}
		HX_STACK_LINE(486)
		Float tmp21 = ::flixel::_system::FlxQuadTree_obj::_objectRightEdge;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(486)
		Float tmp22 = this->_midpointX;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(486)
		bool tmp23 = (tmp21 > tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(486)
		bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(486)
		bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(486)
		if ((tmp24)){
			HX_STACK_LINE(486)
			Float tmp26 = ::flixel::_system::FlxQuadTree_obj::_objectLeftEdge;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(486)
			Float tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(486)
			Float tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(486)
			Float tmp29 = this->_rightEdge;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(486)
			Float tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(486)
			Float tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(486)
			tmp25 = (tmp28 < tmp31);
		}
		else{
			HX_STACK_LINE(486)
			tmp25 = false;
		}
		HX_STACK_LINE(486)
		bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(486)
		bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(486)
		if ((tmp26)){
			HX_STACK_LINE(486)
			Float tmp28 = ::flixel::_system::FlxQuadTree_obj::_objectBottomEdge;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(486)
			Float tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(486)
			Float tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(486)
			Float tmp31 = this->_topEdge;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(486)
			Float tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(486)
			Float tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(486)
			tmp27 = (tmp30 > tmp33);
		}
		else{
			HX_STACK_LINE(486)
			tmp27 = false;
		}
		HX_STACK_LINE(486)
		bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(486)
		if ((tmp27)){
			HX_STACK_LINE(486)
			Float tmp29 = ::flixel::_system::FlxQuadTree_obj::_objectTopEdge;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(486)
			Float tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(486)
			Float tmp31 = this->_midpointY;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(486)
			Float tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(486)
			tmp28 = (tmp30 < tmp32);
		}
		else{
			HX_STACK_LINE(486)
			tmp28 = false;
		}
		HX_STACK_LINE(486)
		if ((tmp28)){
			HX_STACK_LINE(488)
			::flixel::_system::FlxQuadTree tmp29 = this->_northEastTree;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(488)
			bool tmp30 = (tmp29 == null());		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(488)
			if ((tmp30)){
				HX_STACK_LINE(490)
				Float tmp31 = this->_midpointX;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(490)
				Float tmp32 = this->_topEdge;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(490)
				Float tmp33 = this->_halfWidth;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(490)
				Float tmp34 = this->_halfHeight;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(490)
				::flixel::_system::FlxQuadTree tmp35 = ::flixel::_system::FlxQuadTree_obj::recycle(tmp31,tmp32,tmp33,tmp34,hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(490)
				this->_northEastTree = tmp35;
			}
			HX_STACK_LINE(492)
			::flixel::_system::FlxQuadTree tmp31 = this->_northEastTree;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(492)
			tmp31->__Field(HX_HCSTRING("addObject","\xc0","\xb3","\x63","\xcd"), hx::paccDynamic )();
		}
		HX_STACK_LINE(494)
		Float tmp29 = ::flixel::_system::FlxQuadTree_obj::_objectRightEdge;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(494)
		Float tmp30 = this->_midpointX;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(494)
		bool tmp31 = (tmp29 > tmp30);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(494)
		bool tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(494)
		bool tmp33;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(494)
		if ((tmp32)){
			HX_STACK_LINE(494)
			Float tmp34 = ::flixel::_system::FlxQuadTree_obj::_objectLeftEdge;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(494)
			Float tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(494)
			Float tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(494)
			Float tmp37 = this->_rightEdge;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(494)
			Float tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(494)
			Float tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(494)
			tmp33 = (tmp36 < tmp39);
		}
		else{
			HX_STACK_LINE(494)
			tmp33 = false;
		}
		HX_STACK_LINE(494)
		bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(494)
		bool tmp35;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(494)
		if ((tmp34)){
			HX_STACK_LINE(494)
			Float tmp36 = ::flixel::_system::FlxQuadTree_obj::_objectBottomEdge;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(494)
			Float tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(494)
			Float tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(494)
			Float tmp39 = this->_midpointY;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(494)
			Float tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(494)
			Float tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(494)
			tmp35 = (tmp38 > tmp41);
		}
		else{
			HX_STACK_LINE(494)
			tmp35 = false;
		}
		HX_STACK_LINE(494)
		bool tmp36;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(494)
		if ((tmp35)){
			HX_STACK_LINE(494)
			Float tmp37 = ::flixel::_system::FlxQuadTree_obj::_objectTopEdge;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(494)
			Float tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(494)
			Float tmp39 = this->_bottomEdge;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(494)
			Float tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(494)
			tmp36 = (tmp38 < tmp40);
		}
		else{
			HX_STACK_LINE(494)
			tmp36 = false;
		}
		HX_STACK_LINE(494)
		if ((tmp36)){
			HX_STACK_LINE(496)
			::flixel::_system::FlxQuadTree tmp37 = this->_southEastTree;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(496)
			bool tmp38 = (tmp37 == null());		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(496)
			if ((tmp38)){
				HX_STACK_LINE(498)
				Float tmp39 = this->_midpointX;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(498)
				Float tmp40 = this->_midpointY;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(498)
				Float tmp41 = this->_halfWidth;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(498)
				Float tmp42 = this->_halfHeight;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(498)
				::flixel::_system::FlxQuadTree tmp43 = ::flixel::_system::FlxQuadTree_obj::recycle(tmp39,tmp40,tmp41,tmp42,hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(498)
				this->_southEastTree = tmp43;
			}
			HX_STACK_LINE(500)
			::flixel::_system::FlxQuadTree tmp39 = this->_southEastTree;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(500)
			tmp39->__Field(HX_HCSTRING("addObject","\xc0","\xb3","\x63","\xcd"), hx::paccDynamic )();
		}
		HX_STACK_LINE(502)
		Float tmp37 = ::flixel::_system::FlxQuadTree_obj::_objectRightEdge;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(502)
		Float tmp38 = this->_leftEdge;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(502)
		bool tmp39 = (tmp37 > tmp38);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(502)
		bool tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(502)
		bool tmp41;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(502)
		if ((tmp40)){
			HX_STACK_LINE(502)
			Float tmp42 = ::flixel::_system::FlxQuadTree_obj::_objectLeftEdge;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(502)
			Float tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(502)
			Float tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(502)
			Float tmp45 = this->_midpointX;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(502)
			Float tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(502)
			Float tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(502)
			tmp41 = (tmp44 < tmp47);
		}
		else{
			HX_STACK_LINE(502)
			tmp41 = false;
		}
		HX_STACK_LINE(502)
		bool tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(502)
		bool tmp43;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(502)
		if ((tmp42)){
			HX_STACK_LINE(502)
			Float tmp44 = ::flixel::_system::FlxQuadTree_obj::_objectBottomEdge;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(502)
			Float tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(502)
			Float tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(502)
			Float tmp47 = this->_midpointY;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(502)
			Float tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(502)
			Float tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(502)
			tmp43 = (tmp46 > tmp49);
		}
		else{
			HX_STACK_LINE(502)
			tmp43 = false;
		}
		HX_STACK_LINE(502)
		bool tmp44;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(502)
		if ((tmp43)){
			HX_STACK_LINE(502)
			Float tmp45 = ::flixel::_system::FlxQuadTree_obj::_objectTopEdge;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(502)
			Float tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(502)
			Float tmp47 = this->_bottomEdge;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(502)
			Float tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(502)
			tmp44 = (tmp46 < tmp48);
		}
		else{
			HX_STACK_LINE(502)
			tmp44 = false;
		}
		HX_STACK_LINE(502)
		if ((tmp44)){
			HX_STACK_LINE(504)
			::flixel::_system::FlxQuadTree tmp45 = this->_southWestTree;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(504)
			bool tmp46 = (tmp45 == null());		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(504)
			if ((tmp46)){
				HX_STACK_LINE(506)
				Float tmp47 = this->_leftEdge;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(506)
				Float tmp48 = this->_midpointY;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(506)
				Float tmp49 = this->_halfWidth;		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(506)
				Float tmp50 = this->_halfHeight;		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(506)
				::flixel::_system::FlxQuadTree tmp51 = ::flixel::_system::FlxQuadTree_obj::recycle(tmp47,tmp48,tmp49,tmp50,hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(506)
				this->_southWestTree = tmp51;
			}
			HX_STACK_LINE(508)
			::flixel::_system::FlxQuadTree tmp47 = this->_southWestTree;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(508)
			tmp47->__Field(HX_HCSTRING("addObject","\xc0","\xb3","\x63","\xcd"), hx::paccDynamic )();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxQuadTree_obj,addObject,(void))

Void FlxQuadTree_obj::addToList( ){
{
		HX_STACK_FRAME("flixel.system.FlxQuadTree","addToList",0x9a34be16,"flixel.system.FlxQuadTree.addToList","flixel/system/FlxQuadTree.hx",516,0xb5742814)
		HX_STACK_THIS(this)
		HX_STACK_LINE(517)
		::flixel::_system::FlxLinkedList ot;		HX_STACK_VAR(ot,"ot");
		HX_STACK_LINE(518)
		int tmp = ::flixel::_system::FlxQuadTree_obj::_list;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(518)
		bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(518)
		if ((tmp1)){
			HX_STACK_LINE(520)
			::flixel::_system::FlxLinkedList tmp2 = this->_tailA;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(520)
			::flixel::FlxObject tmp3 = tmp2->__Field(HX_HCSTRING("object","\xbf","\x7e","\x3f","\x15"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(520)
			bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(520)
			if ((tmp4)){
				HX_STACK_LINE(522)
				::flixel::_system::FlxLinkedList tmp5 = this->_tailA;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(522)
				ot = tmp5;
				HX_STACK_LINE(523)
				::flixel::_system::FlxLinkedList tmp6 = ::flixel::_system::FlxLinkedList_obj::recycle();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(523)
				this->_tailA = tmp6;
				HX_STACK_LINE(524)
				::flixel::_system::FlxLinkedList tmp7 = this->_tailA;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(524)
				ot->__FieldRef(HX_HCSTRING("next","\xf3","\x84","\x02","\x49")) = tmp7;
			}
			HX_STACK_LINE(526)
			::flixel::FlxObject tmp5 = ::flixel::_system::FlxQuadTree_obj::_object;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(526)
			::flixel::_system::FlxLinkedList tmp6 = this->_tailA;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(526)
			tmp6->__FieldRef(HX_HCSTRING("object","\xbf","\x7e","\x3f","\x15")) = tmp5;
		}
		else{
			HX_STACK_LINE(530)
			::flixel::_system::FlxLinkedList tmp2 = this->_tailB;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(530)
			::flixel::FlxObject tmp3 = tmp2->__Field(HX_HCSTRING("object","\xbf","\x7e","\x3f","\x15"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(530)
			bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(530)
			if ((tmp4)){
				HX_STACK_LINE(532)
				::flixel::_system::FlxLinkedList tmp5 = this->_tailB;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(532)
				ot = tmp5;
				HX_STACK_LINE(533)
				::flixel::_system::FlxLinkedList tmp6 = ::flixel::_system::FlxLinkedList_obj::recycle();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(533)
				this->_tailB = tmp6;
				HX_STACK_LINE(534)
				::flixel::_system::FlxLinkedList tmp7 = this->_tailB;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(534)
				ot->__FieldRef(HX_HCSTRING("next","\xf3","\x84","\x02","\x49")) = tmp7;
			}
			HX_STACK_LINE(536)
			::flixel::FlxObject tmp5 = ::flixel::_system::FlxQuadTree_obj::_object;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(536)
			::flixel::_system::FlxLinkedList tmp6 = this->_tailB;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(536)
			tmp6->__FieldRef(HX_HCSTRING("object","\xbf","\x7e","\x3f","\x15")) = tmp5;
		}
		HX_STACK_LINE(538)
		bool tmp2 = this->_canSubdivide;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(538)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(538)
		if ((tmp3)){
			HX_STACK_LINE(540)
			return null();
		}
		HX_STACK_LINE(542)
		::flixel::_system::FlxQuadTree tmp4 = this->_northWestTree;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(542)
		bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(542)
		if ((tmp5)){
			HX_STACK_LINE(544)
			::flixel::_system::FlxQuadTree tmp6 = this->_northWestTree;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(544)
			tmp6->__Field(HX_HCSTRING("addToList","\x7a","\xbc","\x90","\x35"), hx::paccDynamic )();
		}
		HX_STACK_LINE(546)
		::flixel::_system::FlxQuadTree tmp6 = this->_northEastTree;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(546)
		bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(546)
		if ((tmp7)){
			HX_STACK_LINE(548)
			::flixel::_system::FlxQuadTree tmp8 = this->_northEastTree;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(548)
			tmp8->__Field(HX_HCSTRING("addToList","\x7a","\xbc","\x90","\x35"), hx::paccDynamic )();
		}
		HX_STACK_LINE(550)
		::flixel::_system::FlxQuadTree tmp8 = this->_southEastTree;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(550)
		bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(550)
		if ((tmp9)){
			HX_STACK_LINE(552)
			::flixel::_system::FlxQuadTree tmp10 = this->_southEastTree;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(552)
			tmp10->__Field(HX_HCSTRING("addToList","\x7a","\xbc","\x90","\x35"), hx::paccDynamic )();
		}
		HX_STACK_LINE(554)
		::flixel::_system::FlxQuadTree tmp10 = this->_southWestTree;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(554)
		bool tmp11 = (tmp10 != null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(554)
		if ((tmp11)){
			HX_STACK_LINE(556)
			::flixel::_system::FlxQuadTree tmp12 = this->_southWestTree;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(556)
			tmp12->__Field(HX_HCSTRING("addToList","\x7a","\xbc","\x90","\x35"), hx::paccDynamic )();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxQuadTree_obj,addToList,(void))

bool FlxQuadTree_obj::execute( ){
	HX_STACK_FRAME("flixel.system.FlxQuadTree","execute",0x0c2e2cd1,"flixel.system.FlxQuadTree.execute","flixel/system/FlxQuadTree.hx",566,0xb5742814)
	HX_STACK_THIS(this)
	HX_STACK_LINE(567)
	bool overlapProcessed = false;		HX_STACK_VAR(overlapProcessed,"overlapProcessed");
	HX_STACK_LINE(569)
	::flixel::_system::FlxLinkedList tmp = this->_headA;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(569)
	::flixel::FlxObject tmp1 = tmp->__Field(HX_HCSTRING("object","\xbf","\x7e","\x3f","\x15"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(569)
	bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(569)
	if ((tmp2)){
		HX_STACK_LINE(571)
		::flixel::_system::FlxLinkedList tmp3 = this->_headA;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(571)
		::flixel::_system::FlxLinkedList iterator = tmp3;		HX_STACK_VAR(iterator,"iterator");
		HX_STACK_LINE(572)
		while((true)){
			HX_STACK_LINE(572)
			bool tmp4 = (iterator != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(572)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(572)
			if ((tmp5)){
				HX_STACK_LINE(572)
				break;
			}
			HX_STACK_LINE(574)
			::flixel::_system::FlxQuadTree_obj::_object = iterator->__Field(HX_HCSTRING("object","\xbf","\x7e","\x3f","\x15"), hx::paccDynamic );
			HX_STACK_LINE(575)
			bool tmp6 = ::flixel::_system::FlxQuadTree_obj::_useBothLists;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(575)
			if ((tmp6)){
				HX_STACK_LINE(577)
				::flixel::_system::FlxLinkedList tmp7 = this->_headB;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(577)
				::flixel::_system::FlxQuadTree_obj::_iterator = tmp7;
			}
			else{
				HX_STACK_LINE(581)
				::flixel::_system::FlxQuadTree_obj::_iterator = iterator->__Field(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"), hx::paccDynamic );
			}
			HX_STACK_LINE(583)
			::flixel::FlxObject tmp7 = ::flixel::_system::FlxQuadTree_obj::_object;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(583)
			bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(583)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(583)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(583)
			if ((tmp9)){
				HX_STACK_LINE(583)
				::flixel::FlxObject tmp11 = ::flixel::_system::FlxQuadTree_obj::_object;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(583)
				::flixel::FlxObject tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(583)
				::flixel::FlxObject tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(583)
				tmp10 = tmp13->exists;
			}
			else{
				HX_STACK_LINE(583)
				tmp10 = false;
			}
			HX_STACK_LINE(583)
			bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(583)
			bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(583)
			if ((tmp11)){
				HX_STACK_LINE(583)
				::flixel::FlxObject tmp13 = ::flixel::_system::FlxQuadTree_obj::_object;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(583)
				::flixel::FlxObject tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(583)
				::flixel::FlxObject tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(583)
				int tmp16 = tmp15->allowCollisions;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(583)
				tmp12 = (tmp16 > (int)0);
			}
			else{
				HX_STACK_LINE(583)
				tmp12 = false;
			}
			HX_STACK_LINE(583)
			bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(583)
			bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(583)
			if ((tmp13)){
				HX_STACK_LINE(584)
				::flixel::_system::FlxLinkedList tmp15 = ::flixel::_system::FlxQuadTree_obj::_iterator;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(584)
				::flixel::_system::FlxLinkedList tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(584)
				::flixel::_system::FlxLinkedList tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(584)
				tmp14 = (tmp17 != null());
			}
			else{
				HX_STACK_LINE(583)
				tmp14 = false;
			}
			HX_STACK_LINE(583)
			bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(583)
			bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(583)
			if ((tmp15)){
				HX_STACK_LINE(584)
				::flixel::_system::FlxLinkedList tmp17 = ::flixel::_system::FlxQuadTree_obj::_iterator;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(584)
				::flixel::_system::FlxLinkedList tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(584)
				::flixel::_system::FlxLinkedList tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(584)
				::flixel::FlxObject tmp20 = tmp19->__Field(HX_HCSTRING("object","\xbf","\x7e","\x3f","\x15"), hx::paccDynamic );		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(584)
				tmp16 = (tmp20 != null());
			}
			else{
				HX_STACK_LINE(583)
				tmp16 = false;
			}
			HX_STACK_LINE(583)
			bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(583)
			if ((tmp16)){
				HX_STACK_LINE(584)
				tmp17 = this->overlapNode();
			}
			else{
				HX_STACK_LINE(583)
				tmp17 = false;
			}
			HX_STACK_LINE(583)
			if ((tmp17)){
				HX_STACK_LINE(586)
				overlapProcessed = true;
			}
			HX_STACK_LINE(588)
			iterator = iterator->__Field(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"), hx::paccDynamic );
		}
	}
	HX_STACK_LINE(593)
	::flixel::_system::FlxQuadTree tmp3 = this->_northWestTree;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(593)
	bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(593)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(593)
	if ((tmp4)){
		HX_STACK_LINE(593)
		::flixel::_system::FlxQuadTree tmp6 = this->_northWestTree;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(593)
		::flixel::_system::FlxQuadTree tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(593)
		tmp5 = tmp7->__Field(HX_HCSTRING("execute","\x35","\x0a","\x0d","\xcc"), hx::paccDynamic )();
	}
	else{
		HX_STACK_LINE(593)
		tmp5 = false;
	}
	HX_STACK_LINE(593)
	if ((tmp5)){
		HX_STACK_LINE(595)
		overlapProcessed = true;
	}
	HX_STACK_LINE(597)
	::flixel::_system::FlxQuadTree tmp6 = this->_northEastTree;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(597)
	bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(597)
	bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(597)
	if ((tmp7)){
		HX_STACK_LINE(597)
		::flixel::_system::FlxQuadTree tmp9 = this->_northEastTree;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(597)
		::flixel::_system::FlxQuadTree tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(597)
		tmp8 = tmp10->__Field(HX_HCSTRING("execute","\x35","\x0a","\x0d","\xcc"), hx::paccDynamic )();
	}
	else{
		HX_STACK_LINE(597)
		tmp8 = false;
	}
	HX_STACK_LINE(597)
	if ((tmp8)){
		HX_STACK_LINE(599)
		overlapProcessed = true;
	}
	HX_STACK_LINE(601)
	::flixel::_system::FlxQuadTree tmp9 = this->_southEastTree;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(601)
	bool tmp10 = (tmp9 != null());		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(601)
	bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(601)
	if ((tmp10)){
		HX_STACK_LINE(601)
		::flixel::_system::FlxQuadTree tmp12 = this->_southEastTree;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(601)
		::flixel::_system::FlxQuadTree tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(601)
		tmp11 = tmp13->__Field(HX_HCSTRING("execute","\x35","\x0a","\x0d","\xcc"), hx::paccDynamic )();
	}
	else{
		HX_STACK_LINE(601)
		tmp11 = false;
	}
	HX_STACK_LINE(601)
	if ((tmp11)){
		HX_STACK_LINE(603)
		overlapProcessed = true;
	}
	HX_STACK_LINE(605)
	::flixel::_system::FlxQuadTree tmp12 = this->_southWestTree;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(605)
	bool tmp13 = (tmp12 != null());		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(605)
	bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(605)
	if ((tmp13)){
		HX_STACK_LINE(605)
		::flixel::_system::FlxQuadTree tmp15 = this->_southWestTree;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(605)
		::flixel::_system::FlxQuadTree tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(605)
		tmp14 = tmp16->__Field(HX_HCSTRING("execute","\x35","\x0a","\x0d","\xcc"), hx::paccDynamic )();
	}
	else{
		HX_STACK_LINE(605)
		tmp14 = false;
	}
	HX_STACK_LINE(605)
	if ((tmp14)){
		HX_STACK_LINE(607)
		overlapProcessed = true;
	}
	HX_STACK_LINE(610)
	bool tmp15 = overlapProcessed;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(610)
	return tmp15;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxQuadTree_obj,execute,return )

bool FlxQuadTree_obj::overlapNode( ){
	HX_STACK_FRAME("flixel.system.FlxQuadTree","overlapNode",0x0fc5e9c5,"flixel.system.FlxQuadTree.overlapNode","flixel/system/FlxQuadTree.hx",618,0xb5742814)
	HX_STACK_THIS(this)
	HX_STACK_LINE(620)
	::flixel::FlxObject tmp = ::flixel::_system::FlxQuadTree_obj::_object;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(620)
	Float tmp1 = tmp->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(620)
	::flixel::FlxObject tmp2 = ::flixel::_system::FlxQuadTree_obj::_object;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(620)
	Float tmp3 = tmp2->last->x;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(620)
	bool tmp4 = (tmp1 < tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(620)
	Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(620)
	if ((tmp4)){
		HX_STACK_LINE(620)
		::flixel::FlxObject tmp6 = ::flixel::_system::FlxQuadTree_obj::_object;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(620)
		tmp5 = tmp6->x;
	}
	else{
		HX_STACK_LINE(620)
		::flixel::FlxObject tmp6 = ::flixel::_system::FlxQuadTree_obj::_object;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(620)
		tmp5 = tmp6->last->x;
	}
	HX_STACK_LINE(620)
	::flixel::_system::FlxQuadTree_obj::_objectHullX = tmp5;
	HX_STACK_LINE(621)
	::flixel::FlxObject tmp6 = ::flixel::_system::FlxQuadTree_obj::_object;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(621)
	Float tmp7 = tmp6->y;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(621)
	::flixel::FlxObject tmp8 = ::flixel::_system::FlxQuadTree_obj::_object;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(621)
	Float tmp9 = tmp8->last->y;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(621)
	bool tmp10 = (tmp7 < tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(621)
	Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(621)
	if ((tmp10)){
		HX_STACK_LINE(621)
		::flixel::FlxObject tmp12 = ::flixel::_system::FlxQuadTree_obj::_object;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(621)
		tmp11 = tmp12->y;
	}
	else{
		HX_STACK_LINE(621)
		::flixel::FlxObject tmp12 = ::flixel::_system::FlxQuadTree_obj::_object;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(621)
		tmp11 = tmp12->last->y;
	}
	HX_STACK_LINE(621)
	::flixel::_system::FlxQuadTree_obj::_objectHullY = tmp11;
	HX_STACK_LINE(622)
	::flixel::FlxObject tmp12 = ::flixel::_system::FlxQuadTree_obj::_object;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(622)
	Float tmp13 = tmp12->x;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(622)
	::flixel::FlxObject tmp14 = ::flixel::_system::FlxQuadTree_obj::_object;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(622)
	Float tmp15 = tmp14->last->x;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(622)
	Float tmp16 = (tmp13 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(622)
	::flixel::_system::FlxQuadTree_obj::_objectHullWidth = tmp16;
	HX_STACK_LINE(623)
	::flixel::FlxObject tmp17 = ::flixel::_system::FlxQuadTree_obj::_object;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(623)
	Float tmp18 = tmp17->get_width();		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(623)
	Float tmp19 = ::flixel::_system::FlxQuadTree_obj::_objectHullWidth;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(623)
	bool tmp20 = (tmp19 > (int)0);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(623)
	Float tmp21;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(623)
	if ((tmp20)){
		HX_STACK_LINE(623)
		tmp21 = ::flixel::_system::FlxQuadTree_obj::_objectHullWidth;
	}
	else{
		HX_STACK_LINE(623)
		Float tmp22 = ::flixel::_system::FlxQuadTree_obj::_objectHullWidth;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(623)
		tmp21 = -(tmp22);
	}
	HX_STACK_LINE(623)
	Float tmp22 = (tmp18 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(623)
	::flixel::_system::FlxQuadTree_obj::_objectHullWidth = tmp22;
	HX_STACK_LINE(624)
	::flixel::FlxObject tmp23 = ::flixel::_system::FlxQuadTree_obj::_object;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(624)
	Float tmp24 = tmp23->y;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(624)
	::flixel::FlxObject tmp25 = ::flixel::_system::FlxQuadTree_obj::_object;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(624)
	Float tmp26 = tmp25->last->y;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(624)
	Float tmp27 = (tmp24 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(624)
	::flixel::_system::FlxQuadTree_obj::_objectHullHeight = tmp27;
	HX_STACK_LINE(625)
	::flixel::FlxObject tmp28 = ::flixel::_system::FlxQuadTree_obj::_object;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(625)
	Float tmp29 = tmp28->get_height();		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(625)
	Float tmp30 = ::flixel::_system::FlxQuadTree_obj::_objectHullHeight;		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(625)
	bool tmp31 = (tmp30 > (int)0);		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(625)
	Float tmp32;		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(625)
	if ((tmp31)){
		HX_STACK_LINE(625)
		tmp32 = ::flixel::_system::FlxQuadTree_obj::_objectHullHeight;
	}
	else{
		HX_STACK_LINE(625)
		Float tmp33 = ::flixel::_system::FlxQuadTree_obj::_objectHullHeight;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(625)
		tmp32 = -(tmp33);
	}
	HX_STACK_LINE(625)
	Float tmp33 = (tmp29 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(625)
	::flixel::_system::FlxQuadTree_obj::_objectHullHeight = tmp33;
	HX_STACK_LINE(628)
	bool overlapProcessed = false;		HX_STACK_VAR(overlapProcessed,"overlapProcessed");
	HX_STACK_LINE(629)
	::flixel::FlxObject checkObject;		HX_STACK_VAR(checkObject,"checkObject");
	HX_STACK_LINE(631)
	while((true)){
		HX_STACK_LINE(631)
		::flixel::_system::FlxLinkedList tmp34 = ::flixel::_system::FlxQuadTree_obj::_iterator;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(631)
		bool tmp35 = (tmp34 != null());		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(631)
		bool tmp36 = !(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(631)
		if ((tmp36)){
			HX_STACK_LINE(631)
			break;
		}
		HX_STACK_LINE(633)
		::flixel::_system::FlxLinkedList tmp37 = ::flixel::_system::FlxQuadTree_obj::_iterator;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(633)
		checkObject = tmp37->__Field(HX_HCSTRING("object","\xbf","\x7e","\x3f","\x15"), hx::paccDynamic );
		HX_STACK_LINE(634)
		::flixel::FlxObject tmp38 = ::flixel::_system::FlxQuadTree_obj::_object;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(634)
		::flixel::FlxObject tmp39 = checkObject;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(634)
		bool tmp40 = (tmp38 == tmp39);		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(634)
		bool tmp41 = !(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(634)
		bool tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(634)
		bool tmp43;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(634)
		if ((tmp42)){
			HX_STACK_LINE(634)
			bool tmp44 = checkObject->exists;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(634)
			bool tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(634)
			bool tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(634)
			tmp43 = !(tmp46);
		}
		else{
			HX_STACK_LINE(634)
			tmp43 = true;
		}
		HX_STACK_LINE(634)
		bool tmp44 = !(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(634)
		bool tmp45;		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(634)
		if ((tmp44)){
			HX_STACK_LINE(634)
			tmp45 = (checkObject->allowCollisions <= (int)0);
		}
		else{
			HX_STACK_LINE(634)
			tmp45 = true;
		}
		HX_STACK_LINE(634)
		if ((tmp45)){
			HX_STACK_LINE(636)
			::flixel::_system::FlxLinkedList tmp46 = ::flixel::_system::FlxQuadTree_obj::_iterator;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(636)
			::flixel::_system::FlxQuadTree_obj::_iterator = tmp46->__Field(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"), hx::paccDynamic );
			HX_STACK_LINE(637)
			continue;
		}
		HX_STACK_LINE(641)
		Float tmp46 = checkObject->x;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(641)
		Float tmp47 = checkObject->last->x;		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(641)
		bool tmp48 = (tmp46 < tmp47);		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(641)
		Float tmp49;		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(641)
		if ((tmp48)){
			HX_STACK_LINE(641)
			tmp49 = checkObject->x;
		}
		else{
			HX_STACK_LINE(641)
			tmp49 = checkObject->last->x;
		}
		HX_STACK_LINE(641)
		::flixel::_system::FlxQuadTree_obj::_checkObjectHullX = tmp49;
		HX_STACK_LINE(642)
		Float tmp50 = checkObject->y;		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(642)
		Float tmp51 = checkObject->last->y;		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(642)
		bool tmp52 = (tmp50 < tmp51);		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(642)
		Float tmp53;		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(642)
		if ((tmp52)){
			HX_STACK_LINE(642)
			tmp53 = checkObject->y;
		}
		else{
			HX_STACK_LINE(642)
			tmp53 = checkObject->last->y;
		}
		HX_STACK_LINE(642)
		::flixel::_system::FlxQuadTree_obj::_checkObjectHullY = tmp53;
		HX_STACK_LINE(643)
		Float tmp54 = checkObject->x;		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(643)
		Float tmp55 = checkObject->last->x;		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(643)
		Float tmp56 = (tmp54 - tmp55);		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(643)
		::flixel::_system::FlxQuadTree_obj::_checkObjectHullWidth = tmp56;
		HX_STACK_LINE(644)
		Float tmp57 = checkObject->get_width();		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(644)
		Float tmp58 = ::flixel::_system::FlxQuadTree_obj::_checkObjectHullWidth;		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(644)
		bool tmp59 = (tmp58 > (int)0);		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(644)
		Float tmp60;		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(644)
		if ((tmp59)){
			HX_STACK_LINE(644)
			tmp60 = ::flixel::_system::FlxQuadTree_obj::_checkObjectHullWidth;
		}
		else{
			HX_STACK_LINE(644)
			Float tmp61 = ::flixel::_system::FlxQuadTree_obj::_checkObjectHullWidth;		HX_STACK_VAR(tmp61,"tmp61");
			HX_STACK_LINE(644)
			tmp60 = -(tmp61);
		}
		HX_STACK_LINE(644)
		Float tmp61 = (tmp57 + tmp60);		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(644)
		::flixel::_system::FlxQuadTree_obj::_checkObjectHullWidth = tmp61;
		HX_STACK_LINE(645)
		Float tmp62 = checkObject->y;		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(645)
		Float tmp63 = checkObject->last->y;		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(645)
		Float tmp64 = (tmp62 - tmp63);		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(645)
		::flixel::_system::FlxQuadTree_obj::_checkObjectHullHeight = tmp64;
		HX_STACK_LINE(646)
		Float tmp65 = checkObject->get_height();		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(646)
		Float tmp66 = ::flixel::_system::FlxQuadTree_obj::_checkObjectHullHeight;		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(646)
		bool tmp67 = (tmp66 > (int)0);		HX_STACK_VAR(tmp67,"tmp67");
		HX_STACK_LINE(646)
		Float tmp68;		HX_STACK_VAR(tmp68,"tmp68");
		HX_STACK_LINE(646)
		if ((tmp67)){
			HX_STACK_LINE(646)
			tmp68 = ::flixel::_system::FlxQuadTree_obj::_checkObjectHullHeight;
		}
		else{
			HX_STACK_LINE(646)
			Float tmp69 = ::flixel::_system::FlxQuadTree_obj::_checkObjectHullHeight;		HX_STACK_VAR(tmp69,"tmp69");
			HX_STACK_LINE(646)
			tmp68 = -(tmp69);
		}
		HX_STACK_LINE(646)
		Float tmp69 = (tmp65 + tmp68);		HX_STACK_VAR(tmp69,"tmp69");
		HX_STACK_LINE(646)
		::flixel::_system::FlxQuadTree_obj::_checkObjectHullHeight = tmp69;
		HX_STACK_LINE(649)
		Float tmp70 = ::flixel::_system::FlxQuadTree_obj::_objectHullX;		HX_STACK_VAR(tmp70,"tmp70");
		HX_STACK_LINE(649)
		Float tmp71 = ::flixel::_system::FlxQuadTree_obj::_objectHullWidth;		HX_STACK_VAR(tmp71,"tmp71");
		HX_STACK_LINE(649)
		Float tmp72 = (tmp70 + tmp71);		HX_STACK_VAR(tmp72,"tmp72");
		HX_STACK_LINE(649)
		Float tmp73 = ::flixel::_system::FlxQuadTree_obj::_checkObjectHullX;		HX_STACK_VAR(tmp73,"tmp73");
		HX_STACK_LINE(649)
		bool tmp74 = (tmp72 > tmp73);		HX_STACK_VAR(tmp74,"tmp74");
		HX_STACK_LINE(649)
		bool tmp75 = tmp74;		HX_STACK_VAR(tmp75,"tmp75");
		HX_STACK_LINE(649)
		bool tmp76;		HX_STACK_VAR(tmp76,"tmp76");
		HX_STACK_LINE(649)
		if ((tmp75)){
			HX_STACK_LINE(650)
			Float tmp77 = ::flixel::_system::FlxQuadTree_obj::_objectHullX;		HX_STACK_VAR(tmp77,"tmp77");
			HX_STACK_LINE(650)
			Float tmp78 = tmp77;		HX_STACK_VAR(tmp78,"tmp78");
			HX_STACK_LINE(650)
			Float tmp79 = tmp78;		HX_STACK_VAR(tmp79,"tmp79");
			HX_STACK_LINE(650)
			Float tmp80 = ::flixel::_system::FlxQuadTree_obj::_checkObjectHullX;		HX_STACK_VAR(tmp80,"tmp80");
			HX_STACK_LINE(650)
			Float tmp81 = tmp80;		HX_STACK_VAR(tmp81,"tmp81");
			HX_STACK_LINE(650)
			Float tmp82 = tmp81;		HX_STACK_VAR(tmp82,"tmp82");
			HX_STACK_LINE(650)
			Float tmp83 = ::flixel::_system::FlxQuadTree_obj::_checkObjectHullWidth;		HX_STACK_VAR(tmp83,"tmp83");
			HX_STACK_LINE(650)
			Float tmp84 = tmp83;		HX_STACK_VAR(tmp84,"tmp84");
			HX_STACK_LINE(650)
			Float tmp85 = tmp84;		HX_STACK_VAR(tmp85,"tmp85");
			HX_STACK_LINE(650)
			Float tmp86 = (tmp82 + tmp85);		HX_STACK_VAR(tmp86,"tmp86");
			HX_STACK_LINE(650)
			Float tmp87 = tmp86;		HX_STACK_VAR(tmp87,"tmp87");
			HX_STACK_LINE(650)
			Float tmp88 = tmp87;		HX_STACK_VAR(tmp88,"tmp88");
			HX_STACK_LINE(650)
			tmp76 = (tmp79 < tmp88);
		}
		else{
			HX_STACK_LINE(649)
			tmp76 = false;
		}
		HX_STACK_LINE(649)
		bool tmp77 = tmp76;		HX_STACK_VAR(tmp77,"tmp77");
		HX_STACK_LINE(649)
		bool tmp78;		HX_STACK_VAR(tmp78,"tmp78");
		HX_STACK_LINE(649)
		if ((tmp77)){
			HX_STACK_LINE(651)
			Float tmp79 = ::flixel::_system::FlxQuadTree_obj::_objectHullY;		HX_STACK_VAR(tmp79,"tmp79");
			HX_STACK_LINE(651)
			Float tmp80 = tmp79;		HX_STACK_VAR(tmp80,"tmp80");
			HX_STACK_LINE(651)
			Float tmp81 = tmp80;		HX_STACK_VAR(tmp81,"tmp81");
			HX_STACK_LINE(651)
			Float tmp82 = ::flixel::_system::FlxQuadTree_obj::_objectHullHeight;		HX_STACK_VAR(tmp82,"tmp82");
			HX_STACK_LINE(651)
			Float tmp83 = tmp82;		HX_STACK_VAR(tmp83,"tmp83");
			HX_STACK_LINE(651)
			Float tmp84 = tmp83;		HX_STACK_VAR(tmp84,"tmp84");
			HX_STACK_LINE(651)
			Float tmp85 = (tmp81 + tmp84);		HX_STACK_VAR(tmp85,"tmp85");
			HX_STACK_LINE(651)
			Float tmp86 = tmp85;		HX_STACK_VAR(tmp86,"tmp86");
			HX_STACK_LINE(651)
			Float tmp87 = tmp86;		HX_STACK_VAR(tmp87,"tmp87");
			HX_STACK_LINE(651)
			Float tmp88 = ::flixel::_system::FlxQuadTree_obj::_checkObjectHullY;		HX_STACK_VAR(tmp88,"tmp88");
			HX_STACK_LINE(651)
			Float tmp89 = tmp88;		HX_STACK_VAR(tmp89,"tmp89");
			HX_STACK_LINE(651)
			Float tmp90 = tmp89;		HX_STACK_VAR(tmp90,"tmp90");
			HX_STACK_LINE(651)
			tmp78 = (tmp87 > tmp90);
		}
		else{
			HX_STACK_LINE(649)
			tmp78 = false;
		}
		HX_STACK_LINE(649)
		bool tmp79;		HX_STACK_VAR(tmp79,"tmp79");
		HX_STACK_LINE(649)
		if ((tmp78)){
			HX_STACK_LINE(652)
			Float tmp80 = ::flixel::_system::FlxQuadTree_obj::_objectHullY;		HX_STACK_VAR(tmp80,"tmp80");
			HX_STACK_LINE(652)
			Float tmp81 = tmp80;		HX_STACK_VAR(tmp81,"tmp81");
			HX_STACK_LINE(652)
			Float tmp82 = ::flixel::_system::FlxQuadTree_obj::_checkObjectHullY;		HX_STACK_VAR(tmp82,"tmp82");
			HX_STACK_LINE(652)
			Float tmp83 = tmp82;		HX_STACK_VAR(tmp83,"tmp83");
			HX_STACK_LINE(652)
			Float tmp84 = ::flixel::_system::FlxQuadTree_obj::_checkObjectHullHeight;		HX_STACK_VAR(tmp84,"tmp84");
			HX_STACK_LINE(652)
			Float tmp85 = tmp84;		HX_STACK_VAR(tmp85,"tmp85");
			HX_STACK_LINE(652)
			Float tmp86 = (tmp83 + tmp85);		HX_STACK_VAR(tmp86,"tmp86");
			HX_STACK_LINE(652)
			Float tmp87 = tmp86;		HX_STACK_VAR(tmp87,"tmp87");
			HX_STACK_LINE(652)
			tmp79 = (tmp81 < tmp87);
		}
		else{
			HX_STACK_LINE(649)
			tmp79 = false;
		}
		HX_STACK_LINE(649)
		if ((tmp79)){
			HX_STACK_LINE(655)
			Dynamic tmp80 = ::flixel::_system::FlxQuadTree_obj::_processingCallback_dyn();		HX_STACK_VAR(tmp80,"tmp80");
			HX_STACK_LINE(655)
			bool tmp81 = (tmp80 == null());		HX_STACK_VAR(tmp81,"tmp81");
			HX_STACK_LINE(655)
			bool tmp82 = !(tmp81);		HX_STACK_VAR(tmp82,"tmp82");
			HX_STACK_LINE(655)
			bool tmp83;		HX_STACK_VAR(tmp83,"tmp83");
			HX_STACK_LINE(655)
			if ((tmp82)){
				HX_STACK_LINE(655)
				::flixel::FlxObject tmp84 = ::flixel::_system::FlxQuadTree_obj::_object;		HX_STACK_VAR(tmp84,"tmp84");
				HX_STACK_LINE(655)
				::flixel::FlxObject tmp85 = tmp84;		HX_STACK_VAR(tmp85,"tmp85");
				HX_STACK_LINE(655)
				::flixel::FlxObject tmp86 = checkObject;		HX_STACK_VAR(tmp86,"tmp86");
				HX_STACK_LINE(655)
				::flixel::FlxObject tmp87 = tmp85;		HX_STACK_VAR(tmp87,"tmp87");
				HX_STACK_LINE(655)
				::flixel::FlxObject tmp88 = tmp86;		HX_STACK_VAR(tmp88,"tmp88");
				HX_STACK_LINE(655)
				tmp83 = ::flixel::_system::FlxQuadTree_obj::_processingCallback(tmp87,tmp88);
			}
			else{
				HX_STACK_LINE(655)
				tmp83 = true;
			}
			HX_STACK_LINE(655)
			if ((tmp83)){
				HX_STACK_LINE(657)
				overlapProcessed = true;
				HX_STACK_LINE(658)
				Dynamic tmp84 = ::flixel::_system::FlxQuadTree_obj::_notifyCallback_dyn();		HX_STACK_VAR(tmp84,"tmp84");
				HX_STACK_LINE(658)
				bool tmp85 = (tmp84 != null());		HX_STACK_VAR(tmp85,"tmp85");
				HX_STACK_LINE(658)
				if ((tmp85)){
					HX_STACK_LINE(660)
					::flixel::FlxObject tmp86 = ::flixel::_system::FlxQuadTree_obj::_object;		HX_STACK_VAR(tmp86,"tmp86");
					HX_STACK_LINE(660)
					::flixel::FlxObject tmp87 = checkObject;		HX_STACK_VAR(tmp87,"tmp87");
					HX_STACK_LINE(660)
					::flixel::_system::FlxQuadTree_obj::_notifyCallback(tmp86,tmp87);
				}
			}
		}
		HX_STACK_LINE(664)
		::flixel::_system::FlxLinkedList tmp80 = ::flixel::_system::FlxQuadTree_obj::_iterator;		HX_STACK_VAR(tmp80,"tmp80");
		HX_STACK_LINE(664)
		bool tmp81 = (tmp80 != null());		HX_STACK_VAR(tmp81,"tmp81");
		HX_STACK_LINE(664)
		if ((tmp81)){
			HX_STACK_LINE(666)
			::flixel::_system::FlxLinkedList tmp82 = ::flixel::_system::FlxQuadTree_obj::_iterator;		HX_STACK_VAR(tmp82,"tmp82");
			HX_STACK_LINE(666)
			::flixel::_system::FlxQuadTree_obj::_iterator = tmp82->__Field(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"), hx::paccDynamic );
		}
	}
	HX_STACK_LINE(670)
	bool tmp34 = overlapProcessed;		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(670)
	return tmp34;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxQuadTree_obj,overlapNode,return )

int FlxQuadTree_obj::A_LIST;

int FlxQuadTree_obj::B_LIST;

int FlxQuadTree_obj::divisions;

int FlxQuadTree_obj::_min;

::flixel::FlxObject FlxQuadTree_obj::_object;

Float FlxQuadTree_obj::_objectLeftEdge;

Float FlxQuadTree_obj::_objectTopEdge;

Float FlxQuadTree_obj::_objectRightEdge;

Float FlxQuadTree_obj::_objectBottomEdge;

int FlxQuadTree_obj::_list;

bool FlxQuadTree_obj::_useBothLists;

Dynamic FlxQuadTree_obj::_processingCallback;

Dynamic FlxQuadTree_obj::_notifyCallback;

::flixel::_system::FlxLinkedList FlxQuadTree_obj::_iterator;

Float FlxQuadTree_obj::_objectHullX;

Float FlxQuadTree_obj::_objectHullY;

Float FlxQuadTree_obj::_objectHullWidth;

Float FlxQuadTree_obj::_objectHullHeight;

Float FlxQuadTree_obj::_checkObjectHullX;

Float FlxQuadTree_obj::_checkObjectHullY;

Float FlxQuadTree_obj::_checkObjectHullWidth;

Float FlxQuadTree_obj::_checkObjectHullHeight;

int FlxQuadTree_obj::_NUM_CACHED_QUAD_TREES;

::flixel::_system::FlxQuadTree FlxQuadTree_obj::_cachedTreesHead;

::flixel::_system::FlxQuadTree FlxQuadTree_obj::recycle( Float X,Float Y,Float Width,Float Height,::flixel::_system::FlxQuadTree Parent){
	HX_STACK_FRAME("flixel.system.FlxQuadTree","recycle",0x77ad32af,"flixel.system.FlxQuadTree.recycle","flixel/system/FlxQuadTree.hx",214,0xb5742814)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(Width,"Width")
	HX_STACK_ARG(Height,"Height")
	HX_STACK_ARG(Parent,"Parent")
	HX_STACK_LINE(215)
	::flixel::_system::FlxQuadTree tmp = ::flixel::_system::FlxQuadTree_obj::_cachedTreesHead;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(215)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(215)
	if ((tmp1)){
		HX_STACK_LINE(217)
		::flixel::_system::FlxQuadTree tmp2 = ::flixel::_system::FlxQuadTree_obj::_cachedTreesHead;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(217)
		::flixel::_system::FlxQuadTree cachedTree = tmp2;		HX_STACK_VAR(cachedTree,"cachedTree");
		HX_STACK_LINE(218)
		::flixel::_system::FlxQuadTree tmp3 = ::flixel::_system::FlxQuadTree_obj::_cachedTreesHead;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(218)
		::flixel::_system::FlxQuadTree_obj::_cachedTreesHead = tmp3->__Field(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"), hx::paccDynamic );
		HX_STACK_LINE(219)
		(::flixel::_system::FlxQuadTree_obj::_NUM_CACHED_QUAD_TREES)--;
		HX_STACK_LINE(221)
		Float tmp4 = X;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(221)
		Float tmp5 = Y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(221)
		Float tmp6 = Width;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(221)
		Float tmp7 = Height;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(221)
		::flixel::_system::FlxQuadTree tmp8 = Parent;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(221)
		cachedTree->__Field(HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"), hx::paccDynamic )(tmp4,tmp5,tmp6,tmp7,tmp8);
		HX_STACK_LINE(222)
		::flixel::_system::FlxQuadTree tmp9 = cachedTree;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(222)
		return tmp9;
	}
	else{
		HX_STACK_LINE(225)
		::flixel::_system::FlxQuadTree tmp2 = ::flixel::_system::FlxQuadTree_obj::__new(X,Y,Width,Height,Parent);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(225)
		return tmp2;
	}
	HX_STACK_LINE(215)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxQuadTree_obj,recycle,return )

Void FlxQuadTree_obj::clearCache( ){
{
		HX_STACK_FRAME("flixel.system.FlxQuadTree","clearCache",0xc0fc4059,"flixel.system.FlxQuadTree.clearCache","flixel/system/FlxQuadTree.hx",231,0xb5742814)
		HX_STACK_LINE(233)
		while((true)){
			HX_STACK_LINE(233)
			::flixel::_system::FlxQuadTree tmp = ::flixel::_system::FlxQuadTree_obj::_cachedTreesHead;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(233)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(233)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(233)
			if ((tmp2)){
				HX_STACK_LINE(233)
				break;
			}
			HX_STACK_LINE(235)
			::flixel::_system::FlxQuadTree tmp3 = ::flixel::_system::FlxQuadTree_obj::_cachedTreesHead;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(235)
			::flixel::_system::FlxQuadTree node = tmp3;		HX_STACK_VAR(node,"node");
			HX_STACK_LINE(236)
			::flixel::_system::FlxQuadTree tmp4 = ::flixel::_system::FlxQuadTree_obj::_cachedTreesHead;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(236)
			::flixel::_system::FlxQuadTree_obj::_cachedTreesHead = tmp4->__Field(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"), hx::paccDynamic );
			HX_STACK_LINE(237)
			node->__FieldRef(HX_HCSTRING("next","\xf3","\x84","\x02","\x49")) = null();
		}
		HX_STACK_LINE(239)
		::flixel::_system::FlxQuadTree_obj::_NUM_CACHED_QUAD_TREES = (int)0;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxQuadTree_obj,clearCache,(void))


FlxQuadTree_obj::FlxQuadTree_obj()
{
}

void FlxQuadTree_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxQuadTree);
	HX_MARK_MEMBER_NAME(exists,"exists");
	HX_MARK_MEMBER_NAME(_canSubdivide,"_canSubdivide");
	HX_MARK_MEMBER_NAME(_headA,"_headA");
	HX_MARK_MEMBER_NAME(_tailA,"_tailA");
	HX_MARK_MEMBER_NAME(_headB,"_headB");
	HX_MARK_MEMBER_NAME(_tailB,"_tailB");
	HX_MARK_MEMBER_NAME(_northWestTree,"_northWestTree");
	HX_MARK_MEMBER_NAME(_northEastTree,"_northEastTree");
	HX_MARK_MEMBER_NAME(_southEastTree,"_southEastTree");
	HX_MARK_MEMBER_NAME(_southWestTree,"_southWestTree");
	HX_MARK_MEMBER_NAME(_leftEdge,"_leftEdge");
	HX_MARK_MEMBER_NAME(_rightEdge,"_rightEdge");
	HX_MARK_MEMBER_NAME(_topEdge,"_topEdge");
	HX_MARK_MEMBER_NAME(_bottomEdge,"_bottomEdge");
	HX_MARK_MEMBER_NAME(_halfWidth,"_halfWidth");
	HX_MARK_MEMBER_NAME(_halfHeight,"_halfHeight");
	HX_MARK_MEMBER_NAME(_midpointX,"_midpointX");
	HX_MARK_MEMBER_NAME(_midpointY,"_midpointY");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_END_CLASS();
}

void FlxQuadTree_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(exists,"exists");
	HX_VISIT_MEMBER_NAME(_canSubdivide,"_canSubdivide");
	HX_VISIT_MEMBER_NAME(_headA,"_headA");
	HX_VISIT_MEMBER_NAME(_tailA,"_tailA");
	HX_VISIT_MEMBER_NAME(_headB,"_headB");
	HX_VISIT_MEMBER_NAME(_tailB,"_tailB");
	HX_VISIT_MEMBER_NAME(_northWestTree,"_northWestTree");
	HX_VISIT_MEMBER_NAME(_northEastTree,"_northEastTree");
	HX_VISIT_MEMBER_NAME(_southEastTree,"_southEastTree");
	HX_VISIT_MEMBER_NAME(_southWestTree,"_southWestTree");
	HX_VISIT_MEMBER_NAME(_leftEdge,"_leftEdge");
	HX_VISIT_MEMBER_NAME(_rightEdge,"_rightEdge");
	HX_VISIT_MEMBER_NAME(_topEdge,"_topEdge");
	HX_VISIT_MEMBER_NAME(_bottomEdge,"_bottomEdge");
	HX_VISIT_MEMBER_NAME(_halfWidth,"_halfWidth");
	HX_VISIT_MEMBER_NAME(_halfHeight,"_halfHeight");
	HX_VISIT_MEMBER_NAME(_midpointX,"_midpointX");
	HX_VISIT_MEMBER_NAME(_midpointY,"_midpointY");
	HX_VISIT_MEMBER_NAME(next,"next");
}

Dynamic FlxQuadTree_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"exists") ) { return exists; }
		if (HX_FIELD_EQ(inName,"_headA") ) { return _headA; }
		if (HX_FIELD_EQ(inName,"_tailA") ) { return _tailA; }
		if (HX_FIELD_EQ(inName,"_headB") ) { return _headB; }
		if (HX_FIELD_EQ(inName,"_tailB") ) { return _tailB; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"execute") ) { return execute_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_topEdge") ) { return _topEdge; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_leftEdge") ) { return _leftEdge; }
		if (HX_FIELD_EQ(inName,"addObject") ) { return addObject_dyn(); }
		if (HX_FIELD_EQ(inName,"addToList") ) { return addToList_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_rightEdge") ) { return _rightEdge; }
		if (HX_FIELD_EQ(inName,"_halfWidth") ) { return _halfWidth; }
		if (HX_FIELD_EQ(inName,"_midpointX") ) { return _midpointX; }
		if (HX_FIELD_EQ(inName,"_midpointY") ) { return _midpointY; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_bottomEdge") ) { return _bottomEdge; }
		if (HX_FIELD_EQ(inName,"_halfHeight") ) { return _halfHeight; }
		if (HX_FIELD_EQ(inName,"overlapNode") ) { return overlapNode_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_canSubdivide") ) { return _canSubdivide; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_northWestTree") ) { return _northWestTree; }
		if (HX_FIELD_EQ(inName,"_northEastTree") ) { return _northEastTree; }
		if (HX_FIELD_EQ(inName,"_southEastTree") ) { return _southEastTree; }
		if (HX_FIELD_EQ(inName,"_southWestTree") ) { return _southWestTree; }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxQuadTree_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_min") ) { outValue = _min; return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_list") ) { outValue = _list; return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_object") ) { outValue = _object; return true;  }
		if (HX_FIELD_EQ(inName,"recycle") ) { outValue = recycle_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"divisions") ) { outValue = divisions; return true;  }
		if (HX_FIELD_EQ(inName,"_iterator") ) { outValue = _iterator; return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"clearCache") ) { outValue = clearCache_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_objectHullX") ) { outValue = _objectHullX; return true;  }
		if (HX_FIELD_EQ(inName,"_objectHullY") ) { outValue = _objectHullY; return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_useBothLists") ) { outValue = _useBothLists; return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_objectTopEdge") ) { outValue = _objectTopEdge; return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_objectLeftEdge") ) { outValue = _objectLeftEdge; return true;  }
		if (HX_FIELD_EQ(inName,"_notifyCallback") ) { outValue = _notifyCallback; return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_objectRightEdge") ) { outValue = _objectRightEdge; return true;  }
		if (HX_FIELD_EQ(inName,"_objectHullWidth") ) { outValue = _objectHullWidth; return true;  }
		if (HX_FIELD_EQ(inName,"_cachedTreesHead") ) { outValue = _cachedTreesHead; return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_objectBottomEdge") ) { outValue = _objectBottomEdge; return true;  }
		if (HX_FIELD_EQ(inName,"_objectHullHeight") ) { outValue = _objectHullHeight; return true;  }
		if (HX_FIELD_EQ(inName,"_checkObjectHullX") ) { outValue = _checkObjectHullX; return true;  }
		if (HX_FIELD_EQ(inName,"_checkObjectHullY") ) { outValue = _checkObjectHullY; return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_processingCallback") ) { outValue = _processingCallback; return true;  }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_checkObjectHullWidth") ) { outValue = _checkObjectHullWidth; return true;  }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_checkObjectHullHeight") ) { outValue = _checkObjectHullHeight; return true;  }
		if (HX_FIELD_EQ(inName,"_NUM_CACHED_QUAD_TREES") ) { outValue = _NUM_CACHED_QUAD_TREES; return true;  }
	}
	return false;
}

Dynamic FlxQuadTree_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::flixel::_system::FlxQuadTree >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"exists") ) { exists=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_headA") ) { _headA=inValue.Cast< ::flixel::_system::FlxLinkedList >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tailA") ) { _tailA=inValue.Cast< ::flixel::_system::FlxLinkedList >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_headB") ) { _headB=inValue.Cast< ::flixel::_system::FlxLinkedList >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tailB") ) { _tailB=inValue.Cast< ::flixel::_system::FlxLinkedList >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_topEdge") ) { _topEdge=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_leftEdge") ) { _leftEdge=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_rightEdge") ) { _rightEdge=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_halfWidth") ) { _halfWidth=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_midpointX") ) { _midpointX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_midpointY") ) { _midpointY=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_bottomEdge") ) { _bottomEdge=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_halfHeight") ) { _halfHeight=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_canSubdivide") ) { _canSubdivide=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_northWestTree") ) { _northWestTree=inValue.Cast< ::flixel::_system::FlxQuadTree >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_northEastTree") ) { _northEastTree=inValue.Cast< ::flixel::_system::FlxQuadTree >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_southEastTree") ) { _southEastTree=inValue.Cast< ::flixel::_system::FlxQuadTree >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_southWestTree") ) { _southWestTree=inValue.Cast< ::flixel::_system::FlxQuadTree >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxQuadTree_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_min") ) { _min=ioValue.Cast< int >(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_list") ) { _list=ioValue.Cast< int >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_object") ) { _object=ioValue.Cast< ::flixel::FlxObject >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"divisions") ) { divisions=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"_iterator") ) { _iterator=ioValue.Cast< ::flixel::_system::FlxLinkedList >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_objectHullX") ) { _objectHullX=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"_objectHullY") ) { _objectHullY=ioValue.Cast< Float >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_useBothLists") ) { _useBothLists=ioValue.Cast< bool >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_objectTopEdge") ) { _objectTopEdge=ioValue.Cast< Float >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_objectLeftEdge") ) { _objectLeftEdge=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"_notifyCallback") ) { _notifyCallback=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_objectRightEdge") ) { _objectRightEdge=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"_objectHullWidth") ) { _objectHullWidth=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"_cachedTreesHead") ) { _cachedTreesHead=ioValue.Cast< ::flixel::_system::FlxQuadTree >(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_objectBottomEdge") ) { _objectBottomEdge=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"_objectHullHeight") ) { _objectHullHeight=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"_checkObjectHullX") ) { _checkObjectHullX=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"_checkObjectHullY") ) { _checkObjectHullY=ioValue.Cast< Float >(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_processingCallback") ) { _processingCallback=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_checkObjectHullWidth") ) { _checkObjectHullWidth=ioValue.Cast< Float >(); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_checkObjectHullHeight") ) { _checkObjectHullHeight=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"_NUM_CACHED_QUAD_TREES") ) { _NUM_CACHED_QUAD_TREES=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void FlxQuadTree_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf"));
	outFields->push(HX_HCSTRING("_canSubdivide","\xa8","\xf5","\x58","\xf6"));
	outFields->push(HX_HCSTRING("_headA","\x62","\x1a","\xa0","\x20"));
	outFields->push(HX_HCSTRING("_tailA","\xf2","\x4e","\xd0","\x06"));
	outFields->push(HX_HCSTRING("_headB","\x63","\x1a","\xa0","\x20"));
	outFields->push(HX_HCSTRING("_tailB","\xf3","\x4e","\xd0","\x06"));
	outFields->push(HX_HCSTRING("_northWestTree","\x53","\x53","\x64","\xc5"));
	outFields->push(HX_HCSTRING("_northEastTree","\x21","\x72","\x82","\x19"));
	outFields->push(HX_HCSTRING("_southEastTree","\x69","\x27","\xe0","\xf8"));
	outFields->push(HX_HCSTRING("_southWestTree","\x9b","\x08","\xc2","\xa4"));
	outFields->push(HX_HCSTRING("_leftEdge","\x43","\x03","\xa0","\x91"));
	outFields->push(HX_HCSTRING("_rightEdge","\xfa","\x99","\x77","\x09"));
	outFields->push(HX_HCSTRING("_topEdge","\xf3","\x22","\xd8","\x1d"));
	outFields->push(HX_HCSTRING("_bottomEdge","\xe7","\xf9","\x7f","\xfa"));
	outFields->push(HX_HCSTRING("_halfWidth","\x14","\x6f","\xd7","\x6a"));
	outFields->push(HX_HCSTRING("_halfHeight","\x19","\x3b","\xf9","\xc7"));
	outFields->push(HX_HCSTRING("_midpointX","\x51","\x75","\xad","\xd7"));
	outFields->push(HX_HCSTRING("_midpointY","\x52","\x75","\xad","\xd7"));
	outFields->push(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(FlxQuadTree_obj,exists),HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf")},
	{hx::fsBool,(int)offsetof(FlxQuadTree_obj,_canSubdivide),HX_HCSTRING("_canSubdivide","\xa8","\xf5","\x58","\xf6")},
	{hx::fsObject /*::flixel::_system::FlxLinkedList*/ ,(int)offsetof(FlxQuadTree_obj,_headA),HX_HCSTRING("_headA","\x62","\x1a","\xa0","\x20")},
	{hx::fsObject /*::flixel::_system::FlxLinkedList*/ ,(int)offsetof(FlxQuadTree_obj,_tailA),HX_HCSTRING("_tailA","\xf2","\x4e","\xd0","\x06")},
	{hx::fsObject /*::flixel::_system::FlxLinkedList*/ ,(int)offsetof(FlxQuadTree_obj,_headB),HX_HCSTRING("_headB","\x63","\x1a","\xa0","\x20")},
	{hx::fsObject /*::flixel::_system::FlxLinkedList*/ ,(int)offsetof(FlxQuadTree_obj,_tailB),HX_HCSTRING("_tailB","\xf3","\x4e","\xd0","\x06")},
	{hx::fsObject /*::flixel::_system::FlxQuadTree*/ ,(int)offsetof(FlxQuadTree_obj,_northWestTree),HX_HCSTRING("_northWestTree","\x53","\x53","\x64","\xc5")},
	{hx::fsObject /*::flixel::_system::FlxQuadTree*/ ,(int)offsetof(FlxQuadTree_obj,_northEastTree),HX_HCSTRING("_northEastTree","\x21","\x72","\x82","\x19")},
	{hx::fsObject /*::flixel::_system::FlxQuadTree*/ ,(int)offsetof(FlxQuadTree_obj,_southEastTree),HX_HCSTRING("_southEastTree","\x69","\x27","\xe0","\xf8")},
	{hx::fsObject /*::flixel::_system::FlxQuadTree*/ ,(int)offsetof(FlxQuadTree_obj,_southWestTree),HX_HCSTRING("_southWestTree","\x9b","\x08","\xc2","\xa4")},
	{hx::fsFloat,(int)offsetof(FlxQuadTree_obj,_leftEdge),HX_HCSTRING("_leftEdge","\x43","\x03","\xa0","\x91")},
	{hx::fsFloat,(int)offsetof(FlxQuadTree_obj,_rightEdge),HX_HCSTRING("_rightEdge","\xfa","\x99","\x77","\x09")},
	{hx::fsFloat,(int)offsetof(FlxQuadTree_obj,_topEdge),HX_HCSTRING("_topEdge","\xf3","\x22","\xd8","\x1d")},
	{hx::fsFloat,(int)offsetof(FlxQuadTree_obj,_bottomEdge),HX_HCSTRING("_bottomEdge","\xe7","\xf9","\x7f","\xfa")},
	{hx::fsFloat,(int)offsetof(FlxQuadTree_obj,_halfWidth),HX_HCSTRING("_halfWidth","\x14","\x6f","\xd7","\x6a")},
	{hx::fsFloat,(int)offsetof(FlxQuadTree_obj,_halfHeight),HX_HCSTRING("_halfHeight","\x19","\x3b","\xf9","\xc7")},
	{hx::fsFloat,(int)offsetof(FlxQuadTree_obj,_midpointX),HX_HCSTRING("_midpointX","\x51","\x75","\xad","\xd7")},
	{hx::fsFloat,(int)offsetof(FlxQuadTree_obj,_midpointY),HX_HCSTRING("_midpointY","\x52","\x75","\xad","\xd7")},
	{hx::fsObject /*::flixel::_system::FlxQuadTree*/ ,(int)offsetof(FlxQuadTree_obj,next),HX_HCSTRING("next","\xf3","\x84","\x02","\x49")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &FlxQuadTree_obj::A_LIST,HX_HCSTRING("A_LIST","\x5c","\x74","\xb7","\xe2")},
	{hx::fsInt,(void *) &FlxQuadTree_obj::B_LIST,HX_HCSTRING("B_LIST","\xbb","\xd0","\x12","\x49")},
	{hx::fsInt,(void *) &FlxQuadTree_obj::divisions,HX_HCSTRING("divisions","\xa6","\x2a","\x2c","\x7f")},
	{hx::fsInt,(void *) &FlxQuadTree_obj::_min,HX_HCSTRING("_min","\x93","\x56","\x1e","\x3f")},
	{hx::fsObject /*::flixel::FlxObject*/ ,(void *) &FlxQuadTree_obj::_object,HX_HCSTRING("_object","\x5e","\x90","\xb6","\x83")},
	{hx::fsFloat,(void *) &FlxQuadTree_obj::_objectLeftEdge,HX_HCSTRING("_objectLeftEdge","\x62","\xe6","\x26","\x8d")},
	{hx::fsFloat,(void *) &FlxQuadTree_obj::_objectTopEdge,HX_HCSTRING("_objectTopEdge","\xb4","\x48","\x32","\x11")},
	{hx::fsFloat,(void *) &FlxQuadTree_obj::_objectRightEdge,HX_HCSTRING("_objectRightEdge","\xfb","\x71","\xf7","\x23")},
	{hx::fsFloat,(void *) &FlxQuadTree_obj::_objectBottomEdge,HX_HCSTRING("_objectBottomEdge","\xc6","\x22","\xdd","\x0f")},
	{hx::fsInt,(void *) &FlxQuadTree_obj::_list,HX_HCSTRING("_list","\x3d","\x38","\xc4","\xfa")},
	{hx::fsBool,(void *) &FlxQuadTree_obj::_useBothLists,HX_HCSTRING("_useBothLists","\xac","\x2f","\x5e","\x54")},
	{hx::fsObject /*Dynamic*/ ,(void *) &FlxQuadTree_obj::_processingCallback,HX_HCSTRING("_processingCallback","\xd7","\xbe","\x42","\x97")},
	{hx::fsObject /*Dynamic*/ ,(void *) &FlxQuadTree_obj::_notifyCallback,HX_HCSTRING("_notifyCallback","\x4d","\xea","\xc6","\x7e")},
	{hx::fsObject /*::flixel::_system::FlxLinkedList*/ ,(void *) &FlxQuadTree_obj::_iterator,HX_HCSTRING("_iterator","\x4d","\x41","\x30","\xdb")},
	{hx::fsFloat,(void *) &FlxQuadTree_obj::_objectHullX,HX_HCSTRING("_objectHullX","\xad","\x67","\x8d","\x04")},
	{hx::fsFloat,(void *) &FlxQuadTree_obj::_objectHullY,HX_HCSTRING("_objectHullY","\xae","\x67","\x8d","\x04")},
	{hx::fsFloat,(void *) &FlxQuadTree_obj::_objectHullWidth,HX_HCSTRING("_objectHullWidth","\xbb","\x5b","\x6c","\x63")},
	{hx::fsFloat,(void *) &FlxQuadTree_obj::_objectHullHeight,HX_HCSTRING("_objectHullHeight","\x92","\x60","\xb3","\x51")},
	{hx::fsFloat,(void *) &FlxQuadTree_obj::_checkObjectHullX,HX_HCSTRING("_checkObjectHullX","\x23","\x4c","\xdf","\xeb")},
	{hx::fsFloat,(void *) &FlxQuadTree_obj::_checkObjectHullY,HX_HCSTRING("_checkObjectHullY","\x24","\x4c","\xdf","\xeb")},
	{hx::fsFloat,(void *) &FlxQuadTree_obj::_checkObjectHullWidth,HX_HCSTRING("_checkObjectHullWidth","\x31","\xb3","\xc8","\x14")},
	{hx::fsFloat,(void *) &FlxQuadTree_obj::_checkObjectHullHeight,HX_HCSTRING("_checkObjectHullHeight","\x5c","\x90","\x23","\xd1")},
	{hx::fsInt,(void *) &FlxQuadTree_obj::_NUM_CACHED_QUAD_TREES,HX_HCSTRING("_NUM_CACHED_QUAD_TREES","\xa2","\x0a","\xd2","\x83")},
	{hx::fsObject /*::flixel::_system::FlxQuadTree*/ ,(void *) &FlxQuadTree_obj::_cachedTreesHead,HX_HCSTRING("_cachedTreesHead","\x54","\x73","\x90","\xd0")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf"),
	HX_HCSTRING("_canSubdivide","\xa8","\xf5","\x58","\xf6"),
	HX_HCSTRING("_headA","\x62","\x1a","\xa0","\x20"),
	HX_HCSTRING("_tailA","\xf2","\x4e","\xd0","\x06"),
	HX_HCSTRING("_headB","\x63","\x1a","\xa0","\x20"),
	HX_HCSTRING("_tailB","\xf3","\x4e","\xd0","\x06"),
	HX_HCSTRING("_northWestTree","\x53","\x53","\x64","\xc5"),
	HX_HCSTRING("_northEastTree","\x21","\x72","\x82","\x19"),
	HX_HCSTRING("_southEastTree","\x69","\x27","\xe0","\xf8"),
	HX_HCSTRING("_southWestTree","\x9b","\x08","\xc2","\xa4"),
	HX_HCSTRING("_leftEdge","\x43","\x03","\xa0","\x91"),
	HX_HCSTRING("_rightEdge","\xfa","\x99","\x77","\x09"),
	HX_HCSTRING("_topEdge","\xf3","\x22","\xd8","\x1d"),
	HX_HCSTRING("_bottomEdge","\xe7","\xf9","\x7f","\xfa"),
	HX_HCSTRING("_halfWidth","\x14","\x6f","\xd7","\x6a"),
	HX_HCSTRING("_halfHeight","\x19","\x3b","\xf9","\xc7"),
	HX_HCSTRING("_midpointX","\x51","\x75","\xad","\xd7"),
	HX_HCSTRING("_midpointY","\x52","\x75","\xad","\xd7"),
	HX_HCSTRING("next","\xf3","\x84","\x02","\x49"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("addObject","\xc0","\xb3","\x63","\xcd"),
	HX_HCSTRING("addToList","\x7a","\xbc","\x90","\x35"),
	HX_HCSTRING("execute","\x35","\x0a","\x0d","\xcc"),
	HX_HCSTRING("overlapNode","\x29","\x49","\xe9","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::A_LIST,"A_LIST");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::B_LIST,"B_LIST");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::divisions,"divisions");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::_min,"_min");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::_object,"_object");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::_objectLeftEdge,"_objectLeftEdge");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::_objectTopEdge,"_objectTopEdge");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::_objectRightEdge,"_objectRightEdge");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::_objectBottomEdge,"_objectBottomEdge");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::_list,"_list");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::_useBothLists,"_useBothLists");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::_processingCallback,"_processingCallback");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::_notifyCallback,"_notifyCallback");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::_iterator,"_iterator");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::_objectHullX,"_objectHullX");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::_objectHullY,"_objectHullY");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::_objectHullWidth,"_objectHullWidth");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::_objectHullHeight,"_objectHullHeight");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::_checkObjectHullX,"_checkObjectHullX");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::_checkObjectHullY,"_checkObjectHullY");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::_checkObjectHullWidth,"_checkObjectHullWidth");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::_checkObjectHullHeight,"_checkObjectHullHeight");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::_NUM_CACHED_QUAD_TREES,"_NUM_CACHED_QUAD_TREES");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::_cachedTreesHead,"_cachedTreesHead");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::A_LIST,"A_LIST");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::B_LIST,"B_LIST");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::divisions,"divisions");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::_min,"_min");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::_object,"_object");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::_objectLeftEdge,"_objectLeftEdge");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::_objectTopEdge,"_objectTopEdge");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::_objectRightEdge,"_objectRightEdge");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::_objectBottomEdge,"_objectBottomEdge");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::_list,"_list");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::_useBothLists,"_useBothLists");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::_processingCallback,"_processingCallback");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::_notifyCallback,"_notifyCallback");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::_iterator,"_iterator");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::_objectHullX,"_objectHullX");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::_objectHullY,"_objectHullY");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::_objectHullWidth,"_objectHullWidth");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::_objectHullHeight,"_objectHullHeight");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::_checkObjectHullX,"_checkObjectHullX");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::_checkObjectHullY,"_checkObjectHullY");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::_checkObjectHullWidth,"_checkObjectHullWidth");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::_checkObjectHullHeight,"_checkObjectHullHeight");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::_NUM_CACHED_QUAD_TREES,"_NUM_CACHED_QUAD_TREES");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::_cachedTreesHead,"_cachedTreesHead");
};

#endif

hx::Class FlxQuadTree_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("A_LIST","\x5c","\x74","\xb7","\xe2"),
	HX_HCSTRING("B_LIST","\xbb","\xd0","\x12","\x49"),
	HX_HCSTRING("divisions","\xa6","\x2a","\x2c","\x7f"),
	HX_HCSTRING("_min","\x93","\x56","\x1e","\x3f"),
	HX_HCSTRING("_object","\x5e","\x90","\xb6","\x83"),
	HX_HCSTRING("_objectLeftEdge","\x62","\xe6","\x26","\x8d"),
	HX_HCSTRING("_objectTopEdge","\xb4","\x48","\x32","\x11"),
	HX_HCSTRING("_objectRightEdge","\xfb","\x71","\xf7","\x23"),
	HX_HCSTRING("_objectBottomEdge","\xc6","\x22","\xdd","\x0f"),
	HX_HCSTRING("_list","\x3d","\x38","\xc4","\xfa"),
	HX_HCSTRING("_useBothLists","\xac","\x2f","\x5e","\x54"),
	HX_HCSTRING("_processingCallback","\xd7","\xbe","\x42","\x97"),
	HX_HCSTRING("_notifyCallback","\x4d","\xea","\xc6","\x7e"),
	HX_HCSTRING("_iterator","\x4d","\x41","\x30","\xdb"),
	HX_HCSTRING("_objectHullX","\xad","\x67","\x8d","\x04"),
	HX_HCSTRING("_objectHullY","\xae","\x67","\x8d","\x04"),
	HX_HCSTRING("_objectHullWidth","\xbb","\x5b","\x6c","\x63"),
	HX_HCSTRING("_objectHullHeight","\x92","\x60","\xb3","\x51"),
	HX_HCSTRING("_checkObjectHullX","\x23","\x4c","\xdf","\xeb"),
	HX_HCSTRING("_checkObjectHullY","\x24","\x4c","\xdf","\xeb"),
	HX_HCSTRING("_checkObjectHullWidth","\x31","\xb3","\xc8","\x14"),
	HX_HCSTRING("_checkObjectHullHeight","\x5c","\x90","\x23","\xd1"),
	HX_HCSTRING("_NUM_CACHED_QUAD_TREES","\xa2","\x0a","\xd2","\x83"),
	HX_HCSTRING("_cachedTreesHead","\x54","\x73","\x90","\xd0"),
	HX_HCSTRING("recycle","\x13","\x10","\x8c","\x37"),
	HX_HCSTRING("clearCache","\x75","\xd9","\x1e","\x16"),
	::String(null()) };

void FlxQuadTree_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.FlxQuadTree","\x0a","\x87","\x43","\xf2");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxQuadTree_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxQuadTree_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxQuadTree_obj >;
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

void FlxQuadTree_obj::__boot()
{
	A_LIST= (int)0;
	B_LIST= (int)1;
	_NUM_CACHED_QUAD_TREES= (int)0;
}

} // end namespace flixel
} // end namespace system
