#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxMath
#include <flixel/math/FlxMath.h>
#endif
#ifndef INCLUDED_flixel_math_FlxMatrix
#include <flixel/math/FlxMatrix.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_math_FlxVector
#include <flixel/math/FlxVector.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTileblock
#include <flixel/tile/FlxTileblock.h>
#endif
#ifndef INCLUDED_flixel_util_FlxBitmapDataPool
#include <flixel/util/FlxBitmapDataPool.h>
#endif
#ifndef INCLUDED_flixel_util_FlxCollision
#include <flixel/util/FlxCollision.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util__FlxColor_FlxColor_Impl_
#include <flixel/util/_FlxColor/FlxColor_Impl_.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BlendMode
#include <openfl/_legacy/display/BlendMode.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_ColorTransform
#include <openfl/_legacy/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Matrix
#include <openfl/_legacy/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_ByteArray
#include <openfl/_legacy/utils/ByteArray.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IDataInput
#include <openfl/_legacy/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IDataOutput
#include <openfl/_legacy/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IMemoryRange
#include <openfl/_legacy/utils/IMemoryRange.h>
#endif
namespace flixel{
namespace util{

Void FlxCollision_obj::__construct()
{
	return null();
}

//FlxCollision_obj::~FlxCollision_obj() { }

Dynamic FlxCollision_obj::__CreateEmpty() { return  new FlxCollision_obj; }
hx::ObjectPtr< FlxCollision_obj > FlxCollision_obj::__new()
{  hx::ObjectPtr< FlxCollision_obj > _result_ = new FlxCollision_obj();
	_result_->__construct();
	return _result_;}

Dynamic FlxCollision_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxCollision_obj > _result_ = new FlxCollision_obj();
	_result_->__construct();
	return _result_;}

::flixel::math::FlxVector FlxCollision_obj::pointA;

::flixel::math::FlxVector FlxCollision_obj::pointB;

::flixel::math::FlxVector FlxCollision_obj::centerA;

::flixel::math::FlxVector FlxCollision_obj::centerB;

::flixel::math::FlxMatrix FlxCollision_obj::matrixA;

::flixel::math::FlxMatrix FlxCollision_obj::matrixB;

::flixel::math::FlxMatrix FlxCollision_obj::testMatrix;

::flixel::math::FlxRect FlxCollision_obj::boundsA;

::flixel::math::FlxRect FlxCollision_obj::boundsB;

::flixel::math::FlxRect FlxCollision_obj::intersect;

::openfl::_legacy::geom::Rectangle FlxCollision_obj::flashRect;

bool FlxCollision_obj::pixelPerfectCheck( ::flixel::FlxSprite Contact,::flixel::FlxSprite Target,hx::Null< int >  __o_AlphaTolerance,::flixel::FlxCamera Camera){
int AlphaTolerance = __o_AlphaTolerance.Default(1);
	HX_STACK_FRAME("flixel.util.FlxCollision","pixelPerfectCheck",0xcaf595cd,"flixel.util.FlxCollision.pixelPerfectCheck","flixel/util/FlxCollision.hx",48,0x8c8a7b84)
	HX_STACK_ARG(Contact,"Contact")
	HX_STACK_ARG(Target,"Target")
	HX_STACK_ARG(AlphaTolerance,"AlphaTolerance")
	HX_STACK_ARG(Camera,"Camera")
{
		HX_STACK_LINE(50)
		bool tmp = (Contact->angle != (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(50)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(50)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(50)
		if ((tmp1)){
			HX_STACK_LINE(50)
			tmp2 = (Target->angle != (int)0);
		}
		else{
			HX_STACK_LINE(50)
			tmp2 = true;
		}
		HX_STACK_LINE(50)
		bool considerRotation = tmp2;		HX_STACK_VAR(considerRotation,"considerRotation");
		HX_STACK_LINE(52)
		bool tmp3 = (Camera != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(52)
		::flixel::FlxCamera tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(52)
		if ((tmp3)){
			HX_STACK_LINE(52)
			tmp4 = Camera;
		}
		else{
			HX_STACK_LINE(52)
			tmp4 = ::flixel::FlxG_obj::camera;
		}
		HX_STACK_LINE(52)
		Camera = tmp4;
		HX_STACK_LINE(54)
		::flixel::math::FlxVector tmp5 = ::flixel::util::FlxCollision_obj::pointA;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(54)
		Float tmp6 = Contact->x;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(54)
		Float tmp7 = Camera->scroll->x;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(54)
		Float tmp8 = Contact->scrollFactor->x;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(54)
		Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(54)
		int tmp10 = ::Std_obj::_int(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(54)
		Float tmp11 = (tmp6 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(54)
		Float tmp12 = Contact->offset->x;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(54)
		Float tmp13 = (tmp11 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(54)
		tmp5->set_x(tmp13);
		HX_STACK_LINE(55)
		::flixel::math::FlxVector tmp14 = ::flixel::util::FlxCollision_obj::pointA;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(55)
		Float tmp15 = Contact->y;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(55)
		Float tmp16 = Camera->scroll->y;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(55)
		Float tmp17 = Contact->scrollFactor->y;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(55)
		Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(55)
		int tmp19 = ::Std_obj::_int(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(55)
		Float tmp20 = (tmp15 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(55)
		Float tmp21 = Contact->offset->y;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(55)
		Float tmp22 = (tmp20 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(55)
		tmp14->set_y(tmp22);
		HX_STACK_LINE(57)
		::flixel::math::FlxVector tmp23 = ::flixel::util::FlxCollision_obj::pointB;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(57)
		Float tmp24 = Target->x;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(57)
		Float tmp25 = Camera->scroll->x;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(57)
		Float tmp26 = Target->scrollFactor->x;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(57)
		Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(57)
		int tmp28 = ::Std_obj::_int(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(57)
		Float tmp29 = (tmp24 - tmp28);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(57)
		Float tmp30 = Target->offset->x;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(57)
		Float tmp31 = (tmp29 - tmp30);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(57)
		tmp23->set_x(tmp31);
		HX_STACK_LINE(58)
		::flixel::math::FlxVector tmp32 = ::flixel::util::FlxCollision_obj::pointB;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(58)
		Float tmp33 = Target->y;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(58)
		Float tmp34 = Camera->scroll->y;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(58)
		Float tmp35 = Target->scrollFactor->y;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(58)
		Float tmp36 = (tmp34 * tmp35);		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(58)
		int tmp37 = ::Std_obj::_int(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(58)
		Float tmp38 = (tmp33 - tmp37);		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(58)
		Float tmp39 = Target->offset->y;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(58)
		Float tmp40 = (tmp38 - tmp39);		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(58)
		tmp32->set_y(tmp40);
		HX_STACK_LINE(60)
		bool tmp41 = considerRotation;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(60)
		if ((tmp41)){
			HX_STACK_LINE(63)
			::flixel::math::FlxVector tmp42 = ::flixel::util::FlxCollision_obj::centerA;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(63)
			Contact->origin->copyTo(tmp42);
			HX_STACK_LINE(64)
			::flixel::math::FlxVector tmp43 = ::flixel::util::FlxCollision_obj::centerB;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(64)
			Target->origin->copyTo(tmp43);
			HX_STACK_LINE(67)
			Float tmp44;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(67)
			{
				HX_STACK_LINE(67)
				::flixel::math::FlxVector tmp45 = ::flixel::util::FlxCollision_obj::centerA;		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(67)
				::flixel::math::FlxVector _this = tmp45;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(67)
				Float tmp46 = (_this->x * _this->x);		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(67)
				Float tmp47 = (_this->y * _this->y);		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(67)
				Float tmp48 = (tmp46 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(67)
				tmp44 = ::Math_obj::sqrt(tmp48);
			}
			HX_STACK_LINE(67)
			Float lengthA = tmp44;		HX_STACK_VAR(lengthA,"lengthA");
			HX_STACK_LINE(68)
			::flixel::math::FlxVector tmp45 = ::flixel::util::FlxCollision_obj::pointA;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(68)
			Float tmp46 = tmp45->x;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(68)
			::flixel::math::FlxVector tmp47 = ::flixel::util::FlxCollision_obj::centerA;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(68)
			Float tmp48 = tmp47->x;		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(68)
			Float tmp49 = (tmp46 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(68)
			Float tmp50 = lengthA;		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(68)
			Float tmp51 = (tmp49 - tmp50);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(68)
			::flixel::math::FlxRect tmp52 = ::flixel::util::FlxCollision_obj::boundsA;		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(68)
			tmp52->x = tmp51;
			HX_STACK_LINE(69)
			::flixel::math::FlxVector tmp53 = ::flixel::util::FlxCollision_obj::pointA;		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(69)
			Float tmp54 = tmp53->y;		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(69)
			::flixel::math::FlxVector tmp55 = ::flixel::util::FlxCollision_obj::centerA;		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(69)
			Float tmp56 = tmp55->y;		HX_STACK_VAR(tmp56,"tmp56");
			HX_STACK_LINE(69)
			Float tmp57 = (tmp54 + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
			HX_STACK_LINE(69)
			Float tmp58 = lengthA;		HX_STACK_VAR(tmp58,"tmp58");
			HX_STACK_LINE(69)
			Float tmp59 = (tmp57 - tmp58);		HX_STACK_VAR(tmp59,"tmp59");
			HX_STACK_LINE(69)
			::flixel::math::FlxRect tmp60 = ::flixel::util::FlxCollision_obj::boundsA;		HX_STACK_VAR(tmp60,"tmp60");
			HX_STACK_LINE(69)
			tmp60->y = tmp59;
			HX_STACK_LINE(70)
			Float tmp61 = (lengthA * (int)2);		HX_STACK_VAR(tmp61,"tmp61");
			HX_STACK_LINE(70)
			::flixel::math::FlxRect tmp62 = ::flixel::util::FlxCollision_obj::boundsA;		HX_STACK_VAR(tmp62,"tmp62");
			HX_STACK_LINE(70)
			tmp62->width = tmp61;
			HX_STACK_LINE(71)
			::flixel::math::FlxRect tmp63 = ::flixel::util::FlxCollision_obj::boundsA;		HX_STACK_VAR(tmp63,"tmp63");
			HX_STACK_LINE(71)
			::flixel::math::FlxRect tmp64 = ::flixel::util::FlxCollision_obj::boundsA;		HX_STACK_VAR(tmp64,"tmp64");
			HX_STACK_LINE(71)
			tmp64->height = tmp63->width;
			HX_STACK_LINE(73)
			Float tmp65;		HX_STACK_VAR(tmp65,"tmp65");
			HX_STACK_LINE(73)
			{
				HX_STACK_LINE(73)
				::flixel::math::FlxVector tmp66 = ::flixel::util::FlxCollision_obj::centerB;		HX_STACK_VAR(tmp66,"tmp66");
				HX_STACK_LINE(73)
				::flixel::math::FlxVector _this = tmp66;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(73)
				Float tmp67 = (_this->x * _this->x);		HX_STACK_VAR(tmp67,"tmp67");
				HX_STACK_LINE(73)
				Float tmp68 = (_this->y * _this->y);		HX_STACK_VAR(tmp68,"tmp68");
				HX_STACK_LINE(73)
				Float tmp69 = (tmp67 + tmp68);		HX_STACK_VAR(tmp69,"tmp69");
				HX_STACK_LINE(73)
				tmp65 = ::Math_obj::sqrt(tmp69);
			}
			HX_STACK_LINE(73)
			Float lengthB = tmp65;		HX_STACK_VAR(lengthB,"lengthB");
			HX_STACK_LINE(74)
			::flixel::math::FlxVector tmp66 = ::flixel::util::FlxCollision_obj::pointB;		HX_STACK_VAR(tmp66,"tmp66");
			HX_STACK_LINE(74)
			Float tmp67 = tmp66->x;		HX_STACK_VAR(tmp67,"tmp67");
			HX_STACK_LINE(74)
			::flixel::math::FlxVector tmp68 = ::flixel::util::FlxCollision_obj::centerB;		HX_STACK_VAR(tmp68,"tmp68");
			HX_STACK_LINE(74)
			Float tmp69 = tmp68->x;		HX_STACK_VAR(tmp69,"tmp69");
			HX_STACK_LINE(74)
			Float tmp70 = (tmp67 + tmp69);		HX_STACK_VAR(tmp70,"tmp70");
			HX_STACK_LINE(74)
			Float tmp71 = lengthB;		HX_STACK_VAR(tmp71,"tmp71");
			HX_STACK_LINE(74)
			Float tmp72 = (tmp70 - tmp71);		HX_STACK_VAR(tmp72,"tmp72");
			HX_STACK_LINE(74)
			::flixel::math::FlxRect tmp73 = ::flixel::util::FlxCollision_obj::boundsB;		HX_STACK_VAR(tmp73,"tmp73");
			HX_STACK_LINE(74)
			tmp73->x = tmp72;
			HX_STACK_LINE(75)
			::flixel::math::FlxVector tmp74 = ::flixel::util::FlxCollision_obj::pointB;		HX_STACK_VAR(tmp74,"tmp74");
			HX_STACK_LINE(75)
			Float tmp75 = tmp74->y;		HX_STACK_VAR(tmp75,"tmp75");
			HX_STACK_LINE(75)
			::flixel::math::FlxVector tmp76 = ::flixel::util::FlxCollision_obj::centerB;		HX_STACK_VAR(tmp76,"tmp76");
			HX_STACK_LINE(75)
			Float tmp77 = tmp76->y;		HX_STACK_VAR(tmp77,"tmp77");
			HX_STACK_LINE(75)
			Float tmp78 = (tmp75 + tmp77);		HX_STACK_VAR(tmp78,"tmp78");
			HX_STACK_LINE(75)
			Float tmp79 = lengthB;		HX_STACK_VAR(tmp79,"tmp79");
			HX_STACK_LINE(75)
			Float tmp80 = (tmp78 - tmp79);		HX_STACK_VAR(tmp80,"tmp80");
			HX_STACK_LINE(75)
			::flixel::math::FlxRect tmp81 = ::flixel::util::FlxCollision_obj::boundsB;		HX_STACK_VAR(tmp81,"tmp81");
			HX_STACK_LINE(75)
			tmp81->y = tmp80;
			HX_STACK_LINE(76)
			Float tmp82 = (lengthB * (int)2);		HX_STACK_VAR(tmp82,"tmp82");
			HX_STACK_LINE(76)
			::flixel::math::FlxRect tmp83 = ::flixel::util::FlxCollision_obj::boundsB;		HX_STACK_VAR(tmp83,"tmp83");
			HX_STACK_LINE(76)
			tmp83->width = tmp82;
			HX_STACK_LINE(77)
			::flixel::math::FlxRect tmp84 = ::flixel::util::FlxCollision_obj::boundsB;		HX_STACK_VAR(tmp84,"tmp84");
			HX_STACK_LINE(77)
			::flixel::math::FlxRect tmp85 = ::flixel::util::FlxCollision_obj::boundsB;		HX_STACK_VAR(tmp85,"tmp85");
			HX_STACK_LINE(77)
			tmp85->height = tmp84->width;
		}
		else{
			HX_STACK_LINE(81)
			::flixel::math::FlxVector tmp42 = ::flixel::util::FlxCollision_obj::pointA;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(81)
			::flixel::math::FlxRect tmp43 = ::flixel::util::FlxCollision_obj::boundsA;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(81)
			tmp43->x = tmp42->x;
			HX_STACK_LINE(82)
			::flixel::math::FlxVector tmp44 = ::flixel::util::FlxCollision_obj::pointA;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(82)
			::flixel::math::FlxRect tmp45 = ::flixel::util::FlxCollision_obj::boundsA;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(82)
			tmp45->y = tmp44->y;
			HX_STACK_LINE(83)
			::flixel::math::FlxRect tmp46 = ::flixel::util::FlxCollision_obj::boundsA;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(83)
			tmp46->width = Contact->frameWidth;
			HX_STACK_LINE(84)
			::flixel::math::FlxRect tmp47 = ::flixel::util::FlxCollision_obj::boundsA;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(84)
			tmp47->height = Contact->frameHeight;
			HX_STACK_LINE(86)
			::flixel::math::FlxVector tmp48 = ::flixel::util::FlxCollision_obj::pointB;		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(86)
			::flixel::math::FlxRect tmp49 = ::flixel::util::FlxCollision_obj::boundsB;		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(86)
			tmp49->x = tmp48->x;
			HX_STACK_LINE(87)
			::flixel::math::FlxVector tmp50 = ::flixel::util::FlxCollision_obj::pointB;		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(87)
			::flixel::math::FlxRect tmp51 = ::flixel::util::FlxCollision_obj::boundsB;		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(87)
			tmp51->y = tmp50->y;
			HX_STACK_LINE(88)
			::flixel::math::FlxRect tmp52 = ::flixel::util::FlxCollision_obj::boundsB;		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(88)
			tmp52->width = Target->frameWidth;
			HX_STACK_LINE(89)
			::flixel::math::FlxRect tmp53 = ::flixel::util::FlxCollision_obj::boundsB;		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(89)
			tmp53->height = Target->frameHeight;
		}
		HX_STACK_LINE(92)
		::flixel::math::FlxRect tmp42 = ::flixel::util::FlxCollision_obj::boundsA;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(92)
		::flixel::math::FlxRect tmp43 = ::flixel::util::FlxCollision_obj::boundsB;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(92)
		::flixel::math::FlxRect tmp44;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(92)
		{
			HX_STACK_LINE(92)
			::flixel::math::FlxRect tmp45 = ::flixel::util::FlxCollision_obj::intersect;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(92)
			::flixel::math::FlxRect _this = tmp45;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(92)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(92)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(92)
			Float Width = (int)0;		HX_STACK_VAR(Width,"Width");
			HX_STACK_LINE(92)
			Float Height = (int)0;		HX_STACK_VAR(Height,"Height");
			HX_STACK_LINE(92)
			_this->x = X;
			HX_STACK_LINE(92)
			_this->y = Y;
			HX_STACK_LINE(92)
			_this->width = Width;
			HX_STACK_LINE(92)
			_this->height = Height;
			HX_STACK_LINE(92)
			tmp44 = _this;
		}
		HX_STACK_LINE(92)
		tmp42->intersection(tmp43,tmp44);
		HX_STACK_LINE(94)
		bool tmp45;		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(94)
		{
			HX_STACK_LINE(94)
			::flixel::math::FlxRect tmp46 = ::flixel::util::FlxCollision_obj::intersect;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(94)
			::flixel::math::FlxRect tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(94)
			::flixel::math::FlxRect _this = tmp47;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(94)
			bool tmp48 = (_this->width == (int)0);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(94)
			bool tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(94)
			bool tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(94)
			bool tmp51 = !(tmp50);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(94)
			bool tmp52 = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(94)
			bool tmp53 = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(94)
			if ((tmp53)){
				HX_STACK_LINE(94)
				tmp45 = (_this->height == (int)0);
			}
			else{
				HX_STACK_LINE(94)
				tmp45 = true;
			}
		}
		HX_STACK_LINE(94)
		bool tmp46 = !(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(94)
		bool tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(94)
		bool tmp48;		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(94)
		if ((tmp47)){
			HX_STACK_LINE(94)
			::flixel::math::FlxRect tmp49 = ::flixel::util::FlxCollision_obj::intersect;		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(94)
			::flixel::math::FlxRect tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(94)
			::flixel::math::FlxRect tmp51 = tmp50;		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(94)
			Float tmp52 = tmp51->width;		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(94)
			tmp48 = (tmp52 < (int)1);
		}
		else{
			HX_STACK_LINE(94)
			tmp48 = true;
		}
		HX_STACK_LINE(94)
		bool tmp49 = !(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(94)
		bool tmp50;		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(94)
		if ((tmp49)){
			HX_STACK_LINE(94)
			::flixel::math::FlxRect tmp51 = ::flixel::util::FlxCollision_obj::intersect;		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(94)
			::flixel::math::FlxRect tmp52 = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(94)
			Float tmp53 = tmp52->height;		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(94)
			tmp50 = (tmp53 < (int)1);
		}
		else{
			HX_STACK_LINE(94)
			tmp50 = true;
		}
		HX_STACK_LINE(94)
		if ((tmp50)){
			HX_STACK_LINE(96)
			return false;
		}
		HX_STACK_LINE(100)
		::flixel::math::FlxMatrix tmp51 = ::flixel::util::FlxCollision_obj::matrixA;		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(100)
		tmp51->identity();
		HX_STACK_LINE(101)
		::flixel::math::FlxMatrix tmp52 = ::flixel::util::FlxCollision_obj::matrixA;		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(101)
		::flixel::math::FlxRect tmp53 = ::flixel::util::FlxCollision_obj::intersect;		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(101)
		Float tmp54 = tmp53->x;		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(101)
		::flixel::math::FlxRect tmp55 = ::flixel::util::FlxCollision_obj::boundsA;		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(101)
		Float tmp56 = tmp55->x;		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(101)
		Float tmp57 = (tmp54 - tmp56);		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(101)
		Float tmp58 = -(tmp57);		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(101)
		::flixel::math::FlxRect tmp59 = ::flixel::util::FlxCollision_obj::intersect;		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(101)
		Float tmp60 = tmp59->y;		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(101)
		::flixel::math::FlxRect tmp61 = ::flixel::util::FlxCollision_obj::boundsA;		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(101)
		Float tmp62 = tmp61->y;		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(101)
		Float tmp63 = (tmp60 - tmp62);		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(101)
		Float tmp64 = -(tmp63);		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(101)
		tmp52->translate(tmp58,tmp64);
		HX_STACK_LINE(103)
		::flixel::math::FlxMatrix tmp65 = ::flixel::util::FlxCollision_obj::matrixB;		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(103)
		tmp65->identity();
		HX_STACK_LINE(104)
		::flixel::math::FlxMatrix tmp66 = ::flixel::util::FlxCollision_obj::matrixB;		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(104)
		::flixel::math::FlxRect tmp67 = ::flixel::util::FlxCollision_obj::intersect;		HX_STACK_VAR(tmp67,"tmp67");
		HX_STACK_LINE(104)
		Float tmp68 = tmp67->x;		HX_STACK_VAR(tmp68,"tmp68");
		HX_STACK_LINE(104)
		::flixel::math::FlxRect tmp69 = ::flixel::util::FlxCollision_obj::boundsB;		HX_STACK_VAR(tmp69,"tmp69");
		HX_STACK_LINE(104)
		Float tmp70 = tmp69->x;		HX_STACK_VAR(tmp70,"tmp70");
		HX_STACK_LINE(104)
		Float tmp71 = (tmp68 - tmp70);		HX_STACK_VAR(tmp71,"tmp71");
		HX_STACK_LINE(104)
		Float tmp72 = -(tmp71);		HX_STACK_VAR(tmp72,"tmp72");
		HX_STACK_LINE(104)
		::flixel::math::FlxRect tmp73 = ::flixel::util::FlxCollision_obj::intersect;		HX_STACK_VAR(tmp73,"tmp73");
		HX_STACK_LINE(104)
		Float tmp74 = tmp73->y;		HX_STACK_VAR(tmp74,"tmp74");
		HX_STACK_LINE(104)
		::flixel::math::FlxRect tmp75 = ::flixel::util::FlxCollision_obj::boundsB;		HX_STACK_VAR(tmp75,"tmp75");
		HX_STACK_LINE(104)
		Float tmp76 = tmp75->y;		HX_STACK_VAR(tmp76,"tmp76");
		HX_STACK_LINE(104)
		Float tmp77 = (tmp74 - tmp76);		HX_STACK_VAR(tmp77,"tmp77");
		HX_STACK_LINE(104)
		Float tmp78 = -(tmp77);		HX_STACK_VAR(tmp78,"tmp78");
		HX_STACK_LINE(104)
		tmp66->translate(tmp72,tmp78);
		HX_STACK_LINE(106)
		Contact->drawFrame(null());
		HX_STACK_LINE(107)
		Target->drawFrame(null());
		HX_STACK_LINE(109)
		::openfl::_legacy::display::BitmapData testA = Contact->framePixels;		HX_STACK_VAR(testA,"testA");
		HX_STACK_LINE(110)
		::openfl::_legacy::display::BitmapData testB = Target->framePixels;		HX_STACK_VAR(testB,"testB");
		HX_STACK_LINE(112)
		::flixel::math::FlxRect tmp79 = ::flixel::util::FlxCollision_obj::intersect;		HX_STACK_VAR(tmp79,"tmp79");
		HX_STACK_LINE(112)
		Float tmp80 = tmp79->width;		HX_STACK_VAR(tmp80,"tmp80");
		HX_STACK_LINE(112)
		int tmp81 = ::Std_obj::_int(tmp80);		HX_STACK_VAR(tmp81,"tmp81");
		HX_STACK_LINE(112)
		int overlapWidth = tmp81;		HX_STACK_VAR(overlapWidth,"overlapWidth");
		HX_STACK_LINE(113)
		::flixel::math::FlxRect tmp82 = ::flixel::util::FlxCollision_obj::intersect;		HX_STACK_VAR(tmp82,"tmp82");
		HX_STACK_LINE(113)
		Float tmp83 = tmp82->height;		HX_STACK_VAR(tmp83,"tmp83");
		HX_STACK_LINE(113)
		int tmp84 = ::Std_obj::_int(tmp83);		HX_STACK_VAR(tmp84,"tmp84");
		HX_STACK_LINE(113)
		int overlapHeight = tmp84;		HX_STACK_VAR(overlapHeight,"overlapHeight");
		HX_STACK_LINE(116)
		bool tmp85 = considerRotation;		HX_STACK_VAR(tmp85,"tmp85");
		HX_STACK_LINE(116)
		if ((tmp85)){
			HX_STACK_LINE(118)
			::flixel::math::FlxMatrix tmp86 = ::flixel::util::FlxCollision_obj::testMatrix;		HX_STACK_VAR(tmp86,"tmp86");
			HX_STACK_LINE(118)
			tmp86->identity();
			HX_STACK_LINE(121)
			::flixel::math::FlxMatrix tmp87 = ::flixel::util::FlxCollision_obj::testMatrix;		HX_STACK_VAR(tmp87,"tmp87");
			HX_STACK_LINE(121)
			Float tmp88 = Contact->origin->x;		HX_STACK_VAR(tmp88,"tmp88");
			HX_STACK_LINE(121)
			Float tmp89 = -(tmp88);		HX_STACK_VAR(tmp89,"tmp89");
			HX_STACK_LINE(121)
			Float tmp90 = Contact->origin->y;		HX_STACK_VAR(tmp90,"tmp90");
			HX_STACK_LINE(121)
			Float tmp91 = -(tmp90);		HX_STACK_VAR(tmp91,"tmp91");
			HX_STACK_LINE(121)
			tmp87->translate(tmp89,tmp91);
			HX_STACK_LINE(124)
			::flixel::math::FlxMatrix tmp92 = ::flixel::util::FlxCollision_obj::testMatrix;		HX_STACK_VAR(tmp92,"tmp92");
			HX_STACK_LINE(124)
			Float tmp93 = Contact->angle;		HX_STACK_VAR(tmp93,"tmp93");
			HX_STACK_LINE(124)
			Float tmp94 = ::Math_obj::PI;		HX_STACK_VAR(tmp94,"tmp94");
			HX_STACK_LINE(124)
			Float tmp95 = (Float(tmp94) / Float((int)180));		HX_STACK_VAR(tmp95,"tmp95");
			HX_STACK_LINE(124)
			Float tmp96 = (tmp93 * tmp95);		HX_STACK_VAR(tmp96,"tmp96");
			HX_STACK_LINE(124)
			tmp92->rotate(tmp96);
			HX_STACK_LINE(127)
			::flixel::math::FlxMatrix tmp97 = ::flixel::util::FlxCollision_obj::testMatrix;		HX_STACK_VAR(tmp97,"tmp97");
			HX_STACK_LINE(127)
			::flixel::math::FlxRect tmp98 = ::flixel::util::FlxCollision_obj::boundsA;		HX_STACK_VAR(tmp98,"tmp98");
			HX_STACK_LINE(127)
			Float tmp99 = tmp98->width;		HX_STACK_VAR(tmp99,"tmp99");
			HX_STACK_LINE(127)
			Float tmp100 = (Float(tmp99) / Float((int)2));		HX_STACK_VAR(tmp100,"tmp100");
			HX_STACK_LINE(127)
			::flixel::math::FlxRect tmp101 = ::flixel::util::FlxCollision_obj::boundsA;		HX_STACK_VAR(tmp101,"tmp101");
			HX_STACK_LINE(127)
			Float tmp102 = tmp101->height;		HX_STACK_VAR(tmp102,"tmp102");
			HX_STACK_LINE(127)
			Float tmp103 = (Float(tmp102) / Float((int)2));		HX_STACK_VAR(tmp103,"tmp103");
			HX_STACK_LINE(127)
			tmp97->translate(tmp100,tmp103);
			HX_STACK_LINE(130)
			::flixel::math::FlxRect tmp104 = ::flixel::util::FlxCollision_obj::boundsA;		HX_STACK_VAR(tmp104,"tmp104");
			HX_STACK_LINE(130)
			Float tmp105 = tmp104->width;		HX_STACK_VAR(tmp105,"tmp105");
			HX_STACK_LINE(130)
			int tmp106 = ::Math_obj::floor(tmp105);		HX_STACK_VAR(tmp106,"tmp106");
			HX_STACK_LINE(130)
			::flixel::math::FlxRect tmp107 = ::flixel::util::FlxCollision_obj::boundsA;		HX_STACK_VAR(tmp107,"tmp107");
			HX_STACK_LINE(130)
			Float tmp108 = tmp107->height;		HX_STACK_VAR(tmp108,"tmp108");
			HX_STACK_LINE(130)
			int tmp109 = ::Math_obj::floor(tmp108);		HX_STACK_VAR(tmp109,"tmp109");
			HX_STACK_LINE(130)
			::openfl::_legacy::display::BitmapData tmp110 = ::flixel::util::FlxBitmapDataPool_obj::get(tmp106,tmp109,true,(int)0,false);		HX_STACK_VAR(tmp110,"tmp110");
			HX_STACK_LINE(130)
			::openfl::_legacy::display::BitmapData testA2 = tmp110;		HX_STACK_VAR(testA2,"testA2");
			HX_STACK_LINE(133)
			::openfl::_legacy::display::BitmapData tmp111 = testA;		HX_STACK_VAR(tmp111,"tmp111");
			HX_STACK_LINE(133)
			::flixel::math::FlxMatrix tmp112 = ::flixel::util::FlxCollision_obj::testMatrix;		HX_STACK_VAR(tmp112,"tmp112");
			HX_STACK_LINE(133)
			testA2->draw(tmp111,tmp112,null(),null(),null(),false);
			HX_STACK_LINE(134)
			testA = testA2;
			HX_STACK_LINE(137)
			::flixel::math::FlxMatrix tmp113 = ::flixel::util::FlxCollision_obj::testMatrix;		HX_STACK_VAR(tmp113,"tmp113");
			HX_STACK_LINE(137)
			tmp113->identity();
			HX_STACK_LINE(138)
			::flixel::math::FlxMatrix tmp114 = ::flixel::util::FlxCollision_obj::testMatrix;		HX_STACK_VAR(tmp114,"tmp114");
			HX_STACK_LINE(138)
			Float tmp115 = Target->origin->x;		HX_STACK_VAR(tmp115,"tmp115");
			HX_STACK_LINE(138)
			Float tmp116 = -(tmp115);		HX_STACK_VAR(tmp116,"tmp116");
			HX_STACK_LINE(138)
			Float tmp117 = Target->origin->y;		HX_STACK_VAR(tmp117,"tmp117");
			HX_STACK_LINE(138)
			Float tmp118 = -(tmp117);		HX_STACK_VAR(tmp118,"tmp118");
			HX_STACK_LINE(138)
			tmp114->translate(tmp116,tmp118);
			HX_STACK_LINE(139)
			::flixel::math::FlxMatrix tmp119 = ::flixel::util::FlxCollision_obj::testMatrix;		HX_STACK_VAR(tmp119,"tmp119");
			HX_STACK_LINE(139)
			Float tmp120 = Target->angle;		HX_STACK_VAR(tmp120,"tmp120");
			HX_STACK_LINE(139)
			Float tmp121 = ::Math_obj::PI;		HX_STACK_VAR(tmp121,"tmp121");
			HX_STACK_LINE(139)
			Float tmp122 = (Float(tmp121) / Float((int)180));		HX_STACK_VAR(tmp122,"tmp122");
			HX_STACK_LINE(139)
			Float tmp123 = (tmp120 * tmp122);		HX_STACK_VAR(tmp123,"tmp123");
			HX_STACK_LINE(139)
			tmp119->rotate(tmp123);
			HX_STACK_LINE(140)
			::flixel::math::FlxMatrix tmp124 = ::flixel::util::FlxCollision_obj::testMatrix;		HX_STACK_VAR(tmp124,"tmp124");
			HX_STACK_LINE(140)
			::flixel::math::FlxRect tmp125 = ::flixel::util::FlxCollision_obj::boundsB;		HX_STACK_VAR(tmp125,"tmp125");
			HX_STACK_LINE(140)
			Float tmp126 = tmp125->width;		HX_STACK_VAR(tmp126,"tmp126");
			HX_STACK_LINE(140)
			Float tmp127 = (Float(tmp126) / Float((int)2));		HX_STACK_VAR(tmp127,"tmp127");
			HX_STACK_LINE(140)
			::flixel::math::FlxRect tmp128 = ::flixel::util::FlxCollision_obj::boundsB;		HX_STACK_VAR(tmp128,"tmp128");
			HX_STACK_LINE(140)
			Float tmp129 = tmp128->height;		HX_STACK_VAR(tmp129,"tmp129");
			HX_STACK_LINE(140)
			Float tmp130 = (Float(tmp129) / Float((int)2));		HX_STACK_VAR(tmp130,"tmp130");
			HX_STACK_LINE(140)
			tmp124->translate(tmp127,tmp130);
			HX_STACK_LINE(142)
			::flixel::math::FlxRect tmp131 = ::flixel::util::FlxCollision_obj::boundsB;		HX_STACK_VAR(tmp131,"tmp131");
			HX_STACK_LINE(142)
			Float tmp132 = tmp131->width;		HX_STACK_VAR(tmp132,"tmp132");
			HX_STACK_LINE(142)
			int tmp133 = ::Math_obj::floor(tmp132);		HX_STACK_VAR(tmp133,"tmp133");
			HX_STACK_LINE(142)
			::flixel::math::FlxRect tmp134 = ::flixel::util::FlxCollision_obj::boundsB;		HX_STACK_VAR(tmp134,"tmp134");
			HX_STACK_LINE(142)
			Float tmp135 = tmp134->height;		HX_STACK_VAR(tmp135,"tmp135");
			HX_STACK_LINE(142)
			int tmp136 = ::Math_obj::floor(tmp135);		HX_STACK_VAR(tmp136,"tmp136");
			HX_STACK_LINE(142)
			::openfl::_legacy::display::BitmapData tmp137 = ::flixel::util::FlxBitmapDataPool_obj::get(tmp133,tmp136,true,(int)0,false);		HX_STACK_VAR(tmp137,"tmp137");
			HX_STACK_LINE(142)
			::openfl::_legacy::display::BitmapData testB2 = tmp137;		HX_STACK_VAR(testB2,"testB2");
			HX_STACK_LINE(143)
			::openfl::_legacy::display::BitmapData tmp138 = testB;		HX_STACK_VAR(tmp138,"tmp138");
			HX_STACK_LINE(143)
			::flixel::math::FlxMatrix tmp139 = ::flixel::util::FlxCollision_obj::testMatrix;		HX_STACK_VAR(tmp139,"tmp139");
			HX_STACK_LINE(143)
			testB2->draw(tmp138,tmp139,null(),null(),null(),false);
			HX_STACK_LINE(144)
			testB = testB2;
		}
		HX_STACK_LINE(147)
		::flixel::math::FlxMatrix tmp86 = ::flixel::util::FlxCollision_obj::matrixA;		HX_STACK_VAR(tmp86,"tmp86");
		HX_STACK_LINE(147)
		Float tmp87 = tmp86->tx;		HX_STACK_VAR(tmp87,"tmp87");
		HX_STACK_LINE(147)
		Float tmp88 = -(tmp87);		HX_STACK_VAR(tmp88,"tmp88");
		HX_STACK_LINE(147)
		int tmp89 = ::Std_obj::_int(tmp88);		HX_STACK_VAR(tmp89,"tmp89");
		HX_STACK_LINE(147)
		::flixel::math::FlxRect tmp90 = ::flixel::util::FlxCollision_obj::boundsA;		HX_STACK_VAR(tmp90,"tmp90");
		HX_STACK_LINE(147)
		tmp90->x = tmp89;
		HX_STACK_LINE(148)
		::flixel::math::FlxMatrix tmp91 = ::flixel::util::FlxCollision_obj::matrixA;		HX_STACK_VAR(tmp91,"tmp91");
		HX_STACK_LINE(148)
		Float tmp92 = tmp91->ty;		HX_STACK_VAR(tmp92,"tmp92");
		HX_STACK_LINE(148)
		Float tmp93 = -(tmp92);		HX_STACK_VAR(tmp93,"tmp93");
		HX_STACK_LINE(148)
		int tmp94 = ::Std_obj::_int(tmp93);		HX_STACK_VAR(tmp94,"tmp94");
		HX_STACK_LINE(148)
		::flixel::math::FlxRect tmp95 = ::flixel::util::FlxCollision_obj::boundsA;		HX_STACK_VAR(tmp95,"tmp95");
		HX_STACK_LINE(148)
		tmp95->y = tmp94;
		HX_STACK_LINE(149)
		::flixel::math::FlxRect tmp96 = ::flixel::util::FlxCollision_obj::boundsA;		HX_STACK_VAR(tmp96,"tmp96");
		HX_STACK_LINE(149)
		tmp96->width = overlapWidth;
		HX_STACK_LINE(150)
		::flixel::math::FlxRect tmp97 = ::flixel::util::FlxCollision_obj::boundsA;		HX_STACK_VAR(tmp97,"tmp97");
		HX_STACK_LINE(150)
		tmp97->height = overlapHeight;
		HX_STACK_LINE(152)
		::flixel::math::FlxMatrix tmp98 = ::flixel::util::FlxCollision_obj::matrixB;		HX_STACK_VAR(tmp98,"tmp98");
		HX_STACK_LINE(152)
		Float tmp99 = tmp98->tx;		HX_STACK_VAR(tmp99,"tmp99");
		HX_STACK_LINE(152)
		Float tmp100 = -(tmp99);		HX_STACK_VAR(tmp100,"tmp100");
		HX_STACK_LINE(152)
		int tmp101 = ::Std_obj::_int(tmp100);		HX_STACK_VAR(tmp101,"tmp101");
		HX_STACK_LINE(152)
		::flixel::math::FlxRect tmp102 = ::flixel::util::FlxCollision_obj::boundsB;		HX_STACK_VAR(tmp102,"tmp102");
		HX_STACK_LINE(152)
		tmp102->x = tmp101;
		HX_STACK_LINE(153)
		::flixel::math::FlxMatrix tmp103 = ::flixel::util::FlxCollision_obj::matrixB;		HX_STACK_VAR(tmp103,"tmp103");
		HX_STACK_LINE(153)
		Float tmp104 = tmp103->ty;		HX_STACK_VAR(tmp104,"tmp104");
		HX_STACK_LINE(153)
		Float tmp105 = -(tmp104);		HX_STACK_VAR(tmp105,"tmp105");
		HX_STACK_LINE(153)
		int tmp106 = ::Std_obj::_int(tmp105);		HX_STACK_VAR(tmp106,"tmp106");
		HX_STACK_LINE(153)
		::flixel::math::FlxRect tmp107 = ::flixel::util::FlxCollision_obj::boundsB;		HX_STACK_VAR(tmp107,"tmp107");
		HX_STACK_LINE(153)
		tmp107->y = tmp106;
		HX_STACK_LINE(154)
		::flixel::math::FlxRect tmp108 = ::flixel::util::FlxCollision_obj::boundsB;		HX_STACK_VAR(tmp108,"tmp108");
		HX_STACK_LINE(154)
		tmp108->width = overlapWidth;
		HX_STACK_LINE(155)
		::flixel::math::FlxRect tmp109 = ::flixel::util::FlxCollision_obj::boundsB;		HX_STACK_VAR(tmp109,"tmp109");
		HX_STACK_LINE(155)
		tmp109->height = overlapHeight;
		HX_STACK_LINE(157)
		{
			HX_STACK_LINE(157)
			::flixel::math::FlxRect tmp110 = ::flixel::util::FlxCollision_obj::boundsA;		HX_STACK_VAR(tmp110,"tmp110");
			HX_STACK_LINE(157)
			::flixel::math::FlxRect _this = tmp110;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(157)
			::openfl::_legacy::geom::Rectangle tmp111 = ::flixel::util::FlxCollision_obj::flashRect;		HX_STACK_VAR(tmp111,"tmp111");
			HX_STACK_LINE(157)
			::openfl::_legacy::geom::Rectangle FlashRect = tmp111;		HX_STACK_VAR(FlashRect,"FlashRect");
			HX_STACK_LINE(157)
			bool tmp112 = (FlashRect == null());		HX_STACK_VAR(tmp112,"tmp112");
			HX_STACK_LINE(157)
			if ((tmp112)){
				HX_STACK_LINE(157)
				::openfl::_legacy::geom::Rectangle tmp113 = ::openfl::_legacy::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp113,"tmp113");
				HX_STACK_LINE(157)
				FlashRect = tmp113;
			}
			HX_STACK_LINE(157)
			FlashRect->x = _this->x;
			HX_STACK_LINE(157)
			FlashRect->y = _this->y;
			HX_STACK_LINE(157)
			FlashRect->width = _this->width;
			HX_STACK_LINE(157)
			FlashRect->height = _this->height;
			HX_STACK_LINE(157)
			FlashRect;
		}
		HX_STACK_LINE(158)
		::openfl::_legacy::geom::Rectangle tmp110 = ::flixel::util::FlxCollision_obj::flashRect;		HX_STACK_VAR(tmp110,"tmp110");
		HX_STACK_LINE(158)
		::openfl::_legacy::utils::ByteArray tmp111 = testA->getPixels(tmp110);		HX_STACK_VAR(tmp111,"tmp111");
		HX_STACK_LINE(158)
		::openfl::_legacy::utils::ByteArray pixelsA = tmp111;		HX_STACK_VAR(pixelsA,"pixelsA");
		HX_STACK_LINE(160)
		{
			HX_STACK_LINE(160)
			::flixel::math::FlxRect tmp112 = ::flixel::util::FlxCollision_obj::boundsB;		HX_STACK_VAR(tmp112,"tmp112");
			HX_STACK_LINE(160)
			::flixel::math::FlxRect _this = tmp112;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(160)
			::openfl::_legacy::geom::Rectangle tmp113 = ::flixel::util::FlxCollision_obj::flashRect;		HX_STACK_VAR(tmp113,"tmp113");
			HX_STACK_LINE(160)
			::openfl::_legacy::geom::Rectangle FlashRect = tmp113;		HX_STACK_VAR(FlashRect,"FlashRect");
			HX_STACK_LINE(160)
			bool tmp114 = (FlashRect == null());		HX_STACK_VAR(tmp114,"tmp114");
			HX_STACK_LINE(160)
			if ((tmp114)){
				HX_STACK_LINE(160)
				::openfl::_legacy::geom::Rectangle tmp115 = ::openfl::_legacy::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp115,"tmp115");
				HX_STACK_LINE(160)
				FlashRect = tmp115;
			}
			HX_STACK_LINE(160)
			FlashRect->x = _this->x;
			HX_STACK_LINE(160)
			FlashRect->y = _this->y;
			HX_STACK_LINE(160)
			FlashRect->width = _this->width;
			HX_STACK_LINE(160)
			FlashRect->height = _this->height;
			HX_STACK_LINE(160)
			FlashRect;
		}
		HX_STACK_LINE(161)
		::openfl::_legacy::geom::Rectangle tmp112 = ::flixel::util::FlxCollision_obj::flashRect;		HX_STACK_VAR(tmp112,"tmp112");
		HX_STACK_LINE(161)
		::openfl::_legacy::utils::ByteArray tmp113 = testB->getPixels(tmp112);		HX_STACK_VAR(tmp113,"tmp113");
		HX_STACK_LINE(161)
		::openfl::_legacy::utils::ByteArray pixelsB = tmp113;		HX_STACK_VAR(pixelsB,"pixelsB");
		HX_STACK_LINE(163)
		bool hit = false;		HX_STACK_VAR(hit,"hit");
		HX_STACK_LINE(166)
		int alphaA = (int)0;		HX_STACK_VAR(alphaA,"alphaA");
		HX_STACK_LINE(167)
		int alphaB = (int)0;		HX_STACK_VAR(alphaB,"alphaB");
		HX_STACK_LINE(168)
		int tmp114 = (overlapWidth * overlapHeight);		HX_STACK_VAR(tmp114,"tmp114");
		HX_STACK_LINE(168)
		int overlapPixels = tmp114;		HX_STACK_VAR(overlapPixels,"overlapPixels");
		HX_STACK_LINE(169)
		int alphaIdx = (int)0;		HX_STACK_VAR(alphaIdx,"alphaIdx");
		HX_STACK_LINE(172)
		{
			HX_STACK_LINE(172)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(172)
			Float tmp115 = (Float(overlapPixels) / Float((int)2));		HX_STACK_VAR(tmp115,"tmp115");
			HX_STACK_LINE(172)
			int tmp116 = ::Math_obj::ceil(tmp115);		HX_STACK_VAR(tmp116,"tmp116");
			HX_STACK_LINE(172)
			int _g = tmp116;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(172)
			while((true)){
				HX_STACK_LINE(172)
				bool tmp117 = (_g1 < _g);		HX_STACK_VAR(tmp117,"tmp117");
				HX_STACK_LINE(172)
				bool tmp118 = !(tmp117);		HX_STACK_VAR(tmp118,"tmp118");
				HX_STACK_LINE(172)
				if ((tmp118)){
					HX_STACK_LINE(172)
					break;
				}
				HX_STACK_LINE(172)
				int tmp119 = (_g1)++;		HX_STACK_VAR(tmp119,"tmp119");
				HX_STACK_LINE(172)
				int i = tmp119;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(174)
				int tmp120 = (int(i) << int((int)3));		HX_STACK_VAR(tmp120,"tmp120");
				HX_STACK_LINE(174)
				alphaIdx = tmp120;
				HX_STACK_LINE(175)
				int tmp121 = pixelsB->position = alphaIdx;		HX_STACK_VAR(tmp121,"tmp121");
				HX_STACK_LINE(175)
				pixelsA->position = tmp121;
				HX_STACK_LINE(176)
				bool tmp122 = (pixelsA->position < pixelsA->length);		HX_STACK_VAR(tmp122,"tmp122");
				HX_STACK_LINE(176)
				int tmp123;		HX_STACK_VAR(tmp123,"tmp123");
				HX_STACK_LINE(176)
				if ((tmp122)){
					HX_STACK_LINE(176)
					int tmp124 = (pixelsA->position)++;		HX_STACK_VAR(tmp124,"tmp124");
					HX_STACK_LINE(176)
					int pos = tmp124;		HX_STACK_VAR(pos,"pos");
					HX_STACK_LINE(176)
					tmp123 = pixelsA->b->__get(pos);
				}
				else{
					HX_STACK_LINE(176)
					tmp123 = pixelsA->__throwEOFi();
				}
				HX_STACK_LINE(176)
				alphaA = tmp123;
				HX_STACK_LINE(177)
				bool tmp124 = (pixelsB->position < pixelsB->length);		HX_STACK_VAR(tmp124,"tmp124");
				HX_STACK_LINE(177)
				int tmp125;		HX_STACK_VAR(tmp125,"tmp125");
				HX_STACK_LINE(177)
				if ((tmp124)){
					HX_STACK_LINE(177)
					int tmp126 = (pixelsB->position)++;		HX_STACK_VAR(tmp126,"tmp126");
					HX_STACK_LINE(177)
					int pos = tmp126;		HX_STACK_VAR(pos,"pos");
					HX_STACK_LINE(177)
					tmp125 = pixelsB->b->__get(pos);
				}
				else{
					HX_STACK_LINE(177)
					tmp125 = pixelsB->__throwEOFi();
				}
				HX_STACK_LINE(177)
				alphaB = tmp125;
				HX_STACK_LINE(179)
				bool tmp126 = (alphaA >= AlphaTolerance);		HX_STACK_VAR(tmp126,"tmp126");
				HX_STACK_LINE(179)
				bool tmp127;		HX_STACK_VAR(tmp127,"tmp127");
				HX_STACK_LINE(179)
				if ((tmp126)){
					HX_STACK_LINE(179)
					tmp127 = (alphaB >= AlphaTolerance);
				}
				else{
					HX_STACK_LINE(179)
					tmp127 = false;
				}
				HX_STACK_LINE(179)
				if ((tmp127)){
					HX_STACK_LINE(181)
					hit = true;
					HX_STACK_LINE(182)
					break;
				}
			}
		}
		HX_STACK_LINE(186)
		bool tmp115 = hit;		HX_STACK_VAR(tmp115,"tmp115");
		HX_STACK_LINE(186)
		bool tmp116 = !(tmp115);		HX_STACK_VAR(tmp116,"tmp116");
		HX_STACK_LINE(186)
		if ((tmp116)){
			HX_STACK_LINE(189)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(189)
			int tmp117 = (int(overlapPixels) >> int((int)1));		HX_STACK_VAR(tmp117,"tmp117");
			HX_STACK_LINE(189)
			int _g = tmp117;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(189)
			while((true)){
				HX_STACK_LINE(189)
				bool tmp118 = (_g1 < _g);		HX_STACK_VAR(tmp118,"tmp118");
				HX_STACK_LINE(189)
				bool tmp119 = !(tmp118);		HX_STACK_VAR(tmp119,"tmp119");
				HX_STACK_LINE(189)
				if ((tmp119)){
					HX_STACK_LINE(189)
					break;
				}
				HX_STACK_LINE(189)
				int tmp120 = (_g1)++;		HX_STACK_VAR(tmp120,"tmp120");
				HX_STACK_LINE(189)
				int i = tmp120;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(191)
				int tmp121 = (int(i) << int((int)3));		HX_STACK_VAR(tmp121,"tmp121");
				HX_STACK_LINE(191)
				int tmp122 = (tmp121 + (int)4);		HX_STACK_VAR(tmp122,"tmp122");
				HX_STACK_LINE(191)
				alphaIdx = tmp122;
				HX_STACK_LINE(192)
				int tmp123 = pixelsB->position = alphaIdx;		HX_STACK_VAR(tmp123,"tmp123");
				HX_STACK_LINE(192)
				pixelsA->position = tmp123;
				HX_STACK_LINE(193)
				bool tmp124 = (pixelsA->position < pixelsA->length);		HX_STACK_VAR(tmp124,"tmp124");
				HX_STACK_LINE(193)
				int tmp125;		HX_STACK_VAR(tmp125,"tmp125");
				HX_STACK_LINE(193)
				if ((tmp124)){
					HX_STACK_LINE(193)
					int tmp126 = (pixelsA->position)++;		HX_STACK_VAR(tmp126,"tmp126");
					HX_STACK_LINE(193)
					int pos = tmp126;		HX_STACK_VAR(pos,"pos");
					HX_STACK_LINE(193)
					tmp125 = pixelsA->b->__get(pos);
				}
				else{
					HX_STACK_LINE(193)
					tmp125 = pixelsA->__throwEOFi();
				}
				HX_STACK_LINE(193)
				alphaA = tmp125;
				HX_STACK_LINE(194)
				bool tmp126 = (pixelsB->position < pixelsB->length);		HX_STACK_VAR(tmp126,"tmp126");
				HX_STACK_LINE(194)
				int tmp127;		HX_STACK_VAR(tmp127,"tmp127");
				HX_STACK_LINE(194)
				if ((tmp126)){
					HX_STACK_LINE(194)
					int tmp128 = (pixelsB->position)++;		HX_STACK_VAR(tmp128,"tmp128");
					HX_STACK_LINE(194)
					int pos = tmp128;		HX_STACK_VAR(pos,"pos");
					HX_STACK_LINE(194)
					tmp127 = pixelsB->b->__get(pos);
				}
				else{
					HX_STACK_LINE(194)
					tmp127 = pixelsB->__throwEOFi();
				}
				HX_STACK_LINE(194)
				alphaB = tmp127;
				HX_STACK_LINE(196)
				bool tmp128 = (alphaA >= AlphaTolerance);		HX_STACK_VAR(tmp128,"tmp128");
				HX_STACK_LINE(196)
				bool tmp129;		HX_STACK_VAR(tmp129,"tmp129");
				HX_STACK_LINE(196)
				if ((tmp128)){
					HX_STACK_LINE(196)
					tmp129 = (alphaB >= AlphaTolerance);
				}
				else{
					HX_STACK_LINE(196)
					tmp129 = false;
				}
				HX_STACK_LINE(196)
				if ((tmp129)){
					HX_STACK_LINE(198)
					hit = true;
					HX_STACK_LINE(199)
					break;
				}
			}
		}
		HX_STACK_LINE(204)
		bool tmp117 = considerRotation;		HX_STACK_VAR(tmp117,"tmp117");
		HX_STACK_LINE(204)
		if ((tmp117)){
			HX_STACK_LINE(206)
			::openfl::_legacy::display::BitmapData tmp118 = testA;		HX_STACK_VAR(tmp118,"tmp118");
			HX_STACK_LINE(206)
			::flixel::util::FlxBitmapDataPool_obj::put(tmp118);
			HX_STACK_LINE(207)
			::openfl::_legacy::display::BitmapData tmp119 = testB;		HX_STACK_VAR(tmp119,"tmp119");
			HX_STACK_LINE(207)
			::flixel::util::FlxBitmapDataPool_obj::put(tmp119);
		}
		HX_STACK_LINE(210)
		bool tmp118 = hit;		HX_STACK_VAR(tmp118,"tmp118");
		HX_STACK_LINE(210)
		return tmp118;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxCollision_obj,pixelPerfectCheck,return )

bool FlxCollision_obj::pixelPerfectPointCheck( int PointX,int PointY,::flixel::FlxSprite Target,hx::Null< int >  __o_AlphaTolerance){
int AlphaTolerance = __o_AlphaTolerance.Default(1);
	HX_STACK_FRAME("flixel.util.FlxCollision","pixelPerfectPointCheck",0x29896333,"flixel.util.FlxCollision.pixelPerfectPointCheck","flixel/util/FlxCollision.hx",223,0x8c8a7b84)
	HX_STACK_ARG(PointX,"PointX")
	HX_STACK_ARG(PointY,"PointY")
	HX_STACK_ARG(Target,"Target")
	HX_STACK_ARG(AlphaTolerance,"AlphaTolerance")
{
		HX_STACK_LINE(225)
		int tmp = PointX;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(225)
		int tmp1 = PointY;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(225)
		Float tmp2 = Target->x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(225)
		int tmp3 = ::Math_obj::floor(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(226)
		Float tmp4 = Target->y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(226)
		int tmp5 = ::Math_obj::floor(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(226)
		Float tmp6 = Target->get_width();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(226)
		int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(226)
		Float tmp8 = Target->get_height();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(226)
		int tmp9 = ::Std_obj::_int(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(225)
		bool tmp10 = ::flixel::math::FlxMath_obj::pointInCoordinates(tmp,tmp1,tmp3,tmp5,tmp7,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(225)
		bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(225)
		if ((tmp11)){
			HX_STACK_LINE(228)
			return false;
		}
		HX_STACK_LINE(231)
		bool tmp12 = ::flixel::FlxG_obj::renderTile;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(231)
		if ((tmp12)){
			HX_STACK_LINE(233)
			Target->drawFrame(null());
		}
		HX_STACK_LINE(237)
		::openfl::_legacy::display::BitmapData test = Target->framePixels;		HX_STACK_VAR(test,"test");
		HX_STACK_LINE(239)
		int tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(239)
		{
			HX_STACK_LINE(239)
			int tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(239)
			{
				HX_STACK_LINE(239)
				Float tmp15 = (PointX - Target->x);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(239)
				int tmp16 = ::Math_obj::floor(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(239)
				Float tmp17 = (PointY - Target->y);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(239)
				int tmp18 = ::Math_obj::floor(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(239)
				int tmp19 = test->getPixel32(tmp16,tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(239)
				int Value = tmp19;		HX_STACK_VAR(Value,"Value");
				HX_STACK_LINE(239)
				int tmp20 = Value;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(239)
				tmp14 = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(tmp20);
			}
			HX_STACK_LINE(239)
			int this1 = tmp14;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(239)
			int tmp15 = (int(this1) >> int((int)24));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(239)
			tmp13 = (int(tmp15) & int((int)255));
		}
		HX_STACK_LINE(239)
		int pixelAlpha = tmp13;		HX_STACK_VAR(pixelAlpha,"pixelAlpha");
		HX_STACK_LINE(241)
		bool tmp14 = ::flixel::FlxG_obj::renderTile;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(241)
		if ((tmp14)){
			HX_STACK_LINE(243)
			Float tmp15 = (pixelAlpha * Target->alpha);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(243)
			int tmp16 = ::Std_obj::_int(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(243)
			pixelAlpha = tmp16;
		}
		HX_STACK_LINE(247)
		bool tmp15 = (pixelAlpha >= AlphaTolerance);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(247)
		return tmp15;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxCollision_obj,pixelPerfectPointCheck,return )

::flixel::group::FlxTypedGroup FlxCollision_obj::createCameraWall( ::flixel::FlxCamera Camera,hx::Null< bool >  __o_PlaceOutside,int Thickness,hx::Null< bool >  __o_AdjustWorldBounds){
bool PlaceOutside = __o_PlaceOutside.Default(true);
bool AdjustWorldBounds = __o_AdjustWorldBounds.Default(false);
	HX_STACK_FRAME("flixel.util.FlxCollision","createCameraWall",0x3ca8e03f,"flixel.util.FlxCollision.createCameraWall","flixel/util/FlxCollision.hx",260,0x8c8a7b84)
	HX_STACK_ARG(Camera,"Camera")
	HX_STACK_ARG(PlaceOutside,"PlaceOutside")
	HX_STACK_ARG(Thickness,"Thickness")
	HX_STACK_ARG(AdjustWorldBounds,"AdjustWorldBounds")
{
		HX_STACK_LINE(261)
		::flixel::tile::FlxTileblock left = null();		HX_STACK_VAR(left,"left");
		HX_STACK_LINE(262)
		::flixel::tile::FlxTileblock right = null();		HX_STACK_VAR(right,"right");
		HX_STACK_LINE(263)
		::flixel::tile::FlxTileblock top = null();		HX_STACK_VAR(top,"top");
		HX_STACK_LINE(264)
		::flixel::tile::FlxTileblock bottom = null();		HX_STACK_VAR(bottom,"bottom");
		HX_STACK_LINE(266)
		bool tmp = PlaceOutside;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(266)
		if ((tmp)){
			HX_STACK_LINE(268)
			Float tmp1 = (Camera->x - Thickness);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(268)
			int tmp2 = ::Math_obj::floor(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(268)
			Float tmp3 = (Camera->y + Thickness);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(268)
			int tmp4 = ::Math_obj::floor(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(268)
			int tmp5 = Thickness;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(268)
			int tmp6 = Camera->height;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(268)
			int tmp7 = (Thickness * (int)2);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(268)
			int tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(268)
			::flixel::tile::FlxTileblock tmp9 = ::flixel::tile::FlxTileblock_obj::__new(tmp2,tmp4,tmp5,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(268)
			left = tmp9;
			HX_STACK_LINE(269)
			Float tmp10 = (Camera->x + Camera->width);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(269)
			int tmp11 = ::Math_obj::floor(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(269)
			Float tmp12 = (Camera->y + Thickness);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(269)
			int tmp13 = ::Math_obj::floor(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(269)
			int tmp14 = Thickness;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(269)
			int tmp15 = Camera->height;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(269)
			int tmp16 = (Thickness * (int)2);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(269)
			int tmp17 = (tmp15 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(269)
			::flixel::tile::FlxTileblock tmp18 = ::flixel::tile::FlxTileblock_obj::__new(tmp11,tmp13,tmp14,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(269)
			right = tmp18;
			HX_STACK_LINE(270)
			Float tmp19 = (Camera->x - Thickness);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(270)
			int tmp20 = ::Math_obj::floor(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(270)
			Float tmp21 = (Camera->y - Thickness);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(270)
			int tmp22 = ::Math_obj::floor(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(270)
			int tmp23 = Camera->width;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(270)
			int tmp24 = (Thickness * (int)2);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(270)
			int tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(270)
			int tmp26 = Thickness;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(270)
			::flixel::tile::FlxTileblock tmp27 = ::flixel::tile::FlxTileblock_obj::__new(tmp20,tmp22,tmp25,tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(270)
			top = tmp27;
			HX_STACK_LINE(271)
			Float tmp28 = (Camera->x - Thickness);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(271)
			int tmp29 = ::Math_obj::floor(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(271)
			int tmp30 = Camera->height;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(271)
			int tmp31 = Camera->width;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(271)
			int tmp32 = (Thickness * (int)2);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(271)
			int tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(271)
			int tmp34 = Thickness;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(271)
			::flixel::tile::FlxTileblock tmp35 = ::flixel::tile::FlxTileblock_obj::__new(tmp29,tmp30,tmp33,tmp34);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(271)
			bottom = tmp35;
			HX_STACK_LINE(273)
			bool tmp36 = AdjustWorldBounds;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(273)
			if ((tmp36)){
				HX_STACK_LINE(275)
				::flixel::math::FlxRect tmp37 = ::flixel::FlxG_obj::worldBounds;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(275)
				::flixel::math::FlxRect _this = tmp37;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(275)
				Float tmp38 = (Camera->x - Thickness);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(275)
				_this->x = tmp38;
				HX_STACK_LINE(275)
				Float tmp39 = (Camera->y - Thickness);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(275)
				_this->y = tmp39;
				HX_STACK_LINE(275)
				int tmp40 = Camera->width;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(275)
				int tmp41 = (Thickness * (int)2);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(275)
				int tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(275)
				_this->width = tmp42;
				HX_STACK_LINE(275)
				int tmp43 = Camera->height;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(275)
				int tmp44 = (Thickness * (int)2);		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(275)
				int tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(275)
				_this->height = tmp45;
				HX_STACK_LINE(275)
				_this;
			}
		}
		else{
			HX_STACK_LINE(280)
			Float tmp1 = Camera->x;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(280)
			int tmp2 = ::Math_obj::floor(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(280)
			Float tmp3 = (Camera->y + Thickness);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(280)
			int tmp4 = ::Math_obj::floor(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(280)
			int tmp5 = Thickness;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(280)
			int tmp6 = Camera->height;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(280)
			int tmp7 = (Thickness * (int)2);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(280)
			int tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(280)
			::flixel::tile::FlxTileblock tmp9 = ::flixel::tile::FlxTileblock_obj::__new(tmp2,tmp4,tmp5,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(280)
			left = tmp9;
			HX_STACK_LINE(281)
			Float tmp10 = (Camera->x + Camera->width);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(281)
			int tmp11 = Thickness;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(281)
			Float tmp12 = (tmp10 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(281)
			int tmp13 = ::Math_obj::floor(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(281)
			Float tmp14 = (Camera->y + Thickness);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(281)
			int tmp15 = ::Math_obj::floor(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(281)
			int tmp16 = Thickness;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(281)
			int tmp17 = Camera->height;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(281)
			int tmp18 = (Thickness * (int)2);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(281)
			int tmp19 = (tmp17 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(281)
			::flixel::tile::FlxTileblock tmp20 = ::flixel::tile::FlxTileblock_obj::__new(tmp13,tmp15,tmp16,tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(281)
			right = tmp20;
			HX_STACK_LINE(282)
			Float tmp21 = Camera->x;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(282)
			int tmp22 = ::Math_obj::floor(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(282)
			Float tmp23 = Camera->y;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(282)
			int tmp24 = ::Math_obj::floor(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(282)
			int tmp25 = Camera->width;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(282)
			int tmp26 = Thickness;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(282)
			::flixel::tile::FlxTileblock tmp27 = ::flixel::tile::FlxTileblock_obj::__new(tmp22,tmp24,tmp25,tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(282)
			top = tmp27;
			HX_STACK_LINE(283)
			Float tmp28 = Camera->x;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(283)
			int tmp29 = ::Math_obj::floor(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(283)
			int tmp30 = (Camera->height - Thickness);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(283)
			int tmp31 = Camera->width;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(283)
			int tmp32 = Thickness;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(283)
			::flixel::tile::FlxTileblock tmp33 = ::flixel::tile::FlxTileblock_obj::__new(tmp29,tmp30,tmp31,tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(283)
			bottom = tmp33;
			HX_STACK_LINE(285)
			bool tmp34 = AdjustWorldBounds;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(285)
			if ((tmp34)){
				HX_STACK_LINE(287)
				::flixel::math::FlxRect tmp35 = ::flixel::FlxG_obj::worldBounds;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(287)
				::flixel::math::FlxRect _this = tmp35;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(287)
				_this->x = Camera->x;
				HX_STACK_LINE(287)
				_this->y = Camera->y;
				HX_STACK_LINE(287)
				_this->width = Camera->width;
				HX_STACK_LINE(287)
				_this->height = Camera->height;
				HX_STACK_LINE(287)
				_this;
			}
		}
		HX_STACK_LINE(291)
		::flixel::group::FlxTypedGroup tmp1 = ::flixel::group::FlxTypedGroup_obj::__new(null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(291)
		::flixel::group::FlxTypedGroup result = tmp1;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(293)
		::flixel::tile::FlxTileblock tmp2 = left;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(293)
		result->add(tmp2);
		HX_STACK_LINE(294)
		::flixel::tile::FlxTileblock tmp3 = right;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(294)
		result->add(tmp3);
		HX_STACK_LINE(295)
		::flixel::tile::FlxTileblock tmp4 = top;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(295)
		result->add(tmp4);
		HX_STACK_LINE(296)
		::flixel::tile::FlxTileblock tmp5 = bottom;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(296)
		result->add(tmp5);
		HX_STACK_LINE(298)
		::flixel::group::FlxTypedGroup tmp6 = result;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(298)
		return tmp6;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxCollision_obj,createCameraWall,return )


FlxCollision_obj::FlxCollision_obj()
{
}

bool FlxCollision_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"pointA") ) { outValue = pointA; return true;  }
		if (HX_FIELD_EQ(inName,"pointB") ) { outValue = pointB; return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"centerA") ) { outValue = centerA; return true;  }
		if (HX_FIELD_EQ(inName,"centerB") ) { outValue = centerB; return true;  }
		if (HX_FIELD_EQ(inName,"matrixA") ) { outValue = matrixA; return true;  }
		if (HX_FIELD_EQ(inName,"matrixB") ) { outValue = matrixB; return true;  }
		if (HX_FIELD_EQ(inName,"boundsA") ) { outValue = boundsA; return true;  }
		if (HX_FIELD_EQ(inName,"boundsB") ) { outValue = boundsB; return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"intersect") ) { outValue = intersect; return true;  }
		if (HX_FIELD_EQ(inName,"flashRect") ) { outValue = flashRect; return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"testMatrix") ) { outValue = testMatrix; return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"createCameraWall") ) { outValue = createCameraWall_dyn(); return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"pixelPerfectCheck") ) { outValue = pixelPerfectCheck_dyn(); return true;  }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"pixelPerfectPointCheck") ) { outValue = pixelPerfectPointCheck_dyn(); return true;  }
	}
	return false;
}

bool FlxCollision_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"pointA") ) { pointA=ioValue.Cast< ::flixel::math::FlxVector >(); return true; }
		if (HX_FIELD_EQ(inName,"pointB") ) { pointB=ioValue.Cast< ::flixel::math::FlxVector >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"centerA") ) { centerA=ioValue.Cast< ::flixel::math::FlxVector >(); return true; }
		if (HX_FIELD_EQ(inName,"centerB") ) { centerB=ioValue.Cast< ::flixel::math::FlxVector >(); return true; }
		if (HX_FIELD_EQ(inName,"matrixA") ) { matrixA=ioValue.Cast< ::flixel::math::FlxMatrix >(); return true; }
		if (HX_FIELD_EQ(inName,"matrixB") ) { matrixB=ioValue.Cast< ::flixel::math::FlxMatrix >(); return true; }
		if (HX_FIELD_EQ(inName,"boundsA") ) { boundsA=ioValue.Cast< ::flixel::math::FlxRect >(); return true; }
		if (HX_FIELD_EQ(inName,"boundsB") ) { boundsB=ioValue.Cast< ::flixel::math::FlxRect >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"intersect") ) { intersect=ioValue.Cast< ::flixel::math::FlxRect >(); return true; }
		if (HX_FIELD_EQ(inName,"flashRect") ) { flashRect=ioValue.Cast< ::openfl::_legacy::geom::Rectangle >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"testMatrix") ) { testMatrix=ioValue.Cast< ::flixel::math::FlxMatrix >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::flixel::math::FlxVector*/ ,(void *) &FlxCollision_obj::pointA,HX_HCSTRING("pointA","\xf1","\x11","\x2e","\xf7")},
	{hx::fsObject /*::flixel::math::FlxVector*/ ,(void *) &FlxCollision_obj::pointB,HX_HCSTRING("pointB","\xf2","\x11","\x2e","\xf7")},
	{hx::fsObject /*::flixel::math::FlxVector*/ ,(void *) &FlxCollision_obj::centerA,HX_HCSTRING("centerA","\xcc","\xf4","\xe5","\x19")},
	{hx::fsObject /*::flixel::math::FlxVector*/ ,(void *) &FlxCollision_obj::centerB,HX_HCSTRING("centerB","\xcd","\xf4","\xe5","\x19")},
	{hx::fsObject /*::flixel::math::FlxMatrix*/ ,(void *) &FlxCollision_obj::matrixA,HX_HCSTRING("matrixA","\xe0","\x42","\x67","\x93")},
	{hx::fsObject /*::flixel::math::FlxMatrix*/ ,(void *) &FlxCollision_obj::matrixB,HX_HCSTRING("matrixB","\xe1","\x42","\x67","\x93")},
	{hx::fsObject /*::flixel::math::FlxMatrix*/ ,(void *) &FlxCollision_obj::testMatrix,HX_HCSTRING("testMatrix","\x33","\x7c","\xbc","\xd4")},
	{hx::fsObject /*::flixel::math::FlxRect*/ ,(void *) &FlxCollision_obj::boundsA,HX_HCSTRING("boundsA","\x2c","\x20","\xb8","\xf3")},
	{hx::fsObject /*::flixel::math::FlxRect*/ ,(void *) &FlxCollision_obj::boundsB,HX_HCSTRING("boundsB","\x2d","\x20","\xb8","\xf3")},
	{hx::fsObject /*::flixel::math::FlxRect*/ ,(void *) &FlxCollision_obj::intersect,HX_HCSTRING("intersect","\xdf","\x00","\x75","\x42")},
	{hx::fsObject /*::openfl::_legacy::geom::Rectangle*/ ,(void *) &FlxCollision_obj::flashRect,HX_HCSTRING("flashRect","\xf4","\x46","\x51","\x02")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxCollision_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxCollision_obj::pointA,"pointA");
	HX_MARK_MEMBER_NAME(FlxCollision_obj::pointB,"pointB");
	HX_MARK_MEMBER_NAME(FlxCollision_obj::centerA,"centerA");
	HX_MARK_MEMBER_NAME(FlxCollision_obj::centerB,"centerB");
	HX_MARK_MEMBER_NAME(FlxCollision_obj::matrixA,"matrixA");
	HX_MARK_MEMBER_NAME(FlxCollision_obj::matrixB,"matrixB");
	HX_MARK_MEMBER_NAME(FlxCollision_obj::testMatrix,"testMatrix");
	HX_MARK_MEMBER_NAME(FlxCollision_obj::boundsA,"boundsA");
	HX_MARK_MEMBER_NAME(FlxCollision_obj::boundsB,"boundsB");
	HX_MARK_MEMBER_NAME(FlxCollision_obj::intersect,"intersect");
	HX_MARK_MEMBER_NAME(FlxCollision_obj::flashRect,"flashRect");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxCollision_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxCollision_obj::pointA,"pointA");
	HX_VISIT_MEMBER_NAME(FlxCollision_obj::pointB,"pointB");
	HX_VISIT_MEMBER_NAME(FlxCollision_obj::centerA,"centerA");
	HX_VISIT_MEMBER_NAME(FlxCollision_obj::centerB,"centerB");
	HX_VISIT_MEMBER_NAME(FlxCollision_obj::matrixA,"matrixA");
	HX_VISIT_MEMBER_NAME(FlxCollision_obj::matrixB,"matrixB");
	HX_VISIT_MEMBER_NAME(FlxCollision_obj::testMatrix,"testMatrix");
	HX_VISIT_MEMBER_NAME(FlxCollision_obj::boundsA,"boundsA");
	HX_VISIT_MEMBER_NAME(FlxCollision_obj::boundsB,"boundsB");
	HX_VISIT_MEMBER_NAME(FlxCollision_obj::intersect,"intersect");
	HX_VISIT_MEMBER_NAME(FlxCollision_obj::flashRect,"flashRect");
};

#endif

hx::Class FlxCollision_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("pointA","\xf1","\x11","\x2e","\xf7"),
	HX_HCSTRING("pointB","\xf2","\x11","\x2e","\xf7"),
	HX_HCSTRING("centerA","\xcc","\xf4","\xe5","\x19"),
	HX_HCSTRING("centerB","\xcd","\xf4","\xe5","\x19"),
	HX_HCSTRING("matrixA","\xe0","\x42","\x67","\x93"),
	HX_HCSTRING("matrixB","\xe1","\x42","\x67","\x93"),
	HX_HCSTRING("testMatrix","\x33","\x7c","\xbc","\xd4"),
	HX_HCSTRING("boundsA","\x2c","\x20","\xb8","\xf3"),
	HX_HCSTRING("boundsB","\x2d","\x20","\xb8","\xf3"),
	HX_HCSTRING("intersect","\xdf","\x00","\x75","\x42"),
	HX_HCSTRING("flashRect","\xf4","\x46","\x51","\x02"),
	HX_HCSTRING("pixelPerfectCheck","\x21","\x18","\xe0","\xff"),
	HX_HCSTRING("pixelPerfectPointCheck","\x5f","\xf0","\x41","\xdf"),
	HX_HCSTRING("createCameraWall","\x6b","\x04","\x3e","\xea"),
	::String(null()) };

void FlxCollision_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.util.FlxCollision","\x1a","\xc3","\x9f","\xaf");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxCollision_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxCollision_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< FlxCollision_obj >;
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

void FlxCollision_obj::__boot()
{
	pointA= ::flixel::math::FlxVector_obj::__new(null(),null());
	pointB= ::flixel::math::FlxVector_obj::__new(null(),null());
	centerA= ::flixel::math::FlxVector_obj::__new(null(),null());
	centerB= ::flixel::math::FlxVector_obj::__new(null(),null());
	matrixA= ::flixel::math::FlxMatrix_obj::__new(null(),null(),null(),null(),null(),null());
	matrixB= ::flixel::math::FlxMatrix_obj::__new(null(),null(),null(),null(),null(),null());
	testMatrix= ::flixel::math::FlxMatrix_obj::__new(null(),null(),null(),null(),null(),null());
	boundsA= ::flixel::math::FlxRect_obj::__new(null(),null(),null(),null());
	boundsB= ::flixel::math::FlxRect_obj::__new(null(),null(),null(),null());
	intersect= ::flixel::math::FlxRect_obj::__new(null(),null(),null(),null());
	flashRect= ::openfl::_legacy::geom::Rectangle_obj::__new(null(),null(),null(),null());
}

} // end namespace flixel
} // end namespace util
