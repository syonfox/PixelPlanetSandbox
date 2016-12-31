#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
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
#ifndef INCLUDED_flixel_system_frontEnds_CameraFrontEnd
#include <flixel/system/frontEnds/CameraFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
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
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal1
#include <flixel/util/_FlxSignal/FlxSignal1.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#include <openfl/_legacy/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Graphics
#include <openfl/_legacy/display/Graphics.h>
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
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif
namespace flixel{
namespace _system{
namespace frontEnds{

Void CameraFrontEnd_obj::__construct()
{
HX_STACK_FRAME("flixel.system.frontEnds.CameraFrontEnd","new",0xc6f5a1a3,"flixel.system.frontEnds.CameraFrontEnd.new","flixel/system/frontEnds/CameraFrontEnd.hx",10,0x7a57d3ec)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(40)
	this->_cameraRect = ::openfl::_legacy::geom::Rectangle_obj::__new(null(),null(),null(),null());
	HX_STACK_LINE(36)
	this->useBufferLocking = false;
	HX_STACK_LINE(30)
	this->cameraResized = ::flixel::util::_FlxSignal::FlxSignal1_obj::__new();
	HX_STACK_LINE(27)
	this->cameraRemoved = ::flixel::util::_FlxSignal::FlxSignal1_obj::__new();
	HX_STACK_LINE(24)
	this->cameraAdded = ::flixel::util::_FlxSignal::FlxSignal1_obj::__new();
	HX_STACK_LINE(16)
	this->list = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(167)
	::flixel::FlxCamera_obj::defaultCameras = this->list;
}
;
	return null();
}

//CameraFrontEnd_obj::~CameraFrontEnd_obj() { }

Dynamic CameraFrontEnd_obj::__CreateEmpty() { return  new CameraFrontEnd_obj; }
hx::ObjectPtr< CameraFrontEnd_obj > CameraFrontEnd_obj::__new()
{  hx::ObjectPtr< CameraFrontEnd_obj > _result_ = new CameraFrontEnd_obj();
	_result_->__construct();
	return _result_;}

Dynamic CameraFrontEnd_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CameraFrontEnd_obj > _result_ = new CameraFrontEnd_obj();
	_result_->__construct();
	return _result_;}

Dynamic CameraFrontEnd_obj::add( Dynamic NewCamera){
	HX_STACK_FRAME("flixel.system.frontEnds.CameraFrontEnd","add",0xc6ebc364,"flixel.system.frontEnds.CameraFrontEnd.add","flixel/system/frontEnds/CameraFrontEnd.hx",50,0x7a57d3ec)
	HX_STACK_THIS(this)
	HX_STACK_ARG(NewCamera,"NewCamera")
	HX_STACK_LINE(51)
	::flixel::FlxGame tmp = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(51)
	::openfl::_legacy::display::Sprite tmp1 = NewCamera->__Field(HX_HCSTRING("flashSprite","\xd5","\xe9","\x0d","\xf4"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(51)
	::flixel::FlxGame tmp2 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(51)
	::flixel::FlxGame tmp3 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(51)
	::openfl::_legacy::display::Sprite tmp4 = tmp3->_inputContainer;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(51)
	int tmp5 = tmp2->getChildIndex(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(51)
	tmp->addChildAt(tmp1,tmp5);
	HX_STACK_LINE(52)
	::flixel::_system::frontEnds::CameraFrontEnd tmp6 = ::flixel::FlxG_obj::cameras;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(52)
	Dynamic tmp7 = NewCamera;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(52)
	tmp6->__Field(HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"), hx::paccDynamic )->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp7);
	HX_STACK_LINE(53)
	::flixel::_system::frontEnds::CameraFrontEnd tmp8 = ::flixel::FlxG_obj::cameras;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(53)
	int tmp9 = tmp8->__Field(HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(53)
	int tmp10 = (tmp9 - (int)1);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(53)
	NewCamera->__FieldRef(HX_HCSTRING("ID","\xdb","\x3f","\x00","\x00")) = tmp10;
	HX_STACK_LINE(54)
	::flixel::util::_FlxSignal::FlxSignal1 tmp11 = this->cameraAdded;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(54)
	Dynamic tmp12 = NewCamera;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(54)
	tmp11->dispatch(tmp12);
	HX_STACK_LINE(55)
	Dynamic tmp13 = NewCamera;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(55)
	return tmp13;
}


HX_DEFINE_DYNAMIC_FUNC1(CameraFrontEnd_obj,add,return )

Void CameraFrontEnd_obj::remove( ::flixel::FlxCamera Camera,hx::Null< bool >  __o_Destroy){
bool Destroy = __o_Destroy.Default(true);
	HX_STACK_FRAME("flixel.system.frontEnds.CameraFrontEnd","remove",0xaa68b6e1,"flixel.system.frontEnds.CameraFrontEnd.remove","flixel/system/frontEnds/CameraFrontEnd.hx",65,0x7a57d3ec)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Camera,"Camera")
	HX_STACK_ARG(Destroy,"Destroy")
{
		HX_STACK_LINE(66)
		::flixel::FlxCamera tmp = Camera;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(66)
		int tmp1 = this->list->__Field(HX_HCSTRING("indexOf","\xc9","\x48","\xbf","\xe0"), hx::paccDynamic )(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(66)
		int index = tmp1;		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(67)
		bool tmp2 = (Camera != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(67)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(67)
		if ((tmp2)){
			HX_STACK_LINE(67)
			tmp3 = (index != (int)-1);
		}
		else{
			HX_STACK_LINE(67)
			tmp3 = false;
		}
		HX_STACK_LINE(67)
		if ((tmp3)){
			HX_STACK_LINE(69)
			::flixel::FlxGame tmp4 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(69)
			::openfl::_legacy::display::Sprite tmp5 = Camera->flashSprite;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(69)
			tmp4->removeChild(tmp5);
			HX_STACK_LINE(70)
			int tmp6 = index;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(70)
			this->list->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp6,(int)1);
		}
		else{
			HX_STACK_LINE(75)
			return null();
		}
		HX_STACK_LINE(78)
		bool tmp4 = ::flixel::FlxG_obj::renderTile;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(78)
		if ((tmp4)){
			HX_STACK_LINE(80)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(80)
			int tmp5 = this->list->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(80)
			int _g = tmp5;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(80)
			while((true)){
				HX_STACK_LINE(80)
				bool tmp6 = (_g1 < _g);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(80)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(80)
				if ((tmp7)){
					HX_STACK_LINE(80)
					break;
				}
				HX_STACK_LINE(80)
				int tmp8 = (_g1)++;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(80)
				int i = tmp8;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(82)
				::flixel::FlxCamera tmp9 = this->list->__GetItem(i);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(82)
				tmp9->ID = i;
			}
		}
		HX_STACK_LINE(86)
		bool tmp5 = Destroy;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(86)
		if ((tmp5)){
			HX_STACK_LINE(87)
			Camera->destroy();
		}
		HX_STACK_LINE(89)
		::flixel::util::_FlxSignal::FlxSignal1 tmp6 = this->cameraRemoved;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(89)
		::flixel::FlxCamera tmp7 = Camera;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(89)
		tmp6->dispatch(tmp7);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(CameraFrontEnd_obj,remove,(void))

Void CameraFrontEnd_obj::reset( ::flixel::FlxCamera NewCamera){
{
		HX_STACK_FRAME("flixel.system.frontEnds.CameraFrontEnd","reset",0xf67331d2,"flixel.system.frontEnds.CameraFrontEnd.reset","flixel/system/frontEnds/CameraFrontEnd.hx",99,0x7a57d3ec)
		HX_STACK_THIS(this)
		HX_STACK_ARG(NewCamera,"NewCamera")
		HX_STACK_LINE(100)
		{
			HX_STACK_LINE(100)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(100)
			Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(100)
			while((true)){
				HX_STACK_LINE(100)
				bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(100)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(100)
				if ((tmp1)){
					HX_STACK_LINE(100)
					break;
				}
				HX_STACK_LINE(100)
				::flixel::FlxCamera tmp2 = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(100)
				::flixel::FlxCamera camera = tmp2;		HX_STACK_VAR(camera,"camera");
				HX_STACK_LINE(100)
				++(_g);
				HX_STACK_LINE(101)
				::flixel::FlxCamera tmp3 = camera;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(101)
				this->remove(tmp3,null());
			}
		}
		HX_STACK_LINE(103)
		int tmp = this->list->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(103)
		this->list->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )((int)0,tmp);
		HX_STACK_LINE(105)
		bool tmp1 = (NewCamera == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(105)
		if ((tmp1)){
			HX_STACK_LINE(106)
			int tmp2 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(106)
			int tmp3 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(106)
			::flixel::FlxCamera tmp4 = ::flixel::FlxCamera_obj::__new((int)0,(int)0,tmp2,tmp3,null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(106)
			NewCamera = tmp4;
		}
		HX_STACK_LINE(108)
		::flixel::FlxCamera tmp2 = NewCamera;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(108)
		::flixel::FlxCamera tmp3 = this->add(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(108)
		::flixel::FlxG_obj::camera = tmp3;
		HX_STACK_LINE(109)
		NewCamera->ID = (int)0;
		HX_STACK_LINE(111)
		::flixel::FlxCamera_obj::defaultCameras = this->list;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CameraFrontEnd_obj,reset,(void))

Void CameraFrontEnd_obj::flash( hx::Null< int >  __o_Color,hx::Null< Float >  __o_Duration,Dynamic OnComplete,hx::Null< bool >  __o_Force){
int Color = __o_Color.Default(-1);
Float Duration = __o_Duration.Default(1);
bool Force = __o_Force.Default(false);
	HX_STACK_FRAME("flixel.system.frontEnds.CameraFrontEnd","flash",0x12371db3,"flixel.system.frontEnds.CameraFrontEnd.flash","flixel/system/frontEnds/CameraFrontEnd.hx",124,0x7a57d3ec)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Color,"Color")
	HX_STACK_ARG(Duration,"Duration")
	HX_STACK_ARG(OnComplete,"OnComplete")
	HX_STACK_ARG(Force,"Force")
{
		HX_STACK_LINE(124)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(124)
		Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(124)
		while((true)){
			HX_STACK_LINE(124)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(124)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(124)
			if ((tmp1)){
				HX_STACK_LINE(124)
				break;
			}
			HX_STACK_LINE(124)
			::flixel::FlxCamera tmp2 = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(124)
			::flixel::FlxCamera camera = tmp2;		HX_STACK_VAR(camera,"camera");
			HX_STACK_LINE(124)
			++(_g);
			HX_STACK_LINE(126)
			int tmp3 = Color;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(126)
			Float tmp4 = Duration;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(126)
			Dynamic tmp5 = OnComplete;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(126)
			bool tmp6 = Force;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(126)
			camera->flash(tmp3,tmp4,tmp5,tmp6);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(CameraFrontEnd_obj,flash,(void))

Void CameraFrontEnd_obj::fade( hx::Null< int >  __o_Color,hx::Null< Float >  __o_Duration,hx::Null< bool >  __o_FadeIn,Dynamic OnComplete,hx::Null< bool >  __o_Force){
int Color = __o_Color.Default(-16777216);
Float Duration = __o_Duration.Default(1);
bool FadeIn = __o_FadeIn.Default(false);
bool Force = __o_Force.Default(false);
	HX_STACK_FRAME("flixel.system.frontEnds.CameraFrontEnd","fade",0x4aaafed9,"flixel.system.frontEnds.CameraFrontEnd.fade","flixel/system/frontEnds/CameraFrontEnd.hx",141,0x7a57d3ec)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Color,"Color")
	HX_STACK_ARG(Duration,"Duration")
	HX_STACK_ARG(FadeIn,"FadeIn")
	HX_STACK_ARG(OnComplete,"OnComplete")
	HX_STACK_ARG(Force,"Force")
{
		HX_STACK_LINE(141)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(141)
		Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(141)
		while((true)){
			HX_STACK_LINE(141)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(141)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(141)
			if ((tmp1)){
				HX_STACK_LINE(141)
				break;
			}
			HX_STACK_LINE(141)
			::flixel::FlxCamera tmp2 = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(141)
			::flixel::FlxCamera camera = tmp2;		HX_STACK_VAR(camera,"camera");
			HX_STACK_LINE(141)
			++(_g);
			HX_STACK_LINE(143)
			int tmp3 = Color;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(143)
			Float tmp4 = Duration;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(143)
			bool tmp5 = FadeIn;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(143)
			Dynamic tmp6 = OnComplete;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(143)
			bool tmp7 = Force;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(143)
			camera->fade(tmp3,tmp4,tmp5,tmp6,tmp7);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(CameraFrontEnd_obj,fade,(void))

Void CameraFrontEnd_obj::shake( hx::Null< Float >  __o_Intensity,hx::Null< Float >  __o_Duration,Dynamic OnComplete,hx::Null< bool >  __o_Force,::flixel::util::FlxAxes Axes){
Float Intensity = __o_Intensity.Default(((Float)0.05));
Float Duration = __o_Duration.Default(((Float)0.5));
bool Force = __o_Force.Default(true);
	HX_STACK_FRAME("flixel.system.frontEnds.CameraFrontEnd","shake",0x8bc7c6c9,"flixel.system.frontEnds.CameraFrontEnd.shake","flixel/system/frontEnds/CameraFrontEnd.hx",158,0x7a57d3ec)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Intensity,"Intensity")
	HX_STACK_ARG(Duration,"Duration")
	HX_STACK_ARG(OnComplete,"OnComplete")
	HX_STACK_ARG(Force,"Force")
	HX_STACK_ARG(Axes,"Axes")
{
		HX_STACK_LINE(158)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(158)
		Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(158)
		while((true)){
			HX_STACK_LINE(158)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(158)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(158)
			if ((tmp1)){
				HX_STACK_LINE(158)
				break;
			}
			HX_STACK_LINE(158)
			::flixel::FlxCamera tmp2 = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(158)
			::flixel::FlxCamera camera = tmp2;		HX_STACK_VAR(camera,"camera");
			HX_STACK_LINE(158)
			++(_g);
			HX_STACK_LINE(160)
			Float tmp3 = Intensity;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(160)
			Float tmp4 = Duration;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(160)
			Dynamic tmp5 = OnComplete;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(160)
			bool tmp6 = Force;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(160)
			::flixel::util::FlxAxes tmp7 = Axes;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(160)
			camera->shake(tmp3,tmp4,tmp5,tmp6,tmp7);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(CameraFrontEnd_obj,shake,(void))

Void CameraFrontEnd_obj::lock( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.CameraFrontEnd","lock",0x4eace548,"flixel.system.frontEnds.CameraFrontEnd.lock","flixel/system/frontEnds/CameraFrontEnd.hx",176,0x7a57d3ec)
		HX_STACK_THIS(this)
		HX_STACK_LINE(176)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(176)
		Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(176)
		while((true)){
			HX_STACK_LINE(176)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(176)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(176)
			if ((tmp1)){
				HX_STACK_LINE(176)
				break;
			}
			HX_STACK_LINE(176)
			::flixel::FlxCamera tmp2 = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(176)
			::flixel::FlxCamera camera = tmp2;		HX_STACK_VAR(camera,"camera");
			HX_STACK_LINE(176)
			++(_g);
			HX_STACK_LINE(178)
			bool tmp3 = (camera == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(178)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(178)
			bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(178)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(178)
			if ((tmp5)){
				HX_STACK_LINE(178)
				bool tmp7 = camera->exists;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(178)
				bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(178)
				bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(178)
				tmp6 = !(tmp9);
			}
			else{
				HX_STACK_LINE(178)
				tmp6 = true;
			}
			HX_STACK_LINE(178)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(178)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(178)
			if ((tmp7)){
				HX_STACK_LINE(178)
				bool tmp9 = camera->visible;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(178)
				bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(178)
				tmp8 = !(tmp10);
			}
			else{
				HX_STACK_LINE(178)
				tmp8 = true;
			}
			HX_STACK_LINE(178)
			if ((tmp8)){
				HX_STACK_LINE(180)
				continue;
			}
			HX_STACK_LINE(183)
			bool tmp9 = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(183)
			if ((tmp9)){
				HX_STACK_LINE(185)
				camera->checkResize();
				HX_STACK_LINE(187)
				bool tmp10 = this->useBufferLocking;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(187)
				if ((tmp10)){
					HX_STACK_LINE(189)
					camera->buffer->lock();
				}
			}
			HX_STACK_LINE(193)
			bool tmp10 = ::flixel::FlxG_obj::renderTile;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(193)
			if ((tmp10)){
				HX_STACK_LINE(195)
				camera->clearDrawStack();
				HX_STACK_LINE(196)
				::openfl::_legacy::display::Graphics tmp11 = camera->canvas->get_graphics();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(196)
				tmp11->clear();
			}
			HX_STACK_LINE(203)
			bool tmp11 = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(203)
			if ((tmp11)){
				HX_STACK_LINE(205)
				int tmp12 = camera->bgColor;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(205)
				bool tmp13 = camera->useBgAlphaBlending;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(205)
				camera->fill(tmp12,tmp13,null(),null());
				HX_STACK_LINE(206)
				camera->screen->dirty = true;
			}
			else{
				HX_STACK_LINE(210)
				int tmp12 = (int(camera->bgColor) & int((int)16777215));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(210)
				int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(210)
				bool tmp14 = camera->useBgAlphaBlending;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(210)
				int tmp15 = (int(camera->bgColor) >> int((int)24));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(210)
				int tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(210)
				Float tmp17 = (Float(tmp16) / Float((int)255));		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(210)
				camera->fill(tmp13,tmp14,tmp17,null());
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CameraFrontEnd_obj,lock,(void))

Void CameraFrontEnd_obj::render( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.CameraFrontEnd","render",0xab0985f3,"flixel.system.frontEnds.CameraFrontEnd.render","flixel/system/frontEnds/CameraFrontEnd.hx",217,0x7a57d3ec)
		HX_STACK_THIS(this)
		HX_STACK_LINE(218)
		bool tmp = ::flixel::FlxG_obj::renderTile;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(218)
		if ((tmp)){
			HX_STACK_LINE(220)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(220)
			Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(220)
			while((true)){
				HX_STACK_LINE(220)
				bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(220)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(220)
				if ((tmp2)){
					HX_STACK_LINE(220)
					break;
				}
				HX_STACK_LINE(220)
				::flixel::FlxCamera tmp3 = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(220)
				::flixel::FlxCamera camera = tmp3;		HX_STACK_VAR(camera,"camera");
				HX_STACK_LINE(220)
				++(_g);
				HX_STACK_LINE(222)
				bool tmp4 = (camera != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(222)
				bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(222)
				bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(222)
				if ((tmp5)){
					HX_STACK_LINE(222)
					tmp6 = camera->exists;
				}
				else{
					HX_STACK_LINE(222)
					tmp6 = false;
				}
				HX_STACK_LINE(222)
				bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(222)
				if ((tmp6)){
					HX_STACK_LINE(222)
					tmp7 = camera->visible;
				}
				else{
					HX_STACK_LINE(222)
					tmp7 = false;
				}
				HX_STACK_LINE(222)
				if ((tmp7)){
					HX_STACK_LINE(224)
					camera->render();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CameraFrontEnd_obj,render,(void))

Void CameraFrontEnd_obj::unlock( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.CameraFrontEnd","unlock",0x0b6cbd61,"flixel.system.frontEnds.CameraFrontEnd.unlock","flixel/system/frontEnds/CameraFrontEnd.hx",236,0x7a57d3ec)
		HX_STACK_THIS(this)
		HX_STACK_LINE(236)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(236)
		Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(236)
		while((true)){
			HX_STACK_LINE(236)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(236)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(236)
			if ((tmp1)){
				HX_STACK_LINE(236)
				break;
			}
			HX_STACK_LINE(236)
			::flixel::FlxCamera tmp2 = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(236)
			::flixel::FlxCamera camera = tmp2;		HX_STACK_VAR(camera,"camera");
			HX_STACK_LINE(236)
			++(_g);
			HX_STACK_LINE(238)
			bool tmp3 = (camera == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(238)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(238)
			bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(238)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(238)
			if ((tmp5)){
				HX_STACK_LINE(238)
				bool tmp7 = camera->exists;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(238)
				bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(238)
				bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(238)
				tmp6 = !(tmp9);
			}
			else{
				HX_STACK_LINE(238)
				tmp6 = true;
			}
			HX_STACK_LINE(238)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(238)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(238)
			if ((tmp7)){
				HX_STACK_LINE(238)
				bool tmp9 = camera->visible;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(238)
				bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(238)
				tmp8 = !(tmp10);
			}
			else{
				HX_STACK_LINE(238)
				tmp8 = true;
			}
			HX_STACK_LINE(238)
			if ((tmp8)){
				HX_STACK_LINE(240)
				continue;
			}
			HX_STACK_LINE(243)
			camera->drawFX();
			HX_STACK_LINE(245)
			bool tmp9 = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(245)
			if ((tmp9)){
				HX_STACK_LINE(247)
				bool tmp10 = this->useBufferLocking;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(247)
				if ((tmp10)){
					HX_STACK_LINE(249)
					camera->buffer->unlock(null());
				}
				HX_STACK_LINE(252)
				camera->screen->dirty = true;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CameraFrontEnd_obj,unlock,(void))

Void CameraFrontEnd_obj::update( Float elapsed){
{
		HX_STACK_FRAME("flixel.system.frontEnds.CameraFrontEnd","update",0x2ce5a0a6,"flixel.system.frontEnds.CameraFrontEnd.update","flixel/system/frontEnds/CameraFrontEnd.hx",263,0x7a57d3ec)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(263)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(263)
		Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(263)
		while((true)){
			HX_STACK_LINE(263)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(263)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(263)
			if ((tmp1)){
				HX_STACK_LINE(263)
				break;
			}
			HX_STACK_LINE(263)
			::flixel::FlxCamera tmp2 = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(263)
			::flixel::FlxCamera camera = tmp2;		HX_STACK_VAR(camera,"camera");
			HX_STACK_LINE(263)
			++(_g);
			HX_STACK_LINE(265)
			bool tmp3 = (camera != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(265)
			bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(265)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(265)
			if ((tmp4)){
				HX_STACK_LINE(265)
				tmp5 = camera->exists;
			}
			else{
				HX_STACK_LINE(265)
				tmp5 = false;
			}
			HX_STACK_LINE(265)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(265)
			if ((tmp5)){
				HX_STACK_LINE(265)
				tmp6 = camera->active;
			}
			else{
				HX_STACK_LINE(265)
				tmp6 = false;
			}
			HX_STACK_LINE(265)
			if ((tmp6)){
				HX_STACK_LINE(267)
				Float tmp7 = elapsed;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(267)
				camera->update(tmp7);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CameraFrontEnd_obj,update,(void))

Void CameraFrontEnd_obj::resize( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.CameraFrontEnd","resize",0xae5b7491,"flixel.system.frontEnds.CameraFrontEnd.resize","flixel/system/frontEnds/CameraFrontEnd.hx",278,0x7a57d3ec)
		HX_STACK_THIS(this)
		HX_STACK_LINE(278)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(278)
		Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(278)
		while((true)){
			HX_STACK_LINE(278)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(278)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(278)
			if ((tmp1)){
				HX_STACK_LINE(278)
				break;
			}
			HX_STACK_LINE(278)
			::flixel::FlxCamera tmp2 = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(278)
			::flixel::FlxCamera camera = tmp2;		HX_STACK_VAR(camera,"camera");
			HX_STACK_LINE(278)
			++(_g);
			HX_STACK_LINE(280)
			camera->onResize();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CameraFrontEnd_obj,resize,(void))

int CameraFrontEnd_obj::get_bgColor( ){
	HX_STACK_FRAME("flixel.system.frontEnds.CameraFrontEnd","get_bgColor",0x99072db8,"flixel.system.frontEnds.CameraFrontEnd.get_bgColor","flixel/system/frontEnds/CameraFrontEnd.hx",285,0x7a57d3ec)
	HX_STACK_THIS(this)
	HX_STACK_LINE(286)
	::flixel::FlxCamera tmp = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(286)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(286)
	int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(286)
	if ((tmp1)){
		HX_STACK_LINE(286)
		tmp2 = (int)-16777216;
	}
	else{
		HX_STACK_LINE(286)
		::flixel::FlxCamera tmp3 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(286)
		tmp2 = tmp3->bgColor;
	}
	HX_STACK_LINE(286)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(CameraFrontEnd_obj,get_bgColor,return )

int CameraFrontEnd_obj::set_bgColor( int Color){
	HX_STACK_FRAME("flixel.system.frontEnds.CameraFrontEnd","set_bgColor",0xa37434c4,"flixel.system.frontEnds.CameraFrontEnd.set_bgColor","flixel/system/frontEnds/CameraFrontEnd.hx",290,0x7a57d3ec)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Color,"Color")
	HX_STACK_LINE(291)
	{
		HX_STACK_LINE(291)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(291)
		Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(291)
		while((true)){
			HX_STACK_LINE(291)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(291)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(291)
			if ((tmp1)){
				HX_STACK_LINE(291)
				break;
			}
			HX_STACK_LINE(291)
			::flixel::FlxCamera tmp2 = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(291)
			::flixel::FlxCamera camera = tmp2;		HX_STACK_VAR(camera,"camera");
			HX_STACK_LINE(291)
			++(_g);
			HX_STACK_LINE(293)
			camera->bgColor = Color;
		}
	}
	HX_STACK_LINE(296)
	int tmp = Color;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(296)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(CameraFrontEnd_obj,set_bgColor,return )


CameraFrontEnd_obj::CameraFrontEnd_obj()
{
}

void CameraFrontEnd_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CameraFrontEnd);
	HX_MARK_MEMBER_NAME(list,"list");
	HX_MARK_MEMBER_NAME(cameraAdded,"cameraAdded");
	HX_MARK_MEMBER_NAME(cameraRemoved,"cameraRemoved");
	HX_MARK_MEMBER_NAME(cameraResized,"cameraResized");
	HX_MARK_MEMBER_NAME(useBufferLocking,"useBufferLocking");
	HX_MARK_MEMBER_NAME(_cameraRect,"_cameraRect");
	HX_MARK_END_CLASS();
}

void CameraFrontEnd_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(list,"list");
	HX_VISIT_MEMBER_NAME(cameraAdded,"cameraAdded");
	HX_VISIT_MEMBER_NAME(cameraRemoved,"cameraRemoved");
	HX_VISIT_MEMBER_NAME(cameraResized,"cameraResized");
	HX_VISIT_MEMBER_NAME(useBufferLocking,"useBufferLocking");
	HX_VISIT_MEMBER_NAME(_cameraRect,"_cameraRect");
}

Dynamic CameraFrontEnd_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { return list; }
		if (HX_FIELD_EQ(inName,"fade") ) { return fade_dyn(); }
		if (HX_FIELD_EQ(inName,"lock") ) { return lock_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		if (HX_FIELD_EQ(inName,"flash") ) { return flash_dyn(); }
		if (HX_FIELD_EQ(inName,"shake") ) { return shake_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		if (HX_FIELD_EQ(inName,"unlock") ) { return unlock_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"resize") ) { return resize_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"bgColor") ) { if (inCallProp == hx::paccAlways) return get_bgColor(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"cameraAdded") ) { return cameraAdded; }
		if (HX_FIELD_EQ(inName,"_cameraRect") ) { return _cameraRect; }
		if (HX_FIELD_EQ(inName,"get_bgColor") ) { return get_bgColor_dyn(); }
		if (HX_FIELD_EQ(inName,"set_bgColor") ) { return set_bgColor_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"cameraRemoved") ) { return cameraRemoved; }
		if (HX_FIELD_EQ(inName,"cameraResized") ) { return cameraResized; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"useBufferLocking") ) { return useBufferLocking; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CameraFrontEnd_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { list=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"bgColor") ) { if (inCallProp == hx::paccAlways) return set_bgColor(inValue); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"cameraAdded") ) { cameraAdded=inValue.Cast< ::flixel::util::_FlxSignal::FlxSignal1 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_cameraRect") ) { _cameraRect=inValue.Cast< ::openfl::_legacy::geom::Rectangle >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"cameraRemoved") ) { cameraRemoved=inValue.Cast< ::flixel::util::_FlxSignal::FlxSignal1 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cameraResized") ) { cameraResized=inValue.Cast< ::flixel::util::_FlxSignal::FlxSignal1 >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"useBufferLocking") ) { useBufferLocking=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CameraFrontEnd_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"));
	outFields->push(HX_HCSTRING("bgColor","\x5e","\x81","\x83","\xf7"));
	outFields->push(HX_HCSTRING("cameraAdded","\xdb","\xc7","\x89","\x10"));
	outFields->push(HX_HCSTRING("cameraRemoved","\x7b","\x4f","\xfd","\xfa"));
	outFields->push(HX_HCSTRING("cameraResized","\xcb","\x8b","\x70","\x6b"));
	outFields->push(HX_HCSTRING("useBufferLocking","\xf0","\x43","\x3c","\x76"));
	outFields->push(HX_HCSTRING("_cameraRect","\x88","\x43","\x4f","\x84"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(CameraFrontEnd_obj,list),HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47")},
	{hx::fsObject /*::flixel::util::_FlxSignal::FlxSignal1*/ ,(int)offsetof(CameraFrontEnd_obj,cameraAdded),HX_HCSTRING("cameraAdded","\xdb","\xc7","\x89","\x10")},
	{hx::fsObject /*::flixel::util::_FlxSignal::FlxSignal1*/ ,(int)offsetof(CameraFrontEnd_obj,cameraRemoved),HX_HCSTRING("cameraRemoved","\x7b","\x4f","\xfd","\xfa")},
	{hx::fsObject /*::flixel::util::_FlxSignal::FlxSignal1*/ ,(int)offsetof(CameraFrontEnd_obj,cameraResized),HX_HCSTRING("cameraResized","\xcb","\x8b","\x70","\x6b")},
	{hx::fsBool,(int)offsetof(CameraFrontEnd_obj,useBufferLocking),HX_HCSTRING("useBufferLocking","\xf0","\x43","\x3c","\x76")},
	{hx::fsObject /*::openfl::_legacy::geom::Rectangle*/ ,(int)offsetof(CameraFrontEnd_obj,_cameraRect),HX_HCSTRING("_cameraRect","\x88","\x43","\x4f","\x84")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"),
	HX_HCSTRING("cameraAdded","\xdb","\xc7","\x89","\x10"),
	HX_HCSTRING("cameraRemoved","\x7b","\x4f","\xfd","\xfa"),
	HX_HCSTRING("cameraResized","\xcb","\x8b","\x70","\x6b"),
	HX_HCSTRING("useBufferLocking","\xf0","\x43","\x3c","\x76"),
	HX_HCSTRING("_cameraRect","\x88","\x43","\x4f","\x84"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	HX_HCSTRING("flash","\xb0","\x35","\x8c","\x02"),
	HX_HCSTRING("fade","\x7c","\xb5","\xb5","\x43"),
	HX_HCSTRING("shake","\xc6","\xde","\x1c","\x7c"),
	HX_HCSTRING("lock","\xeb","\x9b","\xb7","\x47"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("unlock","\xc4","\xa2","\x8c","\x65"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"),
	HX_HCSTRING("get_bgColor","\x75","\xe1","\x7d","\x7d"),
	HX_HCSTRING("set_bgColor","\x81","\xe8","\xea","\x87"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CameraFrontEnd_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CameraFrontEnd_obj::__mClass,"__mClass");
};

#endif

hx::Class CameraFrontEnd_obj::__mClass;

void CameraFrontEnd_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.frontEnds.CameraFrontEnd","\x31","\x94","\x3d","\x41");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< CameraFrontEnd_obj >;
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
