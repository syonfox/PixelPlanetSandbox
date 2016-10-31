#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_PluginFrontEnd
#include <flixel/system/frontEnds/PluginFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTweenManager
#include <flixel/tweens/FlxTweenManager.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
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
namespace flixel{
namespace _system{
namespace frontEnds{

Void PluginFrontEnd_obj::__construct()
{
HX_STACK_FRAME("flixel.system.frontEnds.PluginFrontEnd","new",0x6ca9c2b1,"flixel.system.frontEnds.PluginFrontEnd.new","flixel/system/frontEnds/PluginFrontEnd.hx",7,0xbff70e9e)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(12)
	this->list = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(108)
	::flixel::util::FlxTimerManager tmp = ::flixel::util::FlxTimerManager_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(108)
	::flixel::util::FlxTimerManager tmp1 = ::flixel::util::FlxTimer_obj::globalManager = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(108)
	this->add_flixel_util_FlxTimerManager(tmp1);
	HX_STACK_LINE(109)
	::flixel::tweens::FlxTweenManager tmp2 = ::flixel::tweens::FlxTweenManager_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(109)
	::flixel::tweens::FlxTweenManager tmp3 = ::flixel::tweens::FlxTween_obj::globalManager = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(109)
	this->add_flixel_tweens_FlxTweenManager(tmp3);
}
;
	return null();
}

//PluginFrontEnd_obj::~PluginFrontEnd_obj() { }

Dynamic PluginFrontEnd_obj::__CreateEmpty() { return  new PluginFrontEnd_obj; }
hx::ObjectPtr< PluginFrontEnd_obj > PluginFrontEnd_obj::__new()
{  hx::ObjectPtr< PluginFrontEnd_obj > _result_ = new PluginFrontEnd_obj();
	_result_->__construct();
	return _result_;}

Dynamic PluginFrontEnd_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PluginFrontEnd_obj > _result_ = new PluginFrontEnd_obj();
	_result_->__construct();
	return _result_;}

::flixel::tweens::FlxTweenManager PluginFrontEnd_obj::add_flixel_tweens_FlxTweenManager( ::flixel::tweens::FlxTweenManager Plugin){
	HX_STACK_FRAME("flixel.system.frontEnds.PluginFrontEnd","add_flixel_tweens_FlxTweenManager",0xfdb05bd3,"flixel.system.frontEnds.PluginFrontEnd.add_flixel_tweens_FlxTweenManager","flixel/system/frontEnds/PluginFrontEnd.hx",22,0xbff70e9e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Plugin,"Plugin")
	HX_STACK_LINE(24)
	{
		HX_STACK_LINE(24)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(24)
		Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(24)
		while((true)){
			HX_STACK_LINE(24)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(24)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(24)
			if ((tmp1)){
				HX_STACK_LINE(24)
				break;
			}
			HX_STACK_LINE(24)
			::flixel::FlxBasic tmp2 = _g1->__get(_g).StaticCast< ::flixel::FlxBasic >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(24)
			::flixel::FlxBasic plugin = tmp2;		HX_STACK_VAR(plugin,"plugin");
			HX_STACK_LINE(24)
			++(_g);
			HX_STACK_LINE(26)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(26)
			{
				HX_STACK_LINE(26)
				bool Simple = true;		HX_STACK_VAR(Simple,"Simple");
				HX_STACK_LINE(26)
				::flixel::tweens::FlxTweenManager tmp4 = Plugin;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(26)
				bool tmp5 = Simple;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(26)
				::String tmp6 = ::flixel::util::FlxStringUtil_obj::getClassName(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(26)
				::flixel::FlxBasic tmp7 = plugin;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(26)
				bool tmp8 = Simple;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(26)
				::String tmp9 = ::flixel::util::FlxStringUtil_obj::getClassName(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(26)
				tmp3 = (tmp6 == tmp9);
			}
			HX_STACK_LINE(26)
			if ((tmp3)){
				HX_STACK_LINE(28)
				::flixel::tweens::FlxTweenManager tmp4 = Plugin;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(28)
				return tmp4;
			}
		}
	}
	HX_STACK_LINE(33)
	::flixel::tweens::FlxTweenManager tmp = Plugin;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(33)
	this->list->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp);
	HX_STACK_LINE(34)
	::flixel::tweens::FlxTweenManager tmp1 = Plugin;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(34)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(PluginFrontEnd_obj,add_flixel_tweens_FlxTweenManager,return )

::flixel::util::FlxTimerManager PluginFrontEnd_obj::add_flixel_util_FlxTimerManager( ::flixel::util::FlxTimerManager Plugin){
	HX_STACK_FRAME("flixel.system.frontEnds.PluginFrontEnd","add_flixel_util_FlxTimerManager",0x16f6f493,"flixel.system.frontEnds.PluginFrontEnd.add_flixel_util_FlxTimerManager","flixel/system/frontEnds/PluginFrontEnd.hx",22,0xbff70e9e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Plugin,"Plugin")
	HX_STACK_LINE(24)
	{
		HX_STACK_LINE(24)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(24)
		Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(24)
		while((true)){
			HX_STACK_LINE(24)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(24)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(24)
			if ((tmp1)){
				HX_STACK_LINE(24)
				break;
			}
			HX_STACK_LINE(24)
			::flixel::FlxBasic tmp2 = _g1->__get(_g).StaticCast< ::flixel::FlxBasic >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(24)
			::flixel::FlxBasic plugin = tmp2;		HX_STACK_VAR(plugin,"plugin");
			HX_STACK_LINE(24)
			++(_g);
			HX_STACK_LINE(26)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(26)
			{
				HX_STACK_LINE(26)
				bool Simple = true;		HX_STACK_VAR(Simple,"Simple");
				HX_STACK_LINE(26)
				::flixel::util::FlxTimerManager tmp4 = Plugin;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(26)
				bool tmp5 = Simple;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(26)
				::String tmp6 = ::flixel::util::FlxStringUtil_obj::getClassName(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(26)
				::flixel::FlxBasic tmp7 = plugin;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(26)
				bool tmp8 = Simple;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(26)
				::String tmp9 = ::flixel::util::FlxStringUtil_obj::getClassName(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(26)
				tmp3 = (tmp6 == tmp9);
			}
			HX_STACK_LINE(26)
			if ((tmp3)){
				HX_STACK_LINE(28)
				::flixel::util::FlxTimerManager tmp4 = Plugin;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(28)
				return tmp4;
			}
		}
	}
	HX_STACK_LINE(33)
	::flixel::util::FlxTimerManager tmp = Plugin;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(33)
	this->list->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp);
	HX_STACK_LINE(34)
	::flixel::util::FlxTimerManager tmp1 = Plugin;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(34)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(PluginFrontEnd_obj,add_flixel_util_FlxTimerManager,return )

::flixel::FlxBasic PluginFrontEnd_obj::get( ::hx::Class ClassType){
	HX_STACK_FRAME("flixel.system.frontEnds.PluginFrontEnd","get",0x6ca472e7,"flixel.system.frontEnds.PluginFrontEnd.get","flixel/system/frontEnds/PluginFrontEnd.hx",44,0xbff70e9e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ClassType,"ClassType")
	HX_STACK_LINE(45)
	{
		HX_STACK_LINE(45)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(45)
		Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(45)
		while((true)){
			HX_STACK_LINE(45)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(45)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(45)
			if ((tmp1)){
				HX_STACK_LINE(45)
				break;
			}
			HX_STACK_LINE(45)
			::flixel::FlxBasic tmp2 = _g1->__get(_g).StaticCast< ::flixel::FlxBasic >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(45)
			::flixel::FlxBasic plugin = tmp2;		HX_STACK_VAR(plugin,"plugin");
			HX_STACK_LINE(45)
			++(_g);
			HX_STACK_LINE(47)
			::flixel::FlxBasic tmp3 = plugin;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(47)
			::hx::Class tmp4 = ClassType;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(47)
			bool tmp5 = ::Std_obj::is(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(47)
			if ((tmp5)){
				HX_STACK_LINE(49)
				::flixel::FlxBasic tmp6 = plugin;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(49)
				return tmp6;
			}
		}
	}
	HX_STACK_LINE(53)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PluginFrontEnd_obj,get,return )

::flixel::FlxBasic PluginFrontEnd_obj::remove( ::flixel::FlxBasic Plugin){
	HX_STACK_FRAME("flixel.system.frontEnds.PluginFrontEnd","remove",0x66803293,"flixel.system.frontEnds.PluginFrontEnd.remove","flixel/system/frontEnds/PluginFrontEnd.hx",63,0xbff70e9e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Plugin,"Plugin")
	HX_STACK_LINE(65)
	int tmp = this->list->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(65)
	int tmp1 = (tmp - (int)1);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(65)
	int i = tmp1;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(67)
	while((true)){
		HX_STACK_LINE(67)
		bool tmp2 = (i >= (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(67)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(67)
		if ((tmp3)){
			HX_STACK_LINE(67)
			break;
		}
		HX_STACK_LINE(69)
		::flixel::FlxBasic tmp4 = this->list->__GetItem(i);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(69)
		::flixel::FlxBasic tmp5 = Plugin;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(69)
		bool tmp6 = (tmp4 == tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(69)
		if ((tmp6)){
			HX_STACK_LINE(71)
			int tmp7 = i;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(71)
			this->list->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp7,(int)1);
			HX_STACK_LINE(72)
			::flixel::FlxBasic tmp8 = Plugin;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(72)
			return tmp8;
		}
		HX_STACK_LINE(74)
		(i)--;
	}
	HX_STACK_LINE(77)
	::flixel::FlxBasic tmp2 = Plugin;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(77)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(PluginFrontEnd_obj,remove,return )

bool PluginFrontEnd_obj::removeType( ::hx::Class ClassType){
	HX_STACK_FRAME("flixel.system.frontEnds.PluginFrontEnd","removeType",0x8b4a96ed,"flixel.system.frontEnds.PluginFrontEnd.removeType","flixel/system/frontEnds/PluginFrontEnd.hx",87,0xbff70e9e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ClassType,"ClassType")
	HX_STACK_LINE(89)
	bool results = false;		HX_STACK_VAR(results,"results");
	HX_STACK_LINE(90)
	int tmp = this->list->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(90)
	int tmp1 = (tmp - (int)1);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(90)
	int i = tmp1;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(92)
	while((true)){
		HX_STACK_LINE(92)
		bool tmp2 = (i >= (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(92)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(92)
		if ((tmp3)){
			HX_STACK_LINE(92)
			break;
		}
		HX_STACK_LINE(94)
		::flixel::FlxBasic tmp4 = this->list->__GetItem(i);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(94)
		::hx::Class tmp5 = ClassType;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(94)
		bool tmp6 = ::Std_obj::is(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(94)
		if ((tmp6)){
			HX_STACK_LINE(96)
			int tmp7 = i;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(96)
			this->list->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp7,(int)1);
			HX_STACK_LINE(97)
			results = true;
		}
		HX_STACK_LINE(99)
		(i)--;
	}
	HX_STACK_LINE(102)
	bool tmp2 = results;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(102)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(PluginFrontEnd_obj,removeType,return )

Void PluginFrontEnd_obj::update( Float elapsed){
{
		HX_STACK_FRAME("flixel.system.frontEnds.PluginFrontEnd","update",0xe8fd1c58,"flixel.system.frontEnds.PluginFrontEnd.update","flixel/system/frontEnds/PluginFrontEnd.hx",118,0xbff70e9e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(118)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(118)
		Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(118)
		while((true)){
			HX_STACK_LINE(118)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(118)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(118)
			if ((tmp1)){
				HX_STACK_LINE(118)
				break;
			}
			HX_STACK_LINE(118)
			::flixel::FlxBasic tmp2 = _g1->__get(_g).StaticCast< ::flixel::FlxBasic >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(118)
			::flixel::FlxBasic plugin = tmp2;		HX_STACK_VAR(plugin,"plugin");
			HX_STACK_LINE(118)
			++(_g);
			HX_STACK_LINE(120)
			bool tmp3 = plugin->exists;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(120)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(120)
			if ((tmp3)){
				HX_STACK_LINE(120)
				tmp4 = plugin->active;
			}
			else{
				HX_STACK_LINE(120)
				tmp4 = false;
			}
			HX_STACK_LINE(120)
			if ((tmp4)){
				HX_STACK_LINE(122)
				Float tmp5 = elapsed;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(122)
				plugin->update(tmp5);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PluginFrontEnd_obj,update,(void))

Void PluginFrontEnd_obj::draw( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.PluginFrontEnd","draw",0xa14e4093,"flixel.system.frontEnds.PluginFrontEnd.draw","flixel/system/frontEnds/PluginFrontEnd.hx",133,0xbff70e9e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(133)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(133)
		Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(133)
		while((true)){
			HX_STACK_LINE(133)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(133)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(133)
			if ((tmp1)){
				HX_STACK_LINE(133)
				break;
			}
			HX_STACK_LINE(133)
			::flixel::FlxBasic tmp2 = _g1->__get(_g).StaticCast< ::flixel::FlxBasic >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(133)
			::flixel::FlxBasic plugin = tmp2;		HX_STACK_VAR(plugin,"plugin");
			HX_STACK_LINE(133)
			++(_g);
			HX_STACK_LINE(135)
			bool tmp3 = plugin->exists;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(135)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(135)
			if ((tmp3)){
				HX_STACK_LINE(135)
				tmp4 = plugin->visible;
			}
			else{
				HX_STACK_LINE(135)
				tmp4 = false;
			}
			HX_STACK_LINE(135)
			if ((tmp4)){
				HX_STACK_LINE(137)
				plugin->draw();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PluginFrontEnd_obj,draw,(void))


PluginFrontEnd_obj::PluginFrontEnd_obj()
{
}

void PluginFrontEnd_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PluginFrontEnd);
	HX_MARK_MEMBER_NAME(list,"list");
	HX_MARK_END_CLASS();
}

void PluginFrontEnd_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(list,"list");
}

Dynamic PluginFrontEnd_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { return list; }
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"removeType") ) { return removeType_dyn(); }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"add_flixel_util_FlxTimerManager") ) { return add_flixel_util_FlxTimerManager_dyn(); }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"add_flixel_tweens_FlxTweenManager") ) { return add_flixel_tweens_FlxTweenManager_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PluginFrontEnd_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { list=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PluginFrontEnd_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(PluginFrontEnd_obj,list),HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("add_flixel_tweens_FlxTweenManager","\xc2","\x6b","\x6c","\x9d"),
	HX_HCSTRING("add_flixel_util_FlxTimerManager","\xc2","\xda","\x89","\x3f"),
	HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("removeType","\x1e","\x2d","\x28","\xca"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("draw","\x04","\x2c","\x70","\x42"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PluginFrontEnd_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PluginFrontEnd_obj::__mClass,"__mClass");
};

#endif

hx::Class PluginFrontEnd_obj::__mClass;

void PluginFrontEnd_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.frontEnds.PluginFrontEnd","\x3f","\x96","\xac","\x26");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< PluginFrontEnd_obj >;
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
} // end namespace system
} // end namespace frontEnds
