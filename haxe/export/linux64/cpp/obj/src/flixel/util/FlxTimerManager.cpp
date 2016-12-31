#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SignalFrontEnd
#include <flixel/system/frontEnds/SignalFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxArrayUtil
#include <flixel/util/FlxArrayUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimerManager
#include <flixel/util/FlxTimerManager.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxSignal
#include <flixel/util/IFlxSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxBaseSignal
#include <flixel/util/_FlxSignal/FlxBaseSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal0
#include <flixel/util/_FlxSignal/FlxSignal0.h>
#endif
namespace flixel{
namespace util{

Void FlxTimerManager_obj::__construct()
{
HX_STACK_FRAME("flixel.util.FlxTimerManager","new",0x367f0c72,"flixel.util.FlxTimerManager.new","flixel/util/FlxTimer.hx",219,0x0a681e11)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(221)
	this->_timers = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(228)
	super::__construct();
	HX_STACK_LINE(231)
	this->set_visible(false);
	HX_STACK_LINE(233)
	{
		HX_STACK_LINE(233)
		::flixel::_system::frontEnds::SignalFrontEnd tmp = ::flixel::FlxG_obj::signals;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(233)
		Dynamic tmp1 = this->clear_dyn();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(233)
		tmp->__Field(HX_HCSTRING("stateSwitched","\x84","\x32","\x02","\x37"), hx::paccDynamic )->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )(tmp1);
	}
}
;
	return null();
}

//FlxTimerManager_obj::~FlxTimerManager_obj() { }

Dynamic FlxTimerManager_obj::__CreateEmpty() { return  new FlxTimerManager_obj; }
hx::ObjectPtr< FlxTimerManager_obj > FlxTimerManager_obj::__new()
{  hx::ObjectPtr< FlxTimerManager_obj > _result_ = new FlxTimerManager_obj();
	_result_->__construct();
	return _result_;}

Dynamic FlxTimerManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxTimerManager_obj > _result_ = new FlxTimerManager_obj();
	_result_->__construct();
	return _result_;}

Void FlxTimerManager_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.util.FlxTimerManager","destroy",0xb435da0c,"flixel.util.FlxTimerManager.destroy","flixel/util/FlxTimer.hx",240,0x0a681e11)
		HX_STACK_THIS(this)
		HX_STACK_LINE(241)
		::flixel::util::FlxArrayUtil_obj::clearArray(this->_timers,null());
		HX_STACK_LINE(242)
		this->_timers = null();
		HX_STACK_LINE(243)
		{
			HX_STACK_LINE(243)
			::flixel::_system::frontEnds::SignalFrontEnd tmp = ::flixel::FlxG_obj::signals;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(243)
			Dynamic tmp1 = this->clear_dyn();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(243)
			tmp->__Field(HX_HCSTRING("stateSwitched","\x84","\x32","\x02","\x37"), hx::paccDynamic )->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(tmp1);
		}
		HX_STACK_LINE(244)
		this->super::destroy();
	}
return null();
}


