#include <hxcpp.h>

#ifndef INCLUDED_Planet
#include <Planet.h>
#endif
#ifndef INCLUDED_System
#include <System.h>
#endif
#ifndef INCLUDED_Vector
#include <Vector.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif

Void System_obj::__construct(hx::Null< Float >  __o_grav)
{
HX_STACK_FRAME("System","new",0xd916df81,"System.new","System.hx",8,0xec4f4b0f)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_grav,"grav")
Float grav = __o_grav.Default(10);
{
	HX_STACK_LINE(9)
	this->g = grav;
	HX_STACK_LINE(10)
	this->planets = Array_obj< ::Dynamic >::__new();
}
;
	return null();
}

//System_obj::~System_obj() { }

Dynamic System_obj::__CreateEmpty() { return  new System_obj; }
hx::ObjectPtr< System_obj > System_obj::__new(hx::Null< Float >  __o_grav)
{  hx::ObjectPtr< System_obj > _result_ = new System_obj();
	_result_->__construct(__o_grav);
	return _result_;}

Dynamic System_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< System_obj > _result_ = new System_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void System_obj::addPlanet( ::Planet p){
{
		HX_STACK_FRAME("System","addPlanet",0x5b11657a,"System.addPlanet","System.hx",13,0xec4f4b0f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p,"p")
		HX_STACK_LINE(14)
		::Planet tmp = p;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(14)
		this->planets->push(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(System_obj,addPlanet,(void))

Void System_obj::update( ){
{
		HX_STACK_FRAME("System","update",0x4a25e188,"System.update","System.hx",17,0xec4f4b0f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(18)
		Array< ::Dynamic > a = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(20)
		{
			HX_STACK_LINE(20)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(20)
			int tmp = this->planets->length;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(20)
			int _g = tmp;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(20)
			while((true)){
				HX_STACK_LINE(20)
				bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(20)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(20)
				if ((tmp2)){
					HX_STACK_LINE(20)
					break;
				}
				HX_STACK_LINE(20)
				int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(20)
				int i = tmp3;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(21)
				::Vector tmp4 = ::Vector_obj::__new(null(),null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(21)
				a->push(tmp4);
			}
		}
		HX_STACK_LINE(24)
		{
			HX_STACK_LINE(24)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(24)
			int tmp = this->planets->length;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(24)
			int tmp1 = (tmp - (int)1);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(24)
			int _g = tmp1;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(24)
			while((true)){
				HX_STACK_LINE(24)
				bool tmp2 = (_g1 < _g);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(24)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(24)
				if ((tmp3)){
					HX_STACK_LINE(24)
					break;
				}
				HX_STACK_LINE(24)
				int tmp4 = (_g1)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(24)
				int i = tmp4;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(26)
				{
					HX_STACK_LINE(26)
					int tmp5 = (i + (int)1);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(26)
					int _g3 = tmp5;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(26)
					int tmp6 = this->planets->length;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(26)
					int _g2 = tmp6;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(26)
					while((true)){
						HX_STACK_LINE(26)
						bool tmp7 = (_g3 < _g2);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(26)
						bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(26)
						if ((tmp8)){
							HX_STACK_LINE(26)
							break;
						}
						HX_STACK_LINE(26)
						int tmp9 = (_g3)++;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(26)
						int j = tmp9;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(27)
						::String tmp10 = (HX_HCSTRING("planets[","\x20","\xcd","\xec","\xf2") + i);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(27)
						::String tmp11 = (tmp10 + HX_HCSTRING("].v is : (","\x27","\x68","\x3e","\x9a"));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(27)
						::Planet tmp12 = this->planets->__get(i).StaticCast< ::Planet >();		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(27)
						Float tmp13 = tmp12->v->x;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(27)
						::String tmp14 = (tmp11 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(27)
						::String tmp15 = (tmp14 + HX_HCSTRING(" , ","\x94","\x6e","\x18","\x00"));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(27)
						::Planet tmp16 = this->planets->__get(i).StaticCast< ::Planet >();		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(27)
						Float tmp17 = tmp16->v->y;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(27)
						::String tmp18 = (tmp15 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(27)
						::String tmp19 = (tmp18 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(27)
						Dynamic tmp20 = hx::SourceInfo(HX_HCSTRING("System.hx","\x0f","\x4b","\x4f","\xec"),27,HX_HCSTRING("System","\x0f","\x0b","\x77","\x27"),HX_HCSTRING("update","\x09","\x86","\x05","\x87"));		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(27)
						::haxe::Log_obj::trace(tmp19,tmp20);
						HX_STACK_LINE(28)
						::String tmp21 = (HX_HCSTRING("planets[","\x20","\xcd","\xec","\xf2") + j);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(28)
						::String tmp22 = (tmp21 + HX_HCSTRING("].v is : (","\x27","\x68","\x3e","\x9a"));		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(28)
						::Planet tmp23 = this->planets->__get(j).StaticCast< ::Planet >();		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(28)
						Float tmp24 = tmp23->v->x;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(28)
						::String tmp25 = (tmp22 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(28)
						::String tmp26 = (tmp25 + HX_HCSTRING(" , ","\x94","\x6e","\x18","\x00"));		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(28)
						::Planet tmp27 = this->planets->__get(j).StaticCast< ::Planet >();		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(28)
						Float tmp28 = tmp27->v->y;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(28)
						::String tmp29 = (tmp26 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(28)
						::String tmp30 = (tmp29 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(28)
						Dynamic tmp31 = hx::SourceInfo(HX_HCSTRING("System.hx","\x0f","\x4b","\x4f","\xec"),28,HX_HCSTRING("System","\x0f","\x0b","\x77","\x27"),HX_HCSTRING("update","\x09","\x86","\x05","\x87"));		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(28)
						::haxe::Log_obj::trace(tmp30,tmp31);
						HX_STACK_LINE(30)
						::Planet tmp32 = this->planets->__get(j).StaticCast< ::Planet >();		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(30)
						::Planet tmp33 = this->planets->__get(i).StaticCast< ::Planet >();		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(30)
						::Vector tmp34 = tmp33->p;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(30)
						::Vector tmp35 = tmp32->p->sub(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(30)
						::Vector force = tmp35;		HX_STACK_VAR(force,"force");
						HX_STACK_LINE(31)
						::String tmp36 = (HX_HCSTRING("force is : (","\x21","\x95","\xb1","\x52") + force->x);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(31)
						::String tmp37 = (tmp36 + HX_HCSTRING(" , ","\x94","\x6e","\x18","\x00"));		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(31)
						Float tmp38 = force->y;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(31)
						::String tmp39 = (tmp37 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(31)
						::String tmp40 = (tmp39 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(31)
						Dynamic tmp41 = hx::SourceInfo(HX_HCSTRING("System.hx","\x0f","\x4b","\x4f","\xec"),31,HX_HCSTRING("System","\x0f","\x0b","\x77","\x27"),HX_HCSTRING("update","\x09","\x86","\x05","\x87"));		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(31)
						::haxe::Log_obj::trace(tmp40,tmp41);
						HX_STACK_LINE(32)
						Float tmp42 = this->g;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(32)
						::Planet tmp43 = this->planets->__get(i).StaticCast< ::Planet >();		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(32)
						Float tmp44 = tmp43->m;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(32)
						Float tmp45 = (tmp42 * tmp44);		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(32)
						::Planet tmp46 = this->planets->__get(j).StaticCast< ::Planet >();		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(32)
						Float tmp47 = tmp46->m;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(32)
						Float tmp48 = (tmp45 * tmp47);		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(33)
						Float tmp49 = (force->x * force->x);		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(33)
						Float tmp50 = (force->y * force->y);		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(33)
						Float tmp51 = (tmp49 + tmp50);		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(32)
						Float tmp52 = (Float(tmp48) / Float(tmp51));		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(32)
						::Vector tmp53 = force->scalerProduct(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(32)
						force = tmp53;
						HX_STACK_LINE(34)
						::String tmp54 = (HX_HCSTRING("force is: ( ","\x9d","\x6d","\xcd","\x63") + force->x);		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(34)
						::String tmp55 = (tmp54 + HX_HCSTRING(" , ","\x94","\x6e","\x18","\x00"));		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(34)
						Float tmp56 = force->y;		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(34)
						::String tmp57 = (tmp55 + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(34)
						::String tmp58 = (tmp57 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(34)
						Dynamic tmp59 = hx::SourceInfo(HX_HCSTRING("System.hx","\x0f","\x4b","\x4f","\xec"),34,HX_HCSTRING("System","\x0f","\x0b","\x77","\x27"),HX_HCSTRING("update","\x09","\x86","\x05","\x87"));		HX_STACK_VAR(tmp59,"tmp59");
						HX_STACK_LINE(34)
						::haxe::Log_obj::trace(tmp58,tmp59);
						HX_STACK_LINE(35)
						::Planet tmp60 = this->planets->__get(i).StaticCast< ::Planet >();		HX_STACK_VAR(tmp60,"tmp60");
						HX_STACK_LINE(35)
						Float tmp61 = tmp60->m;		HX_STACK_VAR(tmp61,"tmp61");
						HX_STACK_LINE(35)
						Float tmp62 = (Float((int)1) / Float(tmp61));		HX_STACK_VAR(tmp62,"tmp62");
						HX_STACK_LINE(35)
						::Vector tmp63 = force->scalerProduct(tmp62);		HX_STACK_VAR(tmp63,"tmp63");
						HX_STACK_LINE(35)
						::Vector acc = tmp63;		HX_STACK_VAR(acc,"acc");
						HX_STACK_LINE(36)
						::String tmp64 = (HX_HCSTRING("acc is: ( ","\x07","\x65","\xc0","\x19") + acc->x);		HX_STACK_VAR(tmp64,"tmp64");
						HX_STACK_LINE(36)
						::String tmp65 = (tmp64 + HX_HCSTRING(" , ","\x94","\x6e","\x18","\x00"));		HX_STACK_VAR(tmp65,"tmp65");
						HX_STACK_LINE(36)
						Float tmp66 = acc->y;		HX_STACK_VAR(tmp66,"tmp66");
						HX_STACK_LINE(36)
						::String tmp67 = (tmp65 + tmp66);		HX_STACK_VAR(tmp67,"tmp67");
						HX_STACK_LINE(36)
						::String tmp68 = (tmp67 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp68,"tmp68");
						HX_STACK_LINE(36)
						Dynamic tmp69 = hx::SourceInfo(HX_HCSTRING("System.hx","\x0f","\x4b","\x4f","\xec"),36,HX_HCSTRING("System","\x0f","\x0b","\x77","\x27"),HX_HCSTRING("update","\x09","\x86","\x05","\x87"));		HX_STACK_VAR(tmp69,"tmp69");
						HX_STACK_LINE(36)
						::haxe::Log_obj::trace(tmp68,tmp69);
						HX_STACK_LINE(37)
						::Vector tmp70 = a->__get(i).StaticCast< ::Vector >();		HX_STACK_VAR(tmp70,"tmp70");
						HX_STACK_LINE(37)
						::Vector tmp71 = acc;		HX_STACK_VAR(tmp71,"tmp71");
						HX_STACK_LINE(37)
						::Vector tmp72 = tmp70->add(tmp71);		HX_STACK_VAR(tmp72,"tmp72");
						HX_STACK_LINE(37)
						a[i] = tmp72;
						HX_STACK_LINE(38)
						int tmp73 = (int)-1;		HX_STACK_VAR(tmp73,"tmp73");
						HX_STACK_LINE(38)
						::Planet tmp74 = this->planets->__get(j).StaticCast< ::Planet >();		HX_STACK_VAR(tmp74,"tmp74");
						HX_STACK_LINE(38)
						Float tmp75 = tmp74->m;		HX_STACK_VAR(tmp75,"tmp75");
						HX_STACK_LINE(38)
						Float tmp76 = (Float(tmp73) / Float(tmp75));		HX_STACK_VAR(tmp76,"tmp76");
						HX_STACK_LINE(38)
						::Vector tmp77 = force->scalerProduct(tmp76);		HX_STACK_VAR(tmp77,"tmp77");
						HX_STACK_LINE(38)
						acc = tmp77;
						HX_STACK_LINE(39)
						::String tmp78 = (HX_HCSTRING("acc j is: ( ","\xbd","\xfb","\x13","\xb5") + acc->x);		HX_STACK_VAR(tmp78,"tmp78");
						HX_STACK_LINE(39)
						::String tmp79 = (tmp78 + HX_HCSTRING(" , ","\x94","\x6e","\x18","\x00"));		HX_STACK_VAR(tmp79,"tmp79");
						HX_STACK_LINE(39)
						Float tmp80 = acc->y;		HX_STACK_VAR(tmp80,"tmp80");
						HX_STACK_LINE(39)
						::String tmp81 = (tmp79 + tmp80);		HX_STACK_VAR(tmp81,"tmp81");
						HX_STACK_LINE(39)
						::String tmp82 = (tmp81 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp82,"tmp82");
						HX_STACK_LINE(39)
						Dynamic tmp83 = hx::SourceInfo(HX_HCSTRING("System.hx","\x0f","\x4b","\x4f","\xec"),39,HX_HCSTRING("System","\x0f","\x0b","\x77","\x27"),HX_HCSTRING("update","\x09","\x86","\x05","\x87"));		HX_STACK_VAR(tmp83,"tmp83");
						HX_STACK_LINE(39)
						::haxe::Log_obj::trace(tmp82,tmp83);
						HX_STACK_LINE(40)
						::Vector tmp84 = a->__get(j).StaticCast< ::Vector >();		HX_STACK_VAR(tmp84,"tmp84");
						HX_STACK_LINE(40)
						::Vector tmp85 = acc;		HX_STACK_VAR(tmp85,"tmp85");
						HX_STACK_LINE(40)
						::Vector tmp86 = tmp84->add(tmp85);		HX_STACK_VAR(tmp86,"tmp86");
						HX_STACK_LINE(40)
						a[j] = tmp86;
					}
				}
			}
		}
		HX_STACK_LINE(45)
		{
			HX_STACK_LINE(45)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(45)
			int tmp = this->planets->length;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(45)
			int _g = tmp;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(45)
			while((true)){
				HX_STACK_LINE(45)
				bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(45)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(45)
				if ((tmp2)){
					HX_STACK_LINE(45)
					break;
				}
				HX_STACK_LINE(45)
				int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(45)
				int i = tmp3;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(46)
				::String tmp4 = (HX_HCSTRING("a[","\xda","\x54","\x00","\x00") + i);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(46)
				::String tmp5 = (tmp4 + HX_HCSTRING("] is : (","\xef","\xd8","\xe2","\x41"));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(46)
				::Vector tmp6 = a->__get(i).StaticCast< ::Vector >();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(46)
				Float tmp7 = tmp6->x;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(46)
				::String tmp8 = (tmp5 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(46)
				::String tmp9 = (tmp8 + HX_HCSTRING(" , ","\x94","\x6e","\x18","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(46)
				::Vector tmp10 = a->__get(i).StaticCast< ::Vector >();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(46)
				Float tmp11 = tmp10->y;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(46)
				::String tmp12 = (tmp9 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(46)
				::String tmp13 = (tmp12 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(46)
				Dynamic tmp14 = hx::SourceInfo(HX_HCSTRING("System.hx","\x0f","\x4b","\x4f","\xec"),46,HX_HCSTRING("System","\x0f","\x0b","\x77","\x27"),HX_HCSTRING("update","\x09","\x86","\x05","\x87"));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(46)
				::haxe::Log_obj::trace(tmp13,tmp14);
				HX_STACK_LINE(47)
				::Vector tmp15 = a->__get(i).StaticCast< ::Vector >();		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(47)
				::Planet tmp16 = this->planets->__get(i).StaticCast< ::Planet >();		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(47)
				tmp16->a = tmp15;
				HX_STACK_LINE(48)
				::Planet tmp17 = this->planets->__get(i).StaticCast< ::Planet >();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(48)
				tmp17->update();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(System_obj,update,(void))

Float System_obj::EPSILON;


System_obj::System_obj()
{
}

void System_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(System);
	HX_MARK_MEMBER_NAME(planets,"planets");
	HX_MARK_MEMBER_NAME(g,"g");
	HX_MARK_END_CLASS();
}

void System_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(planets,"planets");
	HX_VISIT_MEMBER_NAME(g,"g");
}

Dynamic System_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"g") ) { return g; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"planets") ) { return planets; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"addPlanet") ) { return addPlanet_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic System_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"g") ) { g=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"planets") ) { planets=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void System_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("planets","\xdb","\xb2","\xcf","\x82"));
	outFields->push(HX_HCSTRING("g","\x67","\x00","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(System_obj,planets),HX_HCSTRING("planets","\xdb","\xb2","\xcf","\x82")},
	{hx::fsFloat,(int)offsetof(System_obj,g),HX_HCSTRING("g","\x67","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsFloat,(void *) &System_obj::EPSILON,HX_HCSTRING("EPSILON","\x4a","\x89","\x92","\x2c")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("planets","\xdb","\xb2","\xcf","\x82"),
	HX_HCSTRING("g","\x67","\x00","\x00","\x00"),
	HX_HCSTRING("addPlanet","\x99","\xc7","\xd4","\xef"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(System_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(System_obj::EPSILON,"EPSILON");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(System_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(System_obj::EPSILON,"EPSILON");
};

#endif

hx::Class System_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("EPSILON","\x4a","\x89","\x92","\x2c"),
	::String(null()) };

void System_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("System","\x0f","\x0b","\x77","\x27");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< System_obj >;
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

void System_obj::__boot()
{
	EPSILON= ((Float)0.0000001);
}

