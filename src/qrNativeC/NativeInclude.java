package qrNativeC;

public class NativeInclude {
	/**
	 * FOR LEVEL QR CODE
	 */
	public static final int LEVEL_L = 0x0100;
	public static final int LEVEL_M = 0x0200;
	public static final int LEVEL_Q = 0x0300;
	public static final int LEVEL_H = 0x0400;
	/**
	 * FOR VERSION QR CODE
	 */
	public static final int VERSION_1 = 0x0001;
	public static final int VERSION_2 = 0x0002;
	public static final int VERSION_3 = 0x0003;
	public static final int VERSION_4 = 0x0004;
	public static final int VERSION_5 = 0x0005;
	public static final int VERSION_6 = 0x0006;
	public static final int VERSION_7 = 0x0007;
	public static final int VERSION_8 = 0x0008;
	public static final int VERSION_9 = 0x0009;
	public static final int VERSION_10 = 0x000A;
	public static final int VERSION_11 = 0x000B;
	public static final int VERSION_12 = 0x000C;
	public static final int VERSION_13 = 0x000D;
	public static final int VERSION_14 = 0x000E;
	public static final int VERSION_15 = 0x000F;
	public static final int VERSION_16 = 0x0010;
	public static final int VERSION_17 = 0x0011;
	public static final int VERSION_18 = 0x0012;
	public static final int VERSION_19 = 0x0013;
	public static final int VERSION_20 = 0x0014;
	public static final int VERSION_21 = 0x0015;
	public static final int VERSION_22 = 0x0016;
	public static final int VERSION_23 = 0x0017;
	public static final int VERSION_24 = 0x0018;
	public static final int VERSION_25 = 0x0019;
	public static final int VERSION_26 = 0x001A;
	public static final int VERSION_27 = 0x001B;
	public static final int VERSION_28 = 0x001C;
	public static final int VERSION_29 = 0x001D;
	public static final int VERSION_30 = 0x001E;
	public static final int VERSION_31 = 0x001F;
	public static final int VERSION_32 = 0x0020;
	public static final int VERSION_33 = 0x0021;
	public static final int VERSION_34 = 0x0022;
	public static final int VERSION_35 = 0x0023;
	public static final int VERSION_36 = 0x0024;
	public static final int VERSION_37 = 0x0025;
	public static final int VERSION_38 = 0x0026;
	public static final int VERSION_39 = 0x0027;
	public static final int VERSION_40 = 0x0028;
	/**
	 * FOR ENCODE MODE
	 */
	public static final int NUMERIC_MODE = 0b0001;
	public static final int ALPHANUMERIC_MODE = 0b0010;
	public static final int	BYTE_MODE = 0b0100;
	public static final int KANJI_MOE = 0b1000;
	/**
	 * FOR CHARACTER_TYPE
	 */
	public static final int UTF8 = 0b0001;
	public static final int ISO_8859_1 = 0b0010;
	public static final int SHIFT_JIS = 0b0100;
	/**
	 * FOR QR_DATA_TYPE
	 */
	public static final int CHARACTER_CAPACITIES = 1;
	public static final int ERROR_CORRECTION_CW = 2;
	/**
	 * FOR LOGIC FUNCTION
	 */
	public static final boolean PASSES = true;
	public static final boolean FAILS = false;
	public static final boolean SUCCESS = true;
	public static final boolean FAILURE = false;
	/**
	 * http://www.javapractices.com/topic/TopicAction.do?Id=2
	 * The caller references the constants using <tt>NativeInclude.EMPTY_STRING</tt>,
	 * and so on. Thus, the caller should be prevented from constructing objects of
	 * this class, by declaring this private constructor.
	 * */
	private NativeInclude(){
		//this prevents even the native class from
		//calling this ctor as well :
		throw new AssertionError();
		}	
}
