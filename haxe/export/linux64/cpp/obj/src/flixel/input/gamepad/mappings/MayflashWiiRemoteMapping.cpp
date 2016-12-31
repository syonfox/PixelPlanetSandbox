#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadAnalogStick
#include <flixel/input/gamepad/FlxGamepadAnalogStick.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadAttachment
#include <flixel/input/gamepad/FlxGamepadAttachment.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_id_MayflashWiiRemoteID
#include <flixel/input/gamepad/id/MayflashWiiRemoteID.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_FlxGamepadMapping
#include <flixel/input/gamepad/mappings/FlxGamepadMapping.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_MayflashWiiRemoteMapping
#include <flixel/input/gamepad/mappings/MayflashWiiRemoteMapping.h>
#endif
namespace flixel{
namespace input{
namespace gamepad{
namespace mappings{

Void MayflashWiiRemoteMapping_obj::__construct(::flixel::input::gamepad::FlxGamepadAttachment attachment)
{
HX_STACK_FRAME("flixel.input.gamepad.mappings.MayflashWiiRemoteMapping","new",0x14c5ed14,"flixel.input.gamepad.mappings.MayflashWiiRemoteMapping.new","flixel/input/gamepad/mappings/MayflashWiiRemoteMapping.hx",7,0xb7763ebe)
HX_STACK_THIS(this)
HX_STACK_ARG(attachment,"attachment")
{
	HX_STACK_LINE(7)
	::flixel::input::gamepad::FlxGamepadAttachment tmp = attachment;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(7)
	super::__construct(tmp);
}
;
	return null();
}

//MayflashWiiRemoteMapping_obj::~MayflashWiiRemoteMapping_obj() { }

Dynamic MayflashWiiRemoteMapping_obj::__CreateEmpty() { return  new MayflashWiiRemoteMapping_obj; }
hx::ObjectPtr< MayflashWiiRemoteMapping_obj > MayflashWiiRemoteMapping_obj::__new(::flixel::input::gamepad::FlxGamepadAttachment attachment)
{  hx::ObjectPtr< MayflashWiiRemoteMapping_obj > _result_ = new MayflashWiiRemoteMapping_obj();
	_result_->__construct(attachment);
	return _result_;}

Dynamic MayflashWiiRemoteMapping_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MayflashWiiRemoteMapping_obj > _result_ = new MayflashWiiRemoteMapping_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void MayflashWiiRemoteMapping_obj::initValues( ){
{
		HX_STACK_FRAME("flixel.input.gamepad.mappings.MayflashWiiRemoteMapping","initValues",0x4dbe00de,"flixel.input.gamepad.mappings.MayflashWiiRemoteMapping.initValues","flixel/input/gamepad/mappings/MayflashWiiRemoteMapping.hx",22,0xb7763ebe)
		HX_STACK_THIS(this)
		HX_STACK_LINE(22)
		this->supportsPointer = true;
	}
return null();
}


int MayflashWiiRemoteMapping_obj::getID( int rawID){
	HX_STACK_FRAME("flixel.input.gamepad.mappings.MayflashWiiRemoteMapping","getID",0x3c1a43a5,"flixel.input.gamepad.mappings.MayflashWiiRemoteMapping.getID","flixel/input/gamepad/mappings/MayflashWiiRemoteMapping.hx",26,0xb7763ebe)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rawID,"rawID")
	HX_STACK_LINE(27)
	int tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(27)
	{
		HX_STACK_LINE(27)
		::flixel::input::gamepad::FlxGamepadAttachment tmp1 = this->attachment;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(27)
		::flixel::input::gamepad::FlxGamepadAttachment _g = tmp1;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(27)
		switch( (int)(_g->__Index())){
			case (int)1: {
				HX_STACK_LINE(29)
				int tmp2 = rawID;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(29)
				tmp = this->getIDClassicController(tmp2);
			}
			;break;
			case (int)0: {
				HX_STACK_LINE(30)
				int tmp2 = rawID;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(30)
				tmp = this->getIDNunchuk(tmp2);
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(31)
				int tmp2 = rawID;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(31)
				tmp = this->getIDDefault(tmp2);
			}
			;break;
		}
	}
	HX_STACK_LINE(27)
	return tmp;
}


int MayflashWiiRemoteMapping_obj::getIDClassicController( int rawID){
	HX_STACK_FRAME("flixel.input.gamepad.mappings.MayflashWiiRemoteMapping","getIDClassicController",0xdc580be9,"flixel.input.gamepad.mappings.MayflashWiiRemoteMapping.getIDClassicController","flixel/input/gamepad/mappings/MayflashWiiRemoteMapping.hx",36,0xb7763ebe)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rawID,"rawID")
	HX_STACK_LINE(37)
	int tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(37)
	{
		HX_STACK_LINE(37)
		int id = rawID;		HX_STACK_VAR(id,"id");
		HX_STACK_LINE(37)
		int id1 = rawID;		HX_STACK_VAR(id1,"id1");
		HX_STACK_LINE(37)
		int id2 = rawID;		HX_STACK_VAR(id2,"id2");
		HX_STACK_LINE(37)
		int id3 = rawID;		HX_STACK_VAR(id3,"id3");
		HX_STACK_LINE(37)
		int id4 = rawID;		HX_STACK_VAR(id4,"id4");
		HX_STACK_LINE(37)
		int id5 = rawID;		HX_STACK_VAR(id5,"id5");
		HX_STACK_LINE(37)
		int id6 = rawID;		HX_STACK_VAR(id6,"id6");
		HX_STACK_LINE(37)
		int id7 = rawID;		HX_STACK_VAR(id7,"id7");
		HX_STACK_LINE(37)
		int tmp1 = rawID;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(37)
		switch( (int)(tmp1)){
			case (int)3: {
				HX_STACK_LINE(39)
				tmp = (int)1;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(40)
				tmp = (int)0;
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(41)
				tmp = (int)3;
			}
			;break;
			case (int)0: {
				HX_STACK_LINE(42)
				tmp = (int)2;
			}
			;break;
			case (int)8: {
				HX_STACK_LINE(43)
				tmp = (int)6;
			}
			;break;
			case (int)11: {
				HX_STACK_LINE(44)
				tmp = (int)10;
			}
			;break;
			case (int)9: {
				HX_STACK_LINE(45)
				tmp = (int)7;
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(46)
				tmp = (int)17;
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(47)
				tmp = (int)18;
			}
			;break;
			case (int)6: {
				HX_STACK_LINE(48)
				tmp = (int)4;
			}
			;break;
			case (int)7: {
				HX_STACK_LINE(49)
				tmp = (int)5;
			}
			;break;
			case (int)13: {
				HX_STACK_LINE(50)
				tmp = (int)11;
			}
			;break;
			case (int)12: {
				HX_STACK_LINE(51)
				tmp = (int)12;
			}
			;break;
			case (int)14: {
				HX_STACK_LINE(52)
				tmp = (int)13;
			}
			;break;
			case (int)15: {
				HX_STACK_LINE(53)
				tmp = (int)14;
			}
			;break;
			default: {
				HX_STACK_LINE(54)
				int tmp2 = id;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(54)
				::flixel::input::gamepad::FlxGamepadAnalogStick tmp3 = this->leftStick;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(54)
				int tmp4 = tmp3->rawUp;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(54)
				bool tmp5 = (tmp2 == tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(54)
				if ((tmp5)){
					HX_STACK_LINE(54)
					tmp = (int)34;
				}
				else{
					HX_STACK_LINE(55)
					int tmp6 = id1;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(55)
					::flixel::input::gamepad::FlxGamepadAnalogStick tmp7 = this->leftStick;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(55)
					int tmp8 = tmp7->rawDown;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(55)
					bool tmp9 = (tmp6 == tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(55)
					if ((tmp9)){
						HX_STACK_LINE(55)
						tmp = (int)36;
					}
					else{
						HX_STACK_LINE(56)
						int tmp10 = id2;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(56)
						::flixel::input::gamepad::FlxGamepadAnalogStick tmp11 = this->leftStick;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(56)
						int tmp12 = tmp11->rawLeft;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(56)
						bool tmp13 = (tmp10 == tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(56)
						if ((tmp13)){
							HX_STACK_LINE(56)
							tmp = (int)37;
						}
						else{
							HX_STACK_LINE(57)
							int tmp14 = id3;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(57)
							::flixel::input::gamepad::FlxGamepadAnalogStick tmp15 = this->leftStick;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(57)
							int tmp16 = tmp15->rawRight;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(57)
							bool tmp17 = (tmp14 == tmp16);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(57)
							if ((tmp17)){
								HX_STACK_LINE(57)
								tmp = (int)35;
							}
							else{
								HX_STACK_LINE(58)
								int tmp18 = id4;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(58)
								::flixel::input::gamepad::FlxGamepadAnalogStick tmp19 = this->rightStick;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(58)
								int tmp20 = tmp19->rawUp;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(58)
								bool tmp21 = (tmp18 == tmp20);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(58)
								if ((tmp21)){
									HX_STACK_LINE(58)
									tmp = (int)38;
								}
								else{
									HX_STACK_LINE(59)
									int tmp22 = id5;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(59)
									::flixel::input::gamepad::FlxGamepadAnalogStick tmp23 = this->rightStick;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(59)
									int tmp24 = tmp23->rawDown;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(59)
									bool tmp25 = (tmp22 == tmp24);		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(59)
									if ((tmp25)){
										HX_STACK_LINE(59)
										tmp = (int)40;
									}
									else{
										HX_STACK_LINE(60)
										int tmp26 = id6;		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(60)
										::flixel::input::gamepad::FlxGamepadAnalogStick tmp27 = this->rightStick;		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(60)
										int tmp28 = tmp27->rawLeft;		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(60)
										bool tmp29 = (tmp26 == tmp28);		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(60)
										if ((tmp29)){
											HX_STACK_LINE(60)
											tmp = (int)41;
										}
										else{
											HX_STACK_LINE(61)
											int tmp30 = id7;		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(61)
											::flixel::input::gamepad::FlxGamepadAnalogStick tmp31 = this->rightStick;		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(61)
											int tmp32 = tmp31->rawRight;		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(61)
											bool tmp33 = (tmp30 == tmp32);		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(61)
											if ((tmp33)){
												HX_STACK_LINE(61)
												tmp = (int)39;
											}
											else{
												HX_STACK_LINE(62)
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
	HX_STACK_LINE(37)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(MayflashWiiRemoteMapping_obj,getIDClassicController,return )

int MayflashWiiRemoteMapping_obj::getIDNunchuk( int rawID){
	HX_STACK_FRAME("flixel.input.gamepad.mappings.MayflashWiiRemoteMapping","getIDNunchuk",0xf7a650dd,"flixel.input.gamepad.mappings.MayflashWiiRemoteMapping.getIDNunchuk","flixel/input/gamepad/mappings/MayflashWiiRemoteMapping.hx",67,0xb7763ebe)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rawID,"rawID")
	HX_STACK_LINE(68)
	int tmp = rawID;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(68)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(68)
	switch( (int)(tmp)){
		case (int)2: {
			HX_STACK_LINE(70)
			tmp1 = (int)0;
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(71)
			tmp1 = (int)1;
		}
		;break;
		case (int)0: {
			HX_STACK_LINE(72)
			tmp1 = (int)2;
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(73)
			tmp1 = (int)3;
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(74)
			tmp1 = (int)6;
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(75)
			tmp1 = (int)7;
		}
		;break;
		case (int)11: {
			HX_STACK_LINE(76)
			tmp1 = (int)10;
		}
		;break;
		case (int)7: {
			HX_STACK_LINE(77)
			tmp1 = (int)4;
		}
		;break;
		case (int)6: {
			HX_STACK_LINE(78)
			tmp1 = (int)17;
		}
		;break;
		case (int)13: {
			HX_STACK_LINE(79)
			tmp1 = (int)11;
		}
		;break;
		case (int)12: {
			HX_STACK_LINE(80)
			tmp1 = (int)12;
		}
		;break;
		case (int)14: {
			HX_STACK_LINE(81)
			tmp1 = (int)13;
		}
		;break;
		case (int)15: {
			HX_STACK_LINE(82)
			tmp1 = (int)14;
		}
		;break;
		default: {
			HX_STACK_LINE(84)
			int tmp2 = rawID;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(84)
			::flixel::input::gamepad::FlxGamepadAnalogStick tmp3 = ::flixel::input::gamepad::id::MayflashWiiRemoteID_obj::LEFT_ANALOG_STICK;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(84)
			int tmp4 = tmp3->rawUp;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(84)
			bool tmp5 = (tmp2 == tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(84)
			if ((tmp5)){
				HX_STACK_LINE(84)
				(int)34;
			}
			HX_STACK_LINE(85)
			int tmp6 = rawID;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(85)
			::flixel::input::gamepad::FlxGamepadAnalogStick tmp7 = ::flixel::input::gamepad::id::MayflashWiiRemoteID_obj::LEFT_ANALOG_STICK;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(85)
			int tmp8 = tmp7->rawDown;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(85)
			bool tmp9 = (tmp6 == tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(85)
			if ((tmp9)){
				HX_STACK_LINE(85)
				(int)36;
			}
			HX_STACK_LINE(86)
			int tmp10 = rawID;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(86)
			::flixel::input::gamepad::FlxGamepadAnalogStick tmp11 = ::flixel::input::gamepad::id::MayflashWiiRemoteID_obj::LEFT_ANALOG_STICK;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(86)
			int tmp12 = tmp11->rawLeft;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(86)
			bool tmp13 = (tmp10 == tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(86)
			if ((tmp13)){
				HX_STACK_LINE(86)
				(int)37;
			}
			HX_STACK_LINE(87)
			int tmp14 = rawID;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(87)
			::flixel::input::gamepad::FlxGamepadAnalogStick tmp15 = ::flixel::input::gamepad::id::MayflashWiiRemoteID_obj::LEFT_ANALOG_STICK;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(87)
			int tmp16 = tmp15->rawRight;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(87)
			bool tmp17 = (tmp14 == tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(87)
			if ((tmp17)){
				HX_STACK_LINE(87)
				(int)35;
			}
			HX_STACK_LINE(88)
			tmp1 = (int)-1;
		}
	}
	HX_STACK_LINE(68)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(MayflashWiiRemoteMapping_obj,getIDNunchuk,return )

int MayflashWiiRemoteMapping_obj::getIDDefault( int rawID){
	HX_STACK_FRAME("flixel.input.gamepad.mappings.MayflashWiiRemoteMapping","getIDDefault",0x559cab9c,"flixel.input.gamepad.mappings.MayflashWiiRemoteMapping.getIDDefault","flixel/input/gamepad/mappings/MayflashWiiRemoteMapping.hx",93,0xb7763ebe)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rawID,"rawID")
	HX_STACK_LINE(94)
	int tmp = rawID;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(94)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(94)
	switch( (int)(tmp)){
		case (int)2: {
			HX_STACK_LINE(96)
			tmp1 = (int)0;
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(97)
			tmp1 = (int)1;
		}
		;break;
		case (int)0: {
			HX_STACK_LINE(98)
			tmp1 = (int)2;
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(99)
			tmp1 = (int)3;
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(100)
			tmp1 = (int)6;
		}
		;break;
		case (int)11: {
			HX_STACK_LINE(101)
			tmp1 = (int)10;
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(102)
			tmp1 = (int)7;
		}
		;break;
		case (int)22: {
			HX_STACK_LINE(103)
			tmp1 = (int)11;
		}
		;break;
		case (int)23: {
			HX_STACK_LINE(104)
			tmp1 = (int)12;
		}
		;break;
		case (int)24: {
			HX_STACK_LINE(105)
			tmp1 = (int)13;
		}
		;break;
		case (int)25: {
			HX_STACK_LINE(106)
			tmp1 = (int)14;
		}
		;break;
		default: {
			HX_STACK_LINE(107)
			tmp1 = (int)-1;
		}
	}
	HX_STACK_LINE(94)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(MayflashWiiRemoteMapping_obj,getIDDefault,return )

int MayflashWiiRemoteMapping_obj::getRawID( int ID){
	HX_STACK_FRAME("flixel.input.gamepad.mappings.MayflashWiiRemoteMapping","getRawID",0xc8a2c619,"flixel.input.gamepad.mappings.MayflashWiiRemoteMapping.getRawID","flixel/input/gamepad/mappings/MayflashWiiRemoteMapping.hx",112,0xb7763ebe)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ID,"ID")
	HX_STACK_LINE(113)
	int tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(113)
	{
		HX_STACK_LINE(113)
		::flixel::input::gamepad::FlxGamepadAttachment tmp1 = this->attachment;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(113)
		::flixel::input::gamepad::FlxGamepadAttachment _g = tmp1;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(113)
		switch( (int)(_g->__Index())){
			case (int)1: {
				HX_STACK_LINE(115)
				int tmp2 = ID;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(115)
				tmp = this->getRawClassicController(tmp2);
			}
			;break;
			case (int)0: {
				HX_STACK_LINE(116)
				int tmp2 = ID;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(116)
				tmp = this->getRawNunchuk(tmp2);
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(117)
				int tmp2 = ID;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(117)
				tmp = this->getRawDefault(tmp2);
			}
			;break;
		}
	}
	HX_STACK_LINE(113)
	return tmp;
}


int MayflashWiiRemoteMapping_obj::getRawClassicController( int ID){
	HX_STACK_FRAME("flixel.input.gamepad.mappings.MayflashWiiRemoteMapping","getRawClassicController",0x0492e8b0,"flixel.input.gamepad.mappings.MayflashWiiRemoteMapping.getRawClassicController","flixel/input/gamepad/mappings/MayflashWiiRemoteMapping.hx",122,0xb7763ebe)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ID,"ID")
	HX_STACK_LINE(123)
	int tmp = ID;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(123)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(123)
	switch( (int)(tmp)){
		case (int)0: {
			HX_STACK_LINE(125)
			tmp1 = (int)2;
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(126)
			tmp1 = (int)3;
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(127)
			tmp1 = (int)0;
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(128)
			tmp1 = (int)1;
		}
		;break;
		case (int)11: {
			HX_STACK_LINE(129)
			tmp1 = (int)13;
		}
		;break;
		case (int)12: {
			HX_STACK_LINE(130)
			tmp1 = (int)12;
		}
		;break;
		case (int)13: {
			HX_STACK_LINE(131)
			tmp1 = (int)14;
		}
		;break;
		case (int)14: {
			HX_STACK_LINE(132)
			tmp1 = (int)15;
		}
		;break;
		case (int)6: {
			HX_STACK_LINE(133)
			tmp1 = (int)8;
		}
		;break;
		case (int)10: {
			HX_STACK_LINE(134)
			tmp1 = (int)11;
		}
		;break;
		case (int)7: {
			HX_STACK_LINE(135)
			tmp1 = (int)9;
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(136)
			tmp1 = (int)6;
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(137)
			tmp1 = (int)7;
		}
		;break;
		case (int)17: {
			HX_STACK_LINE(138)
			tmp1 = (int)4;
		}
		;break;
		case (int)18: {
			HX_STACK_LINE(139)
			tmp1 = (int)5;
		}
		;break;
		case (int)30: {
			HX_STACK_LINE(140)
			tmp1 = (int)-1;
		}
		;break;
		case (int)31: {
			HX_STACK_LINE(141)
			tmp1 = (int)-1;
		}
		;break;
		case (int)34: {
			HX_STACK_LINE(142)
			::flixel::input::gamepad::FlxGamepadAnalogStick tmp2 = ::flixel::input::gamepad::id::MayflashWiiRemoteID_obj::LEFT_ANALOG_STICK;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(142)
			tmp1 = tmp2->rawUp;
		}
		;break;
		case (int)36: {
			HX_STACK_LINE(143)
			::flixel::input::gamepad::FlxGamepadAnalogStick tmp2 = ::flixel::input::gamepad::id::MayflashWiiRemoteID_obj::LEFT_ANALOG_STICK;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(143)
			tmp1 = tmp2->rawDown;
		}
		;break;
		case (int)37: {
			HX_STACK_LINE(144)
			::flixel::input::gamepad::FlxGamepadAnalogStick tmp2 = ::flixel::input::gamepad::id::MayflashWiiRemoteID_obj::LEFT_ANALOG_STICK;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(144)
			tmp1 = tmp2->rawLeft;
		}
		;break;
		case (int)35: {
			HX_STACK_LINE(145)
			::flixel::input::gamepad::FlxGamepadAnalogStick tmp2 = ::flixel::input::gamepad::id::MayflashWiiRemoteID_obj::LEFT_ANALOG_STICK;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(145)
			tmp1 = tmp2->rawRight;
		}
		;break;
		case (int)38: {
			HX_STACK_LINE(146)
			::flixel::input::gamepad::FlxGamepadAnalogStick tmp2 = ::flixel::input::gamepad::id::MayflashWiiRemoteID_obj::RIGHT_ANALOG_STICK;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(146)
			tmp1 = tmp2->rawUp;
		}
		;break;
		case (int)40: {
			HX_STACK_LINE(147)
			::flixel::input::gamepad::FlxGamepadAnalogStick tmp2 = ::flixel::input::gamepad::id::MayflashWiiRemoteID_obj::RIGHT_ANALOG_STICK;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(147)
			tmp1 = tmp2->rawDown;
		}
		;break;
		case (int)41: {
			HX_STACK_LINE(148)
			::flixel::input::gamepad::FlxGamepadAnalogStick tmp2 = ::flixel::input::gamepad::id::MayflashWiiRemoteID_obj::RIGHT_ANALOG_STICK;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(148)
			tmp1 = tmp2->rawLeft;
		}
		;break;
		case (int)39: {
			HX_STACK_LINE(149)
			::flixel::input::gamepad::FlxGamepadAnalogStick tmp2 = ::flixel::input::gamepad::id::MayflashWiiRemoteID_obj::RIGHT_ANALOG_STICK;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(149)
			tmp1 = tmp2->rawRight;
		}
		;break;
		default: {
			HX_STACK_LINE(150)
			int tmp2 = ID;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(150)
			tmp1 = this->getRawDefault(tmp2);
		}
	}
	HX_STACK_LINE(123)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(MayflashWiiRemoteMapping_obj,getRawClassicController,return )

int MayflashWiiRemoteMapping_obj::getRawNunchuk( int ID){
	HX_STACK_FRAME("flixel.input.gamepad.mappings.MayflashWiiRemoteMapping","getRawNunchuk",0x53b6bee4,"flixel.input.gamepad.mappings.MayflashWiiRemoteMapping.getRawNunchuk","flixel/input/gamepad/mappings/MayflashWiiRemoteMapping.hx",155,0xb7763ebe)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ID,"ID")
	HX_STACK_LINE(156)
	int tmp = ID;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(156)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(156)
	switch( (int)(tmp)){
		case (int)0: {
			HX_STACK_LINE(158)
			tmp1 = (int)2;
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(159)
			tmp1 = (int)3;
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(160)
			tmp1 = (int)0;
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(161)
			tmp1 = (int)1;
		}
		;break;
		case (int)6: {
			HX_STACK_LINE(162)
			tmp1 = (int)4;
		}
		;break;
		case (int)7: {
			HX_STACK_LINE(163)
			tmp1 = (int)5;
		}
		;break;
		case (int)10: {
			HX_STACK_LINE(164)
			tmp1 = (int)11;
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(165)
			tmp1 = (int)7;
		}
		;break;
		case (int)17: {
			HX_STACK_LINE(166)
			tmp1 = (int)6;
		}
		;break;
		case (int)11: {
			HX_STACK_LINE(167)
			tmp1 = (int)13;
		}
		;break;
		case (int)12: {
			HX_STACK_LINE(168)
			tmp1 = (int)12;
		}
		;break;
		case (int)13: {
			HX_STACK_LINE(169)
			tmp1 = (int)14;
		}
		;break;
		case (int)14: {
			HX_STACK_LINE(170)
			tmp1 = (int)15;
		}
		;break;
		case (int)28: {
			HX_STACK_LINE(171)
			tmp1 = (int)2;
		}
		;break;
		case (int)29: {
			HX_STACK_LINE(172)
			tmp1 = (int)3;
		}
		;break;
		case (int)34: {
			HX_STACK_LINE(173)
			::flixel::input::gamepad::FlxGamepadAnalogStick tmp2 = ::flixel::input::gamepad::id::MayflashWiiRemoteID_obj::LEFT_ANALOG_STICK;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(173)
			tmp1 = tmp2->rawUp;
		}
		;break;
		case (int)36: {
			HX_STACK_LINE(174)
			::flixel::input::gamepad::FlxGamepadAnalogStick tmp2 = ::flixel::input::gamepad::id::MayflashWiiRemoteID_obj::LEFT_ANALOG_STICK;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(174)
			tmp1 = tmp2->rawDown;
		}
		;break;
		case (int)37: {
			HX_STACK_LINE(175)
			::flixel::input::gamepad::FlxGamepadAnalogStick tmp2 = ::flixel::input::gamepad::id::MayflashWiiRemoteID_obj::LEFT_ANALOG_STICK;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(175)
			tmp1 = tmp2->rawLeft;
		}
		;break;
		case (int)35: {
			HX_STACK_LINE(176)
			::flixel::input::gamepad::FlxGamepadAnalogStick tmp2 = ::flixel::input::gamepad::id::MayflashWiiRemoteID_obj::LEFT_ANALOG_STICK;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(176)
			tmp1 = tmp2->rawRight;
		}
		;break;
		default: {
			HX_STACK_LINE(177)
			tmp1 = (int)-1;
		}
	}
	HX_STACK_LINE(156)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(MayflashWiiRemoteMapping_obj,getRawNunchuk,return )

int MayflashWiiRemoteMapping_obj::getRawDefault( int ID){
	HX_STACK_FRAME("flixel.input.gamepad.mappings.MayflashWiiRemoteMapping","getRawDefault",0xb1ad19a3,"flixel.input.gamepad.mappings.MayflashWiiRemoteMapping.getRawDefault","flixel/input/gamepad/mappings/MayflashWiiRemoteMapping.hx",182,0xb7763ebe)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ID,"ID")
	HX_STACK_LINE(183)
	int tmp = ID;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(183)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(183)
	switch( (int)(tmp)){
		case (int)0: {
			HX_STACK_LINE(185)
			tmp1 = (int)2;
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(186)
			tmp1 = (int)3;
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(187)
			tmp1 = (int)0;
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(188)
			tmp1 = (int)1;
		}
		;break;
		case (int)11: {
			HX_STACK_LINE(189)
			tmp1 = (int)22;
		}
		;break;
		case (int)12: {
			HX_STACK_LINE(190)
			tmp1 = (int)23;
		}
		;break;
		case (int)13: {
			HX_STACK_LINE(191)
			tmp1 = (int)24;
		}
		;break;
		case (int)14: {
			HX_STACK_LINE(192)
			tmp1 = (int)25;
		}
		;break;
		case (int)6: {
			HX_STACK_LINE(193)
			tmp1 = (int)4;
		}
		;break;
		case (int)10: {
			HX_STACK_LINE(194)
			tmp1 = (int)11;
		}
		;break;
		case (int)7: {
			HX_STACK_LINE(195)
			tmp1 = (int)5;
		}
		;break;
		default: {
			HX_STACK_LINE(196)
			tmp1 = (int)-1;
		}
	}
	HX_STACK_LINE(183)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(MayflashWiiRemoteMapping_obj,getRawDefault,return )

int MayflashWiiRemoteMapping_obj::axisIndexToRawID( int axisID){
	HX_STACK_FRAME("flixel.input.gamepad.mappings.MayflashWiiRemoteMapping","axisIndexToRawID",0xa42bf863,"flixel.input.gamepad.mappings.MayflashWiiRemoteMapping.axisIndexToRawID","flixel/input/gamepad/mappings/MayflashWiiRemoteMapping.hx",202,0xb7763ebe)
	HX_STACK_THIS(this)
	HX_STACK_ARG(axisID,"axisID")
	HX_STACK_LINE(203)
	::flixel::input::gamepad::FlxGamepadAttachment tmp = this->attachment;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(203)
	bool tmp1 = (tmp == ::flixel::input::gamepad::FlxGamepadAttachment_obj::WII_NUNCHUCK);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(203)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(203)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(203)
	if ((tmp2)){
		HX_STACK_LINE(203)
		::flixel::input::gamepad::FlxGamepadAttachment tmp4 = this->attachment;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(203)
		::flixel::input::gamepad::FlxGamepadAttachment tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(203)
		tmp3 = (tmp5 == ::flixel::input::gamepad::FlxGamepadAttachment_obj::WII_CLASSIC_CONTROLLER);
	}
	else{
		HX_STACK_LINE(203)
		tmp3 = true;
	}
	HX_STACK_LINE(203)
	if ((tmp3)){
		HX_STACK_LINE(205)
		int tmp4 = axisID;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(205)
		::flixel::input::gamepad::FlxGamepadAnalogStick tmp5 = this->leftStick;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(205)
		int tmp6 = tmp5->x;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(205)
		bool tmp7 = (tmp4 == tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(205)
		if ((tmp7)){
			HX_STACK_LINE(206)
			return (int)18;
		}
		else{
			HX_STACK_LINE(207)
			int tmp8 = axisID;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(207)
			::flixel::input::gamepad::FlxGamepadAnalogStick tmp9 = this->rightStick;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(207)
			int tmp10 = tmp9->y;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(207)
			bool tmp11 = (tmp8 == tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(207)
			if ((tmp11)){
				HX_STACK_LINE(208)
				return (int)19;
			}
		}
	}
	else{
		HX_STACK_LINE(212)
		int tmp4 = axisID;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(212)
		::flixel::input::gamepad::FlxGamepadAnalogStick tmp5 = this->leftStick;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(212)
		int tmp6 = tmp5->x;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(212)
		bool tmp7 = (tmp4 == tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(212)
		if ((tmp7)){
			HX_STACK_LINE(213)
			return (int)16;
		}
		else{
			HX_STACK_LINE(214)
			int tmp8 = axisID;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(214)
			::flixel::input::gamepad::FlxGamepadAnalogStick tmp9 = this->rightStick;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(214)
			int tmp10 = tmp9->y;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(214)
			bool tmp11 = (tmp8 == tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(214)
			if ((tmp11)){
				HX_STACK_LINE(215)
				return (int)17;
			}
		}
	}
	HX_STACK_LINE(218)
	int tmp4 = axisID;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(218)
	::flixel::input::gamepad::FlxGamepadAnalogStick tmp5 = this->leftStick;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(218)
	int tmp6 = tmp5->x;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(218)
	bool tmp7 = (tmp4 == tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(218)
	if ((tmp7)){
		HX_STACK_LINE(219)
		return (int)20;
	}
	else{
		HX_STACK_LINE(220)
		int tmp8 = axisID;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(220)
		::flixel::input::gamepad::FlxGamepadAnalogStick tmp9 = this->rightStick;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(220)
		int tmp10 = tmp9->y;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(220)
		bool tmp11 = (tmp8 == tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(220)
		if ((tmp11)){
			HX_STACK_LINE(221)
			return (int)21;
		}
	}
	HX_STACK_LINE(223)
	int tmp8 = axisID;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(223)
	return tmp8;
}


int MayflashWiiRemoteMapping_obj::checkForFakeAxis( int ID){
	HX_STACK_FRAME("flixel.input.gamepad.mappings.MayflashWiiRemoteMapping","checkForFakeAxis",0x40fccde3,"flixel.input.gamepad.mappings.MayflashWiiRemoteMapping.checkForFakeAxis","flixel/input/gamepad/mappings/MayflashWiiRemoteMapping.hx",227,0xb7763ebe)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ID,"ID")
	HX_STACK_LINE(228)
	::flixel::input::gamepad::FlxGamepadAttachment tmp = this->attachment;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(228)
	bool tmp1 = (tmp == ::flixel::input::gamepad::FlxGamepadAttachment_obj::WII_NUNCHUCK);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(228)
	if ((tmp1)){
		HX_STACK_LINE(230)
		bool tmp2 = (ID == (int)17);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(230)
		if ((tmp2)){
			HX_STACK_LINE(231)
			return (int)6;
		}
	}
	else{
		HX_STACK_LINE(233)
		::flixel::input::gamepad::FlxGamepadAttachment tmp2 = this->attachment;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(233)
		bool tmp3 = (tmp2 == ::flixel::input::gamepad::FlxGamepadAttachment_obj::WII_CLASSIC_CONTROLLER);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(233)
		if ((tmp3)){
			HX_STACK_LINE(235)
			bool tmp4 = (ID == (int)17);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(235)
			if ((tmp4)){
				HX_STACK_LINE(236)
				return (int)22;
			}
			HX_STACK_LINE(237)
			bool tmp5 = (ID == (int)18);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(237)
			if ((tmp5)){
				HX_STACK_LINE(238)
				return (int)23;
			}
		}
	}
	HX_STACK_LINE(240)
	return (int)-1;
}


::flixel::input::gamepad::FlxGamepadAttachment MayflashWiiRemoteMapping_obj::set_attachment( ::flixel::input::gamepad::FlxGamepadAttachment attachment){
	HX_STACK_FRAME("flixel.input.gamepad.mappings.MayflashWiiRemoteMapping","set_attachment",0xdaecf06c,"flixel.input.gamepad.mappings.MayflashWiiRemoteMapping.set_attachment","flixel/input/gamepad/mappings/MayflashWiiRemoteMapping.hx",245,0xb7763ebe)
	HX_STACK_THIS(this)
	HX_STACK_ARG(attachment,"attachment")
	HX_STACK_LINE(246)
	::flixel::input::gamepad::FlxGamepadAnalogStick tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(246)
	switch( (int)(attachment->__Index())){
		case (int)0: case (int)1: {
			HX_STACK_LINE(248)
			tmp = ::flixel::input::gamepad::id::MayflashWiiRemoteID_obj::LEFT_ANALOG_STICK;
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(249)
			tmp = ::flixel::input::gamepad::id::MayflashWiiRemoteID_obj::REMOTE_DPAD;
		}
		;break;
	}
	HX_STACK_LINE(246)
	this->leftStick = tmp;
	HX_STACK_LINE(252)
	::flixel::input::gamepad::FlxGamepadAnalogStick tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(252)
	switch( (int)(attachment->__Index())){
		case (int)1: {
			HX_STACK_LINE(254)
			tmp1 = ::flixel::input::gamepad::id::MayflashWiiRemoteID_obj::RIGHT_ANALOG_STICK;
		}
		;break;
		default: {
			HX_STACK_LINE(255)
			tmp1 = null();
		}
	}
	HX_STACK_LINE(252)
	this->rightStick = tmp1;
	HX_STACK_LINE(258)
	::flixel::input::gamepad::FlxGamepadAttachment tmp2 = attachment;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(258)
	::flixel::input::gamepad::FlxGamepadAttachment tmp3 = this->super::set_attachment(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(258)
	return tmp3;
}


int MayflashWiiRemoteMapping_obj::REMOTE_DPAD_X;

int MayflashWiiRemoteMapping_obj::REMOTE_DPAD_Y;

int MayflashWiiRemoteMapping_obj::LEFT_ANALOG_STICK_FAKE_X;

int MayflashWiiRemoteMapping_obj::LEFT_ANALOG_STICK_FAKE_Y;

int MayflashWiiRemoteMapping_obj::RIGHT_ANALOG_STICK_FAKE_X;

int MayflashWiiRemoteMapping_obj::RIGHT_ANALOG_STICK_FAKE_Y;


MayflashWiiRemoteMapping_obj::MayflashWiiRemoteMapping_obj()
{
}

Dynamic MayflashWiiRemoteMapping_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
	case 12:
		if (HX_FIELD_EQ(inName,"getIDNunchuk") ) { return getIDNunchuk_dyn(); }
		if (HX_FIELD_EQ(inName,"getIDDefault") ) { return getIDDefault_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getRawNunchuk") ) { return getRawNunchuk_dyn(); }
		if (HX_FIELD_EQ(inName,"getRawDefault") ) { return getRawDefault_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"set_attachment") ) { return set_attachment_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"axisIndexToRawID") ) { return axisIndexToRawID_dyn(); }
		if (HX_FIELD_EQ(inName,"checkForFakeAxis") ) { return checkForFakeAxis_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"getIDClassicController") ) { return getIDClassicController_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"getRawClassicController") ) { return getRawClassicController_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &MayflashWiiRemoteMapping_obj::REMOTE_DPAD_X,HX_HCSTRING("REMOTE_DPAD_X","\x21","\x04","\xe6","\xa5")},
	{hx::fsInt,(void *) &MayflashWiiRemoteMapping_obj::REMOTE_DPAD_Y,HX_HCSTRING("REMOTE_DPAD_Y","\x22","\x04","\xe6","\xa5")},
	{hx::fsInt,(void *) &MayflashWiiRemoteMapping_obj::LEFT_ANALOG_STICK_FAKE_X,HX_HCSTRING("LEFT_ANALOG_STICK_FAKE_X","\x94","\xb3","\x65","\x38")},
	{hx::fsInt,(void *) &MayflashWiiRemoteMapping_obj::LEFT_ANALOG_STICK_FAKE_Y,HX_HCSTRING("LEFT_ANALOG_STICK_FAKE_Y","\x95","\xb3","\x65","\x38")},
	{hx::fsInt,(void *) &MayflashWiiRemoteMapping_obj::RIGHT_ANALOG_STICK_FAKE_X,HX_HCSTRING("RIGHT_ANALOG_STICK_FAKE_X","\xc9","\x1f","\x02","\xa1")},
	{hx::fsInt,(void *) &MayflashWiiRemoteMapping_obj::RIGHT_ANALOG_STICK_FAKE_Y,HX_HCSTRING("RIGHT_ANALOG_STICK_FAKE_Y","\xca","\x1f","\x02","\xa1")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("initValues","\x12","\x5f","\xfc","\x53"),
	HX_HCSTRING("getID","\xf1","\x91","\x60","\x91"),
	HX_HCSTRING("getIDClassicController","\x1d","\xe8","\xc4","\x20"),
	HX_HCSTRING("getIDNunchuk","\x11","\xa4","\xdf","\xd0"),
	HX_HCSTRING("getIDDefault","\xd0","\xfe","\xd5","\x2e"),
	HX_HCSTRING("getRawID","\x4d","\x6f","\xfd","\x43"),
	HX_HCSTRING("getRawClassicController","\xfc","\xb9","\x66","\x9f"),
	HX_HCSTRING("getRawNunchuk","\x30","\x39","\xa6","\x8c"),
	HX_HCSTRING("getRawDefault","\xef","\x93","\x9c","\xea"),
	HX_HCSTRING("axisIndexToRawID","\x97","\xf5","\xe0","\x40"),
	HX_HCSTRING("checkForFakeAxis","\x17","\xcb","\xb1","\xdd"),
	HX_HCSTRING("set_attachment","\xa0","\x78","\x88","\x73"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MayflashWiiRemoteMapping_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(MayflashWiiRemoteMapping_obj::REMOTE_DPAD_X,"REMOTE_DPAD_X");
	HX_MARK_MEMBER_NAME(MayflashWiiRemoteMapping_obj::REMOTE_DPAD_Y,"REMOTE_DPAD_Y");
	HX_MARK_MEMBER_NAME(MayflashWiiRemoteMapping_obj::LEFT_ANALOG_STICK_FAKE_X,"LEFT_ANALOG_STICK_FAKE_X");
	HX_MARK_MEMBER_NAME(MayflashWiiRemoteMapping_obj::LEFT_ANALOG_STICK_FAKE_Y,"LEFT_ANALOG_STICK_FAKE_Y");
	HX_MARK_MEMBER_NAME(MayflashWiiRemoteMapping_obj::RIGHT_ANALOG_STICK_FAKE_X,"RIGHT_ANALOG_STICK_FAKE_X");
	HX_MARK_MEMBER_NAME(MayflashWiiRemoteMapping_obj::RIGHT_ANALOG_STICK_FAKE_Y,"RIGHT_ANALOG_STICK_FAKE_Y");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MayflashWiiRemoteMapping_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(MayflashWiiRemoteMapping_obj::REMOTE_DPAD_X,"REMOTE_DPAD_X");
	HX_VISIT_MEMBER_NAME(MayflashWiiRemoteMapping_obj::REMOTE_DPAD_Y,"REMOTE_DPAD_Y");
	HX_VISIT_MEMBER_NAME(MayflashWiiRemoteMapping_obj::LEFT_ANALOG_STICK_FAKE_X,"LEFT_ANALOG_STICK_FAKE_X");
	HX_VISIT_MEMBER_NAME(MayflashWiiRemoteMapping_obj::LEFT_ANALOG_STICK_FAKE_Y,"LEFT_ANALOG_STICK_FAKE_Y");
	HX_VISIT_MEMBER_NAME(MayflashWiiRemoteMapping_obj::RIGHT_ANALOG_STICK_FAKE_X,"RIGHT_ANALOG_STICK_FAKE_X");
	HX_VISIT_MEMBER_NAME(MayflashWiiRemoteMapping_obj::RIGHT_ANALOG_STICK_FAKE_Y,"RIGHT_ANALOG_STICK_FAKE_Y");
};

#endif

hx::Class MayflashWiiRemoteMapping_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("REMOTE_DPAD_X","\x21","\x04","\xe6","\xa5"),
	HX_HCSTRING("REMOTE_DPAD_Y","\x22","\x04","\xe6","\xa5"),
	HX_HCSTRING("LEFT_ANALOG_STICK_FAKE_X","\x94","\xb3","\x65","\x38"),
	HX_HCSTRING("LEFT_ANALOG_STICK_FAKE_Y","\x95","\xb3","\x65","\x38"),
	HX_HCSTRING("RIGHT_ANALOG_STICK_FAKE_X","\xc9","\x1f","\x02","\xa1"),
	HX_HCSTRING("RIGHT_ANALOG_STICK_FAKE_Y","\xca","\x1f","\x02","\xa1"),
	::String(null()) };

void MayflashWiiRemoteMapping_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.input.gamepad.mappings.MayflashWiiRemoteMapping","\x22","\x13","\xe5","\xee");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< MayflashWiiRemoteMapping_obj >;
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

void MayflashWiiRemoteMapping_obj::__boot()
{
	REMOTE_DPAD_X= (int)16;
	REMOTE_DPAD_Y= (int)17;
	LEFT_ANALOG_STICK_FAKE_X= (int)18;
	LEFT_ANALOG_STICK_FAKE_Y= (int)19;
	RIGHT_ANALOG_STICK_FAKE_X= (int)20;
	RIGHT_ANALOG_STICK_FAKE_Y= (int)21;
}

} // end namespace flixel
} // end namespace input
} // end namespace gamepad
} // end namespace mappings
