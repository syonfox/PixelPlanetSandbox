#include <hxcpp.h>

#ifndef INCLUDED_haxe_Utf8
#include <haxe/Utf8.h>
#endif
namespace haxe{

Void Utf8_obj::__construct()
{
	return null();
}

//Utf8_obj::~Utf8_obj() { }

Dynamic Utf8_obj::__CreateEmpty() { return  new Utf8_obj; }
hx::ObjectPtr< Utf8_obj > Utf8_obj::__new()
{  hx::ObjectPtr< Utf8_obj > _result_ = new Utf8_obj();
	_result_->__construct();
	return _result_;}

Dynamic Utf8_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Utf8_obj > _result_ = new Utf8_obj();
	_result_->__construct();
	return _result_;}

int Utf8_obj::length( ::String s){
	HX_STACK_FRAME("haxe.Utf8","length",0x88322e1b,"haxe.Utf8.length","/usr/share/haxe/std/cpp/_std/haxe/Utf8.hx",74,0x9faf89a8)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(75)
	Array< int > array = ::__hxcpp_utf8_string_to_char_array(s);		HX_STACK_VAR(array,"array");
	HX_STACK_LINE(76)
	int tmp = array->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(76)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Utf8_obj,length,return )

int Utf8_obj::compare( ::String a,::String b){
	HX_STACK_FRAME("haxe.Utf8","compare",0x9f848dd0,"haxe.Utf8.compare","/usr/share/haxe/std/cpp/_std/haxe/Utf8.hx",79,0x9faf89a8)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(80)
	Array< int > a_ = ::__hxcpp_utf8_string_to_char_array(a);		HX_STACK_VAR(a_,"a_");
	HX_STACK_LINE(81)
	Array< int > b_ = ::__hxcpp_utf8_string_to_char_array(b);		HX_STACK_VAR(b_,"b_");
	HX_STACK_LINE(82)
	bool tmp = (a_->length < b_->length);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(82)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(82)
	if ((tmp)){
		HX_STACK_LINE(82)
		tmp1 = a_->length;
	}
	else{
		HX_STACK_LINE(82)
		tmp1 = b_->length;
	}
	HX_STACK_LINE(82)
	int min = tmp1;		HX_STACK_VAR(min,"min");
	HX_STACK_LINE(83)
	{
		HX_STACK_LINE(83)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(83)
		while((true)){
			HX_STACK_LINE(83)
			bool tmp2 = (_g < min);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(83)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(83)
			if ((tmp3)){
				HX_STACK_LINE(83)
				break;
			}
			HX_STACK_LINE(83)
			int tmp4 = (_g)++;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(83)
			int i = tmp4;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(85)
			int tmp5 = a_->__get(i);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(85)
			int tmp6 = b_->__get(i);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(85)
			bool tmp7 = (tmp5 < tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(85)
			if ((tmp7)){
				HX_STACK_LINE(85)
				return (int)-1;
			}
			HX_STACK_LINE(86)
			int tmp8 = a_->__get(i);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(86)
			int tmp9 = b_->__get(i);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(86)
			bool tmp10 = (tmp8 > tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(86)
			if ((tmp10)){
				HX_STACK_LINE(86)
				return (int)1;
			}
		}
	}
	HX_STACK_LINE(88)
	bool tmp2 = (a_->length == b_->length);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(88)
	int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(88)
	if ((tmp2)){
		HX_STACK_LINE(88)
		tmp3 = (int)0;
	}
	else{
		HX_STACK_LINE(88)
		bool tmp4 = (a_->length < b_->length);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(88)
		if ((tmp4)){
			HX_STACK_LINE(88)
			tmp3 = (int)-1;
		}
		else{
			HX_STACK_LINE(88)
			tmp3 = (int)1;
		}
	}
	HX_STACK_LINE(88)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Utf8_obj,compare,return )

::String Utf8_obj::sub( ::String s,int pos,int len){
	HX_STACK_FRAME("haxe.Utf8","sub",0x67d06d2b,"haxe.Utf8.sub","/usr/share/haxe/std/cpp/_std/haxe/Utf8.hx",91,0x9faf89a8)
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(pos,"pos")
	HX_STACK_ARG(len,"len")
	HX_STACK_LINE(92)
	Array< int > array = ::__hxcpp_utf8_string_to_char_array(s);		HX_STACK_VAR(array,"array");
	HX_STACK_LINE(93)
	bool tmp = (len < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(93)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(93)
	if ((tmp)){
		HX_STACK_LINE(93)
		tmp1 = array->length;
	}
	else{
		HX_STACK_LINE(93)
		tmp1 = (pos + len);
	}
	HX_STACK_LINE(93)
	int last = tmp1;		HX_STACK_VAR(last,"last");
	HX_STACK_LINE(94)
	bool tmp2 = (last > array->length);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(94)
	if ((tmp2)){
		HX_STACK_LINE(94)
		last = array->length;
	}
	HX_STACK_LINE(95)
	int tmp3 = pos;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(95)
	int tmp4 = last;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(95)
	Array< int > sub = array->slice(tmp3,tmp4);		HX_STACK_VAR(sub,"sub");
	HX_STACK_LINE(96)
	::String tmp5 = ::__hxcpp_char_array_to_utf8_string(sub);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(96)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Utf8_obj,sub,return )


Utf8_obj::Utf8_obj()
{
}

bool Utf8_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"sub") ) { outValue = sub_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { outValue = length_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"compare") ) { outValue = compare_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Utf8_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Utf8_obj::__mClass,"__mClass");
};

#endif

hx::Class Utf8_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"),
	HX_HCSTRING("compare","\xa5","\x18","\x69","\x83"),
	HX_HCSTRING("sub","\x80","\xa9","\x57","\x00"),
	::String(null()) };

void Utf8_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.Utf8","\x99","\x32","\x41","\xf3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Utf8_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Utf8_obj >;
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

} // end namespace haxe
