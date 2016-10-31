#include <hxcpp.h>

#ifndef INCLUDED_Planet
#include <Planet.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Vector
#include <Vector.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSpriteUtil
#include <flixel/util/FlxSpriteUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif

Void Planet_obj::__construct(Float ix,Float iy,Float ir,Float im,Float vx,Float vy,Dynamic __o_ic)
{
HX_STACK_FRAME("Planet","new",0xeab663aa,"Planet.new","Planet.hx",32,0x3de53f06)
HX_STACK_THIS(this)
HX_STACK_ARG(ix,"ix")
HX_STACK_ARG(iy,"iy")
HX_STACK_ARG(ir,"ir")
HX_STACK_ARG(im,"im")
HX_STACK_ARG(vx,"vx")
HX_STACK_ARG(vy,"vy")
HX_STACK_ARG(__o_ic,"ic")
Dynamic ic = __o_ic.Default(-1);
{
	HX_STACK_LINE(34)
	::Vector tmp = ::Vector_obj::__new(ix,iy);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(34)
	this->p = tmp;
	HX_STACK_LINE(35)
	this->r = ir;
	HX_STACK_LINE(36)
	this->m = im;
	HX_STACK_LINE(37)
	::Vector tmp1 = ::Vector_obj::__new(vx,vy);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(37)
	this->v = tmp1;
	HX_STACK_LINE(38)
	::Vector tmp2 = ::Vector_obj::__new(null(),null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(38)
	this->a = tmp2;
	HX_STACK_LINE(39)
	this->color = ic;
	HX_STACK_LINE(40)
	this->generateSprite();
}
;
	return null();
}

//Planet_obj::~Planet_obj() { }

Dynamic Planet_obj::__CreateEmpty() { return  new Planet_obj; }
hx::ObjectPtr< Planet_obj > Planet_obj::__new(Float ix,Float iy,Float ir,Float im,Float vx,Float vy,Dynamic __o_ic)
{  hx::ObjectPtr< Planet_obj > _result_ = new Planet_obj();
	_result_->__construct(ix,iy,ir,im,vx,vy,__o_ic);
	return _result_;}

Dynamic Planet_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Planet_obj > _result_ = new Planet_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6]);
	return _result_;}