Void FlxTimerManager_obj::update( Float elapsed){
{
		HX_STACK_FRAME("flixel.util.FlxTimerManager","update",0xf26da137,"flixel.util.FlxTimerManager.update","flixel/util/FlxTimer.hx",252,0x0a681e11)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(253)
		Array< ::Dynamic > loopedTimers = null();		HX_STACK_VAR(loopedTimers,"loopedTimers");
		HX_STACK_LINE(255)
		{
			HX_STACK_LINE(255)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(255)
			Array< ::Dynamic > _g1 = this->_timers;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(255)
			while((true)){
				HX_STACK_LINE(255)
				bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(255)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(255)
				if ((tmp1)){
					HX_STACK_LINE(255)
					break;
				}
				HX_STACK_LINE(255)
				::flixel::util::FlxTimer tmp2 = _g1->__get(_g).StaticCast< ::flixel::util::FlxTimer >();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(255)
				::flixel::util::FlxTimer timer = tmp2;		HX_STACK_VAR(timer,"timer");
				HX_STACK_LINE(255)
				++(_g);
				HX_STACK_LINE(257)
				bool tmp3 = timer->active;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(257)
				bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(257)
				bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(257)
				if ((tmp4)){
					HX_STACK_LINE(257)
					bool tmp6 = timer->finished;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(257)
					bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(257)
					bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(257)
					tmp5 = !(tmp8);
				}
				else{
					HX_STACK_LINE(257)
					tmp5 = false;
				}
				HX_STACK_LINE(257)
				bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(257)
				if ((tmp5)){
					HX_STACK_LINE(257)
					tmp6 = (timer->time >= (int)0);
				}
				else{
					HX_STACK_LINE(257)
					tmp6 = false;
				}
				HX_STACK_LINE(257)
				if ((tmp6)){
					HX_STACK_LINE(259)
					int timerLoops = timer->_loopsCounter;		HX_STACK_VAR(timerLoops,"timerLoops");
					HX_STACK_LINE(260)
					Float tmp7 = elapsed;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(260)
					timer->update(tmp7);
					HX_STACK_LINE(262)
					bool tmp8 = (timerLoops != timer->_loopsCounter);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(262)
					if ((tmp8)){
						HX_STACK_LINE(264)
						bool tmp9 = (loopedTimers == null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(264)
						if ((tmp9)){
							HX_STACK_LINE(265)
							loopedTimers = Array_obj< ::Dynamic >::__new();
						}
						HX_STACK_LINE(267)
						::flixel::util::FlxTimer tmp10 = timer;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(267)
						loopedTimers->push(tmp10);
					}
				}
			}
		}
		HX_STACK_LINE(272)
		bool tmp = (loopedTimers != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(272)
		if ((tmp)){
			HX_STACK_LINE(274)
			while((true)){
				HX_STACK_LINE(274)
				bool tmp1 = (loopedTimers->length > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(274)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(274)
				if ((tmp2)){
					HX_STACK_LINE(274)
					break;
				}
				HX_STACK_LINE(276)
				::flixel::util::FlxTimer tmp3 = loopedTimers->shift().StaticCast< ::flixel::util::FlxTimer >();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(276)
				tmp3->onLoopFinished();
			}
		}
	}
return null();
}


Void FlxTimerManager_obj::add( ::flixel::util::FlxTimer Timer){
{
		HX_STACK_FRAME("flixel.util.FlxTimerManager","add",0x36752e33,"flixel.util.FlxTimerManager.add","flixel/util/FlxTimer.hx",289,0x0a681e11)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Timer,"Timer")
		HX_STACK_LINE(290)
		::flixel::util::FlxTimer tmp = Timer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(290)
		this->_timers->push(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTimerManager_obj,add,(void))

Void FlxTimerManager_obj::remove( ::flixel::util::FlxTimer Timer){
{
		HX_STACK_FRAME("flixel.util.FlxTimerManager","remove",0x6ff0b772,"flixel.util.FlxTimerManager.remove","flixel/util/FlxTimer.hx",302,0x0a681e11)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Timer,"Timer")
		HX_STACK_LINE(302)
		Array< ::Dynamic > array = this->_timers;		HX_STACK_VAR(array,"array");
		HX_STACK_LINE(302)
		::flixel::util::FlxTimer tmp = Timer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(302)
		int tmp1 = array->indexOf(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(302)
		int index = tmp1;		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(302)
		bool tmp2 = (index != (int)-1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(302)
		if ((tmp2)){
			HX_STACK_LINE(302)
			int tmp3 = (array->length - (int)1);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(302)
			::flixel::util::FlxTimer tmp4 = array->__get(tmp3).StaticCast< ::flixel::util::FlxTimer >();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(302)
			array[index] = tmp4;
			HX_STACK_LINE(302)
			array->pop().StaticCast< ::flixel::util::FlxTimer >();
			HX_STACK_LINE(302)
			array;
		}
		else{
			HX_STACK_LINE(302)
			array;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTimerManager_obj,remove,(void))

Void FlxTimerManager_obj::completeAll( ){
{
		HX_STACK_FRAME("flixel.util.FlxTimerManager","completeAll",0x4a72c7fa,"flixel.util.FlxTimerManager.completeAll","flixel/util/FlxTimer.hx",311,0x0a681e11)
		HX_STACK_THIS(this)
		HX_STACK_LINE(312)
		Array< ::Dynamic > timersToFinish = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(timersToFinish,"timersToFinish");
		HX_STACK_LINE(313)
		{
			HX_STACK_LINE(313)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(313)
			Array< ::Dynamic > _g1 = this->_timers;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(313)
			while((true)){
				HX_STACK_LINE(313)
				bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(313)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(313)
				if ((tmp1)){
					HX_STACK_LINE(313)
					break;
				}
				HX_STACK_LINE(313)
				::flixel::util::FlxTimer tmp2 = _g1->__get(_g).StaticCast< ::flixel::util::FlxTimer >();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(313)
				::flixel::util::FlxTimer timer = tmp2;		HX_STACK_VAR(timer,"timer");
				HX_STACK_LINE(313)
				++(_g);
				HX_STACK_LINE(314)
				bool tmp3 = (timer->loops > (int)0);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(314)
				bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(314)
				if ((tmp3)){
					HX_STACK_LINE(314)
					tmp4 = timer->active;
				}
				else{
					HX_STACK_LINE(314)
					tmp4 = false;
				}
				HX_STACK_LINE(314)
				if ((tmp4)){
					HX_STACK_LINE(315)
					::flixel::util::FlxTimer tmp5 = timer;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(315)
					timersToFinish->push(tmp5);
				}
			}
		}
		HX_STACK_LINE(317)
		{
			HX_STACK_LINE(317)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(317)
			while((true)){
				HX_STACK_LINE(317)
				bool tmp = (_g < timersToFinish->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(317)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(317)
				if ((tmp1)){
					HX_STACK_LINE(317)
					break;
				}
				HX_STACK_LINE(317)
				::flixel::util::FlxTimer tmp2 = timersToFinish->__get(_g).StaticCast< ::flixel::util::FlxTimer >();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(317)
				::flixel::util::FlxTimer timer = tmp2;		HX_STACK_VAR(timer,"timer");
				HX_STACK_LINE(317)
				++(_g);
				HX_STACK_LINE(319)
				while((true)){
					HX_STACK_LINE(319)
					bool tmp3 = timer->finished;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(319)
					bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(319)
					bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(319)
					if ((tmp5)){
						HX_STACK_LINE(319)
						break;
					}
					HX_STACK_LINE(321)
					Float tmp6 = (timer->time - timer->_timeCounter);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(321)
					timer->update(tmp6);
					HX_STACK_LINE(322)
					timer->onLoopFinished();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTimerManager_obj,completeAll,(void))

Void FlxTimerManager_obj::clear( ){
{
		HX_STACK_FRAME("flixel.util.FlxTimerManager","clear",0xccdb561f,"flixel.util.FlxTimerManager.clear","flixel/util/FlxTimer.hx",333,0x0a681e11)
		HX_STACK_THIS(this)
		HX_STACK_LINE(333)
		::flixel::util::FlxArrayUtil_obj::clearArray(this->_timers,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTimerManager_obj,clear,(void))

Void FlxTimerManager_obj::forEach( Dynamic Function){
{
		HX_STACK_FRAME("flixel.util.FlxTimerManager","forEach",0x546dd6bc,"flixel.util.FlxTimerManager.forEach","flixel/util/FlxTimer.hx",344,0x0a681e11)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Function,"Function")
		HX_STACK_LINE(344)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(344)
		Array< ::Dynamic > _g1 = this->_timers;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(344)
		while((true)){
			HX_STACK_LINE(344)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(344)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(344)
			if ((tmp1)){
				HX_STACK_LINE(344)
				break;
			}
			HX_STACK_LINE(344)
			::flixel::util::FlxTimer tmp2 = _g1->__get(_g).StaticCast< ::flixel::util::FlxTimer >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(344)
			::flixel::util::FlxTimer timer = tmp2;		HX_STACK_VAR(timer,"timer");
			HX_STACK_LINE(344)
			++(_g);
			HX_STACK_LINE(345)
			::flixel::util::FlxTimer tmp3 = timer;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(345)
			Function(tmp3).Cast< Void >();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTimerManager_obj,forEach,(void))


FlxTimerManager_obj::FlxTimerManager_obj()
{
}

void FlxTimerManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTimerManager);
	HX_MARK_MEMBER_NAME(_timers,"_timers");
	::flixel::FlxBasic_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxTimerManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_timers,"_timers");
	::flixel::FlxBasic_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxTimerManager_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_timers") ) { return _timers; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"forEach") ) { return forEach_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"completeAll") ) { return completeAll_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxTimerManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_timers") ) { _timers=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTimerManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_timers","\xad","\x1e","\x49","\x8d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxTimerManager_obj,_timers),HX_HCSTRING("_timers","\xad","\x1e","\x49","\x8d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_timers","\xad","\x1e","\x49","\x8d"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("completeAll","\xe8","\x29","\xb2","\x07"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("forEach","\xaa","\x29","\xbe","\xc4"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTimerManager_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTimerManager_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxTimerManager_obj::__mClass;

void FlxTimerManager_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.util.FlxTimerManager","\x80","\xab","\xc7","\xef");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxTimerManager_obj >;
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
} // end namespace util
