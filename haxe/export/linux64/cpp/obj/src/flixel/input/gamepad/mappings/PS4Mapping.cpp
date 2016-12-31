#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadAnalogStick
#include <flixel/input/gamepad/FlxGamepadAnalogStick.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadAttachment
#include <flixel/input/gamepad/FlxGamepadAttachment.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_id_PS4ID
#include <flixel/input/gamepad/id/PS4ID.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_FlxGamepadMapping
#include <flixel/input/gamepad/mappings/FlxGamepadMapping.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_PS4Mapping
#include <flixel/input/gamepad/mappings/PS4Mapping.h>
#endif
namespace flixel{
namespace input{
namespace gamepad{
namespace mappings{

Void PS4Mapping_obj::__construct(::flixel::input::gamepad::FlxGamepadAttachment attachment)
{
HX_STACK_FRAME("flixel.input.gamepad.mappings.PS4Mapping","new",0x2b618f95,"flixel.input.gamepad.mappings.PS4Mapping.new","flixel/input/gamepad/mappings/PS4Mapping.hx",6,0x24847fdd)
HX_STACK_THIS(this)
HX_STACK_ARG(attachment,"attachment")
{
	HX_STACK_LINE(6)
	::flixel::input::gamepad::FlxGamepadAttachment tmp = attachment;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(6)
	super::__construct(tmp);
}
;
	return null();
}

//PS4Mapping_obj::~PS4Mapping_obj() { }

Dynamic PS4Mapping_obj::__CreateEmpty() { return  new PS4Mapping_obj; }
hx::ObjectPtr< PS4Mapping_obj > PS4Mapping_obj::__new(::flixel::input::gamepad::FlxGamepadAttachment attachment)
{  hx::ObjectPtr< PS4Mapping_obj > _result_ = new PS4Mapping_obj();
	_result_->__construct(attachment);
	return _result_;}

Dynamic PS4Mapping_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PS4Mapping_obj > _result_ = new PS4Mapping_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void PS4Mapping_obj::initValues( ){
{
		HX_STACK_FRAME("flixel.input.gamepad.mappings.PS4Mapping","initValues",0xcf26207d,"flixel.input.gamepad.mappings.PS4Mapping.initValues","flixel/input/gamepad/mappings/PS4Mapping.hx",20,0x24847fdd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(21)
		::flixel::input::gamepad::FlxGamepadAnalogStick tmp = ::flixel::input::gamepad::id::PS4ID_obj::LEFT_ANALOG_STICK;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(21)
		this->leftStick = tmp;
		HX_STACK_LINE(22)
		::flixel::input::gamepad::FlxGamepadAnalogStick tmp1 = ::flixel::input::gamepad::id::PS4ID_obj::RIGHT_ANALOG_STICK;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(22)
		this->rightStick = tmp1;
	}
return null();
}


int PS4Mapping_obj::getID( int rawID){
	HX_STACK_FRAME("flixel.input.gamepad.mappings.PS4Mapping","getID",0xeac44866,"flixel.input.gamepad.mappings.PS4Mapping.getID","flixel/input/gamepad/mappings/PS4Mapping.hx",26,0x24847fdd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rawID,"rawID")
	HX_STACK_LINE(27)
	int tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(27)
	{
		HX_STACK_LINE(27)
		int id = rawID;		HX_STACK_VAR(id,"id");
		HX_STACK_LINE(27)
		int id1 = rawID;		HX_STACK_VAR(id1,"id1");
		HX_STACK_LINE(27)
		int id2 = rawID;		HX_STACK_VAR(id2,"id2");
		HX_STACK_LINE(27)
		int id3 = rawID;		HX_STACK_VAR(id3,"id3");
		HX_STACK_LINE(27)
		int id4 = rawID;		HX_STACK_VAR(id4,"id4");
		HX_STACK_LINE(27)
		int id5 = rawID;		HX_STACK_VAR(id5,"id5");
		HX_STACK_LINE(27)
		int id6 = rawID;		HX_STACK_VAR(id6,"id6");
		HX_STACK_LINE(27)
		int id7 = rawID;		HX_STACK_VAR(id7,"id7");
		HX_STACK_LINE(27)
		int tmp1 = rawID;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(27)
		switch( (int)(tmp1)){
			case (int)1: {
				HX_STACK_LINE(29)
				tmp = (int)0;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(30)
				tmp = (int)1;
			}
			;break;
			case (int)0: {
				HX_STACK_LINE(31)
				tmp = (int)2;
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(32)
				tmp = (int)3;
			}
			;break;
			case (int)8: {
				HX_STACK_LINE(33)
				tmp = (int)6;
			}
			;break;
			case (int)12: {
				HX_STACK_LINE(34)
				tmp = (int)10;
			}
			;break;
			case (int)9: {
				HX_STACK_LINE(35)
				tmp = (int)7;
			}
			;break;
			case (int)10: {
				HX_STACK_LINE(36)
				tmp = (int)8;
			}
			;break;
			case (int)11: {
				HX_STACK_LINE(37)
				tmp = (int)9;
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(38)
				tmp = (int)4;
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(39)
				tmp = (int)5;
			}
			;break;
			case (int)17: {
				HX_STACK_LINE(40)
				tmp = (int)12;
			}
			;break;
			case (int)18: {
				HX_STACK_LINE(41)
				tmp = (int)11;
			}
			;break;
			case (int)15: {
				HX_STACK_LINE(42)
				tmp = (int)13;
			}
			;break;
			case (int)16: {
				HX_STACK_LINE(43)
				tmp = (int)14;
			}
			;break;
			default: {
				HX_STACK_LINE(44)
				int tmp2 = id;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(44)
				::flixel::input::gamepad::FlxGamepadAnalogStick tmp3 = this->leftStick;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(44)
				int tmp4 = tmp3->rawUp;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(44)
				bool tmp5 = (tmp2 == tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(44)
				if ((tmp5)){
					HX_STACK_LINE(44)
					tmp = (int)34;
				}
				else{
					HX_STACK_LINE(45)
					int tmp6 = id1;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(45)
					::flixel::input::gamepad::FlxGamepadAnalogStick tmp7 = this->leftStick;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(45)
					int tmp8 = tmp7->rawDown;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(45)
					bool tmp9 = (tmp6 == tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(45)
					if ((tmp9)){
						HX_STACK_LINE(45)
						tmp = (int)36;
					}
					else{
						HX_STACK_LINE(46)
						int tmp10 = id2;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(46)
						::flixel::input::gamepad::FlxGamepadAnalogStick tmp11 = this->leftStick;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(46)
						int tmp12 = tmp11->rawLeft;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(46)
						bool tmp13 = (tmp10 == tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(46)
						if ((tmp13)){
							HX_STACK_LINE(46)
							tmp = (int)37;
						}
						else{
							HX_STACK_LINE(47)
							int tmp14 = id3;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(47)
							::flixel::input::gamepad::FlxGamepadAnalogStick tmp15 = this->leftStick;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(47)
							int tmp16 = tmp15->rawRight;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(47)
							bool tmp17 = (tmp14 == tmp16);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(47)
							if ((tmp17)){
								HX_STACK_LINE(47)
								tmp = (int)35;
							}
							else{
								HX_STACK_LINE(48)
								int tmp18 = id4;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(48)
								::flixel::input::gamepad::FlxGamepadAnalogStick tmp19 = this->rightStick;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(48)
								int tmp20 = tmp19->rawUp;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(48)
								bool tmp21 = (tmp18 == tmp20);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(48)
								if ((tmp21)){
									HX_STACK_LINE(48)
									tmp = (int)38;
								}
								else{
									HX_STACK_LINE(49)
									int tmp22 = id5;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(49)
									::flixel::input::gamepad::FlxGamepadAnalogStick tmp23 = this->rightStick;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(49)
									int tmp24 = tmp23->rawDown;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(49)
									bool tmp25 = (tmp22 == tmp24);		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(49)
									if ((tmp25)){
										HX_STACK_LINE(49)
										tmp = (int)40;
									}
									else{
										HX_STACK_LINE(50)
										int tmp26 = id6;		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(50)
										::flixel::input::gamepad::FlxGamepadAnalogStick tmp27 = this->rightStick;		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(50)
										int tmp28 = tmp27->rawLeft;		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(50)
										bool tmp29 = (tmp26 == tmp28);		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(50)
										if ((tmp29)){
											HX_STACK_LINE(50)
											tmp = (int)41;
										}
										else{
											HX_STACK_LINE(51)
											int tmp30 = id7;		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(51)
											::flixel::input::gamepad::FlxGamepadAnalogStick tmp31 = this->rightStick;		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(51)
											int tmp32 = tmp31->rawRight;		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(51)
											bool tmp33 = (tmp30 == tmp32);		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(51)
											if ((tmp33)){
												HX_STACK_LINE(51)
												tmp = (int)39;
											}
											else{
												HX_STACK_LINE(52)
												tmp = (int)-1;
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	HX_STACK_LINE(27)
	return tmp;
}


int PS4Mapping_obj::getRawID( int ID){
	HX_STACK_FRAME("flixel.input.gamepad.mappings.PS4Mapping","getRawID",0x44a56ff8,"flixel.input.gamepad.mappings.PS4Mapping.getRawID","flixel/input/gamepad/mappings/PS4Mapping.hx",57,0x24847fdd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ID,"ID")
	HX_STACK_LINE(58)
	int tmp = ID;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(58)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(58)
	switch( (int)(tmp)){
		case (int)0: {
			HX_STACK_LINE(60)
			tmp1 = (int)1;
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(61)
			tmp1 = (int)2;
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(62)
			tmp1 = (int)0;
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(63)
			tmp1 = (int)3;
		}
		;break;
		case (int)6: {
			HX_STACK_LINE(64)
			tmp1 = (int)8;
		}
		;break;
		case (int)10: {
			HX_STACK_LINE(65)
			tmp1 = (int)12;
		}
		;break;
		case (int)7: {
			HX_STACK_LINE(66)
			tmp1 = (int)9;
		}
		;break;
		case (int)8: {
			HX_STACK_LINE(67)
			tmp1 = (int)10;
		}
		;break;
		case (int)9: {
			HX_STACK_LINE(68)
			tmp1 = (int)11;
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(69)
			tmp1 = (int)4;
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(70)
			tmp1 = (int)5;
		}
		;break;
		case (int)11: {
			HX_STACK_LINE(71)
			tmp1 = (int)18;
		}
		;break;
		case (int)12: {
			HX_STACK_LINE(72)
			tmp1 = (int)17;
		}
		;break;
		case (int)13: {
			HX_STACK_LINE(73)
			tmp1 = (int)15;
		}
		;break;
		case (int)14: {
			HX_STACK_LINE(74)
			tmp1 = (int)16;
		}
		;break;
		case (int)17: {
			HX_STACK_LINE(75)
			tmp1 = (int)3;
		}
		;break;
		case (int)18: {
			HX_STACK_LINE(76)
			tmp1 = (int)4;
		}
		;break;
		case (int)34: {
			HX_STACK_LINE(77)
			::flixel::input::gamepad::FlxGamepadAnalogStick tmp2 = ::flixel::input::gamepad::id::PS4ID_obj::LEFT_ANALOG_STICK;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(77)
			tmp1 = tmp2->rawUp;
		}
		;break;
		case (int)36: {
			HX_STACK_LINE(78)
			::flixel::input::gamepad::FlxGamepadAnalogStick tmp2 = ::flixel::input::gamepad::id::PS4ID_obj::LEFT_ANALOG_STICK;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(78)
			tmp1 = tmp2->rawDown;
		}
		;break;
		case (int)37: {
			HX_STACK_LINE(79)
			::flixel::input::gamepad::FlxGamepadAnalogStick tmp2 = ::flixel::input::gamepad::id::PS4ID_obj::LEFT_ANALOG_STICK;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(79)
			tmp1 = tmp2->rawLeft;
		}
		;break;
		case (int)35: {
			HX_STACK_LINE(80)
			::flixel::input::gamepad::FlxGamepadAnalogStick tmp2 = ::flixel::input::gamepad::id::PS4ID_obj::LEFT_ANALOG_STICK;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(80)
			tmp1 = tmp2->rawRight;
		}
		;break;
		case (int)38: {
			HX_STACK_LINE(81)
			::flixel::input::gamepad::FlxGamepadAnalogStick tmp2 = ::flixel::input::gamepad::id::PS4ID_obj::RIGHT_ANALOG_STICK;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(81)
			tmp1 = tmp2->rawUp;
		}
		;break;
		case (int)40: {
			HX_STACK_LINE(82)
			::flixel::input::gamepad::FlxGamepadAnalogStick tmp2 = ::flixel::input::gamepad::id::PS4ID_obj::RIGHT_ANALOG_STICK;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(82)
			tmp1 = tmp2->rawDown;
		}
		;break;
		case (int)41: {
			HX_STACK_LINE(83)
			::flixel::input::gamepad::FlxGamepadAnalogStick tmp2 = ::flixel::input::gamepad::id::PS4ID_obj::RIGHT_ANALOG_STICK;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(83)
			tmp1 = tmp2->rawLeft;
		}
		;break;
		case (int)39: {
			HX_STACK_LINE(84)
			::flixel::input::gamepad::FlxGamepadAnalogStick tmp2 = ::flixel::input::gamepad::id::PS4ID_obj::RIGHT_ANALOG_STICK;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(84)
			tmp1 = tmp2->rawRight;
		}
		;break;
		case (int)22: {
			HX_STACK_LINE(86)
			tmp1 = (int)25;
		}
		;break;
		case (int)23: {
			HX_STACK_LINE(87)
			tmp1 = (int)26;
		}
		;break;
		default: {
			HX_STACK_LINE(89)
			tmp1 = (int)-1;
		}
	}
	HX_STACK_LINE(58)
	return tmp1;
}


int PS4Mapping_obj::axisIndexToRawID( int axisID){
	HX_STACK_FRAME("flixel.input.gamepad.mappings.PS4Mapping","axisIndexToRawID",0x10ca1942,"flixel.input.gamepad.mappings.PS4Mapping.axisIndexToRawID","flixel/input/gamepad/mappings/PS4Mapping.hx",95,0x24847fdd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(axisID,"axisID")
	HX_STACK_LINE(97)
	int tmp = axisID;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(97)
	::flixel::input::gamepad::FlxGamepadAnalogStick tmp1 = this->leftStick;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(97)
	int tmp2 = tmp1->x;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(97)
	bool tmp3 = (tmp == tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(97)
	int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(97)
	if ((tmp3)){
		HX_STACK_LINE(97)
		tmp4 = (int)21;
	}
	else{
		HX_STACK_LINE(98)
		int tmp5 = axisID;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(98)
		::flixel::input::gamepad::FlxGamepadAnalogStick tmp6 = this->leftStick;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(98)
		int tmp7 = tmp6->y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(98)
		bool tmp8 = (tmp5 == tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(98)
		if ((tmp8)){
			HX_STACK_LINE(98)
			tmp4 = (int)22;
		}
		else{
			HX_STACK_LINE(99)
			int tmp9 = axisID;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(99)
			::flixel::input::gamepad::FlxGamepadAnalogStick tmp10 = this->rightStick;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(99)
			int tmp11 = tmp10->x;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(99)
			bool tmp12 = (tmp9 == tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(99)
			if ((tmp12)){
				HX_STACK_LINE(99)
				tmp4 = (int)23;
			}
			else{
				HX_STACK_LINE(100)
				int tmp13 = axisID;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(100)
				::flixel::input::gamepad::FlxGamepadAnalogStick tmp14 = this->rightStick;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(100)
				int tmp15 = tmp14->y;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(100)
				bool tmp16 = (tmp13 == tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(100)
				if ((tmp16)){
					HX_STACK_LINE(100)
					tmp4 = (int)24;
				}
				else{
					HX_STACK_LINE(101)
					bool tmp17 = (axisID == (int)3);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(101)
					if ((tmp17)){
						HX_STACK_LINE(101)
						tmp4 = (int)25;
					}
					else{
						HX_STACK_LINE(102)
						bool tmp18 = (axisID == (int)4);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(102)
						if ((tmp18)){
							HX_STACK_LINE(102)
							tmp4 = (int)26;
						}
						else{
							HX_STACK_LINE(103)
							tmp4 = axisID;
						}
					}
				}
			}
		}
	}
	HX_STACK_LINE(97)
	return tmp4;
}


int PS4Mapping_obj::LEFT_ANALOG_STICK_FAKE_X;

int PS4Mapping_obj::LEFT_ANALOG_STICK_FAKE_Y;

int PS4Mapping_obj::RIGHT_ANALOG_STICK_FAKE_X;

int PS4Mapping_obj::RIGHT_ANALOG_STICK_FAKE_Y;

int PS4Mapping_obj::LEFT_TRIGGER_FAKE;

int PS4Mapping_obj::RIGHT_TRIGGER_FAKE;


PS4Mapping_obj::PS4Mapping_obj()
{
}

Dynamic PS4Mapping_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"getID") ) { return getID_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getRawID") ) { return getRawID_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initValues") ) { return initValues_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"axisIndexToRawID") ) { return axisIndexToRawID_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &PS4Mapping_obj::LEFT_ANALOG_STICK_FAKE_X,HX_HCSTRING("LEFT_ANALOG_STICK_FAKE_X","\x94","\xb3","\x65","\x38")},
	{hx::fsInt,(void *) &PS4Mapping_obj::LEFT_ANALOG_STICK_FAKE_Y,HX_HCSTRING("LEFT_ANALOG_STICK_FAKE_Y","\x95","\xb3","\x65","\x38")},
	{hx::fsInt,(void *) &PS4Mapping_obj::RIGHT_ANALOG_STICK_FAKE_X,HX_HCSTRING("RIGHT_ANALOG_STICK_FAKE_X","\xc9","\x1f","\x02","\xa1")},
	{hx::fsInt,(void *) &PS4Mapping_obj::RIGHT_ANALOG_STICK_FAKE_Y,HX_HCSTRING("RIGHT_ANALOG_STICK_FAKE_Y","\xca","\x1f","\x02","\xa1")},
	{hx::fsInt,(void *) &PS4Mapping_obj::LEFT_TRIGGER_FAKE,HX_HCSTRING("LEFT_TRIGGER_FAKE","\xd4","\x89","\xc9","\xfd")},
	{hx::fsInt,(void *) &PS4Mapping_obj::RIGHT_TRIGGER_FAKE,HX_HCSTRING("RIGHT_TRIGGER_FAKE","\xff","\x28","\x48","\x11")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("initValues","\x12","\x5f","\xfc","\x53"),
	HX_HCSTRING("getID","\xf1","\x91","\x60","\x91"),
	HX_HCSTRING("getRawID","\x4d","\x6f","\xfd","\x43"),
	HX_HCSTRING("axisIndexToRawID","\x97","\xf5","\xe0","\x40"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PS4Mapping_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(PS4Mapping_obj::LEFT_ANALOG_STICK_FAKE_X,"LEFT_ANALOG_STICK_FAKE_X");
	HX_MARK_MEMBER_NAME(PS4Mapping_obj::LEFT_ANALOG_STICK_FAKE_Y,"LEFT_ANALOG_STICK_FAKE_Y");
	HX_MARK_MEMBER_NAME(PS4Mapping_obj::RIGHT_ANALOG_STICK_FAKE_X,"RIGHT_ANALOG_STICK_FAKE_X");
	HX_MARK_MEMBER_NAME(PS4Mapping_obj::RIGHT_ANALOG_STICK_FAKE_Y,"RIGHT_ANALOG_STICK_FAKE_Y");
	HX_MARK_MEMBER_NAME(PS4Mapping_obj::LEFT_TRIGGER_FAKE,"LEFT_TRIGGER_FAKE");
	HX_MARK_MEMBER_NAME(PS4Mapping_obj::RIGHT_TRIGGER_FAKE,"RIGHT_TRIGGER_FAKE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PS4Mapping_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(PS4Mapping_obj::LEFT_ANALOG_STICK_FAKE_X,"LEFT_ANALOG_STICK_FAKE_X");
	HX_VISIT_MEMBER_NAME(PS4Mapping_obj::LEFT_ANALOG_STICK_FAKE_Y,"LEFT_ANALOG_STICK_FAKE_Y");
	HX_VISIT_MEMBER_NAME(PS4Mapping_obj::RIGHT_ANALOG_STICK_FAKE_X,"RIGHT_ANALOG_STICK_FAKE_X");
	HX_VISIT_MEMBER_NAME(PS4Mapping_obj::RIGHT_ANALOG_STICK_FAKE_Y,"RIGHT_ANALOG_STICK_FAKE_Y");
	HX_VISIT_MEMBER_NAME(PS4Mapping_obj::LEFT_TRIGGER_FAKE,"LEFT_TRIGGER_FAKE");
	HX_VISIT_MEMBER_NAME(PS4Mapping_obj::RIGHT_TRIGGER_FAKE,"RIGHT_TRIGGER_FAKE");
};

#endif

hx::Class PS4Mapping_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("LEFT_ANALOG_STICK_FAKE_X","\x94","\xb3","\x65","\x38"),
	HX_HCSTRING("LEFT_ANALOG_STICK_FAKE_Y","\x95","\xb3","\x65","\x38"),
	HX_HCSTRING("RIGHT_ANALOG_STICK_FAKE_X","\xc9","\x1f","\x02","\xa1"),
	HX_HCSTRING("RIGHT_ANALOG_STICK_FAKE_Y","\xca","\x1f","\x02","\xa1"),
	HX_HCSTRING("LEFT_TRIGGER_FAKE","\xd4","\x89","\xc9","\xfd"),
	HX_HCSTRING("RIGHT_TRIGGER_FAKE","\xff","\x28","\x48","\x11"),
	::String(null()) };

void PS4Mapping_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.input.gamepad.mappings.PS4Mapping","\x23","\x21","\xfb","\x12");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< PS4Mapping_obj >;
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

void PS4Mapping_obj::__boot()
{
	LEFT_ANALOG_STICK_FAKE_X= (int)21;
	LEFT_ANALOG_STICK_FAKE_Y= (int)22;
	RIGHT_ANALOG_STICK_FAKE_X= (int)23;
	RIGHT_ANALOG_STICK_FAKE_Y= (int)24;
	LEFT_TRIGGER_FAKE= (int)25;
	RIGHT_TRIGGER_FAKE= (int)26;
}

} // end namespace flixel
} // end namespace input
} // end namespace gamepad
} // end namespace mappings