Void Planet_obj::generateSprite( ){
{
		HX_STACK_FRAME("Planet","generateSprite",0x04758210,"Planet.generateSprite","Planet.hx",46,0x3de53f06)
		HX_STACK_THIS(this)
		HX_STACK_LINE(47)
		::Vector tmp = this->p;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(47)
		Float tmp1 = tmp->x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(47)
		Float tmp2 = this->r;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(47)
		Float tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(47)
		::Vector tmp4 = this->p;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(47)
		Float tmp5 = tmp4->y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(47)
		Float tmp6 = this->r;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(47)
		Float tmp7 = (tmp5 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(47)
		::flixel::FlxSprite tmp8 = ::flixel::FlxSprite_obj::__new(tmp3,tmp7,null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(47)
		this->sprite = tmp8;
		HX_STACK_LINE(48)
		::flixel::FlxSprite tmp9 = this->sprite;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(48)
		Float tmp10 = this->r;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(48)
		Float tmp11 = ((int)2 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(48)
		int tmp12 = ::Std_obj::_int(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(48)
		Float tmp13 = this->r;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(48)
		Float tmp14 = ((int)2 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(48)
		int tmp15 = ::Std_obj::_int(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(48)
		tmp9->makeGraphic(tmp12,tmp15,(int)0,true,null());
		HX_STACK_LINE(49)
		::flixel::FlxSprite tmp16 = this->sprite;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(49)
		Float tmp17 = this->r;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(49)
		Float tmp18 = ((int)2 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(49)
		Float tmp19 = this->r;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(49)
		Float tmp20 = ((int)2 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(49)
		int tmp21 = this->color;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(49)
		::flixel::util::FlxSpriteUtil_obj::drawEllipse(tmp16,(int)0,(int)0,tmp18,tmp20,tmp21,null(),null());
		HX_STACK_LINE(50)
		Dynamic tmp22 = hx::SourceInfo(HX_HCSTRING("Planet.hx","\x06","\x3f","\xe5","\x3d"),50,HX_HCSTRING("Planet","\xb8","\x06","\x45","\x6c"),HX_HCSTRING("generateSprite","\x1a","\x85","\x4f","\xca"));		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(50)
		::haxe::Log_obj::trace(HX_HCSTRING("made sprite","\xf0","\xd4","\x63","\xa8"),tmp22);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Planet_obj,generateSprite,(void))

Void Planet_obj::update( ){
{
		HX_STACK_FRAME("Planet","update",0x212a9cff,"Planet.update","Planet.hx",53,0x3de53f06)
		HX_STACK_THIS(this)
		HX_STACK_LINE(54)
		Float tmp = ((Float)0.0166666666666666664);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(54)
		Float time = tmp;		HX_STACK_VAR(time,"time");
		HX_STACK_LINE(60)
		::Vector tmp1 = this->p;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(60)
		Float tmp2 = tmp1->x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(60)
		::String tmp3 = (HX_HCSTRING("p is : (","\x3c","\x51","\xa1","\x80") + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(60)
		::String tmp4 = (tmp3 + HX_HCSTRING(" , ","\x94","\x6e","\x18","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(60)
		::Vector tmp5 = this->p;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(60)
		Float tmp6 = tmp5->y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(60)
		::String tmp7 = (tmp4 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(60)
		::String tmp8 = (tmp7 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(60)
		Dynamic tmp9 = hx::SourceInfo(HX_HCSTRING("Planet.hx","\x06","\x3f","\xe5","\x3d"),60,HX_HCSTRING("Planet","\xb8","\x06","\x45","\x6c"),HX_HCSTRING("update","\x09","\x86","\x05","\x87"));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(60)
		::haxe::Log_obj::trace(tmp8,tmp9);
		HX_STACK_LINE(61)
		::Vector tmp10 = this->v;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(61)
		Float tmp11 = tmp10->x;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(61)
		::String tmp12 = (HX_HCSTRING("v is : (","\xf6","\xfd","\xcf","\xd7") + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(61)
		::String tmp13 = (tmp12 + HX_HCSTRING(" , ","\x94","\x6e","\x18","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(61)
		::Vector tmp14 = this->v;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(61)
		Float tmp15 = tmp14->y;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(61)
		::String tmp16 = (tmp13 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(61)
		::String tmp17 = (tmp16 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(61)
		Dynamic tmp18 = hx::SourceInfo(HX_HCSTRING("Planet.hx","\x06","\x3f","\xe5","\x3d"),61,HX_HCSTRING("Planet","\xb8","\x06","\x45","\x6c"),HX_HCSTRING("update","\x09","\x86","\x05","\x87"));		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(61)
		::haxe::Log_obj::trace(tmp17,tmp18);
		HX_STACK_LINE(62)
		::Vector tmp19 = this->a;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(62)
		Float tmp20 = tmp19->x;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(62)
		::String tmp21 = (HX_HCSTRING("a is : (","\x6b","\xa1","\xac","\x26") + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(62)
		::String tmp22 = (tmp21 + HX_HCSTRING(" , ","\x94","\x6e","\x18","\x00"));		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(62)
		::Vector tmp23 = this->a;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(62)
		Float tmp24 = tmp23->y;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(62)
		::String tmp25 = (tmp22 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(62)
		::String tmp26 = (tmp25 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(62)
		Dynamic tmp27 = hx::SourceInfo(HX_HCSTRING("Planet.hx","\x06","\x3f","\xe5","\x3d"),62,HX_HCSTRING("Planet","\xb8","\x06","\x45","\x6c"),HX_HCSTRING("update","\x09","\x86","\x05","\x87"));		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(62)
		::haxe::Log_obj::trace(tmp26,tmp27);
		HX_STACK_LINE(64)
		::Vector tmp28 = this->v;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(64)
		::Vector tmp29 = this->a;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(64)
		Float tmp30 = time;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(64)
		::Vector tmp31 = tmp29->scalerProduct(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(64)
		::Vector tmp32 = tmp28->add(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(64)
		this->v = tmp32;
		HX_STACK_LINE(71)
		::Vector tmp33 = this->p;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(71)
		::Vector tmp34 = this->v;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(71)
		::Vector tmp35 = tmp33->add(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(71)
		this->p = tmp35;
		HX_STACK_LINE(73)
		::flixel::FlxSprite tmp36 = this->sprite;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(73)
		::Vector tmp37 = this->p;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(73)
		Float tmp38 = tmp37->x;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(73)
		tmp36->set_x(tmp38);
		HX_STACK_LINE(74)
		::flixel::FlxSprite tmp39 = this->sprite;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(74)
		::Vector tmp40 = this->p;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(74)
		Float tmp41 = tmp40->y;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(74)
		tmp39->set_y(tmp41);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Planet_obj,update,(void))

::flixel::FlxSprite Planet_obj::getSprite( ){
	HX_STACK_FRAME("Planet","getSprite",0xf8338c05,"Planet.getSprite","Planet.hx",78,0x3de53f06)
	HX_STACK_THIS(this)
	HX_STACK_LINE(79)
	::flixel::FlxSprite tmp = this->sprite;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(79)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Planet_obj,getSprite,return )


Planet_obj::Planet_obj()
{
}

void Planet_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Planet);
	HX_MARK_MEMBER_NAME(r,"r");
	HX_MARK_MEMBER_NAME(m,"m");
	HX_MARK_MEMBER_NAME(p,"p");
	HX_MARK_MEMBER_NAME(v,"v");
	HX_MARK_MEMBER_NAME(a,"a");
	HX_MARK_MEMBER_NAME(sprite,"sprite");
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_END_CLASS();
}

void Planet_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(r,"r");
	HX_VISIT_MEMBER_NAME(m,"m");
	HX_VISIT_MEMBER_NAME(p,"p");
	HX_VISIT_MEMBER_NAME(v,"v");
	HX_VISIT_MEMBER_NAME(a,"a");
	HX_VISIT_MEMBER_NAME(sprite,"sprite");
	HX_VISIT_MEMBER_NAME(color,"color");
}

Dynamic Planet_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"r") ) { return r; }
		if (HX_FIELD_EQ(inName,"m") ) { return m; }
		if (HX_FIELD_EQ(inName,"p") ) { return p; }
		if (HX_FIELD_EQ(inName,"v") ) { return v; }
		if (HX_FIELD_EQ(inName,"a") ) { return a; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { return color; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"sprite") ) { return sprite; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getSprite") ) { return getSprite_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"generateSprite") ) { return generateSprite_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Planet_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"r") ) { r=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m") ) { m=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"p") ) { p=inValue.Cast< ::Vector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"v") ) { v=inValue.Cast< ::Vector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"a") ) { a=inValue.Cast< ::Vector >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { color=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"sprite") ) { sprite=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Planet_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("r","\x72","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("m","\x6d","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("p","\x70","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("v","\x76","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("a","\x61","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("sprite","\x05","\xdc","\x95","\xc3"));
	outFields->push(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Planet_obj,r),HX_HCSTRING("r","\x72","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Planet_obj,m),HX_HCSTRING("m","\x6d","\x00","\x00","\x00")},
	{hx::fsObject /*::Vector*/ ,(int)offsetof(Planet_obj,p),HX_HCSTRING("p","\x70","\x00","\x00","\x00")},
	{hx::fsObject /*::Vector*/ ,(int)offsetof(Planet_obj,v),HX_HCSTRING("v","\x76","\x00","\x00","\x00")},
	{hx::fsObject /*::Vector*/ ,(int)offsetof(Planet_obj,a),HX_HCSTRING("a","\x61","\x00","\x00","\x00")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(Planet_obj,sprite),HX_HCSTRING("sprite","\x05","\xdc","\x95","\xc3")},
	{hx::fsInt,(int)offsetof(Planet_obj,color),HX_HCSTRING("color","\x63","\x71","\x5c","\x4a")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("r","\x72","\x00","\x00","\x00"),
	HX_HCSTRING("m","\x6d","\x00","\x00","\x00"),
	HX_HCSTRING("p","\x70","\x00","\x00","\x00"),
	HX_HCSTRING("v","\x76","\x00","\x00","\x00"),
	HX_HCSTRING("a","\x61","\x00","\x00","\x00"),
	HX_HCSTRING("sprite","\x05","\xdc","\x95","\xc3"),
	HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"),
	HX_HCSTRING("generateSprite","\x1a","\x85","\x4f","\xca"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("getSprite","\x3b","\x65","\xec","\x3f"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Planet_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Planet_obj::__mClass,"__mClass");
};

#endif

hx::Class Planet_obj::__mClass;

void Planet_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Planet","\xb8","\x06","\x45","\x6c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Planet_obj >;
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

