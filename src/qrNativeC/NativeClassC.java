package qrNativeC;

import qrNativeC.NativeInclude;
import db.*;

public class NativeClassC {
	/* */
	public NativeClassC(){
		System.out.println("This is constructor for NativeC class");
	}
	/* make VM aware of function defined external */
	public native db.Character_capacities getVerQr(int version, int level);
	public native void printdata(int x, int y);
	public native String getLine(String text);
	/* Description function C, this main is static, only use in this class */
	static public void main(String[] args){
		NativeClassC Func_print = new NativeClassC();
		/* call function from C */
		Func_print.printdata(qrNativeC.NativeInclude.VERSION_40, qrNativeC.NativeInclude.LEVEL_M);
	}
	/* static initial, load native library (libNativeInC.so) containing the implementation of functions native method */
	static {
		System.loadLibrary("NativeInC");
	}
}
