#include <hxcpp.h>

#ifndef INCLUDED_MenuState
#include <MenuState.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextBorderStyle
#include <flixel/text/FlxTextBorderStyle.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxButton
#include <flixel/ui/FlxButton.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxTypedButton_flixel_text_FlxText
#include <flixel/ui/FlxTypedButton_flixel_text_FlxText.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#include <openfl/_legacy/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif

Void MenuState_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("MenuState","new",0xe563b1c4,"MenuState.new","MenuState.hx",13,0xdfbcb22c)
HX_STACK_THIS(this)
HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(13)
	Dynamic tmp = MaxSize;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(13)
	super::__construct(tmp);
}
;
	return null();
}

//MenuState_obj::~MenuState_obj() { }

Dynamic MenuState_obj::__CreateEmpty() { return  new MenuState_obj; }
hx::ObjectPtr< MenuState_obj > MenuState_obj::__new(Dynamic MaxSize)
{  hx::ObjectPtr< MenuState_obj > _result_ = new MenuState_obj();
	_result_->__construct(MaxSize);
	return _result_;}

Dynamic MenuState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MenuState_obj > _result_ = new MenuState_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void MenuState_obj::create( ){
{
		HX_STACK_FRAME("MenuState","create",0xe57b7c18,"MenuState.create","MenuState.hx",14,0xdfbcb22c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(15)
		int tmp = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(15)
		Float tmp1 = (Float(tmp) / Float((int)2));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(15)
		int tmp2 = ::Std_obj::_int(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(15)
		int tmp3 = (tmp2 - (int)32);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(16)
		Dynamic tmp4 = this->clickPlay_dyn();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(15)
		::flixel::ui::FlxButton tmp5 = this->getFlxButton(tmp3,(int)100,HX_HCSTRING("assets/images/btn_gor_32x64.png","\x4f","\xfc","\x6a","\x39"),(int)64,(int)32,HX_HCSTRING("Play","\x14","\x5a","\x33","\x35"),null(),null(),HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"),tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(15)
		::flixel::ui::FlxButton btnPlay = tmp5;		HX_STACK_VAR(btnPlay,"btnPlay");
		HX_STACK_LINE(17)
		::flixel::ui::FlxButton tmp6 = btnPlay;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(17)
		this->add(tmp6);
		HX_STACK_LINE(18)
		this->super::create();
	}
return null();
}


Void MenuState_obj::update( Float elapsed){
{
		HX_STACK_FRAME("MenuState","update",0xf0719b25,"MenuState.update","MenuState.hx",21,0xdfbcb22c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(22)
		Float tmp = elapsed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(22)
		this->super::update(tmp);
	}
return null();
}


::flixel::text::FlxText MenuState_obj::getFlxText( int x,int y,int w,Dynamic __o_s,Dynamic __o_color,::String __o_text,::String __o_alignment){
Dynamic s = __o_s.Default(18);
Dynamic color = __o_color.Default(-16744448);
::String text = __o_text.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
::String alignment = __o_alignment.Default(HX_HCSTRING("left","\x07","\x08","\xb0","\x47"));
	HX_STACK_FRAME("MenuState","getFlxText",0x78353765,"MenuState.getFlxText","MenuState.hx",30,0xdfbcb22c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(w,"w")
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(text,"text")
	HX_STACK_ARG(alignment,"alignment")
{
		HX_STACK_LINE(32)
		::flixel::text::FlxText tmp = ::flixel::text::FlxText_obj::__new(x,y,w,null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(32)
		::flixel::text::FlxText txt = tmp;		HX_STACK_VAR(txt,"txt");
		HX_STACK_LINE(33)
		Dynamic tmp1 = s;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(33)
		Dynamic tmp2 = color;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(33)
		::String tmp3 = alignment;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(33)
		txt->setFormat(HX_HCSTRING("assets/fonts/Hack-Regular.ttf","\x5f","\xb1","\x24","\xad"),tmp1,tmp2,tmp3,null(),null(),null());
		HX_STACK_LINE(34)
		::String tmp4 = text;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(34)
		txt->set_text(tmp4);
		HX_STACK_LINE(35)
		::String tmp5 = (x + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(35)
		int tmp6 = y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(35)
		::String tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(35)
		::String tmp8 = (tmp7 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(35)
		int tmp9 = w;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(35)
		::String tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(35)
		::String tmp11 = (tmp10 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(35)
		::String tmp12 = text;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(35)
		::String tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(35)
		Dynamic tmp14 = hx::SourceInfo(HX_HCSTRING("MenuState.hx","\x2c","\xb2","\xbc","\xdf"),35,HX_HCSTRING("MenuState","\xd2","\xbf","\xb6","\xc0"),HX_HCSTRING("getFlxText","\x49","\x64","\x62","\x5f"));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(35)
		::haxe::Log_obj::trace(tmp13,tmp14);
		HX_STACK_LINE(36)
		::flixel::text::FlxText tmp15 = txt;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(36)
		return tmp15;
	}
}


HX_DEFINE_DYNAMIC_FUNC7(MenuState_obj,getFlxText,return )

::flixel::ui::FlxButton MenuState_obj::getFlxButton( int x,int y,::String file,int w,int h,::String __o_label,Dynamic __o_s,Dynamic __o_color,::String __o_alignment,Dynamic onClick){
::String label = __o_label.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
Dynamic s = __o_s.Default(18);
Dynamic color = __o_color.Default(-16777216);
::String alignment = __o_alignment.Default(HX_HCSTRING("left","\x07","\x08","\xb0","\x47"));
	HX_STACK_FRAME("MenuState","getFlxButton",0xdad5eaaa,"MenuState.getFlxButton","MenuState.hx",43,0xdfbcb22c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(file,"file")
	HX_STACK_ARG(w,"w")
	HX_STACK_ARG(h,"h")
	HX_STACK_ARG(label,"label")
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(alignment,"alignment")
	HX_STACK_ARG(onClick,"onClick")
{
		HX_STACK_LINE(45)
		::flixel::ui::FlxButton tmp = ::flixel::ui::FlxButton_obj::__new(x,y,label,onClick);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(45)
		::flixel::ui::FlxButton btn = tmp;		HX_STACK_VAR(btn,"btn");
		HX_STACK_LINE(46)
		::String tmp1 = file;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(46)
		int tmp2 = w;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(46)
		int tmp3 = h;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(46)
		btn->loadGraphic(tmp1,true,tmp2,tmp3,null(),null());
		HX_STACK_LINE(47)
		Dynamic tmp4 = s;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(47)
		Dynamic tmp5 = color;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(47)
		::String tmp6 = alignment;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(47)
		btn->label->setFormat(HX_HCSTRING("assets/fonts/Hack-Regular.ttf","\x5f","\xb1","\x24","\xad"),tmp4,tmp5,tmp6,null(),null(),null());
		HX_STACK_LINE(49)
		::flixel::ui::FlxButton tmp7 = btn;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(49)
		return tmp7;
	}
}


HX_DEFINE_DYNAMIC_FUNC10(MenuState_obj,getFlxButton,return )

Void MenuState_obj::clickPlay( ){
{
		HX_STACK_FRAME("MenuState","clickPlay",0x5f6a9ec0,"MenuState.clickPlay","MenuState.hx",53,0xdfbcb22c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(53)
		::PlayState tmp = ::PlayState_obj::__new(null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(53)
		::flixel::FlxState nextState = tmp;		HX_STACK_VAR(nextState,"nextState");
		HX_STACK_LINE(53)
		::flixel::FlxGame tmp1 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(53)
		::flixel::FlxState tmp2 = nextState;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(53)
		bool tmp3 = tmp1->_state->switchTo(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(53)
		if ((tmp3)){
			HX_STACK_LINE(53)
			::flixel::FlxGame tmp4 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(53)
			tmp4->_requestedState = nextState;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MenuState_obj,clickPlay,(void))


MenuState_obj::MenuState_obj()
{
}

Dynamic MenuState_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"clickPlay") ) { return clickPlay_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getFlxText") ) { return getFlxText_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getFlxButton") ) { return getFlxButton_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("getFlxText","\x49","\x64","\x62","\x5f"),
	HX_HCSTRING("getFlxButton","\x8e","\x18","\x53","\xc9"),
	HX_HCSTRING("clickPlay","\x5c","\x9a","\x59","\x29"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MenuState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MenuState_obj::__mClass,"__mClass");
};

#endif

hx::Class MenuState_obj::__mClass;

void MenuState_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("MenuState","\xd2","\xbf","\xb6","\xc0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< MenuState_obj >;
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

